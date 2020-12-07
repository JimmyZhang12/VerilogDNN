
module scheduler(
    input clk,

    input start,
    input reset,
    output reg input_compute_start,
    input input_compute_done,
    output wire [15:0] l1_l2_index [2:0],
    output reg l2_inmem_wantwrite
);

parameter DATA_SIZE = 64;
parameter l1_NUM_INPUT = 1;
parameter l1_INPUT_DIM = 28;
parameter l1_NUM_OUTPUT = 16;
parameter L1_KERNEL_DIM = 3;

parameter l2_NUM_INPUT = 16;
parameter l2_INPUT_DIM = 26;
parameter L2_KERNEL_DIM = 2;


initial begin
    input_compute_start = 0;
end




reg [15:0] state = 0;
always @(posedge clk) begin
    case (state)
        0 : begin
            if (start) begin
                input_compute_start = 1;
                state = 1;
            end
            else begin
                state = 0;
            end
        end

        1: begin
            input_compute_start = 0;
            if (input_compute_done) begin
                state = 2;
                l2_inmem_wantwrite = 1;
            end
            else
                state = 1;
        end

        2: begin
            if (l1_l2_index[0] == l2_INPUT_DIM-1) begin
                l1_l2_index[0] = 0;
                l1_l2_index[1] = l1_l2_index[1] + 1;

            end
            else begin
                l1_l2_index[0] = l1_l2_index[0] + 1;
            end

            if (l1_l2_index[1] == l2_INPUT_DIM-1) begin
                l1_l2_index[1] = 0;
                l1_l2_index[2] = l1_l2_index[2] + 1;
            end
            if (l1_l2_index[2] == l2_NUM_INPUT-1) begin
                state = 10;
            end

            
        end

        10: begin
            l2_inmem_wantwrite = 0;
            $finish();
        end
    endcase
end


endmodule