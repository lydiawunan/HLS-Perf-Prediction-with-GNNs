//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Wed Apr 28 23:38:02 2021
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
    p_13_address0,
    p_13_address1,
    p_13_ce0,
    p_13_ce1,
    p_13_d0,
    p_13_d1,
    p_13_q0,
    p_13_q1,
    p_13_we0,
    p_13_we1,
    p_9);
  output ap_ctrl_done;
  output ap_ctrl_idle;
  output ap_ctrl_ready;
  input ap_ctrl_start;
  output [15:0]ap_return;
  input [15:0]p;
  output [1:0]p_13_address0;
  output [1:0]p_13_address1;
  output p_13_ce0;
  output p_13_ce1;
  output [63:0]p_13_d0;
  output [63:0]p_13_d1;
  input [63:0]p_13_q0;
  input [63:0]p_13_q1;
  output p_13_we0;
  output p_13_we1;
  input [7:0]p_9;

  wire ap_ctrl_done;
  wire ap_ctrl_idle;
  wire ap_ctrl_ready;
  wire ap_ctrl_start;
  wire [15:0]ap_return;
  wire [15:0]p;
  wire [1:0]p_13_address0;
  wire [1:0]p_13_address1;
  wire p_13_ce0;
  wire p_13_ce1;
  wire [63:0]p_13_d0;
  wire [63:0]p_13_d1;
  wire [63:0]p_13_q0;
  wire [63:0]p_13_q1;
  wire p_13_we0;
  wire p_13_we1;
  wire [7:0]p_9;

  bd_0 bd_0_i
       (.ap_ctrl_done(ap_ctrl_done),
        .ap_ctrl_idle(ap_ctrl_idle),
        .ap_ctrl_ready(ap_ctrl_ready),
        .ap_ctrl_start(ap_ctrl_start),
        .ap_return(ap_return),
        .p(p),
        .p_13_address0(p_13_address0),
        .p_13_address1(p_13_address1),
        .p_13_ce0(p_13_ce0),
        .p_13_ce1(p_13_ce1),
        .p_13_d0(p_13_d0),
        .p_13_d1(p_13_d1),
        .p_13_q0(p_13_q0),
        .p_13_q1(p_13_q1),
        .p_13_we0(p_13_we0),
        .p_13_we1(p_13_we1),
        .p_9(p_9));
endmodule
