// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Tue Apr 27 11:02:56 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/nanwu/GNN_DFG/bb/dfg_75/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_stub.v
// Design      : bd_0_hls_inst_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "fn1,Vivado 2020.2" *)
module bd_0_hls_inst_0(p_13_ce0, ap_clk, ap_rst, ap_start, ap_done, 
  ap_idle, ap_ready, ap_return, p, p_7, p_9, p_11, p_13_address0, p_13_q0)
/* synthesis syn_black_box black_box_pad_pin="p_13_ce0,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,ap_return[7:0],p[31:0],p_7[63:0],p_9[15:0],p_11[63:0],p_13_address0[0:0],p_13_q0[31:0]" */;
  output p_13_ce0;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [7:0]ap_return;
  input [31:0]p;
  input [63:0]p_7;
  input [15:0]p_9;
  input [63:0]p_11;
  output [0:0]p_13_address0;
  input [31:0]p_13_q0;
endmodule
