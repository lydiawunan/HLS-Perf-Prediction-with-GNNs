//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Thu Apr 29 14:45:09 2021
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
    p_11_address0,
    p_11_ce0,
    p_11_q0,
    p_13,
    p_17,
    p_9,
    p_address0,
    p_ce0,
    p_q0);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.AP_CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.AP_CLK, ASSOCIATED_RESET ap_rst, CLK_DOMAIN bd_0_ap_clk_0, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.000" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_ready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) input ap_ctrl_start;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.AP_RETURN DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.AP_RETURN, LAYERED_METADATA undef" *) output [63:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.AP_RST RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.AP_RST, INSERT_VIP 0, POLARITY ACTIVE_HIGH" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_11_ADDRESS0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_11_ADDRESS0, LAYERED_METADATA undef" *) output [1:0]p_11_address0;
  output p_11_ce0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_11_Q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_11_Q0, LAYERED_METADATA undef" *) input [31:0]p_11_q0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_13 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_13, LAYERED_METADATA undef" *) input [63:0]p_13;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_17 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_17, LAYERED_METADATA undef" *) input [63:0]p_17;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_9 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_9, LAYERED_METADATA undef" *) input [63:0]p_9;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_ADDRESS0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_ADDRESS0, LAYERED_METADATA undef" *) output [0:0]p_address0;
  output p_ce0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.P_Q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.P_Q0, LAYERED_METADATA undef" *) input [31:0]p_q0;

  wire ap_clk_0_1;
  wire ap_ctrl_0_1_done;
  wire ap_ctrl_0_1_idle;
  wire ap_ctrl_0_1_ready;
  wire ap_ctrl_0_1_start;
  wire ap_rst_0_1;
  wire [63:0]hls_inst_ap_return;
  wire [1:0]hls_inst_p_11_address0;
  wire hls_inst_p_11_ce0;
  wire [0:0]hls_inst_p_address0;
  wire hls_inst_p_ce0;
  wire [31:0]p_11_q0_0_1;
  wire [63:0]p_13_0_1;
  wire [63:0]p_17_0_1;
  wire [63:0]p_9_0_1;
  wire [31:0]p_q0_0_1;

  assign ap_clk_0_1 = ap_clk;
  assign ap_ctrl_0_1_start = ap_ctrl_start;
  assign ap_ctrl_done = ap_ctrl_0_1_done;
  assign ap_ctrl_idle = ap_ctrl_0_1_idle;
  assign ap_ctrl_ready = ap_ctrl_0_1_ready;
  assign ap_return[63:0] = hls_inst_ap_return;
  assign ap_rst_0_1 = ap_rst;
  assign p_11_address0[1:0] = hls_inst_p_11_address0;
  assign p_11_ce0 = hls_inst_p_11_ce0;
  assign p_11_q0_0_1 = p_11_q0[31:0];
  assign p_13_0_1 = p_13[63:0];
  assign p_17_0_1 = p_17[63:0];
  assign p_9_0_1 = p_9[63:0];
  assign p_address0[0] = hls_inst_p_address0;
  assign p_ce0 = hls_inst_p_ce0;
  assign p_q0_0_1 = p_q0[31:0];
  bd_0_hls_inst_0 hls_inst
       (.ap_clk(ap_clk_0_1),
        .ap_done(ap_ctrl_0_1_done),
        .ap_idle(ap_ctrl_0_1_idle),
        .ap_ready(ap_ctrl_0_1_ready),
        .ap_return(hls_inst_ap_return),
        .ap_rst(ap_rst_0_1),
        .ap_start(ap_ctrl_0_1_start),
        .p_11_address0(hls_inst_p_11_address0),
        .p_11_ce0(hls_inst_p_11_ce0),
        .p_11_q0(p_11_q0_0_1),
        .p_13(p_13_0_1),
        .p_17(p_17_0_1),
        .p_9(p_9_0_1),
        .p_address0(hls_inst_p_address0),
        .p_ce0(hls_inst_p_ce0),
        .p_q0(p_q0_0_1));
endmodule
