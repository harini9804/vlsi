module two_one_mux_tb();

reg a1,b1,s;
wire out;

initial begin
$dumpfile("two_one_mux");
$dumpvars(0,two_one_mux_tb);
$display("A,B,S,Y");
$monitor("%b %b %b %b",a1,b1,s,out);

#20 a1=0;b1=0;s=0;
#20 a1=0;b1=0;s=1;
#20 a1=0;b1=1;s=0;
#20 a1=0;b1=1;s=1;
#20 a1=1;b1=0;s=0;
#20 a1=1;b1=0;s=1;
#20 a1=1;b1=1;s=0;
#20 a1=1;b1=1;s=1;

end

two_one_mux tom(
  .a(a1),
  .b(b1),
  .s(s),
  .y(out)
);

endmodule
