// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Sun May 16 13:54:09 2021
// Host        : ece-rschsrv01.ece.gatech.edu running 64-bit Red Hat Enterprise Linux Server release 7.9 (Maipo)
// Command     : write_verilog -force -mode synth_stub
//               /nethome/chao33/GNN-for-DFG/toy_example/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_stub.v
// Design      : bd_0_hls_inst_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "top_dfg,Vivado 2020.2" *)
module bd_0_hls_inst_0(a_ap_vld, c_o_ap_vld, ap_clk, ap_rst, ap_start, 
  ap_done, ap_idle, ap_ready, a, b, c_i, c_o)
/* synthesis syn_black_box black_box_pad_pin="a_ap_vld,c_o_ap_vld,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,a[31:0],b[31:0],c_i[31:0],c_o[31:0]" */;
  output a_ap_vld;
  output c_o_ap_vld;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [31:0]a;
  input [31:0]b;
  input [31:0]c_i;
  output [31:0]c_o;
endmodule
