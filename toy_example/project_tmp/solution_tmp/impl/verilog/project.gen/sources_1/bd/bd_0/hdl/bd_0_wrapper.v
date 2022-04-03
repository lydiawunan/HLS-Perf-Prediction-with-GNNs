//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Sun May 16 13:52:39 2021
//Host        : ece-rschsrv01.ece.gatech.edu running 64-bit Red Hat Enterprise Linux Server release 7.9 (Maipo)
//Command     : generate_target bd_0_wrapper.bd
//Design      : bd_0_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module bd_0_wrapper
   (a,
    a_ap_vld,
    ap_clk,
    ap_ctrl_done,
    ap_ctrl_idle,
    ap_ctrl_ready,
    ap_ctrl_start,
    ap_rst,
    b,
    c_i,
    c_o,
    c_o_ap_vld);
  output [31:0]a;
  output a_ap_vld;
  input ap_clk;
  output ap_ctrl_done;
  output ap_ctrl_idle;
  output ap_ctrl_ready;
  input ap_ctrl_start;
  input ap_rst;
  input [31:0]b;
  input [31:0]c_i;
  output [31:0]c_o;
  output c_o_ap_vld;

  wire [31:0]a;
  wire a_ap_vld;
  wire ap_clk;
  wire ap_ctrl_done;
  wire ap_ctrl_idle;
  wire ap_ctrl_ready;
  wire ap_ctrl_start;
  wire ap_rst;
  wire [31:0]b;
  wire [31:0]c_i;
  wire [31:0]c_o;
  wire c_o_ap_vld;

  bd_0 bd_0_i
       (.a(a),
        .a_ap_vld(a_ap_vld),
        .ap_clk(ap_clk),
        .ap_ctrl_done(ap_ctrl_done),
        .ap_ctrl_idle(ap_ctrl_idle),
        .ap_ctrl_ready(ap_ctrl_ready),
        .ap_ctrl_start(ap_ctrl_start),
        .ap_rst(ap_rst),
        .b(b),
        .c_i(c_i),
        .c_o(c_o),
        .c_o_ap_vld(c_o_ap_vld));
endmodule
