module parity_check(a,y);

input [3:0]a;
output y;
reg y;
wire op;

assign op = a[0]^a[1]^a[2]^a[3];

always @ (1)
begin

if(op==1)
assign y = 1;
else
assign y=0;

end

endmodule
