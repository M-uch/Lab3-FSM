module top #(
    parameter WIDTH = 16
)(
    input logic clk,
    input logic rst,
    input logic en, 
    input  logic [WIDTH-1:0] N,
    output logic tick, 
    output logic [8:1] data_out
);

clktick clktick (
    .clk (clk),
    .rst (rst),
    .en (en),
    .N (N),
    .tick (tick)
);

f1 f1lights (
    .clk (clk),
    .rst (rst),
    .en (tick),
    .data_out (data_out)
);

endmodule
