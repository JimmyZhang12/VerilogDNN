
module scheduler(
    input clk,

    input start,
    input reset,
    output reg input_compute_start,
    input input_compute_done
);
initial begin
    input_compute_start = 0;

end

reg [15:0] state = 0;

always 
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
                state = 10;
            end
            else
                state = 1;
        end

        10: begin
            $finish();
        end
    endcase

endmodule