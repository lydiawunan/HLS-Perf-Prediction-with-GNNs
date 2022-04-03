//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Tue Apr 13 14:14:28 2021
//Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
//Command     : generate_target bd_0.bd
//Design      : bd_0
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "bd_0,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=bd_0,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "bd_0.hwdef" *) 
module bd_0
   (ap_clk,
    ap_ctrl_done,
    ap_ctrl_idle,
    ap_ctrl_ready,
    ap_ctrl_start,
    ap_return,
    ap_rst,
    p,
    p_15,
    p_19,
    p_7,
    p_9_address0,
    p_9_ce0,
    p_9_q0);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.AP_CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.AP_CLK, ASSOCIATED_RESET ap_rst, CLK_DOMAIN bd_0_ap_clk_0, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.000" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_ready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) input ap_ctrl_start;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.AP_RETURN DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.AP_RETURN, LAYERED_METADATA undef" *) output [15:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.AP_RST RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.AP_RST, INSERT_VIP 0, POLARITY ACTIVE_HIGH" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P, LAYERED_METADATA undef" *) input [7:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_15 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_15, LAYERED_METADATA undef" *) input [15:0]p_15;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_19 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_19, LAYERED_METADATA undef" *) input [63:0]p_19;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_7 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_7, LAYERED_METADATA undef" *) input [7:0]p_7;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9_ADDRESS0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9_ADDRESS0, LAYERED_METADATA undef" *) output [2:0]p_9_address0;
  output p_9_ce0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9_Q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9_Q0, LAYERED_METADATA undef" *) input [31:0]p_9_q0;

  wire ap_clk_0_1;
  wire ap_ctrl_0_1_done;
  wire ap_ctrl_0_1_idle;
  wire ap_ctrl_0_1_ready;
  wire ap_ctrl_0_1_start;
  wire ap_rst_0_1;
  wire [15:0]hls_inst_ap_return;
  wire [2:0]hls_inst_p_9_address0;
  wire hls_inst_p_9_ce0;
  wire [7:0]p_0_1;
  wire [15:0]p_15_0_1;
  wire [63:0]p_19_0_1;
  wire [7:0]p_7_0_1;
  wire [31:0]p_9_q0_0_1;

  assign ap_clk_0_1 = ap_clk;
  assign ap_ctrl_0_1_start = ap_ctrl_start;
  assign ap_ctrl_done = ap_ctrl_0_1_done;
  assign ap_ctrl_idle = ap_ctrl_0_1_idle;
  assign ap_ctrl_ready = ap_ctrl_0_1_ready;
  assign ap_return[15:0] = hls_inst_ap_return;
  assign ap_rst_0_1 = ap_rst;
  assign p_0_1 = p[7:0];
  assign p_15_0_1 = p_15[15:0];
  assign p_19_0_1 = p_19[63:0];
  assign p_7_0_1 = p_7[7:0];
  assign p_9_address0[2:0] = hls_inst_p_9_address0;
  assign p_9_ce0 = hls_inst_p_9_ce0;
  assign p_9_q0_0_1 = p_9_q0[31:0];
  bd_0_hls_inst_0 hls_inst
       (.ap_clk(ap_clk_0_1),
        .ap_done(ap_ctrl_0_1_done),
        .ap_idle(ap_ctrl_0_1_idle),
        .ap_ready(ap_ctrl_0_1_ready),
        .ap_return(hls_inst_ap_return),
        .ap_rst(ap_rst_0_1),
        .ap_start(ap_ctrl_0_1_start),
        .p(p_0_1),
        .p_15(p_15_0_1),
        .p_19(p_19_0_1),
        .p_7(p_7_0_1),
        .p_9_address0(hls_inst_p_9_address0),
        .p_9_ce0(hls_inst_p_9_ce0),
        .p_9_q0(p_9_q0_0_1));
endmodule
