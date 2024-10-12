module tb_decoder3to8;

    reg [2:0] A;           // 3-bit input
    wire [7:0] Y;         // 8-bit output

    // Instantiate the decoder
    decoder3to8 uut (
        .A(A),
        .Y(Y)
    );

    initial begin
        // Monitor the output
        $monitor("A = %b, Y = %b", A, Y);
        
        // Test all input combinations
        A = 3'b000; #10; // Expect Y = 00000001
        A = 3'b001; #10; // Expect Y = 00000010
        A = 3'b010; #10; // Expect Y = 00000100
        A = 3'b011; #10; // Expect Y = 00001000
        A = 3'b100; #10; // Expect Y = 00010000
        A = 3'b101; #10; // Expect Y = 00100000
        A = 3'b110; #10; // Expect Y = 01000000
        A = 3'b111; #10; // Expect Y = 10000000
        
        // End simulation
        $finish;
    end

endmodule
