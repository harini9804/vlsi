module one_eight_demux(a,sel,y,en);
input a,en;
input [2:0]sel;
output [7:0]y;
reg [7:0]y;

always @ (a or sel or en)
begin
y = 8'bxxxxxxxx;

case(sel)
0: y[0]=a;
1: y[1]=a;
2: y[2]=a;
3: y[3]=a;
4: y[4]=a;
5: y[5]=a;
6: y[6]=a;
7: y[7]=a;

endcase


end


endmodule
