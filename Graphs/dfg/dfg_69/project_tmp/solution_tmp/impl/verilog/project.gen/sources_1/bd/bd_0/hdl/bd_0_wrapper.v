//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Tue Apr 27 11:04:10 2021
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
    p_13_address0,
    p_13_address1,
    p_13_ce0,
    p_13_ce1,
    p_13_q0,
    p_13_q1,
    p_4,
    p_6,
    p_8,
    p_address0,
    p_ce0,
    p_q0);
  input ap_clk;
  output ap_ctrl_done;
  output ap_ctrl_idle;
  output ap_ctrl_ready;
  input ap_ctrl_start;
  output [63:0]ap_return;
  input ap_rst;
  output [3:0]p_13_address0;
  output [3:0]p_13_address1;
  output p_13_ce0;
  output p_13_ce1;
  input [15:0]p_13_q0;
  input [15:0]p_13_q1;
  input [15:0]p_4;
  input [63:0]p_6;
  input [7:0]p_8;
  output [1:0]p_address0;
  output p_ce0;
  input [63:0]p_q0;

  wire ap_clk;
  wire ap_ctrl_done;
  wire ap_ctrl_idle;
  wire ap_ctrl_ready;
  wire ap_ctrl_start;
  wire [63:0]ap_return;
  wire ap_rst;
  wire [3:0]p_13_address0;
  wire [3:0]p_13_address1;
  wire p_13_ce0;
  wire p_13_ce1;
  wire [15:0]p_13_q0;
  wire [15:0]p_13_q1;
  wire [15:0]p_4;
  wire [63:0]p_6;
  wire [7:0]p_8;
  wire [1:0]p_address0;
  wire p_ce0;
  wire [63:0]p_q0;

  bd_0 bd_0_i
       (.ap_clk(ap_clk),
        .ap_ctrl_done(ap_ctrl_done),
        .ap_ctrl_idle(ap_ctrl_idle),
        .ap_ctrl_ready(ap_ctrl_ready),
        .ap_ctrl_start(ap_ctrl_start),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .p_13_address0(p_13_address0),
        .p_13_address1(p_13_address1),
        .p_13_ce0(p_13_ce0),
        .p_13_ce1(p_13_ce1),
        .p_13_q0(p_13_q0),
        .p_13_q1(p_13_q1),
        .p_4(p_4),
        .p_6(p_6),
        .p_8(p_8),
        .p_address0(p_address0),
        .p_ce0(p_ce0),
        .p_q0(p_q0));
endmodule
