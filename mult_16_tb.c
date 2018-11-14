module mult_16_tb();

reg [15:0]a;
reg [15:0]b;
wire [31:0]c;

mult_16 mult16(
.a(a),
.b(b),
.c(c)
);

initial begin
#10 a=16'b1111111111111111;b=16'b1111111111111111;
#1024 $finish;
end
always #64 a[13]=~a[13];
always #64 b[11]=~b[11];
always #32 a[6]=~a[6];
always #64 b[4]=~b[4];
always #32 a[15]=~a[15];
always #32 b[15]=~b[15];
always #16 a[8]=~a[8];
always #16 b[2]=~b[2];
initial begin
$dumpfile("mult_16.vcd");
$dumpvars(0,mult_16_tb);
$display("A                      B                    C ");
$monitor("%16b %16b %32b",a,b,c);
end



endmodule
