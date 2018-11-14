module syncountertb;
reg clock, reset, enable;
wire [7:0] count_out;

syncounter tb(.clock(clock),
.reset(reset),
.enable(enable),
.count_out(count_out)
);

initial begin
  clock = 1;
  reset = 0;
  enable = 0;
  #5 reset = 1;
  #10 reset = 0;
  #10 enable = 1;
  #100 enable = 0;
  #5 $finish;
end

always begin
#5 clock = ~clock;
end

initial begin
   $dumpfile("eightbit_up.vcd");
   $dumpvars(0,syncountertb);
   $display("time\t clk reset enable counter");
   $monitor("%g\t %b %b %b %b",$time,clock, reset, enable, count_out);
end
endmodule
