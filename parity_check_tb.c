module parity_check_tb();

reg [3:0]a;
wire y;

parity_check pc(
  .a(a),
  .y(y)
);

initial begin
#10 a=4'b0000;
#10 a=4'b0001;
#10 a=4'b0010;
#10 a=4'b0011;
#10 a=4'b0100;
#10 a=4'b0101;
#10 a=4'b0110;
#10 a=4'b0111;
#10 a=4'b1000;
#10 a=4'b1001;
#10 a=4'b1010;
#10 a=4'b1011;
#10 a=4'b1100;
#20;
end

initial begin
$dumpfile("parity_check.vcd");
$dumpvars(0,parity_check_tb);
$display("A Y ");
$monitor("%4b %b",a,y);
end


endmodule
