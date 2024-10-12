module bidirectional_buffer (
    inout wire data,     // Bidirectional data line
    input wire dir,      // Direction control: 1 for input to output, 0 for output to input
    input wire in_data,  // Input data when dir = 1 (Input to Output)
    output wire out_data // Output data when dir = 0 (Output to Input)
);

    // When dir is 1, data flows from in_data to the bidirectional data line
    assign data = dir ? in_data : 1'bz;

    // When dir is 0, data flows from the bidirectional data line to out_data
    assign out_data = data;

endmodule
