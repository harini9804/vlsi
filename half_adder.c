module half_adder(a,b,s,c);
input a,b;
output s,c;

cmos_or or1(
  .a(a),
  .b(b),
  .y(s)
);

cmos_and an(
  .a(a),
  .b(b),
  .y(c)
);

endmodule
