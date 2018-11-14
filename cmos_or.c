module cmos_or(a,b,y);
input a,b;
output y1,y;

cmos_nor nr(
  .a(a),
  .b(b),
  .y(y1)
);

cmos_not nt(
  .a(y1),
  .y(y)
);

endmodule
