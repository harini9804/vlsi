module cmos_not(a,y);
input a;
output y;

supply0 gnd;
supply1 vcc;

nmos(y,gnd,a);
pmos(y,vcc,a);
endmodule
