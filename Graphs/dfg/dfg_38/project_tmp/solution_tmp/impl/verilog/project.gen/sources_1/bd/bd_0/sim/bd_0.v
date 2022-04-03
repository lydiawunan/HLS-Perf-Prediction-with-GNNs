//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Wed Apr 14 00:42:54 2021
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
    p_11,
    p_19,
    p_9);
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_ready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) input ap_ctrl_start;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.AP_RETURN DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.AP_RETURN, LAYERED_METADATA undef" *) output [7:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P, LAYERED_METADATA undef" *) input [63:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_11 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_11, LAYERED_METADATA undef" *) input [63:0]p_11;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_19 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_19, LAYERED_METADATA undef" *) input [15:0]p_19;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9, LAYERED_METADATA undef" *) input [31:0]p_9;

  wire ap_ctrl_0_1_done;
  wire ap_ctrl_0_1_idle;
  wire ap_ctrl_0_1_ready;
  wire ap_ctrl_0_1_start;
  wire [7:0]hls_inst_ap_return;
  wire [63:0]p_0_1;
  wire [63:0]p_11_0_1;
  wire [15:0]p_19_0_1;
  wire [31:0]p_9_0_1;

  assign ap_ctrl_0_1_start = ap_ctrl_start;
  assign ap_ctrl_done = ap_ctrl_0_1_done;
  assign ap_ctrl_idle = ap_ctrl_0_1_idle;
  assign ap_ctrl_ready = ap_ctrl_0_1_ready;
  assign ap_return[7:0] = hls_inst_ap_return;
  assign p_0_1 = p[63:0];
  assign p_11_0_1 = p_11[63:0];
  assign p_19_0_1 = p_19[15:0];
  assign p_9_0_1 = p_9[31:0];
  bd_0_hls_inst_0 hls_inst
       (.ap_done(ap_ctrl_0_1_done),
        .ap_idle(ap_ctrl_0_1_idle),
        .ap_ready(ap_ctrl_0_1_ready),
        .ap_return(hls_inst_ap_return),
        .ap_start(ap_ctrl_0_1_start),
        .p(p_0_1),
        .p_11(p_11_0_1),
        .p_19(p_19_0_1),
        .p_9(p_9_0_1));
endmodule
