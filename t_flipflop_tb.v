module t_flipfloptb;
reg t,clock;
wire q,q1;

t_flipflop tff(.q(q),
.q1(q1),
.t(t),
.c(clock)
);

initial begin
  clock = 1;
  t =0;
  #100;
  #5 $finish;
end

always begin
#5 clock = ~clock;
#5 t = ~t;
end

initial begin
   $dumpfile("t_flipfloptb.vcd");
   $dumpvars(0,t_flipfloptb);
   $display("time\t clock t q q1");
   $monitor("%g\t %b %b %b %b",$time,clock, t, q, q1);
end
endmodule
