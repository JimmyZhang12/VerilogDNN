
module input_layer(
    input clk,
    input compute,

    output [DATA_SIZE-1:0] out_data,
    output [15:0] out_index [2:0],
    output output_valid,

    input want_write_act,
    input want_write_weights,
    input [DATA_SIZE-1:0] write_data,
    
    input in_index3,
    input in_index2,
    input in_index1,
    input in_index0
);
    parameter NAME = "CONV_LAYER_DEFAULT_NAME";
    parameter NUM_INPUTS = 1;
    parameter INPUT_DIM = 5;
    parameter NUM_OUTPUTS = 1;
    parameter KERNEL_DIM = 3;
    parameter DATA_SIZE = 64;

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
            .out_data(weights_out_data),
            .in_data(write_data),
            .write(want_write_weights),
            .index_in(in_index3),
            .index_out(in_index2),
            .index_k_y(in_index1),
            .index_k_x(in_index0),
            .clk(clk)
    );


    reg [DATA_SIZE-1:0] act_out_data;
    reg [DATA_SIZE-1:0] weights_out_data;

    always @(posedge clk)begin
        if (want_write_weights) begin
            $display("%s: = [%d][%d][%d][%d] = %f", NAME, in_index3, in_index2, in_index1, in_index0, $bitstoreal(write_data));
        end
        if (compute) begin
            $display("%s COMPUTE", NAME);

        end

    end
endmodule