// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Tue Apr 13 10:40:19 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/nanwu/GNN_DFG/bb/dfg_25/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_stub.v
// Design      : bd_0_hls_inst_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "fn1,Vivado 2020.2" *)
module bd_0_hls_inst_0(ap_start, ap_done, ap_idle, ap_ready, ap_return, p, 
  p_9, p_11, p_13)
/* synthesis syn_black_box black_box_pad_pin="ap_start,ap_done,ap_idle,ap_ready,ap_return[63:0],p[15:0],p_9[31:0],p_11[31:0],p_13[7:0]" */;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [63:0]ap_return;
  input [15:0]p;
  input [31:0]p_9;
  input [31:0]p_11;
  input [7:0]p_13;
endmodule
