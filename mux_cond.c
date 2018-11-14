module mux_cond(a,b,s,en,y);
input a,b;
input s,en;
output y;
reg y;
wire s;

 always @ (a or b or en)
 begin
if(en==1)
  y= (s==1)?b:a;
else
y=1'bx;
 end

endmodule
