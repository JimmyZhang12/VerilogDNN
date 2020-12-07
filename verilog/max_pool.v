

module max_pool #(    
        parameter NAME = "MAXPOOL_DEFAULT_NAME",
        parameter NUM_INPUTS = 1,
        parameter INPUT_DIM = 5,
        parameter KERNEL_DIM = 3,
        parameter DATA_SIZE = 64,
        parameter OUTPUT_DIM = INPUT_DIM - KERNEL_DIM + 1)(
    input clk,
    input inmem_want_write,

    output [DATA_SIZE-1:0] read_data,
    input [DATA_SIZE-1:0] inmem_write_data,
    
    input [15:0] inmem_index [2:0],
    input [15:0] outmem_index [2:0],
    output reg output_valid
);


    act_memory 
        #(
            .NAME({NAME, " OUT_MEM"}),
            .DIM(INPUT_DIM), 
            .DATA_SIZE(DATA_SIZE),
            .ENTRY_NUM(NUM_INPUTS)
        )
        in_memory(
            .out_data(inmem_read_data),
            .in_data(inmem_write_data),
            .write(inmem_want_write),
            .index_entry(inmem_index[2]),
            .index_y(inmem_index[1]),
            .index_x(inmem_index[0]),
            .read_index_entry(read_outmem_index[2]),
            .read_index_y(read_outmem_index[1]),
            .read_index_x(read_outmem_index[0]),
            .clk(clk)
    );

    reg [15:0] read_outmem_index [2:0];
    reg [DATA_SIZE-1:0] inmem_read_data;

 

    reg [15:0] state = 0;
    always @(posedge clk)begin
        case (state)
           

        endcase
      


    end



endmodule