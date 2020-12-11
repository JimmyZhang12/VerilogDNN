
module scheduler_pipelined(
    input clk,

    input start,
    input reset,
    output reg input_compute_start,
    input input_compute_done,
    output wire [15:0] l1_l2_index [2:0],

    output reg l2_inmem_wantwrite,
    output reg l2_compute_start,
    input l2_compute_done,

    output wire [15:0] l2_l3_index [3:0],
    output reg l3_inmem_wantwrite,
    output reg l3_compute_start,
    input l3_compute_done,

    output wire [15:0] l3_l4_index [3:0],
    output reg l4_inmem_wantwrite,
    output reg l4_compute_start, 
    input l4_compute_done,

    output wire [15:0] l4_outmem_index [2:0],
    output wire [15:0] l5_inmem_index,
    output reg l5_inmem_wantwrite,
    output reg l5_compute_start,
    input l5_compute_done
);
parameter DEBUG_TIMINGS = 1;

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
parameter L3_KERNEL_DIM = 3;

parameter l4_NUM_INPUT = 32;
parameter l4_INPUT_DIM = 11;
parameter l4_KERNEL_DIM = 2;

parameter l5_NUM_INPUT = 800;
parameter l5_NUM_OUTPUT = 10;


initial begin
    input_compute_start = 0;
end


reg [15:0] state = 0;
reg [15:0] state_prev = 0;

integer cnt = 1;
integer cnt_prev = 1;
integer i;
integer state_cnt = 0;
reg mem_done [4:0];
always @(posedge clk) begin

    cnt = cnt + 1;
    if (state != state_prev) begin
        $display("state %d done at %d cycles", state-1, cnt-cnt_prev);
        cnt_prev = cnt;
        state_prev = state;
    end

    case (state)
        0 : begin
            cnt = 0;

            if (start) begin
                input_compute_start = 1;
                l2_compute_start = 1;
                l3_compute_start = 1;
                l4_compute_start = 1;
                l5_compute_start = 1;
                
                if (state_cnt < 6)begin
                    state = 1;
                end
                else begin
                    state = 10;
                end
                state_cnt = state_cnt+1;
            end
         
        end

        1: begin
            input_compute_start = 0;
            l2_compute_start = 0;
            l3_compute_start = 0;
            l4_compute_start = 0;
            l5_compute_start = 0;
            if (input_compute_done &&
                    l2_compute_done &&
                    l3_compute_done &&
                    l4_compute_done &&
                    l5_compute_done) begin
                state = 2;
                l2_inmem_wantwrite = 1;
                l3_inmem_wantwrite = 1;
                l4_inmem_wantwrite = 1;
                l5_inmem_wantwrite = 1;

                for(i=0; i<5; i=i+1) begin
                    mem_done[i] = 0;
                end

            end
           
        end

        2: begin
            if (!mem_done[0]) begin
                if (l1_l2_index[0] == l2_INPUT_DIM-1) begin
                    l1_l2_index[0] = 0;
                    l1_l2_index[1] = l1_l2_index[1] + 1;

                end
                else begin
                    l1_l2_index[0] = l1_l2_index[0] + 1;
                end

                if (l1_l2_index[1] == l2_INPUT_DIM) begin
                    l1_l2_index[1] = 0;
                    l1_l2_index[2] = l1_l2_index[2] + 1;
                end
                if (l1_l2_index[2] == l2_NUM_INPUT) begin
                    l2_inmem_wantwrite = 0;
                    mem_done[0] = 1;
                end
            end

            if (!mem_done[1]) begin
                if (l2_l3_index[0] == l3_INPUT_DIM-1) begin
                    l2_l3_index[0] = 0;
                    l2_l3_index[1] = l2_l3_index[1] + 1;

                end
                else begin
                    l2_l3_index[0] = l2_l3_index[0] + 1;
                end

                if (l2_l3_index[1] == l3_INPUT_DIM) begin
                    l2_l3_index[1] = 0;
                    l2_l3_index[2] = l2_l3_index[2] + 1;
                end
                if (l2_l3_index[2] == l3_NUM_INPUT) begin
                    l3_inmem_wantwrite = 0;
                    mem_done[1] = 1;
 
                end 
            end

            if (!mem_done[2]) begin
                if (l3_l4_index[0] == l4_INPUT_DIM-1) begin
                    l3_l4_index[0] = 0;
                    l3_l4_index[1] = l3_l4_index[1] + 1;

                end
                else begin
                    l3_l4_index[0] = l3_l4_index[0] + 1;
                end

                if (l3_l4_index[1] == l4_INPUT_DIM) begin
                    l3_l4_index[1] = 0;
                    l3_l4_index[2] = l3_l4_index[2] + 1;
                end
                if (l3_l4_index[2] == l4_NUM_INPUT) begin
                    l4_inmem_wantwrite = 0;
                    mem_done[2] = 1;
                end 
            end

            if (!mem_done[3]) begin
                l5_inmem_index = l5_inmem_index + 1;
                l4_outmem_index[0] = (l5_inmem_index%(25))%5;
                l4_outmem_index[1] = (l5_inmem_index%(25))/5;
                l4_outmem_index[2] = l5_inmem_index/(25);
                if (l5_inmem_index == l5_NUM_INPUT) begin
                    l5_inmem_wantwrite = 0;
                    mem_done[3] = 1;

                end
            end

            if (mem_done[0] && mem_done[1] && mem_done[2] && mem_done[3]) begin
                input_compute_start = 1;
                l2_compute_start = 1;
                l3_compute_start = 1;
                l4_compute_start = 1;
                l5_compute_start = 1;

                state = 1;
                state_cnt = state_cnt+1;

            end

        end

        10: begin
            $finish();
        end
    endcase
end


endmodule