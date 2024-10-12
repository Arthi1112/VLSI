module logical_op();

  reg [2:0]a,b;
  reg c;
  reg x,y,z;
  initial
    begin
	   a = 3'd5;
		b = 3'b111;
		c = 1'bx;
		x = a && b;
		y = a && c;
		z = b && 0;
		$display("x = %b,y = %b,z + %b",x,y,z);
	 end
	 
endmodule
