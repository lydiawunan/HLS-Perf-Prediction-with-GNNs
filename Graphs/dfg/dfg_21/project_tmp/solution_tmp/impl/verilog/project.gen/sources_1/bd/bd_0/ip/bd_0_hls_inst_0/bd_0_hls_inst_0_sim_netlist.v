// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Mon Apr 12 21:11:59 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/nanwu/GNN_DFG/bb/dfg_21/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.v
// Design      : bd_0_hls_inst_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "bd_0_hls_inst_0,fn1,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "HLS" *) 
(* X_CORE_INFO = "fn1,Vivado 2020.2" *) (* hls_module = "yes" *) 
(* NotValidForBitStream *)
module bd_0_hls_inst_0
   (p_ce0,
    p_we0,
    p_ce1,
    p_we1,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    ap_return,
    p_address0,
    p_d0,
    p_q0,
    p_address1,
    p_d1,
    p_q1,
    p_11,
    p_13,
    p_17);
  output p_ce0;
  output p_we0;
  output p_ce1;
  output p_we1;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [63:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_address0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_address0, LAYERED_METADATA undef" *) output [5:0]p_address0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_d0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_d0, LAYERED_METADATA undef" *) output [63:0]p_d0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_q0, LAYERED_METADATA undef" *) input [63:0]p_q0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_address1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_address1, LAYERED_METADATA undef" *) output [5:0]p_address1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_d1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_d1, LAYERED_METADATA undef" *) output [63:0]p_d1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_q1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_q1, LAYERED_METADATA undef" *) input [63:0]p_q1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_11 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_11, LAYERED_METADATA undef" *) input [31:0]p_11;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_13 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_13, LAYERED_METADATA undef" *) input [63:0]p_13;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_17 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_17, LAYERED_METADATA undef" *) input [63:0]p_17;

  wire \<const0> ;
  wire \<const1> ;
  wire ap_done;
  wire ap_ready;
  wire ap_start;
  wire NLW_inst_ap_idle_UNCONNECTED;
  wire NLW_inst_p_ce0_UNCONNECTED;
  wire NLW_inst_p_ce1_UNCONNECTED;
  wire NLW_inst_p_we0_UNCONNECTED;
  wire NLW_inst_p_we1_UNCONNECTED;
  wire [63:0]NLW_inst_ap_return_UNCONNECTED;
  wire [5:0]NLW_inst_p_address0_UNCONNECTED;
  wire [5:0]NLW_inst_p_address1_UNCONNECTED;
  wire [63:0]NLW_inst_p_d0_UNCONNECTED;
  wire [63:0]NLW_inst_p_d1_UNCONNECTED;

  assign ap_idle = \<const1> ;
  assign ap_return[63] = \<const0> ;
  assign ap_return[62] = \<const0> ;
  assign ap_return[61] = \<const0> ;
  assign ap_return[60] = \<const0> ;
  assign ap_return[59] = \<const0> ;
  assign ap_return[58] = \<const0> ;
  assign ap_return[57] = \<const0> ;
  assign ap_return[56] = \<const0> ;
  assign ap_return[55] = \<const0> ;
  assign ap_return[54] = \<const0> ;
  assign ap_return[53] = \<const0> ;
  assign ap_return[52] = \<const0> ;
  assign ap_return[51] = \<const0> ;
  assign ap_return[50] = \<const0> ;
  assign ap_return[49] = \<const0> ;
  assign ap_return[48] = \<const0> ;
  assign ap_return[47] = \<const0> ;
  assign ap_return[46] = \<const0> ;
  assign ap_return[45] = \<const0> ;
  assign ap_return[44] = \<const0> ;
  assign ap_return[43] = \<const0> ;
  assign ap_return[42] = \<const0> ;
  assign ap_return[41] = \<const0> ;
  assign ap_return[40] = \<const0> ;
  assign ap_return[39] = \<const0> ;
  assign ap_return[38] = \<const0> ;
  assign ap_return[37] = \<const0> ;
  assign ap_return[36] = \<const0> ;
  assign ap_return[35] = \<const0> ;
  assign ap_return[34] = \<const0> ;
  assign ap_return[33] = \<const0> ;
  assign ap_return[32] = \<const0> ;
  assign ap_return[31] = \<const0> ;
  assign ap_return[30] = \<const0> ;
  assign ap_return[29] = \<const0> ;
  assign ap_return[28] = \<const0> ;
  assign ap_return[27] = \<const0> ;
  assign ap_return[26] = \<const0> ;
  assign ap_return[25] = \<const0> ;
  assign ap_return[24] = \<const0> ;
  assign ap_return[23] = \<const0> ;
  assign ap_return[22] = \<const0> ;
  assign ap_return[21] = \<const0> ;
  assign ap_return[20] = \<const0> ;
  assign ap_return[19] = \<const0> ;
  assign ap_return[18] = \<const0> ;
  assign ap_return[17] = \<const0> ;
  assign ap_return[16] = \<const0> ;
  assign ap_return[15] = \<const0> ;
  assign ap_return[14] = \<const0> ;
  assign ap_return[13] = \<const0> ;
  assign ap_return[12] = \<const0> ;
  assign ap_return[11] = \<const0> ;
  assign ap_return[10] = \<const0> ;
  assign ap_return[9] = \<const0> ;
  assign ap_return[8] = \<const0> ;
  assign ap_return[7] = \<const0> ;
  assign ap_return[6] = \<const0> ;
  assign ap_return[5] = \<const0> ;
  assign ap_return[4] = \<const0> ;
  assign ap_return[3] = \<const0> ;
  assign ap_return[2] = \<const0> ;
  assign ap_return[1] = \<const0> ;
  assign ap_return[0] = \<const0> ;
  assign p_address0[5] = \<const0> ;
  assign p_address0[4] = \<const0> ;
  assign p_address0[3] = \<const0> ;
  assign p_address0[2] = \<const0> ;
  assign p_address0[1] = \<const0> ;
  assign p_address0[0] = \<const0> ;
  assign p_address1[5] = \<const0> ;
  assign p_address1[4] = \<const0> ;
  assign p_address1[3] = \<const0> ;
  assign p_address1[2] = \<const0> ;
  assign p_address1[1] = \<const0> ;
  assign p_address1[0] = \<const0> ;
  assign p_ce0 = \<const0> ;
  assign p_ce1 = \<const0> ;
  assign p_d0[63] = \<const0> ;
  assign p_d0[62] = \<const0> ;
  assign p_d0[61] = \<const0> ;
  assign p_d0[60] = \<const0> ;
  assign p_d0[59] = \<const0> ;
  assign p_d0[58] = \<const0> ;
  assign p_d0[57] = \<const0> ;
  assign p_d0[56] = \<const0> ;
  assign p_d0[55] = \<const0> ;
  assign p_d0[54] = \<const0> ;
  assign p_d0[53] = \<const0> ;
  assign p_d0[52] = \<const0> ;
  assign p_d0[51] = \<const0> ;
  assign p_d0[50] = \<const0> ;
  assign p_d0[49] = \<const0> ;
  assign p_d0[48] = \<const0> ;
  assign p_d0[47] = \<const0> ;
  assign p_d0[46] = \<const0> ;
  assign p_d0[45] = \<const0> ;
  assign p_d0[44] = \<const0> ;
  assign p_d0[43] = \<const0> ;
  assign p_d0[42] = \<const0> ;
  assign p_d0[41] = \<const0> ;
  assign p_d0[40] = \<const0> ;
  assign p_d0[39] = \<const0> ;
  assign p_d0[38] = \<const0> ;
  assign p_d0[37] = \<const0> ;
  assign p_d0[36] = \<const0> ;
  assign p_d0[35] = \<const0> ;
  assign p_d0[34] = \<const0> ;
  assign p_d0[33] = \<const0> ;
  assign p_d0[32] = \<const0> ;
  assign p_d0[31] = \<const0> ;
  assign p_d0[30] = \<const0> ;
  assign p_d0[29] = \<const0> ;
  assign p_d0[28] = \<const0> ;
  assign p_d0[27] = \<const0> ;
  assign p_d0[26] = \<const0> ;
  assign p_d0[25] = \<const0> ;
  assign p_d0[24] = \<const0> ;
  assign p_d0[23] = \<const0> ;
  assign p_d0[22] = \<const0> ;
  assign p_d0[21] = \<const0> ;
  assign p_d0[20] = \<const0> ;
  assign p_d0[19] = \<const0> ;
  assign p_d0[18] = \<const0> ;
  assign p_d0[17] = \<const0> ;
  assign p_d0[16] = \<const0> ;
  assign p_d0[15] = \<const0> ;
  assign p_d0[14] = \<const0> ;
  assign p_d0[13] = \<const0> ;
  assign p_d0[12] = \<const0> ;
  assign p_d0[11] = \<const0> ;
  assign p_d0[10] = \<const0> ;
  assign p_d0[9] = \<const0> ;
  assign p_d0[8] = \<const0> ;
  assign p_d0[7] = \<const0> ;
  assign p_d0[6] = \<const0> ;
  assign p_d0[5] = \<const0> ;
  assign p_d0[4] = \<const0> ;
  assign p_d0[3] = \<const0> ;
  assign p_d0[2] = \<const0> ;
  assign p_d0[1] = \<const0> ;
  assign p_d0[0] = \<const0> ;
  assign p_d1[63] = \<const0> ;
  assign p_d1[62] = \<const0> ;
  assign p_d1[61] = \<const0> ;
  assign p_d1[60] = \<const0> ;
  assign p_d1[59] = \<const0> ;
  assign p_d1[58] = \<const0> ;
  assign p_d1[57] = \<const0> ;
  assign p_d1[56] = \<const0> ;
  assign p_d1[55] = \<const0> ;
  assign p_d1[54] = \<const0> ;
  assign p_d1[53] = \<const0> ;
  assign p_d1[52] = \<const0> ;
  assign p_d1[51] = \<const0> ;
  assign p_d1[50] = \<const0> ;
  assign p_d1[49] = \<const0> ;
  assign p_d1[48] = \<const0> ;
  assign p_d1[47] = \<const0> ;
  assign p_d1[46] = \<const0> ;
  assign p_d1[45] = \<const0> ;
  assign p_d1[44] = \<const0> ;
  assign p_d1[43] = \<const0> ;
  assign p_d1[42] = \<const0> ;
  assign p_d1[41] = \<const0> ;
  assign p_d1[40] = \<const0> ;
  assign p_d1[39] = \<const0> ;
  assign p_d1[38] = \<const0> ;
  assign p_d1[37] = \<const0> ;
  assign p_d1[36] = \<const0> ;
  assign p_d1[35] = \<const0> ;
  assign p_d1[34] = \<const0> ;
  assign p_d1[33] = \<const0> ;
  assign p_d1[32] = \<const0> ;
  assign p_d1[31] = \<const0> ;
  assign p_d1[30] = \<const0> ;
  assign p_d1[29] = \<const0> ;
  assign p_d1[28] = \<const0> ;
  assign p_d1[27] = \<const0> ;
  assign p_d1[26] = \<const0> ;
  assign p_d1[25] = \<const0> ;
  assign p_d1[24] = \<const0> ;
  assign p_d1[23] = \<const0> ;
  assign p_d1[22] = \<const0> ;
  assign p_d1[21] = \<const0> ;
  assign p_d1[20] = \<const0> ;
  assign p_d1[19] = \<const0> ;
  assign p_d1[18] = \<const0> ;
  assign p_d1[17] = \<const0> ;
  assign p_d1[16] = \<const0> ;
  assign p_d1[15] = \<const0> ;
  assign p_d1[14] = \<const0> ;
  assign p_d1[13] = \<const0> ;
  assign p_d1[12] = \<const0> ;
  assign p_d1[11] = \<const0> ;
  assign p_d1[10] = \<const0> ;
  assign p_d1[9] = \<const0> ;
  assign p_d1[8] = \<const0> ;
  assign p_d1[7] = \<const0> ;
  assign p_d1[6] = \<const0> ;
  assign p_d1[5] = \<const0> ;
  assign p_d1[4] = \<const0> ;
  assign p_d1[3] = \<const0> ;
  assign p_d1[2] = \<const0> ;
  assign p_d1[1] = \<const0> ;
  assign p_d1[0] = \<const0> ;
  assign p_we0 = \<const0> ;
  assign p_we1 = \<const0> ;
  GND GND
       (.G(\<const0> ));
  VCC VCC
       (.P(\<const1> ));
  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  bd_0_hls_inst_0_fn1 inst
       (.ap_done(ap_done),
        .ap_idle(NLW_inst_ap_idle_UNCONNECTED),
        .ap_ready(ap_ready),
        .ap_return(NLW_inst_ap_return_UNCONNECTED[63:0]),
        .ap_start(ap_start),
        .p_11({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_13({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_17({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_address0(NLW_inst_p_address0_UNCONNECTED[5:0]),
        .p_address1(NLW_inst_p_address1_UNCONNECTED[5:0]),
        .p_ce0(NLW_inst_p_ce0_UNCONNECTED),
        .p_ce1(NLW_inst_p_ce1_UNCONNECTED),
        .p_d0(NLW_inst_p_d0_UNCONNECTED[63:0]),
        .p_d1(NLW_inst_p_d1_UNCONNECTED[63:0]),
        .p_q0({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_q1({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_we0(NLW_inst_p_we0_UNCONNECTED),
        .p_we1(NLW_inst_p_we1_UNCONNECTED));
endmodule

(* ORIG_REF_NAME = "fn1" *) 
module bd_0_hls_inst_0_fn1
   (ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p_address0,
    p_ce0,
    p_we0,
    p_d0,
    p_q0,
    p_address1,
    p_ce1,
    p_we1,
    p_d1,
    p_q1,
    p_11,
    p_13,
    p_17,
    ap_return);
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [5:0]p_address0;
  output p_ce0;
  output p_we0;
  output [63:0]p_d0;
  input [63:0]p_q0;
  output [5:0]p_address1;
  output p_ce1;
  output p_we1;
  output [63:0]p_d1;
  input [63:0]p_q1;
  input [31:0]p_11;
  input [63:0]p_13;
  input [63:0]p_17;
  output [63:0]ap_return;

  wire \<const0> ;
  wire ap_start;

  assign ap_done = ap_start;
  assign ap_idle = \<const0> ;
  assign ap_ready = ap_start;
  assign ap_return[63] = \<const0> ;
  assign ap_return[62] = \<const0> ;
  assign ap_return[61] = \<const0> ;
  assign ap_return[60] = \<const0> ;
  assign ap_return[59] = \<const0> ;
  assign ap_return[58] = \<const0> ;
  assign ap_return[57] = \<const0> ;
  assign ap_return[56] = \<const0> ;
  assign ap_return[55] = \<const0> ;
  assign ap_return[54] = \<const0> ;
  assign ap_return[53] = \<const0> ;
  assign ap_return[52] = \<const0> ;
  assign ap_return[51] = \<const0> ;
  assign ap_return[50] = \<const0> ;
  assign ap_return[49] = \<const0> ;
  assign ap_return[48] = \<const0> ;
  assign ap_return[47] = \<const0> ;
  assign ap_return[46] = \<const0> ;
  assign ap_return[45] = \<const0> ;
  assign ap_return[44] = \<const0> ;
  assign ap_return[43] = \<const0> ;
  assign ap_return[42] = \<const0> ;
  assign ap_return[41] = \<const0> ;
  assign ap_return[40] = \<const0> ;
  assign ap_return[39] = \<const0> ;
  assign ap_return[38] = \<const0> ;
  assign ap_return[37] = \<const0> ;
  assign ap_return[36] = \<const0> ;
  assign ap_return[35] = \<const0> ;
  assign ap_return[34] = \<const0> ;
  assign ap_return[33] = \<const0> ;
  assign ap_return[32] = \<const0> ;
  assign ap_return[31] = \<const0> ;
  assign ap_return[30] = \<const0> ;
  assign ap_return[29] = \<const0> ;
  assign ap_return[28] = \<const0> ;
  assign ap_return[27] = \<const0> ;
  assign ap_return[26] = \<const0> ;
  assign ap_return[25] = \<const0> ;
  assign ap_return[24] = \<const0> ;
  assign ap_return[23] = \<const0> ;
  assign ap_return[22] = \<const0> ;
  assign ap_return[21] = \<const0> ;
  assign ap_return[20] = \<const0> ;
  assign ap_return[19] = \<const0> ;
  assign ap_return[18] = \<const0> ;
  assign ap_return[17] = \<const0> ;
  assign ap_return[16] = \<const0> ;
  assign ap_return[15] = \<const0> ;
  assign ap_return[14] = \<const0> ;
  assign ap_return[13] = \<const0> ;
  assign ap_return[12] = \<const0> ;
  assign ap_return[11] = \<const0> ;
  assign ap_return[10] = \<const0> ;
  assign ap_return[9] = \<const0> ;
  assign ap_return[8] = \<const0> ;
  assign ap_return[7] = \<const0> ;
  assign ap_return[6] = \<const0> ;
  assign ap_return[5] = \<const0> ;
  assign ap_return[4] = \<const0> ;
  assign ap_return[3] = \<const0> ;
  assign ap_return[2] = \<const0> ;
  assign ap_return[1] = \<const0> ;
  assign ap_return[0] = \<const0> ;
  assign p_address0[5] = \<const0> ;
  assign p_address0[4] = \<const0> ;
  assign p_address0[3] = \<const0> ;
  assign p_address0[2] = \<const0> ;
  assign p_address0[1] = \<const0> ;
  assign p_address0[0] = \<const0> ;
  assign p_address1[5] = \<const0> ;
  assign p_address1[4] = \<const0> ;
  assign p_address1[3] = \<const0> ;
  assign p_address1[2] = \<const0> ;
  assign p_address1[1] = \<const0> ;
  assign p_address1[0] = \<const0> ;
  assign p_ce0 = \<const0> ;
  assign p_ce1 = \<const0> ;
  assign p_d0[63] = \<const0> ;
  assign p_d0[62] = \<const0> ;
  assign p_d0[61] = \<const0> ;
  assign p_d0[60] = \<const0> ;
  assign p_d0[59] = \<const0> ;
  assign p_d0[58] = \<const0> ;
  assign p_d0[57] = \<const0> ;
  assign p_d0[56] = \<const0> ;
  assign p_d0[55] = \<const0> ;
  assign p_d0[54] = \<const0> ;
  assign p_d0[53] = \<const0> ;
  assign p_d0[52] = \<const0> ;
  assign p_d0[51] = \<const0> ;
  assign p_d0[50] = \<const0> ;
  assign p_d0[49] = \<const0> ;
  assign p_d0[48] = \<const0> ;
  assign p_d0[47] = \<const0> ;
  assign p_d0[46] = \<const0> ;
  assign p_d0[45] = \<const0> ;
  assign p_d0[44] = \<const0> ;
  assign p_d0[43] = \<const0> ;
  assign p_d0[42] = \<const0> ;
  assign p_d0[41] = \<const0> ;
  assign p_d0[40] = \<const0> ;
  assign p_d0[39] = \<const0> ;
  assign p_d0[38] = \<const0> ;
  assign p_d0[37] = \<const0> ;
  assign p_d0[36] = \<const0> ;
  assign p_d0[35] = \<const0> ;
  assign p_d0[34] = \<const0> ;
  assign p_d0[33] = \<const0> ;
  assign p_d0[32] = \<const0> ;
  assign p_d0[31] = \<const0> ;
  assign p_d0[30] = \<const0> ;
  assign p_d0[29] = \<const0> ;
  assign p_d0[28] = \<const0> ;
  assign p_d0[27] = \<const0> ;
  assign p_d0[26] = \<const0> ;
  assign p_d0[25] = \<const0> ;
  assign p_d0[24] = \<const0> ;
  assign p_d0[23] = \<const0> ;
  assign p_d0[22] = \<const0> ;
  assign p_d0[21] = \<const0> ;
  assign p_d0[20] = \<const0> ;
  assign p_d0[19] = \<const0> ;
  assign p_d0[18] = \<const0> ;
  assign p_d0[17] = \<const0> ;
  assign p_d0[16] = \<const0> ;
  assign p_d0[15] = \<const0> ;
  assign p_d0[14] = \<const0> ;
  assign p_d0[13] = \<const0> ;
  assign p_d0[12] = \<const0> ;
  assign p_d0[11] = \<const0> ;
  assign p_d0[10] = \<const0> ;
  assign p_d0[9] = \<const0> ;
  assign p_d0[8] = \<const0> ;
  assign p_d0[7] = \<const0> ;
  assign p_d0[6] = \<const0> ;
  assign p_d0[5] = \<const0> ;
  assign p_d0[4] = \<const0> ;
  assign p_d0[3] = \<const0> ;
  assign p_d0[2] = \<const0> ;
  assign p_d0[1] = \<const0> ;
  assign p_d0[0] = \<const0> ;
  assign p_d1[63] = \<const0> ;
  assign p_d1[62] = \<const0> ;
  assign p_d1[61] = \<const0> ;
  assign p_d1[60] = \<const0> ;
  assign p_d1[59] = \<const0> ;
  assign p_d1[58] = \<const0> ;
  assign p_d1[57] = \<const0> ;
  assign p_d1[56] = \<const0> ;
  assign p_d1[55] = \<const0> ;
  assign p_d1[54] = \<const0> ;
  assign p_d1[53] = \<const0> ;
  assign p_d1[52] = \<const0> ;
  assign p_d1[51] = \<const0> ;
  assign p_d1[50] = \<const0> ;
  assign p_d1[49] = \<const0> ;
  assign p_d1[48] = \<const0> ;
  assign p_d1[47] = \<const0> ;
  assign p_d1[46] = \<const0> ;
  assign p_d1[45] = \<const0> ;
  assign p_d1[44] = \<const0> ;
  assign p_d1[43] = \<const0> ;
  assign p_d1[42] = \<const0> ;
  assign p_d1[41] = \<const0> ;
  assign p_d1[40] = \<const0> ;
  assign p_d1[39] = \<const0> ;
  assign p_d1[38] = \<const0> ;
  assign p_d1[37] = \<const0> ;
  assign p_d1[36] = \<const0> ;
  assign p_d1[35] = \<const0> ;
  assign p_d1[34] = \<const0> ;
  assign p_d1[33] = \<const0> ;
  assign p_d1[32] = \<const0> ;
  assign p_d1[31] = \<const0> ;
  assign p_d1[30] = \<const0> ;
  assign p_d1[29] = \<const0> ;
  assign p_d1[28] = \<const0> ;
  assign p_d1[27] = \<const0> ;
  assign p_d1[26] = \<const0> ;
  assign p_d1[25] = \<const0> ;
  assign p_d1[24] = \<const0> ;
  assign p_d1[23] = \<const0> ;
  assign p_d1[22] = \<const0> ;
  assign p_d1[21] = \<const0> ;
  assign p_d1[20] = \<const0> ;
  assign p_d1[19] = \<const0> ;
  assign p_d1[18] = \<const0> ;
  assign p_d1[17] = \<const0> ;
  assign p_d1[16] = \<const0> ;
  assign p_d1[15] = \<const0> ;
  assign p_d1[14] = \<const0> ;
  assign p_d1[13] = \<const0> ;
  assign p_d1[12] = \<const0> ;
  assign p_d1[11] = \<const0> ;
  assign p_d1[10] = \<const0> ;
  assign p_d1[9] = \<const0> ;
  assign p_d1[8] = \<const0> ;
  assign p_d1[7] = \<const0> ;
  assign p_d1[6] = \<const0> ;
  assign p_d1[5] = \<const0> ;
  assign p_d1[4] = \<const0> ;
  assign p_d1[3] = \<const0> ;
  assign p_d1[2] = \<const0> ;
  assign p_d1[1] = \<const0> ;
  assign p_d1[0] = \<const0> ;
  assign p_we0 = \<const0> ;
  assign p_we1 = \<const0> ;
  GND GND
       (.G(\<const0> ));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
