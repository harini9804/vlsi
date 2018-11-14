module full_adder(a,b,cin,s,cout);

input a,b,cin;
output s,s1,cout,c1,c2;

half_adder ha1(
  .a(a),
  .b(b),
  .s(s1),
  .c(c1)
);

half_adder ha2(
  .a(s1),
  .b(cin),
  .s(s),
  .c(c2)
);

cmos_or orfa(
  .a(c1),
  .b(c2),
  .y(cout)
);

endmodule
