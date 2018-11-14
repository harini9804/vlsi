module four_one_muxtg_tb();

reg a1,b1,c1,d1,s1,s2;
wire out;

initial begin
$dumpfile("four_one_muxtg");
$dumpvars(0,four_one_muxtg_tb);
$display("A,B,C,D,S1,S2,Y");
$monitor("%b %b %b %b %b %b %b",a1,b1,c1,d1,s1,s2,out);

#20 a1=0;b1=1;c1=0;d1=1;s1=0;s2=0;
#20 a1=0;b1=1;c1=0;d1=1;s1=0;s2=1;
#20 a1=0;b1=1;c1=0;d1=1;s1=1;s2=0;
#20 a1=0;b1=0;c1=0;d1=1;s1=1;s2=1;

end

four_one_mux_tg tom(
  .a(a1),
  .b(b1),
  .c(c1),
  .d(s1),
  .s1(s1),
  .s2(s2),
  .y(out)
);

endmodule
