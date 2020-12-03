
module top(
    input clk,

    input [DATA_SIZE-1:0] input_data,
    input input_index3,
    input input_index2,
    input input_index1,
    input input_index0,
    
    input input_write_act,
    input input_write_weights
);
    /* verilator lint_off UNDRIVEN */
    /* verilator lint_off UNUSED */
    localparam DATA_SIZE = 64;

    reg [DATA_SIZE-1:0] out_data;
    reg output_valid;
    reg [15:0] L1_to_L2_out_index [2:0];

    input_layer
        #(
            .NAME("INPUT LAYER"),
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
            .want_write_act(input_write_act),
            .want_write_weights(input_write_weights),
            .write_data(input_data),
            .in_index3(input_index3),
            .in_index2(input_index2),
            .in_index1(input_index1),
            .in_index0(input_index0)           
    );

    always @(posedge clk)begin
        if (input_write_weights) begin
            $display("TOP: = [%d][%d][%d][%d] = %f", input_index3, input_index2, input_index1, input_index0, $bitstoreal(input_data));
        end
    end
    



endmodule