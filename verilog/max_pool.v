

module max_pool #(    
        parameter NAME = "MAXPOOL_DEFAULT_NAME",
        parameter NUM_INPUTS = 16,
        parameter INPUT_DIM = 26,
        parameter KERNEL_DIM = 2,
        parameter DATA_SIZE = 64,
        parameter STRIDE = KERNEL_DIM,
        parameter OUTPUT_DIM = (INPUT_DIM - KERNEL_DIM)/STRIDE + 1)(
    input clk,
    input inmem_want_write,

    output [DATA_SIZE-1:0] read_data,
    input [DATA_SIZE-1:0] inmem_write_data,
    
    input [15:0] inmem_write_index [2:0],
    input [15:0] outmem_read_index [2:0],
    input compute,
    output reg output_valid
);


    act_memory 
        #(
            .DEBUG(0),
            .NAME({NAME, " IN_MEM"}),
            .DIM(INPUT_DIM), 
            .DATA_SIZE(DATA_SIZE),
            .ENTRY_NUM(NUM_INPUTS)
        )
        in_memory(
            .out_data(inmem_read_data),
            .in_data(inmem_write_data),
            .write(inmem_want_write),
            .index_entry(inmem_write_index[2]),
            .index_y(inmem_write_index[1]),
            .index_x(inmem_write_index[0]),
            .read_index_entry(inmem_read_index[2]),
            .read_index_y(inmem_read_index[1]),
            .read_index_x(inmem_read_index[0]),
            .clk(clk)
    );
    act_memory 
        #(
            .DEBUG(1),
            .NAME({NAME, " OUT_MEM"}),
            .DIM(INPUT_DIM - KERNEL_DIM + 1), 
            .DATA_SIZE(DATA_SIZE),
            .ENTRY_NUM(NUM_INPUTS)
        )
        out_memory(
            .out_data(outmem_read_data),
            .in_data(outmem_write_data),
            .write(outmem_want_write),
            .index_entry(outmem_write_index[2]),
            .index_y(outmem_write_index[1]),
            .index_x(outmem_write_index[0]),
            .read_index_entry(outmem_read_index[2]),
            .read_index_y(outmem_read_index[1]),
            .read_index_x(outmem_read_index[0]),
            .clk(clk)
    );

    reg [DATA_SIZE-1:0] outmem_read_data;
    reg [DATA_SIZE-1:0] outmem_write_data = 0;
    reg outmem_want_write;
    reg [15:0] outmem_write_index [2:0];

    reg [DATA_SIZE-1:0] inmem_read_data;
    reg [15:0] inmem_read_index [2:0];

    reg [15:0] state = 0;
    reg [15:0] k_state = 0;
    always @(posedge clk)begin
        case (state)
            0: begin
                if(compute) begin
                    outmem_write_data=0;
                    outmem_want_write=0;
                    inmem_read_index[2]=0;
                    inmem_read_index[1]=0;
                    inmem_read_index[0]=0;
                    outmem_write_index[0] = 0;
                    outmem_write_index[1] = 0;
                    outmem_write_index[2] = 0;
                    k_state = 0;
                    state = 2;
                    
                end
            end
            1: begin
                outmem_want_write = 0;
                if (k_state == KERNEL_DIM*KERNEL_DIM - 1) begin
                    outmem_write_data = 0;
                    k_state = 0;
                    outmem_write_index[0] = outmem_write_index[0] + 1;
                    if (outmem_write_index[0]==(OUTPUT_DIM)) begin
                        outmem_write_index[0] = 0;
                        outmem_write_index[1] = outmem_write_index[1] + 1;
                    end
                    if (outmem_write_index[1]==(OUTPUT_DIM)) begin
                        outmem_write_index[1] = 0;
                        outmem_write_index[2] = outmem_write_index[2] + 1;
                    end
                end
                else begin
                    k_state = k_state + 1;

                end

                inmem_read_index[0] = outmem_write_index[0]*STRIDE + (k_state%KERNEL_DIM); 
                inmem_read_index[1] = outmem_write_index[1]*STRIDE + (k_state/KERNEL_DIM); 
                inmem_read_index[2] = outmem_write_index[2]; 

                state = 2;

            end
            2: begin
                state = 1;

                // if (k_state == 0) begin
                // end
                if ($bitstoreal(inmem_read_data) > $bitstoreal(outmem_write_data)) begin
                    outmem_write_data = inmem_read_data;
                end

                if (k_state == KERNEL_DIM*KERNEL_DIM-1) begin
                    outmem_want_write=1;
                    if (outmem_write_index[2] == NUM_INPUTS-1 && outmem_write_index[1]==OUTPUT_DIM-1 && outmem_write_index[0]==OUTPUT_DIM-1) begin

                        state = 3;
                    end
                end

                // $display("%s: inmem_read_index[%d][%d][%d]", NAME, inmem_read_index[2], inmem_read_index[1], inmem_read_index[0]);
                // $display("%s: outmem_write_index[%d][%d][%d]", NAME, outmem_write_index[2], outmem_write_index[1], outmem_write_index[0]);
                // $display("%s: inmem_read_data %f:", NAME, $bitstoreal(inmem_read_data));
                // $display("%s: outmem_write_data %f:", NAME, $bitstoreal(outmem_write_data));
                //$display("%s: k_state %d", NAME, k_state);
                //$display("**********");


            end 
            3: begin               
                output_valid = 1;
                outmem_want_write = 0;
                if(compute)begin
                    state = 0;
                end
            end 
        endcase

    end

endmodule