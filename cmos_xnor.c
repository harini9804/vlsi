
module cmos_xnor(a,b,y);
input a,b;
wire prod1,prod2;
output inva,invb,y,add1,add2;

cmos_not nt1(
  .a(a),
  .y(inva)
);

cmos_not nt2(
  .a(b),
  .y(invb)
);
cmos_or or1(
  .a(inva),
  .b(b),
  .y(prod1)
);

cmos_or or2(
  .a(a),
  .b(invb),
  .y(prod2)
);

cmos_and ad(
  .a(prod1),
  .b(prod2),
  .y(y)
);
endmodule
