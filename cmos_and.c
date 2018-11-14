
module cmos_and(a,b,y);
input a,b;
output y1,y;
wire w;

cmos_nand n(
  .a(a),
  .b(b),
  .y(y1)
);

cmos_not nt(
  .a(y1),
  .y(y)
);

endmodule
