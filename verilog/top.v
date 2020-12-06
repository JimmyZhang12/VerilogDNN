
module top(
    input clk,

    input [DATA_SIZE-1:0] input_data,
    input input_index [3:0],
    
    input input_write_act,
    input input_write_weights,
    input compute
);
    /* verilator lint_off UNDRIVEN */
    /* verilator lint_off UNUSED */
    localparam DATA_SIZE = 64;

    reg [DATA_SIZE-1:0] out_data;
    reg output_valid;
    reg [15:0] L1_to_L2_out_index [2:0];

    conv_layer
        #(
            .NAME("INPUT LAYER"),
            .NUM_INPUTS(2),
            .INPUT_DIM(5),
            .NUM_OUTPUTS(2),
            .KERNEL_DIM(3),
            .DATA_SIZE(DATA_SIZE)
        )
        l1(
            .clk(clk),
            .out_data(out_data),
            .out_index(L1_to_L2_out_index),
            .output_valid(output_valid),
            .want_write_act(input_write_act),
            .want_write_weights(input_write_weights),
            .write_data(input_data),
            .in_index3(input_index[3]),
            .in_index2(input_index[2]),
            .in_index1(input_index[1]),
            .in_index0(input_index[0]),
            .compute(compute)
        

    );

    always @(posedge clk)begin
        if (input_write_weights) begin
            $display("TOP: = [%d][%d][%d][%d] = %f", input_index[3], input_index[2], input_index[1], input_index[0], $bitstoreal(input_data));
        end
    end
    



endmodule