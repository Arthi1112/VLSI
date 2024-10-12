`timescale 1ns/1ps

module tb_bidirectional_buffer;

    reg dir;            // Control signal for direction
    reg in_data;        // Input data signal
    wire data;          // Bidirectional data line
    wire out_data;      // Output data signal

    // Instantiate the bidirectional buffer
    bidirectional_buffer uut (
        .data(data),
        .dir(dir),
        .in_data(in_data),
        .out_data(out_data)
    );

    initial begin
        // Initialize signals
        dir = 0;
        in_data = 0;

        // Test case 1: dir = 1, in_data drives data
        #10 dir = 1; in_data = 1;
        #10 dir = 1; in_data = 0;

        // Test case 2: dir = 0, data drives out_data
        #10 dir = 0; // The output should hold the last state of the bidirectional data
        
        // Test case 3: dir = 1, driving the new value
        #10 dir = 1; in_data = 1;

        // Finish simulation
        #20 $finish;
    end

    // Monitor the signals for debugging
    initial begin
        $monitor("Time: %0t | dir: %b | in_data: %b | data: %b | out_data: %b", $time, dir, in_data, data, out_data);
    end

endmodule
