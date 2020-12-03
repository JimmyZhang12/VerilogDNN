
module conv_layer(
    input clk,

    output [DATA_SIZE-1:0] out_data,
    output [15:0] out_index [2:0],
    output output_valid,

    input want_write,
    input [DATA_SIZE-1:0] write_data,
    input [15:0] in_index_act [2:0]

);

    parameter NUM_INPUTS = 1;
    parameter INPUT_DIM = 5;
    parameter NUM_OUTPUTS = 1;
    parameter KERNEL_DIM = 3;
    parameter DATA_SIZE = 64;

    wire entry [2:0];

    reg [DATA_SIZE-1:0] ACTMEM_out_data;
    //reg ACTMEM_write = 0;
    // reg in_index_y = 0;
    // reg in_index_x = 0;
    // reg in_index_entry = 0;


    memory #(
        .DIM(INPUT_DIM), 
        .DATA_SIZE(DATA_SIZE),
        .ENTRY_NUM(NUM_INPUTS)
        )
        activation(
            .out_data(ACTMEM_out_data),
            .in_data(write_data),
            .write(want_write),
            .in_index(in_index_act),
            .clk(clk)
    );

    // memory #(
    //     .DIM(INPUT_DIM), 
    //     .DATA_SIZE(DATA_SIZE),
    //     .ENTRY_NUM(NUM_INPUTS)
    //     )
    //     weights(
    //         .out_data(ACTMEM_out_data),
    //         .in_data(write_data),
    //         .write(want_write),
    //         .index_y(in_index_y),
    //         .index_x(in_index_x),
    //         .index_entry(in_index_entry),
    //         .clk(clk)
    // );

    always @(posedge clk)begin
        //$display("data %b", write_data);
        $display("CONV LAYER: write_data %f", $bitstoreal(write_data));

    end



endmodule