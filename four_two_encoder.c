module four_two_encoder(i3,i2,i1,i0,a,b,en);
input i0,i1,i2,i3,en;
output a,b;
reg a,b;

always @ (i0 or i1 or i2 or i3 or en)
begin
a = 0;
b = 0;

if(i3)begin
a=1;
b=1;
end

else if(i2)begin
a=1;
b=0;
end

else if(i1)begin
a=0;
b=1;
end

else begin
a=0;
b=0;
end

end
endmodule
