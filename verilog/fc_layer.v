

module fc_layer #(
        parameter NAME = "FC_LAYER_DEFAULT_NAME",
        parameter NUM_INPUTS = 800,
        parameter NUM_OUTPUTS = 10,
        parameter DATA_SIZE = 64)(
    input clk,
    output [DATA_SIZE-1:0] outmem_out_data,

    input want_write_act,
    input want_write_weights,
    input want_write_bias,
    input [DATA_SIZE-1:0] write_data,
    input [DATA_SIZE-1:0] write_data_act,


    input [15:0] in_index1,
    input [15:0] in_index0,

    input [15:0] act_index0,
    input compute,

    input [15:0] read_outmem_index,

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
            .DIM(NUM_INPUTS), 
            .DATA_SIZE(DATA_SIZE),
            .ENTRY_NUM(1)
        )
        activation(
            .out_data(act_out_data),
            .in_data(write_data_act),
            .write(want_write_act),
            .index_entry(),
            .index_y(),
            .index_x(act_index0),
            .read_index_entry(),
            .read_index_y(),
            .read_index_x(act_read_index),
            .clk(clk)
    );

    weight_memory 
        #(
            .DEBUG(DEBUG_WEIGHT),
            .NAME({NAME, " WEIGHT_MEM"}),
            .NUM_INPUTS(1), 
            .NUM_OUTPUTS(1),
            .DIM(NUM_INPUTS),
        )
        weights(
            .clk(clk),
            .out_data_weight(weights_out_data),
            .out_data_bias(bias_out_data),

            .weight_write(want_write_weights),
            .bias_write(want_write_bias),

            .in_data(write_data),
            .index_in(),
            .index_out(),
            .index_k_y(in_index1),
            .index_k_x(in_index0),

            .read_index_in(),
            .read_index_out(),
            .read_index_y(weight_read_index[1]),
            .read_index_x(weight_read_index[0]),
            .read_index_bias(weight_read_index[1])

    );

    act_memory 
        #(
            .DEBUG(DEBUG_OUTMEM),
            .NAME({NAME, " OUT_MEM"}),
            .DIM(NUM_OUTPUTS), 
            .DATA_SIZE(DATA_SIZE),
            .ENTRY_NUM(0)
        )
        out_memory(
            .out_data(outmem_out_data),
            .in_data(outmem_write_data),
            .write(outmem_want_write),
            .index_entry(),
            .index_y(),
            .index_x(outmem_index),
            .read_index_entry(),
            .read_index_y(),
            .read_index_x(read_outmem_index),
            .clk(clk)
    );

    reg [DATA_SIZE-1:0] act_out_data;
    reg [DATA_SIZE-1:0] weights_out_data;
    reg [DATA_SIZE-1:0] bias_out_data;
    reg [DATA_SIZE-1:0] outmem_write_data;

    reg [15:0] weight_read_index [1:0];
    //reg [15:0] bias_read_index;
    reg [15:0] act_read_index;
    reg [15:0] outmem_index;
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
                        weight_read_index[1]=0;
                        weight_read_index[0]=0;
                        act_read_index=0;
                        outmem_index = 0;
                        state = 2;
                    end
                end
                1: begin
                    outmem_want_write = 0;
                    weight_read_index[0] = weight_read_index[0] + 1;

                    if (weight_read_index[0]==NUM_INPUTS) begin
                        weight_read_index[0] = 0;
                        weight_read_index[1] = weight_read_index[1] + 1;
                    end

                    if (weight_read_index[1]==NUM_OUTPUTS) begin
                        weight_read_index[1] = 0;
                    end

                    act_read_index = weight_read_index[0];
                    outmem_index = weight_read_index[1];

                    state = 2;
                end
                2: begin
                    if (weight_read_index[0]==0) begin
                        outmem_write_data = 0;
                    end
                    
                    outmem_write_data = $realtobits(
                        $bitstoreal(outmem_write_data) + $bitstoreal(weights_out_data) * $bitstoreal(act_out_data)
                        );


                    if (weight_read_index[0]==(NUM_INPUTS-1)) begin
                        state = 3;
                    end
                    else begin
                        state = 1;  
                    end
                    
                    if (DEBUG) begin
                        $display("*****");
                        $display("%s: weight_read_index[%d][%d]", NAME, weight_read_index[1], weight_read_index[0]);
                        $display("%s: act_read_index[%d]", NAME, act_read_index);
                        $display("%s: outmem_index[%d]", NAME, outmem_index);
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

                    outmem_want_write=1;

                    $display("%d: %f:", outmem_index, $bitstoreal(outmem_write_data));

                    if (DEBUG) begin
                        $display("%s: bias_read_index[%d]", NAME, weight_read_index[1]);
                        $display("%s: BIAS READ %f:", NAME, $bitstoreal(bias_out_data));
                    end

                    if (outmem_index == NUM_OUTPUTS-1) begin
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