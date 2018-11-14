module frequencydiv;
output reg clk;
output reg rst;
input wire out_clk;
frequency_divider_by2 freq1(clk,rst,out_clk);
initial
clk = 1'b0;
always
#10 clk = ~clk;
initial
begin
$display("clk\t reset\t clockOP\t");
$monitor($time,"%b\t %b\t %b",clk,rst,out_clk);
rst =0;
#20 rst =1;
#100 $finish;
end
initial
begin
     $dumpfile ("frequencydiv.vcd");
     $dumpvars (0,frequencydiv);
end
endmodule
