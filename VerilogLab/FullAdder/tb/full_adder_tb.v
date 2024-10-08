/********************************************************************************************
Copyright 2019 - Maven Silicon Softech Pvt Ltd. 
 
All Rights Reserved.

This source code is an unpublished work belongs to Maven Silicon Softech Pvt Ltd.

It is not to be shared with or used by any third parties who have not enrolled for our paid training 

courses or received any written authorization from Maven Silicon.


Webpage     :      www.maven-silicon.com

Filename    :	   full_adder_tb.v   

Description :      One bit Full adder Testbench

Author Name :      Susmita

Version     :      1.0
*********************************************************************************************/

module full_adder_tb();
		
   //Testbench global variables
   reg   a,b,cin;
   wire  sum,carry;

   //Variable for loop iteration 
   integer i;
	full_adder DUT(.a_in(a),
	               .b_in(b),
						.c_in(cin),
						.sum_out(sum),
						.carry_out(carry));

   //Step1 : Instantiate the full adder with order based port mapping

   //Process to initialize the variables at 0ns
   initial 
      begin
        {a,b,cin} = 0;
      end
				
   //Process to generate stimulus using for loop
   initial
      begin 
	     for (i=0;i<8;i=i+1)
	      begin
	        {a,b,cin}=i;
	        #10;
	      end
	     #20 $finish;	 
      end
				
   //Process to monitor the changes in the variables
   initial 
      $monitor("Values of a=%b, b=%b, cin=%b,sum =%b, carry=%b",a,b,cin,sum,carry);
									
endmodule
