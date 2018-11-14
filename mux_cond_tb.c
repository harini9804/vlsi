module mux_cond_tb();

reg a,b,s,en;
wire y;

mux_cond mcond(
  .a(a),
  .b(b),
  .s(s),
  .en(en),
  .y(y)
);

initial begin
#20 a=0;b=1;s=1;en=1;
#20 a=1;b=0;s=0;en=1;
#20 a=1;b=0;s=1;en=1;
#20 a=1;b=1;s=0;en=1;
#20 a=1;b=1;s=1;en=0;
#20 a=0;b=0;s=0;en=1;
#20 a=0;b=1;s=1;en=0;
#20 a=0;b=0;s=1;en=1;
#20 a=0;b=1;s=0;en=1;

#10000;
end

initial begin
$dumpfile("mux_cond.vcd");
$dumpvars(0,mux_cond_tb);
$display("EN A B S Y");
$monitor("%b %b %b %b %b",en,a,b,s,y);
end

endmodule
