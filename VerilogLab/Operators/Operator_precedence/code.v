module operator_precedence;

    reg [3:0] a = 4'b0011; // 3 in decimal
    reg [3:0] b = 4'b0001; // 1 in decimal
    reg [3:0] c = 4'b0100; // 4 in decimal
    reg [3:0] result;

    initial begin
        // Example of operator precedence
        result = a + b * c; // Multiplication has higher precedence than addition
        $display("Result of a + b * c: %b (%d)", result, result); // Should output 7 (3 + 4)

        result = (a + b) * c; // Parentheses change precedence
        $display("Result of (a + b) * c: %b (%d)", result, result); // Should output 12 (4 * 4)

        result = a - b + c; // Left to right for same precedence
        $display("Result of a - b + c: %b (%d)", result, result); // Should output 6 (2 + 4)
    end

endmodule

