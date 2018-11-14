module adder_32_tb();

reg [31:0]a;
reg [31:0]b;
wire [32:0]c;

adder_32 add32(
.a(a),
.b(b),
.c(c)
);

initial begin
#10 a=32'b00000000000000000000000000000000;b=32'b00000000000000000000000000000000;
#1024 $finish;
end
always #64 a[31]=~a[31];
always #64 b[31]=~b[31];
always #32 a[6]=~a[6];
always #64 b[6]=~b[6];
always #32 a[15]=~a[15];
always #32 b[15]=~b[15];
always #16 a[8]=~a[8];
always #16 b[8]=~b[8];
initial begin
$dumpfile("adder_32");
$dumpvars(0,adder_32_tb);
$display("A                                      B                                          C ");
$monitor("%31b %31b %32b",a,b,c);
end



endmodule
