// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Sun May 16 13:54:10 2021
// Host        : ece-rschsrv01.ece.gatech.edu running 64-bit Red Hat Enterprise Linux Server release 7.9 (Maipo)
// Command     : write_verilog -force -mode funcsim
//               /nethome/chao33/GNN-for-DFG/toy_example/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.v
// Design      : bd_0_hls_inst_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "bd_0_hls_inst_0,top_dfg,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "HLS" *) 
(* X_CORE_INFO = "top_dfg,Vivado 2020.2" *) (* hls_module = "yes" *) 
(* NotValidForBitStream *)
module bd_0_hls_inst_0
   (a_ap_vld,
    c_o_ap_vld,
    ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    a,
    b,
    c_i,
    c_o);
  output a_ap_vld;
  output c_o_ap_vld;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 a DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME a, LAYERED_METADATA undef" *) output [31:0]a;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 b DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME b, LAYERED_METADATA undef" *) input [31:0]b;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 c_i DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME c_i, LAYERED_METADATA undef" *) input [31:0]c_i;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 c_o DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME c_o, LAYERED_METADATA undef" *) output [31:0]c_o;

  wire [31:0]a;
  wire a_ap_vld;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire ap_rst;
  wire ap_start;
  wire [31:0]b;
  wire [31:0]c_i;
  wire [31:0]c_o;
  wire c_o_ap_vld;

  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "7'b0000001" *) 
  (* ap_ST_fsm_state2 = "7'b0000010" *) 
  (* ap_ST_fsm_state3 = "7'b0000100" *) 
  (* ap_ST_fsm_state4 = "7'b0001000" *) 
  (* ap_ST_fsm_state5 = "7'b0010000" *) 
  (* ap_ST_fsm_state6 = "7'b0100000" *) 
  (* ap_ST_fsm_state7 = "7'b1000000" *) 
  bd_0_hls_inst_0_top_dfg inst
       (.a(a),
        .a_ap_vld(a_ap_vld),
        .ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .b(b),
        .c_i(c_i),
        .c_o(c_o),
        .c_o_ap_vld(c_o_ap_vld));
endmodule

