module mux4x1_tb();
    reg ta, tb, tc, td;
    reg [1:0] tsel;
    wire out;

    // Instantiating the 4x1 MUX module
    mux4x1 dut(.j(ta), .k(tb), .l(tc), .m(td), .sel(tsel), .out(out));

    initial begin
        $dumpfile("mux4x1.vcd");  // Dump waveform file
        $dumpvars(1, mux4x1_tb);  // Dump all variables in this testbench module
    end

    initial begin
        // Print header
        $display("Time | tsel | ta | tb | tc | td | out");

        // Test case 1
        tsel = 2'b00; ta = 0; tb = 1; tc = 0; td = 1;
        #5 $display("%0t |  %b   | %b  | %b  | %b  | %b  | %b", $time, tsel, ta, tb, tc, td, out);

        // Test case 2
        tsel = 2'b01; ta = 1; tb = 1; tc = 0; td = 1;
        #5 $display("%0t |  %b   | %b  | %b  | %b  | %b  | %b", $time, tsel, ta, tb, tc, td, out);

        // Test case 3
        tsel = 2'b10; ta = 0; tb = 0; tc = 0; td = 1;
        #5 $display("%0t |  %b   | %b  | %b  | %b  | %b  | %b", $time, tsel, ta, tb, tc, td, out);

        // Test case 4
        tsel = 2'b11; ta = 1; tb = 1; tc = 1; td = 1;
        #5 $display("%0t |  %b   | %b  | %b  | %b  | %b  | %b", $time, tsel, ta, tb, tc, td, out);

        // End simulation
        $finish();
    end
endmodule
