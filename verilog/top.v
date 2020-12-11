
module top(
    input clk,

    input [DATA_SIZE-1:0] input_data,
    input [15:0] input_index [3:0],
    
    input input_write_act,
    input input_write_weights,
    input input_write_bias,

    input l3_write_weights,
    input l3_write_bias,

    input l5_write_weights,
    input l5_write_bias,

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

    parameter l3_NUM_INPUT = 16;
    parameter l3_INPUT_DIM = 13;
    parameter l3_NUM_OUTPUT = 32;
    parameter l3_KERNEL_DIM = 3;

    parameter l4_NUM_INPUT = 32;
    parameter l4_INPUT_DIM = 11;
    parameter l4_KERNEL_DIM = 2;

    parameter l5_NUM_INPUT = 800;
    parameter l5_NUM_OUTPUT = 10;

    reg [DATA_SIZE-1:0] l1_outmem_2_l2_inmem_data;
    reg [DATA_SIZE-1:0] l2_outmem_2_l3_inmem_data;
    reg [DATA_SIZE-1:0] l3_outmem_2_l4_inmem_data;
    reg [DATA_SIZE-1:0] l4_outmem_2_l5_inmem_data;

    wire [15:0] scheduler_2_l1l2_index [2:0];
    wire [15:0] scheduler_2_l2l3_index [3:0];
    wire [15:0] scheduler_2_l3l4_index [3:0];
    wire [15:0] scheduler_2_l4_outmem_index [2:0];
    wire [15:0] scheduler_2_l5_inmem_index;
    
    wire scheduler_2_l2_inmem_wantwrite;
    wire scheduler_2_l3_inmem_wantwrite;
    wire scheduler_2_l4_inmem_wantwrite;
    wire scheduler_2_l5_inmem_wantwrite;


    wire scheduler_2_input_start;
    wire input_2_scheduler_done;
    wire l2_compute_start;
    wire l2_compute_done;
    wire l3_compute_start;
    wire l3_compute_done;
    wire l4_compute_start;
    wire l4_compute_done;
    wire l5_compute_start;
    wire l5_compute_done;

    scheduler_pipelined scheduler(
        .clk(clk),
        .start(compute),
        .reset(reset),

        .input_compute_start(scheduler_2_input_start),
        .input_compute_done(input_2_scheduler_done),

        .l1_l2_index(scheduler_2_l1l2_index),
        .l2_inmem_wantwrite(scheduler_2_l2_inmem_wantwrite),
        .l2_compute_start(l2_compute_start),
        .l2_compute_done(l2_compute_done),

        .l2_l3_index(scheduler_2_l2l3_index),
        .l3_inmem_wantwrite(scheduler_2_l3_inmem_wantwrite),
        .l3_compute_start(l3_compute_start),
        .l3_compute_done(l3_compute_done),

        .l3_l4_index(scheduler_2_l3l4_index),
        .l4_inmem_wantwrite(scheduler_2_l4_inmem_wantwrite),
        .l4_compute_start(l4_compute_start),
        .l4_compute_done(l4_compute_done),

        .l4_outmem_index(scheduler_2_l4_outmem_index),
        .l5_inmem_index(scheduler_2_l5_inmem_index),
        .l5_inmem_wantwrite(scheduler_2_l5_inmem_wantwrite),
        .l5_compute_start(l5_compute_start),
        .l5_compute_done(l5_compute_done)

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
            .write_data_act(input_data),
            .in_index3(input_index[3]),
            .in_index2(input_index[2]),
            .in_index1(input_index[1]),
            .in_index0(input_index[0]),
            .act_index2(input_index[2]),
            .act_index1(input_index[1]),
            .act_index0(input_index[0]),
            .compute(scheduler_2_input_start),
            .read_outmem_index(scheduler_2_l1l2_index),
            .output_valid(input_2_scheduler_done)
    );

    defparam l1.DEBUG_WEIGHT = 0;
    defparam l1.DEBUG_ACT = 0;
    defparam l1.DEBUG = 0;
    defparam l1.DEBUG_OUTMEM = 0;
    max_pool
        #(
            .NAME("MAXPOOL1"),
            .NUM_INPUTS(l2_NUM_INPUT),
            .INPUT_DIM(l2_INPUT_DIM),
            .KERNEL_DIM(L2_KERNEL_DIM),
            .DATA_SIZE(DATA_SIZE)
        )
        l2(
            .clk(clk),
            .inmem_want_write(scheduler_2_l2_inmem_wantwrite),
            .read_data(l2_outmem_2_l3_inmem_data),
            .inmem_write_data(l1_outmem_2_l2_inmem_data),
            .inmem_write_index(scheduler_2_l1l2_index),
            .outmem_read_index(scheduler_2_l2l3_index[2:0]),
            .compute(l2_compute_start),
            .output_valid(l2_compute_done)
    );

    defparam l2.DEBUG_INMEM = 0;
    defparam l2.DEBUG_OUTMEM = 0;

    //wire [DATA_SIZE-1:0] l3_input_data;
    //assign l3_input_data=(l3_write_weights || l3_write_bias)?input_data:l2_outmem_2_l3_inmem_data;
    conv_layer
        #(
            .NAME("CONV2 LAYER"),
            .NUM_INPUTS(l3_NUM_INPUT),
            .INPUT_DIM(l3_INPUT_DIM),
            .NUM_OUTPUTS(l3_NUM_OUTPUT),
            .KERNEL_DIM(l3_KERNEL_DIM),
            .DATA_SIZE(DATA_SIZE)
        )
        l3(
            .clk(clk),
            .outmem_out_data(l3_outmem_2_l4_inmem_data),
            .want_write_act(scheduler_2_l3_inmem_wantwrite),
            .want_write_weights(l3_write_weights),
            .want_write_bias(l3_write_bias),
            .write_data(input_data),
            .write_data_act(l2_outmem_2_l3_inmem_data),
            .in_index3(input_index[3]),
            .in_index2(input_index[2]),
            .in_index1(input_index[1]),
            .in_index0(input_index[0]),
            .act_index2(scheduler_2_l2l3_index[2]),
            .act_index1(scheduler_2_l2l3_index[1]),
            .act_index0(scheduler_2_l2l3_index[0]),
            .compute(l3_compute_start),
            .read_outmem_index(scheduler_2_l3l4_index[2:0]),
            .output_valid(l3_compute_done)
    );
    defparam l3.DEBUG_WEIGHT = 0;
    defparam l3.DEBUG_ACT= 0;
    defparam l3.DEBUG = 0;
    defparam l3.DEBUG_OUTMEM = 0;

    max_pool
        #(
            .NAME("MAXPOOL2"),
            .NUM_INPUTS(l4_NUM_INPUT),
            .INPUT_DIM(l4_INPUT_DIM),
            .KERNEL_DIM(l4_KERNEL_DIM),
            .DATA_SIZE(DATA_SIZE)
        )
        l4(
            .clk(clk),
            .inmem_want_write(scheduler_2_l4_inmem_wantwrite),
            .read_data(l4_outmem_2_l5_inmem_data),
            .inmem_write_data(l3_outmem_2_l4_inmem_data),
            .inmem_write_index(scheduler_2_l3l4_index[2:0]),
            .outmem_read_index(scheduler_2_l4_outmem_index),
            .compute(l4_compute_start),
            .output_valid(l4_compute_done)
    );

    defparam l4.DEBUG_INMEM = 0;
    defparam l4.DEBUG_OUTMEM = 0;

    fc_layer
        #(
            .NAME("FC1"),
            .NUM_INPUTS(l5_NUM_INPUT),
            .NUM_OUTPUTS(l5_NUM_OUTPUT),
            .DATA_SIZE(DATA_SIZE)
        )
        l5(
            .clk(clk),
            .outmem_out_data(),
            .want_write_act(scheduler_2_l5_inmem_wantwrite),
            .want_write_weights(l5_write_weights),
            .want_write_bias(l5_write_bias),
            .write_data(input_data),
            .write_data_act(l4_outmem_2_l5_inmem_data),
            .in_index1(input_index[1]),
            .in_index0(input_index[0]),
            .act_index0(scheduler_2_l5_inmem_index),
            .compute(l5_compute_start),
            .read_outmem_index(),
            .output_valid(l5_compute_done)
    );
    defparam l5.DEBUG_WEIGHT = 0;
    defparam l5.DEBUG_ACT= 0;
    defparam l5.DEBUG = 0;
    defparam l5.DEBUG_OUTMEM = 0;

    always @(posedge clk)begin
            //  if (scheduler_2_l4_inmem_wantwrite) begin
            //      $display("TOP: = [%d][%d][%d][%d] = %f", scheduler_2_l3l4_index[3], scheduler_2_l3l4_index[2], scheduler_2_l3l4_index[1], scheduler_2_l3l4_index[0], $bitstoreal(l3_outmem_2_l4_inmem_data));
            //  end
        
    end
    




endmodule