(* ORIG_REF_NAME = "top_dfg" *) (* ap_ST_fsm_state1 = "7'b0000001" *) (* ap_ST_fsm_state2 = "7'b0000010" *) 
(* ap_ST_fsm_state3 = "7'b0000100" *) (* ap_ST_fsm_state4 = "7'b0001000" *) (* ap_ST_fsm_state5 = "7'b0010000" *) 
(* ap_ST_fsm_state6 = "7'b0100000" *) (* ap_ST_fsm_state7 = "7'b1000000" *) (* hls_module = "yes" *) 
module bd_0_hls_inst_0_top_dfg
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    a,
    a_ap_vld,
    b,
    c_i,
    c_o,
    c_o_ap_vld);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [31:0]a;
  output a_ap_vld;
  input [31:0]b;
  input [31:0]c_i;
  output [31:0]c_o;
  output c_o_ap_vld;

  wire [31:0]a;
  wire a_ap_vld;
  wire \ap_CS_fsm[1]_i_2_n_0 ;
  wire \ap_CS_fsm_reg_n_0_[1] ;
  wire \ap_CS_fsm_reg_n_0_[4] ;
  wire ap_CS_fsm_state1;
  wire ap_CS_fsm_state3;
  wire ap_CS_fsm_state4;
  wire ap_CS_fsm_state6;
  wire [1:0]ap_NS_fsm;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_rst;
  wire ap_start;
  wire [31:0]b;
  wire [31:0]c_i;
  wire [31:0]c_o;
  wire \c_o[0]_INST_0_i_1_n_0 ;
  wire \c_o[0]_INST_0_i_2_n_0 ;
  wire \c_o[0]_INST_0_i_3_n_0 ;
  wire \c_o[0]_INST_0_i_4_n_0 ;
  wire \c_o[0]_INST_0_i_5_n_0 ;
  wire \c_o[0]_INST_0_i_6_n_0 ;
  wire \c_o[0]_INST_0_i_7_n_0 ;
  wire \c_o[0]_INST_0_n_0 ;
  wire \c_o[0]_INST_0_n_1 ;
  wire \c_o[0]_INST_0_n_2 ;
  wire \c_o[0]_INST_0_n_3 ;
  wire \c_o[12]_INST_0_i_1_n_0 ;
  wire \c_o[12]_INST_0_i_2_n_0 ;
  wire \c_o[12]_INST_0_i_3_n_0 ;
  wire \c_o[12]_INST_0_i_4_n_0 ;
  wire \c_o[12]_INST_0_i_5_n_0 ;
  wire \c_o[12]_INST_0_i_6_n_0 ;
  wire \c_o[12]_INST_0_i_7_n_0 ;
  wire \c_o[12]_INST_0_i_8_n_0 ;
  wire \c_o[12]_INST_0_n_0 ;
  wire \c_o[12]_INST_0_n_1 ;
  wire \c_o[12]_INST_0_n_2 ;
  wire \c_o[12]_INST_0_n_3 ;
  wire \c_o[16]_INST_0_i_1_n_0 ;
  wire \c_o[16]_INST_0_i_2_n_0 ;
  wire \c_o[16]_INST_0_i_3_n_0 ;
  wire \c_o[16]_INST_0_i_4_n_0 ;
  wire \c_o[16]_INST_0_i_5_n_0 ;
  wire \c_o[16]_INST_0_i_6_n_0 ;
  wire \c_o[16]_INST_0_i_7_n_0 ;
  wire \c_o[16]_INST_0_i_8_n_0 ;
  wire \c_o[16]_INST_0_n_0 ;
  wire \c_o[16]_INST_0_n_1 ;
  wire \c_o[16]_INST_0_n_2 ;
  wire \c_o[16]_INST_0_n_3 ;
  wire \c_o[20]_INST_0_i_1_n_0 ;
  wire \c_o[20]_INST_0_i_2_n_0 ;
  wire \c_o[20]_INST_0_i_3_n_0 ;
  wire \c_o[20]_INST_0_i_4_n_0 ;
  wire \c_o[20]_INST_0_i_5_n_0 ;
  wire \c_o[20]_INST_0_i_6_n_0 ;
  wire \c_o[20]_INST_0_i_7_n_0 ;
  wire \c_o[20]_INST_0_i_8_n_0 ;
  wire \c_o[20]_INST_0_n_0 ;
  wire \c_o[20]_INST_0_n_1 ;
  wire \c_o[20]_INST_0_n_2 ;
  wire \c_o[20]_INST_0_n_3 ;
  wire \c_o[24]_INST_0_i_1_n_0 ;
  wire \c_o[24]_INST_0_i_2_n_0 ;
  wire \c_o[24]_INST_0_i_3_n_0 ;
  wire \c_o[24]_INST_0_i_4_n_0 ;
  wire \c_o[24]_INST_0_i_5_n_0 ;
  wire \c_o[24]_INST_0_i_6_n_0 ;
  wire \c_o[24]_INST_0_i_7_n_0 ;
  wire \c_o[24]_INST_0_i_8_n_0 ;
  wire \c_o[24]_INST_0_n_0 ;
  wire \c_o[24]_INST_0_n_1 ;
  wire \c_o[24]_INST_0_n_2 ;
  wire \c_o[24]_INST_0_n_3 ;
  wire \c_o[28]_INST_0_i_1_n_0 ;
  wire \c_o[28]_INST_0_i_2_n_0 ;
  wire \c_o[28]_INST_0_i_3_n_0 ;
  wire \c_o[28]_INST_0_i_4_n_0 ;
  wire \c_o[28]_INST_0_i_5_n_0 ;
  wire \c_o[28]_INST_0_i_6_n_0 ;
  wire \c_o[28]_INST_0_i_7_n_0 ;
  wire \c_o[28]_INST_0_n_1 ;
  wire \c_o[28]_INST_0_n_2 ;
  wire \c_o[28]_INST_0_n_3 ;
  wire \c_o[4]_INST_0_i_1_n_0 ;
  wire \c_o[4]_INST_0_i_2_n_0 ;
  wire \c_o[4]_INST_0_i_3_n_0 ;
  wire \c_o[4]_INST_0_i_4_n_0 ;
  wire \c_o[4]_INST_0_i_5_n_0 ;
  wire \c_o[4]_INST_0_i_6_n_0 ;
  wire \c_o[4]_INST_0_i_7_n_0 ;
  wire \c_o[4]_INST_0_i_8_n_0 ;
  wire \c_o[4]_INST_0_n_0 ;
  wire \c_o[4]_INST_0_n_1 ;
  wire \c_o[4]_INST_0_n_2 ;
  wire \c_o[4]_INST_0_n_3 ;
  wire \c_o[8]_INST_0_i_1_n_0 ;
  wire \c_o[8]_INST_0_i_2_n_0 ;
  wire \c_o[8]_INST_0_i_3_n_0 ;
  wire \c_o[8]_INST_0_i_4_n_0 ;
  wire \c_o[8]_INST_0_i_5_n_0 ;
  wire \c_o[8]_INST_0_i_6_n_0 ;
  wire \c_o[8]_INST_0_i_7_n_0 ;
  wire \c_o[8]_INST_0_i_8_n_0 ;
  wire \c_o[8]_INST_0_n_0 ;
  wire \c_o[8]_INST_0_n_1 ;
  wire \c_o[8]_INST_0_n_2 ;
  wire \c_o[8]_INST_0_n_3 ;
  wire mul_32s_32s_32_2_1_U1_n_48;
  wire mul_32s_32s_32_2_1_U1_n_49;
  wire mul_32s_32s_32_2_1_U1_n_50;
  wire mul_32s_32s_32_2_1_U1_n_51;
  wire mul_32s_32s_32_2_1_U1_n_52;
  wire mul_32s_32s_32_2_1_U1_n_53;
  wire mul_32s_32s_32_2_1_U1_n_54;
  wire mul_32s_32s_32_2_1_U1_n_55;
  wire mul_32s_32s_32_2_1_U1_n_56;
  wire mul_32s_32s_32_2_1_U1_n_57;
  wire mul_32s_32s_32_2_1_U1_n_58;
  wire mul_32s_32s_32_2_1_U1_n_59;
  wire mul_32s_32s_32_2_1_U1_n_60;
  wire mul_32s_32s_32_2_1_U1_n_61;
  wire mul_32s_32s_32_2_1_U1_n_62;
  wire mul_32s_32s_32_2_1_U1_n_63;
  wire mul_32s_32s_32_2_1_U2_n_48;
  wire mul_32s_32s_32_2_1_U2_n_49;
  wire mul_32s_32s_32_2_1_U2_n_50;
  wire mul_32s_32s_32_2_1_U2_n_51;
  wire mul_32s_32s_32_2_1_U2_n_52;
  wire mul_32s_32s_32_2_1_U2_n_53;
  wire mul_32s_32s_32_2_1_U2_n_54;
  wire mul_32s_32s_32_2_1_U2_n_55;
  wire mul_32s_32s_32_2_1_U2_n_56;
  wire mul_32s_32s_32_2_1_U2_n_57;
  wire mul_32s_32s_32_2_1_U2_n_58;
  wire mul_32s_32s_32_2_1_U2_n_59;
  wire mul_32s_32s_32_2_1_U2_n_60;
  wire mul_32s_32s_32_2_1_U2_n_61;
  wire mul_32s_32s_32_2_1_U2_n_62;
  wire mul_32s_32s_32_2_1_U2_n_63;
  wire [31:0]mul_ln7_reg_101;
  wire [31:1]t1_fu_65_p2;
  wire [31:0]t1_reg_106;
  wire \t1_reg_106[4]_i_2_n_0 ;
  wire \t1_reg_106_reg[12]_i_1_n_0 ;
  wire \t1_reg_106_reg[12]_i_1_n_1 ;
  wire \t1_reg_106_reg[12]_i_1_n_2 ;
  wire \t1_reg_106_reg[12]_i_1_n_3 ;
  wire \t1_reg_106_reg[16]_i_1_n_0 ;
  wire \t1_reg_106_reg[16]_i_1_n_1 ;
  wire \t1_reg_106_reg[16]_i_1_n_2 ;
  wire \t1_reg_106_reg[16]_i_1_n_3 ;
  wire \t1_reg_106_reg[20]_i_1_n_0 ;
  wire \t1_reg_106_reg[20]_i_1_n_1 ;
  wire \t1_reg_106_reg[20]_i_1_n_2 ;
  wire \t1_reg_106_reg[20]_i_1_n_3 ;
  wire \t1_reg_106_reg[24]_i_1_n_0 ;
  wire \t1_reg_106_reg[24]_i_1_n_1 ;
  wire \t1_reg_106_reg[24]_i_1_n_2 ;
  wire \t1_reg_106_reg[24]_i_1_n_3 ;
  wire \t1_reg_106_reg[28]_i_1_n_0 ;
  wire \t1_reg_106_reg[28]_i_1_n_1 ;
  wire \t1_reg_106_reg[28]_i_1_n_2 ;
  wire \t1_reg_106_reg[28]_i_1_n_3 ;
  wire \t1_reg_106_reg[31]_i_1_n_2 ;
  wire \t1_reg_106_reg[31]_i_1_n_3 ;
  wire \t1_reg_106_reg[4]_i_1_n_0 ;
  wire \t1_reg_106_reg[4]_i_1_n_1 ;
  wire \t1_reg_106_reg[4]_i_1_n_2 ;
  wire \t1_reg_106_reg[4]_i_1_n_3 ;
  wire \t1_reg_106_reg[8]_i_1_n_0 ;
  wire \t1_reg_106_reg[8]_i_1_n_1 ;
  wire \t1_reg_106_reg[8]_i_1_n_2 ;
  wire \t1_reg_106_reg[8]_i_1_n_3 ;
  wire [31:0]t2_fu_70_p2;
  wire [31:0]t2_reg_111;
  wire [31:0]t3_reg_117;
  wire [31:16]\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 ;
  wire [31:16]\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 ;
  wire [3:3]\NLW_c_o[28]_INST_0_CO_UNCONNECTED ;
  wire [3:2]\NLW_t1_reg_106_reg[31]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_t1_reg_106_reg[31]_i_1_O_UNCONNECTED ;

  assign ap_ready = ap_done;
  assign c_o_ap_vld = ap_done;
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h8)) 
    a_ap_vld_INST_0
       (.I0(ap_CS_fsm_state1),
        .I1(ap_start),
        .O(a_ap_vld));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hAE)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(ap_done),
        .I1(ap_CS_fsm_state1),
        .I2(ap_start),
        .O(ap_NS_fsm[0]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h00001000)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(ap_done),
        .I1(\ap_CS_fsm_reg_n_0_[1] ),
        .I2(ap_CS_fsm_state1),
        .I3(ap_start),
        .I4(\ap_CS_fsm[1]_i_2_n_0 ),
        .O(ap_NS_fsm[1]));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(\ap_CS_fsm_reg_n_0_[4] ),
        .I1(ap_CS_fsm_state6),
        .I2(ap_CS_fsm_state3),
        .I3(ap_CS_fsm_state4),
        .O(\ap_CS_fsm[1]_i_2_n_0 ));
  (* FSM_ENCODING = "none" *) 
  FDSE #(
    .INIT(1'b1)) 
    \ap_CS_fsm_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[0]),
        .Q(ap_CS_fsm_state1),
        .S(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[1]),
        .Q(\ap_CS_fsm_reg_n_0_[1] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[1] ),
        .Q(ap_CS_fsm_state3),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state3),
        .Q(ap_CS_fsm_state4),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state4),
        .Q(\ap_CS_fsm_reg_n_0_[4] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[4] ),
        .Q(ap_CS_fsm_state6),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state6),
        .Q(ap_done),
        .R(ap_rst));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(ap_CS_fsm_state1),
        .I1(ap_start),
        .O(ap_idle));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \c_o[0]_INST_0 
       (.CI(1'b0),
        .CO({\c_o[0]_INST_0_n_0 ,\c_o[0]_INST_0_n_1 ,\c_o[0]_INST_0_n_2 ,\c_o[0]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\c_o[0]_INST_0_i_1_n_0 ,\c_o[0]_INST_0_i_2_n_0 ,\c_o[0]_INST_0_i_3_n_0 ,1'b0}),
        .O(c_o[3:0]),
        .S({\c_o[0]_INST_0_i_4_n_0 ,\c_o[0]_INST_0_i_5_n_0 ,\c_o[0]_INST_0_i_6_n_0 ,\c_o[0]_INST_0_i_7_n_0 }));
  (* HLUTNM = "lutpair2" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[0]_INST_0_i_1 
       (.I0(t3_reg_117[2]),
        .I1(t2_reg_111[2]),
        .I2(t1_reg_106[2]),
        .O(\c_o[0]_INST_0_i_1_n_0 ));
  (* HLUTNM = "lutpair1" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[0]_INST_0_i_2 
       (.I0(t3_reg_117[1]),
        .I1(t2_reg_111[1]),
        .I2(t1_reg_106[1]),
        .O(\c_o[0]_INST_0_i_2_n_0 ));
  (* HLUTNM = "lutpair0" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[0]_INST_0_i_3 
       (.I0(t3_reg_117[0]),
        .I1(t2_reg_111[0]),
        .I2(t1_reg_106[0]),
        .O(\c_o[0]_INST_0_i_3_n_0 ));
  (* HLUTNM = "lutpair3" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[0]_INST_0_i_4 
       (.I0(t3_reg_117[3]),
        .I1(t2_reg_111[3]),
        .I2(t1_reg_106[3]),
        .I3(\c_o[0]_INST_0_i_1_n_0 ),
        .O(\c_o[0]_INST_0_i_4_n_0 ));
  (* HLUTNM = "lutpair2" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[0]_INST_0_i_5 
       (.I0(t3_reg_117[2]),
        .I1(t2_reg_111[2]),
        .I2(t1_reg_106[2]),
        .I3(\c_o[0]_INST_0_i_2_n_0 ),
        .O(\c_o[0]_INST_0_i_5_n_0 ));
  (* HLUTNM = "lutpair1" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[0]_INST_0_i_6 
       (.I0(t3_reg_117[1]),
        .I1(t2_reg_111[1]),
        .I2(t1_reg_106[1]),
        .I3(\c_o[0]_INST_0_i_3_n_0 ),
        .O(\c_o[0]_INST_0_i_6_n_0 ));
  (* HLUTNM = "lutpair0" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \c_o[0]_INST_0_i_7 
       (.I0(t3_reg_117[0]),
        .I1(t2_reg_111[0]),
        .I2(t1_reg_106[0]),
        .O(\c_o[0]_INST_0_i_7_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \c_o[12]_INST_0 
       (.CI(\c_o[8]_INST_0_n_0 ),
        .CO({\c_o[12]_INST_0_n_0 ,\c_o[12]_INST_0_n_1 ,\c_o[12]_INST_0_n_2 ,\c_o[12]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\c_o[12]_INST_0_i_1_n_0 ,\c_o[12]_INST_0_i_2_n_0 ,\c_o[12]_INST_0_i_3_n_0 ,\c_o[12]_INST_0_i_4_n_0 }),
        .O(c_o[15:12]),
        .S({\c_o[12]_INST_0_i_5_n_0 ,\c_o[12]_INST_0_i_6_n_0 ,\c_o[12]_INST_0_i_7_n_0 ,\c_o[12]_INST_0_i_8_n_0 }));
  (* HLUTNM = "lutpair14" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[12]_INST_0_i_1 
       (.I0(t3_reg_117[14]),
        .I1(t2_reg_111[14]),
        .I2(t1_reg_106[14]),
        .O(\c_o[12]_INST_0_i_1_n_0 ));
  (* HLUTNM = "lutpair13" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[12]_INST_0_i_2 
       (.I0(t3_reg_117[13]),
        .I1(t2_reg_111[13]),
        .I2(t1_reg_106[13]),
        .O(\c_o[12]_INST_0_i_2_n_0 ));
  (* HLUTNM = "lutpair12" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[12]_INST_0_i_3 
       (.I0(t3_reg_117[12]),
        .I1(t2_reg_111[12]),
        .I2(t1_reg_106[12]),
        .O(\c_o[12]_INST_0_i_3_n_0 ));
  (* HLUTNM = "lutpair11" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[12]_INST_0_i_4 
       (.I0(t3_reg_117[11]),
        .I1(t2_reg_111[11]),
        .I2(t1_reg_106[11]),
        .O(\c_o[12]_INST_0_i_4_n_0 ));
  (* HLUTNM = "lutpair15" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[12]_INST_0_i_5 
       (.I0(t3_reg_117[15]),
        .I1(t2_reg_111[15]),
        .I2(t1_reg_106[15]),
        .I3(\c_o[12]_INST_0_i_1_n_0 ),
        .O(\c_o[12]_INST_0_i_5_n_0 ));
  (* HLUTNM = "lutpair14" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[12]_INST_0_i_6 
       (.I0(t3_reg_117[14]),
        .I1(t2_reg_111[14]),
        .I2(t1_reg_106[14]),
        .I3(\c_o[12]_INST_0_i_2_n_0 ),
        .O(\c_o[12]_INST_0_i_6_n_0 ));
  (* HLUTNM = "lutpair13" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[12]_INST_0_i_7 
       (.I0(t3_reg_117[13]),
        .I1(t2_reg_111[13]),
        .I2(t1_reg_106[13]),
        .I3(\c_o[12]_INST_0_i_3_n_0 ),
        .O(\c_o[12]_INST_0_i_7_n_0 ));
  (* HLUTNM = "lutpair12" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[12]_INST_0_i_8 
       (.I0(t3_reg_117[12]),
        .I1(t2_reg_111[12]),
        .I2(t1_reg_106[12]),
        .I3(\c_o[12]_INST_0_i_4_n_0 ),
        .O(\c_o[12]_INST_0_i_8_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \c_o[16]_INST_0 
       (.CI(\c_o[12]_INST_0_n_0 ),
        .CO({\c_o[16]_INST_0_n_0 ,\c_o[16]_INST_0_n_1 ,\c_o[16]_INST_0_n_2 ,\c_o[16]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\c_o[16]_INST_0_i_1_n_0 ,\c_o[16]_INST_0_i_2_n_0 ,\c_o[16]_INST_0_i_3_n_0 ,\c_o[16]_INST_0_i_4_n_0 }),
        .O(c_o[19:16]),
        .S({\c_o[16]_INST_0_i_5_n_0 ,\c_o[16]_INST_0_i_6_n_0 ,\c_o[16]_INST_0_i_7_n_0 ,\c_o[16]_INST_0_i_8_n_0 }));
  (* HLUTNM = "lutpair18" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[16]_INST_0_i_1 
       (.I0(t3_reg_117[18]),
        .I1(t2_reg_111[18]),
        .I2(t1_reg_106[18]),
        .O(\c_o[16]_INST_0_i_1_n_0 ));
  (* HLUTNM = "lutpair17" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[16]_INST_0_i_2 
       (.I0(t3_reg_117[17]),
        .I1(t2_reg_111[17]),
        .I2(t1_reg_106[17]),
        .O(\c_o[16]_INST_0_i_2_n_0 ));
  (* HLUTNM = "lutpair16" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[16]_INST_0_i_3 
       (.I0(t3_reg_117[16]),
        .I1(t2_reg_111[16]),
        .I2(t1_reg_106[16]),
        .O(\c_o[16]_INST_0_i_3_n_0 ));
  (* HLUTNM = "lutpair15" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[16]_INST_0_i_4 
       (.I0(t3_reg_117[15]),
        .I1(t2_reg_111[15]),
        .I2(t1_reg_106[15]),
        .O(\c_o[16]_INST_0_i_4_n_0 ));
  (* HLUTNM = "lutpair19" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[16]_INST_0_i_5 
       (.I0(t3_reg_117[19]),
        .I1(t2_reg_111[19]),
        .I2(t1_reg_106[19]),
        .I3(\c_o[16]_INST_0_i_1_n_0 ),
        .O(\c_o[16]_INST_0_i_5_n_0 ));
  (* HLUTNM = "lutpair18" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[16]_INST_0_i_6 
       (.I0(t3_reg_117[18]),
        .I1(t2_reg_111[18]),
        .I2(t1_reg_106[18]),
        .I3(\c_o[16]_INST_0_i_2_n_0 ),
        .O(\c_o[16]_INST_0_i_6_n_0 ));
  (* HLUTNM = "lutpair17" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[16]_INST_0_i_7 
       (.I0(t3_reg_117[17]),
        .I1(t2_reg_111[17]),
        .I2(t1_reg_106[17]),
        .I3(\c_o[16]_INST_0_i_3_n_0 ),
        .O(\c_o[16]_INST_0_i_7_n_0 ));
  (* HLUTNM = "lutpair16" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[16]_INST_0_i_8 
       (.I0(t3_reg_117[16]),
        .I1(t2_reg_111[16]),
        .I2(t1_reg_106[16]),
        .I3(\c_o[16]_INST_0_i_4_n_0 ),
        .O(\c_o[16]_INST_0_i_8_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \c_o[20]_INST_0 
       (.CI(\c_o[16]_INST_0_n_0 ),
        .CO({\c_o[20]_INST_0_n_0 ,\c_o[20]_INST_0_n_1 ,\c_o[20]_INST_0_n_2 ,\c_o[20]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\c_o[20]_INST_0_i_1_n_0 ,\c_o[20]_INST_0_i_2_n_0 ,\c_o[20]_INST_0_i_3_n_0 ,\c_o[20]_INST_0_i_4_n_0 }),
        .O(c_o[23:20]),
        .S({\c_o[20]_INST_0_i_5_n_0 ,\c_o[20]_INST_0_i_6_n_0 ,\c_o[20]_INST_0_i_7_n_0 ,\c_o[20]_INST_0_i_8_n_0 }));
  (* HLUTNM = "lutpair22" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[20]_INST_0_i_1 
       (.I0(t3_reg_117[22]),
        .I1(t2_reg_111[22]),
        .I2(t1_reg_106[22]),
        .O(\c_o[20]_INST_0_i_1_n_0 ));
  (* HLUTNM = "lutpair21" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[20]_INST_0_i_2 
       (.I0(t3_reg_117[21]),
        .I1(t2_reg_111[21]),
        .I2(t1_reg_106[21]),
        .O(\c_o[20]_INST_0_i_2_n_0 ));
  (* HLUTNM = "lutpair20" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[20]_INST_0_i_3 
       (.I0(t3_reg_117[20]),
        .I1(t2_reg_111[20]),
        .I2(t1_reg_106[20]),
        .O(\c_o[20]_INST_0_i_3_n_0 ));
  (* HLUTNM = "lutpair19" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[20]_INST_0_i_4 
       (.I0(t3_reg_117[19]),
        .I1(t2_reg_111[19]),
        .I2(t1_reg_106[19]),
        .O(\c_o[20]_INST_0_i_4_n_0 ));
  (* HLUTNM = "lutpair23" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[20]_INST_0_i_5 
       (.I0(t3_reg_117[23]),
        .I1(t2_reg_111[23]),
        .I2(t1_reg_106[23]),
        .I3(\c_o[20]_INST_0_i_1_n_0 ),
        .O(\c_o[20]_INST_0_i_5_n_0 ));
  (* HLUTNM = "lutpair22" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[20]_INST_0_i_6 
       (.I0(t3_reg_117[22]),
        .I1(t2_reg_111[22]),
        .I2(t1_reg_106[22]),
        .I3(\c_o[20]_INST_0_i_2_n_0 ),
        .O(\c_o[20]_INST_0_i_6_n_0 ));
  (* HLUTNM = "lutpair21" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[20]_INST_0_i_7 
       (.I0(t3_reg_117[21]),
        .I1(t2_reg_111[21]),
        .I2(t1_reg_106[21]),
        .I3(\c_o[20]_INST_0_i_3_n_0 ),
        .O(\c_o[20]_INST_0_i_7_n_0 ));
  (* HLUTNM = "lutpair20" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[20]_INST_0_i_8 
       (.I0(t3_reg_117[20]),
        .I1(t2_reg_111[20]),
        .I2(t1_reg_106[20]),
        .I3(\c_o[20]_INST_0_i_4_n_0 ),
        .O(\c_o[20]_INST_0_i_8_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \c_o[24]_INST_0 
       (.CI(\c_o[20]_INST_0_n_0 ),
        .CO({\c_o[24]_INST_0_n_0 ,\c_o[24]_INST_0_n_1 ,\c_o[24]_INST_0_n_2 ,\c_o[24]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\c_o[24]_INST_0_i_1_n_0 ,\c_o[24]_INST_0_i_2_n_0 ,\c_o[24]_INST_0_i_3_n_0 ,\c_o[24]_INST_0_i_4_n_0 }),
        .O(c_o[27:24]),
        .S({\c_o[24]_INST_0_i_5_n_0 ,\c_o[24]_INST_0_i_6_n_0 ,\c_o[24]_INST_0_i_7_n_0 ,\c_o[24]_INST_0_i_8_n_0 }));
  (* HLUTNM = "lutpair26" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[24]_INST_0_i_1 
       (.I0(t3_reg_117[26]),
        .I1(t2_reg_111[26]),
        .I2(t1_reg_106[26]),
        .O(\c_o[24]_INST_0_i_1_n_0 ));
  (* HLUTNM = "lutpair25" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[24]_INST_0_i_2 
       (.I0(t3_reg_117[25]),
        .I1(t2_reg_111[25]),
        .I2(t1_reg_106[25]),
        .O(\c_o[24]_INST_0_i_2_n_0 ));
  (* HLUTNM = "lutpair24" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[24]_INST_0_i_3 
       (.I0(t3_reg_117[24]),
        .I1(t2_reg_111[24]),
        .I2(t1_reg_106[24]),
        .O(\c_o[24]_INST_0_i_3_n_0 ));
  (* HLUTNM = "lutpair23" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[24]_INST_0_i_4 
       (.I0(t3_reg_117[23]),
        .I1(t2_reg_111[23]),
        .I2(t1_reg_106[23]),
        .O(\c_o[24]_INST_0_i_4_n_0 ));
  (* HLUTNM = "lutpair27" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[24]_INST_0_i_5 
       (.I0(t3_reg_117[27]),
        .I1(t2_reg_111[27]),
        .I2(t1_reg_106[27]),
        .I3(\c_o[24]_INST_0_i_1_n_0 ),
        .O(\c_o[24]_INST_0_i_5_n_0 ));
  (* HLUTNM = "lutpair26" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[24]_INST_0_i_6 
       (.I0(t3_reg_117[26]),
        .I1(t2_reg_111[26]),
        .I2(t1_reg_106[26]),
        .I3(\c_o[24]_INST_0_i_2_n_0 ),
        .O(\c_o[24]_INST_0_i_6_n_0 ));
  (* HLUTNM = "lutpair25" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[24]_INST_0_i_7 
       (.I0(t3_reg_117[25]),
        .I1(t2_reg_111[25]),
        .I2(t1_reg_106[25]),
        .I3(\c_o[24]_INST_0_i_3_n_0 ),
        .O(\c_o[24]_INST_0_i_7_n_0 ));
  (* HLUTNM = "lutpair24" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[24]_INST_0_i_8 
       (.I0(t3_reg_117[24]),
        .I1(t2_reg_111[24]),
        .I2(t1_reg_106[24]),
        .I3(\c_o[24]_INST_0_i_4_n_0 ),
        .O(\c_o[24]_INST_0_i_8_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \c_o[28]_INST_0 
       (.CI(\c_o[24]_INST_0_n_0 ),
        .CO({\NLW_c_o[28]_INST_0_CO_UNCONNECTED [3],\c_o[28]_INST_0_n_1 ,\c_o[28]_INST_0_n_2 ,\c_o[28]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,\c_o[28]_INST_0_i_1_n_0 ,\c_o[28]_INST_0_i_2_n_0 ,\c_o[28]_INST_0_i_3_n_0 }),
        .O(c_o[31:28]),
        .S({\c_o[28]_INST_0_i_4_n_0 ,\c_o[28]_INST_0_i_5_n_0 ,\c_o[28]_INST_0_i_6_n_0 ,\c_o[28]_INST_0_i_7_n_0 }));
  (* HLUTNM = "lutpair29" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[28]_INST_0_i_1 
       (.I0(t3_reg_117[29]),
        .I1(t2_reg_111[29]),
        .I2(t1_reg_106[29]),
        .O(\c_o[28]_INST_0_i_1_n_0 ));
  (* HLUTNM = "lutpair28" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[28]_INST_0_i_2 
       (.I0(t3_reg_117[28]),
        .I1(t2_reg_111[28]),
        .I2(t1_reg_106[28]),
        .O(\c_o[28]_INST_0_i_2_n_0 ));
  (* HLUTNM = "lutpair27" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[28]_INST_0_i_3 
       (.I0(t3_reg_117[27]),
        .I1(t2_reg_111[27]),
        .I2(t1_reg_106[27]),
        .O(\c_o[28]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \c_o[28]_INST_0_i_4 
       (.I0(t1_reg_106[30]),
        .I1(t2_reg_111[30]),
        .I2(t3_reg_117[30]),
        .I3(t2_reg_111[31]),
        .I4(t3_reg_117[31]),
        .I5(t1_reg_106[31]),
        .O(\c_o[28]_INST_0_i_4_n_0 ));
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[28]_INST_0_i_5 
       (.I0(\c_o[28]_INST_0_i_1_n_0 ),
        .I1(t2_reg_111[30]),
        .I2(t3_reg_117[30]),
        .I3(t1_reg_106[30]),
        .O(\c_o[28]_INST_0_i_5_n_0 ));
  (* HLUTNM = "lutpair29" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[28]_INST_0_i_6 
       (.I0(t3_reg_117[29]),
        .I1(t2_reg_111[29]),
        .I2(t1_reg_106[29]),
        .I3(\c_o[28]_INST_0_i_2_n_0 ),
        .O(\c_o[28]_INST_0_i_6_n_0 ));
  (* HLUTNM = "lutpair28" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[28]_INST_0_i_7 
       (.I0(t3_reg_117[28]),
        .I1(t2_reg_111[28]),
        .I2(t1_reg_106[28]),
        .I3(\c_o[28]_INST_0_i_3_n_0 ),
        .O(\c_o[28]_INST_0_i_7_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \c_o[4]_INST_0 
       (.CI(\c_o[0]_INST_0_n_0 ),
        .CO({\c_o[4]_INST_0_n_0 ,\c_o[4]_INST_0_n_1 ,\c_o[4]_INST_0_n_2 ,\c_o[4]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\c_o[4]_INST_0_i_1_n_0 ,\c_o[4]_INST_0_i_2_n_0 ,\c_o[4]_INST_0_i_3_n_0 ,\c_o[4]_INST_0_i_4_n_0 }),
        .O(c_o[7:4]),
        .S({\c_o[4]_INST_0_i_5_n_0 ,\c_o[4]_INST_0_i_6_n_0 ,\c_o[4]_INST_0_i_7_n_0 ,\c_o[4]_INST_0_i_8_n_0 }));
  (* HLUTNM = "lutpair6" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[4]_INST_0_i_1 
       (.I0(t3_reg_117[6]),
        .I1(t2_reg_111[6]),
        .I2(t1_reg_106[6]),
        .O(\c_o[4]_INST_0_i_1_n_0 ));
  (* HLUTNM = "lutpair5" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[4]_INST_0_i_2 
       (.I0(t3_reg_117[5]),
        .I1(t2_reg_111[5]),
        .I2(t1_reg_106[5]),
        .O(\c_o[4]_INST_0_i_2_n_0 ));
  (* HLUTNM = "lutpair4" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[4]_INST_0_i_3 
       (.I0(t3_reg_117[4]),
        .I1(t2_reg_111[4]),
        .I2(t1_reg_106[4]),
        .O(\c_o[4]_INST_0_i_3_n_0 ));
  (* HLUTNM = "lutpair3" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[4]_INST_0_i_4 
       (.I0(t3_reg_117[3]),
        .I1(t2_reg_111[3]),
        .I2(t1_reg_106[3]),
        .O(\c_o[4]_INST_0_i_4_n_0 ));
  (* HLUTNM = "lutpair7" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[4]_INST_0_i_5 
       (.I0(t3_reg_117[7]),
        .I1(t2_reg_111[7]),
        .I2(t1_reg_106[7]),
        .I3(\c_o[4]_INST_0_i_1_n_0 ),
        .O(\c_o[4]_INST_0_i_5_n_0 ));
  (* HLUTNM = "lutpair6" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[4]_INST_0_i_6 
       (.I0(t3_reg_117[6]),
        .I1(t2_reg_111[6]),
        .I2(t1_reg_106[6]),
        .I3(\c_o[4]_INST_0_i_2_n_0 ),
        .O(\c_o[4]_INST_0_i_6_n_0 ));
  (* HLUTNM = "lutpair5" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[4]_INST_0_i_7 
       (.I0(t3_reg_117[5]),
        .I1(t2_reg_111[5]),
        .I2(t1_reg_106[5]),
        .I3(\c_o[4]_INST_0_i_3_n_0 ),
        .O(\c_o[4]_INST_0_i_7_n_0 ));
  (* HLUTNM = "lutpair4" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[4]_INST_0_i_8 
       (.I0(t3_reg_117[4]),
        .I1(t2_reg_111[4]),
        .I2(t1_reg_106[4]),
        .I3(\c_o[4]_INST_0_i_4_n_0 ),
        .O(\c_o[4]_INST_0_i_8_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \c_o[8]_INST_0 
       (.CI(\c_o[4]_INST_0_n_0 ),
        .CO({\c_o[8]_INST_0_n_0 ,\c_o[8]_INST_0_n_1 ,\c_o[8]_INST_0_n_2 ,\c_o[8]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\c_o[8]_INST_0_i_1_n_0 ,\c_o[8]_INST_0_i_2_n_0 ,\c_o[8]_INST_0_i_3_n_0 ,\c_o[8]_INST_0_i_4_n_0 }),
        .O(c_o[11:8]),
        .S({\c_o[8]_INST_0_i_5_n_0 ,\c_o[8]_INST_0_i_6_n_0 ,\c_o[8]_INST_0_i_7_n_0 ,\c_o[8]_INST_0_i_8_n_0 }));
  (* HLUTNM = "lutpair10" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[8]_INST_0_i_1 
       (.I0(t3_reg_117[10]),
        .I1(t2_reg_111[10]),
        .I2(t1_reg_106[10]),
        .O(\c_o[8]_INST_0_i_1_n_0 ));
  (* HLUTNM = "lutpair9" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[8]_INST_0_i_2 
       (.I0(t3_reg_117[9]),
        .I1(t2_reg_111[9]),
        .I2(t1_reg_106[9]),
        .O(\c_o[8]_INST_0_i_2_n_0 ));
  (* HLUTNM = "lutpair8" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[8]_INST_0_i_3 
       (.I0(t3_reg_117[8]),
        .I1(t2_reg_111[8]),
        .I2(t1_reg_106[8]),
        .O(\c_o[8]_INST_0_i_3_n_0 ));
  (* HLUTNM = "lutpair7" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \c_o[8]_INST_0_i_4 
       (.I0(t3_reg_117[7]),
        .I1(t2_reg_111[7]),
        .I2(t1_reg_106[7]),
        .O(\c_o[8]_INST_0_i_4_n_0 ));
  (* HLUTNM = "lutpair11" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[8]_INST_0_i_5 
       (.I0(t3_reg_117[11]),
        .I1(t2_reg_111[11]),
        .I2(t1_reg_106[11]),
        .I3(\c_o[8]_INST_0_i_1_n_0 ),
        .O(\c_o[8]_INST_0_i_5_n_0 ));
  (* HLUTNM = "lutpair10" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[8]_INST_0_i_6 
       (.I0(t3_reg_117[10]),
        .I1(t2_reg_111[10]),
        .I2(t1_reg_106[10]),
        .I3(\c_o[8]_INST_0_i_2_n_0 ),
        .O(\c_o[8]_INST_0_i_6_n_0 ));
  (* HLUTNM = "lutpair9" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[8]_INST_0_i_7 
       (.I0(t3_reg_117[9]),
        .I1(t2_reg_111[9]),
        .I2(t1_reg_106[9]),
        .I3(\c_o[8]_INST_0_i_3_n_0 ),
        .O(\c_o[8]_INST_0_i_7_n_0 ));
  (* HLUTNM = "lutpair8" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \c_o[8]_INST_0_i_8 
       (.I0(t3_reg_117[8]),
        .I1(t2_reg_111[8]),
        .I2(t1_reg_106[8]),
        .I3(\c_o[8]_INST_0_i_4_n_0 ),
        .O(\c_o[8]_INST_0_i_8_n_0 ));
  bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1 mul_32s_32s_32_2_1_U1
       (.D({\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 ,mul_32s_32s_32_2_1_U1_n_48,mul_32s_32s_32_2_1_U1_n_49,mul_32s_32s_32_2_1_U1_n_50,mul_32s_32s_32_2_1_U1_n_51,mul_32s_32s_32_2_1_U1_n_52,mul_32s_32s_32_2_1_U1_n_53,mul_32s_32s_32_2_1_U1_n_54,mul_32s_32s_32_2_1_U1_n_55,mul_32s_32s_32_2_1_U1_n_56,mul_32s_32s_32_2_1_U1_n_57,mul_32s_32s_32_2_1_U1_n_58,mul_32s_32s_32_2_1_U1_n_59,mul_32s_32s_32_2_1_U1_n_60,mul_32s_32s_32_2_1_U1_n_61,mul_32s_32s_32_2_1_U1_n_62,mul_32s_32s_32_2_1_U1_n_63}),
        .Q(ap_CS_fsm_state1),
        .a(a),
        .ap_clk(ap_clk),
        .b(b));
  bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_0 mul_32s_32s_32_2_1_U2
       (.D(t2_fu_70_p2),
        .Q(ap_CS_fsm_state4),
        .ap_clk(ap_clk),
        .b(b),
        .c_i(c_i),
        .p_reg({\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 ,mul_32s_32s_32_2_1_U2_n_48,mul_32s_32s_32_2_1_U2_n_49,mul_32s_32s_32_2_1_U2_n_50,mul_32s_32s_32_2_1_U2_n_51,mul_32s_32s_32_2_1_U2_n_52,mul_32s_32s_32_2_1_U2_n_53,mul_32s_32s_32_2_1_U2_n_54,mul_32s_32s_32_2_1_U2_n_55,mul_32s_32s_32_2_1_U2_n_56,mul_32s_32s_32_2_1_U2_n_57,mul_32s_32s_32_2_1_U2_n_58,mul_32s_32s_32_2_1_U2_n_59,mul_32s_32s_32_2_1_U2_n_60,mul_32s_32s_32_2_1_U2_n_61,mul_32s_32s_32_2_1_U2_n_62,mul_32s_32s_32_2_1_U2_n_63}),
        .p_reg_0({t1_fu_65_p2,mul_ln7_reg_101[0]}));
  FDRE \mul_ln7_reg_101_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_63),
        .Q(mul_ln7_reg_101[0]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_53),
        .Q(mul_ln7_reg_101[10]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_52),
        .Q(mul_ln7_reg_101[11]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_51),
        .Q(mul_ln7_reg_101[12]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_50),
        .Q(mul_ln7_reg_101[13]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_49),
        .Q(mul_ln7_reg_101[14]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_48),
        .Q(mul_ln7_reg_101[15]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[16] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [16]),
        .Q(mul_ln7_reg_101[16]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[17] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [17]),
        .Q(mul_ln7_reg_101[17]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[18] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [18]),
        .Q(mul_ln7_reg_101[18]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[19] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [19]),
        .Q(mul_ln7_reg_101[19]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_62),
        .Q(mul_ln7_reg_101[1]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[20] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [20]),
        .Q(mul_ln7_reg_101[20]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[21] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [21]),
        .Q(mul_ln7_reg_101[21]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[22] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [22]),
        .Q(mul_ln7_reg_101[22]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[23] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [23]),
        .Q(mul_ln7_reg_101[23]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[24] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [24]),
        .Q(mul_ln7_reg_101[24]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[25] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [25]),
        .Q(mul_ln7_reg_101[25]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[26] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [26]),
        .Q(mul_ln7_reg_101[26]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[27] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [27]),
        .Q(mul_ln7_reg_101[27]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[28] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [28]),
        .Q(mul_ln7_reg_101[28]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[29] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [29]),
        .Q(mul_ln7_reg_101[29]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_61),
        .Q(mul_ln7_reg_101[2]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[30] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [30]),
        .Q(mul_ln7_reg_101[30]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[31] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1 [31]),
        .Q(mul_ln7_reg_101[31]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_60),
        .Q(mul_ln7_reg_101[3]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_59),
        .Q(mul_ln7_reg_101[4]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_58),
        .Q(mul_ln7_reg_101[5]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_57),
        .Q(mul_ln7_reg_101[6]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_56),
        .Q(mul_ln7_reg_101[7]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_55),
        .Q(mul_ln7_reg_101[8]),
        .R(1'b0));
  FDRE \mul_ln7_reg_101_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(mul_32s_32s_32_2_1_U1_n_54),
        .Q(mul_ln7_reg_101[9]),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    \t1_reg_106[4]_i_2 
       (.I0(mul_ln7_reg_101[2]),
        .O(\t1_reg_106[4]_i_2_n_0 ));
  FDRE \t1_reg_106_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(mul_ln7_reg_101[0]),
        .Q(t1_reg_106[0]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[10]),
        .Q(t1_reg_106[10]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[11]),
        .Q(t1_reg_106[11]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[12]),
        .Q(t1_reg_106[12]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t1_reg_106_reg[12]_i_1 
       (.CI(\t1_reg_106_reg[8]_i_1_n_0 ),
        .CO({\t1_reg_106_reg[12]_i_1_n_0 ,\t1_reg_106_reg[12]_i_1_n_1 ,\t1_reg_106_reg[12]_i_1_n_2 ,\t1_reg_106_reg[12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(t1_fu_65_p2[12:9]),
        .S(mul_ln7_reg_101[12:9]));
  FDRE \t1_reg_106_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[13]),
        .Q(t1_reg_106[13]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[14]),
        .Q(t1_reg_106[14]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[15]),
        .Q(t1_reg_106[15]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[16] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[16]),
        .Q(t1_reg_106[16]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t1_reg_106_reg[16]_i_1 
       (.CI(\t1_reg_106_reg[12]_i_1_n_0 ),
        .CO({\t1_reg_106_reg[16]_i_1_n_0 ,\t1_reg_106_reg[16]_i_1_n_1 ,\t1_reg_106_reg[16]_i_1_n_2 ,\t1_reg_106_reg[16]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(t1_fu_65_p2[16:13]),
        .S(mul_ln7_reg_101[16:13]));
  FDRE \t1_reg_106_reg[17] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[17]),
        .Q(t1_reg_106[17]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[18] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[18]),
        .Q(t1_reg_106[18]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[19] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[19]),
        .Q(t1_reg_106[19]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[1]),
        .Q(t1_reg_106[1]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[20] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[20]),
        .Q(t1_reg_106[20]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t1_reg_106_reg[20]_i_1 
       (.CI(\t1_reg_106_reg[16]_i_1_n_0 ),
        .CO({\t1_reg_106_reg[20]_i_1_n_0 ,\t1_reg_106_reg[20]_i_1_n_1 ,\t1_reg_106_reg[20]_i_1_n_2 ,\t1_reg_106_reg[20]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(t1_fu_65_p2[20:17]),
        .S(mul_ln7_reg_101[20:17]));
  FDRE \t1_reg_106_reg[21] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[21]),
        .Q(t1_reg_106[21]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[22] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[22]),
        .Q(t1_reg_106[22]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[23] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[23]),
        .Q(t1_reg_106[23]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[24] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[24]),
        .Q(t1_reg_106[24]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t1_reg_106_reg[24]_i_1 
       (.CI(\t1_reg_106_reg[20]_i_1_n_0 ),
        .CO({\t1_reg_106_reg[24]_i_1_n_0 ,\t1_reg_106_reg[24]_i_1_n_1 ,\t1_reg_106_reg[24]_i_1_n_2 ,\t1_reg_106_reg[24]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(t1_fu_65_p2[24:21]),
        .S(mul_ln7_reg_101[24:21]));
  FDRE \t1_reg_106_reg[25] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[25]),
        .Q(t1_reg_106[25]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[26] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[26]),
        .Q(t1_reg_106[26]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[27] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[27]),
        .Q(t1_reg_106[27]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[28] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[28]),
        .Q(t1_reg_106[28]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t1_reg_106_reg[28]_i_1 
       (.CI(\t1_reg_106_reg[24]_i_1_n_0 ),
        .CO({\t1_reg_106_reg[28]_i_1_n_0 ,\t1_reg_106_reg[28]_i_1_n_1 ,\t1_reg_106_reg[28]_i_1_n_2 ,\t1_reg_106_reg[28]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(t1_fu_65_p2[28:25]),
        .S(mul_ln7_reg_101[28:25]));
  FDRE \t1_reg_106_reg[29] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[29]),
        .Q(t1_reg_106[29]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[2]),
        .Q(t1_reg_106[2]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[30] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[30]),
        .Q(t1_reg_106[30]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[31] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[31]),
        .Q(t1_reg_106[31]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t1_reg_106_reg[31]_i_1 
       (.CI(\t1_reg_106_reg[28]_i_1_n_0 ),
        .CO({\NLW_t1_reg_106_reg[31]_i_1_CO_UNCONNECTED [3:2],\t1_reg_106_reg[31]_i_1_n_2 ,\t1_reg_106_reg[31]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_t1_reg_106_reg[31]_i_1_O_UNCONNECTED [3],t1_fu_65_p2[31:29]}),
        .S({1'b0,mul_ln7_reg_101[31:29]}));
  FDRE \t1_reg_106_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[3]),
        .Q(t1_reg_106[3]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[4]),
        .Q(t1_reg_106[4]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t1_reg_106_reg[4]_i_1 
       (.CI(1'b0),
        .CO({\t1_reg_106_reg[4]_i_1_n_0 ,\t1_reg_106_reg[4]_i_1_n_1 ,\t1_reg_106_reg[4]_i_1_n_2 ,\t1_reg_106_reg[4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,mul_ln7_reg_101[2],1'b0}),
        .O(t1_fu_65_p2[4:1]),
        .S({mul_ln7_reg_101[4:3],\t1_reg_106[4]_i_2_n_0 ,mul_ln7_reg_101[1]}));
  FDRE \t1_reg_106_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[5]),
        .Q(t1_reg_106[5]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[6]),
        .Q(t1_reg_106[6]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[7]),
        .Q(t1_reg_106[7]),
        .R(1'b0));
  FDRE \t1_reg_106_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[8]),
        .Q(t1_reg_106[8]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t1_reg_106_reg[8]_i_1 
       (.CI(\t1_reg_106_reg[4]_i_1_n_0 ),
        .CO({\t1_reg_106_reg[8]_i_1_n_0 ,\t1_reg_106_reg[8]_i_1_n_1 ,\t1_reg_106_reg[8]_i_1_n_2 ,\t1_reg_106_reg[8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(t1_fu_65_p2[8:5]),
        .S(mul_ln7_reg_101[8:5]));
  FDRE \t1_reg_106_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t1_fu_65_p2[9]),
        .Q(t1_reg_106[9]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[0]),
        .Q(t2_reg_111[0]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[10]),
        .Q(t2_reg_111[10]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[11]),
        .Q(t2_reg_111[11]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[12]),
        .Q(t2_reg_111[12]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[13]),
        .Q(t2_reg_111[13]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[14]),
        .Q(t2_reg_111[14]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[15]),
        .Q(t2_reg_111[15]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[16] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[16]),
        .Q(t2_reg_111[16]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[17] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[17]),
        .Q(t2_reg_111[17]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[18] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[18]),
        .Q(t2_reg_111[18]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[19] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[19]),
        .Q(t2_reg_111[19]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[1]),
        .Q(t2_reg_111[1]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[20] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[20]),
        .Q(t2_reg_111[20]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[21] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[21]),
        .Q(t2_reg_111[21]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[22] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[22]),
        .Q(t2_reg_111[22]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[23] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[23]),
        .Q(t2_reg_111[23]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[24] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[24]),
        .Q(t2_reg_111[24]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[25] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[25]),
        .Q(t2_reg_111[25]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[26] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[26]),
        .Q(t2_reg_111[26]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[27] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[27]),
        .Q(t2_reg_111[27]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[28] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[28]),
        .Q(t2_reg_111[28]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[29] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[29]),
        .Q(t2_reg_111[29]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[2]),
        .Q(t2_reg_111[2]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[30] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[30]),
        .Q(t2_reg_111[30]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[31] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[31]),
        .Q(t2_reg_111[31]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[3]),
        .Q(t2_reg_111[3]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[4]),
        .Q(t2_reg_111[4]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[5]),
        .Q(t2_reg_111[5]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[6]),
        .Q(t2_reg_111[6]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[7]),
        .Q(t2_reg_111[7]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[8]),
        .Q(t2_reg_111[8]),
        .R(1'b0));
  FDRE \t2_reg_111_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state4),
        .D(t2_fu_70_p2[9]),
        .Q(t2_reg_111[9]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_63),
        .Q(t3_reg_117[0]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_53),
        .Q(t3_reg_117[10]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_52),
        .Q(t3_reg_117[11]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_51),
        .Q(t3_reg_117[12]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_50),
        .Q(t3_reg_117[13]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_49),
        .Q(t3_reg_117[14]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_48),
        .Q(t3_reg_117[15]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[16] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [16]),
        .Q(t3_reg_117[16]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[17] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [17]),
        .Q(t3_reg_117[17]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[18] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [18]),
        .Q(t3_reg_117[18]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[19] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [19]),
        .Q(t3_reg_117[19]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_62),
        .Q(t3_reg_117[1]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[20] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [20]),
        .Q(t3_reg_117[20]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[21] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [21]),
        .Q(t3_reg_117[21]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[22] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [22]),
        .Q(t3_reg_117[22]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[23] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [23]),
        .Q(t3_reg_117[23]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[24] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [24]),
        .Q(t3_reg_117[24]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[25] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [25]),
        .Q(t3_reg_117[25]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[26] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [26]),
        .Q(t3_reg_117[26]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[27] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [27]),
        .Q(t3_reg_117[27]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[28] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [28]),
        .Q(t3_reg_117[28]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[29] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [29]),
        .Q(t3_reg_117[29]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_61),
        .Q(t3_reg_117[2]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[30] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [30]),
        .Q(t3_reg_117[30]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[31] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(\top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0 [31]),
        .Q(t3_reg_117[31]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_60),
        .Q(t3_reg_117[3]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_59),
        .Q(t3_reg_117[4]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_58),
        .Q(t3_reg_117[5]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_57),
        .Q(t3_reg_117[6]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_56),
        .Q(t3_reg_117[7]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_55),
        .Q(t3_reg_117[8]),
        .R(1'b0));
  FDRE \t3_reg_117_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(mul_32s_32s_32_2_1_U2_n_54),
        .Q(t3_reg_117[9]),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "top_dfg_mul_32s_32s_32_2_1" *) 
module bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1
   (a,
    D,
    Q,
    ap_clk,
    b);
  output [31:0]a;
  output [31:0]D;
  input [0:0]Q;
  input ap_clk;
  input [31:0]b;

  wire [31:0]D;
  wire [0:0]Q;
  wire [31:0]a;
  wire ap_clk;
  wire [31:0]b;

  bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0_1 top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U
       (.D(D),
        .Q(Q),
        .a(a),
        .ap_clk(ap_clk),
        .b(b));
endmodule

(* ORIG_REF_NAME = "top_dfg_mul_32s_32s_32_2_1" *) 
module bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_0
   (D,
    p_reg,
    Q,
    ap_clk,
    b,
    c_i,
    p_reg_0);
  output [31:0]D;
  output [31:0]p_reg;
  input [0:0]Q;
  input ap_clk;
  input [31:0]b;
  input [31:0]c_i;
  input [31:0]p_reg_0;

  wire [31:0]D;
  wire [0:0]Q;
  wire ap_clk;
  wire [31:0]b;
  wire [31:0]c_i;
  wire [31:0]p_reg;
  wire [31:0]p_reg_0;

  bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0 top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U
       (.D(D),
        .Q(Q),
        .ap_clk(ap_clk),
        .b(b),
        .c_i(c_i),
        .p_reg_0(p_reg),
        .p_reg_1(p_reg_0));
endmodule

(* ORIG_REF_NAME = "top_dfg_mul_32s_32s_32_2_1_Multiplier_0" *) 
module bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0
   (D,
    p_reg_0,
    Q,
    ap_clk,
    b,
    c_i,
    p_reg_1);
  output [31:0]D;
  output [31:0]p_reg_0;
  input [0:0]Q;
  input ap_clk;
  input [31:0]b;
  input [31:0]c_i;
  input [31:0]p_reg_1;

  wire [31:0]D;
  wire [0:0]Q;
  wire ap_clk;
  wire [31:0]b;
  wire [31:0]c_i;
  wire \p_reg[16]__0_n_0 ;
  wire [31:0]p_reg_0;
  wire [31:0]p_reg_1;
  wire p_reg_i_10_n_0;
  wire p_reg_i_11_n_0;
  wire p_reg_i_12_n_0;
  wire p_reg_i_13_n_0;
  wire p_reg_i_14_n_0;
  wire p_reg_i_15_n_0;
  wire p_reg_i_1_n_1;
  wire p_reg_i_1_n_2;
  wire p_reg_i_1_n_3;
  wire p_reg_i_2_n_0;
  wire p_reg_i_2_n_1;
  wire p_reg_i_2_n_2;
  wire p_reg_i_2_n_3;
  wire p_reg_i_3_n_0;
  wire p_reg_i_3_n_1;
  wire p_reg_i_3_n_2;
  wire p_reg_i_3_n_3;
  wire p_reg_i_4_n_0;
  wire p_reg_i_5_n_0;
  wire p_reg_i_6_n_0;
  wire p_reg_i_7_n_0;
  wire p_reg_i_8_n_0;
  wire p_reg_i_9_n_0;
  wire p_reg_n_100;
  wire p_reg_n_101;
  wire p_reg_n_102;
  wire p_reg_n_103;
  wire p_reg_n_104;
  wire p_reg_n_105;
  wire p_reg_n_58;
  wire p_reg_n_59;
  wire p_reg_n_60;
  wire p_reg_n_61;
  wire p_reg_n_62;
  wire p_reg_n_63;
  wire p_reg_n_64;
  wire p_reg_n_65;
  wire p_reg_n_66;
  wire p_reg_n_67;
  wire p_reg_n_68;
  wire p_reg_n_69;
  wire p_reg_n_70;
  wire p_reg_n_71;
  wire p_reg_n_72;
  wire p_reg_n_73;
  wire p_reg_n_74;
  wire p_reg_n_75;
  wire p_reg_n_76;
  wire p_reg_n_77;
  wire p_reg_n_78;
  wire p_reg_n_79;
  wire p_reg_n_80;
  wire p_reg_n_81;
  wire p_reg_n_82;
  wire p_reg_n_83;
  wire p_reg_n_84;
  wire p_reg_n_85;
  wire p_reg_n_86;
  wire p_reg_n_87;
  wire p_reg_n_88;
  wire p_reg_n_89;
  wire p_reg_n_90;
  wire p_reg_n_91;
  wire p_reg_n_92;
  wire p_reg_n_93;
  wire p_reg_n_94;
  wire p_reg_n_95;
  wire p_reg_n_96;
  wire p_reg_n_97;
  wire p_reg_n_98;
  wire p_reg_n_99;
  wire \t3_reg_117[19]_i_2_n_0 ;
  wire \t3_reg_117[19]_i_3_n_0 ;
  wire \t3_reg_117[19]_i_4_n_0 ;
  wire \t3_reg_117[23]_i_2_n_0 ;
  wire \t3_reg_117[23]_i_3_n_0 ;
  wire \t3_reg_117[23]_i_4_n_0 ;
  wire \t3_reg_117[23]_i_5_n_0 ;
  wire \t3_reg_117[27]_i_2_n_0 ;
  wire \t3_reg_117[27]_i_3_n_0 ;
  wire \t3_reg_117[27]_i_4_n_0 ;
  wire \t3_reg_117[27]_i_5_n_0 ;
  wire \t3_reg_117[31]_i_2_n_0 ;
  wire \t3_reg_117[31]_i_3_n_0 ;
  wire \t3_reg_117[31]_i_4_n_0 ;
  wire \t3_reg_117[31]_i_5_n_0 ;
  wire \t3_reg_117_reg[19]_i_1_n_0 ;
  wire \t3_reg_117_reg[19]_i_1_n_1 ;
  wire \t3_reg_117_reg[19]_i_1_n_2 ;
  wire \t3_reg_117_reg[19]_i_1_n_3 ;
  wire \t3_reg_117_reg[23]_i_1_n_0 ;
  wire \t3_reg_117_reg[23]_i_1_n_1 ;
  wire \t3_reg_117_reg[23]_i_1_n_2 ;
  wire \t3_reg_117_reg[23]_i_1_n_3 ;
  wire \t3_reg_117_reg[27]_i_1_n_0 ;
  wire \t3_reg_117_reg[27]_i_1_n_1 ;
  wire \t3_reg_117_reg[27]_i_1_n_2 ;
  wire \t3_reg_117_reg[27]_i_1_n_3 ;
  wire \t3_reg_117_reg[31]_i_1_n_1 ;
  wire \t3_reg_117_reg[31]_i_1_n_2 ;
  wire \t3_reg_117_reg[31]_i_1_n_3 ;
  wire tmp_product__0_n_100;
  wire tmp_product__0_n_101;
  wire tmp_product__0_n_102;
  wire tmp_product__0_n_103;
  wire tmp_product__0_n_104;
  wire tmp_product__0_n_105;
  wire tmp_product__0_n_106;
  wire tmp_product__0_n_107;
  wire tmp_product__0_n_108;
  wire tmp_product__0_n_109;
  wire tmp_product__0_n_110;
  wire tmp_product__0_n_111;
  wire tmp_product__0_n_112;
  wire tmp_product__0_n_113;
  wire tmp_product__0_n_114;
  wire tmp_product__0_n_115;
  wire tmp_product__0_n_116;
  wire tmp_product__0_n_117;
  wire tmp_product__0_n_118;
  wire tmp_product__0_n_119;
  wire tmp_product__0_n_120;
  wire tmp_product__0_n_121;
  wire tmp_product__0_n_122;
  wire tmp_product__0_n_123;
  wire tmp_product__0_n_124;
  wire tmp_product__0_n_125;
  wire tmp_product__0_n_126;
  wire tmp_product__0_n_127;
  wire tmp_product__0_n_128;
  wire tmp_product__0_n_129;
  wire tmp_product__0_n_130;
  wire tmp_product__0_n_131;
  wire tmp_product__0_n_132;
  wire tmp_product__0_n_133;
  wire tmp_product__0_n_134;
  wire tmp_product__0_n_135;
  wire tmp_product__0_n_136;
  wire tmp_product__0_n_137;
  wire tmp_product__0_n_138;
  wire tmp_product__0_n_139;
  wire tmp_product__0_n_140;
  wire tmp_product__0_n_141;
  wire tmp_product__0_n_142;
  wire tmp_product__0_n_143;
  wire tmp_product__0_n_144;
  wire tmp_product__0_n_145;
  wire tmp_product__0_n_146;
  wire tmp_product__0_n_147;
  wire tmp_product__0_n_148;
  wire tmp_product__0_n_149;
  wire tmp_product__0_n_150;
  wire tmp_product__0_n_151;
  wire tmp_product__0_n_152;
  wire tmp_product__0_n_153;
  wire tmp_product__0_n_58;
  wire tmp_product__0_n_59;
  wire tmp_product__0_n_60;
  wire tmp_product__0_n_61;
  wire tmp_product__0_n_62;
  wire tmp_product__0_n_63;
  wire tmp_product__0_n_64;
  wire tmp_product__0_n_65;
  wire tmp_product__0_n_66;
  wire tmp_product__0_n_67;
  wire tmp_product__0_n_68;
  wire tmp_product__0_n_69;
  wire tmp_product__0_n_70;
  wire tmp_product__0_n_71;
  wire tmp_product__0_n_72;
  wire tmp_product__0_n_73;
  wire tmp_product__0_n_74;
  wire tmp_product__0_n_75;
  wire tmp_product__0_n_76;
  wire tmp_product__0_n_77;
  wire tmp_product__0_n_78;
  wire tmp_product__0_n_79;
  wire tmp_product__0_n_80;
  wire tmp_product__0_n_81;
  wire tmp_product__0_n_82;
  wire tmp_product__0_n_83;
  wire tmp_product__0_n_84;
  wire tmp_product__0_n_85;
  wire tmp_product__0_n_86;
  wire tmp_product__0_n_87;
  wire tmp_product__0_n_88;
  wire tmp_product__0_n_89;
  wire tmp_product__0_n_90;
  wire tmp_product__0_n_91;
  wire tmp_product__0_n_92;
  wire tmp_product__0_n_93;
  wire tmp_product__0_n_94;
  wire tmp_product__0_n_95;
  wire tmp_product__0_n_96;
  wire tmp_product__0_n_97;
  wire tmp_product__0_n_98;
  wire tmp_product__0_n_99;
  wire tmp_product_i_10_n_0;
  wire tmp_product_i_11_n_0;
  wire tmp_product_i_12_n_0;
  wire tmp_product_i_13_n_0;
  wire tmp_product_i_14_n_0;
  wire tmp_product_i_15_n_0;
  wire tmp_product_i_16_n_0;
  wire tmp_product_i_17_n_0;
  wire tmp_product_i_18_n_0;
  wire tmp_product_i_19_n_0;
  wire tmp_product_i_1_n_0;
  wire tmp_product_i_1_n_1;
  wire tmp_product_i_1_n_2;
  wire tmp_product_i_1_n_3;
  wire tmp_product_i_20_n_0;
  wire tmp_product_i_21_n_0;
  wire tmp_product_i_22_n_0;
  wire tmp_product_i_23_n_0;
  wire tmp_product_i_24_n_0;
  wire tmp_product_i_25_n_0;
  wire tmp_product_i_2_n_0;
  wire tmp_product_i_2_n_1;
  wire tmp_product_i_2_n_2;
  wire tmp_product_i_2_n_3;
  wire tmp_product_i_3_n_0;
  wire tmp_product_i_3_n_1;
  wire tmp_product_i_3_n_2;
  wire tmp_product_i_3_n_3;
  wire tmp_product_i_4_n_0;
  wire tmp_product_i_4_n_1;
  wire tmp_product_i_4_n_2;
  wire tmp_product_i_4_n_3;
  wire tmp_product_i_5_n_0;
  wire tmp_product_i_5_n_1;
  wire tmp_product_i_5_n_2;
  wire tmp_product_i_5_n_3;
  wire tmp_product_i_6_n_0;
  wire tmp_product_i_7_n_0;
  wire tmp_product_i_8_n_0;
  wire tmp_product_i_9_n_0;
  wire tmp_product_n_100;
  wire tmp_product_n_101;
  wire tmp_product_n_102;
  wire tmp_product_n_103;
  wire tmp_product_n_104;
  wire tmp_product_n_105;
  wire tmp_product_n_106;
  wire tmp_product_n_107;
  wire tmp_product_n_108;
  wire tmp_product_n_109;
  wire tmp_product_n_110;
  wire tmp_product_n_111;
  wire tmp_product_n_112;
  wire tmp_product_n_113;
  wire tmp_product_n_114;
  wire tmp_product_n_115;
  wire tmp_product_n_116;
  wire tmp_product_n_117;
  wire tmp_product_n_118;
  wire tmp_product_n_119;
  wire tmp_product_n_120;
  wire tmp_product_n_121;
  wire tmp_product_n_122;
  wire tmp_product_n_123;
  wire tmp_product_n_124;
  wire tmp_product_n_125;
  wire tmp_product_n_126;
  wire tmp_product_n_127;
  wire tmp_product_n_128;
  wire tmp_product_n_129;
  wire tmp_product_n_130;
  wire tmp_product_n_131;
  wire tmp_product_n_132;
  wire tmp_product_n_133;
  wire tmp_product_n_134;
  wire tmp_product_n_135;
  wire tmp_product_n_136;
  wire tmp_product_n_137;
  wire tmp_product_n_138;
  wire tmp_product_n_139;
  wire tmp_product_n_140;
  wire tmp_product_n_141;
  wire tmp_product_n_142;
  wire tmp_product_n_143;
  wire tmp_product_n_144;
  wire tmp_product_n_145;
  wire tmp_product_n_146;
  wire tmp_product_n_147;
  wire tmp_product_n_148;
  wire tmp_product_n_149;
  wire tmp_product_n_150;
  wire tmp_product_n_151;
  wire tmp_product_n_152;
  wire tmp_product_n_153;
  wire tmp_product_n_58;
  wire tmp_product_n_59;
  wire tmp_product_n_60;
  wire tmp_product_n_61;
  wire tmp_product_n_62;
  wire tmp_product_n_63;
  wire tmp_product_n_64;
  wire tmp_product_n_65;
  wire tmp_product_n_66;
  wire tmp_product_n_67;
  wire tmp_product_n_68;
  wire tmp_product_n_69;
  wire tmp_product_n_70;
  wire tmp_product_n_71;
  wire tmp_product_n_72;
  wire tmp_product_n_73;
  wire tmp_product_n_74;
  wire tmp_product_n_75;
  wire tmp_product_n_76;
  wire tmp_product_n_77;
  wire tmp_product_n_78;
  wire tmp_product_n_79;
  wire tmp_product_n_80;
  wire tmp_product_n_81;
  wire tmp_product_n_82;
  wire tmp_product_n_83;
  wire tmp_product_n_84;
  wire tmp_product_n_85;
  wire tmp_product_n_86;
  wire tmp_product_n_87;
  wire tmp_product_n_88;
  wire tmp_product_n_89;
  wire tmp_product_n_90;
  wire tmp_product_n_91;
  wire tmp_product_n_92;
  wire tmp_product_n_93;
  wire tmp_product_n_94;
  wire tmp_product_n_95;
  wire tmp_product_n_96;
  wire tmp_product_n_97;
  wire tmp_product_n_98;
  wire tmp_product_n_99;
  wire NLW_p_reg_CARRYCASCOUT_UNCONNECTED;
  wire NLW_p_reg_MULTSIGNOUT_UNCONNECTED;
  wire NLW_p_reg_OVERFLOW_UNCONNECTED;
  wire NLW_p_reg_PATTERNBDETECT_UNCONNECTED;
  wire NLW_p_reg_PATTERNDETECT_UNCONNECTED;
  wire NLW_p_reg_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_p_reg_ACOUT_UNCONNECTED;
  wire [17:0]NLW_p_reg_BCOUT_UNCONNECTED;
  wire [3:0]NLW_p_reg_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_p_reg_PCOUT_UNCONNECTED;
  wire [3:3]NLW_p_reg_i_1_CO_UNCONNECTED;
  wire [3:3]\NLW_t3_reg_117_reg[31]_i_1_CO_UNCONNECTED ;
  wire NLW_tmp_product_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product_CARRYOUT_UNCONNECTED;
  wire NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__0_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__0_CARRYOUT_UNCONNECTED;

  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x15 4}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(1),
    .BREG(1),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    p_reg
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,b[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_p_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({D[31],D[31],D[31],D[31:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_p_reg_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_p_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_p_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(Q),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_p_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_p_reg_OVERFLOW_UNCONNECTED),
        .P({p_reg_n_58,p_reg_n_59,p_reg_n_60,p_reg_n_61,p_reg_n_62,p_reg_n_63,p_reg_n_64,p_reg_n_65,p_reg_n_66,p_reg_n_67,p_reg_n_68,p_reg_n_69,p_reg_n_70,p_reg_n_71,p_reg_n_72,p_reg_n_73,p_reg_n_74,p_reg_n_75,p_reg_n_76,p_reg_n_77,p_reg_n_78,p_reg_n_79,p_reg_n_80,p_reg_n_81,p_reg_n_82,p_reg_n_83,p_reg_n_84,p_reg_n_85,p_reg_n_86,p_reg_n_87,p_reg_n_88,p_reg_n_89,p_reg_n_90,p_reg_n_91,p_reg_n_92,p_reg_n_93,p_reg_n_94,p_reg_n_95,p_reg_n_96,p_reg_n_97,p_reg_n_98,p_reg_n_99,p_reg_n_100,p_reg_n_101,p_reg_n_102,p_reg_n_103,p_reg_n_104,p_reg_n_105}),
        .PATTERNBDETECT(NLW_p_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_p_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__0_n_106,tmp_product__0_n_107,tmp_product__0_n_108,tmp_product__0_n_109,tmp_product__0_n_110,tmp_product__0_n_111,tmp_product__0_n_112,tmp_product__0_n_113,tmp_product__0_n_114,tmp_product__0_n_115,tmp_product__0_n_116,tmp_product__0_n_117,tmp_product__0_n_118,tmp_product__0_n_119,tmp_product__0_n_120,tmp_product__0_n_121,tmp_product__0_n_122,tmp_product__0_n_123,tmp_product__0_n_124,tmp_product__0_n_125,tmp_product__0_n_126,tmp_product__0_n_127,tmp_product__0_n_128,tmp_product__0_n_129,tmp_product__0_n_130,tmp_product__0_n_131,tmp_product__0_n_132,tmp_product__0_n_133,tmp_product__0_n_134,tmp_product__0_n_135,tmp_product__0_n_136,tmp_product__0_n_137,tmp_product__0_n_138,tmp_product__0_n_139,tmp_product__0_n_140,tmp_product__0_n_141,tmp_product__0_n_142,tmp_product__0_n_143,tmp_product__0_n_144,tmp_product__0_n_145,tmp_product__0_n_146,tmp_product__0_n_147,tmp_product__0_n_148,tmp_product__0_n_149,tmp_product__0_n_150,tmp_product__0_n_151,tmp_product__0_n_152,tmp_product__0_n_153}),
        .PCOUT(NLW_p_reg_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_p_reg_UNDERFLOW_UNCONNECTED));
  FDRE \p_reg[0]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_105),
        .Q(p_reg_0[0]),
        .R(1'b0));
  FDRE \p_reg[10]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_95),
        .Q(p_reg_0[10]),
        .R(1'b0));
  FDRE \p_reg[11]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_94),
        .Q(p_reg_0[11]),
        .R(1'b0));
  FDRE \p_reg[12]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_93),
        .Q(p_reg_0[12]),
        .R(1'b0));
  FDRE \p_reg[13]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_92),
        .Q(p_reg_0[13]),
        .R(1'b0));
  FDRE \p_reg[14]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_91),
        .Q(p_reg_0[14]),
        .R(1'b0));
  FDRE \p_reg[15]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_90),
        .Q(p_reg_0[15]),
        .R(1'b0));
  FDRE \p_reg[16]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_89),
        .Q(\p_reg[16]__0_n_0 ),
        .R(1'b0));
  FDRE \p_reg[1]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_104),
        .Q(p_reg_0[1]),
        .R(1'b0));
  FDRE \p_reg[2]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_103),
        .Q(p_reg_0[2]),
        .R(1'b0));
  FDRE \p_reg[3]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_102),
        .Q(p_reg_0[3]),
        .R(1'b0));
  FDRE \p_reg[4]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_101),
        .Q(p_reg_0[4]),
        .R(1'b0));
  FDRE \p_reg[5]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_100),
        .Q(p_reg_0[5]),
        .R(1'b0));
  FDRE \p_reg[6]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_99),
        .Q(p_reg_0[6]),
        .R(1'b0));
  FDRE \p_reg[7]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_98),
        .Q(p_reg_0[7]),
        .R(1'b0));
  FDRE \p_reg[8]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_97),
        .Q(p_reg_0[8]),
        .R(1'b0));
  FDRE \p_reg[9]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_96),
        .Q(p_reg_0[9]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 p_reg_i_1
       (.CI(p_reg_i_2_n_0),
        .CO({NLW_p_reg_i_1_CO_UNCONNECTED[3],p_reg_i_1_n_1,p_reg_i_1_n_2,p_reg_i_1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,c_i[30:28]}),
        .O(D[31:28]),
        .S({p_reg_i_4_n_0,p_reg_i_5_n_0,p_reg_i_6_n_0,p_reg_i_7_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_10
       (.I0(c_i[25]),
        .I1(p_reg_1[25]),
        .O(p_reg_i_10_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_11
       (.I0(c_i[24]),
        .I1(p_reg_1[24]),
        .O(p_reg_i_11_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_12
       (.I0(c_i[23]),
        .I1(p_reg_1[23]),
        .O(p_reg_i_12_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_13
       (.I0(c_i[22]),
        .I1(p_reg_1[22]),
        .O(p_reg_i_13_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_14
       (.I0(c_i[21]),
        .I1(p_reg_1[21]),
        .O(p_reg_i_14_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_15
       (.I0(c_i[20]),
        .I1(p_reg_1[20]),
        .O(p_reg_i_15_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 p_reg_i_2
       (.CI(p_reg_i_3_n_0),
        .CO({p_reg_i_2_n_0,p_reg_i_2_n_1,p_reg_i_2_n_2,p_reg_i_2_n_3}),
        .CYINIT(1'b0),
        .DI(c_i[27:24]),
        .O(D[27:24]),
        .S({p_reg_i_8_n_0,p_reg_i_9_n_0,p_reg_i_10_n_0,p_reg_i_11_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 p_reg_i_3
       (.CI(tmp_product_i_1_n_0),
        .CO({p_reg_i_3_n_0,p_reg_i_3_n_1,p_reg_i_3_n_2,p_reg_i_3_n_3}),
        .CYINIT(1'b0),
        .DI(c_i[23:20]),
        .O(D[23:20]),
        .S({p_reg_i_12_n_0,p_reg_i_13_n_0,p_reg_i_14_n_0,p_reg_i_15_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_4
       (.I0(c_i[31]),
        .I1(p_reg_1[31]),
        .O(p_reg_i_4_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_5
       (.I0(c_i[30]),
        .I1(p_reg_1[30]),
        .O(p_reg_i_5_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_6
       (.I0(c_i[29]),
        .I1(p_reg_1[29]),
        .O(p_reg_i_6_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_7
       (.I0(c_i[28]),
        .I1(p_reg_1[28]),
        .O(p_reg_i_7_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_8
       (.I0(c_i[27]),
        .I1(p_reg_1[27]),
        .O(p_reg_i_8_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    p_reg_i_9
       (.I0(c_i[26]),
        .I1(p_reg_1[26]),
        .O(p_reg_i_9_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[19]_i_2 
       (.I0(p_reg_n_103),
        .I1(tmp_product_n_103),
        .O(\t3_reg_117[19]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[19]_i_3 
       (.I0(p_reg_n_104),
        .I1(tmp_product_n_104),
        .O(\t3_reg_117[19]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[19]_i_4 
       (.I0(p_reg_n_105),
        .I1(tmp_product_n_105),
        .O(\t3_reg_117[19]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[23]_i_2 
       (.I0(p_reg_n_99),
        .I1(tmp_product_n_99),
        .O(\t3_reg_117[23]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[23]_i_3 
       (.I0(p_reg_n_100),
        .I1(tmp_product_n_100),
        .O(\t3_reg_117[23]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[23]_i_4 
       (.I0(p_reg_n_101),
        .I1(tmp_product_n_101),
        .O(\t3_reg_117[23]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[23]_i_5 
       (.I0(p_reg_n_102),
        .I1(tmp_product_n_102),
        .O(\t3_reg_117[23]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[27]_i_2 
       (.I0(p_reg_n_95),
        .I1(tmp_product_n_95),
        .O(\t3_reg_117[27]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[27]_i_3 
       (.I0(p_reg_n_96),
        .I1(tmp_product_n_96),
        .O(\t3_reg_117[27]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[27]_i_4 
       (.I0(p_reg_n_97),
        .I1(tmp_product_n_97),
        .O(\t3_reg_117[27]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[27]_i_5 
       (.I0(p_reg_n_98),
        .I1(tmp_product_n_98),
        .O(\t3_reg_117[27]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[31]_i_2 
       (.I0(p_reg_n_91),
        .I1(tmp_product_n_91),
        .O(\t3_reg_117[31]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[31]_i_3 
       (.I0(p_reg_n_92),
        .I1(tmp_product_n_92),
        .O(\t3_reg_117[31]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[31]_i_4 
       (.I0(p_reg_n_93),
        .I1(tmp_product_n_93),
        .O(\t3_reg_117[31]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \t3_reg_117[31]_i_5 
       (.I0(p_reg_n_94),
        .I1(tmp_product_n_94),
        .O(\t3_reg_117[31]_i_5_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t3_reg_117_reg[19]_i_1 
       (.CI(1'b0),
        .CO({\t3_reg_117_reg[19]_i_1_n_0 ,\t3_reg_117_reg[19]_i_1_n_1 ,\t3_reg_117_reg[19]_i_1_n_2 ,\t3_reg_117_reg[19]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({p_reg_n_103,p_reg_n_104,p_reg_n_105,1'b0}),
        .O(p_reg_0[19:16]),
        .S({\t3_reg_117[19]_i_2_n_0 ,\t3_reg_117[19]_i_3_n_0 ,\t3_reg_117[19]_i_4_n_0 ,\p_reg[16]__0_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t3_reg_117_reg[23]_i_1 
       (.CI(\t3_reg_117_reg[19]_i_1_n_0 ),
        .CO({\t3_reg_117_reg[23]_i_1_n_0 ,\t3_reg_117_reg[23]_i_1_n_1 ,\t3_reg_117_reg[23]_i_1_n_2 ,\t3_reg_117_reg[23]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({p_reg_n_99,p_reg_n_100,p_reg_n_101,p_reg_n_102}),
        .O(p_reg_0[23:20]),
        .S({\t3_reg_117[23]_i_2_n_0 ,\t3_reg_117[23]_i_3_n_0 ,\t3_reg_117[23]_i_4_n_0 ,\t3_reg_117[23]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t3_reg_117_reg[27]_i_1 
       (.CI(\t3_reg_117_reg[23]_i_1_n_0 ),
        .CO({\t3_reg_117_reg[27]_i_1_n_0 ,\t3_reg_117_reg[27]_i_1_n_1 ,\t3_reg_117_reg[27]_i_1_n_2 ,\t3_reg_117_reg[27]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({p_reg_n_95,p_reg_n_96,p_reg_n_97,p_reg_n_98}),
        .O(p_reg_0[27:24]),
        .S({\t3_reg_117[27]_i_2_n_0 ,\t3_reg_117[27]_i_3_n_0 ,\t3_reg_117[27]_i_4_n_0 ,\t3_reg_117[27]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \t3_reg_117_reg[31]_i_1 
       (.CI(\t3_reg_117_reg[27]_i_1_n_0 ),
        .CO({\NLW_t3_reg_117_reg[31]_i_1_CO_UNCONNECTED [3],\t3_reg_117_reg[31]_i_1_n_1 ,\t3_reg_117_reg[31]_i_1_n_2 ,\t3_reg_117_reg[31]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,p_reg_n_92,p_reg_n_93,p_reg_n_94}),
        .O(p_reg_0[31:28]),
        .S({\t3_reg_117[31]_i_2_n_0 ,\t3_reg_117[31]_i_3_n_0 ,\t3_reg_117[31]_i_4_n_0 ,\t3_reg_117[31]_i_5_n_0 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 15x18 4}}" *) 
  DSP48E1 #(
    .ACASCREG(1),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(1),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,D[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({b[31],b[31],b[31],b[31:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(Q),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product_OVERFLOW_UNCONNECTED),
        .P({tmp_product_n_58,tmp_product_n_59,tmp_product_n_60,tmp_product_n_61,tmp_product_n_62,tmp_product_n_63,tmp_product_n_64,tmp_product_n_65,tmp_product_n_66,tmp_product_n_67,tmp_product_n_68,tmp_product_n_69,tmp_product_n_70,tmp_product_n_71,tmp_product_n_72,tmp_product_n_73,tmp_product_n_74,tmp_product_n_75,tmp_product_n_76,tmp_product_n_77,tmp_product_n_78,tmp_product_n_79,tmp_product_n_80,tmp_product_n_81,tmp_product_n_82,tmp_product_n_83,tmp_product_n_84,tmp_product_n_85,tmp_product_n_86,tmp_product_n_87,tmp_product_n_88,tmp_product_n_89,tmp_product_n_90,tmp_product_n_91,tmp_product_n_92,tmp_product_n_93,tmp_product_n_94,tmp_product_n_95,tmp_product_n_96,tmp_product_n_97,tmp_product_n_98,tmp_product_n_99,tmp_product_n_100,tmp_product_n_101,tmp_product_n_102,tmp_product_n_103,tmp_product_n_104,tmp_product_n_105}),
        .PATTERNBDETECT(NLW_tmp_product_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({tmp_product_n_106,tmp_product_n_107,tmp_product_n_108,tmp_product_n_109,tmp_product_n_110,tmp_product_n_111,tmp_product_n_112,tmp_product_n_113,tmp_product_n_114,tmp_product_n_115,tmp_product_n_116,tmp_product_n_117,tmp_product_n_118,tmp_product_n_119,tmp_product_n_120,tmp_product_n_121,tmp_product_n_122,tmp_product_n_123,tmp_product_n_124,tmp_product_n_125,tmp_product_n_126,tmp_product_n_127,tmp_product_n_128,tmp_product_n_129,tmp_product_n_130,tmp_product_n_131,tmp_product_n_132,tmp_product_n_133,tmp_product_n_134,tmp_product_n_135,tmp_product_n_136,tmp_product_n_137,tmp_product_n_138,tmp_product_n_139,tmp_product_n_140,tmp_product_n_141,tmp_product_n_142,tmp_product_n_143,tmp_product_n_144,tmp_product_n_145,tmp_product_n_146,tmp_product_n_147,tmp_product_n_148,tmp_product_n_149,tmp_product_n_150,tmp_product_n_151,tmp_product_n_152,tmp_product_n_153}),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_tmp_product_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 4}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(1),
    .BREG(1),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,b[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,D[16:0]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(Q),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__0_OVERFLOW_UNCONNECTED),
        .P({tmp_product__0_n_58,tmp_product__0_n_59,tmp_product__0_n_60,tmp_product__0_n_61,tmp_product__0_n_62,tmp_product__0_n_63,tmp_product__0_n_64,tmp_product__0_n_65,tmp_product__0_n_66,tmp_product__0_n_67,tmp_product__0_n_68,tmp_product__0_n_69,tmp_product__0_n_70,tmp_product__0_n_71,tmp_product__0_n_72,tmp_product__0_n_73,tmp_product__0_n_74,tmp_product__0_n_75,tmp_product__0_n_76,tmp_product__0_n_77,tmp_product__0_n_78,tmp_product__0_n_79,tmp_product__0_n_80,tmp_product__0_n_81,tmp_product__0_n_82,tmp_product__0_n_83,tmp_product__0_n_84,tmp_product__0_n_85,tmp_product__0_n_86,tmp_product__0_n_87,tmp_product__0_n_88,tmp_product__0_n_89,tmp_product__0_n_90,tmp_product__0_n_91,tmp_product__0_n_92,tmp_product__0_n_93,tmp_product__0_n_94,tmp_product__0_n_95,tmp_product__0_n_96,tmp_product__0_n_97,tmp_product__0_n_98,tmp_product__0_n_99,tmp_product__0_n_100,tmp_product__0_n_101,tmp_product__0_n_102,tmp_product__0_n_103,tmp_product__0_n_104,tmp_product__0_n_105}),
        .PATTERNBDETECT(NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({tmp_product__0_n_106,tmp_product__0_n_107,tmp_product__0_n_108,tmp_product__0_n_109,tmp_product__0_n_110,tmp_product__0_n_111,tmp_product__0_n_112,tmp_product__0_n_113,tmp_product__0_n_114,tmp_product__0_n_115,tmp_product__0_n_116,tmp_product__0_n_117,tmp_product__0_n_118,tmp_product__0_n_119,tmp_product__0_n_120,tmp_product__0_n_121,tmp_product__0_n_122,tmp_product__0_n_123,tmp_product__0_n_124,tmp_product__0_n_125,tmp_product__0_n_126,tmp_product__0_n_127,tmp_product__0_n_128,tmp_product__0_n_129,tmp_product__0_n_130,tmp_product__0_n_131,tmp_product__0_n_132,tmp_product__0_n_133,tmp_product__0_n_134,tmp_product__0_n_135,tmp_product__0_n_136,tmp_product__0_n_137,tmp_product__0_n_138,tmp_product__0_n_139,tmp_product__0_n_140,tmp_product__0_n_141,tmp_product__0_n_142,tmp_product__0_n_143,tmp_product__0_n_144,tmp_product__0_n_145,tmp_product__0_n_146,tmp_product__0_n_147,tmp_product__0_n_148,tmp_product__0_n_149,tmp_product__0_n_150,tmp_product__0_n_151,tmp_product__0_n_152,tmp_product__0_n_153}),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_tmp_product__0_UNDERFLOW_UNCONNECTED));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_1
       (.CI(tmp_product_i_2_n_0),
        .CO({tmp_product_i_1_n_0,tmp_product_i_1_n_1,tmp_product_i_1_n_2,tmp_product_i_1_n_3}),
        .CYINIT(1'b0),
        .DI(c_i[19:16]),
        .O(D[19:16]),
        .S({tmp_product_i_6_n_0,tmp_product_i_7_n_0,tmp_product_i_8_n_0,tmp_product_i_9_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_10
       (.I0(c_i[15]),
        .I1(p_reg_1[15]),
        .O(tmp_product_i_10_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_11
       (.I0(c_i[14]),
        .I1(p_reg_1[14]),
        .O(tmp_product_i_11_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_12
       (.I0(c_i[13]),
        .I1(p_reg_1[13]),
        .O(tmp_product_i_12_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_13
       (.I0(c_i[12]),
        .I1(p_reg_1[12]),
        .O(tmp_product_i_13_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_14
       (.I0(c_i[11]),
        .I1(p_reg_1[11]),
        .O(tmp_product_i_14_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_15
       (.I0(c_i[10]),
        .I1(p_reg_1[10]),
        .O(tmp_product_i_15_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_16
       (.I0(c_i[9]),
        .I1(p_reg_1[9]),
        .O(tmp_product_i_16_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_17
       (.I0(c_i[8]),
        .I1(p_reg_1[8]),
        .O(tmp_product_i_17_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_18
       (.I0(c_i[7]),
        .I1(p_reg_1[7]),
        .O(tmp_product_i_18_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_19
       (.I0(c_i[6]),
        .I1(p_reg_1[6]),
        .O(tmp_product_i_19_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_2
       (.CI(tmp_product_i_3_n_0),
        .CO({tmp_product_i_2_n_0,tmp_product_i_2_n_1,tmp_product_i_2_n_2,tmp_product_i_2_n_3}),
        .CYINIT(1'b0),
        .DI(c_i[15:12]),
        .O(D[15:12]),
        .S({tmp_product_i_10_n_0,tmp_product_i_11_n_0,tmp_product_i_12_n_0,tmp_product_i_13_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_20
       (.I0(c_i[5]),
        .I1(p_reg_1[5]),
        .O(tmp_product_i_20_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_21
       (.I0(c_i[4]),
        .I1(p_reg_1[4]),
        .O(tmp_product_i_21_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_22
       (.I0(c_i[3]),
        .I1(p_reg_1[3]),
        .O(tmp_product_i_22_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_23
       (.I0(c_i[2]),
        .I1(p_reg_1[2]),
        .O(tmp_product_i_23_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_24
       (.I0(c_i[1]),
        .I1(p_reg_1[1]),
        .O(tmp_product_i_24_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_25
       (.I0(c_i[0]),
        .I1(p_reg_1[0]),
        .O(tmp_product_i_25_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_3
       (.CI(tmp_product_i_4_n_0),
        .CO({tmp_product_i_3_n_0,tmp_product_i_3_n_1,tmp_product_i_3_n_2,tmp_product_i_3_n_3}),
        .CYINIT(1'b0),
        .DI(c_i[11:8]),
        .O(D[11:8]),
        .S({tmp_product_i_14_n_0,tmp_product_i_15_n_0,tmp_product_i_16_n_0,tmp_product_i_17_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_4
       (.CI(tmp_product_i_5_n_0),
        .CO({tmp_product_i_4_n_0,tmp_product_i_4_n_1,tmp_product_i_4_n_2,tmp_product_i_4_n_3}),
        .CYINIT(1'b0),
        .DI(c_i[7:4]),
        .O(D[7:4]),
        .S({tmp_product_i_18_n_0,tmp_product_i_19_n_0,tmp_product_i_20_n_0,tmp_product_i_21_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_5
       (.CI(1'b0),
        .CO({tmp_product_i_5_n_0,tmp_product_i_5_n_1,tmp_product_i_5_n_2,tmp_product_i_5_n_3}),
        .CYINIT(1'b0),
        .DI(c_i[3:0]),
        .O(D[3:0]),
        .S({tmp_product_i_22_n_0,tmp_product_i_23_n_0,tmp_product_i_24_n_0,tmp_product_i_25_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_6
       (.I0(c_i[19]),
        .I1(p_reg_1[19]),
        .O(tmp_product_i_6_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_7
       (.I0(c_i[18]),
        .I1(p_reg_1[18]),
        .O(tmp_product_i_7_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_8
       (.I0(c_i[17]),
        .I1(p_reg_1[17]),
        .O(tmp_product_i_8_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_9
       (.I0(c_i[16]),
        .I1(p_reg_1[16]),
        .O(tmp_product_i_9_n_0));
endmodule

(* ORIG_REF_NAME = "top_dfg_mul_32s_32s_32_2_1_Multiplier_0" *) 
module bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0_1
   (a,
    D,
    Q,
    ap_clk,
    b);
  output [31:0]a;
  output [31:0]D;
  input [0:0]Q;
  input ap_clk;
  input [31:0]b;

  wire [31:0]D;
  wire [0:0]Q;
  wire [31:0]a;
  wire \a[0]_INST_0_i_1_n_0 ;
  wire \a[0]_INST_0_n_0 ;
  wire \a[0]_INST_0_n_1 ;
  wire \a[0]_INST_0_n_2 ;
  wire \a[0]_INST_0_n_3 ;
  wire \a[12]_INST_0_n_0 ;
  wire \a[12]_INST_0_n_1 ;
  wire \a[12]_INST_0_n_2 ;
  wire \a[12]_INST_0_n_3 ;
  wire \a[16]_INST_0_n_0 ;
  wire \a[16]_INST_0_n_1 ;
  wire \a[16]_INST_0_n_2 ;
  wire \a[16]_INST_0_n_3 ;
  wire \a[20]_INST_0_n_0 ;
  wire \a[20]_INST_0_n_1 ;
  wire \a[20]_INST_0_n_2 ;
  wire \a[20]_INST_0_n_3 ;
  wire \a[24]_INST_0_n_0 ;
  wire \a[24]_INST_0_n_1 ;
  wire \a[24]_INST_0_n_2 ;
  wire \a[24]_INST_0_n_3 ;
  wire \a[28]_INST_0_n_1 ;
  wire \a[28]_INST_0_n_2 ;
  wire \a[28]_INST_0_n_3 ;
  wire \a[4]_INST_0_n_0 ;
  wire \a[4]_INST_0_n_1 ;
  wire \a[4]_INST_0_n_2 ;
  wire \a[4]_INST_0_n_3 ;
  wire \a[8]_INST_0_n_0 ;
  wire \a[8]_INST_0_n_1 ;
  wire \a[8]_INST_0_n_2 ;
  wire \a[8]_INST_0_n_3 ;
  wire ap_clk;
  wire [31:0]b;
  wire \mul_ln7_reg_101[19]_i_2_n_0 ;
  wire \mul_ln7_reg_101[19]_i_3_n_0 ;
  wire \mul_ln7_reg_101[19]_i_4_n_0 ;
  wire \mul_ln7_reg_101[23]_i_2_n_0 ;
  wire \mul_ln7_reg_101[23]_i_3_n_0 ;
  wire \mul_ln7_reg_101[23]_i_4_n_0 ;
  wire \mul_ln7_reg_101[23]_i_5_n_0 ;
  wire \mul_ln7_reg_101[27]_i_2_n_0 ;
  wire \mul_ln7_reg_101[27]_i_3_n_0 ;
  wire \mul_ln7_reg_101[27]_i_4_n_0 ;
  wire \mul_ln7_reg_101[27]_i_5_n_0 ;
  wire \mul_ln7_reg_101[31]_i_2_n_0 ;
  wire \mul_ln7_reg_101[31]_i_3_n_0 ;
  wire \mul_ln7_reg_101[31]_i_4_n_0 ;
  wire \mul_ln7_reg_101[31]_i_5_n_0 ;
  wire \mul_ln7_reg_101_reg[19]_i_1_n_0 ;
  wire \mul_ln7_reg_101_reg[19]_i_1_n_1 ;
  wire \mul_ln7_reg_101_reg[19]_i_1_n_2 ;
  wire \mul_ln7_reg_101_reg[19]_i_1_n_3 ;
  wire \mul_ln7_reg_101_reg[23]_i_1_n_0 ;
  wire \mul_ln7_reg_101_reg[23]_i_1_n_1 ;
  wire \mul_ln7_reg_101_reg[23]_i_1_n_2 ;
  wire \mul_ln7_reg_101_reg[23]_i_1_n_3 ;
  wire \mul_ln7_reg_101_reg[27]_i_1_n_0 ;
  wire \mul_ln7_reg_101_reg[27]_i_1_n_1 ;
  wire \mul_ln7_reg_101_reg[27]_i_1_n_2 ;
  wire \mul_ln7_reg_101_reg[27]_i_1_n_3 ;
  wire \mul_ln7_reg_101_reg[31]_i_1_n_1 ;
  wire \mul_ln7_reg_101_reg[31]_i_1_n_2 ;
  wire \mul_ln7_reg_101_reg[31]_i_1_n_3 ;
  wire \p_reg[16]__0_n_0 ;
  wire p_reg_n_100;
  wire p_reg_n_101;
  wire p_reg_n_102;
  wire p_reg_n_103;
  wire p_reg_n_104;
  wire p_reg_n_105;
  wire p_reg_n_58;
  wire p_reg_n_59;
  wire p_reg_n_60;
  wire p_reg_n_61;
  wire p_reg_n_62;
  wire p_reg_n_63;
  wire p_reg_n_64;
  wire p_reg_n_65;
  wire p_reg_n_66;
  wire p_reg_n_67;
  wire p_reg_n_68;
  wire p_reg_n_69;
  wire p_reg_n_70;
  wire p_reg_n_71;
  wire p_reg_n_72;
  wire p_reg_n_73;
  wire p_reg_n_74;
  wire p_reg_n_75;
  wire p_reg_n_76;
  wire p_reg_n_77;
  wire p_reg_n_78;
  wire p_reg_n_79;
  wire p_reg_n_80;
  wire p_reg_n_81;
  wire p_reg_n_82;
  wire p_reg_n_83;
  wire p_reg_n_84;
  wire p_reg_n_85;
  wire p_reg_n_86;
  wire p_reg_n_87;
  wire p_reg_n_88;
  wire p_reg_n_89;
  wire p_reg_n_90;
  wire p_reg_n_91;
  wire p_reg_n_92;
  wire p_reg_n_93;
  wire p_reg_n_94;
  wire p_reg_n_95;
  wire p_reg_n_96;
  wire p_reg_n_97;
  wire p_reg_n_98;
  wire p_reg_n_99;
  wire tmp_product__0_n_100;
  wire tmp_product__0_n_101;
  wire tmp_product__0_n_102;
  wire tmp_product__0_n_103;
  wire tmp_product__0_n_104;
  wire tmp_product__0_n_105;
  wire tmp_product__0_n_106;
  wire tmp_product__0_n_107;
  wire tmp_product__0_n_108;
  wire tmp_product__0_n_109;
  wire tmp_product__0_n_110;
  wire tmp_product__0_n_111;
  wire tmp_product__0_n_112;
  wire tmp_product__0_n_113;
  wire tmp_product__0_n_114;
  wire tmp_product__0_n_115;
  wire tmp_product__0_n_116;
  wire tmp_product__0_n_117;
  wire tmp_product__0_n_118;
  wire tmp_product__0_n_119;
  wire tmp_product__0_n_120;
  wire tmp_product__0_n_121;
  wire tmp_product__0_n_122;
  wire tmp_product__0_n_123;
  wire tmp_product__0_n_124;
  wire tmp_product__0_n_125;
  wire tmp_product__0_n_126;
  wire tmp_product__0_n_127;
  wire tmp_product__0_n_128;
  wire tmp_product__0_n_129;
  wire tmp_product__0_n_130;
  wire tmp_product__0_n_131;
  wire tmp_product__0_n_132;
  wire tmp_product__0_n_133;
  wire tmp_product__0_n_134;
  wire tmp_product__0_n_135;
  wire tmp_product__0_n_136;
  wire tmp_product__0_n_137;
  wire tmp_product__0_n_138;
  wire tmp_product__0_n_139;
  wire tmp_product__0_n_140;
  wire tmp_product__0_n_141;
  wire tmp_product__0_n_142;
  wire tmp_product__0_n_143;
  wire tmp_product__0_n_144;
  wire tmp_product__0_n_145;
  wire tmp_product__0_n_146;
  wire tmp_product__0_n_147;
  wire tmp_product__0_n_148;
  wire tmp_product__0_n_149;
  wire tmp_product__0_n_150;
  wire tmp_product__0_n_151;
  wire tmp_product__0_n_152;
  wire tmp_product__0_n_153;
  wire tmp_product__0_n_58;
  wire tmp_product__0_n_59;
  wire tmp_product__0_n_60;
  wire tmp_product__0_n_61;
  wire tmp_product__0_n_62;
  wire tmp_product__0_n_63;
  wire tmp_product__0_n_64;
  wire tmp_product__0_n_65;
  wire tmp_product__0_n_66;
  wire tmp_product__0_n_67;
  wire tmp_product__0_n_68;
  wire tmp_product__0_n_69;
  wire tmp_product__0_n_70;
  wire tmp_product__0_n_71;
  wire tmp_product__0_n_72;
  wire tmp_product__0_n_73;
  wire tmp_product__0_n_74;
  wire tmp_product__0_n_75;
  wire tmp_product__0_n_76;
  wire tmp_product__0_n_77;
  wire tmp_product__0_n_78;
  wire tmp_product__0_n_79;
  wire tmp_product__0_n_80;
  wire tmp_product__0_n_81;
  wire tmp_product__0_n_82;
  wire tmp_product__0_n_83;
  wire tmp_product__0_n_84;
  wire tmp_product__0_n_85;
  wire tmp_product__0_n_86;
  wire tmp_product__0_n_87;
  wire tmp_product__0_n_88;
  wire tmp_product__0_n_89;
  wire tmp_product__0_n_90;
  wire tmp_product__0_n_91;
  wire tmp_product__0_n_92;
  wire tmp_product__0_n_93;
  wire tmp_product__0_n_94;
  wire tmp_product__0_n_95;
  wire tmp_product__0_n_96;
  wire tmp_product__0_n_97;
  wire tmp_product__0_n_98;
  wire tmp_product__0_n_99;
  wire tmp_product_n_100;
  wire tmp_product_n_101;
  wire tmp_product_n_102;
  wire tmp_product_n_103;
  wire tmp_product_n_104;
  wire tmp_product_n_105;
  wire tmp_product_n_106;
  wire tmp_product_n_107;
  wire tmp_product_n_108;
  wire tmp_product_n_109;
  wire tmp_product_n_110;
  wire tmp_product_n_111;
  wire tmp_product_n_112;
  wire tmp_product_n_113;
  wire tmp_product_n_114;
  wire tmp_product_n_115;
  wire tmp_product_n_116;
  wire tmp_product_n_117;
  wire tmp_product_n_118;
  wire tmp_product_n_119;
  wire tmp_product_n_120;
  wire tmp_product_n_121;
  wire tmp_product_n_122;
  wire tmp_product_n_123;
  wire tmp_product_n_124;
  wire tmp_product_n_125;
  wire tmp_product_n_126;
  wire tmp_product_n_127;
  wire tmp_product_n_128;
  wire tmp_product_n_129;
  wire tmp_product_n_130;
  wire tmp_product_n_131;
  wire tmp_product_n_132;
  wire tmp_product_n_133;
  wire tmp_product_n_134;
  wire tmp_product_n_135;
  wire tmp_product_n_136;
  wire tmp_product_n_137;
  wire tmp_product_n_138;
  wire tmp_product_n_139;
  wire tmp_product_n_140;
  wire tmp_product_n_141;
  wire tmp_product_n_142;
  wire tmp_product_n_143;
  wire tmp_product_n_144;
  wire tmp_product_n_145;
  wire tmp_product_n_146;
  wire tmp_product_n_147;
  wire tmp_product_n_148;
  wire tmp_product_n_149;
  wire tmp_product_n_150;
  wire tmp_product_n_151;
  wire tmp_product_n_152;
  wire tmp_product_n_153;
  wire tmp_product_n_58;
  wire tmp_product_n_59;
  wire tmp_product_n_60;
  wire tmp_product_n_61;
  wire tmp_product_n_62;
  wire tmp_product_n_63;
  wire tmp_product_n_64;
  wire tmp_product_n_65;
  wire tmp_product_n_66;
  wire tmp_product_n_67;
  wire tmp_product_n_68;
  wire tmp_product_n_69;
  wire tmp_product_n_70;
  wire tmp_product_n_71;
  wire tmp_product_n_72;
  wire tmp_product_n_73;
  wire tmp_product_n_74;
  wire tmp_product_n_75;
  wire tmp_product_n_76;
  wire tmp_product_n_77;
  wire tmp_product_n_78;
  wire tmp_product_n_79;
  wire tmp_product_n_80;
  wire tmp_product_n_81;
  wire tmp_product_n_82;
  wire tmp_product_n_83;
  wire tmp_product_n_84;
  wire tmp_product_n_85;
  wire tmp_product_n_86;
  wire tmp_product_n_87;
  wire tmp_product_n_88;
  wire tmp_product_n_89;
  wire tmp_product_n_90;
  wire tmp_product_n_91;
  wire tmp_product_n_92;
  wire tmp_product_n_93;
  wire tmp_product_n_94;
  wire tmp_product_n_95;
  wire tmp_product_n_96;
  wire tmp_product_n_97;
  wire tmp_product_n_98;
  wire tmp_product_n_99;
  wire [3:3]\NLW_a[28]_INST_0_CO_UNCONNECTED ;
  wire [3:3]\NLW_mul_ln7_reg_101_reg[31]_i_1_CO_UNCONNECTED ;
  wire NLW_p_reg_CARRYCASCOUT_UNCONNECTED;
  wire NLW_p_reg_MULTSIGNOUT_UNCONNECTED;
  wire NLW_p_reg_OVERFLOW_UNCONNECTED;
  wire NLW_p_reg_PATTERNBDETECT_UNCONNECTED;
  wire NLW_p_reg_PATTERNDETECT_UNCONNECTED;
  wire NLW_p_reg_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_p_reg_ACOUT_UNCONNECTED;
  wire [17:0]NLW_p_reg_BCOUT_UNCONNECTED;
  wire [3:0]NLW_p_reg_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_p_reg_PCOUT_UNCONNECTED;
  wire NLW_tmp_product_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product_CARRYOUT_UNCONNECTED;
  wire NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__0_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__0_CARRYOUT_UNCONNECTED;

  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \a[0]_INST_0 
       (.CI(1'b0),
        .CO({\a[0]_INST_0_n_0 ,\a[0]_INST_0_n_1 ,\a[0]_INST_0_n_2 ,\a[0]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,b[1],1'b0}),
        .O(a[3:0]),
        .S({b[3:2],\a[0]_INST_0_i_1_n_0 ,b[0]}));
  LUT1 #(
    .INIT(2'h1)) 
    \a[0]_INST_0_i_1 
       (.I0(b[1]),
        .O(\a[0]_INST_0_i_1_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \a[12]_INST_0 
       (.CI(\a[8]_INST_0_n_0 ),
        .CO({\a[12]_INST_0_n_0 ,\a[12]_INST_0_n_1 ,\a[12]_INST_0_n_2 ,\a[12]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(a[15:12]),
        .S(b[15:12]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \a[16]_INST_0 
       (.CI(\a[12]_INST_0_n_0 ),
        .CO({\a[16]_INST_0_n_0 ,\a[16]_INST_0_n_1 ,\a[16]_INST_0_n_2 ,\a[16]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(a[19:16]),
        .S(b[19:16]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \a[20]_INST_0 
       (.CI(\a[16]_INST_0_n_0 ),
        .CO({\a[20]_INST_0_n_0 ,\a[20]_INST_0_n_1 ,\a[20]_INST_0_n_2 ,\a[20]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(a[23:20]),
        .S(b[23:20]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \a[24]_INST_0 
       (.CI(\a[20]_INST_0_n_0 ),
        .CO({\a[24]_INST_0_n_0 ,\a[24]_INST_0_n_1 ,\a[24]_INST_0_n_2 ,\a[24]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(a[27:24]),
        .S(b[27:24]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \a[28]_INST_0 
       (.CI(\a[24]_INST_0_n_0 ),
        .CO({\NLW_a[28]_INST_0_CO_UNCONNECTED [3],\a[28]_INST_0_n_1 ,\a[28]_INST_0_n_2 ,\a[28]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(a[31:28]),
        .S(b[31:28]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \a[4]_INST_0 
       (.CI(\a[0]_INST_0_n_0 ),
        .CO({\a[4]_INST_0_n_0 ,\a[4]_INST_0_n_1 ,\a[4]_INST_0_n_2 ,\a[4]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(a[7:4]),
        .S(b[7:4]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \a[8]_INST_0 
       (.CI(\a[4]_INST_0_n_0 ),
        .CO({\a[8]_INST_0_n_0 ,\a[8]_INST_0_n_1 ,\a[8]_INST_0_n_2 ,\a[8]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(a[11:8]),
        .S(b[11:8]));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[19]_i_2 
       (.I0(p_reg_n_103),
        .I1(tmp_product_n_103),
        .O(\mul_ln7_reg_101[19]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[19]_i_3 
       (.I0(p_reg_n_104),
        .I1(tmp_product_n_104),
        .O(\mul_ln7_reg_101[19]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[19]_i_4 
       (.I0(p_reg_n_105),
        .I1(tmp_product_n_105),
        .O(\mul_ln7_reg_101[19]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[23]_i_2 
       (.I0(p_reg_n_99),
        .I1(tmp_product_n_99),
        .O(\mul_ln7_reg_101[23]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[23]_i_3 
       (.I0(p_reg_n_100),
        .I1(tmp_product_n_100),
        .O(\mul_ln7_reg_101[23]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[23]_i_4 
       (.I0(p_reg_n_101),
        .I1(tmp_product_n_101),
        .O(\mul_ln7_reg_101[23]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[23]_i_5 
       (.I0(p_reg_n_102),
        .I1(tmp_product_n_102),
        .O(\mul_ln7_reg_101[23]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[27]_i_2 
       (.I0(p_reg_n_95),
        .I1(tmp_product_n_95),
        .O(\mul_ln7_reg_101[27]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[27]_i_3 
       (.I0(p_reg_n_96),
        .I1(tmp_product_n_96),
        .O(\mul_ln7_reg_101[27]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[27]_i_4 
       (.I0(p_reg_n_97),
        .I1(tmp_product_n_97),
        .O(\mul_ln7_reg_101[27]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[27]_i_5 
       (.I0(p_reg_n_98),
        .I1(tmp_product_n_98),
        .O(\mul_ln7_reg_101[27]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[31]_i_2 
       (.I0(p_reg_n_91),
        .I1(tmp_product_n_91),
        .O(\mul_ln7_reg_101[31]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[31]_i_3 
       (.I0(p_reg_n_92),
        .I1(tmp_product_n_92),
        .O(\mul_ln7_reg_101[31]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[31]_i_4 
       (.I0(p_reg_n_93),
        .I1(tmp_product_n_93),
        .O(\mul_ln7_reg_101[31]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \mul_ln7_reg_101[31]_i_5 
       (.I0(p_reg_n_94),
        .I1(tmp_product_n_94),
        .O(\mul_ln7_reg_101[31]_i_5_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \mul_ln7_reg_101_reg[19]_i_1 
       (.CI(1'b0),
        .CO({\mul_ln7_reg_101_reg[19]_i_1_n_0 ,\mul_ln7_reg_101_reg[19]_i_1_n_1 ,\mul_ln7_reg_101_reg[19]_i_1_n_2 ,\mul_ln7_reg_101_reg[19]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({p_reg_n_103,p_reg_n_104,p_reg_n_105,1'b0}),
        .O(D[19:16]),
        .S({\mul_ln7_reg_101[19]_i_2_n_0 ,\mul_ln7_reg_101[19]_i_3_n_0 ,\mul_ln7_reg_101[19]_i_4_n_0 ,\p_reg[16]__0_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \mul_ln7_reg_101_reg[23]_i_1 
       (.CI(\mul_ln7_reg_101_reg[19]_i_1_n_0 ),
        .CO({\mul_ln7_reg_101_reg[23]_i_1_n_0 ,\mul_ln7_reg_101_reg[23]_i_1_n_1 ,\mul_ln7_reg_101_reg[23]_i_1_n_2 ,\mul_ln7_reg_101_reg[23]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({p_reg_n_99,p_reg_n_100,p_reg_n_101,p_reg_n_102}),
        .O(D[23:20]),
        .S({\mul_ln7_reg_101[23]_i_2_n_0 ,\mul_ln7_reg_101[23]_i_3_n_0 ,\mul_ln7_reg_101[23]_i_4_n_0 ,\mul_ln7_reg_101[23]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \mul_ln7_reg_101_reg[27]_i_1 
       (.CI(\mul_ln7_reg_101_reg[23]_i_1_n_0 ),
        .CO({\mul_ln7_reg_101_reg[27]_i_1_n_0 ,\mul_ln7_reg_101_reg[27]_i_1_n_1 ,\mul_ln7_reg_101_reg[27]_i_1_n_2 ,\mul_ln7_reg_101_reg[27]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({p_reg_n_95,p_reg_n_96,p_reg_n_97,p_reg_n_98}),
        .O(D[27:24]),
        .S({\mul_ln7_reg_101[27]_i_2_n_0 ,\mul_ln7_reg_101[27]_i_3_n_0 ,\mul_ln7_reg_101[27]_i_4_n_0 ,\mul_ln7_reg_101[27]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \mul_ln7_reg_101_reg[31]_i_1 
       (.CI(\mul_ln7_reg_101_reg[27]_i_1_n_0 ),
        .CO({\NLW_mul_ln7_reg_101_reg[31]_i_1_CO_UNCONNECTED [3],\mul_ln7_reg_101_reg[31]_i_1_n_1 ,\mul_ln7_reg_101_reg[31]_i_1_n_2 ,\mul_ln7_reg_101_reg[31]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,p_reg_n_92,p_reg_n_93,p_reg_n_94}),
        .O(D[31:28]),
        .S({\mul_ln7_reg_101[31]_i_2_n_0 ,\mul_ln7_reg_101[31]_i_3_n_0 ,\mul_ln7_reg_101[31]_i_4_n_0 ,\mul_ln7_reg_101[31]_i_5_n_0 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x15 4}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(1),
    .BREG(1),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    p_reg
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,b[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_p_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({a[31],a[31],a[31],a[31:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_p_reg_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_p_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_p_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(Q),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_p_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_p_reg_OVERFLOW_UNCONNECTED),
        .P({p_reg_n_58,p_reg_n_59,p_reg_n_60,p_reg_n_61,p_reg_n_62,p_reg_n_63,p_reg_n_64,p_reg_n_65,p_reg_n_66,p_reg_n_67,p_reg_n_68,p_reg_n_69,p_reg_n_70,p_reg_n_71,p_reg_n_72,p_reg_n_73,p_reg_n_74,p_reg_n_75,p_reg_n_76,p_reg_n_77,p_reg_n_78,p_reg_n_79,p_reg_n_80,p_reg_n_81,p_reg_n_82,p_reg_n_83,p_reg_n_84,p_reg_n_85,p_reg_n_86,p_reg_n_87,p_reg_n_88,p_reg_n_89,p_reg_n_90,p_reg_n_91,p_reg_n_92,p_reg_n_93,p_reg_n_94,p_reg_n_95,p_reg_n_96,p_reg_n_97,p_reg_n_98,p_reg_n_99,p_reg_n_100,p_reg_n_101,p_reg_n_102,p_reg_n_103,p_reg_n_104,p_reg_n_105}),
        .PATTERNBDETECT(NLW_p_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_p_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__0_n_106,tmp_product__0_n_107,tmp_product__0_n_108,tmp_product__0_n_109,tmp_product__0_n_110,tmp_product__0_n_111,tmp_product__0_n_112,tmp_product__0_n_113,tmp_product__0_n_114,tmp_product__0_n_115,tmp_product__0_n_116,tmp_product__0_n_117,tmp_product__0_n_118,tmp_product__0_n_119,tmp_product__0_n_120,tmp_product__0_n_121,tmp_product__0_n_122,tmp_product__0_n_123,tmp_product__0_n_124,tmp_product__0_n_125,tmp_product__0_n_126,tmp_product__0_n_127,tmp_product__0_n_128,tmp_product__0_n_129,tmp_product__0_n_130,tmp_product__0_n_131,tmp_product__0_n_132,tmp_product__0_n_133,tmp_product__0_n_134,tmp_product__0_n_135,tmp_product__0_n_136,tmp_product__0_n_137,tmp_product__0_n_138,tmp_product__0_n_139,tmp_product__0_n_140,tmp_product__0_n_141,tmp_product__0_n_142,tmp_product__0_n_143,tmp_product__0_n_144,tmp_product__0_n_145,tmp_product__0_n_146,tmp_product__0_n_147,tmp_product__0_n_148,tmp_product__0_n_149,tmp_product__0_n_150,tmp_product__0_n_151,tmp_product__0_n_152,tmp_product__0_n_153}),
        .PCOUT(NLW_p_reg_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_p_reg_UNDERFLOW_UNCONNECTED));
  FDRE \p_reg[0]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_105),
        .Q(D[0]),
        .R(1'b0));
  FDRE \p_reg[10]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_95),
        .Q(D[10]),
        .R(1'b0));
  FDRE \p_reg[11]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_94),
        .Q(D[11]),
        .R(1'b0));
  FDRE \p_reg[12]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_93),
        .Q(D[12]),
        .R(1'b0));
  FDRE \p_reg[13]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_92),
        .Q(D[13]),
        .R(1'b0));
  FDRE \p_reg[14]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_91),
        .Q(D[14]),
        .R(1'b0));
  FDRE \p_reg[15]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_90),
        .Q(D[15]),
        .R(1'b0));
  FDRE \p_reg[16]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_89),
        .Q(\p_reg[16]__0_n_0 ),
        .R(1'b0));
  FDRE \p_reg[1]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_104),
        .Q(D[1]),
        .R(1'b0));
  FDRE \p_reg[2]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_103),
        .Q(D[2]),
        .R(1'b0));
  FDRE \p_reg[3]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_102),
        .Q(D[3]),
        .R(1'b0));
  FDRE \p_reg[4]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_101),
        .Q(D[4]),
        .R(1'b0));
  FDRE \p_reg[5]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_100),
        .Q(D[5]),
        .R(1'b0));
  FDRE \p_reg[6]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_99),
        .Q(D[6]),
        .R(1'b0));
  FDRE \p_reg[7]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_98),
        .Q(D[7]),
        .R(1'b0));
  FDRE \p_reg[8]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_97),
        .Q(D[8]),
        .R(1'b0));
  FDRE \p_reg[9]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product__0_n_96),
        .Q(D[9]),
        .R(1'b0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 15x18 4}}" *) 
  DSP48E1 #(
    .ACASCREG(1),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(1),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,a[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({b[31],b[31],b[31],b[31:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(Q),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product_OVERFLOW_UNCONNECTED),
        .P({tmp_product_n_58,tmp_product_n_59,tmp_product_n_60,tmp_product_n_61,tmp_product_n_62,tmp_product_n_63,tmp_product_n_64,tmp_product_n_65,tmp_product_n_66,tmp_product_n_67,tmp_product_n_68,tmp_product_n_69,tmp_product_n_70,tmp_product_n_71,tmp_product_n_72,tmp_product_n_73,tmp_product_n_74,tmp_product_n_75,tmp_product_n_76,tmp_product_n_77,tmp_product_n_78,tmp_product_n_79,tmp_product_n_80,tmp_product_n_81,tmp_product_n_82,tmp_product_n_83,tmp_product_n_84,tmp_product_n_85,tmp_product_n_86,tmp_product_n_87,tmp_product_n_88,tmp_product_n_89,tmp_product_n_90,tmp_product_n_91,tmp_product_n_92,tmp_product_n_93,tmp_product_n_94,tmp_product_n_95,tmp_product_n_96,tmp_product_n_97,tmp_product_n_98,tmp_product_n_99,tmp_product_n_100,tmp_product_n_101,tmp_product_n_102,tmp_product_n_103,tmp_product_n_104,tmp_product_n_105}),
        .PATTERNBDETECT(NLW_tmp_product_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({tmp_product_n_106,tmp_product_n_107,tmp_product_n_108,tmp_product_n_109,tmp_product_n_110,tmp_product_n_111,tmp_product_n_112,tmp_product_n_113,tmp_product_n_114,tmp_product_n_115,tmp_product_n_116,tmp_product_n_117,tmp_product_n_118,tmp_product_n_119,tmp_product_n_120,tmp_product_n_121,tmp_product_n_122,tmp_product_n_123,tmp_product_n_124,tmp_product_n_125,tmp_product_n_126,tmp_product_n_127,tmp_product_n_128,tmp_product_n_129,tmp_product_n_130,tmp_product_n_131,tmp_product_n_132,tmp_product_n_133,tmp_product_n_134,tmp_product_n_135,tmp_product_n_136,tmp_product_n_137,tmp_product_n_138,tmp_product_n_139,tmp_product_n_140,tmp_product_n_141,tmp_product_n_142,tmp_product_n_143,tmp_product_n_144,tmp_product_n_145,tmp_product_n_146,tmp_product_n_147,tmp_product_n_148,tmp_product_n_149,tmp_product_n_150,tmp_product_n_151,tmp_product_n_152,tmp_product_n_153}),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_tmp_product_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 4}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(1),
    .BREG(1),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,b[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,a[16:0]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(Q),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__0_OVERFLOW_UNCONNECTED),
        .P({tmp_product__0_n_58,tmp_product__0_n_59,tmp_product__0_n_60,tmp_product__0_n_61,tmp_product__0_n_62,tmp_product__0_n_63,tmp_product__0_n_64,tmp_product__0_n_65,tmp_product__0_n_66,tmp_product__0_n_67,tmp_product__0_n_68,tmp_product__0_n_69,tmp_product__0_n_70,tmp_product__0_n_71,tmp_product__0_n_72,tmp_product__0_n_73,tmp_product__0_n_74,tmp_product__0_n_75,tmp_product__0_n_76,tmp_product__0_n_77,tmp_product__0_n_78,tmp_product__0_n_79,tmp_product__0_n_80,tmp_product__0_n_81,tmp_product__0_n_82,tmp_product__0_n_83,tmp_product__0_n_84,tmp_product__0_n_85,tmp_product__0_n_86,tmp_product__0_n_87,tmp_product__0_n_88,tmp_product__0_n_89,tmp_product__0_n_90,tmp_product__0_n_91,tmp_product__0_n_92,tmp_product__0_n_93,tmp_product__0_n_94,tmp_product__0_n_95,tmp_product__0_n_96,tmp_product__0_n_97,tmp_product__0_n_98,tmp_product__0_n_99,tmp_product__0_n_100,tmp_product__0_n_101,tmp_product__0_n_102,tmp_product__0_n_103,tmp_product__0_n_104,tmp_product__0_n_105}),
        .PATTERNBDETECT(NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({tmp_product__0_n_106,tmp_product__0_n_107,tmp_product__0_n_108,tmp_product__0_n_109,tmp_product__0_n_110,tmp_product__0_n_111,tmp_product__0_n_112,tmp_product__0_n_113,tmp_product__0_n_114,tmp_product__0_n_115,tmp_product__0_n_116,tmp_product__0_n_117,tmp_product__0_n_118,tmp_product__0_n_119,tmp_product__0_n_120,tmp_product__0_n_121,tmp_product__0_n_122,tmp_product__0_n_123,tmp_product__0_n_124,tmp_product__0_n_125,tmp_product__0_n_126,tmp_product__0_n_127,tmp_product__0_n_128,tmp_product__0_n_129,tmp_product__0_n_130,tmp_product__0_n_131,tmp_product__0_n_132,tmp_product__0_n_133,tmp_product__0_n_134,tmp_product__0_n_135,tmp_product__0_n_136,tmp_product__0_n_137,tmp_product__0_n_138,tmp_product__0_n_139,tmp_product__0_n_140,tmp_product__0_n_141,tmp_product__0_n_142,tmp_product__0_n_143,tmp_product__0_n_144,tmp_product__0_n_145,tmp_product__0_n_146,tmp_product__0_n_147,tmp_product__0_n_148,tmp_product__0_n_149,tmp_product__0_n_150,tmp_product__0_n_151,tmp_product__0_n_152,tmp_product__0_n_153}),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_tmp_product__0_UNDERFLOW_UNCONNECTED));
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
