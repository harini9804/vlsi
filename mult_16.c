module mult_16(a,b,c);
input [15:0]a;
input [15:0]b;
output [31:0]c;

assign c= a*b;

endmodule
