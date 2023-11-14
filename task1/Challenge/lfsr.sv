module lfsr (
    input logic clk,
    input logic rst,
    input logic en, 
    output logic [7:1] data_out
);

    logic data_in;
    logic [7:1] reg7;

sreg7 shiftreg7 (
    .clk (clk),
    .rst (rst),
    .en (en),
    .data_in (data_in),
    .data_out (reg7)
);

always_ff @(posedge clk, posedge rst) begin
    if(en)
        data_in <= {reg7[3] ^ reg7[7]};
    else 
        ;
end

assign data_out = reg7;
endmodule
