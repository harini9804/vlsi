module sub_32(a,b,c);
input [31:0]a;
input [31:0]b;
output [31:0]c;
reg [31:0] c;

wire en;
assign en =1;

//assign c = 32'b00000000000000000000000000000000;
always @ (en or a or b)
begin

// assign c= a-b;
if(a>=b)begin
 c= a-b;
end
else begin
 c = b-a;
end

end
endmodule
