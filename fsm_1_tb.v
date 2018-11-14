module fsm_1_test;

reg  clk, rst, inp;
wire outp;
reg[15:0] sequence;
integer i;

fsm_1 dut( clk, rst, inp, outp);

initial
begin

   clk = 0;
        rst = 1;
        sequence = 16'b0111111111111110;
   #5 rst = 0;

   for( i = 0; i <= 16; i = i + 1)
   begin
      inp = sequence[i]; 
      #2 clk = 1;
      #2 clk = 0;
      $display("State = ", dut.state, " Input = ", inp, ", Output = ", outp);

   end

end

endmodule
