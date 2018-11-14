module t_flipflop( q, q1, t, c);
output q, q1;
input t,c;
reg q, q1;
initial begin
  q = 1'b1;
  q1 = 1'b0;
end

always @ ( c ) begin
    if(c)
      begin
        if(t == 1'b0 )
          begin q =q;
          q1 = q1;
          end
          else
            begin
              q = ~q;
              q1 = ~q1;
            end
      end

end

endmodule
