
module top(
    input clk,

    input [DATA_SIZE-1:0] input_data,
    input [15:0] input_index [3:0],
    
    input input_write_act,
    input input_write_weights,
    input input_write_bias,

    input compute,
    input reset
);
    /* verilator lint_off UNDRIVEN */
    /* verilator lint_off UNUSED */
    localparam DATA_SIZE = 64;

    reg [DATA_SIZE-1:0] out_data;
    reg [15:0] L1_to_L2_out_index [2:0];

    wire scheduler_2_input_start;
    wire input_2_scheduler_done;

    scheduler scheduler(
        .clk(clk),
        .start(compute),
        .reset(reset),
        .input_compute_start(scheduler_2_input_start),
        .input_compute_done(input_2_scheduler_done)
    );

    conv_layer
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

            .want_write_act(input_write_act),
            .want_write_weights(input_write_weights),
            .want_write_bias(input_write_bias),
            .write_data(input_data),
            .in_index3(input_index[3]),
            .in_index2(input_index[2]),
            .in_index1(input_index[1]),
            .in_index0(input_index[0]),
            .compute(scheduler_2_input_start),
            .read_outmem_index(L1_to_L2_out_index),
            .output_valid(input_2_scheduler_done)
    );

    // always @(posedge clk)begin
    //         if (output_valid) begin
    //             $finish();
    //         end
            //$display("TOP: = [%d][%d][%d][%d] = %f", input_index[3], input_index[2], input_index[1], input_index[0], $bitstoreal(input_data));
        
    //end
    



endmodule