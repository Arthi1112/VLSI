`timescale 1ns / 1ps

module tb_mux4to1();

    // Testbench signals
    reg [3:0] data;      // 4-bit input data
    reg [1:0] sel;       // 2-bit selector
    wire out;            // Output of the mux

    // Instantiate the mux4to1 module
    mux4to1 uut (
        .data(data),
        .sel(sel),
        .out(out)
    );

    // Testbench process
    initial begin
        // Initialize inputs
        data = 4'b0000; sel = 2'b00;
        #10; // Wait for 10 time units
        
        // Test case 1: Select data[0]
        data = 4'b1010; sel = 2'b00; // Expect out = data[0] = 1
        #10; // Wait for 10 time units

        // Test case 2: Select data[1]
        data = 4'b1010; sel = 2'b01; // Expect out = data[1] = 0
        #10; // Wait for 10 time units

        // Test case 3: Select data[2]
        data = 4'b1010; sel = 2'b10; // Expect out = data[2] = 1
        #10; // Wait for 10 time units

        // Test case 4: Select data[3]
        data = 4'b1010; sel = 2'b11; // Expect out = data[3] = 0
        #10; // Wait for 10 time units

        // Test case 5: Random case
        data = 4'b1101; sel = 2'b10; // Expect out = data[2] = 0
        #10;

        // Test case 6: Another random case
        data = 4'b1110; sel = 2'b11; // Expect out = data[3] = 1
        #10;

        // Finish the simulation
        $stop;
    end

endmodule
