module full_adder_tb();
reg a1,b1,cin;
wire sum,cout;

initial begin
$dumpfile("full_adder");
$dumpvars(0,full_adder_tb);
$display("A,B,Cin,S,Cout");
$monitor("%b %b %b %b %b",a1,b1,cin,sum,cout);

#20 a1=0;b1=0;cin=0;
#20 a1=0;b1=0;cin=1;
#20 a1=0;b1=1;cin=0;
#20 a1=0;b1=1;cin=1;
#20 a1=1;b1=0;cin=0;
#20 a1=1;b1=0;cin=1;
#20 a1=1;b1=1;cin=0;
#20 a1=1;b1=1;cin=1;

end

full_adder fa(
  .a(a1),
  .b(b1),
  .cin(cin),
  .s(sum),
  .cout(cout)
);

endmodule
