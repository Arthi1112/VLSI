module simple_relational();

    reg [3:0] a, b;
    reg eq, neq, gt, lt;

    initial begin
        // Initialize variables
        a = 4'b1010;  // 10 in decimal
        b = 4'b0111;  // 7 in decimal

        // Relational operations
        eq = (a == b);  // Equality
        neq = (a != b); // Inequality
        gt = (a > b);   // Greater than
        lt = (a < b);   // Less than

        // Display results
        $display("a = %b, b = %b", a, b);
        $display("a == b: %b", eq);
        $display("a != b: %b", neq);
        $display("a > b: %b", gt);
        $display("a < b: %b", lt);
    end

endmodule
