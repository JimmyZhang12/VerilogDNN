
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
    parameter DATA_SIZE = 64;
    parameter l1_NUM_INPUT = 1;
    parameter l1_INPUT_DIM = 28;
    parameter l1_NUM_OUTPUT = 16;
    parameter L1_KERNEL_DIM = 3;

    parameter l2_NUM_INPUT = 16;
    parameter l2_INPUT_DIM = 26;
    parameter L2_KERNEL_DIM = 2;



    reg [DATA_SIZE-1:0] l1_outmem_2_l2_inmem_data;

    wire [15:0] scheduler_2_l1_index [2:0];
    wire scheduler_2_l2_inmem_wantwrite;

    wire scheduler_2_input_start;
    wire input_2_scheduler_done;

    scheduler scheduler(
        .clk(clk),
        .start(compute),
        .reset(reset),
        .input_compute_start(scheduler_2_input_start),
        .input_compute_done(input_2_scheduler_done),
        .l1_l2_index(scheduler_2_l1_index),
        .l2_inmem_wantwrite(scheduler_2_l2_inmem_wantwrite)
    );

    conv_layer
        #(
            .NAME("INPUT LAYER"),
            .NUM_INPUTS(l1_NUM_INPUT),
            .INPUT_DIM(l1_INPUT_DIM),
            .NUM_OUTPUTS(l1_NUM_OUTPUT),
            .KERNEL_DIM(L1_KERNEL_DIM),
            .DATA_SIZE(DATA_SIZE)
        )
        l1(
            .clk(clk),
            .outmem_out_data(l1_outmem_2_l2_inmem_data),
            .want_write_act(input_write_act),
            .want_write_weights(input_write_weights),
            .want_write_bias(input_write_bias),
            .write_data(input_data),
            .in_index3(input_index[3]),
            .in_index2(input_index[2]),
            .in_index1(input_index[1]),
            .in_index0(input_index[0]),
            .compute(scheduler_2_input_start),
            .read_outmem_index(scheduler_2_l1_index),
            .output_valid(input_2_scheduler_done)
    );
    max_pool
        #(
            .NAME("MAXPOOL1"),
            .NUM_INPUTS(l2_NUM_INPUT),
            .INPUT_DIM(l2_INPUT_DIM),
            .KERNEL_DIM(L2_KERNEL_DIM),
            .DATA_SIZE(DATA_SIZE),
        )
        l2(
            .clk(clk),
            .inmem_want_write(scheduler_2_l2_inmem_wantwrite),
            .read_data(),
            .inmem_write_data(l1_outmem_2_l2_inmem_data),
            .inmem_index(scheduler_2_l1_index),
            .outmem_index(),
            .output_valid()
    );

    // always @(posedge clk)begin
    //         if (output_valid) begin
    //             $finish();
    //         end
            //$display("TOP: = [%d][%d][%d][%d] = %f", input_index[3], input_index[2], input_index[1], input_index[0], $bitstoreal(input_data));
        
    //end
    



endmodule