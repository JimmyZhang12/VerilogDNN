module weight_memory_parallel #(    
    parameter DEBUG = 0,
    parameter NAME = "DEFAULT WEIGHT MEM",
    parameter NUM_INPUTS = 1,
    parameter NUM_OUTPUTS = 1,
    parameter DIM = 1,
    parameter DATA_SIZE = 64)(

    input clk,
    output [DATA_SIZE-1:0] out_data_weight [NUM_INPUTS-1:0][DIM-1:0][DIM-1:0],
    output [DATA_SIZE-1:0] out_data_bias,

    input weight_write,
    input bias_write,

    input [15:0] index_in,
    input [15:0] index_out,
    input [15:0] index_k_y,
    input [15:0] index_k_x,

    input [15:0] read_index_out,  

    input [15:0] read_index_bias,  

    input [DATA_SIZE-1:0] in_data

);


    reg [DATA_SIZE-1:0] mem_weight [NUM_INPUTS-1:0][NUM_OUTPUTS-1:0][DIM-1:0][DIM-1:0];
    reg [DATA_SIZE-1:0] mem_bias [NUM_OUTPUTS-1:0];


    genvar i;
    genvar j;
    generate
        for (i = 0; i < NUM_INPUTS; i=i+1) begin
            for (j = 0; j < DIM*DIM; j=j+1) begin
                assign out_data_weight[i][j/DIM][j%DIM] = mem_weight[i][read_index_out][j/DIM][j%DIM];
            end
        end
    endgenerate

    assign out_data_bias = mem_bias[read_index_bias];

    always @(posedge clk)begin
        if (weight_write)begin
            mem_weight[index_in][index_out][index_k_y][index_k_x] <= in_data;
            if (DEBUG) begin
                $display("%s : WRITE weight: mem[%d][%d][%d][%d] = %f", NAME, index_in, index_out, index_k_y, index_k_x, $bitstoreal(in_data));
            end
        end
        else if (bias_write) begin
            mem_bias[index_k_x] <= in_data;
            if (DEBUG) begin
                $display("%s : WRITE bias: mem[%d] = %f", NAME, index_k_x, $bitstoreal(in_data));
            end
        end

    end

endmodule