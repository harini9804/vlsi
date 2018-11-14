module two_four_decoder(a,b,i0,i1,i2,i3,en);
input a,b,en;
output i0,i1,i2,i3;
reg i0,i1,i2,i3;


always @ (a or b or en)
  begin
  i0=0;
  i1=0;
  i2=0;
  i3=0;

  if(!a) begin
    case(b)
    0 : i0 =1;
    1 : i1 = 1;
    endcase
  end else begin
    case(b)
    0 : i2 =1;
    1 : i3 = 1;
    endcase
  end
  end
endmodule
