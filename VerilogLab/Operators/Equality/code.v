module equality_example();

    reg [3:0] a, b;              // 4-bit registers for comparison
    reg is_logical_equal;        // Register for logical equality result
    reg is_case_equal;           // Register for case equality result

    initial begin
        // Initialize variables
        a = 4'b1010;              // 10 in decimal
        b = 4'b1010;              // 10 in decimal

        // Check for logical equality
        is_logical_equal = (a == b); // Logical equality check

        // Introduce an unknown state for case equality check
        a[1] = 1'bx;               // Set bit 1 of a to unknown (X)

        // Check for case equality
        is_case_equal = (a === b); // Case equality check

        // Display the results
        $display("a = %b, b = %b", a, b);
        $display("Logical equality (a == b): %b", is_logical_equal);
        $display("Case equality (a === b): %b", is_case_equal);
    end

endmodule
