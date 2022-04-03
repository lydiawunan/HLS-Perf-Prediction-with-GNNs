//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Mon Apr 26 21:17:26 2021
//Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
//Command     : generate_target bd_0.bd
//Design      : bd_0
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "bd_0,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=bd_0,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "bd_0.hwdef" *) 
module bd_0
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
    p_5,
    p_9_address0,
    p_9_address1,
    p_9_ce0,
    p_9_ce1,
    p_9_d0,
    p_9_d1,
    p_9_q0,
    p_9_q1,
    p_9_we0,
    p_9_we1);
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_ready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) input ap_ctrl_start;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.AP_RETURN DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.AP_RETURN, LAYERED_METADATA undef" *) output [7:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P, LAYERED_METADATA undef" *) input [7:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_11_ADDRESS0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_11_ADDRESS0, LAYERED_METADATA undef" *) output [2:0]p_11_address0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_11_ADDRESS1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_11_ADDRESS1, LAYERED_METADATA undef" *) output [2:0]p_11_address1;
  output p_11_ce0;
  output p_11_ce1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_11_D0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_11_D0, LAYERED_METADATA undef" *) output [15:0]p_11_d0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_11_D1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_11_D1, LAYERED_METADATA undef" *) output [15:0]p_11_d1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_11_Q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_11_Q0, LAYERED_METADATA undef" *) input [15:0]p_11_q0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_11_Q1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_11_Q1, LAYERED_METADATA undef" *) input [15:0]p_11_q1;
  output p_11_we0;
  output p_11_we1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_13 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_13, LAYERED_METADATA undef" *) input [31:0]p_13;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_5 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_5, LAYERED_METADATA undef" *) input [63:0]p_5;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9_ADDRESS0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9_ADDRESS0, LAYERED_METADATA undef" *) output [0:0]p_9_address0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9_ADDRESS1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9_ADDRESS1, LAYERED_METADATA undef" *) output [0:0]p_9_address1;
  output p_9_ce0;
  output p_9_ce1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9_D0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9_D0, LAYERED_METADATA undef" *) output [63:0]p_9_d0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9_D1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9_D1, LAYERED_METADATA undef" *) output [63:0]p_9_d1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9_Q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9_Q0, LAYERED_METADATA undef" *) input [63:0]p_9_q0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9_Q1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9_Q1, LAYERED_METADATA undef" *) input [63:0]p_9_q1;
  output p_9_we0;
  output p_9_we1;

  wire ap_ctrl_0_1_done;
  wire ap_ctrl_0_1_idle;
  wire ap_ctrl_0_1_ready;
  wire ap_ctrl_0_1_start;
  wire [7:0]hls_inst_ap_return;
  wire [2:0]hls_inst_p_11_address0;
  wire [2:0]hls_inst_p_11_address1;
  wire hls_inst_p_11_ce0;
  wire hls_inst_p_11_ce1;
  wire [15:0]hls_inst_p_11_d0;
  wire [15:0]hls_inst_p_11_d1;
  wire hls_inst_p_11_we0;
  wire hls_inst_p_11_we1;
  wire [0:0]hls_inst_p_9_address0;
  wire [0:0]hls_inst_p_9_address1;
  wire hls_inst_p_9_ce0;
  wire hls_inst_p_9_ce1;
  wire [63:0]hls_inst_p_9_d0;
  wire [63:0]hls_inst_p_9_d1;
  wire hls_inst_p_9_we0;
  wire hls_inst_p_9_we1;
  wire [7:0]p_0_1;
  wire [15:0]p_11_q0_0_1;
  wire [15:0]p_11_q1_0_1;
  wire [31:0]p_13_0_1;
  wire [63:0]p_5_0_1;
  wire [63:0]p_9_q0_0_1;
  wire [63:0]p_9_q1_0_1;

  assign ap_ctrl_0_1_start = ap_ctrl_start;
  assign ap_ctrl_done = ap_ctrl_0_1_done;
  assign ap_ctrl_idle = ap_ctrl_0_1_idle;
  assign ap_ctrl_ready = ap_ctrl_0_1_ready;
  assign ap_return[7:0] = hls_inst_ap_return;
  assign p_0_1 = p[7:0];
  assign p_11_address0[2:0] = hls_inst_p_11_address0;
  assign p_11_address1[2:0] = hls_inst_p_11_address1;
  assign p_11_ce0 = hls_inst_p_11_ce0;
  assign p_11_ce1 = hls_inst_p_11_ce1;
  assign p_11_d0[15:0] = hls_inst_p_11_d0;
  assign p_11_d1[15:0] = hls_inst_p_11_d1;
  assign p_11_q0_0_1 = p_11_q0[15:0];
  assign p_11_q1_0_1 = p_11_q1[15:0];
  assign p_11_we0 = hls_inst_p_11_we0;
  assign p_11_we1 = hls_inst_p_11_we1;
  assign p_13_0_1 = p_13[31:0];
  assign p_5_0_1 = p_5[63:0];
  assign p_9_address0[0] = hls_inst_p_9_address0;
  assign p_9_address1[0] = hls_inst_p_9_address1;
  assign p_9_ce0 = hls_inst_p_9_ce0;
  assign p_9_ce1 = hls_inst_p_9_ce1;
  assign p_9_d0[63:0] = hls_inst_p_9_d0;
  assign p_9_d1[63:0] = hls_inst_p_9_d1;
  assign p_9_q0_0_1 = p_9_q0[63:0];
  assign p_9_q1_0_1 = p_9_q1[63:0];
  assign p_9_we0 = hls_inst_p_9_we0;
  assign p_9_we1 = hls_inst_p_9_we1;
  bd_0_hls_inst_0 hls_inst
       (.ap_done(ap_ctrl_0_1_done),
        .ap_idle(ap_ctrl_0_1_idle),
        .ap_ready(ap_ctrl_0_1_ready),
        .ap_return(hls_inst_ap_return),
        .ap_start(ap_ctrl_0_1_start),
        .p(p_0_1),
        .p_11_address0(hls_inst_p_11_address0),
        .p_11_address1(hls_inst_p_11_address1),
        .p_11_ce0(hls_inst_p_11_ce0),
        .p_11_ce1(hls_inst_p_11_ce1),
        .p_11_d0(hls_inst_p_11_d0),
        .p_11_d1(hls_inst_p_11_d1),
        .p_11_q0(p_11_q0_0_1),
        .p_11_q1(p_11_q1_0_1),
        .p_11_we0(hls_inst_p_11_we0),
        .p_11_we1(hls_inst_p_11_we1),
        .p_13(p_13_0_1),
        .p_5(p_5_0_1),
        .p_9_address0(hls_inst_p_9_address0),
        .p_9_address1(hls_inst_p_9_address1),
        .p_9_ce0(hls_inst_p_9_ce0),
        .p_9_ce1(hls_inst_p_9_ce1),
        .p_9_d0(hls_inst_p_9_d0),
        .p_9_d1(hls_inst_p_9_d1),
        .p_9_q0(p_9_q0_0_1),
        .p_9_q1(p_9_q1_0_1),
        .p_9_we0(hls_inst_p_9_we0),
        .p_9_we1(hls_inst_p_9_we1));
endmodule
