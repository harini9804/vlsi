module cmos_nor(a,b,y);

input a,b;
output y;
wire w;

supply0 gnd;
supply1 vcc;

nmos(y,gnd,a);
nmos(y,gnd,b);
pmos(w,vcc,a);
pmos(y,w,b);

endmodule