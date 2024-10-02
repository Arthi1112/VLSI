module ripple_adder_tb ();
reg [3:0] a, b;
wire [3:0] sum;
wire cout;
integer i;
ripple_adder DUT(a, b, sum, cout);
initial
begin
for (i=0; i<50; i=i+1)
begin
a = i+2;
b = i+5;
#10;
end
end
initial
begin
$monitor("a=%b b=%b sum is %b %b", a,b,cout, sum); 
#800 $finish;
end
endmodule

