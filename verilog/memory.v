//very simple memory model

/* verilator lint_off DECLFILENAME */
module act_memory(
    input clk,

    output [DATA_SIZE-1:0] out_data,

    input write,
    input [15:0] index_entry,
    input [15:0] index_y,
    input [15:0] index_x,
    input [DATA_SIZE-1:0] in_data,
    input [15:0] read_index_entry,
    input [15:0] read_index_y,
    input [15:0] read_index_x
);
    parameter NAME = "DEFAULT ACT MEM";
    parameter ENTRY_NUM = 1;
    parameter DIM = 1;
    parameter DATA_SIZE = 64;

    reg [ENTRY_NUM-1:0][DIM-1:0][DIM-1:0][DATA_SIZE-1:0] mem;

    assign out_data = mem[read_index_entry][read_index_y][read_index_x];

    always @(posedge clk)begin
        if (write)begin
            mem[index_entry][index_y][index_x] <= in_data;
            $display("%s : WRITE : mem[%d][%d][%d] = %f", NAME, index_entry, index_y, index_x, $bitstoreal(in_data));
        end

    end
endmodule

module weight_memory(

    input clk,
    output [DATA_SIZE-1:0] out_data,

    input write,
    input index_in,
    input index_out,
    input index_k_y,
    input index_k_x,

    input read_index_in,
    input read_index_out,
    input read_index_y,
    input read_index_x,  
    input [DATA_SIZE-1:0] in_data

);
    parameter NAME = "DEFAULT WEIGHT MEM";
    parameter NUM_INPUTS = 1;
    parameter NUM_OUTPUTS = 1;
    parameter DIM = 1;
    parameter DATA_SIZE = 64;

    reg [NUM_INPUTS-1:0][NUM_OUTPUTS-1:0][DIM-1:0][DIM-1:0][DATA_SIZE-1:0] mem;

    assign out_data = mem[read_index_in][read_index_out][read_index_y][read_index_x];

    always @(posedge clk)begin
        if (write)begin
            mem[index_in][index_out][index_k_y][index_k_x] <= in_data;
            $display("%s : WRITE : mem[%d][%d][%d][%d] = %f", NAME, index_in, index_out, index_k_y, index_k_x, $bitstoreal(in_data));
        end

    end

endmodule

