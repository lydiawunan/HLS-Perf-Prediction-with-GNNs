// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Fri Apr 16 02:38:27 2021
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
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(p_ce0, p_4_ce0, ap_clk, ap_rst, ap_start, ap_done, 
  ap_idle, ap_ready, ap_return, p_address0, p_q0, p_4_address0, p_4_q0, p_6, p_9, p_13)
/* synthesis syn_black_box black_box_pad_pin="p_ce0,p_4_ce0,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,ap_return[15:0],p_address0[3:0],p_q0[7:0],p_4_address0[2:0],p_4_q0[63:0],p_6[63:0],p_9[7:0],p_13[15:0]" */;
  output p_ce0;
  output p_4_ce0;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [15:0]ap_return;
  output [3:0]p_address0;
  input [7:0]p_q0;
  output [2:0]p_4_address0;
  input [63:0]p_4_q0;
  input [63:0]p_6;
  input [7:0]p_9;
  input [15:0]p_13;
endmodule
