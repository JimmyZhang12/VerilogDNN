//very simple memory model

/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTH */
module act_memory_parallel
    #(
        parameter DEBUG = 0,
        parameter NAME = "DEFAULT ACT MEM",
        parameter ENTRY_NUM = 16,
        parameter DIM = 1,
        parameter DATA_SIZE = 64,
        parameter KERNEL_DIM = 3)(

    input clk,
    output [DATA_SIZE-1:0] out_data [ENTRY_NUM-1:0][KERNEL_DIM-1:0][KERNEL_DIM-1:0],

    input write,
    input [15:0] index_entry,
    input [15:0] index_y,
    input [15:0] index_x,
    input [DATA_SIZE-1:0] in_data,
    input [15:0] read_index_y,
    input [15:0] read_index_x
);
    reg [DATA_SIZE-1:0] mem [ENTRY_NUM-1:0][DIM-1:0][DIM-1:0];

    genvar i;
    genvar j;
    generate
        for (i = 0; i < ENTRY_NUM; i=i+1) begin
            for (j = 0; j < DIM*DIM; j=j+1) begin
                assign out_data[i][j/KERNEL_DIM][j%KERNEL_DIM] = 
                    mem[i][read_index_y + j/KERNEL_DIM][read_index_x + j%KERNEL_DIM];
            end
        end
    endgenerate

    always @(posedge clk)begin
        if (write)begin
            mem[index_entry][index_y][index_x] = in_data;
            if (DEBUG) begin
                $display("%s : WRITE : mem[%d][%d][%d] = %f", NAME, index_entry, index_y, index_x, $bitstoreal(mem[index_entry][index_y][index_x]));
            end

        end

    end
endmodule