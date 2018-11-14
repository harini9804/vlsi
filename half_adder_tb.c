module half_adder_tb();
reg a1,b1;
wire sum,carry;

initial begin
$dumpfile("half_adder");
$dumpvars(0,half_adder_tb);
$display("A,B,S,C");
$monitor("%b %b %b %b",a1,b1,sum,carry);

#20 a1=0;b1=0;
#20 a1=0;b1=1;
#20 a1=1;b1=0;
#20 a1=1;b1=1;
end

half_adder ha(
  .a(a1),
  .b(b1),
  .s(sum),
  .c(carry)
);

endmodule
