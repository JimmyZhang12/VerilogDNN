
module top(
    input [DATA_SIZE-1:0] input_data,
    input [15:0] input_index [2:0],
    input write,
    input clk
);
    /* verilator lint_off UNDRIVEN */
    /* verilator lint_off UNUSED */
    localparam DATA_SIZE = 64;

    reg [DATA_SIZE-1:0] out_data;
    reg output_valid;
    reg [15:0] L1_to_L2_out_index [2:0];

    conv_layer
        #(
            .NUM_INPUTS(1),
            .INPUT_DIM(28),
            .NUM_OUTPUTS(16),
            .KERNEL_DIM(3),
            .DATA_SIZE(DATA_SIZE)
        )
        l1(
            .clk(clk),
            .out_data(out_data),
            .out_index(L1_to_L2_out_index),
            .output_valid(output_valid),
            .want_write(write),
            .write_data(input_data),
            .in_index_act(input_index)
    );

    // always @(posedge clk)begin
    //     localparam [63:0] test = 64'h_3FF61A0BE5109071;
    //     $display("TOP: %f", $bitstoreal(test));

    // end
    



endmodule