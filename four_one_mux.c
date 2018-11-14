module four_one_mux(a,b,c,d,s1,s2,y);

input a,b,c,d,s1,s2;
output y;
wire p1a,p1,p2b,p2,p3c,p3,p4d,p4,s1not,s2not;
wire or1,or2;

cmos_not n1mux4(
  .a(s1),
  .y(s1not)
);

cmos_not n2mux4(
  .a(s2),
  .y(s2not)
);

cmos_and a1mux4(
  .a(s1not),
  .b(s2not),
  .y(p1a)
);
cmos_and a2mux4(
  .a(p1a),
  .b(a),
  .y(p1)
);
cmos_and a3mux4(
  .a(s1not),
  .b(s2),
  .y(p2b)
);
cmos_and a4mux4(
  .a(p2b),
  .b(b),
  .y(p2)
);
cmos_and a5mux4(
  .a(s1),
  .b(s2not),
  .y(p3c)
);
cmos_and a6mux4(
  .a(p3c),
  .b(c),
  .y(p3)
);
cmos_and a7mux4(
  .a(s1),
  .b(s2),
  .y(p4d)
);
cmos_and a8mux4(
  .a(p4d),
  .b(d),
  .y(p4)
);

cmos_or or1mux4(
  .a(p1),
  .b(p2),
  .y(or1)
);

cmos_or or2mux4(
  .a(p3),
  .b(p4),
  .y(or2)
);

cmos_or or3mux4(
  .a(or1),
  .b(or2),
  .y(y)
);
endmodule
