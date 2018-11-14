
module cmos_nand(a,b,y);

input a,b;
output y;
wire w;

supply0 gnd;
supply1 vdd;

nmos(w,gnd,b);
nmos(y,w,a);
pmos(y,vdd,b);
pmos(y,vdd,a);

endmodule
