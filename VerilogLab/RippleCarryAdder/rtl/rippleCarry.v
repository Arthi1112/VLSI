module ripple_adder (input [3:0] a, b, output [3:0] sum, output cout);
    wire c0, c1, c2; // Carry wires between stages

    full_adder A1 (.a_in(a[0]), .b_in(b[0]), .c_in(1'b0), .sum_out(sum[0]), .carry_out(c0));
    full_adder A2 (.a_in(a[1]), .b_in(b[1]), .c_in(c0), .sum_out(sum[1]), .carry_out(c1));
    full_adder A3 (.a_in(a[2]), .b_in(b[2]), .c_in(c1), .sum_out(sum[2]), .carry_out(c2));
    full_adder A4 (.a_in(a[3]), .b_in(b[3]), .c_in(c2), .sum_out(sum[3]), .carry_out(cout));
endmodule



