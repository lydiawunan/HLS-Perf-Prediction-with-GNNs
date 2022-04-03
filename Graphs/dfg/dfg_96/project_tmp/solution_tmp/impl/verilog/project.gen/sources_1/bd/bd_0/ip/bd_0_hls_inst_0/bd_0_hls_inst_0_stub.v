// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Sat May  1 01:55:54 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/nanwu/GNN_DFG/bb/dfg_96/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_stub.v
// Design      : bd_0_hls_inst_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "fn1,Vivado 2020.2" *)
module bd_0_hls_inst_0(p_11_ce0, p_11_ce1, ap_clk, ap_rst, ap_start, 
  ap_done, ap_idle, ap_ready, ap_return, p, p_4, p_6, p_9, p_11_address0, p_11_q0, p_11_address1, 
  p_11_q1)
/* synthesis syn_black_box black_box_pad_pin="p_11_ce0,p_11_ce1,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,ap_return[7:0],p[15:0],p_4[15:0],p_6[63:0],p_9[7:0],p_11_address0[3:0],p_11_q0[31:0],p_11_address1[3:0],p_11_q1[31:0]" */;
  output p_11_ce0;
  output p_11_ce1;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [7:0]ap_return;
  input [15:0]p;
  input [15:0]p_4;
  input [63:0]p_6;
  input [7:0]p_9;
  output [3:0]p_11_address0;
  input [31:0]p_11_q0;
  output [3:0]p_11_address1;
  input [31:0]p_11_q1;
endmodule
