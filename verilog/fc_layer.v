

module fc_layer #(
        parameter NAME = "FC_LAYER_DEFAULT_NAME",
        parameter NUM_INPUTS = 800,
        parameter INPUT_DIM = 5,
        parameter NUM_OUTPUTS = 10,
        parameter DATA_SIZE = 64,

    input clk,
    output [DATA_SIZE-1:0] outmem_out_data,

    input want_write_act,
    input want_write_weights,
    input want_write_bias,
    input [DATA_SIZE-1:0] write_data,
    input [DATA_SIZE-1:0] write_data_act,


    
    input [15:0] in_index3,
    input [15:0] in_index2,
    input [15:0] in_index1,
    input [15:0] in_index0,
    input [15:0] act_index2,
    input [15:0] act_index1,
    input [15:0] act_index0,
    input compute,

    input [15:0] read_outmem_index [2:0],

    output reg output_valid
);

    parameter DEBUG = 0;
    parameter DEBUG_WEIGHT = 0;
    parameter DEBUG_ACT = 0;
    parameter DEBUG_OUTMEM = 0;

    act_memory
        #(
            .DEBUG(DEBUG_ACT),
            .NAME({NAME, " ACT_MEM"}),
            .DIM(INPUT_DIM), 
            .DATA_SIZE(DATA_SIZE),
            .ENTRY_NUM(NUM_INPUTS)
        )
        activation(
            .out_data(act_out_data),
            .in_data(write_data_act),
            .write(want_write_act),
            .index_entry(act_index2),
            .index_y(act_index1),
            .index_x(act_index0),
            .read_index_entry(act_read_index[2]),
            .read_index_y(act_read_index[1]),
            .read_index_x(act_read_index[0]),
            .clk(clk)
    );

    weight_memory 
        #(
            .DEBUG(DEBUG_WEIGHT),
            .NAME({NAME, " WEIGHT_MEM"}),
            .NUM_INPUTS(NUM_INPUTS), 
            .NUM_OUTPUTS(NUM_OUTPUTS),
            .DIM(KERNEL_DIM),
        )
        weights(
            .clk(clk),
            .out_data_weight(weights_out_data),
            .out_data_bias(bias_out_data),

            .weight_write(want_write_weights),
            .bias_write(want_write_bias),

            .in_data(write_data),
            .index_in(in_index3),
            .index_out(in_index2),
            .index_k_y(in_index1),
            .index_k_x(in_index0),

            .read_index_in(weight_read_index[3]),
            .read_index_out(weight_read_index[2]),
            .read_index_y(weight_read_index[1]),
            .read_index_x(weight_read_index[0]),
            .read_index_bias(weight_read_index[2])

    );

    act_memory 
        #(
            .DEBUG(DEBUG_OUTMEM),
            .NAME({NAME, " OUT_MEM"}),
            .DIM(OUTPUT_DIM), 
            .DATA_SIZE(DATA_SIZE),
            .ENTRY_NUM(NUM_OUTPUTS)
        )
        out_memory(
            .out_data(outmem_out_data),
            .in_data(outmem_write_data),
            .write(outmem_want_write),
            .index_entry(outmem_index[2]),
            .index_y(outmem_index[1]),
            .index_x(outmem_index[0]),
            .read_index_entry(read_outmem_index[2]),
            .read_index_y(read_outmem_index[1]),
            .read_index_x(read_outmem_index[0]),
            .clk(clk)
    );

    reg [DATA_SIZE-1:0] act_out_data;
    reg [DATA_SIZE-1:0] weights_out_data;
    reg [DATA_SIZE-1:0] bias_out_data;
    reg [DATA_SIZE-1:0] outmem_write_data;

    reg [15:0] weight_read_index [3:0];
    //reg [15:0] bias_read_index;
    reg [15:0] act_read_index [2:0];
    reg [15:0] outmem_index [2:0];
    reg outmem_want_write = 0;
 

    reg [15:0] state = 0;
    always @(posedge clk)begin
        if (DEBUG && (state !=0 && state != 4)) begin
        end
        case (state)
            0: begin
                if(compute) begin
                    outmem_write_data=0;
                    outmem_want_write=0;
                    weight_read_index[3]=0;
                    weight_read_index[2]=0;
                    weight_read_index[1]=0;
                    weight_read_index[0]=0;
                    act_read_index[2]=0;
                    act_read_index[1]=0;
                    act_read_index[0]=0;
                    outmem_index[0] = 0;
                    outmem_index[1] = 0;
                    outmem_index[2] = 0;
                    state = 2;
                end
            end
            1: begin
                outmem_want_write = 0;
                //weight index update

                weight_read_index[0] = weight_read_index[0] + 1;

                if (weight_read_index[0]==KERNEL_DIM) begin
                    weight_read_index[0] = 0;
                    weight_read_index[1] = weight_read_index[1] + 1;
                end

                if (weight_read_index[1]==KERNEL_DIM) begin
                    weight_read_index[1] = 0;
                    weight_read_index[3] = weight_read_index[3] + 1;
                end

                //input neuron update
                if (weight_read_index[3]==(NUM_INPUTS)) begin
                    weight_read_index[3] = 0;
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

                                                        
                //output neuron update
                if (weight_read_index[2]==(NUM_OUTPUTS)) begin
                    weight_read_index[2] = 0;
                    //weight_read_index[3] = weight_read_index[3] + 1;
                    //act_read_index[2] = act_read_index[2] + 1;
                end

                act_read_index[1] = outmem_index[1] + weight_read_index[1];
                act_read_index[0] = outmem_index[0] + weight_read_index[0];
                act_read_index[2] = weight_read_index[3];
                outmem_index[2] = weight_read_index[2];


                state = 2;


            end
            2: begin
                if (weight_read_index[1]==0 && weight_read_index[0]==0 && weight_read_index[3]==0) begin
                    outmem_write_data = 0;
                end
                
                outmem_write_data = $realtobits(
                    $bitstoreal(outmem_write_data) + $bitstoreal(weights_out_data) * $bitstoreal(act_out_data)
                    );


                if (weight_read_index[1]==(KERNEL_DIM-1) && 
                    weight_read_index[0]==(KERNEL_DIM-1) && 
                    weight_read_index[3]==(NUM_INPUTS-1)
                    ) begin
                    state = 3;
                end
                else begin
                    state = 1;  
                end
                
                if (DEBUG) begin
                    $display("*****");
                    $display("%s: weight_read_index[%d][%d][%d][%d]", NAME, weight_read_index[3], weight_read_index[2], weight_read_index[1], weight_read_index[0]);
                    $display("%s: act_read_index[%d][%d][%d]", NAME, act_read_index[2], act_read_index[1], act_read_index[0]);
                    $display("%s: outmem_read_index[%d][%d][%d]", NAME, outmem_index[2], outmem_index[1], outmem_index[0]);
                    $display("%s: ACT READ %f:", NAME, $bitstoreal(act_out_data));
                    $display("%s: WEIGHT READ %f:", NAME, $bitstoreal(weights_out_data));
                    $display("%s: COMPUTE %f:", NAME, $bitstoreal(outmem_write_data));
                end

            end
            3: begin
                //add bias
                outmem_write_data = $realtobits(
                    $bitstoreal(outmem_write_data) + $bitstoreal(bias_out_data)
                    );
                //$display("%s: COMPUTE %f:", NAME, $bitstoreal(outmem_write_data));

                //relu done inplace
                if ($bitstoreal(outmem_write_data) <= 0) begin
                    outmem_write_data = 0.0;
                end

                outmem_want_write=1;

                if (DEBUG) begin
                    $display("%s: bias_read_index[%d]", NAME, weight_read_index[2]);
                    $display("%s: BIAS READ %f:", NAME, $bitstoreal(bias_out_data));
                end

                if (outmem_index[0] == OUTPUT_DIM-1 && outmem_index[1] == OUTPUT_DIM-1 && outmem_index[2] == NUM_OUTPUTS-1) begin
                    state = 4;
                end
                else begin
                    state = 1;
                end

            end
                
            4: begin
                output_valid = 1;
                outmem_want_write=0;
                if(compute)begin
                    state = 0;
                end
            end 
            

        endcase
      


    end



endmodule