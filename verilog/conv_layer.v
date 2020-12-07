

module conv_layer(
    input clk,

    output [DATA_SIZE-1:0] out_data,
    output [15:0] out_index [2:0],
    output reg output_valid,

    input want_write_act,
    input want_write_weights,
    input [DATA_SIZE-1:0] write_data,
    
    input in_index3,
    input in_index2,
    input in_index1,
    input in_index0,
    input compute
);
    parameter NAME = "CONV_LAYER_DEFAULT_NAME";
    parameter NUM_INPUTS = 1;
    parameter INPUT_DIM = 5;
    parameter NUM_OUTPUTS = 1;
    parameter KERNEL_DIM = 3;
    parameter DATA_SIZE = 64;
    parameter OUTPUT_DIM = INPUT_DIM - KERNEL_DIM + 1; 

    reg weight_write = 0;

    act_memory
        #(
            .NAME({NAME, " ACT_MEM"}),
            .DIM(INPUT_DIM), 
            .DATA_SIZE(DATA_SIZE),
            .ENTRY_NUM(NUM_INPUTS)
        )
        activation(
            .out_data(act_out_data),
            .in_data(write_data),
            .write(want_write_act),
            .index_entry(in_index2),
            .index_y(in_index1),
            .index_x(in_index0),
            .read_index_entry(act_read_index[2]),
            .read_index_y(act_read_index[1]),
            .read_index_x(act_read_index[0]),
            .clk(clk)
    );

    weight_memory 
        #(
            .NAME({NAME, " WEIGHT_MEM"}),
            .NUM_INPUTS(NUM_INPUTS), 
            .NUM_OUTPUTS(NUM_OUTPUTS),
            .DIM(KERNEL_DIM),
        )
        weights(
            .clk(clk),
            .out_data(weights_out_data),
            .in_data(write_data),
            .index_in(in_index3),
            .index_out(in_index2),
            .index_k_y(in_index1),
            .index_k_x(in_index0),
            .read_index_in(weight_read_index[3]),
            .read_index_out(weight_read_index[2]),
            .read_index_y(weight_read_index[1]),
            .read_index_x(weight_read_index[0]),
            .write(weight_write)
    );
    act_memory 
        #(
            .NAME({NAME, " OUT_MEM"}),
            .DIM(INPUT_DIM), 
            .DATA_SIZE(DATA_SIZE),
            .ENTRY_NUM(NUM_INPUTS)
        )
        out_memory(
            .out_data(outmem_out_data),
            .in_data(outmem_write_data),
            .write(outmem_want_write),
            .index_entry(outmem_index[2]),
            .index_y(outmem_index[1]),
            .index_x(outmem_index[0]),
            .clk(clk)
    );

    reg [DATA_SIZE-1:0] act_out_data;
    reg [DATA_SIZE-1:0] weights_out_data;
    reg [DATA_SIZE-1:0] outmem_out_data;
    reg [DATA_SIZE-1:0] outmem_write_data;
    reg [15:0] weight_read_index [3:0];
    reg [15:0] act_read_index [2:0];
    reg [15:0] outmem_index [2:0];
    reg outmem_want_write = 0;
 

    reg state = 0;

    always @(negedge clk)begin
            weight_write = 0;
    end

    real temp;

    always @(posedge clk)begin
        if (want_write_weights) begin
            //$display("%s: = [%d][%d][%d][%d] = %f", NAME, in_index3, in_index2, in_index1, in_index0, $bitstoreal(write_data));
            weight_write = 1;
        end

        if (compute) begin
            
            if (weight_read_index[1]==(KERNEL_DIM-1) && weight_read_index[0]==(KERNEL_DIM-1)) begin
                outmem_want_write = 1;
            end
            else begin
                outmem_want_write = 0;
                if (weight_read_index[1]==0 && weight_read_index[0]==0) begin
                    outmem_write_data = 0;
                end
            end

            case (state)
                0: begin
                    weight_read_index[3]=0;
                    weight_read_index[2]=0;
                    weight_read_index[1]=0;
                    weight_read_index[0]=0;
                    act_read_index[2]=0;
                    act_read_index[1]=0;
                    act_read_index[0]=0;
                    outmem_index[0] = 0;
                    outmem_index[1] = 0;
                    state = 2;
                end
                1: begin
                    //weight index update
                    if (weight_read_index[0]<KERNEL_DIM-1) begin
                        weight_read_index[0] = weight_read_index[0] + 1;
                    end
                    else begin
                        weight_read_index[0] = 0;
                        weight_read_index[1] = weight_read_index[1] + 1;
                    end

                    if (weight_read_index[1]==KERNEL_DIM) begin
                        weight_read_index[1] = 0;
                        outmem_index[0] = outmem_index[0] + 1;
                    end

                    //act index update
                    if (outmem_index[0]==(OUTPUT_DIM)) begin
                        outmem_index[0] = 0;
                        outmem_index[1] = outmem_index[1] + 1;
                    end
                    if (outmem_index[1]==(OUTPUT_DIM)) begin
                        outmem_index[1] = 0;
                        weight_read_index[2] = weight_read_index[2] + 1;
                    end
                    //act index update
                    act_read_index[1] = outmem_index[1] + weight_read_index[1];
                    act_read_index[0] = outmem_index[0] + weight_read_index[0];
                    

                    //output neuron update
                    if (weight_read_index[2]==(NUM_OUTPUTS)) begin
                        weight_read_index[2] = 0;
                        weight_read_index[3] = weight_read_index[3] + 1;
                        act_read_index[2] = act_read_index[2] + 1;
                    end
                    outmem_index[2] = weight_read_index[2];
                    
                    //input neuron update
                    if (weight_read_index[3]==(NUM_INPUTS)) begin
                        weight_read_index[3] = 0;
                        act_read_index[2] = 0;
                    end
                    act_read_index[2] = weight_read_index[3];

                    state = 2;


                end
                2: begin
                    outmem_write_data = $realtobits(
                        $bitstoreal(outmem_write_data) + $bitstoreal(weights_out_data) * $bitstoreal(act_out_data));
                    $display("%s: STATE :", NAME, state);
                    $display("%s: weight_read_index[%d][%d][%d][%d]", NAME, weight_read_index[3], weight_read_index[2], weight_read_index[1], weight_read_index[0]);
                    $display("%s: act_read_index[%d][%d][%d]", NAME, act_read_index[2], act_read_index[1], act_read_index[0]);
                    $display("%s: outmem_read_index[%d][%d][%d]", NAME, outmem_index[2], outmem_index[1], outmem_index[0]);

                    $display("%s: ACT READ %f:", NAME, $bitstoreal(act_out_data));
                    $display("%s: WEIGHT READ %f:", NAME, $bitstoreal(weights_out_data));
                    $display("%s: COMPUTE %f:", NAME, $bitstoreal(outmem_write_data));
                    state = 1;
                end
                3: begin
                    output_valid = 1;
                    state = 0;
                end 
             

            endcase
            $display("%s: STATE : %d", NAME, state);




        end


    end



endmodule