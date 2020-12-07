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
    output [DATA_SIZE-1:0] out_data_weight,
    output [DATA_SIZE-1:0] out_data_bias,

    input weight_write,
    input bias_write,

    input [15:0] index_in,
    input [15:0] index_out,
    input [15:0] index_k_y,
    input [15:0] index_k_x,

    input [15:0] read_index_in,
    input [15:0] read_index_out,
    input [15:0] read_index_y,
    input [15:0] read_index_x,  

    input [15:0] read_index_bias,  

    input [DATA_SIZE-1:0] in_data

);
    parameter NAME = "DEFAULT WEIGHT MEM";
    parameter NUM_INPUTS = 1;
    parameter NUM_OUTPUTS = 1;
    parameter DIM = 1;
    parameter DATA_SIZE = 64;

    reg [NUM_INPUTS-1:0][NUM_OUTPUTS-1:0][DIM-1:0][DIM-1:0][DATA_SIZE-1:0] mem_weight;
    reg [NUM_OUTPUTS-1:0][DATA_SIZE-1:0] mem_bias;

    assign out_data_weight = mem_weight[read_index_in][read_index_out][read_index_y][read_index_x];
    assign out_data_bias = mem_bias[read_index_bias];

    always @(posedge clk)begin
        if (weight_write)begin
            mem_weight[index_in][index_out][index_k_y][index_k_x] <= in_data;
            $display("%s : WRITE weight: mem[%d][%d][%d][%d] = %f", NAME, index_in, index_out, index_k_y, index_k_x, $bitstoreal(in_data));
        end
        else if (bias_write) begin
            mem_bias[index_k_x] <= in_data;
            $display("%s : WRITE bias: mem[%d] = %f", NAME, index_k_x, $bitstoreal(in_data));
        end

    end

endmodule

