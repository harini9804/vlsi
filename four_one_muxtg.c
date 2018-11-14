module four_one_mux_tg(a,b,c,d,s1,s2,y);

input a,b,c,d,s1,s2;
output y;
wire l1,l2;

two_one_muxtg to1tg(
  .a(a),
  .b(c),
  .s(s1),
  .y(l1)
);
two_one_muxtg to2tg(
  .a(b),
  .b(d),
  .s(s1),
  .y(l2)
);
two_one_muxtg to3tg(
  .a(l1),
  .b(l2),
  .s(s2),
  .y(y)
);


endmodule
