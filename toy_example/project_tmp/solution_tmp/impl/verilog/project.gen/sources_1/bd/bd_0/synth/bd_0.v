//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
//Date        : Sun May 16 13:52:39 2021
//Host        : ece-rschsrv01.ece.gatech.edu running 64-bit Red Hat Enterprise Linux Server release 7.9 (Maipo)
//Command     : generate_target bd_0.bd
//Design      : bd_0
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "bd_0,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=bd_0,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "bd_0.hwdef" *) 
module bd_0
   (a,
    a_ap_vld,
    ap_clk,
    ap_ctrl_done,
    ap_ctrl_idle,
    ap_ctrl_ready,
    ap_ctrl_start,
    ap_rst,
    b,
    c_i,
    c_o,
    c_o_ap_vld);
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.A DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.A, LAYERED_METADATA undef" *) output [31:0]a;
  output a_ap_vld;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.AP_CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.AP_CLK, ASSOCIATED_RESET ap_rst, CLK_DOMAIN bd_0_ap_clk_0, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.000" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) output ap_ctrl_ready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl " *) input ap_ctrl_start;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.AP_RST RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.AP_RST, INSERT_VIP 0, POLARITY ACTIVE_HIGH" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.B DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.B, LAYERED_METADATA undef" *) input [31:0]b;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.C_I DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.C_I, LAYERED_METADATA undef" *) input [31:0]c_i;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.C_O DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.C_O, LAYERED_METADATA undef" *) output [31:0]c_o;
  output c_o_ap_vld;

  wire ap_clk_0_1;
  wire ap_ctrl_0_1_done;
  wire ap_ctrl_0_1_idle;
  wire ap_ctrl_0_1_ready;
  wire ap_ctrl_0_1_start;
  wire ap_rst_0_1;
  wire [31:0]b_0_1;
  wire [31:0]c_i_0_1;
  wire [31:0]hls_inst_a;
  wire hls_inst_a_ap_vld;
  wire [31:0]hls_inst_c_o;
  wire hls_inst_c_o_ap_vld;

  assign a[31:0] = hls_inst_a;
  assign a_ap_vld = hls_inst_a_ap_vld;
  assign ap_clk_0_1 = ap_clk;
  assign ap_ctrl_0_1_start = ap_ctrl_start;
  assign ap_ctrl_done = ap_ctrl_0_1_done;
  assign ap_ctrl_idle = ap_ctrl_0_1_idle;
  assign ap_ctrl_ready = ap_ctrl_0_1_ready;
  assign ap_rst_0_1 = ap_rst;
  assign b_0_1 = b[31:0];
  assign c_i_0_1 = c_i[31:0];
  assign c_o[31:0] = hls_inst_c_o;
  assign c_o_ap_vld = hls_inst_c_o_ap_vld;
  bd_0_hls_inst_0 hls_inst
       (.a(hls_inst_a),
        .a_ap_vld(hls_inst_a_ap_vld),
        .ap_clk(ap_clk_0_1),
        .ap_done(ap_ctrl_0_1_done),
        .ap_idle(ap_ctrl_0_1_idle),
        .ap_ready(ap_ctrl_0_1_ready),
        .ap_rst(ap_rst_0_1),
        .ap_start(ap_ctrl_0_1_start),
        .b(b_0_1),
        .c_i(c_i_0_1),
        .c_o(hls_inst_c_o),
        .c_o_ap_vld(hls_inst_c_o_ap_vld));
endmodule
