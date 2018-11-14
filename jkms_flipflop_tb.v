module jkms_flipfloptb;
	reg clk,j,k;
      wire q,q_bar;
	wire clk2,j2,k2;
      jkms_flipflop  inst(q,q_bar,clk,j,k);
      assign clk2=clk;
	assign j2=j;
	assign k2=k;
	initial
               clk = 1'b0;
      always #10
               clk = ~clk;

      initial
      begin
           j = 1'b0; k = 1'b0;
           #60 j = 1'b0; k = 1'b1;
           #40 j = 1'b1; k = 1'b0;
           #20 j = 1'b1; k = 1'b1;
           #40 j = 1'b1; k = 1'b0;
           #5 j = 1'b0; #20 j = 1'b1;
           #100 $finish;

        end

        initial begin
           $dumpfile("jkms_flipfloptb.vcd");
           $dumpvars(0,jkms_flipfloptb);
           $display("time\t clock\t j\t k\t q\t q1\t");
           $monitor("%g\t %b\t %b\t %b\t %b\t %b\t",$time,clk2, j, k, q, q_bar);
        end

endmodule
