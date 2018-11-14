module cmos_not_tb();
reg a1;
wire out;

initial begin
$dumpfile("nottb");
$dumpvars(0,cmos_not_tb);
$display("in1, out");
$monitor("%b %b",a1,out);

#20 a1=1;
#20 a1=0;
end

cmos_not n(
  .a(a1),
  .y(out)
);
endmodule
