module sr_flipfloptb;
reg r,s,clock;
wire q,q1;

sr_flipflop srff(.q(q),
.q1(q1),
.r(r),
.s(s),
.clk(clock)
);

initial begin
  clock = 1;
  r=0;
  s=0;
  #100;
  #5 $finish;
end

always begin
#5 clock = ~clock;
#5 s = ~s;
end

initial begin
   $dumpfile("sr_flipfloptb.vcd");
   $dumpvars(0,sr_flipfloptb);
   $display("time\t clock\t r\t s\t q\t q1\t");
   $monitor("%g\t %b\t %b\t %b\t %b\t %b\t",$time,clock, r, s, q, q1);
end
endmodule
