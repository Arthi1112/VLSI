module Decoder_tb;
reg a,b;
wire q0,q1,q2,q3;

Decoder Decoder_tb(a,b,q0,q1,q2,q3);
initial

begin
#000 a=0;b=0;
#100 a=0;b=1;
#100 a=1;b=0;
#100 a=1;b=1;
end

initial
begin
$monitor("Value of a=%b,b=%b,q0=%b,q1=%b,q2=%b,q3=%b",a,b,q0,q1,q2,q3);
end
endmodule