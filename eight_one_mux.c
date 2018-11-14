module eight_one_mux(a,b,c,d,e,f,g,h,sel,y);
input a,b,c,d,e,f,g,h;
input [2:0]sel;
output y;
reg y;

always @ (sel or a or b or c or d or e or f or g or h)
begin
case(sel)

0: y=a;
1: y=b;
2: y=c;
3: y=d;
4: y=e;
5: y=f;
6: y=g;
7: y=h;

endcase
end

endmodule
