//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Mon Apr 26 20:56:57 2021
//Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
//Command     : generate_target bd_0_wrapper.bd
//Design      : bd_0_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module bd_0_wrapper
   (ap_ctrl_done,
    ap_ctrl_idle,
    ap_ctrl_ready,
    ap_ctrl_start,
    ap_return,
    p,
    p_11_address0,
    p_11_address1,
    p_11_ce0,
    p_11_ce1,
    p_11_d0,
    p_11_d1,
    p_11_q0,
    p_11_q1,
    p_11_we0,
    p_11_we1,
    p_13,
    p_4,
    p_6);
  output ap_ctrl_done;
  output ap_ctrl_idle;
  output ap_ctrl_ready;
  input ap_ctrl_start;
  output [7:0]ap_return;
  input [63:0]p;
  output [2:0]p_11_address0;
  output [2:0]p_11_address1;
  output p_11_ce0;
  output p_11_ce1;
  output [31:0]p_11_d0;
  output [31:0]p_11_d1;
  input [31:0]p_11_q0;
  input [31:0]p_11_q1;
  output p_11_we0;
  output p_11_we1;
  input [63:0]p_13;
  input [31:0]p_4;
  input [63:0]p_6;

  wire ap_ctrl_done;
  wire ap_ctrl_idle;
  wire ap_ctrl_ready;
  wire ap_ctrl_start;
  wire [7:0]ap_return;
  wire [63:0]p;
  wire [2:0]p_11_address0;
  wire [2:0]p_11_address1;
  wire p_11_ce0;
  wire p_11_ce1;
  wire [31:0]p_11_d0;
  wire [31:0]p_11_d1;
  wire [31:0]p_11_q0;
  wire [31:0]p_11_q1;
  wire p_11_we0;
  wire p_11_we1;
  wire [63:0]p_13;
  wire [31:0]p_4;
  wire [63:0]p_6;

  bd_0 bd_0_i
       (.ap_ctrl_done(ap_ctrl_done),
        .ap_ctrl_idle(ap_ctrl_idle),
        .ap_ctrl_ready(ap_ctrl_ready),
        .ap_ctrl_start(ap_ctrl_start),
        .ap_return(ap_return),
        .p(p),
        .p_11_address0(p_11_address0),
        .p_11_address1(p_11_address1),
        .p_11_ce0(p_11_ce0),
        .p_11_ce1(p_11_ce1),
        .p_11_d0(p_11_d0),
        .p_11_d1(p_11_d1),
        .p_11_q0(p_11_q0),
        .p_11_q1(p_11_q1),
        .p_11_we0(p_11_we0),
        .p_11_we1(p_11_we1),
        .p_13(p_13),
        .p_4(p_4),
        .p_6(p_6));
endmodule
