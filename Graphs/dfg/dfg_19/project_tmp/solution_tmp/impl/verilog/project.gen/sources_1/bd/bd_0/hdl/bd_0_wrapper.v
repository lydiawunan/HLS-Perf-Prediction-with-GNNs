//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Sun Apr 11 17:42:27 2021
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
    p_9,
    p_address0,
    p_address1,
    p_ce0,
    p_ce1,
    p_d0,
    p_d1,
    p_q0,
    p_q1,
    p_we0,
    p_we1);
  output ap_ctrl_done;
  output ap_ctrl_idle;
  output ap_ctrl_ready;
  input ap_ctrl_start;
  output [63:0]ap_return;
  input [63:0]p_9;
  output [2:0]p_address0;
  output [2:0]p_address1;
  output p_ce0;
  output p_ce1;
  output [31:0]p_d0;
  output [31:0]p_d1;
  input [31:0]p_q0;
  input [31:0]p_q1;
  output p_we0;
  output p_we1;

  wire ap_ctrl_done;
  wire ap_ctrl_idle;
  wire ap_ctrl_ready;
  wire ap_ctrl_start;
  wire [63:0]ap_return;
  wire [63:0]p_9;
  wire [2:0]p_address0;
  wire [2:0]p_address1;
  wire p_ce0;
  wire p_ce1;
  wire [31:0]p_d0;
  wire [31:0]p_d1;
  wire [31:0]p_q0;
  wire [31:0]p_q1;
  wire p_we0;
  wire p_we1;

  bd_0 bd_0_i
       (.ap_ctrl_done(ap_ctrl_done),
        .ap_ctrl_idle(ap_ctrl_idle),
        .ap_ctrl_ready(ap_ctrl_ready),
        .ap_ctrl_start(ap_ctrl_start),
        .ap_return(ap_return),
        .p_9(p_9),
        .p_address0(p_address0),
        .p_address1(p_address1),
        .p_ce0(p_ce0),
        .p_ce1(p_ce1),
        .p_d0(p_d0),
        .p_d1(p_d1),
        .p_q0(p_q0),
        .p_q1(p_q1),
        .p_we0(p_we0),
        .p_we1(p_we1));
endmodule
