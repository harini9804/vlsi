module syncounter(clock, reset, enable, count_out);
input clock, reset,enable;
output [7:0] count_out;

wire clock, reset, enable;
reg [7:0] count_out;

always @(posedge clock) begin
if(reset == 1'b1) begin
count_out <= #1 8'b00000000;
end
else if (enable == 1'b1) begin
count_out <= #1 count_out+1'b1;
end
end
endmodule
