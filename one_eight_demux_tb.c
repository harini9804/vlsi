module one_eight_demux_tb();

reg a,en;
reg [2:0]sel;
wire [7:0]y;

one_eight_demux oed(
  .a(a),
  .sel(sel),
  .y(y),
  .en(en)
);

initial begin
#10 a=0;sel=3'b000;en=1;
#10 a=1;sel=3'b001;en=1;
#10 a=1;sel=3'b010;en=1;
#10 a=0;sel=3'b011;en=1;
#10 a=1;sel=3'b100;en=1;
#10 a=1;sel=3'b101;en=1;
#10 a=0;sel=3'b110;en=1;
#10 a=0;sel=3'b111;en=1;
#20;
end

initial begin
$dumpfile("one_eight_demux.vcd");
$dumpvars(0,one_eight_demux_tb);
$display("EN A SEL Y ");
$monitor("%b %b %3b %8b",en,a,sel,y);
end


endmodule
