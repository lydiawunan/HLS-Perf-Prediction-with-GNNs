// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Mon Apr 26 21:14:46 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_0_hls_inst_0_sim_netlist.v
// Design      : bd_0_hls_inst_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "bd_0_hls_inst_0,fn1,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "HLS" *) 
(* X_CORE_INFO = "fn1,Vivado 2020.2" *) (* hls_module = "yes" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    ap_return,
    p,
    p_5,
    p_9,
    p_11,
    p_15);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [31:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p, LAYERED_METADATA undef" *) input [63:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_5 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_5, LAYERED_METADATA undef" *) input [15:0]p_5;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_9 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_9, LAYERED_METADATA undef" *) input [31:0]p_9;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_11 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_11, LAYERED_METADATA undef" *) input [15:0]p_11;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_15 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_15, LAYERED_METADATA undef" *) input [15:0]p_15;

  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire [31:0]ap_return;
  wire ap_rst;
  wire ap_start;
  wire [63:0]p;
  wire [15:0]p_11;
  wire [15:0]p_5;
  wire [31:0]p_9;

  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "23'b00000000000000000000001" *) 
  (* ap_ST_fsm_state10 = "23'b00000000000001000000000" *) 
  (* ap_ST_fsm_state11 = "23'b00000000000010000000000" *) 
  (* ap_ST_fsm_state12 = "23'b00000000000100000000000" *) 
  (* ap_ST_fsm_state13 = "23'b00000000001000000000000" *) 
  (* ap_ST_fsm_state14 = "23'b00000000010000000000000" *) 
  (* ap_ST_fsm_state15 = "23'b00000000100000000000000" *) 
  (* ap_ST_fsm_state16 = "23'b00000001000000000000000" *) 
  (* ap_ST_fsm_state17 = "23'b00000010000000000000000" *) 
  (* ap_ST_fsm_state18 = "23'b00000100000000000000000" *) 
  (* ap_ST_fsm_state19 = "23'b00001000000000000000000" *) 
  (* ap_ST_fsm_state2 = "23'b00000000000000000000010" *) 
  (* ap_ST_fsm_state20 = "23'b00010000000000000000000" *) 
  (* ap_ST_fsm_state21 = "23'b00100000000000000000000" *) 
  (* ap_ST_fsm_state22 = "23'b01000000000000000000000" *) 
  (* ap_ST_fsm_state23 = "23'b10000000000000000000000" *) 
  (* ap_ST_fsm_state3 = "23'b00000000000000000000100" *) 
  (* ap_ST_fsm_state4 = "23'b00000000000000000001000" *) 
  (* ap_ST_fsm_state5 = "23'b00000000000000000010000" *) 
  (* ap_ST_fsm_state6 = "23'b00000000000000000100000" *) 
  (* ap_ST_fsm_state7 = "23'b00000000000000001000000" *) 
  (* ap_ST_fsm_state8 = "23'b00000000000000010000000" *) 
  (* ap_ST_fsm_state9 = "23'b00000000000000100000000" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1 inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,p[7:0]}),
        .p_11(p_11),
        .p_15({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_5(p_5),
        .p_9(p_9));
endmodule

(* ap_ST_fsm_state1 = "23'b00000000000000000000001" *) (* ap_ST_fsm_state10 = "23'b00000000000001000000000" *) (* ap_ST_fsm_state11 = "23'b00000000000010000000000" *) 
(* ap_ST_fsm_state12 = "23'b00000000000100000000000" *) (* ap_ST_fsm_state13 = "23'b00000000001000000000000" *) (* ap_ST_fsm_state14 = "23'b00000000010000000000000" *) 
(* ap_ST_fsm_state15 = "23'b00000000100000000000000" *) (* ap_ST_fsm_state16 = "23'b00000001000000000000000" *) (* ap_ST_fsm_state17 = "23'b00000010000000000000000" *) 
(* ap_ST_fsm_state18 = "23'b00000100000000000000000" *) (* ap_ST_fsm_state19 = "23'b00001000000000000000000" *) (* ap_ST_fsm_state2 = "23'b00000000000000000000010" *) 
(* ap_ST_fsm_state20 = "23'b00010000000000000000000" *) (* ap_ST_fsm_state21 = "23'b00100000000000000000000" *) (* ap_ST_fsm_state22 = "23'b01000000000000000000000" *) 
(* ap_ST_fsm_state23 = "23'b10000000000000000000000" *) (* ap_ST_fsm_state3 = "23'b00000000000000000000100" *) (* ap_ST_fsm_state4 = "23'b00000000000000000001000" *) 
(* ap_ST_fsm_state5 = "23'b00000000000000000010000" *) (* ap_ST_fsm_state6 = "23'b00000000000000000100000" *) (* ap_ST_fsm_state7 = "23'b00000000000000001000000" *) 
(* ap_ST_fsm_state8 = "23'b00000000000000010000000" *) (* ap_ST_fsm_state9 = "23'b00000000000000100000000" *) (* hls_module = "yes" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p,
    p_5,
    p_9,
    p_11,
    p_15,
    ap_return);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [63:0]p;
  input [15:0]p_5;
  input [31:0]p_9;
  input [15:0]p_11;
  input [15:0]p_15;
  output [31:0]ap_return;

  wire [7:0]add_ln17_fu_126_p2;
  wire \ap_CS_fsm[1]_i_2_n_0 ;
  wire \ap_CS_fsm[1]_i_3_n_0 ;
  wire \ap_CS_fsm[1]_i_4_n_0 ;
  wire \ap_CS_fsm[1]_i_5_n_0 ;
  wire \ap_CS_fsm_reg_n_0_[10] ;
  wire \ap_CS_fsm_reg_n_0_[11] ;
  wire \ap_CS_fsm_reg_n_0_[12] ;
  wire \ap_CS_fsm_reg_n_0_[13] ;
  wire \ap_CS_fsm_reg_n_0_[14] ;
  wire \ap_CS_fsm_reg_n_0_[15] ;
  wire \ap_CS_fsm_reg_n_0_[16] ;
  wire \ap_CS_fsm_reg_n_0_[17] ;
  wire \ap_CS_fsm_reg_n_0_[19] ;
  wire \ap_CS_fsm_reg_n_0_[1] ;
  wire \ap_CS_fsm_reg_n_0_[2] ;
  wire \ap_CS_fsm_reg_n_0_[3] ;
  wire \ap_CS_fsm_reg_n_0_[4] ;
  wire \ap_CS_fsm_reg_n_0_[5] ;
  wire \ap_CS_fsm_reg_n_0_[6] ;
  wire \ap_CS_fsm_reg_n_0_[7] ;
  wire \ap_CS_fsm_reg_n_0_[9] ;
  wire ap_CS_fsm_state1;
  wire ap_CS_fsm_state19;
  wire ap_CS_fsm_state21;
  wire ap_CS_fsm_state22;
  wire [1:0]ap_NS_fsm;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire [31:0]\^ap_return ;
  wire \ap_return[0]_INST_0_i_1_n_0 ;
  wire \ap_return[0]_INST_0_i_2_n_0 ;
  wire \ap_return[0]_INST_0_i_3_n_0 ;
  wire \ap_return[0]_INST_0_i_4_n_0 ;
  wire \ap_return[0]_INST_0_i_5_n_0 ;
  wire \ap_return[0]_INST_0_i_6_n_0 ;
  wire \ap_return[0]_INST_0_i_7_n_0 ;
  wire \ap_return[0]_INST_0_n_0 ;
  wire \ap_return[0]_INST_0_n_1 ;
  wire \ap_return[0]_INST_0_n_2 ;
  wire \ap_return[0]_INST_0_n_3 ;
  wire \ap_return[4]_INST_0_i_1_n_0 ;
  wire \ap_return[4]_INST_0_i_2_n_0 ;
  wire \ap_return[4]_INST_0_i_3_n_0 ;
  wire \ap_return[4]_INST_0_i_4_n_0 ;
  wire \ap_return[4]_INST_0_i_5_n_0 ;
  wire \ap_return[4]_INST_0_i_6_n_0 ;
  wire \ap_return[4]_INST_0_i_7_n_0 ;
  wire \ap_return[4]_INST_0_n_1 ;
  wire \ap_return[4]_INST_0_n_2 ;
  wire \ap_return[4]_INST_0_n_3 ;
  wire ap_rst;
  wire ap_start;
  wire done0;
  wire [7:0]or_ln20_fu_131_p2;
  wire [7:0]or_ln20_reg_196;
  wire \or_ln20_reg_196[3]_i_3_n_0 ;
  wire \or_ln20_reg_196[3]_i_4_n_0 ;
  wire \or_ln20_reg_196[3]_i_5_n_0 ;
  wire \or_ln20_reg_196[3]_i_6_n_0 ;
  wire \or_ln20_reg_196[7]_i_3_n_0 ;
  wire \or_ln20_reg_196[7]_i_4_n_0 ;
  wire \or_ln20_reg_196[7]_i_5_n_0 ;
  wire \or_ln20_reg_196[7]_i_6_n_0 ;
  wire \or_ln20_reg_196_reg[3]_i_2_n_0 ;
  wire \or_ln20_reg_196_reg[3]_i_2_n_1 ;
  wire \or_ln20_reg_196_reg[3]_i_2_n_2 ;
  wire \or_ln20_reg_196_reg[3]_i_2_n_3 ;
  wire \or_ln20_reg_196_reg[7]_i_2_n_1 ;
  wire \or_ln20_reg_196_reg[7]_i_2_n_2 ;
  wire \or_ln20_reg_196_reg[7]_i_2_n_3 ;
  wire [63:0]p;
  wire [15:0]p_11;
  wire [15:0]p_5;
  wire [31:0]p_9;
  wire sdiv_10ns_17ns_8_14_seq_1_U3_n_0;
  wire sdiv_10ns_17ns_8_14_seq_1_U3_n_1;
  wire sdiv_10ns_17ns_8_14_seq_1_U3_n_2;
  wire sdiv_10ns_17ns_8_14_seq_1_U3_n_3;
  wire sdiv_10ns_17ns_8_14_seq_1_U3_n_4;
  wire sdiv_10ns_17ns_8_14_seq_1_U3_n_5;
  wire sdiv_10ns_17ns_8_14_seq_1_U3_n_6;
  wire sdiv_10ns_17ns_8_14_seq_1_U3_n_7;
  wire sdiv_17ns_32ns_6_21_seq_1_U2_n_0;
  wire sdiv_17ns_32ns_6_21_seq_1_U2_n_1;
  wire sdiv_17ns_32ns_6_21_seq_1_U2_n_2;
  wire sdiv_17ns_32ns_6_21_seq_1_U2_n_3;
  wire sdiv_17ns_32ns_6_21_seq_1_U2_n_4;
  wire sdiv_17ns_32ns_6_21_seq_1_U2_n_5;
  wire [5:0]sdiv_ln19_reg_201;
  wire [7:0]sdiv_ln21_reg_211;
  wire start;
  wire start0;
  wire [7:0]trunc_ln17_reg_181;
  wire [7:0]trunc_ln18_reg_206;
  wire \trunc_ln18_reg_206[0]_i_1_n_0 ;
  wire \trunc_ln18_reg_206[1]_i_1_n_0 ;
  wire \trunc_ln18_reg_206[2]_i_1_n_0 ;
  wire \trunc_ln18_reg_206[3]_i_1_n_0 ;
  wire \trunc_ln18_reg_206[4]_i_1_n_0 ;
  wire \trunc_ln18_reg_206[5]_i_1_n_0 ;
  wire \trunc_ln18_reg_206[6]_i_1_n_0 ;
  wire \trunc_ln18_reg_206[7]_i_1_n_0 ;
  wire udiv_15ns_17ns_8_19_seq_1_U1_n_1;
  wire udiv_15ns_17ns_8_19_seq_1_U1_n_2;
  wire [3:3]\NLW_ap_return[4]_INST_0_CO_UNCONNECTED ;
  wire [3:3]\NLW_or_ln20_reg_196_reg[7]_i_2_CO_UNCONNECTED ;

  assign ap_ready = ap_done;
  assign ap_return[31] = \^ap_return [31];
  assign ap_return[30] = \^ap_return [31];
  assign ap_return[29] = \^ap_return [31];
  assign ap_return[28] = \^ap_return [31];
  assign ap_return[27] = \^ap_return [31];
  assign ap_return[26] = \^ap_return [31];
  assign ap_return[25] = \^ap_return [31];
  assign ap_return[24] = \^ap_return [31];
  assign ap_return[23] = \^ap_return [31];
  assign ap_return[22] = \^ap_return [31];
  assign ap_return[21] = \^ap_return [31];
  assign ap_return[20] = \^ap_return [31];
  assign ap_return[19] = \^ap_return [31];
  assign ap_return[18] = \^ap_return [31];
  assign ap_return[17] = \^ap_return [31];
  assign ap_return[16] = \^ap_return [31];
  assign ap_return[15] = \^ap_return [31];
  assign ap_return[14] = \^ap_return [31];
  assign ap_return[13] = \^ap_return [31];
  assign ap_return[12] = \^ap_return [31];
  assign ap_return[11] = \^ap_return [31];
  assign ap_return[10] = \^ap_return [31];
  assign ap_return[9] = \^ap_return [31];
  assign ap_return[8] = \^ap_return [31];
  assign ap_return[7] = \^ap_return [31];
  assign ap_return[6:0] = \^ap_return [6:0];
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'hF4)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(ap_start),
        .I1(ap_CS_fsm_state1),
        .I2(ap_done),
        .O(ap_NS_fsm[0]));
  LUT4 #(
    .INIT(16'h8000)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(\ap_CS_fsm[1]_i_2_n_0 ),
        .I1(\ap_CS_fsm[1]_i_3_n_0 ),
        .I2(\ap_CS_fsm[1]_i_4_n_0 ),
        .I3(\ap_CS_fsm[1]_i_5_n_0 ),
        .O(ap_NS_fsm[1]));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(\ap_CS_fsm_reg_n_0_[13] ),
        .I1(\ap_CS_fsm_reg_n_0_[14] ),
        .I2(\ap_CS_fsm_reg_n_0_[11] ),
        .I3(\ap_CS_fsm_reg_n_0_[12] ),
        .I4(\ap_CS_fsm_reg_n_0_[16] ),
        .I5(\ap_CS_fsm_reg_n_0_[15] ),
        .O(\ap_CS_fsm[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000001000)) 
    \ap_CS_fsm[1]_i_3 
       (.I0(\ap_CS_fsm_reg_n_0_[1] ),
        .I1(\ap_CS_fsm_reg_n_0_[2] ),
        .I2(ap_start),
        .I3(ap_CS_fsm_state1),
        .I4(\ap_CS_fsm_reg_n_0_[4] ),
        .I5(\ap_CS_fsm_reg_n_0_[3] ),
        .O(\ap_CS_fsm[1]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_4 
       (.I0(\ap_CS_fsm_reg_n_0_[7] ),
        .I1(start),
        .I2(\ap_CS_fsm_reg_n_0_[5] ),
        .I3(\ap_CS_fsm_reg_n_0_[6] ),
        .I4(\ap_CS_fsm_reg_n_0_[10] ),
        .I5(\ap_CS_fsm_reg_n_0_[9] ),
        .O(\ap_CS_fsm[1]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_5 
       (.I0(\ap_CS_fsm_reg_n_0_[19] ),
        .I1(ap_CS_fsm_state21),
        .I2(\ap_CS_fsm_reg_n_0_[17] ),
        .I3(ap_CS_fsm_state19),
        .I4(ap_done),
        .I5(ap_CS_fsm_state22),
        .O(\ap_CS_fsm[1]_i_5_n_0 ));
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
    \ap_CS_fsm_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[9] ),
        .Q(\ap_CS_fsm_reg_n_0_[10] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[10] ),
        .Q(\ap_CS_fsm_reg_n_0_[11] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[11] ),
        .Q(\ap_CS_fsm_reg_n_0_[12] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[12] ),
        .Q(\ap_CS_fsm_reg_n_0_[13] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[13] ),
        .Q(\ap_CS_fsm_reg_n_0_[14] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[14] ),
        .Q(\ap_CS_fsm_reg_n_0_[15] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[15] ),
        .Q(\ap_CS_fsm_reg_n_0_[16] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[16] ),
        .Q(\ap_CS_fsm_reg_n_0_[17] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[17] ),
        .Q(ap_CS_fsm_state19),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state19),
        .Q(\ap_CS_fsm_reg_n_0_[19] ),
        .R(ap_rst));
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
    \ap_CS_fsm_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[19] ),
        .Q(ap_CS_fsm_state21),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state21),
        .Q(ap_CS_fsm_state22),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state22),
        .Q(ap_done),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[1] ),
        .Q(\ap_CS_fsm_reg_n_0_[2] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[2] ),
        .Q(\ap_CS_fsm_reg_n_0_[3] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[3] ),
        .Q(\ap_CS_fsm_reg_n_0_[4] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[4] ),
        .Q(\ap_CS_fsm_reg_n_0_[5] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[5] ),
        .Q(\ap_CS_fsm_reg_n_0_[6] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[6] ),
        .Q(\ap_CS_fsm_reg_n_0_[7] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[7] ),
        .Q(start),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(start),
        .Q(\ap_CS_fsm_reg_n_0_[9] ),
        .R(ap_rst));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(ap_CS_fsm_state1),
        .I1(ap_start),
        .O(ap_idle));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[0]_INST_0 
       (.CI(1'b0),
        .CO({\ap_return[0]_INST_0_n_0 ,\ap_return[0]_INST_0_n_1 ,\ap_return[0]_INST_0_n_2 ,\ap_return[0]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\ap_return[0]_INST_0_i_1_n_0 ,\ap_return[0]_INST_0_i_2_n_0 ,\ap_return[0]_INST_0_i_3_n_0 ,or_ln20_reg_196[0]}),
        .O(\^ap_return [3:0]),
        .S({\ap_return[0]_INST_0_i_4_n_0 ,\ap_return[0]_INST_0_i_5_n_0 ,\ap_return[0]_INST_0_i_6_n_0 ,\ap_return[0]_INST_0_i_7_n_0 }));
  (* HLUTNM = "lutpair0" *) 
  LUT3 #(
    .INIT(8'hD4)) 
    \ap_return[0]_INST_0_i_1 
       (.I0(trunc_ln18_reg_206[2]),
        .I1(sdiv_ln21_reg_211[2]),
        .I2(or_ln20_reg_196[2]),
        .O(\ap_return[0]_INST_0_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hD4)) 
    \ap_return[0]_INST_0_i_2 
       (.I0(trunc_ln18_reg_206[1]),
        .I1(sdiv_ln21_reg_211[1]),
        .I2(or_ln20_reg_196[1]),
        .O(\ap_return[0]_INST_0_i_2_n_0 ));
  LUT2 #(
    .INIT(4'hB)) 
    \ap_return[0]_INST_0_i_3 
       (.I0(sdiv_ln21_reg_211[0]),
        .I1(trunc_ln18_reg_206[0]),
        .O(\ap_return[0]_INST_0_i_3_n_0 ));
  (* HLUTNM = "lutpair1" *) 
  LUT4 #(
    .INIT(16'h9669)) 
    \ap_return[0]_INST_0_i_4 
       (.I0(trunc_ln18_reg_206[3]),
        .I1(sdiv_ln21_reg_211[3]),
        .I2(or_ln20_reg_196[3]),
        .I3(\ap_return[0]_INST_0_i_1_n_0 ),
        .O(\ap_return[0]_INST_0_i_4_n_0 ));
  (* HLUTNM = "lutpair0" *) 
  LUT4 #(
    .INIT(16'h9669)) 
    \ap_return[0]_INST_0_i_5 
       (.I0(trunc_ln18_reg_206[2]),
        .I1(sdiv_ln21_reg_211[2]),
        .I2(or_ln20_reg_196[2]),
        .I3(\ap_return[0]_INST_0_i_2_n_0 ),
        .O(\ap_return[0]_INST_0_i_5_n_0 ));
  LUT4 #(
    .INIT(16'h9669)) 
    \ap_return[0]_INST_0_i_6 
       (.I0(trunc_ln18_reg_206[1]),
        .I1(sdiv_ln21_reg_211[1]),
        .I2(or_ln20_reg_196[1]),
        .I3(\ap_return[0]_INST_0_i_3_n_0 ),
        .O(\ap_return[0]_INST_0_i_6_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \ap_return[0]_INST_0_i_7 
       (.I0(sdiv_ln21_reg_211[0]),
        .I1(trunc_ln18_reg_206[0]),
        .I2(or_ln20_reg_196[0]),
        .O(\ap_return[0]_INST_0_i_7_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[4]_INST_0 
       (.CI(\ap_return[0]_INST_0_n_0 ),
        .CO({\NLW_ap_return[4]_INST_0_CO_UNCONNECTED [3],\ap_return[4]_INST_0_n_1 ,\ap_return[4]_INST_0_n_2 ,\ap_return[4]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,\ap_return[4]_INST_0_i_1_n_0 ,\ap_return[4]_INST_0_i_2_n_0 ,\ap_return[4]_INST_0_i_3_n_0 }),
        .O({\^ap_return [31],\^ap_return [6:4]}),
        .S({\ap_return[4]_INST_0_i_4_n_0 ,\ap_return[4]_INST_0_i_5_n_0 ,\ap_return[4]_INST_0_i_6_n_0 ,\ap_return[4]_INST_0_i_7_n_0 }));
  (* HLUTNM = "lutpair3" *) 
  LUT3 #(
    .INIT(8'hD4)) 
    \ap_return[4]_INST_0_i_1 
       (.I0(trunc_ln18_reg_206[5]),
        .I1(sdiv_ln21_reg_211[5]),
        .I2(or_ln20_reg_196[5]),
        .O(\ap_return[4]_INST_0_i_1_n_0 ));
  (* HLUTNM = "lutpair2" *) 
  LUT3 #(
    .INIT(8'hD4)) 
    \ap_return[4]_INST_0_i_2 
       (.I0(trunc_ln18_reg_206[4]),
        .I1(sdiv_ln21_reg_211[4]),
        .I2(or_ln20_reg_196[4]),
        .O(\ap_return[4]_INST_0_i_2_n_0 ));
  (* HLUTNM = "lutpair1" *) 
  LUT3 #(
    .INIT(8'hD4)) 
    \ap_return[4]_INST_0_i_3 
       (.I0(trunc_ln18_reg_206[3]),
        .I1(sdiv_ln21_reg_211[3]),
        .I2(or_ln20_reg_196[3]),
        .O(\ap_return[4]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h8E71718E718E8E71)) 
    \ap_return[4]_INST_0_i_4 
       (.I0(or_ln20_reg_196[6]),
        .I1(sdiv_ln21_reg_211[6]),
        .I2(trunc_ln18_reg_206[6]),
        .I3(sdiv_ln21_reg_211[7]),
        .I4(trunc_ln18_reg_206[7]),
        .I5(or_ln20_reg_196[7]),
        .O(\ap_return[4]_INST_0_i_4_n_0 ));
  LUT4 #(
    .INIT(16'h9669)) 
    \ap_return[4]_INST_0_i_5 
       (.I0(\ap_return[4]_INST_0_i_1_n_0 ),
        .I1(sdiv_ln21_reg_211[6]),
        .I2(trunc_ln18_reg_206[6]),
        .I3(or_ln20_reg_196[6]),
        .O(\ap_return[4]_INST_0_i_5_n_0 ));
  (* HLUTNM = "lutpair3" *) 
  LUT4 #(
    .INIT(16'h9669)) 
    \ap_return[4]_INST_0_i_6 
       (.I0(trunc_ln18_reg_206[5]),
        .I1(sdiv_ln21_reg_211[5]),
        .I2(or_ln20_reg_196[5]),
        .I3(\ap_return[4]_INST_0_i_2_n_0 ),
        .O(\ap_return[4]_INST_0_i_6_n_0 ));
  (* HLUTNM = "lutpair2" *) 
  LUT4 #(
    .INIT(16'h9669)) 
    \ap_return[4]_INST_0_i_7 
       (.I0(trunc_ln18_reg_206[4]),
        .I1(sdiv_ln21_reg_211[4]),
        .I2(or_ln20_reg_196[4]),
        .I3(\ap_return[4]_INST_0_i_3_n_0 ),
        .O(\ap_return[4]_INST_0_i_7_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \or_ln20_reg_196[3]_i_3 
       (.I0(p[3]),
        .I1(trunc_ln17_reg_181[3]),
        .O(\or_ln20_reg_196[3]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \or_ln20_reg_196[3]_i_4 
       (.I0(p[2]),
        .I1(trunc_ln17_reg_181[2]),
        .O(\or_ln20_reg_196[3]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \or_ln20_reg_196[3]_i_5 
       (.I0(p[1]),
        .I1(trunc_ln17_reg_181[1]),
        .O(\or_ln20_reg_196[3]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \or_ln20_reg_196[3]_i_6 
       (.I0(p[0]),
        .I1(trunc_ln17_reg_181[0]),
        .O(\or_ln20_reg_196[3]_i_6_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \or_ln20_reg_196[7]_i_3 
       (.I0(p[7]),
        .I1(trunc_ln17_reg_181[7]),
        .O(\or_ln20_reg_196[7]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \or_ln20_reg_196[7]_i_4 
       (.I0(p[6]),
        .I1(trunc_ln17_reg_181[6]),
        .O(\or_ln20_reg_196[7]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \or_ln20_reg_196[7]_i_5 
       (.I0(p[5]),
        .I1(trunc_ln17_reg_181[5]),
        .O(\or_ln20_reg_196[7]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \or_ln20_reg_196[7]_i_6 
       (.I0(p[4]),
        .I1(trunc_ln17_reg_181[4]),
        .O(\or_ln20_reg_196[7]_i_6_n_0 ));
  FDRE \or_ln20_reg_196_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state19),
        .D(or_ln20_fu_131_p2[0]),
        .Q(or_ln20_reg_196[0]),
        .R(1'b0));
  FDRE \or_ln20_reg_196_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state19),
        .D(or_ln20_fu_131_p2[1]),
        .Q(or_ln20_reg_196[1]),
        .R(1'b0));
  FDRE \or_ln20_reg_196_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state19),
        .D(or_ln20_fu_131_p2[2]),
        .Q(or_ln20_reg_196[2]),
        .R(1'b0));
  FDRE \or_ln20_reg_196_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state19),
        .D(or_ln20_fu_131_p2[3]),
        .Q(or_ln20_reg_196[3]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \or_ln20_reg_196_reg[3]_i_2 
       (.CI(1'b0),
        .CO({\or_ln20_reg_196_reg[3]_i_2_n_0 ,\or_ln20_reg_196_reg[3]_i_2_n_1 ,\or_ln20_reg_196_reg[3]_i_2_n_2 ,\or_ln20_reg_196_reg[3]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI(p[3:0]),
        .O(add_ln17_fu_126_p2[3:0]),
        .S({\or_ln20_reg_196[3]_i_3_n_0 ,\or_ln20_reg_196[3]_i_4_n_0 ,\or_ln20_reg_196[3]_i_5_n_0 ,\or_ln20_reg_196[3]_i_6_n_0 }));
  FDRE \or_ln20_reg_196_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state19),
        .D(or_ln20_fu_131_p2[4]),
        .Q(or_ln20_reg_196[4]),
        .R(1'b0));
  FDRE \or_ln20_reg_196_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state19),
        .D(or_ln20_fu_131_p2[5]),
        .Q(or_ln20_reg_196[5]),
        .R(1'b0));
  FDRE \or_ln20_reg_196_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state19),
        .D(or_ln20_fu_131_p2[6]),
        .Q(or_ln20_reg_196[6]),
        .R(1'b0));
  FDRE \or_ln20_reg_196_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state19),
        .D(or_ln20_fu_131_p2[7]),
        .Q(or_ln20_reg_196[7]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \or_ln20_reg_196_reg[7]_i_2 
       (.CI(\or_ln20_reg_196_reg[3]_i_2_n_0 ),
        .CO({\NLW_or_ln20_reg_196_reg[7]_i_2_CO_UNCONNECTED [3],\or_ln20_reg_196_reg[7]_i_2_n_1 ,\or_ln20_reg_196_reg[7]_i_2_n_2 ,\or_ln20_reg_196_reg[7]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,p[6:4]}),
        .O(add_ln17_fu_126_p2[7:4]),
        .S({\or_ln20_reg_196[7]_i_3_n_0 ,\or_ln20_reg_196[7]_i_4_n_0 ,\or_ln20_reg_196[7]_i_5_n_0 ,\or_ln20_reg_196[7]_i_6_n_0 }));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_10ns_17ns_8_14_seq_1 sdiv_10ns_17ns_8_14_seq_1_U3
       (.Q(start),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .p_11(p_11),
        .\quot_reg[7] ({sdiv_10ns_17ns_8_14_seq_1_U3_n_0,sdiv_10ns_17ns_8_14_seq_1_U3_n_1,sdiv_10ns_17ns_8_14_seq_1_U3_n_2,sdiv_10ns_17ns_8_14_seq_1_U3_n_3,sdiv_10ns_17ns_8_14_seq_1_U3_n_4,sdiv_10ns_17ns_8_14_seq_1_U3_n_5,sdiv_10ns_17ns_8_14_seq_1_U3_n_6,sdiv_10ns_17ns_8_14_seq_1_U3_n_7}),
        .\r_stage_reg[10] (udiv_15ns_17ns_8_19_seq_1_U1_n_2));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17ns_32ns_6_21_seq_1 sdiv_17ns_32ns_6_21_seq_1_U2
       (.D(done0),
        .E(start0),
        .Q({sdiv_17ns_32ns_6_21_seq_1_U2_n_0,sdiv_17ns_32ns_6_21_seq_1_U2_n_1,sdiv_17ns_32ns_6_21_seq_1_U2_n_2,sdiv_17ns_32ns_6_21_seq_1_U2_n_3,sdiv_17ns_32ns_6_21_seq_1_U2_n_4,sdiv_17ns_32ns_6_21_seq_1_U2_n_5}),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\dividend_tmp_reg[1] (udiv_15ns_17ns_8_19_seq_1_U1_n_1),
        .p_5(p_5),
        .p_9(p_9));
  FDRE \sdiv_ln19_reg_201_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(sdiv_17ns_32ns_6_21_seq_1_U2_n_5),
        .Q(sdiv_ln19_reg_201[0]),
        .R(1'b0));
  FDRE \sdiv_ln19_reg_201_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(sdiv_17ns_32ns_6_21_seq_1_U2_n_4),
        .Q(sdiv_ln19_reg_201[1]),
        .R(1'b0));
  FDRE \sdiv_ln19_reg_201_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(sdiv_17ns_32ns_6_21_seq_1_U2_n_3),
        .Q(sdiv_ln19_reg_201[2]),
        .R(1'b0));
  FDRE \sdiv_ln19_reg_201_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(sdiv_17ns_32ns_6_21_seq_1_U2_n_2),
        .Q(sdiv_ln19_reg_201[3]),
        .R(1'b0));
  FDRE \sdiv_ln19_reg_201_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(sdiv_17ns_32ns_6_21_seq_1_U2_n_1),
        .Q(sdiv_ln19_reg_201[4]),
        .R(1'b0));
  FDRE \sdiv_ln19_reg_201_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(sdiv_17ns_32ns_6_21_seq_1_U2_n_0),
        .Q(sdiv_ln19_reg_201[5]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_211_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sdiv_10ns_17ns_8_14_seq_1_U3_n_7),
        .Q(sdiv_ln21_reg_211[0]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_211_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sdiv_10ns_17ns_8_14_seq_1_U3_n_6),
        .Q(sdiv_ln21_reg_211[1]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_211_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sdiv_10ns_17ns_8_14_seq_1_U3_n_5),
        .Q(sdiv_ln21_reg_211[2]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_211_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sdiv_10ns_17ns_8_14_seq_1_U3_n_4),
        .Q(sdiv_ln21_reg_211[3]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_211_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sdiv_10ns_17ns_8_14_seq_1_U3_n_3),
        .Q(sdiv_ln21_reg_211[4]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_211_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sdiv_10ns_17ns_8_14_seq_1_U3_n_2),
        .Q(sdiv_ln21_reg_211[5]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_211_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sdiv_10ns_17ns_8_14_seq_1_U3_n_1),
        .Q(sdiv_ln21_reg_211[6]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_211_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sdiv_10ns_17ns_8_14_seq_1_U3_n_0),
        .Q(sdiv_ln21_reg_211[7]),
        .R(1'b0));
  FDRE \trunc_ln17_reg_181_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(p_5[0]),
        .Q(trunc_ln17_reg_181[0]),
        .R(1'b0));
  FDRE \trunc_ln17_reg_181_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(p_5[1]),
        .Q(trunc_ln17_reg_181[1]),
        .R(1'b0));
  FDRE \trunc_ln17_reg_181_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(p_5[2]),
        .Q(trunc_ln17_reg_181[2]),
        .R(1'b0));
  FDRE \trunc_ln17_reg_181_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(p_5[3]),
        .Q(trunc_ln17_reg_181[3]),
        .R(1'b0));
  FDRE \trunc_ln17_reg_181_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(p_5[4]),
        .Q(trunc_ln17_reg_181[4]),
        .R(1'b0));
  FDRE \trunc_ln17_reg_181_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(p_5[5]),
        .Q(trunc_ln17_reg_181[5]),
        .R(1'b0));
  FDRE \trunc_ln17_reg_181_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(p_5[6]),
        .Q(trunc_ln17_reg_181[6]),
        .R(1'b0));
  FDRE \trunc_ln17_reg_181_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(p_5[7]),
        .Q(trunc_ln17_reg_181[7]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'h5555445555554504)) 
    \trunc_ln18_reg_206[0]_i_1 
       (.I0(sdiv_ln19_reg_201[5]),
        .I1(sdiv_ln19_reg_201[0]),
        .I2(sdiv_ln19_reg_201[2]),
        .I3(sdiv_ln19_reg_201[1]),
        .I4(sdiv_ln19_reg_201[4]),
        .I5(sdiv_ln19_reg_201[3]),
        .O(\trunc_ln18_reg_206[0]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h1555555155115505)) 
    \trunc_ln18_reg_206[1]_i_1 
       (.I0(sdiv_ln19_reg_201[5]),
        .I1(sdiv_ln19_reg_201[0]),
        .I2(sdiv_ln19_reg_201[2]),
        .I3(sdiv_ln19_reg_201[4]),
        .I4(sdiv_ln19_reg_201[3]),
        .I5(sdiv_ln19_reg_201[1]),
        .O(\trunc_ln18_reg_206[1]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0555545455555405)) 
    \trunc_ln18_reg_206[2]_i_1 
       (.I0(sdiv_ln19_reg_201[5]),
        .I1(sdiv_ln19_reg_201[0]),
        .I2(sdiv_ln19_reg_201[1]),
        .I3(sdiv_ln19_reg_201[2]),
        .I4(sdiv_ln19_reg_201[4]),
        .I5(sdiv_ln19_reg_201[3]),
        .O(\trunc_ln18_reg_206[2]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0551551015555551)) 
    \trunc_ln18_reg_206[3]_i_1 
       (.I0(sdiv_ln19_reg_201[5]),
        .I1(sdiv_ln19_reg_201[0]),
        .I2(sdiv_ln19_reg_201[3]),
        .I3(sdiv_ln19_reg_201[4]),
        .I4(sdiv_ln19_reg_201[2]),
        .I5(sdiv_ln19_reg_201[1]),
        .O(\trunc_ln18_reg_206[3]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0055554555554540)) 
    \trunc_ln18_reg_206[4]_i_1 
       (.I0(sdiv_ln19_reg_201[5]),
        .I1(sdiv_ln19_reg_201[0]),
        .I2(sdiv_ln19_reg_201[1]),
        .I3(sdiv_ln19_reg_201[2]),
        .I4(sdiv_ln19_reg_201[4]),
        .I5(sdiv_ln19_reg_201[3]),
        .O(\trunc_ln18_reg_206[4]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0015555155555150)) 
    \trunc_ln18_reg_206[5]_i_1 
       (.I0(sdiv_ln19_reg_201[5]),
        .I1(sdiv_ln19_reg_201[0]),
        .I2(sdiv_ln19_reg_201[1]),
        .I3(sdiv_ln19_reg_201[2]),
        .I4(sdiv_ln19_reg_201[4]),
        .I5(sdiv_ln19_reg_201[3]),
        .O(\trunc_ln18_reg_206[5]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0055055555545454)) 
    \trunc_ln18_reg_206[6]_i_1 
       (.I0(sdiv_ln19_reg_201[5]),
        .I1(sdiv_ln19_reg_201[0]),
        .I2(sdiv_ln19_reg_201[1]),
        .I3(sdiv_ln19_reg_201[3]),
        .I4(sdiv_ln19_reg_201[2]),
        .I5(sdiv_ln19_reg_201[4]),
        .O(\trunc_ln18_reg_206[6]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0055551501555515)) 
    \trunc_ln18_reg_206[7]_i_1 
       (.I0(sdiv_ln19_reg_201[5]),
        .I1(sdiv_ln19_reg_201[0]),
        .I2(sdiv_ln19_reg_201[1]),
        .I3(sdiv_ln19_reg_201[3]),
        .I4(sdiv_ln19_reg_201[4]),
        .I5(sdiv_ln19_reg_201[2]),
        .O(\trunc_ln18_reg_206[7]_i_1_n_0 ));
  FDRE \trunc_ln18_reg_206_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(\trunc_ln18_reg_206[0]_i_1_n_0 ),
        .Q(trunc_ln18_reg_206[0]),
        .R(1'b0));
  FDRE \trunc_ln18_reg_206_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(\trunc_ln18_reg_206[1]_i_1_n_0 ),
        .Q(trunc_ln18_reg_206[1]),
        .R(1'b0));
  FDRE \trunc_ln18_reg_206_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(\trunc_ln18_reg_206[2]_i_1_n_0 ),
        .Q(trunc_ln18_reg_206[2]),
        .R(1'b0));
  FDRE \trunc_ln18_reg_206_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(\trunc_ln18_reg_206[3]_i_1_n_0 ),
        .Q(trunc_ln18_reg_206[3]),
        .R(1'b0));
  FDRE \trunc_ln18_reg_206_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(\trunc_ln18_reg_206[4]_i_1_n_0 ),
        .Q(trunc_ln18_reg_206[4]),
        .R(1'b0));
  FDRE \trunc_ln18_reg_206_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(\trunc_ln18_reg_206[5]_i_1_n_0 ),
        .Q(trunc_ln18_reg_206[5]),
        .R(1'b0));
  FDRE \trunc_ln18_reg_206_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(\trunc_ln18_reg_206[6]_i_1_n_0 ),
        .Q(trunc_ln18_reg_206[6]),
        .R(1'b0));
  FDRE \trunc_ln18_reg_206_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(\trunc_ln18_reg_206[7]_i_1_n_0 ),
        .Q(trunc_ln18_reg_206[7]),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_udiv_15ns_17ns_8_19_seq_1 udiv_15ns_17ns_8_19_seq_1_U1
       (.D(or_ln20_fu_131_p2),
        .E(start0),
        .Q(ap_CS_fsm_state1),
        .add_ln17_fu_126_p2(add_ln17_fu_126_p2),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p_5(p_5),
        .\r_stage_reg[0] (udiv_15ns_17ns_8_19_seq_1_U1_n_1),
        .\r_stage_reg[15] (done0),
        .r_stage_reg_r_7(udiv_15ns_17ns_8_19_seq_1_U1_n_2));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_10ns_17ns_8_14_seq_1
   (\quot_reg[7] ,
    Q,
    ap_clk,
    ap_rst,
    \r_stage_reg[10] ,
    p_11);
  output [7:0]\quot_reg[7] ;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[10] ;
  input [15:0]p_11;

  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire [15:0]p_11;
  wire [7:0]\quot_reg[7] ;
  wire \r_stage_reg[10] ;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_10ns_17ns_8_14_seq_1_div fn1_sdiv_10ns_17ns_8_14_seq_1_div_U
       (.Q(Q),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .p_11(p_11),
        .\quot_reg[7]_0 (\quot_reg[7] ),
        .\r_stage_reg[10] (\r_stage_reg[10] ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_10ns_17ns_8_14_seq_1_div
   (\quot_reg[7]_0 ,
    Q,
    ap_clk,
    ap_rst,
    \r_stage_reg[10] ,
    p_11);
  output [7:0]\quot_reg[7]_0 ;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[10] ;
  input [15:0]p_11;

  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire \divisor0[10]_inv_i_1_n_0 ;
  wire \divisor0[11]_inv_i_1_n_0 ;
  wire \divisor0[12]_i_2__0_n_0 ;
  wire \divisor0[12]_i_3_n_0 ;
  wire \divisor0[12]_i_4_n_0 ;
  wire \divisor0[12]_i_5_n_0 ;
  wire \divisor0[12]_inv_i_1_n_0 ;
  wire \divisor0[12]_inv_i_3_n_0 ;
  wire \divisor0[12]_inv_i_4_n_0 ;
  wire \divisor0[12]_inv_i_5_n_0 ;
  wire \divisor0[12]_inv_i_6_n_0 ;
  wire \divisor0[13]_inv_i_1_n_0 ;
  wire \divisor0[14]_inv_i_1_n_0 ;
  wire \divisor0[15]_inv_i_1_n_0 ;
  wire \divisor0[16]_i_2_n_0 ;
  wire \divisor0[16]_i_3_n_0 ;
  wire \divisor0[16]_i_4_n_0 ;
  wire \divisor0[16]_inv_i_1_n_0 ;
  wire \divisor0[16]_inv_i_3_n_0 ;
  wire \divisor0[16]_inv_i_4_n_0 ;
  wire \divisor0[16]_inv_i_5_n_0 ;
  wire \divisor0[16]_inv_i_6_n_0 ;
  wire \divisor0[1]_i_1_n_0 ;
  wire \divisor0[2]_i_1_n_0 ;
  wire \divisor0[3]_i_1_n_0 ;
  wire \divisor0[4]_i_1_n_0 ;
  wire \divisor0[4]_i_2__0_n_0 ;
  wire \divisor0[4]_i_3__0_n_0 ;
  wire \divisor0[4]_i_3_n_0 ;
  wire \divisor0[4]_i_4__0_n_0 ;
  wire \divisor0[4]_i_4_n_0 ;
  wire \divisor0[4]_i_5__0_n_0 ;
  wire \divisor0[4]_i_5_n_0 ;
  wire \divisor0[4]_i_6__0_n_0 ;
  wire \divisor0[4]_i_6_n_0 ;
  wire \divisor0[4]_i_7_n_0 ;
  wire \divisor0[5]_i_1_n_0 ;
  wire \divisor0[6]_i_1_n_0 ;
  wire \divisor0[7]_i_1_n_0 ;
  wire \divisor0[8]_i_1_n_0 ;
  wire \divisor0[8]_i_2__0_n_0 ;
  wire \divisor0[8]_i_3__0_n_0 ;
  wire \divisor0[8]_i_3_n_0 ;
  wire \divisor0[8]_i_4__0_n_0 ;
  wire \divisor0[8]_i_4_n_0 ;
  wire \divisor0[8]_i_5__0_n_0 ;
  wire \divisor0[8]_i_5_n_0 ;
  wire \divisor0[8]_i_6_n_0 ;
  wire \divisor0[9]_i_1_n_0 ;
  wire \divisor0_reg[12]_i_1__0_n_0 ;
  wire \divisor0_reg[12]_i_1__0_n_1 ;
  wire \divisor0_reg[12]_i_1__0_n_2 ;
  wire \divisor0_reg[12]_i_1__0_n_3 ;
  wire \divisor0_reg[12]_inv_i_2_n_0 ;
  wire \divisor0_reg[12]_inv_i_2_n_1 ;
  wire \divisor0_reg[12]_inv_i_2_n_2 ;
  wire \divisor0_reg[12]_inv_i_2_n_3 ;
  wire \divisor0_reg[12]_inv_i_2_n_4 ;
  wire \divisor0_reg[12]_inv_i_2_n_5 ;
  wire \divisor0_reg[12]_inv_i_2_n_6 ;
  wire \divisor0_reg[12]_inv_i_2_n_7 ;
  wire \divisor0_reg[16]_i_1__0_n_1 ;
  wire \divisor0_reg[16]_i_1__0_n_2 ;
  wire \divisor0_reg[16]_i_1__0_n_3 ;
  wire \divisor0_reg[16]_inv_i_2_n_1 ;
  wire \divisor0_reg[16]_inv_i_2_n_2 ;
  wire \divisor0_reg[16]_inv_i_2_n_3 ;
  wire \divisor0_reg[16]_inv_i_2_n_4 ;
  wire \divisor0_reg[16]_inv_i_2_n_5 ;
  wire \divisor0_reg[16]_inv_i_2_n_6 ;
  wire \divisor0_reg[16]_inv_i_2_n_7 ;
  wire \divisor0_reg[4]_i_1__0_n_0 ;
  wire \divisor0_reg[4]_i_1__0_n_1 ;
  wire \divisor0_reg[4]_i_1__0_n_2 ;
  wire \divisor0_reg[4]_i_1__0_n_3 ;
  wire \divisor0_reg[4]_i_2__0_n_0 ;
  wire \divisor0_reg[4]_i_2__0_n_1 ;
  wire \divisor0_reg[4]_i_2__0_n_2 ;
  wire \divisor0_reg[4]_i_2__0_n_3 ;
  wire \divisor0_reg[4]_i_2__0_n_4 ;
  wire \divisor0_reg[4]_i_2__0_n_5 ;
  wire \divisor0_reg[4]_i_2__0_n_6 ;
  wire \divisor0_reg[4]_i_2__0_n_7 ;
  wire \divisor0_reg[8]_i_1__0_n_0 ;
  wire \divisor0_reg[8]_i_1__0_n_1 ;
  wire \divisor0_reg[8]_i_1__0_n_2 ;
  wire \divisor0_reg[8]_i_1__0_n_3 ;
  wire \divisor0_reg[8]_i_2__0_n_0 ;
  wire \divisor0_reg[8]_i_2__0_n_1 ;
  wire \divisor0_reg[8]_i_2__0_n_2 ;
  wire \divisor0_reg[8]_i_2__0_n_3 ;
  wire \divisor0_reg[8]_i_2__0_n_4 ;
  wire \divisor0_reg[8]_i_2__0_n_5 ;
  wire \divisor0_reg[8]_i_2__0_n_6 ;
  wire \divisor0_reg[8]_i_2__0_n_7 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[11] ;
  wire \divisor0_reg_n_0_[12] ;
  wire \divisor0_reg_n_0_[13] ;
  wire \divisor0_reg_n_0_[14] ;
  wire \divisor0_reg_n_0_[15] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0;
  wire fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_1;
  wire fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_2;
  wire fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_3;
  wire fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_4;
  wire fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_5;
  wire fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_6;
  wire fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_7;
  wire fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_8;
  wire [16:1]grp_fu_112_p1;
  wire p_0_in;
  wire [15:0]p_11;
  wire [7:0]\quot_reg[7]_0 ;
  wire \r_stage_reg[10] ;
  wire start0_reg_n_0;
  wire [3:3]\NLW_divisor0_reg[16]_i_1__0_CO_UNCONNECTED ;
  wire [3:3]\NLW_divisor0_reg[16]_inv_i_2_CO_UNCONNECTED ;

  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[10]_inv_i_1 
       (.I0(\divisor0_reg[12]_inv_i_2_n_6 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[10] ),
        .O(\divisor0[10]_inv_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[11]_inv_i_1 
       (.I0(\divisor0_reg[12]_inv_i_2_n_5 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[11] ),
        .O(\divisor0[11]_inv_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_2__0 
       (.I0(p_11[9]),
        .O(\divisor0[12]_i_2__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_3 
       (.I0(p_11[12]),
        .O(\divisor0[12]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_4 
       (.I0(p_11[11]),
        .O(\divisor0[12]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_5 
       (.I0(p_11[10]),
        .O(\divisor0[12]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[12]_inv_i_1 
       (.I0(\divisor0_reg[12]_inv_i_2_n_4 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[12] ),
        .O(\divisor0[12]_inv_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_inv_i_3 
       (.I0(\divisor0_reg_n_0_[12] ),
        .O(\divisor0[12]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[11] ),
        .O(\divisor0[12]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[10] ),
        .O(\divisor0[12]_inv_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_inv_i_6 
       (.I0(\divisor0_reg_n_0_[9] ),
        .O(\divisor0[12]_inv_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[13]_inv_i_1 
       (.I0(\divisor0_reg[16]_inv_i_2_n_7 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[13] ),
        .O(\divisor0[13]_inv_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[14]_inv_i_1 
       (.I0(\divisor0_reg[16]_inv_i_2_n_6 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[14] ),
        .O(\divisor0[14]_inv_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[15]_inv_i_1 
       (.I0(\divisor0_reg[16]_inv_i_2_n_5 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[15] ),
        .O(\divisor0[15]_inv_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_2 
       (.I0(p_11[15]),
        .O(\divisor0[16]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_3 
       (.I0(p_11[14]),
        .O(\divisor0[16]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_4 
       (.I0(p_11[13]),
        .O(\divisor0[16]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT2 #(
    .INIT(4'h7)) 
    \divisor0[16]_inv_i_1 
       (.I0(p_0_in),
        .I1(\divisor0_reg[16]_inv_i_2_n_4 ),
        .O(\divisor0[16]_inv_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_inv_i_3 
       (.I0(p_0_in),
        .O(\divisor0[16]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[15] ),
        .O(\divisor0[16]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[14] ),
        .O(\divisor0[16]_inv_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_inv_i_6 
       (.I0(\divisor0_reg_n_0_[13] ),
        .O(\divisor0[16]_inv_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[1]_i_1 
       (.I0(\divisor0_reg[4]_i_2__0_n_7 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(\divisor0[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[2]_i_1 
       (.I0(\divisor0_reg[4]_i_2__0_n_6 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(\divisor0[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[3]_i_1 
       (.I0(\divisor0_reg[4]_i_2__0_n_5 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(\divisor0[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[4]_i_1 
       (.I0(\divisor0_reg[4]_i_2__0_n_4 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(\divisor0[4]_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_2__0 
       (.I0(p_11[0]),
        .O(\divisor0[4]_i_2__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3 
       (.I0(p_11[4]),
        .O(\divisor0[4]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3__0 
       (.I0(\divisor0_reg_n_0_[0] ),
        .O(\divisor0[4]_i_3__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_4 
       (.I0(p_11[3]),
        .O(\divisor0[4]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_4__0 
       (.I0(\divisor0_reg_n_0_[4] ),
        .O(\divisor0[4]_i_4__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_5 
       (.I0(p_11[2]),
        .O(\divisor0[4]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_5__0 
       (.I0(\divisor0_reg_n_0_[3] ),
        .O(\divisor0[4]_i_5__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_6 
       (.I0(p_11[1]),
        .O(\divisor0[4]_i_6_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_6__0 
       (.I0(\divisor0_reg_n_0_[2] ),
        .O(\divisor0[4]_i_6__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_7 
       (.I0(\divisor0_reg_n_0_[1] ),
        .O(\divisor0[4]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[5]_i_1 
       (.I0(\divisor0_reg[8]_i_2__0_n_7 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(\divisor0[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[6]_i_1 
       (.I0(\divisor0_reg[8]_i_2__0_n_6 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(\divisor0[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[7]_i_1 
       (.I0(\divisor0_reg[8]_i_2__0_n_5 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(\divisor0[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[8]_i_1 
       (.I0(\divisor0_reg[8]_i_2__0_n_4 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(\divisor0[8]_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_2__0 
       (.I0(p_11[8]),
        .O(\divisor0[8]_i_2__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3 
       (.I0(\divisor0_reg_n_0_[8] ),
        .O(\divisor0[8]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3__0 
       (.I0(p_11[5]),
        .O(\divisor0[8]_i_3__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_4 
       (.I0(p_11[7]),
        .O(\divisor0[8]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_4__0 
       (.I0(\divisor0_reg_n_0_[7] ),
        .O(\divisor0[8]_i_4__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_5 
       (.I0(p_11[6]),
        .O(\divisor0[8]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_5__0 
       (.I0(\divisor0_reg_n_0_[6] ),
        .O(\divisor0[8]_i_5__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_6 
       (.I0(\divisor0_reg_n_0_[5] ),
        .O(\divisor0[8]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[9]_i_1 
       (.I0(\divisor0_reg[12]_inv_i_2_n_7 ),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(\divisor0[9]_i_1_n_0 ));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_11[0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[12]_i_1__0 
       (.CI(\divisor0_reg[8]_i_1__0_n_0 ),
        .CO({\divisor0_reg[12]_i_1__0_n_0 ,\divisor0_reg[12]_i_1__0_n_1 ,\divisor0_reg[12]_i_1__0_n_2 ,\divisor0_reg[12]_i_1__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\divisor0[12]_i_2__0_n_0 }),
        .O(grp_fu_112_p1[12:9]),
        .S({\divisor0[12]_i_3_n_0 ,\divisor0[12]_i_4_n_0 ,\divisor0[12]_i_5_n_0 ,p_11[9]}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[12]_inv_i_2 
       (.CI(\divisor0_reg[8]_i_2__0_n_0 ),
        .CO({\divisor0_reg[12]_inv_i_2_n_0 ,\divisor0_reg[12]_inv_i_2_n_1 ,\divisor0_reg[12]_inv_i_2_n_2 ,\divisor0_reg[12]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\divisor0_reg[12]_inv_i_2_n_4 ,\divisor0_reg[12]_inv_i_2_n_5 ,\divisor0_reg[12]_inv_i_2_n_6 ,\divisor0_reg[12]_inv_i_2_n_7 }),
        .S({\divisor0[12]_inv_i_3_n_0 ,\divisor0[12]_inv_i_4_n_0 ,\divisor0[12]_inv_i_5_n_0 ,\divisor0[12]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[16]),
        .Q(p_0_in),
        .R(1'b0));
  CARRY4 \divisor0_reg[16]_i_1__0 
       (.CI(\divisor0_reg[12]_i_1__0_n_0 ),
        .CO({\NLW_divisor0_reg[16]_i_1__0_CO_UNCONNECTED [3],\divisor0_reg[16]_i_1__0_n_1 ,\divisor0_reg[16]_i_1__0_n_2 ,\divisor0_reg[16]_i_1__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b1,1'b0,1'b0}),
        .O(grp_fu_112_p1[16:13]),
        .S({1'b1,\divisor0[16]_i_2_n_0 ,\divisor0[16]_i_3_n_0 ,\divisor0[16]_i_4_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[16]_inv_i_2 
       (.CI(\divisor0_reg[12]_inv_i_2_n_0 ),
        .CO({\NLW_divisor0_reg[16]_inv_i_2_CO_UNCONNECTED [3],\divisor0_reg[16]_inv_i_2_n_1 ,\divisor0_reg[16]_inv_i_2_n_2 ,\divisor0_reg[16]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\divisor0_reg[16]_inv_i_2_n_4 ,\divisor0_reg[16]_inv_i_2_n_5 ,\divisor0_reg[16]_inv_i_2_n_6 ,\divisor0_reg[16]_inv_i_2_n_7 }),
        .S({\divisor0[16]_inv_i_3_n_0 ,\divisor0[16]_inv_i_4_n_0 ,\divisor0[16]_inv_i_5_n_0 ,\divisor0[16]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[4]_i_1__0 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_1__0_n_0 ,\divisor0_reg[4]_i_1__0_n_1 ,\divisor0_reg[4]_i_1__0_n_2 ,\divisor0_reg[4]_i_1__0_n_3 }),
        .CYINIT(\divisor0[4]_i_2__0_n_0 ),
        .DI({\divisor0[4]_i_3_n_0 ,\divisor0[4]_i_4_n_0 ,\divisor0[4]_i_5_n_0 ,\divisor0[4]_i_6_n_0 }),
        .O(grp_fu_112_p1[4:1]),
        .S(p_11[4:1]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[4]_i_2__0 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_2__0_n_0 ,\divisor0_reg[4]_i_2__0_n_1 ,\divisor0_reg[4]_i_2__0_n_2 ,\divisor0_reg[4]_i_2__0_n_3 }),
        .CYINIT(\divisor0[4]_i_3__0_n_0 ),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\divisor0_reg[4]_i_2__0_n_4 ,\divisor0_reg[4]_i_2__0_n_5 ,\divisor0_reg[4]_i_2__0_n_6 ,\divisor0_reg[4]_i_2__0_n_7 }),
        .S({\divisor0[4]_i_4__0_n_0 ,\divisor0[4]_i_5__0_n_0 ,\divisor0[4]_i_6__0_n_0 ,\divisor0[4]_i_7_n_0 }));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[8]_i_1__0 
       (.CI(\divisor0_reg[4]_i_1__0_n_0 ),
        .CO({\divisor0_reg[8]_i_1__0_n_0 ,\divisor0_reg[8]_i_1__0_n_1 ,\divisor0_reg[8]_i_1__0_n_2 ,\divisor0_reg[8]_i_1__0_n_3 }),
        .CYINIT(1'b0),
        .DI({\divisor0[8]_i_2__0_n_0 ,1'b0,1'b0,\divisor0[8]_i_3__0_n_0 }),
        .O(grp_fu_112_p1[8:5]),
        .S({p_11[8],\divisor0[8]_i_4_n_0 ,\divisor0[8]_i_5_n_0 ,p_11[5]}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[8]_i_2__0 
       (.CI(\divisor0_reg[4]_i_2__0_n_0 ),
        .CO({\divisor0_reg[8]_i_2__0_n_0 ,\divisor0_reg[8]_i_2__0_n_1 ,\divisor0_reg[8]_i_2__0_n_2 ,\divisor0_reg[8]_i_2__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\divisor0_reg[8]_i_2__0_n_4 ,\divisor0_reg[8]_i_2__0_n_5 ,\divisor0_reg[8]_i_2__0_n_6 ,\divisor0_reg[8]_i_2__0_n_7 }),
        .S({\divisor0[8]_i_3_n_0 ,\divisor0[8]_i_4__0_n_0 ,\divisor0[8]_i_5__0_n_0 ,\divisor0[8]_i_6_n_0 }));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_112_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_10ns_17ns_8_14_seq_1_div_u fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0
       (.D({\divisor0[16]_inv_i_1_n_0 ,\divisor0[15]_inv_i_1_n_0 ,\divisor0[14]_inv_i_1_n_0 ,\divisor0[13]_inv_i_1_n_0 ,\divisor0[12]_inv_i_1_n_0 ,\divisor0[11]_inv_i_1_n_0 ,\divisor0[10]_inv_i_1_n_0 ,\divisor0[9]_i_1_n_0 ,\divisor0[8]_i_1_n_0 ,\divisor0[7]_i_1_n_0 ,\divisor0[6]_i_1_n_0 ,\divisor0[5]_i_1_n_0 ,\divisor0[4]_i_1_n_0 ,\divisor0[3]_i_1_n_0 ,\divisor0[2]_i_1_n_0 ,\divisor0[1]_i_1_n_0 }),
        .E(start0_reg_n_0),
        .Q({p_0_in,\divisor0_reg_n_0_[0] }),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\dividend_tmp_reg[0]_0 (fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_1),
        .\dividend_tmp_reg[5]_0 ({fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_2,fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_3,fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_4,fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_5,fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_6,fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_7,fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_8}),
        .\r_stage_reg[10]_0 (fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0),
        .\r_stage_reg[10]_1 (\r_stage_reg[10] ));
  FDRE \quot_reg[0] 
       (.C(ap_clk),
        .CE(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0),
        .D(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_1),
        .Q(\quot_reg[7]_0 [0]),
        .R(1'b0));
  FDRE \quot_reg[1] 
       (.C(ap_clk),
        .CE(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0),
        .D(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_8),
        .Q(\quot_reg[7]_0 [1]),
        .R(1'b0));
  FDRE \quot_reg[2] 
       (.C(ap_clk),
        .CE(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0),
        .D(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_7),
        .Q(\quot_reg[7]_0 [2]),
        .R(1'b0));
  FDRE \quot_reg[3] 
       (.C(ap_clk),
        .CE(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0),
        .D(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_6),
        .Q(\quot_reg[7]_0 [3]),
        .R(1'b0));
  FDRE \quot_reg[4] 
       (.C(ap_clk),
        .CE(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0),
        .D(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_5),
        .Q(\quot_reg[7]_0 [4]),
        .R(1'b0));
  FDRE \quot_reg[5] 
       (.C(ap_clk),
        .CE(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0),
        .D(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_4),
        .Q(\quot_reg[7]_0 [5]),
        .R(1'b0));
  FDRE \quot_reg[6] 
       (.C(ap_clk),
        .CE(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0),
        .D(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_3),
        .Q(\quot_reg[7]_0 [6]),
        .R(1'b0));
  FDRE \quot_reg[7] 
       (.C(ap_clk),
        .CE(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_0),
        .D(fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0_n_2),
        .Q(\quot_reg[7]_0 [7]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q),
        .Q(start0_reg_n_0),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_10ns_17ns_8_14_seq_1_div_u
   (\r_stage_reg[10]_0 ,
    \dividend_tmp_reg[0]_0 ,
    \dividend_tmp_reg[5]_0 ,
    ap_rst,
    E,
    ap_clk,
    Q,
    \r_stage_reg[10]_1 ,
    D);
  output [0:0]\r_stage_reg[10]_0 ;
  output [0:0]\dividend_tmp_reg[0]_0 ;
  output [6:0]\dividend_tmp_reg[5]_0 ;
  input ap_rst;
  input [0:0]E;
  input ap_clk;
  input [1:0]Q;
  input \r_stage_reg[10]_1 ;
  input [15:0]D;

  wire \0 ;
  wire [15:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire cal_tmp_carry__0_i_1__1_n_0;
  wire cal_tmp_carry__0_i_2__1_n_0;
  wire cal_tmp_carry__0_i_3__1_n_0;
  wire cal_tmp_carry__0_i_4__1_n_0;
  wire cal_tmp_carry__0_i_5__1_n_0;
  wire cal_tmp_carry__0_i_6__1_n_0;
  wire cal_tmp_carry__0_i_7__1_n_0;
  wire cal_tmp_carry__0_i_8__1_n_0;
  wire cal_tmp_carry__0_n_0;
  wire cal_tmp_carry__0_n_1;
  wire cal_tmp_carry__0_n_2;
  wire cal_tmp_carry__0_n_3;
  wire cal_tmp_carry__0_n_4;
  wire cal_tmp_carry__0_n_5;
  wire cal_tmp_carry__0_n_6;
  wire cal_tmp_carry__0_n_7;
  wire cal_tmp_carry__1_i_1__1_n_0;
  wire cal_tmp_carry__1_i_2__1_n_0;
  wire cal_tmp_carry__1_i_3__1_n_0;
  wire cal_tmp_carry__1_i_4__1_n_0;
  wire cal_tmp_carry__1_n_0;
  wire cal_tmp_carry__1_n_1;
  wire cal_tmp_carry__1_n_2;
  wire cal_tmp_carry__1_n_3;
  wire cal_tmp_carry__1_n_7;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
  wire cal_tmp_carry_i_1__1_n_0;
  wire cal_tmp_carry_i_2__1_n_0;
  wire cal_tmp_carry_i_3__1_n_0;
  wire cal_tmp_carry_i_4__1_n_0;
  wire cal_tmp_carry_i_5__1_n_0;
  wire cal_tmp_carry_i_6__1_n_0;
  wire cal_tmp_carry_i_7__1_n_0;
  wire cal_tmp_carry_i_8__1_n_0;
  wire cal_tmp_carry_n_0;
  wire cal_tmp_carry_n_1;
  wire cal_tmp_carry_n_2;
  wire cal_tmp_carry_n_3;
  wire cal_tmp_carry_n_4;
  wire cal_tmp_carry_n_5;
  wire cal_tmp_carry_n_6;
  wire cal_tmp_carry_n_7;
  wire \dividend_tmp[9]_i_1__1_n_0 ;
  wire [0:0]\dividend_tmp_reg[0]_0 ;
  wire [6:0]\dividend_tmp_reg[5]_0 ;
  wire \dividend_tmp_reg_n_0_[1] ;
  wire \dividend_tmp_reg_n_0_[2] ;
  wire \dividend_tmp_reg_n_0_[3] ;
  wire \dividend_tmp_reg_n_0_[4] ;
  wire \dividend_tmp_reg_n_0_[5] ;
  wire \dividend_tmp_reg_n_0_[6] ;
  wire \dividend_tmp_reg_n_0_[7] ;
  wire \dividend_tmp_reg_n_0_[8] ;
  wire \dividend_tmp_reg_n_0_[9] ;
  wire \divisor0_reg[10]_inv_n_0 ;
  wire \divisor0_reg[11]_inv_n_0 ;
  wire \divisor0_reg[12]_inv_n_0 ;
  wire \divisor0_reg[13]_inv_n_0 ;
  wire \divisor0_reg[14]_inv_n_0 ;
  wire \divisor0_reg[15]_inv_n_0 ;
  wire \divisor0_reg[16]_inv_n_0 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire p_0_in;
  wire [0:0]p_2_out;
  wire \quot[7]_i_2_n_0 ;
  wire [0:0]\r_stage_reg[10]_0 ;
  wire \r_stage_reg[10]_1 ;
  wire \r_stage_reg[8]_srl8___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_6_n_0 ;
  wire \r_stage_reg[9]_udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_7_n_0 ;
  wire r_stage_reg_gate_n_0;
  wire \r_stage_reg_n_0_[0] ;
  wire \remd_tmp[0]_i_1__1_n_0 ;
  wire \remd_tmp[1]_i_1__1_n_0 ;
  wire \remd_tmp[2]_i_1__1_n_0 ;
  wire \remd_tmp[3]_i_1__1_n_0 ;
  wire \remd_tmp[4]_i_1__1_n_0 ;
  wire \remd_tmp[5]_i_1__1_n_0 ;
  wire \remd_tmp[6]_i_1__1_n_0 ;
  wire \remd_tmp[7]_i_1__1_n_0 ;
  wire \remd_tmp[8]_i_1__1_n_0 ;
  wire \remd_tmp_reg_n_0_[0] ;
  wire \remd_tmp_reg_n_0_[1] ;
  wire \remd_tmp_reg_n_0_[2] ;
  wire \remd_tmp_reg_n_0_[3] ;
  wire \remd_tmp_reg_n_0_[4] ;
  wire \remd_tmp_reg_n_0_[5] ;
  wire \remd_tmp_reg_n_0_[6] ;
  wire \remd_tmp_reg_n_0_[7] ;
  wire \remd_tmp_reg_n_0_[8] ;
  wire [3:1]NLW_cal_tmp_carry__1_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__2_O_UNCONNECTED;
  wire [3:1]NLW_cal_tmp_carry__3_CO_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({cal_tmp_carry_i_1__1_n_0,cal_tmp_carry_i_2__1_n_0,cal_tmp_carry_i_3__1_n_0,cal_tmp_carry_i_4__1_n_0}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_5__1_n_0,cal_tmp_carry_i_6__1_n_0,cal_tmp_carry_i_7__1_n_0,cal_tmp_carry_i_8__1_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__0_i_1__1_n_0,cal_tmp_carry__0_i_2__1_n_0,cal_tmp_carry__0_i_3__1_n_0,cal_tmp_carry__0_i_4__1_n_0}),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_5__1_n_0,cal_tmp_carry__0_i_6__1_n_0,cal_tmp_carry__0_i_7__1_n_0,cal_tmp_carry__0_i_8__1_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1__1
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_1__1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2__1
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_2__1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3__1
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_3__1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4__1
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_4__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[6] ),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_5__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_6__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[4] ),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_7__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_8__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[3] ),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_8__1_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,cal_tmp_carry__1_i_1__1_n_0,cal_tmp_carry__1_i_2__1_n_0}),
        .O({NLW_cal_tmp_carry__1_O_UNCONNECTED[3:1],cal_tmp_carry__1_n_7}),
        .S({\divisor0_reg[11]_inv_n_0 ,\divisor0_reg[10]_inv_n_0 ,cal_tmp_carry__1_i_3__1_n_0,cal_tmp_carry__1_i_4__1_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_1__1
       (.I0(\remd_tmp_reg_n_0_[8] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_1__1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_2__1
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_2__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_3__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[8] ),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_3__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_4__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[7] ),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_4__1_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__2_O_UNCONNECTED[3:0]),
        .S({\divisor0_reg[15]_inv_n_0 ,\divisor0_reg[14]_inv_n_0 ,\divisor0_reg[13]_inv_n_0 ,\divisor0_reg[12]_inv_n_0 }));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({NLW_cal_tmp_carry__3_CO_UNCONNECTED[3:1],p_2_out}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__3_O_UNCONNECTED[3:2],p_0_in,NLW_cal_tmp_carry__3_O_UNCONNECTED[0]}),
        .S({1'b0,1'b0,1'b1,\divisor0_reg[16]_inv_n_0 }));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1__1
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_1__1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2__1
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_2__1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3__1
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_3__1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_4__1
       (.I0(\dividend_tmp_reg_n_0_[9] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_4__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[2] ),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_5__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_6__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_7__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[0] ),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_7__1_n_0));
  LUT3 #(
    .INIT(8'h2D)) 
    cal_tmp_carry_i_8__1
       (.I0(\dividend_tmp_reg_n_0_[9] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_8__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[9]_i_1__1 
       (.I0(\dividend_tmp_reg_n_0_[8] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[9]_i_1__1_n_0 ));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_2_out),
        .Q(\dividend_tmp_reg[0]_0 ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg[0]_0 ),
        .Q(\dividend_tmp_reg_n_0_[1] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[1] ),
        .Q(\dividend_tmp_reg_n_0_[2] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[2] ),
        .Q(\dividend_tmp_reg_n_0_[3] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[3] ),
        .Q(\dividend_tmp_reg_n_0_[4] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[4] ),
        .Q(\dividend_tmp_reg_n_0_[5] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[5] ),
        .Q(\dividend_tmp_reg_n_0_[6] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[6] ),
        .Q(\dividend_tmp_reg_n_0_[7] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[7] ),
        .Q(\dividend_tmp_reg_n_0_[8] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \dividend_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[9]_i_1__1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[10]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(D[9]),
        .Q(\divisor0_reg[10]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[11]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(D[10]),
        .Q(\divisor0_reg[11]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[12]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(D[11]),
        .Q(\divisor0_reg[12]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[13]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(D[12]),
        .Q(\divisor0_reg[13]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[14]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(D[13]),
        .Q(\divisor0_reg[14]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[15]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(D[14]),
        .Q(\divisor0_reg[15]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[16]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(D[15]),
        .Q(\divisor0_reg[16]_inv_n_0 ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(D[0]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(D[1]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(D[2]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(D[3]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(D[4]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(D[5]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(D[6]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(D[7]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(D[8]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h6C)) 
    \quot[1]_i_1__0 
       (.I0(\dividend_tmp_reg[0]_0 ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\0 ),
        .O(\dividend_tmp_reg[5]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h1EF0)) 
    \quot[2]_i_1__0 
       (.I0(\dividend_tmp_reg[0]_0 ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\dividend_tmp_reg_n_0_[2] ),
        .I3(\0 ),
        .O(\dividend_tmp_reg[5]_0 [1]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'h01FEFF00)) 
    \quot[3]_i_1__0 
       (.I0(\dividend_tmp_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg[0]_0 ),
        .I2(\dividend_tmp_reg_n_0_[2] ),
        .I3(\dividend_tmp_reg_n_0_[3] ),
        .I4(\0 ),
        .O(\dividend_tmp_reg[5]_0 [2]));
  LUT6 #(
    .INIT(64'h0001FFFEFFFF0000)) 
    \quot[4]_i_1__0 
       (.I0(\dividend_tmp_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg[0]_0 ),
        .I2(\dividend_tmp_reg_n_0_[1] ),
        .I3(\dividend_tmp_reg_n_0_[3] ),
        .I4(\dividend_tmp_reg_n_0_[4] ),
        .I5(\0 ),
        .O(\dividend_tmp_reg[5]_0 [3]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \quot[5]_i_1__0 
       (.I0(\quot[7]_i_2_n_0 ),
        .I1(\dividend_tmp_reg_n_0_[5] ),
        .I2(\0 ),
        .O(\dividend_tmp_reg[5]_0 [4]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h2D78)) 
    \quot[6]_i_1 
       (.I0(\quot[7]_i_2_n_0 ),
        .I1(\dividend_tmp_reg_n_0_[5] ),
        .I2(\dividend_tmp_reg_n_0_[6] ),
        .I3(\0 ),
        .O(\dividend_tmp_reg[5]_0 [5]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h04FB7F80)) 
    \quot[7]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[5] ),
        .I1(\quot[7]_i_2_n_0 ),
        .I2(\dividend_tmp_reg_n_0_[6] ),
        .I3(\dividend_tmp_reg_n_0_[7] ),
        .I4(\0 ),
        .O(\dividend_tmp_reg[5]_0 [6]));
  LUT6 #(
    .INIT(64'h0000000000000100)) 
    \quot[7]_i_2 
       (.I0(\dividend_tmp_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg_n_0_[2] ),
        .I2(\dividend_tmp_reg[0]_0 ),
        .I3(\0 ),
        .I4(\dividend_tmp_reg_n_0_[1] ),
        .I5(\dividend_tmp_reg_n_0_[3] ),
        .O(\quot[7]_i_2_n_0 ));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  FDRE \r_stage_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_gate_n_0),
        .Q(\r_stage_reg[10]_0 ),
        .R(ap_rst));
  (* srl_bus_name = "inst/\sdiv_10ns_17ns_8_14_seq_1_U3/fn1_sdiv_10ns_17ns_8_14_seq_1_div_U/fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\sdiv_10ns_17ns_8_14_seq_1_U3/fn1_sdiv_10ns_17ns_8_14_seq_1_div_U/fn1_sdiv_10ns_17ns_8_14_seq_1_div_u_0/r_stage_reg[8]_srl8___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_6 " *) 
  SRL16E \r_stage_reg[8]_srl8___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_6 
       (.A0(1'b1),
        .A1(1'b1),
        .A2(1'b1),
        .A3(1'b0),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\r_stage_reg[8]_srl8___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_6_n_0 ));
  FDRE \r_stage_reg[9]_udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_7 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[8]_srl8___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_6_n_0 ),
        .Q(\r_stage_reg[9]_udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_7_n_0 ),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    r_stage_reg_gate
       (.I0(\r_stage_reg[9]_udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_7_n_0 ),
        .I1(\r_stage_reg[10]_1 ),
        .O(r_stage_reg_gate_n_0));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[0]_i_1__1 
       (.I0(\dividend_tmp_reg_n_0_[9] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1__1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1__1 
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1__1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1__1 
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1__1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1__1 
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1__1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1__1 
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1__1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1__1 
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1__1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1__1 
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1__1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1__1 
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_4),
        .O(\remd_tmp[7]_i_1__1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[8]_i_1__1 
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_7),
        .O(\remd_tmp[8]_i_1__1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1__1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[1]_i_1__1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[2]_i_1__1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[3]_i_1__1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[4]_i_1__1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[5]_i_1__1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[6]_i_1__1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[7]_i_1__1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[8]_i_1__1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \sign0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[1]),
        .Q(\0 ),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17ns_32ns_6_21_seq_1
   (Q,
    E,
    ap_clk,
    \dividend_tmp_reg[1] ,
    ap_rst,
    D,
    p_5,
    p_9);
  output [5:0]Q;
  input [0:0]E;
  input ap_clk;
  input \dividend_tmp_reg[1] ;
  input ap_rst;
  input [0:0]D;
  input [15:0]p_5;
  input [31:0]p_9;

  wire [0:0]D;
  wire [0:0]E;
  wire [5:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire \dividend_tmp_reg[1] ;
  wire [15:0]p_5;
  wire [31:0]p_9;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17ns_32ns_6_21_seq_1_div fn1_sdiv_17ns_32ns_6_21_seq_1_div_U
       (.D(D),
        .E(E),
        .Q(Q),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\dividend_tmp_reg[1] (\dividend_tmp_reg[1] ),
        .p_5(p_5),
        .p_9(p_9));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17ns_32ns_6_21_seq_1_div
   (Q,
    E,
    ap_clk,
    \dividend_tmp_reg[1] ,
    ap_rst,
    D,
    p_5,
    p_9);
  output [5:0]Q;
  input [0:0]E;
  input ap_clk;
  input \dividend_tmp_reg[1] ;
  input ap_rst;
  input [0:0]D;
  input [15:0]p_5;
  input [31:0]p_9;

  wire [0:0]D;
  wire [0:0]E;
  wire [5:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire \dividend_tmp_reg[1] ;
  wire [15:0]dividend_u;
  wire \divisor0[11]_i_2_n_0 ;
  wire \divisor0[12]_i_3_n_0 ;
  wire \divisor0[12]_i_4_n_0 ;
  wire \divisor0[12]_i_5_n_0 ;
  wire \divisor0[12]_i_6_n_0 ;
  wire \divisor0[16]_i_3_n_0 ;
  wire \divisor0[16]_i_4_n_0 ;
  wire \divisor0[16]_i_5_n_0 ;
  wire \divisor0[16]_i_6_n_0 ;
  wire \divisor0[20]_inv_i_3_n_0 ;
  wire \divisor0[20]_inv_i_4_n_0 ;
  wire \divisor0[20]_inv_i_5_n_0 ;
  wire \divisor0[20]_inv_i_6_n_0 ;
  wire \divisor0[24]_inv_i_3_n_0 ;
  wire \divisor0[24]_inv_i_4_n_0 ;
  wire \divisor0[24]_inv_i_5_n_0 ;
  wire \divisor0[24]_inv_i_6_n_0 ;
  wire \divisor0[28]_inv_i_3_n_0 ;
  wire \divisor0[28]_inv_i_4_n_0 ;
  wire \divisor0[28]_inv_i_5_n_0 ;
  wire \divisor0[28]_inv_i_6_n_0 ;
  wire \divisor0[31]_inv_i_3_n_0 ;
  wire \divisor0[31]_inv_i_4_n_0 ;
  wire \divisor0[31]_inv_i_5_n_0 ;
  wire \divisor0[4]_i_3_n_0 ;
  wire \divisor0[4]_i_4_n_0 ;
  wire \divisor0[4]_i_5_n_0 ;
  wire \divisor0[4]_i_6_n_0 ;
  wire \divisor0[4]_i_7_n_0 ;
  wire \divisor0[7]_i_2_n_0 ;
  wire \divisor0[7]_i_3_n_0 ;
  wire \divisor0[7]_i_4_n_0 ;
  wire \divisor0[8]_i_3_n_0 ;
  wire \divisor0[8]_i_4_n_0 ;
  wire \divisor0[8]_i_5_n_0 ;
  wire \divisor0[8]_i_6_n_0 ;
  wire \divisor0_reg[11]_i_1_n_0 ;
  wire \divisor0_reg[11]_i_1_n_1 ;
  wire \divisor0_reg[11]_i_1_n_2 ;
  wire \divisor0_reg[11]_i_1_n_3 ;
  wire \divisor0_reg[12]_i_2_n_0 ;
  wire \divisor0_reg[12]_i_2_n_1 ;
  wire \divisor0_reg[12]_i_2_n_2 ;
  wire \divisor0_reg[12]_i_2_n_3 ;
  wire \divisor0_reg[15]_i_1_n_0 ;
  wire \divisor0_reg[15]_i_1_n_1 ;
  wire \divisor0_reg[15]_i_1_n_2 ;
  wire \divisor0_reg[15]_i_1_n_3 ;
  wire \divisor0_reg[16]_i_2_n_0 ;
  wire \divisor0_reg[16]_i_2_n_1 ;
  wire \divisor0_reg[16]_i_2_n_2 ;
  wire \divisor0_reg[16]_i_2_n_3 ;
  wire \divisor0_reg[19]_i_1_n_0 ;
  wire \divisor0_reg[19]_i_1_n_1 ;
  wire \divisor0_reg[19]_i_1_n_2 ;
  wire \divisor0_reg[19]_i_1_n_3 ;
  wire \divisor0_reg[20]_inv_i_2_n_0 ;
  wire \divisor0_reg[20]_inv_i_2_n_1 ;
  wire \divisor0_reg[20]_inv_i_2_n_2 ;
  wire \divisor0_reg[20]_inv_i_2_n_3 ;
  wire \divisor0_reg[23]_i_1_n_0 ;
  wire \divisor0_reg[23]_i_1_n_1 ;
  wire \divisor0_reg[23]_i_1_n_2 ;
  wire \divisor0_reg[23]_i_1_n_3 ;
  wire \divisor0_reg[24]_inv_i_2_n_0 ;
  wire \divisor0_reg[24]_inv_i_2_n_1 ;
  wire \divisor0_reg[24]_inv_i_2_n_2 ;
  wire \divisor0_reg[24]_inv_i_2_n_3 ;
  wire \divisor0_reg[27]_i_1_n_0 ;
  wire \divisor0_reg[27]_i_1_n_1 ;
  wire \divisor0_reg[27]_i_1_n_2 ;
  wire \divisor0_reg[27]_i_1_n_3 ;
  wire \divisor0_reg[28]_inv_i_2_n_0 ;
  wire \divisor0_reg[28]_inv_i_2_n_1 ;
  wire \divisor0_reg[28]_inv_i_2_n_2 ;
  wire \divisor0_reg[28]_inv_i_2_n_3 ;
  wire \divisor0_reg[31]_i_1_n_1 ;
  wire \divisor0_reg[31]_i_1_n_2 ;
  wire \divisor0_reg[31]_i_1_n_3 ;
  wire \divisor0_reg[31]_inv_i_2_n_2 ;
  wire \divisor0_reg[31]_inv_i_2_n_3 ;
  wire \divisor0_reg[4]_i_2_n_0 ;
  wire \divisor0_reg[4]_i_2_n_1 ;
  wire \divisor0_reg[4]_i_2_n_2 ;
  wire \divisor0_reg[4]_i_2_n_3 ;
  wire \divisor0_reg[7]_i_1_n_0 ;
  wire \divisor0_reg[7]_i_1_n_1 ;
  wire \divisor0_reg[7]_i_1_n_2 ;
  wire \divisor0_reg[7]_i_1_n_3 ;
  wire \divisor0_reg[8]_i_2_n_0 ;
  wire \divisor0_reg[8]_i_2_n_1 ;
  wire \divisor0_reg[8]_i_2_n_2 ;
  wire \divisor0_reg[8]_i_2_n_3 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[11] ;
  wire \divisor0_reg_n_0_[12] ;
  wire \divisor0_reg_n_0_[13] ;
  wire \divisor0_reg_n_0_[14] ;
  wire \divisor0_reg_n_0_[15] ;
  wire \divisor0_reg_n_0_[16] ;
  wire \divisor0_reg_n_0_[17] ;
  wire \divisor0_reg_n_0_[18] ;
  wire \divisor0_reg_n_0_[19] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[20] ;
  wire \divisor0_reg_n_0_[21] ;
  wire \divisor0_reg_n_0_[22] ;
  wire \divisor0_reg_n_0_[23] ;
  wire \divisor0_reg_n_0_[24] ;
  wire \divisor0_reg_n_0_[25] ;
  wire \divisor0_reg_n_0_[26] ;
  wire \divisor0_reg_n_0_[27] ;
  wire \divisor0_reg_n_0_[28] ;
  wire \divisor0_reg_n_0_[29] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[30] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire [31:1]divisor_u;
  wire [31:1]divisor_u0;
  wire fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_0;
  wire fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_1;
  wire fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_2;
  wire fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_3;
  wire fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_4;
  wire fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_5;
  wire fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_6;
  wire [31:4]grp_fu_96_p1;
  wire p_0_in;
  wire [15:0]p_5;
  wire [31:0]p_9;
  wire [3:3]\NLW_divisor0_reg[31]_i_1_CO_UNCONNECTED ;
  wire [3:2]\NLW_divisor0_reg[31]_inv_i_2_CO_UNCONNECTED ;
  wire [3:3]\NLW_divisor0_reg[31]_inv_i_2_O_UNCONNECTED ;

  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[0]),
        .Q(dividend_u[0]),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[10]),
        .Q(dividend_u[10]),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[11]),
        .Q(dividend_u[11]),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[12]),
        .Q(dividend_u[12]),
        .R(1'b0));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[13]),
        .Q(dividend_u[13]),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[14]),
        .Q(dividend_u[14]),
        .R(1'b0));
  FDRE \dividend0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[15]),
        .Q(dividend_u[15]),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[1]),
        .Q(dividend_u[1]),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[2]),
        .Q(dividend_u[2]),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[3]),
        .Q(dividend_u[3]),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[4]),
        .Q(dividend_u[4]),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[5]),
        .Q(dividend_u[5]),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[6]),
        .Q(dividend_u[6]),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[7]),
        .Q(dividend_u[7]),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[8]),
        .Q(dividend_u[8]),
        .R(1'b0));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[9]),
        .Q(dividend_u[9]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[10]_i_1 
       (.I0(divisor_u0[10]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[10] ),
        .O(divisor_u[10]));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[11]_i_1 
       (.I0(divisor_u0[11]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[11] ),
        .O(divisor_u[11]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[11]_i_2 
       (.I0(p_9[8]),
        .O(\divisor0[11]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[12]_i_1 
       (.I0(divisor_u0[12]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[12] ),
        .O(divisor_u[12]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_3 
       (.I0(\divisor0_reg_n_0_[12] ),
        .O(\divisor0[12]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_4 
       (.I0(\divisor0_reg_n_0_[11] ),
        .O(\divisor0[12]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_5 
       (.I0(\divisor0_reg_n_0_[10] ),
        .O(\divisor0[12]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_6 
       (.I0(\divisor0_reg_n_0_[9] ),
        .O(\divisor0[12]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[13]_i_1 
       (.I0(divisor_u0[13]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[13] ),
        .O(divisor_u[13]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[14]_i_1 
       (.I0(divisor_u0[14]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[14] ),
        .O(divisor_u[14]));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[15]_i_1 
       (.I0(divisor_u0[15]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[15] ),
        .O(divisor_u[15]));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[16]_i_1 
       (.I0(divisor_u0[16]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[16] ),
        .O(divisor_u[16]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_3 
       (.I0(\divisor0_reg_n_0_[16] ),
        .O(\divisor0[16]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_4 
       (.I0(\divisor0_reg_n_0_[15] ),
        .O(\divisor0[16]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_5 
       (.I0(\divisor0_reg_n_0_[14] ),
        .O(\divisor0[16]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_6 
       (.I0(\divisor0_reg_n_0_[13] ),
        .O(\divisor0[16]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[17]_inv_i_1 
       (.I0(divisor_u0[17]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[17] ),
        .O(divisor_u[17]));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[18]_inv_i_1 
       (.I0(divisor_u0[18]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[18] ),
        .O(divisor_u[18]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[19]_inv_i_1 
       (.I0(divisor_u0[19]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[19] ),
        .O(divisor_u[19]));
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[1]_i_1 
       (.I0(divisor_u0[1]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(divisor_u[1]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[20]_inv_i_1 
       (.I0(divisor_u0[20]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[20] ),
        .O(divisor_u[20]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[20]_inv_i_3 
       (.I0(\divisor0_reg_n_0_[20] ),
        .O(\divisor0[20]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[20]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[19] ),
        .O(\divisor0[20]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[20]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[18] ),
        .O(\divisor0[20]_inv_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[20]_inv_i_6 
       (.I0(\divisor0_reg_n_0_[17] ),
        .O(\divisor0[20]_inv_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[21]_inv_i_1 
       (.I0(divisor_u0[21]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[21] ),
        .O(divisor_u[21]));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[22]_inv_i_1 
       (.I0(divisor_u0[22]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[22] ),
        .O(divisor_u[22]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[23]_inv_i_1 
       (.I0(divisor_u0[23]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[23] ),
        .O(divisor_u[23]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[24]_inv_i_1 
       (.I0(divisor_u0[24]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[24] ),
        .O(divisor_u[24]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[24]_inv_i_3 
       (.I0(\divisor0_reg_n_0_[24] ),
        .O(\divisor0[24]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[24]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[23] ),
        .O(\divisor0[24]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[24]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[22] ),
        .O(\divisor0[24]_inv_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[24]_inv_i_6 
       (.I0(\divisor0_reg_n_0_[21] ),
        .O(\divisor0[24]_inv_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[25]_inv_i_1 
       (.I0(divisor_u0[25]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[25] ),
        .O(divisor_u[25]));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[26]_inv_i_1 
       (.I0(divisor_u0[26]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[26] ),
        .O(divisor_u[26]));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[27]_inv_i_1 
       (.I0(divisor_u0[27]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[27] ),
        .O(divisor_u[27]));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[28]_inv_i_1 
       (.I0(divisor_u0[28]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[28] ),
        .O(divisor_u[28]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[28]_inv_i_3 
       (.I0(\divisor0_reg_n_0_[28] ),
        .O(\divisor0[28]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[28]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[27] ),
        .O(\divisor0[28]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[28]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[26] ),
        .O(\divisor0[28]_inv_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[28]_inv_i_6 
       (.I0(\divisor0_reg_n_0_[25] ),
        .O(\divisor0[28]_inv_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[29]_inv_i_1 
       (.I0(divisor_u0[29]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[29] ),
        .O(divisor_u[29]));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[2]_i_1 
       (.I0(divisor_u0[2]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(divisor_u[2]));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[30]_inv_i_1 
       (.I0(divisor_u0[30]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[30] ),
        .O(divisor_u[30]));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT2 #(
    .INIT(4'h7)) 
    \divisor0[31]_inv_i_1 
       (.I0(p_0_in),
        .I1(divisor_u0[31]),
        .O(divisor_u[31]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[31]_inv_i_3 
       (.I0(p_0_in),
        .O(\divisor0[31]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[31]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[30] ),
        .O(\divisor0[31]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[31]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[29] ),
        .O(\divisor0[31]_inv_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[3]_i_1 
       (.I0(divisor_u0[3]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(divisor_u[3]));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[4]_i_1 
       (.I0(divisor_u0[4]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(divisor_u[4]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3 
       (.I0(\divisor0_reg_n_0_[0] ),
        .O(\divisor0[4]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_4 
       (.I0(\divisor0_reg_n_0_[4] ),
        .O(\divisor0[4]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_5 
       (.I0(\divisor0_reg_n_0_[3] ),
        .O(\divisor0[4]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_6 
       (.I0(\divisor0_reg_n_0_[2] ),
        .O(\divisor0[4]_i_6_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_7 
       (.I0(\divisor0_reg_n_0_[1] ),
        .O(\divisor0[4]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[5]_i_1 
       (.I0(divisor_u0[5]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(divisor_u[5]));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[6]_i_1 
       (.I0(divisor_u0[6]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(divisor_u[6]));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[7]_i_1 
       (.I0(divisor_u0[7]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(divisor_u[7]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[7]_i_2 
       (.I0(p_9[7]),
        .O(\divisor0[7]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[7]_i_3 
       (.I0(p_9[6]),
        .O(\divisor0[7]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[7]_i_4 
       (.I0(p_9[5]),
        .O(\divisor0[7]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[8]_i_1 
       (.I0(divisor_u0[8]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(divisor_u[8]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3 
       (.I0(\divisor0_reg_n_0_[8] ),
        .O(\divisor0[8]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_4 
       (.I0(\divisor0_reg_n_0_[7] ),
        .O(\divisor0[8]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_5 
       (.I0(\divisor0_reg_n_0_[6] ),
        .O(\divisor0[8]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_6 
       (.I0(\divisor0_reg_n_0_[5] ),
        .O(\divisor0[8]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[9]_i_1 
       (.I0(divisor_u0[9]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(divisor_u[9]));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_9[0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[11]_i_1 
       (.CI(\divisor0_reg[7]_i_1_n_0 ),
        .CO({\divisor0_reg[11]_i_1_n_0 ,\divisor0_reg[11]_i_1_n_1 ,\divisor0_reg[11]_i_1_n_2 ,\divisor0_reg[11]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,p_9[8]}),
        .O(grp_fu_96_p1[11:8]),
        .S({p_9[11:9],\divisor0[11]_i_2_n_0 }));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[12]_i_2 
       (.CI(\divisor0_reg[8]_i_2_n_0 ),
        .CO({\divisor0_reg[12]_i_2_n_0 ,\divisor0_reg[12]_i_2_n_1 ,\divisor0_reg[12]_i_2_n_2 ,\divisor0_reg[12]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[12:9]),
        .S({\divisor0[12]_i_3_n_0 ,\divisor0[12]_i_4_n_0 ,\divisor0[12]_i_5_n_0 ,\divisor0[12]_i_6_n_0 }));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[15]_i_1 
       (.CI(\divisor0_reg[11]_i_1_n_0 ),
        .CO({\divisor0_reg[15]_i_1_n_0 ,\divisor0_reg[15]_i_1_n_1 ,\divisor0_reg[15]_i_1_n_2 ,\divisor0_reg[15]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_96_p1[15:12]),
        .S(p_9[15:12]));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[16]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[16]_i_2 
       (.CI(\divisor0_reg[12]_i_2_n_0 ),
        .CO({\divisor0_reg[16]_i_2_n_0 ,\divisor0_reg[16]_i_2_n_1 ,\divisor0_reg[16]_i_2_n_2 ,\divisor0_reg[16]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[16:13]),
        .S({\divisor0[16]_i_3_n_0 ,\divisor0[16]_i_4_n_0 ,\divisor0[16]_i_5_n_0 ,\divisor0[16]_i_6_n_0 }));
  FDRE \divisor0_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[17]),
        .Q(\divisor0_reg_n_0_[17] ),
        .R(1'b0));
  FDRE \divisor0_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[18]),
        .Q(\divisor0_reg_n_0_[18] ),
        .R(1'b0));
  FDRE \divisor0_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[19]),
        .Q(\divisor0_reg_n_0_[19] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[19]_i_1 
       (.CI(\divisor0_reg[15]_i_1_n_0 ),
        .CO({\divisor0_reg[19]_i_1_n_0 ,\divisor0_reg[19]_i_1_n_1 ,\divisor0_reg[19]_i_1_n_2 ,\divisor0_reg[19]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_96_p1[19:16]),
        .S(p_9[19:16]));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_9[1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[20]),
        .Q(\divisor0_reg_n_0_[20] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[20]_inv_i_2 
       (.CI(\divisor0_reg[16]_i_2_n_0 ),
        .CO({\divisor0_reg[20]_inv_i_2_n_0 ,\divisor0_reg[20]_inv_i_2_n_1 ,\divisor0_reg[20]_inv_i_2_n_2 ,\divisor0_reg[20]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[20:17]),
        .S({\divisor0[20]_inv_i_3_n_0 ,\divisor0[20]_inv_i_4_n_0 ,\divisor0[20]_inv_i_5_n_0 ,\divisor0[20]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[21]),
        .Q(\divisor0_reg_n_0_[21] ),
        .R(1'b0));
  FDRE \divisor0_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[22]),
        .Q(\divisor0_reg_n_0_[22] ),
        .R(1'b0));
  FDRE \divisor0_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[23]),
        .Q(\divisor0_reg_n_0_[23] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[23]_i_1 
       (.CI(\divisor0_reg[19]_i_1_n_0 ),
        .CO({\divisor0_reg[23]_i_1_n_0 ,\divisor0_reg[23]_i_1_n_1 ,\divisor0_reg[23]_i_1_n_2 ,\divisor0_reg[23]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_96_p1[23:20]),
        .S(p_9[23:20]));
  FDRE \divisor0_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[24]),
        .Q(\divisor0_reg_n_0_[24] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[24]_inv_i_2 
       (.CI(\divisor0_reg[20]_inv_i_2_n_0 ),
        .CO({\divisor0_reg[24]_inv_i_2_n_0 ,\divisor0_reg[24]_inv_i_2_n_1 ,\divisor0_reg[24]_inv_i_2_n_2 ,\divisor0_reg[24]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[24:21]),
        .S({\divisor0[24]_inv_i_3_n_0 ,\divisor0[24]_inv_i_4_n_0 ,\divisor0[24]_inv_i_5_n_0 ,\divisor0[24]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[25]),
        .Q(\divisor0_reg_n_0_[25] ),
        .R(1'b0));
  FDRE \divisor0_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[26]),
        .Q(\divisor0_reg_n_0_[26] ),
        .R(1'b0));
  FDRE \divisor0_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[27]),
        .Q(\divisor0_reg_n_0_[27] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[27]_i_1 
       (.CI(\divisor0_reg[23]_i_1_n_0 ),
        .CO({\divisor0_reg[27]_i_1_n_0 ,\divisor0_reg[27]_i_1_n_1 ,\divisor0_reg[27]_i_1_n_2 ,\divisor0_reg[27]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_96_p1[27:24]),
        .S(p_9[27:24]));
  FDRE \divisor0_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[28]),
        .Q(\divisor0_reg_n_0_[28] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[28]_inv_i_2 
       (.CI(\divisor0_reg[24]_inv_i_2_n_0 ),
        .CO({\divisor0_reg[28]_inv_i_2_n_0 ,\divisor0_reg[28]_inv_i_2_n_1 ,\divisor0_reg[28]_inv_i_2_n_2 ,\divisor0_reg[28]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[28:25]),
        .S({\divisor0[28]_inv_i_3_n_0 ,\divisor0[28]_inv_i_4_n_0 ,\divisor0[28]_inv_i_5_n_0 ,\divisor0[28]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[29]),
        .Q(\divisor0_reg_n_0_[29] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_9[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[30]),
        .Q(\divisor0_reg_n_0_[30] ),
        .R(1'b0));
  FDRE \divisor0_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[31]),
        .Q(p_0_in),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[31]_i_1 
       (.CI(\divisor0_reg[27]_i_1_n_0 ),
        .CO({\NLW_divisor0_reg[31]_i_1_CO_UNCONNECTED [3],\divisor0_reg[31]_i_1_n_1 ,\divisor0_reg[31]_i_1_n_2 ,\divisor0_reg[31]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_96_p1[31:28]),
        .S(p_9[31:28]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[31]_inv_i_2 
       (.CI(\divisor0_reg[28]_inv_i_2_n_0 ),
        .CO({\NLW_divisor0_reg[31]_inv_i_2_CO_UNCONNECTED [3:2],\divisor0_reg[31]_inv_i_2_n_2 ,\divisor0_reg[31]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_divisor0_reg[31]_inv_i_2_O_UNCONNECTED [3],divisor_u0[31:29]}),
        .S({1'b0,\divisor0[31]_inv_i_3_n_0 ,\divisor0[31]_inv_i_4_n_0 ,\divisor0[31]_inv_i_5_n_0 }));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_9[3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[4]_i_2 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_2_n_0 ,\divisor0_reg[4]_i_2_n_1 ,\divisor0_reg[4]_i_2_n_2 ,\divisor0_reg[4]_i_2_n_3 }),
        .CYINIT(\divisor0[4]_i_3_n_0 ),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[4:1]),
        .S({\divisor0[4]_i_4_n_0 ,\divisor0[4]_i_5_n_0 ,\divisor0[4]_i_6_n_0 ,\divisor0[4]_i_7_n_0 }));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[7]_i_1 
       (.CI(1'b0),
        .CO({\divisor0_reg[7]_i_1_n_0 ,\divisor0_reg[7]_i_1_n_1 ,\divisor0_reg[7]_i_1_n_2 ,\divisor0_reg[7]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({p_9[7:5],1'b0}),
        .O(grp_fu_96_p1[7:4]),
        .S({\divisor0[7]_i_2_n_0 ,\divisor0[7]_i_3_n_0 ,\divisor0[7]_i_4_n_0 ,p_9[4]}));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[8]_i_2 
       (.CI(\divisor0_reg[4]_i_2_n_0 ),
        .CO({\divisor0_reg[8]_i_2_n_0 ,\divisor0_reg[8]_i_2_n_1 ,\divisor0_reg[8]_i_2_n_2 ,\divisor0_reg[8]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[8:5]),
        .S({\divisor0[8]_i_3_n_0 ,\divisor0[8]_i_4_n_0 ,\divisor0[8]_i_5_n_0 ,\divisor0[8]_i_6_n_0 }));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_96_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17ns_32ns_6_21_seq_1_div_u fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0
       (.D({fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_1,fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_2,fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_3,fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_4,fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_5}),
        .E(E),
        .Q({p_0_in,\divisor0_reg_n_0_[0] }),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\dividend0_reg[15]_0 (dividend_u),
        .\dividend_tmp_reg[0]_0 (fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_0),
        .\dividend_tmp_reg[1]_0 (\dividend_tmp_reg[1] ),
        .\divisor0_reg[31]_inv_0 (divisor_u),
        .\r_stage_reg[16]_0 (D),
        .\r_stage_reg[17]_0 (fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_6));
  FDRE \quot_reg[0] 
       (.C(ap_clk),
        .CE(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_6),
        .D(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_0),
        .Q(Q[0]),
        .R(1'b0));
  FDRE \quot_reg[1] 
       (.C(ap_clk),
        .CE(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_6),
        .D(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_5),
        .Q(Q[1]),
        .R(1'b0));
  FDRE \quot_reg[2] 
       (.C(ap_clk),
        .CE(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_6),
        .D(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_4),
        .Q(Q[2]),
        .R(1'b0));
  FDRE \quot_reg[3] 
       (.C(ap_clk),
        .CE(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_6),
        .D(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_3),
        .Q(Q[3]),
        .R(1'b0));
  FDRE \quot_reg[4] 
       (.C(ap_clk),
        .CE(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_6),
        .D(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_2),
        .Q(Q[4]),
        .R(1'b0));
  FDRE \quot_reg[5] 
       (.C(ap_clk),
        .CE(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_6),
        .D(fn1_sdiv_17ns_32ns_6_21_seq_1_div_u_0_n_1),
        .Q(Q[5]),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17ns_32ns_6_21_seq_1_div_u
   (\dividend_tmp_reg[0]_0 ,
    D,
    \r_stage_reg[17]_0 ,
    E,
    Q,
    ap_clk,
    \dividend_tmp_reg[1]_0 ,
    ap_rst,
    \r_stage_reg[16]_0 ,
    \dividend0_reg[15]_0 ,
    \divisor0_reg[31]_inv_0 );
  output [0:0]\dividend_tmp_reg[0]_0 ;
  output [4:0]D;
  output [0:0]\r_stage_reg[17]_0 ;
  input [0:0]E;
  input [1:0]Q;
  input ap_clk;
  input \dividend_tmp_reg[1]_0 ;
  input ap_rst;
  input [0:0]\r_stage_reg[16]_0 ;
  input [15:0]\dividend0_reg[15]_0 ;
  input [30:0]\divisor0_reg[31]_inv_0 ;

  wire \0 ;
  wire [4:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire cal_tmp_carry__0_i_1__0_n_0;
  wire cal_tmp_carry__0_i_2__0_n_0;
  wire cal_tmp_carry__0_i_3__0_n_0;
  wire cal_tmp_carry__0_i_4__0_n_0;
  wire cal_tmp_carry__0_i_5__0_n_0;
  wire cal_tmp_carry__0_i_6__0_n_0;
  wire cal_tmp_carry__0_i_7__0_n_0;
  wire cal_tmp_carry__0_i_8__0_n_0;
  wire cal_tmp_carry__0_n_0;
  wire cal_tmp_carry__0_n_1;
  wire cal_tmp_carry__0_n_2;
  wire cal_tmp_carry__0_n_3;
  wire cal_tmp_carry__0_n_4;
  wire cal_tmp_carry__0_n_5;
  wire cal_tmp_carry__0_n_6;
  wire cal_tmp_carry__0_n_7;
  wire cal_tmp_carry__1_i_1__0_n_0;
  wire cal_tmp_carry__1_i_2__0_n_0;
  wire cal_tmp_carry__1_i_3__0_n_0;
  wire cal_tmp_carry__1_i_4__0_n_0;
  wire cal_tmp_carry__1_i_5__0_n_0;
  wire cal_tmp_carry__1_i_6__0_n_0;
  wire cal_tmp_carry__1_i_7__0_n_0;
  wire cal_tmp_carry__1_i_8__0_n_0;
  wire cal_tmp_carry__1_n_0;
  wire cal_tmp_carry__1_n_1;
  wire cal_tmp_carry__1_n_2;
  wire cal_tmp_carry__1_n_3;
  wire cal_tmp_carry__1_n_4;
  wire cal_tmp_carry__1_n_5;
  wire cal_tmp_carry__1_n_6;
  wire cal_tmp_carry__1_n_7;
  wire cal_tmp_carry__2_i_1__0_n_0;
  wire cal_tmp_carry__2_i_2__0_n_0;
  wire cal_tmp_carry__2_i_3__0_n_0;
  wire cal_tmp_carry__2_i_4__0_n_0;
  wire cal_tmp_carry__2_i_5__0_n_0;
  wire cal_tmp_carry__2_i_6__0_n_0;
  wire cal_tmp_carry__2_i_7__0_n_0;
  wire cal_tmp_carry__2_i_8_n_0;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
  wire cal_tmp_carry__2_n_4;
  wire cal_tmp_carry__2_n_5;
  wire cal_tmp_carry__2_n_6;
  wire cal_tmp_carry__2_n_7;
  wire cal_tmp_carry__3_i_1__0_n_0;
  wire cal_tmp_carry__3_i_2_n_0;
  wire cal_tmp_carry__3_n_0;
  wire cal_tmp_carry__3_n_1;
  wire cal_tmp_carry__3_n_2;
  wire cal_tmp_carry__3_n_3;
  wire cal_tmp_carry__4_n_0;
  wire cal_tmp_carry__4_n_1;
  wire cal_tmp_carry__4_n_2;
  wire cal_tmp_carry__4_n_3;
  wire cal_tmp_carry__5_n_0;
  wire cal_tmp_carry__5_n_1;
  wire cal_tmp_carry__5_n_2;
  wire cal_tmp_carry__5_n_3;
  wire cal_tmp_carry__6_n_1;
  wire cal_tmp_carry__6_n_2;
  wire cal_tmp_carry__6_n_3;
  wire cal_tmp_carry_i_1__0_n_0;
  wire cal_tmp_carry_i_2__0_n_0;
  wire cal_tmp_carry_i_3__0_n_0;
  wire cal_tmp_carry_i_4__0_n_0;
  wire cal_tmp_carry_i_5__0_n_0;
  wire cal_tmp_carry_i_6__0_n_0;
  wire cal_tmp_carry_i_7__0_n_0;
  wire cal_tmp_carry_i_8__0_n_0;
  wire cal_tmp_carry_n_0;
  wire cal_tmp_carry_n_1;
  wire cal_tmp_carry_n_2;
  wire cal_tmp_carry_n_3;
  wire cal_tmp_carry_n_4;
  wire cal_tmp_carry_n_5;
  wire cal_tmp_carry_n_6;
  wire cal_tmp_carry_n_7;
  wire [15:0]\dividend0_reg[15]_0 ;
  wire \dividend0_reg_n_0_[0] ;
  wire \dividend0_reg_n_0_[10] ;
  wire \dividend0_reg_n_0_[11] ;
  wire \dividend0_reg_n_0_[12] ;
  wire \dividend0_reg_n_0_[13] ;
  wire \dividend0_reg_n_0_[14] ;
  wire \dividend0_reg_n_0_[15] ;
  wire \dividend0_reg_n_0_[1] ;
  wire \dividend0_reg_n_0_[2] ;
  wire \dividend0_reg_n_0_[3] ;
  wire \dividend0_reg_n_0_[4] ;
  wire \dividend0_reg_n_0_[5] ;
  wire \dividend0_reg_n_0_[6] ;
  wire \dividend0_reg_n_0_[7] ;
  wire \dividend0_reg_n_0_[8] ;
  wire \dividend0_reg_n_0_[9] ;
  wire \dividend_tmp[10]_i_1_n_0 ;
  wire \dividend_tmp[11]_i_1_n_0 ;
  wire \dividend_tmp[12]_i_1_n_0 ;
  wire \dividend_tmp[13]_i_1_n_0 ;
  wire \dividend_tmp[14]_i_1_n_0 ;
  wire \dividend_tmp[15]_i_1_n_0 ;
  wire \dividend_tmp[16]_i_1_n_0 ;
  wire \dividend_tmp[1]_i_1_n_0 ;
  wire \dividend_tmp[2]_i_1_n_0 ;
  wire \dividend_tmp[3]_i_1_n_0 ;
  wire \dividend_tmp[4]_i_1_n_0 ;
  wire \dividend_tmp[5]_i_1_n_0 ;
  wire \dividend_tmp[6]_i_1_n_0 ;
  wire \dividend_tmp[7]_i_1_n_0 ;
  wire \dividend_tmp[8]_i_1_n_0 ;
  wire \dividend_tmp[9]_i_1_n_0 ;
  wire [0:0]\dividend_tmp_reg[0]_0 ;
  wire \dividend_tmp_reg[1]_0 ;
  wire \dividend_tmp_reg_n_0_[10] ;
  wire \dividend_tmp_reg_n_0_[11] ;
  wire \dividend_tmp_reg_n_0_[12] ;
  wire \dividend_tmp_reg_n_0_[13] ;
  wire \dividend_tmp_reg_n_0_[14] ;
  wire \dividend_tmp_reg_n_0_[15] ;
  wire \dividend_tmp_reg_n_0_[16] ;
  wire \dividend_tmp_reg_n_0_[1] ;
  wire \dividend_tmp_reg_n_0_[2] ;
  wire \dividend_tmp_reg_n_0_[3] ;
  wire \dividend_tmp_reg_n_0_[4] ;
  wire \dividend_tmp_reg_n_0_[5] ;
  wire \dividend_tmp_reg_n_0_[6] ;
  wire \dividend_tmp_reg_n_0_[7] ;
  wire \dividend_tmp_reg_n_0_[8] ;
  wire \dividend_tmp_reg_n_0_[9] ;
  wire \divisor0_reg[17]_inv_n_0 ;
  wire \divisor0_reg[18]_inv_n_0 ;
  wire \divisor0_reg[19]_inv_n_0 ;
  wire \divisor0_reg[20]_inv_n_0 ;
  wire \divisor0_reg[21]_inv_n_0 ;
  wire \divisor0_reg[22]_inv_n_0 ;
  wire \divisor0_reg[23]_inv_n_0 ;
  wire \divisor0_reg[24]_inv_n_0 ;
  wire \divisor0_reg[25]_inv_n_0 ;
  wire \divisor0_reg[26]_inv_n_0 ;
  wire \divisor0_reg[27]_inv_n_0 ;
  wire \divisor0_reg[28]_inv_n_0 ;
  wire \divisor0_reg[29]_inv_n_0 ;
  wire \divisor0_reg[30]_inv_n_0 ;
  wire [30:0]\divisor0_reg[31]_inv_0 ;
  wire \divisor0_reg[31]_inv_n_0 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[11] ;
  wire \divisor0_reg_n_0_[12] ;
  wire \divisor0_reg_n_0_[13] ;
  wire \divisor0_reg_n_0_[14] ;
  wire \divisor0_reg_n_0_[15] ;
  wire \divisor0_reg_n_0_[16] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire p_0_in;
  wire [0:0]p_2_out;
  wire \quot[5]_i_2_n_0 ;
  wire [0:0]\r_stage_reg[16]_0 ;
  wire [0:0]\r_stage_reg[17]_0 ;
  wire \r_stage_reg_n_0_[16] ;
  wire \remd_tmp[0]_i_1__0_n_0 ;
  wire \remd_tmp[10]_i_1__0_n_0 ;
  wire \remd_tmp[11]_i_1__0_n_0 ;
  wire \remd_tmp[12]_i_1__0_n_0 ;
  wire \remd_tmp[13]_i_1__0_n_0 ;
  wire \remd_tmp[14]_i_1_n_0 ;
  wire \remd_tmp[15]_i_1_n_0 ;
  wire \remd_tmp[1]_i_1__0_n_0 ;
  wire \remd_tmp[2]_i_1__0_n_0 ;
  wire \remd_tmp[3]_i_1__0_n_0 ;
  wire \remd_tmp[4]_i_1__0_n_0 ;
  wire \remd_tmp[5]_i_1__0_n_0 ;
  wire \remd_tmp[6]_i_1__0_n_0 ;
  wire \remd_tmp[7]_i_1__0_n_0 ;
  wire \remd_tmp[8]_i_1__0_n_0 ;
  wire \remd_tmp[9]_i_1__0_n_0 ;
  wire \remd_tmp_reg_n_0_[0] ;
  wire \remd_tmp_reg_n_0_[10] ;
  wire \remd_tmp_reg_n_0_[11] ;
  wire \remd_tmp_reg_n_0_[12] ;
  wire \remd_tmp_reg_n_0_[13] ;
  wire \remd_tmp_reg_n_0_[14] ;
  wire \remd_tmp_reg_n_0_[15] ;
  wire \remd_tmp_reg_n_0_[1] ;
  wire \remd_tmp_reg_n_0_[2] ;
  wire \remd_tmp_reg_n_0_[3] ;
  wire \remd_tmp_reg_n_0_[4] ;
  wire \remd_tmp_reg_n_0_[5] ;
  wire \remd_tmp_reg_n_0_[6] ;
  wire \remd_tmp_reg_n_0_[7] ;
  wire \remd_tmp_reg_n_0_[8] ;
  wire \remd_tmp_reg_n_0_[9] ;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__4_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__5_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__6_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__7_CO_UNCONNECTED;
  wire [3:1]NLW_cal_tmp_carry__7_O_UNCONNECTED;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({cal_tmp_carry_i_1__0_n_0,cal_tmp_carry_i_2__0_n_0,cal_tmp_carry_i_3__0_n_0,cal_tmp_carry_i_4__0_n_0}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_5__0_n_0,cal_tmp_carry_i_6__0_n_0,cal_tmp_carry_i_7__0_n_0,cal_tmp_carry_i_8__0_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__0_i_1__0_n_0,cal_tmp_carry__0_i_2__0_n_0,cal_tmp_carry__0_i_3__0_n_0,cal_tmp_carry__0_i_4__0_n_0}),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_5__0_n_0,cal_tmp_carry__0_i_6__0_n_0,cal_tmp_carry__0_i_7__0_n_0,cal_tmp_carry__0_i_8__0_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1__0
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__0_i_1__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2__0
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__0_i_2__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3__0
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__0_i_3__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4__0
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__0_i_4__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[6] ),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[4] ),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_7__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_8__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[3] ),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_8__0_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__1_i_1__0_n_0,cal_tmp_carry__1_i_2__0_n_0,cal_tmp_carry__1_i_3__0_n_0,cal_tmp_carry__1_i_4__0_n_0}),
        .O({cal_tmp_carry__1_n_4,cal_tmp_carry__1_n_5,cal_tmp_carry__1_n_6,cal_tmp_carry__1_n_7}),
        .S({cal_tmp_carry__1_i_5__0_n_0,cal_tmp_carry__1_i_6__0_n_0,cal_tmp_carry__1_i_7__0_n_0,cal_tmp_carry__1_i_8__0_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_1__0
       (.I0(\remd_tmp_reg_n_0_[10] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__1_i_1__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_2__0
       (.I0(\remd_tmp_reg_n_0_[9] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__1_i_2__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_3__0
       (.I0(\remd_tmp_reg_n_0_[8] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__1_i_3__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_4__0
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__1_i_4__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_5__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[10] ),
        .I2(\divisor0_reg_n_0_[11] ),
        .O(cal_tmp_carry__1_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_6__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[9] ),
        .I2(\divisor0_reg_n_0_[10] ),
        .O(cal_tmp_carry__1_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_7__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[8] ),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_7__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_8__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[7] ),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_8__0_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__2_i_1__0_n_0,cal_tmp_carry__2_i_2__0_n_0,cal_tmp_carry__2_i_3__0_n_0,cal_tmp_carry__2_i_4__0_n_0}),
        .O({cal_tmp_carry__2_n_4,cal_tmp_carry__2_n_5,cal_tmp_carry__2_n_6,cal_tmp_carry__2_n_7}),
        .S({cal_tmp_carry__2_i_5__0_n_0,cal_tmp_carry__2_i_6__0_n_0,cal_tmp_carry__2_i_7__0_n_0,cal_tmp_carry__2_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_1__0
       (.I0(\remd_tmp_reg_n_0_[14] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__2_i_1__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_2__0
       (.I0(\remd_tmp_reg_n_0_[13] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__2_i_2__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_3__0
       (.I0(\remd_tmp_reg_n_0_[12] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__2_i_3__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_4__0
       (.I0(\remd_tmp_reg_n_0_[11] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__2_i_4__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_5__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[14] ),
        .I2(\divisor0_reg_n_0_[15] ),
        .O(cal_tmp_carry__2_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_6__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[13] ),
        .I2(\divisor0_reg_n_0_[14] ),
        .O(cal_tmp_carry__2_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_7__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[12] ),
        .I2(\divisor0_reg_n_0_[13] ),
        .O(cal_tmp_carry__2_i_7__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_8
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[11] ),
        .I2(\divisor0_reg_n_0_[12] ),
        .O(cal_tmp_carry__2_i_8_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({cal_tmp_carry__3_n_0,cal_tmp_carry__3_n_1,cal_tmp_carry__3_n_2,cal_tmp_carry__3_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,cal_tmp_carry__3_i_1__0_n_0}),
        .O(NLW_cal_tmp_carry__3_O_UNCONNECTED[3:0]),
        .S({\divisor0_reg[19]_inv_n_0 ,\divisor0_reg[18]_inv_n_0 ,\divisor0_reg[17]_inv_n_0 ,cal_tmp_carry__3_i_2_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__3_i_1__0
       (.I0(\remd_tmp_reg_n_0_[15] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry__3_i_1__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__3_i_2
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[15] ),
        .I2(\divisor0_reg_n_0_[16] ),
        .O(cal_tmp_carry__3_i_2_n_0));
  CARRY4 cal_tmp_carry__4
       (.CI(cal_tmp_carry__3_n_0),
        .CO({cal_tmp_carry__4_n_0,cal_tmp_carry__4_n_1,cal_tmp_carry__4_n_2,cal_tmp_carry__4_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__4_O_UNCONNECTED[3:0]),
        .S({\divisor0_reg[23]_inv_n_0 ,\divisor0_reg[22]_inv_n_0 ,\divisor0_reg[21]_inv_n_0 ,\divisor0_reg[20]_inv_n_0 }));
  CARRY4 cal_tmp_carry__5
       (.CI(cal_tmp_carry__4_n_0),
        .CO({cal_tmp_carry__5_n_0,cal_tmp_carry__5_n_1,cal_tmp_carry__5_n_2,cal_tmp_carry__5_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__5_O_UNCONNECTED[3:0]),
        .S({\divisor0_reg[27]_inv_n_0 ,\divisor0_reg[26]_inv_n_0 ,\divisor0_reg[25]_inv_n_0 ,\divisor0_reg[24]_inv_n_0 }));
  CARRY4 cal_tmp_carry__6
       (.CI(cal_tmp_carry__5_n_0),
        .CO({p_2_out,cal_tmp_carry__6_n_1,cal_tmp_carry__6_n_2,cal_tmp_carry__6_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__6_O_UNCONNECTED[3:0]),
        .S({\divisor0_reg[31]_inv_n_0 ,\divisor0_reg[30]_inv_n_0 ,\divisor0_reg[29]_inv_n_0 ,\divisor0_reg[28]_inv_n_0 }));
  CARRY4 cal_tmp_carry__7
       (.CI(p_2_out),
        .CO(NLW_cal_tmp_carry__7_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__7_O_UNCONNECTED[3:1],p_0_in}),
        .S({1'b0,1'b0,1'b0,1'b1}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1__0
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry_i_1__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2__0
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry_i_2__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3__0
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry_i_3__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_4__0
       (.I0(\dividend_tmp_reg_n_0_[16] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .O(cal_tmp_carry_i_4__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[2] ),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_7__0
       (.I0(\dividend_tmp_reg[1]_0 ),
        .I1(\remd_tmp_reg_n_0_[0] ),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_7__0_n_0));
  LUT3 #(
    .INIT(8'h2D)) 
    cal_tmp_carry_i_8__0
       (.I0(\dividend_tmp_reg_n_0_[16] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_8__0_n_0));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [10]),
        .Q(\dividend0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [11]),
        .Q(\dividend0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [12]),
        .Q(\dividend0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [13]),
        .Q(\dividend0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [14]),
        .Q(\dividend0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \dividend0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [15]),
        .Q(\dividend0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [8]),
        .Q(\dividend0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[15]_0 [9]),
        .Q(\dividend0_reg_n_0_[9] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[10]_i_1 
       (.I0(\dividend0_reg_n_0_[9] ),
        .I1(\dividend_tmp_reg_n_0_[9] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[11]_i_1 
       (.I0(\dividend0_reg_n_0_[10] ),
        .I1(\dividend_tmp_reg_n_0_[10] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[12]_i_1 
       (.I0(\dividend0_reg_n_0_[11] ),
        .I1(\dividend_tmp_reg_n_0_[11] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[12]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[13]_i_1 
       (.I0(\dividend0_reg_n_0_[12] ),
        .I1(\dividend_tmp_reg_n_0_[12] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[14]_i_1 
       (.I0(\dividend0_reg_n_0_[13] ),
        .I1(\dividend_tmp_reg_n_0_[13] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[14]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[15]_i_1 
       (.I0(\dividend0_reg_n_0_[14] ),
        .I1(\dividend_tmp_reg_n_0_[14] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[16]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\dividend_tmp_reg_n_0_[15] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[16]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[1]_i_1 
       (.I0(\dividend0_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg[0]_0 ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[2]_i_1 
       (.I0(\dividend0_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[3]_i_1 
       (.I0(\dividend0_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg_n_0_[2] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend0_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg_n_0_[3] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[5]_i_1 
       (.I0(\dividend0_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg_n_0_[4] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[6]_i_1 
       (.I0(\dividend0_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg_n_0_[5] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[7]_i_1 
       (.I0(\dividend0_reg_n_0_[6] ),
        .I1(\dividend_tmp_reg_n_0_[6] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[8]_i_1 
       (.I0(\dividend0_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg_n_0_[7] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[9]_i_1 
       (.I0(\dividend0_reg_n_0_[8] ),
        .I1(\dividend_tmp_reg_n_0_[8] ),
        .I2(\dividend_tmp_reg[1]_0 ),
        .O(\dividend_tmp[9]_i_1_n_0 ));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_2_out),
        .Q(\dividend_tmp_reg[0]_0 ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[10]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[11]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[12]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[13]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[14]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[15]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[16]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[1]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[2]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[3]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[4]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[5]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[6]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[7]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[8]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[9]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [9]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [10]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [11]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [12]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [13]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [14]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [15]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[17]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [16]),
        .Q(\divisor0_reg[17]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[18]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [17]),
        .Q(\divisor0_reg[18]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[19]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [18]),
        .Q(\divisor0_reg[19]_inv_n_0 ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [0]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[20]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [19]),
        .Q(\divisor0_reg[20]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[21]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [20]),
        .Q(\divisor0_reg[21]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[22]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [21]),
        .Q(\divisor0_reg[22]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[23]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [22]),
        .Q(\divisor0_reg[23]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[24]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [23]),
        .Q(\divisor0_reg[24]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[25]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [24]),
        .Q(\divisor0_reg[25]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[26]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [25]),
        .Q(\divisor0_reg[26]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[27]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [26]),
        .Q(\divisor0_reg[27]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[28]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [27]),
        .Q(\divisor0_reg[28]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[29]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [28]),
        .Q(\divisor0_reg[29]_inv_n_0 ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [1]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[30]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [29]),
        .Q(\divisor0_reg[30]_inv_n_0 ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[31]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [30]),
        .Q(\divisor0_reg[31]_inv_n_0 ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [2]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [3]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [4]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [5]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [6]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [7]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[31]_inv_0 [8]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'h6C)) 
    \quot[1]_i_1 
       (.I0(\dividend_tmp_reg[0]_0 ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\0 ),
        .O(D[0]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT4 #(
    .INIT(16'h1EF0)) 
    \quot[2]_i_1 
       (.I0(\dividend_tmp_reg[0]_0 ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\dividend_tmp_reg_n_0_[2] ),
        .I3(\0 ),
        .O(D[1]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT5 #(
    .INIT(32'h01FEFF00)) 
    \quot[3]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg[0]_0 ),
        .I2(\dividend_tmp_reg_n_0_[2] ),
        .I3(\dividend_tmp_reg_n_0_[3] ),
        .I4(\0 ),
        .O(D[2]));
  LUT6 #(
    .INIT(64'h0001FFFEFFFF0000)) 
    \quot[4]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg[0]_0 ),
        .I2(\dividend_tmp_reg_n_0_[1] ),
        .I3(\dividend_tmp_reg_n_0_[3] ),
        .I4(\dividend_tmp_reg_n_0_[4] ),
        .I5(\0 ),
        .O(D[3]));
  LUT4 #(
    .INIT(16'h2D78)) 
    \quot[5]_i_1 
       (.I0(\quot[5]_i_2_n_0 ),
        .I1(\dividend_tmp_reg_n_0_[4] ),
        .I2(\dividend_tmp_reg_n_0_[5] ),
        .I3(\0 ),
        .O(D[4]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT5 #(
    .INIT(32'h00000010)) 
    \quot[5]_i_2 
       (.I0(\dividend_tmp_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\0 ),
        .I3(\dividend_tmp_reg[0]_0 ),
        .I4(\dividend_tmp_reg_n_0_[2] ),
        .O(\quot[5]_i_2_n_0 ));
  FDRE \r_stage_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[16]_0 ),
        .Q(\r_stage_reg_n_0_[16] ),
        .R(ap_rst));
  FDRE \r_stage_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[16] ),
        .Q(\r_stage_reg[17]_0 ),
        .R(ap_rst));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[0]_i_1__0 
       (.I0(\dividend_tmp_reg_n_0_[16] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[10]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[9] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_5),
        .O(\remd_tmp[10]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[11]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[10] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_4),
        .O(\remd_tmp[11]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[12]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[11] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_7),
        .O(\remd_tmp[12]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[13]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[12] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_6),
        .O(\remd_tmp[13]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[14]_i_1 
       (.I0(\remd_tmp_reg_n_0_[13] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_5),
        .O(\remd_tmp[14]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[15]_i_1 
       (.I0(\remd_tmp_reg_n_0_[14] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_4),
        .O(\remd_tmp[15]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_4),
        .O(\remd_tmp[7]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[8]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_7),
        .O(\remd_tmp[8]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[9]_i_1__0 
       (.I0(\remd_tmp_reg_n_0_[8] ),
        .I1(\dividend_tmp_reg[1]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_6),
        .O(\remd_tmp[9]_i_1__0_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[10]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[11]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[12]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[13]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[14]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[15]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[1]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[2]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[3]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[4]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[5]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[6]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[7]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[8]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[9]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \sign0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[1]),
        .Q(\0 ),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_udiv_15ns_17ns_8_19_seq_1
   (E,
    \r_stage_reg[0] ,
    r_stage_reg_r_7,
    \r_stage_reg[15] ,
    D,
    ap_clk,
    ap_rst,
    ap_start,
    Q,
    p_5,
    add_ln17_fu_126_p2);
  output [0:0]E;
  output \r_stage_reg[0] ;
  output r_stage_reg_r_7;
  output [0:0]\r_stage_reg[15] ;
  output [7:0]D;
  input ap_clk;
  input ap_rst;
  input ap_start;
  input [0:0]Q;
  input [15:0]p_5;
  input [7:0]add_ln17_fu_126_p2;

  wire [7:0]D;
  wire [0:0]E;
  wire [0:0]Q;
  wire [7:0]add_ln17_fu_126_p2;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire [15:0]p_5;
  wire \r_stage_reg[0] ;
  wire [0:0]\r_stage_reg[15] ;
  wire r_stage_reg_r_7;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_udiv_15ns_17ns_8_19_seq_1_div fn1_udiv_15ns_17ns_8_19_seq_1_div_U
       (.D(D),
        .E(E),
        .Q(Q),
        .add_ln17_fu_126_p2(add_ln17_fu_126_p2),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p_5(p_5),
        .\r_stage_reg[0] (\r_stage_reg[0] ),
        .\r_stage_reg[15] (\r_stage_reg[15] ),
        .r_stage_reg_r_7(r_stage_reg_r_7));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_udiv_15ns_17ns_8_19_seq_1_div
   (E,
    \r_stage_reg[0] ,
    r_stage_reg_r_7,
    \r_stage_reg[15] ,
    D,
    ap_clk,
    ap_rst,
    ap_start,
    Q,
    p_5,
    add_ln17_fu_126_p2);
  output [0:0]E;
  output \r_stage_reg[0] ;
  output r_stage_reg_r_7;
  output [0:0]\r_stage_reg[15] ;
  output [7:0]D;
  input ap_clk;
  input ap_rst;
  input ap_start;
  input [0:0]Q;
  input [15:0]p_5;
  input [7:0]add_ln17_fu_126_p2;

  wire [7:0]D;
  wire [0:0]E;
  wire [0:0]Q;
  wire [7:0]add_ln17_fu_126_p2;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire [7:0]dividend_tmp;
  wire \divisor0[12]_i_2_n_0 ;
  wire \divisor0[4]_i_2_n_0 ;
  wire \divisor0[8]_i_2_n_0 ;
  wire \divisor0[8]_i_3_n_0 ;
  wire \divisor0_reg[12]_i_1_n_0 ;
  wire \divisor0_reg[12]_i_1_n_1 ;
  wire \divisor0_reg[12]_i_1_n_2 ;
  wire \divisor0_reg[12]_i_1_n_3 ;
  wire \divisor0_reg[16]_i_1_n_2 ;
  wire \divisor0_reg[16]_i_1_n_3 ;
  wire \divisor0_reg[4]_i_1_n_0 ;
  wire \divisor0_reg[4]_i_1_n_1 ;
  wire \divisor0_reg[4]_i_1_n_2 ;
  wire \divisor0_reg[4]_i_1_n_3 ;
  wire \divisor0_reg[8]_i_1_n_0 ;
  wire \divisor0_reg[8]_i_1_n_1 ;
  wire \divisor0_reg[8]_i_1_n_2 ;
  wire \divisor0_reg[8]_i_1_n_3 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[11] ;
  wire \divisor0_reg_n_0_[12] ;
  wire \divisor0_reg_n_0_[13] ;
  wire \divisor0_reg_n_0_[14] ;
  wire \divisor0_reg_n_0_[15] ;
  wire \divisor0_reg_n_0_[16] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire grp_fu_80_ap_start;
  wire [16:0]grp_fu_80_p1;
  wire [7:0]grp_fu_80_p2;
  wire [15:0]p_5;
  wire \r_stage_reg[0] ;
  wire [0:0]\r_stage_reg[15] ;
  wire r_stage_reg_r_7;
  wire [2:2]\NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_divisor0_reg[16]_i_1_O_UNCONNECTED ;

  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[0]_i_1 
       (.I0(p_5[0]),
        .O(grp_fu_80_p1[0]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_2 
       (.I0(p_5[9]),
        .O(\divisor0[12]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_2 
       (.I0(p_5[4]),
        .O(\divisor0[4]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_2 
       (.I0(p_5[7]),
        .O(\divisor0[8]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3 
       (.I0(p_5[6]),
        .O(\divisor0[8]_i_3_n_0 ));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[12]_i_1 
       (.CI(\divisor0_reg[8]_i_1_n_0 ),
        .CO({\divisor0_reg[12]_i_1_n_0 ,\divisor0_reg[12]_i_1_n_1 ,\divisor0_reg[12]_i_1_n_2 ,\divisor0_reg[12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,p_5[9]}),
        .O(grp_fu_80_p1[12:9]),
        .S({p_5[12:10],\divisor0[12]_i_2_n_0 }));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[16]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[16]_i_1 
       (.CI(\divisor0_reg[12]_i_1_n_0 ),
        .CO({grp_fu_80_p1[16],\NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED [2],\divisor0_reg[16]_i_1_n_2 ,\divisor0_reg[16]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_divisor0_reg[16]_i_1_O_UNCONNECTED [3],grp_fu_80_p1[15:13]}),
        .S({1'b1,p_5[15:13]}));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[4]_i_1 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_1_n_0 ,\divisor0_reg[4]_i_1_n_1 ,\divisor0_reg[4]_i_1_n_2 ,\divisor0_reg[4]_i_1_n_3 }),
        .CYINIT(p_5[0]),
        .DI({p_5[4],1'b0,1'b0,1'b0}),
        .O(grp_fu_80_p1[4:1]),
        .S({\divisor0[4]_i_2_n_0 ,p_5[3:1]}));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[8]_i_1 
       (.CI(\divisor0_reg[4]_i_1_n_0 ),
        .CO({\divisor0_reg[8]_i_1_n_0 ,\divisor0_reg[8]_i_1_n_1 ,\divisor0_reg[8]_i_1_n_2 ,\divisor0_reg[8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,p_5[7:6],1'b0}),
        .O(grp_fu_80_p1[8:5]),
        .S({p_5[8],\divisor0[8]_i_2_n_0 ,\divisor0[8]_i_3_n_0 ,p_5[5]}));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_udiv_15ns_17ns_8_19_seq_1_div_u fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0
       (.D(dividend_tmp),
        .E(E),
        .Q({\divisor0_reg_n_0_[16] ,\divisor0_reg_n_0_[15] ,\divisor0_reg_n_0_[14] ,\divisor0_reg_n_0_[13] ,\divisor0_reg_n_0_[12] ,\divisor0_reg_n_0_[11] ,\divisor0_reg_n_0_[10] ,\divisor0_reg_n_0_[9] ,\divisor0_reg_n_0_[8] ,\divisor0_reg_n_0_[7] ,\divisor0_reg_n_0_[6] ,\divisor0_reg_n_0_[5] ,\divisor0_reg_n_0_[4] ,\divisor0_reg_n_0_[3] ,\divisor0_reg_n_0_[2] ,\divisor0_reg_n_0_[1] ,\divisor0_reg_n_0_[0] }),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\r_stage_reg[0]_0 (\r_stage_reg[0] ),
        .\r_stage_reg[15]_0 (\r_stage_reg[15] ),
        .r_stage_reg_r_7_0(r_stage_reg_r_7));
  LUT2 #(
    .INIT(4'hE)) 
    \or_ln20_reg_196[0]_i_1 
       (.I0(grp_fu_80_p2[0]),
        .I1(add_ln17_fu_126_p2[0]),
        .O(D[0]));
  LUT2 #(
    .INIT(4'hE)) 
    \or_ln20_reg_196[1]_i_1 
       (.I0(grp_fu_80_p2[1]),
        .I1(add_ln17_fu_126_p2[1]),
        .O(D[1]));
  LUT2 #(
    .INIT(4'hE)) 
    \or_ln20_reg_196[2]_i_1 
       (.I0(grp_fu_80_p2[2]),
        .I1(add_ln17_fu_126_p2[2]),
        .O(D[2]));
  LUT2 #(
    .INIT(4'hE)) 
    \or_ln20_reg_196[3]_i_1 
       (.I0(grp_fu_80_p2[3]),
        .I1(add_ln17_fu_126_p2[3]),
        .O(D[3]));
  LUT2 #(
    .INIT(4'hE)) 
    \or_ln20_reg_196[4]_i_1 
       (.I0(grp_fu_80_p2[4]),
        .I1(add_ln17_fu_126_p2[4]),
        .O(D[4]));
  LUT2 #(
    .INIT(4'hE)) 
    \or_ln20_reg_196[5]_i_1 
       (.I0(grp_fu_80_p2[5]),
        .I1(add_ln17_fu_126_p2[5]),
        .O(D[5]));
  LUT2 #(
    .INIT(4'hE)) 
    \or_ln20_reg_196[6]_i_1 
       (.I0(grp_fu_80_p2[6]),
        .I1(add_ln17_fu_126_p2[6]),
        .O(D[6]));
  LUT2 #(
    .INIT(4'hE)) 
    \or_ln20_reg_196[7]_i_1 
       (.I0(grp_fu_80_p2[7]),
        .I1(add_ln17_fu_126_p2[7]),
        .O(D[7]));
  FDRE \quot_reg[0] 
       (.C(ap_clk),
        .CE(\r_stage_reg[15] ),
        .D(dividend_tmp[0]),
        .Q(grp_fu_80_p2[0]),
        .R(1'b0));
  FDRE \quot_reg[1] 
       (.C(ap_clk),
        .CE(\r_stage_reg[15] ),
        .D(dividend_tmp[1]),
        .Q(grp_fu_80_p2[1]),
        .R(1'b0));
  FDRE \quot_reg[2] 
       (.C(ap_clk),
        .CE(\r_stage_reg[15] ),
        .D(dividend_tmp[2]),
        .Q(grp_fu_80_p2[2]),
        .R(1'b0));
  FDRE \quot_reg[3] 
       (.C(ap_clk),
        .CE(\r_stage_reg[15] ),
        .D(dividend_tmp[3]),
        .Q(grp_fu_80_p2[3]),
        .R(1'b0));
  FDRE \quot_reg[4] 
       (.C(ap_clk),
        .CE(\r_stage_reg[15] ),
        .D(dividend_tmp[4]),
        .Q(grp_fu_80_p2[4]),
        .R(1'b0));
  FDRE \quot_reg[5] 
       (.C(ap_clk),
        .CE(\r_stage_reg[15] ),
        .D(dividend_tmp[5]),
        .Q(grp_fu_80_p2[5]),
        .R(1'b0));
  FDRE \quot_reg[6] 
       (.C(ap_clk),
        .CE(\r_stage_reg[15] ),
        .D(dividend_tmp[6]),
        .Q(grp_fu_80_p2[6]),
        .R(1'b0));
  FDRE \quot_reg[7] 
       (.C(ap_clk),
        .CE(\r_stage_reg[15] ),
        .D(dividend_tmp[7]),
        .Q(grp_fu_80_p2[7]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    start0_i_1
       (.I0(ap_start),
        .I1(Q),
        .O(grp_fu_80_ap_start));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_80_ap_start),
        .Q(E),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_udiv_15ns_17ns_8_19_seq_1_div_u
   (\r_stage_reg[0]_0 ,
    r_stage_reg_r_7_0,
    \r_stage_reg[15]_0 ,
    D,
    ap_rst,
    E,
    ap_clk,
    Q);
  output \r_stage_reg[0]_0 ;
  output r_stage_reg_r_7_0;
  output [0:0]\r_stage_reg[15]_0 ;
  output [7:0]D;
  input ap_rst;
  input [0:0]E;
  input ap_clk;
  input [16:0]Q;

  wire [7:0]D;
  wire [0:0]E;
  wire [16:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire cal_tmp_carry__0_i_5_n_0;
  wire cal_tmp_carry__0_i_6_n_0;
  wire cal_tmp_carry__0_i_7_n_0;
  wire cal_tmp_carry__0_i_8_n_0;
  wire cal_tmp_carry__0_n_0;
  wire cal_tmp_carry__0_n_1;
  wire cal_tmp_carry__0_n_2;
  wire cal_tmp_carry__0_n_3;
  wire cal_tmp_carry__0_n_4;
  wire cal_tmp_carry__0_n_5;
  wire cal_tmp_carry__0_n_6;
  wire cal_tmp_carry__0_n_7;
  wire cal_tmp_carry__1_i_5_n_0;
  wire cal_tmp_carry__1_i_6_n_0;
  wire cal_tmp_carry__1_i_7_n_0;
  wire cal_tmp_carry__1_i_8_n_0;
  wire cal_tmp_carry__1_n_0;
  wire cal_tmp_carry__1_n_1;
  wire cal_tmp_carry__1_n_2;
  wire cal_tmp_carry__1_n_3;
  wire cal_tmp_carry__1_n_4;
  wire cal_tmp_carry__1_n_5;
  wire cal_tmp_carry__1_n_6;
  wire cal_tmp_carry__1_n_7;
  wire cal_tmp_carry__2_i_5_n_0;
  wire cal_tmp_carry__2_i_6_n_0;
  wire cal_tmp_carry__2_i_7_n_0;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
  wire cal_tmp_carry__2_n_6;
  wire cal_tmp_carry__2_n_7;
  wire cal_tmp_carry_i_5_n_0;
  wire cal_tmp_carry_i_6_n_0;
  wire cal_tmp_carry_i_7_n_0;
  wire cal_tmp_carry_i_8_n_0;
  wire cal_tmp_carry_n_0;
  wire cal_tmp_carry_n_1;
  wire cal_tmp_carry_n_2;
  wire cal_tmp_carry_n_3;
  wire cal_tmp_carry_n_4;
  wire cal_tmp_carry_n_5;
  wire cal_tmp_carry_n_6;
  wire cal_tmp_carry_n_7;
  wire [14:8]dividend_tmp;
  wire \dividend_tmp[11]_i_1__0_n_0 ;
  wire \dividend_tmp[3]_i_1__0_n_0 ;
  wire \dividend_tmp[4]_i_1__0_n_0 ;
  wire \dividend_tmp[7]_i_1__0_n_0 ;
  wire \dividend_tmp[8]_i_1__0_n_0 ;
  wire \dividend_tmp[9]_i_1__0_n_0 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[11] ;
  wire \divisor0_reg_n_0_[12] ;
  wire \divisor0_reg_n_0_[13] ;
  wire \divisor0_reg_n_0_[14] ;
  wire \divisor0_reg_n_0_[15] ;
  wire \divisor0_reg_n_0_[16] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire [16:15]p_0_in;
  wire p_0_in_0;
  wire p_1_in0;
  wire [0:0]p_2_out;
  wire \r_stage_reg[0]_0 ;
  wire \r_stage_reg[13]_srl13___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_11_n_0 ;
  wire \r_stage_reg[14]_udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_12_n_0 ;
  wire [0:0]\r_stage_reg[15]_0 ;
  wire r_stage_reg_gate_n_0;
  wire r_stage_reg_r_0_n_0;
  wire r_stage_reg_r_10_n_0;
  wire r_stage_reg_r_11_n_0;
  wire r_stage_reg_r_12_n_0;
  wire r_stage_reg_r_1_n_0;
  wire r_stage_reg_r_2_n_0;
  wire r_stage_reg_r_3_n_0;
  wire r_stage_reg_r_4_n_0;
  wire r_stage_reg_r_5_n_0;
  wire r_stage_reg_r_6_n_0;
  wire r_stage_reg_r_7_0;
  wire r_stage_reg_r_8_n_0;
  wire r_stage_reg_r_9_n_0;
  wire r_stage_reg_r_n_0;
  wire [13:0]remd_tmp;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp[10]_i_1_n_0 ;
  wire \remd_tmp[11]_i_1_n_0 ;
  wire \remd_tmp[12]_i_1_n_0 ;
  wire \remd_tmp[13]_i_1_n_0 ;
  wire \remd_tmp[1]_i_1_n_0 ;
  wire \remd_tmp[2]_i_1_n_0 ;
  wire \remd_tmp[3]_i_1_n_0 ;
  wire \remd_tmp[4]_i_1_n_0 ;
  wire \remd_tmp[5]_i_1_n_0 ;
  wire \remd_tmp[6]_i_1_n_0 ;
  wire \remd_tmp[7]_i_1_n_0 ;
  wire \remd_tmp[8]_i_1_n_0 ;
  wire \remd_tmp[9]_i_1_n_0 ;
  wire [13:0]remd_tmp_mux;
  wire [3:2]NLW_cal_tmp_carry__2_O_UNCONNECTED;
  wire [3:1]NLW_cal_tmp_carry__3_CO_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({remd_tmp_mux[2:0],p_1_in0}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_5_n_0,cal_tmp_carry_i_6_n_0,cal_tmp_carry_i_7_n_0,cal_tmp_carry_i_8_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI(remd_tmp_mux[6:3]),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_5_n_0,cal_tmp_carry__0_i_6_n_0,cal_tmp_carry__0_i_7_n_0,cal_tmp_carry__0_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1
       (.I0(remd_tmp[6]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[6]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(remd_tmp[5]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[5]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(remd_tmp[4]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[4]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4
       (.I0(remd_tmp[3]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[3]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[6]),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[5]),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[4]),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_8
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[3]),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_8_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI(remd_tmp_mux[10:7]),
        .O({cal_tmp_carry__1_n_4,cal_tmp_carry__1_n_5,cal_tmp_carry__1_n_6,cal_tmp_carry__1_n_7}),
        .S({cal_tmp_carry__1_i_5_n_0,cal_tmp_carry__1_i_6_n_0,cal_tmp_carry__1_i_7_n_0,cal_tmp_carry__1_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_1
       (.I0(remd_tmp[10]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[10]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_2
       (.I0(remd_tmp[9]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[9]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_3
       (.I0(remd_tmp[8]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[8]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_4
       (.I0(remd_tmp[7]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[7]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_5
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[10]),
        .I2(\divisor0_reg_n_0_[11] ),
        .O(cal_tmp_carry__1_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_6
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[9]),
        .I2(\divisor0_reg_n_0_[10] ),
        .O(cal_tmp_carry__1_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_7
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[8]),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_8
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[7]),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_8_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,remd_tmp_mux[13:11]}),
        .O({NLW_cal_tmp_carry__2_O_UNCONNECTED[3:2],cal_tmp_carry__2_n_6,cal_tmp_carry__2_n_7}),
        .S({p_0_in[15],cal_tmp_carry__2_i_5_n_0,cal_tmp_carry__2_i_6_n_0,cal_tmp_carry__2_i_7_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_1
       (.I0(remd_tmp[13]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[13]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_2
       (.I0(remd_tmp[12]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[12]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_3
       (.I0(remd_tmp[11]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[11]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_4
       (.I0(\divisor0_reg_n_0_[15] ),
        .O(p_0_in[15]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_5
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[13]),
        .I2(\divisor0_reg_n_0_[14] ),
        .O(cal_tmp_carry__2_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_6
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[12]),
        .I2(\divisor0_reg_n_0_[13] ),
        .O(cal_tmp_carry__2_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_7
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[11]),
        .I2(\divisor0_reg_n_0_[12] ),
        .O(cal_tmp_carry__2_i_7_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({NLW_cal_tmp_carry__3_CO_UNCONNECTED[3:1],p_2_out}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__3_O_UNCONNECTED[3:2],p_0_in_0,NLW_cal_tmp_carry__3_O_UNCONNECTED[0]}),
        .S({1'b0,1'b0,1'b1,p_0_in[16]}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_1
       (.I0(\divisor0_reg_n_0_[16] ),
        .O(p_0_in[16]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1
       (.I0(remd_tmp[2]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[2]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(remd_tmp[1]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[1]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3
       (.I0(remd_tmp[0]),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[0]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_4
       (.I0(dividend_tmp[14]),
        .I1(\r_stage_reg[0]_0 ),
        .O(p_1_in0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[2]),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[1]),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_7
       (.I0(\r_stage_reg[0]_0 ),
        .I1(remd_tmp[0]),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_7_n_0));
  LUT3 #(
    .INIT(8'h2D)) 
    cal_tmp_carry_i_8
       (.I0(dividend_tmp[14]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_8_n_0));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[11]_i_1__0 
       (.I0(dividend_tmp[10]),
        .I1(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[11]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[3]_i_1__0 
       (.I0(D[2]),
        .I1(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[3]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[4]_i_1__0 
       (.I0(D[3]),
        .I1(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[4]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[7]_i_1__0 
       (.I0(D[6]),
        .I1(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[7]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[8]_i_1__0 
       (.I0(D[7]),
        .I1(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[8]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[9]_i_1__0 
       (.I0(dividend_tmp[8]),
        .I1(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[9]_i_1__0_n_0 ));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_2_out),
        .Q(D[0]),
        .R(1'b0));
  FDSE \dividend_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[9]),
        .Q(dividend_tmp[10]),
        .S(\r_stage_reg[0]_0 ));
  FDRE \dividend_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[11]_i_1__0_n_0 ),
        .Q(dividend_tmp[11]),
        .R(1'b0));
  FDSE \dividend_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[11]),
        .Q(dividend_tmp[12]),
        .S(\r_stage_reg[0]_0 ));
  FDSE \dividend_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[12]),
        .Q(dividend_tmp[13]),
        .S(\r_stage_reg[0]_0 ));
  FDSE \dividend_tmp_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[13]),
        .Q(dividend_tmp[14]),
        .S(\r_stage_reg[0]_0 ));
  FDSE \dividend_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[0]),
        .Q(D[1]),
        .S(\r_stage_reg[0]_0 ));
  FDSE \dividend_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[1]),
        .Q(D[2]),
        .S(\r_stage_reg[0]_0 ));
  FDRE \dividend_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[3]_i_1__0_n_0 ),
        .Q(D[3]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[4]_i_1__0_n_0 ),
        .Q(D[4]),
        .R(1'b0));
  FDSE \dividend_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[4]),
        .Q(D[5]),
        .S(\r_stage_reg[0]_0 ));
  FDSE \dividend_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[5]),
        .Q(D[6]),
        .S(\r_stage_reg[0]_0 ));
  FDRE \dividend_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[7]_i_1__0_n_0 ),
        .Q(D[7]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[8]_i_1__0_n_0 ),
        .Q(dividend_tmp[8]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[9]_i_1__0_n_0 ),
        .Q(dividend_tmp[9]),
        .R(1'b0));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[16]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg[0]_0 ),
        .R(ap_rst));
  (* srl_bus_name = "inst/\udiv_15ns_17ns_8_19_seq_1_U1/fn1_udiv_15ns_17ns_8_19_seq_1_div_U/fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\udiv_15ns_17ns_8_19_seq_1_U1/fn1_udiv_15ns_17ns_8_19_seq_1_div_U/fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0/r_stage_reg[13]_srl13___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_11 " *) 
  SRL16E \r_stage_reg[13]_srl13___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_11 
       (.A0(1'b0),
        .A1(1'b0),
        .A2(1'b1),
        .A3(1'b1),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg[0]_0 ),
        .Q(\r_stage_reg[13]_srl13___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_11_n_0 ));
  FDRE \r_stage_reg[14]_udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_12 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[13]_srl13___udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_11_n_0 ),
        .Q(\r_stage_reg[14]_udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_12_n_0 ),
        .R(1'b0));
  FDRE \r_stage_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_gate_n_0),
        .Q(\r_stage_reg[15]_0 ),
        .R(ap_rst));
  LUT2 #(
    .INIT(4'h8)) 
    r_stage_reg_gate
       (.I0(\r_stage_reg[14]_udiv_15ns_17ns_8_19_seq_1_U1_fn1_udiv_15ns_17ns_8_19_seq_1_div_U_fn1_udiv_15ns_17ns_8_19_seq_1_div_u_0_r_stage_reg_r_12_n_0 ),
        .I1(r_stage_reg_r_12_n_0),
        .O(r_stage_reg_gate_n_0));
  FDRE r_stage_reg_r
       (.C(ap_clk),
        .CE(1'b1),
        .D(1'b1),
        .Q(r_stage_reg_r_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_0
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_n_0),
        .Q(r_stage_reg_r_0_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_1
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_0_n_0),
        .Q(r_stage_reg_r_1_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_10
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_9_n_0),
        .Q(r_stage_reg_r_10_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_11
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_10_n_0),
        .Q(r_stage_reg_r_11_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_12
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_11_n_0),
        .Q(r_stage_reg_r_12_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_2
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_1_n_0),
        .Q(r_stage_reg_r_2_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_3
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_2_n_0),
        .Q(r_stage_reg_r_3_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_4
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_3_n_0),
        .Q(r_stage_reg_r_4_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_5
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_4_n_0),
        .Q(r_stage_reg_r_5_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_6
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_5_n_0),
        .Q(r_stage_reg_r_6_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_7
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_6_n_0),
        .Q(r_stage_reg_r_7_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_8
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_7_0),
        .Q(r_stage_reg_r_8_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_9
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_8_n_0),
        .Q(r_stage_reg_r_9_n_0),
        .R(ap_rst));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[0]_i_1 
       (.I0(dividend_tmp[14]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[10]_i_1 
       (.I0(remd_tmp[9]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__1_n_5),
        .O(\remd_tmp[10]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[11]_i_1 
       (.I0(remd_tmp[10]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__1_n_4),
        .O(\remd_tmp[11]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[12]_i_1 
       (.I0(remd_tmp[11]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__2_n_7),
        .O(\remd_tmp[12]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[13]_i_1 
       (.I0(remd_tmp[12]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__2_n_6),
        .O(\remd_tmp[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1 
       (.I0(remd_tmp[0]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1 
       (.I0(remd_tmp[1]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1 
       (.I0(remd_tmp[2]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1 
       (.I0(remd_tmp[3]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(remd_tmp[4]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1 
       (.I0(remd_tmp[5]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1 
       (.I0(remd_tmp[6]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_4),
        .O(\remd_tmp[7]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[8]_i_1 
       (.I0(remd_tmp[7]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__1_n_7),
        .O(\remd_tmp[8]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[9]_i_1 
       (.I0(remd_tmp[8]),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__1_n_6),
        .O(\remd_tmp[9]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1_n_0 ),
        .Q(remd_tmp[0]),
        .R(1'b0));
  FDRE \remd_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[10]_i_1_n_0 ),
        .Q(remd_tmp[10]),
        .R(1'b0));
  FDRE \remd_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[11]_i_1_n_0 ),
        .Q(remd_tmp[11]),
        .R(1'b0));
  FDRE \remd_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[12]_i_1_n_0 ),
        .Q(remd_tmp[12]),
        .R(1'b0));
  FDRE \remd_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[13]_i_1_n_0 ),
        .Q(remd_tmp[13]),
        .R(1'b0));
  FDRE \remd_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[1]_i_1_n_0 ),
        .Q(remd_tmp[1]),
        .R(1'b0));
  FDRE \remd_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[2]_i_1_n_0 ),
        .Q(remd_tmp[2]),
        .R(1'b0));
  FDRE \remd_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[3]_i_1_n_0 ),
        .Q(remd_tmp[3]),
        .R(1'b0));
  FDRE \remd_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[4]_i_1_n_0 ),
        .Q(remd_tmp[4]),
        .R(1'b0));
  FDRE \remd_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[5]_i_1_n_0 ),
        .Q(remd_tmp[5]),
        .R(1'b0));
  FDRE \remd_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[6]_i_1_n_0 ),
        .Q(remd_tmp[6]),
        .R(1'b0));
  FDRE \remd_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[7]_i_1_n_0 ),
        .Q(remd_tmp[7]),
        .R(1'b0));
  FDRE \remd_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[8]_i_1_n_0 ),
        .Q(remd_tmp[8]),
        .R(1'b0));
  FDRE \remd_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[9]_i_1_n_0 ),
        .Q(remd_tmp[9]),
        .R(1'b0));
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
