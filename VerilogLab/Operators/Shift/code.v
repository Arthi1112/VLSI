module shift_op ();
    reg [3:0] a,b,x,y,z;
	 initial
	     begin
		      a = 4'b0110; b = 4'b1100;
				x = a << 1;
				y = b >> 2;
				z = a >>> 1;
				$display("y = %b; z = %b", y,z);
		  end
endmodule
