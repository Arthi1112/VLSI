module decoder (
    input wire [1:0] sel,
    output wire [3:0] out
);
    assign out = (1 << sel);
endmodule

module tristate_buffer (
    input wire in,
    input wire en,
    output wire out
);
    assign out = (en) ? in : 1'bz; // Output in or high impedance
endmodule

module mux4to1(
    input wire [3:0] data,
    input wire [1:0] sel,
    output wire out
);
    wire [3:0] dec_out;
    wire [3:0] tb_out;

    // Instantiate the decoder
    decoder dec (
        .sel(sel),
        .out(dec_out)
    );

    // Instantiate the tristate buffers for each input
    tristate_buffer tb0 (.in(data[0]), .en(dec_out[0]), .out(tb_out[0]));
    tristate_buffer tb1 (.in(data[1]), .en(dec_out[1]), .out(tb_out[1]));
    tristate_buffer tb2 (.in(data[2]), .en(dec_out[2]), .out(tb_out[2]));
    tristate_buffer tb3 (.in(data[3]), .en(dec_out[3]), .out(tb_out[3]));

    // Final output is the selected buffer
    assign out = tb_out[0] | tb_out[1] | tb_out[2] | tb_out[3]; // Combine outputs
endmodule
