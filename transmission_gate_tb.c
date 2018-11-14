module transmission_gate_tb();
reg a,g1,g2;
wire y;

initial begin
$dumpfile("transmission_gate");
$dumpvars(0,transmission_gate_tb);
$display("A,G1,G2,Y");
$monitor("%b %b %b %b",a,g1,g2,y);

#20 a=0;g1=0;g2=0;
#20 a=0;g1=0;g2=1;
#20 a=0;g1=1;g2=0;
#20 a=0;g1=1;g2=1;
#20 a=1;g1=0;g2=0;
#20 a=1;g1=0;g2=1;
#20 a=1;g1=1;g2=0;
#20 a=1;g1=1;g2=1;
end

transmission_gate tg(
  .a(a),
  .g1(g1),
  .g2(g2),
  .y(y)
);

endmodule
