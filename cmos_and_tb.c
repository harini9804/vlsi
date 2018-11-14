module cmos_and_tb();
reg a1,b1;
wire out;

initial begin
$dumpfile("andtb");
$dumpvars(0,cmos_and_tb);
$display("in1, in2, out");
$monitor("%b %b %b",a1,b1,out);

#20 a1=0;b1=0;
#20 a1=0;b1=1;
#20 a1=1;b1=0;
#20 a1=1;b1=1;
end

cmos_and an(
  .a(a1),
  .b(b1),
  .y(out)
);
endmodule
