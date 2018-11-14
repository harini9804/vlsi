module jkms_flipflop(q,q_bar,clk,j,k);
	output q,q_bar;
	input clk,j,k;
	reg tq,q,q_bar;

	always @(clk)
	begin

	if (!clk)
	begin
	if (j==1'b0 && k==1'b1)
				tq <= 1'b0;

	else if (j==1'b1 && k==1'b0)
				tq <= 1'b1;

	else if (j==1'b1 && k==1'b1)
				tq <= ~tq;

	end
	if (clk)
	begin

		q <= tq;
		q_bar <= ~tq;

		end
	end
endmodule
