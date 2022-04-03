//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Fri Apr 16 02:26:51 2021
//Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
//Command     : generate_target bd_0_wrapper.bd
//Design      : bd_0_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module bd_0_wrapper
   (ap_clk,
    ap_ctrl_done,
    ap_ctrl_idle,
    ap_ctrl_ready,
    ap_ctrl_start,
    ap_return,
    ap_rst,
    p,
    p_13,
    p_15,
    p_17_address0,
    p_17_ce0,
    p_17_q0);
  input ap_clk;
  output ap_ctrl_done;
  output ap_ctrl_idle;
  output ap_ctrl_ready;
  input ap_ctrl_start;
  output [63:0]ap_return;
  input ap_rst;
  input [7:0]p;
  input [63:0]p_13;
  input [63:0]p_15;
  output [2:0]p_17_address0;
  output p_17_ce0;
  input [15:0]p_17_q0;

  wire ap_clk;
  wire ap_ctrl_done;
  wire ap_ctrl_idle;
  wire ap_ctrl_ready;
  wire ap_ctrl_start;
  wire [63:0]ap_return;
  wire ap_rst;
  wire [7:0]p;
  wire [63:0]p_13;
  wire [63:0]p_15;
  wire [2:0]p_17_address0;
  wire p_17_ce0;
  wire [15:0]p_17_q0;

  bd_0 bd_0_i
       (.ap_clk(ap_clk),
        .ap_ctrl_done(ap_ctrl_done),
        .ap_ctrl_idle(ap_ctrl_idle),
        .ap_ctrl_ready(ap_ctrl_ready),
        .ap_ctrl_start(ap_ctrl_start),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .p(p),
        .p_13(p_13),
        .p_15(p_15),
        .p_17_address0(p_17_address0),
        .p_17_ce0(p_17_ce0),
        .p_17_q0(p_17_q0));
endmodule
