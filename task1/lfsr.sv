module lfsr (
    input logic clk,
    input logic rst,
    input logic en, 
    output logic [4:1] data_out
);

    logic data_in;
    logic [4:1] reg4;

sreg4 shiftreg4 (
    .clk (clk),
    .rst (rst),
    .en (en),
    .data_in (data_in),
    .data_out (reg4)
);

always_ff @(posedge clk, posedge rst) begin
    if(en)
        data_in <= {reg4[3] ^ reg4[4]};
    else 
        ;
end

assign data_out = reg4;
endmodule
