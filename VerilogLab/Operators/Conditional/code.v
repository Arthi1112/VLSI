module conditional_operator_example();

    reg [3:0] a, b;            // 4-bit registers
    reg [3:0] max_value;       // Register to hold the maximum value

    initial begin
        // Initialize variables
        a = 4'b1010;            // 10 in decimal
        b = 4'b0111;            // 7 in decimal

        // Use conditional operator to determine the maximum value
        max_value = (a > b) ? a : b; // If a > b, max_value = a; else max_value = b

        // Display the results
        $display("a = %b, b = %b, max_value = %b", a, b, max_value);
    end

endmodule
