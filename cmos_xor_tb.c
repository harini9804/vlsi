module  cmos_xor_tb();
reg a1,b1;
wire out;

initial begin
$dumpfile("xortb");
$dumpvars(0, cmos_xor_tb);
$display("in1,in2,out");
$monitor("%b %b %b",a1,b1,out);
#20 a1=0;b1=0;
#20 a1=0;b1=1;
#20 a1=1;b1=0;
#20 a1=1;b1=1;
end

cmos_xor xr(
	.a(a1),
	.b(b1),
	.y(out)
	);
endmodule
