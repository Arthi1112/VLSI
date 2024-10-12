module arithmetic_pitfalls;

    // Declare registers
    reg [3:0] a = 4'b0111; // 7 in decimal
    reg [3:0] b = 4'b0001; // 1 in decimal
    reg [3:0] result;
    reg signed [3:0] c = -4; // Signed number
    reg [3:0] d = 4'b0000; // Zero

    initial begin
        // 1. Integer Overflow
        result = a + b; // 7 + 1 = 8 (within range)
        $display("Overflow Test: %b (%d)", result, result); // Output: 8

        // 2. Signed vs. Unsigned Arithmetic
        result = c + b; // -4 + 1 = -3 (consider signed)
        $display("Signed Arithmetic: %b (%d)", result, result); // Output: -3

        // 3. Division by Zero
        if (d != 0) begin
            result = a / d; // This won't execute
            $display("Division Result: %b (%d)", result, result);
        end else begin
            $display("Error: Division by zero!");
        end

        // 4. Bitwise vs. Logical Operators
        result = a & b; // Bitwise AND
        $display("Bitwise AND: %b (%d)", result, result); // Output: 0

        result = a && b; // Logical AND
        $display("Logical AND: %b (%d)", result, result); // Output: 1
    end

endmodule

