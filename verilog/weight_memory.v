

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
    input [15:0] read_index_x,  
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
        $display("%f", $bitstoreal(mem[0][0][0][2]));
        $display("%f", $bitstoreal(out_data));
        $display("%f", $bitstoreal(mem[read_index_in][read_index_out][read_index_y][read_index_x]));
        $display("mem[%d][%d][%d][%d]", read_index_in, read_index_out, read_index_y, read_index_x);


        if (write)begin
            mem[index_in][index_out][index_k_y][index_k_x] <= in_data;
            $display("%s : WRITE : mem[%d][%d][%d][%d] = %f", NAME, index_in, index_out, index_k_y, index_k_x, $bitstoreal(in_data));

        end

    end

endmodule

