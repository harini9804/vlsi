module sub_32_tb();

reg [31:0]a;
reg [31:0]b;
wire [31:0]c;

sub_32 sub32(
.a(a),
.b(b),
.c(c)
);

initial begin
#10 a=32'b00000000000010000000000001000000;b=32'b00001000000000010011001000000000;
#1024 $finish;
end
always #64 a[31]=~a[31];
always #64 b[31]=~b[31];

always #32 a[15]=~a[15];
// always #32 b[15]=~b[15];

always #16 a[8]=~a[8];
// always #16 b[8]=~b[8];

// always #4 a[6]=~a[6];
always #4 b[6]=~b[6];
initial begin
$dumpfile("sub_32.vcd");
$dumpvars(0,sub_32_tb);
$display("A                                      B                                          C ");
$monitor("%31b %31b %31b",a,b,c);
end



endmodule
