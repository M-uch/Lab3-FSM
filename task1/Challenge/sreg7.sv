module sreg7 (
    input logic clk,
    input logic rst,
    input logic en,
    input logic data_in,
    output logic [7:1] data_out
);

    logic [7:1] sreg;

    always_ff @ (posedge clk)
        if(rst)
            sreg <= 7'b1;
        else if (en) begin
            sreg[7] <= sreg[6];
            sreg[6] <= sreg[5];
            sreg[5] <= sreg[4];
            sreg[4] <= sreg[3];
            sreg[3] <= sreg[2];
            sreg[2] <= sreg[1];
            sreg[1] <= data_in;
        end
        
        else
            ;
    assign data_out = sreg;
endmodule
