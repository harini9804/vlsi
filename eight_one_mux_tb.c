module eight_one_mux_tb();

reg a,b,c,d,e,f,g,h;
reg [2:0]sel;
wire y;

eight_one_mux eom(
  .a(a),
  .b(b),
  .c(c),
  .d(d),
  .e(e),
  .f(f),
  .g(g),
  .h(h),
  .sel(sel),
  .y(y)

);

initial begin
#10 a=0;b=0;c=1;d=0;e=1;f=0;g=1;h=0;sel=3'b000;
#10 a=0;b=0;c=1;d=0;e=1;f=0;g=1;h=0;sel=3'b001;
#10 a=0;b=0;c=1;d=0;e=1;f=0;g=1;h=0;sel=3'b010;
#10 a=0;b=0;c=1;d=0;e=1;f=0;g=1;h=0;sel=3'b011;
#10 a=0;b=0;c=1;d=0;e=1;f=0;g=1;h=0;sel=3'b100;
#10 a=0;b=0;c=1;d=0;e=1;f=0;g=1;h=0;sel=3'b101;
#10 a=0;b=0;c=1;d=0;e=1;f=0;g=1;h=0;sel=3'b110;
#10 a=0;b=0;c=1;d=0;e=1;f=0;g=1;h=0;sel=3'b111;
#20;
end

initial begin
$dumpfile("eight_one_mux");
$dumpvars(0,eight_one_mux_tb);
$display("SEL,A,B,C,D,E,F,G,H,Y");
$monitor("%3b %b %b %b %b %b %b %b %b %b",sel,a,b,c,d,e,f,g,h,y);
end



endmodule
