module four_one_mux21(a,b,c,d,s1,s2,y);
input a,b,c,d,s1,s2;
output y,y1,y2;

two_one_mux m1(
  .a(a),
  .b(b),
  .s(s2),
  .y(y1)
  );

two_one_mux m2(
  .a(c),
  .b(d),
  .s(s2),
  .y(y2)
  );

two_one_mux m3(
  .a(y1),
  .b(y2),
  .s(s1),
  .y(y)
  );


endmodule
