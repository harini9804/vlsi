module two_one_mux(a,b,s,y);

input a,b,s;
output y;
wire snot,p1,p2;

cmos_not n1mux(
  .a(s),
  .y(snot)
);

cmos_and an1mux(
  .a(snot),
  .b(a),
  .y(p1)
);
cmos_and an2mux(
  .a(s),
  .b(b),
  .y(p2)
);
cmos_or ormux(
  .a(p1),
  .b(p2),
  .y(y)
);

endmodule
