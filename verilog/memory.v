//very simple memory model
module memory(
    input clk,

    output [DATA_SIZE-1:0] out_data,

    input write,
    input [15:0] in_index [2:0],
    input [DATA_SIZE-1:0] in_data

);
    parameter ENTRY_NUM = 1;
    parameter DIM = 1;
    parameter DATA_SIZE = 64;

    reg [ENTRY_NUM-1:0][DIM-1:0][DIM-1:0][DATA_SIZE-1:0] mem;

    assign out_data = mem[in_index[2]][in_index[1]][in_index[0]];

    always @(posedge clk)begin
        if (write)begin
            mem[in_index[2]][in_index[1]][in_index[0]] <= in_data;
            $display("WRITE, mem[%d][%d][%d] = %f", in_index[2], in_index[1], in_index[0], $bitstoreal(in_data));
        end

    end

endmodule

