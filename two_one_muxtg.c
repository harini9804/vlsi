module two_one_muxtg(a,b,s,y);

input a,b,s;
output y;
wire snot;

cmos_not n1muxtg(
  .a(s),
  .y(snot)
);

transmission_gate tg1(
  .a(a),
  .g1(snot),
  .g2(s),
  .y(y)
);
transmission_gate tg2(
  .a(b),
  .g1(s),
  .g2(snot),
  .y(y)
);

endmodule
