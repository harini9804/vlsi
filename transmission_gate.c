module transmission_gate(a,g1,g2,y);

input a,g1,g2;
output y;

nmos(y,a,g1);
pmos(y,a,g2);

endmodule
