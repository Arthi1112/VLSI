////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: ripple_adder_synthesis.v
// /___/   /\     Timestamp: Thu Oct  3 00:05:28 2024
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim ripple_adder.ngc ripple_adder_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: ripple_adder.ngc
// Output file	: /home/artmad/VLSI/VerilogLab/RippleCarryAdder/RippleCarryAdder/netgen/synthesis/ripple_adder_synthesis.v
// # of Modules	: 1
// Design Name	: ripple_adder
// Xilinx        : /opt/Xilinx/14.7/ISE_DS/ISE/
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module ripple_adder (
  cout, a, b, sum
);
  output cout;
  input [3 : 0] a;
  input [3 : 0] b;
  output [3 : 0] sum;
  wire a_0_IBUF_0;
  wire a_1_IBUF_1;
  wire a_2_IBUF_2;
  wire a_3_IBUF_3;
  wire b_0_IBUF_4;
  wire b_1_IBUF_5;
  wire b_2_IBUF_6;
  wire b_3_IBUF_7;
  wire sum_0_OBUF_8;
  wire sum_1_OBUF_9;
  wire sum_2_OBUF_10;
  wire c2;
  wire sum_3_OBUF_12;
  wire cout_OBUF_13;
  LUT2 #(
    .INIT ( 4'h6 ))
  \A1/HA2/Mxor_sum_xo<0>1  (
    .I0(a_0_IBUF_0),
    .I1(b_0_IBUF_4),
    .O(sum_0_OBUF_8)
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \A4/carry_out1  (
    .I0(b_3_IBUF_7),
    .I1(c2),
    .I2(a_3_IBUF_3),
    .O(cout_OBUF_13)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \A4/HA2/Mxor_sum_xo<0>1  (
    .I0(a_3_IBUF_3),
    .I1(b_3_IBUF_7),
    .I2(c2),
    .O(sum_3_OBUF_12)
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \A2/HA2/Mxor_sum_xo<0>1  (
    .I0(a_0_IBUF_0),
    .I1(b_0_IBUF_4),
    .I2(a_1_IBUF_1),
    .I3(b_1_IBUF_5),
    .O(sum_1_OBUF_9)
  );
  LUT6 #(
    .INIT ( 64'hEEE8E888E888E888 ))
  \A3/carry_out1  (
    .I0(a_2_IBUF_2),
    .I1(b_2_IBUF_6),
    .I2(a_1_IBUF_1),
    .I3(b_1_IBUF_5),
    .I4(a_0_IBUF_0),
    .I5(b_0_IBUF_4),
    .O(c2)
  );
  LUT6 #(
    .INIT ( 64'h9996966696669666 ))
  \A3/HA2/Mxor_sum_xo<0>1  (
    .I0(a_2_IBUF_2),
    .I1(b_2_IBUF_6),
    .I2(a_1_IBUF_1),
    .I3(b_1_IBUF_5),
    .I4(a_0_IBUF_0),
    .I5(b_0_IBUF_4),
    .O(sum_2_OBUF_10)
  );
  IBUF   a_3_IBUF (
    .I(a[3]),
    .O(a_3_IBUF_3)
  );
  IBUF   a_2_IBUF (
    .I(a[2]),
    .O(a_2_IBUF_2)
  );
  IBUF   a_1_IBUF (
    .I(a[1]),
    .O(a_1_IBUF_1)
  );
  IBUF   a_0_IBUF (
    .I(a[0]),
    .O(a_0_IBUF_0)
  );
  IBUF   b_3_IBUF (
    .I(b[3]),
    .O(b_3_IBUF_7)
  );
  IBUF   b_2_IBUF (
    .I(b[2]),
    .O(b_2_IBUF_6)
  );
  IBUF   b_1_IBUF (
    .I(b[1]),
    .O(b_1_IBUF_5)
  );
  IBUF   b_0_IBUF (
    .I(b[0]),
    .O(b_0_IBUF_4)
  );
  OBUF   sum_3_OBUF (
    .I(sum_3_OBUF_12),
    .O(sum[3])
  );
  OBUF   sum_2_OBUF (
    .I(sum_2_OBUF_10),
    .O(sum[2])
  );
  OBUF   sum_1_OBUF (
    .I(sum_1_OBUF_9),
    .O(sum[1])
  );
  OBUF   sum_0_OBUF (
    .I(sum_0_OBUF_8),
    .O(sum[0])
  );
  OBUF   cout_OBUF (
    .I(cout_OBUF_13),
    .O(cout)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

