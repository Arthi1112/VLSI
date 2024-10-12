module arith_op();
   reg [3:0]a,b,c;
	integer d,e;
	reg [3:0]x,y,z;
	integer k,l,m;
	
	initial
	 begin
	   a = 4'b0010;
		b = 4'b0011;
		c = 4'b101x;
		d = 3;
		e = 8;
		x = a * b;    //evaluate to 0110
		y = a + b;    //evaluate to 0101
		z = b - a;    //evaluate to 0001
		k = c * a;    //evaluate to x
		l = e / d;    //evaluate to 2,fraction is truncated
		m = e % d;    //evaluate to 2
	 end
endmodule
