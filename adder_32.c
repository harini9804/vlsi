module adder_32(a,b,c);
input [31:0]a;
input [31:0]b;
output [32:0]c;

assign c= a+b;

endmodule
