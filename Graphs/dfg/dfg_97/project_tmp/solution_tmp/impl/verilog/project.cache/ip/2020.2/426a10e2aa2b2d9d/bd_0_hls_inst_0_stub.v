// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Sat May  1 15:37:51 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_0_hls_inst_0_stub.v
// Design      : bd_0_hls_inst_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "fn1,Vivado 2020.2" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(p_6_ce0, p_8_ce0, p_10_ce0, ap_clk, ap_rst, 
  ap_start, ap_done, ap_idle, ap_ready, ap_return, p, p_4, p_6_address0, p_6_q0, p_8_address0, p_8_q0, 
  p_10_address0, p_10_q0)
/* synthesis syn_black_box black_box_pad_pin="p_6_ce0,p_8_ce0,p_10_ce0,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,ap_return[31:0],p[31:0],p_4[63:0],p_6_address0[2:0],p_6_q0[15:0],p_8_address0[4:0],p_8_q0[7:0],p_10_address0[0:0],p_10_q0[31:0]" */;
  output p_6_ce0;
  output p_8_ce0;
  output p_10_ce0;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [31:0]ap_return;
  input [31:0]p;
  input [63:0]p_4;
  output [2:0]p_6_address0;
  input [15:0]p_6_q0;
  output [4:0]p_8_address0;
  input [7:0]p_8_q0;
  output [0:0]p_10_address0;
  input [31:0]p_10_q0;
endmodule
