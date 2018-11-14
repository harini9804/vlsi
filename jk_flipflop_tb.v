module jk_flipfloptb;
reg j,k,clock;
wire q,q1;

jk_flipflop jkff(.q(q),
.q1(q1),
.j(j),
.k(k),
.c(clock)
);

initial begin
  clock = 1;
  j=0;
  k=0;
  #100;
  #5 $finish;
end

always begin
#5 clock = ~clock;
#5 j = ~j;
#10 k = ~k;
end

initial begin
   $dumpfile("jk_flipfloptb.vcd");
   $dumpvars(0,jk_flipfloptb);
   $display("time\t clock\t j\t k\t q\t q1\t");
   $monitor("%g\t %b\t %b\t %b\t %b\t %b\t",$time,clock, j, k, q, q1);
end
endmodule
