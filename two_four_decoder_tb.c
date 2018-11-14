module two_four_decoder_tb();

reg a,b,en;
wire i0,i1,i2,i3;

two_four_decoder tfd(
  .a(a),
  .b(b),
  .i0(i0),
  .i1(i1),
  .i2(i2),
  .i3(i3),
  .en(en)
);

initial begin
#10 a=0;b=0;en=1;
#10 a=0;b=1;en=1;
#10 a=1;b=0;en=1;
#10 a=1;b=1;en=1;
#20;
end

initial begin
$dumpfile("two_four_decoder");
$dumpvars(0,two_four_decoder_tb);
$display("EN,A,B,I3,I2,I1,I0");
$monitor("%b %b %b %b %b %b %b",en,a,b,i3,i2,i1,i0);
end

endmodule
