module Decoder (input a_in,b_in,
				   output q0_out,q1_out,q2_out,q3_out);
				   
	assign q0_out = (~a_in)&(~b_in);
	assign q1_out = (~a_in)&(b_in);
	assign q2_out = (a_in)&(~b_in);
	assign q3_out = a_in & b_in;
	
endmodule