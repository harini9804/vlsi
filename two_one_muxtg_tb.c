module two_one_muxtg_tb();
reg a,b,s;
wire y;

initial begin
$dumpfile("two_one_muxtg");
$dumpvars(0,two_one_muxtg_tb);
$display("A,B,S,Y");
$monitor("%b %b %b %b",a,b,s,y);

#20 a=0;b=0;s=0;
#20 a=0;b=0;s=1;
#20 a=0;b=1;s=0;
#20 a=0;b=1;s=1;
#20 a=1;b=0;s=0;
#20 a=1;b=0;s=1;
#20 a=1;b=1;s=0;
#20 a=1;b=1;s=1;
end

two_one_muxtg twoonetg(
  .a(a),
  .b(b),
  .s(s),
  .y(y)
);

endmodule
