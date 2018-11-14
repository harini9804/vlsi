module four_two_encoder_tb();

reg i0,i1,i2,i3,en;
wire a,b;

four_two_encoder tfd(
  .a(a),
  .b(b),
  .i0(i0),
  .i1(i1),
  .i2(i2),
  .i3(i3),
  .en(en)
);

initial begin
#10 i3=1;i2=0;i1=0;i0=0;en=1;
#10 i3=0;i2=1;i1=0;i0=0;en=1;
#10 i3=0;i2=0;i1=1;i0=0;en=1;
#10 i3=0;i2=0;i1=0;i0=1;en=1;
#20;
end

initial begin
$dumpfile("four_two_encoder");
$dumpvars(0,four_two_encoder_tb);
$display("EN,I3,I2,I1,I0, A,B");
$monitor("%b %b %b %b %b %b %b",en,i3,i2,i1,i0,a,b);
end

endmodule
