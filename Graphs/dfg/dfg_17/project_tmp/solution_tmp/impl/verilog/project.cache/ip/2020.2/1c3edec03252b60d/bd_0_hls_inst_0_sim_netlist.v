// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Mon Apr 12 04:40:10 2021
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
    p);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [63:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p, LAYERED_METADATA undef" *) input [15:0]p;

  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire [63:0]ap_return;
  wire ap_rst;
  wire ap_start;
  wire [15:0]p;

  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "42'b000000000000000000000000000000000000000001" *) 
  (* ap_ST_fsm_state10 = "42'b000000000000000000000000000000001000000000" *) 
  (* ap_ST_fsm_state11 = "42'b000000000000000000000000000000010000000000" *) 
  (* ap_ST_fsm_state12 = "42'b000000000000000000000000000000100000000000" *) 
  (* ap_ST_fsm_state13 = "42'b000000000000000000000000000001000000000000" *) 
  (* ap_ST_fsm_state14 = "42'b000000000000000000000000000010000000000000" *) 
  (* ap_ST_fsm_state15 = "42'b000000000000000000000000000100000000000000" *) 
  (* ap_ST_fsm_state16 = "42'b000000000000000000000000001000000000000000" *) 
  (* ap_ST_fsm_state17 = "42'b000000000000000000000000010000000000000000" *) 
  (* ap_ST_fsm_state18 = "42'b000000000000000000000000100000000000000000" *) 
  (* ap_ST_fsm_state19 = "42'b000000000000000000000001000000000000000000" *) 
  (* ap_ST_fsm_state2 = "42'b000000000000000000000000000000000000000010" *) 
  (* ap_ST_fsm_state20 = "42'b000000000000000000000010000000000000000000" *) 
  (* ap_ST_fsm_state21 = "42'b000000000000000000000100000000000000000000" *) 
  (* ap_ST_fsm_state22 = "42'b000000000000000000001000000000000000000000" *) 
  (* ap_ST_fsm_state23 = "42'b000000000000000000010000000000000000000000" *) 
  (* ap_ST_fsm_state24 = "42'b000000000000000000100000000000000000000000" *) 
  (* ap_ST_fsm_state25 = "42'b000000000000000001000000000000000000000000" *) 
  (* ap_ST_fsm_state26 = "42'b000000000000000010000000000000000000000000" *) 
  (* ap_ST_fsm_state27 = "42'b000000000000000100000000000000000000000000" *) 
  (* ap_ST_fsm_state28 = "42'b000000000000001000000000000000000000000000" *) 
  (* ap_ST_fsm_state29 = "42'b000000000000010000000000000000000000000000" *) 
  (* ap_ST_fsm_state3 = "42'b000000000000000000000000000000000000000100" *) 
  (* ap_ST_fsm_state30 = "42'b000000000000100000000000000000000000000000" *) 
  (* ap_ST_fsm_state31 = "42'b000000000001000000000000000000000000000000" *) 
  (* ap_ST_fsm_state32 = "42'b000000000010000000000000000000000000000000" *) 
  (* ap_ST_fsm_state33 = "42'b000000000100000000000000000000000000000000" *) 
  (* ap_ST_fsm_state34 = "42'b000000001000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state35 = "42'b000000010000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state36 = "42'b000000100000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state37 = "42'b000001000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state38 = "42'b000010000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state39 = "42'b000100000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state4 = "42'b000000000000000000000000000000000000001000" *) 
  (* ap_ST_fsm_state40 = "42'b001000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state41 = "42'b010000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state42 = "42'b100000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state5 = "42'b000000000000000000000000000000000000010000" *) 
  (* ap_ST_fsm_state6 = "42'b000000000000000000000000000000000000100000" *) 
  (* ap_ST_fsm_state7 = "42'b000000000000000000000000000000000001000000" *) 
  (* ap_ST_fsm_state8 = "42'b000000000000000000000000000000000010000000" *) 
  (* ap_ST_fsm_state9 = "42'b000000000000000000000000000000000100000000" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1 inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p(p));
endmodule

(* ap_ST_fsm_state1 = "42'b000000000000000000000000000000000000000001" *) (* ap_ST_fsm_state10 = "42'b000000000000000000000000000000001000000000" *) (* ap_ST_fsm_state11 = "42'b000000000000000000000000000000010000000000" *) 
(* ap_ST_fsm_state12 = "42'b000000000000000000000000000000100000000000" *) (* ap_ST_fsm_state13 = "42'b000000000000000000000000000001000000000000" *) (* ap_ST_fsm_state14 = "42'b000000000000000000000000000010000000000000" *) 
(* ap_ST_fsm_state15 = "42'b000000000000000000000000000100000000000000" *) (* ap_ST_fsm_state16 = "42'b000000000000000000000000001000000000000000" *) (* ap_ST_fsm_state17 = "42'b000000000000000000000000010000000000000000" *) 
(* ap_ST_fsm_state18 = "42'b000000000000000000000000100000000000000000" *) (* ap_ST_fsm_state19 = "42'b000000000000000000000001000000000000000000" *) (* ap_ST_fsm_state2 = "42'b000000000000000000000000000000000000000010" *) 
(* ap_ST_fsm_state20 = "42'b000000000000000000000010000000000000000000" *) (* ap_ST_fsm_state21 = "42'b000000000000000000000100000000000000000000" *) (* ap_ST_fsm_state22 = "42'b000000000000000000001000000000000000000000" *) 
(* ap_ST_fsm_state23 = "42'b000000000000000000010000000000000000000000" *) (* ap_ST_fsm_state24 = "42'b000000000000000000100000000000000000000000" *) (* ap_ST_fsm_state25 = "42'b000000000000000001000000000000000000000000" *) 
(* ap_ST_fsm_state26 = "42'b000000000000000010000000000000000000000000" *) (* ap_ST_fsm_state27 = "42'b000000000000000100000000000000000000000000" *) (* ap_ST_fsm_state28 = "42'b000000000000001000000000000000000000000000" *) 
(* ap_ST_fsm_state29 = "42'b000000000000010000000000000000000000000000" *) (* ap_ST_fsm_state3 = "42'b000000000000000000000000000000000000000100" *) (* ap_ST_fsm_state30 = "42'b000000000000100000000000000000000000000000" *) 
(* ap_ST_fsm_state31 = "42'b000000000001000000000000000000000000000000" *) (* ap_ST_fsm_state32 = "42'b000000000010000000000000000000000000000000" *) (* ap_ST_fsm_state33 = "42'b000000000100000000000000000000000000000000" *) 
(* ap_ST_fsm_state34 = "42'b000000001000000000000000000000000000000000" *) (* ap_ST_fsm_state35 = "42'b000000010000000000000000000000000000000000" *) (* ap_ST_fsm_state36 = "42'b000000100000000000000000000000000000000000" *) 
(* ap_ST_fsm_state37 = "42'b000001000000000000000000000000000000000000" *) (* ap_ST_fsm_state38 = "42'b000010000000000000000000000000000000000000" *) (* ap_ST_fsm_state39 = "42'b000100000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state4 = "42'b000000000000000000000000000000000000001000" *) (* ap_ST_fsm_state40 = "42'b001000000000000000000000000000000000000000" *) (* ap_ST_fsm_state41 = "42'b010000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state42 = "42'b100000000000000000000000000000000000000000" *) (* ap_ST_fsm_state5 = "42'b000000000000000000000000000000000000010000" *) (* ap_ST_fsm_state6 = "42'b000000000000000000000000000000000000100000" *) 
(* ap_ST_fsm_state7 = "42'b000000000000000000000000000000000001000000" *) (* ap_ST_fsm_state8 = "42'b000000000000000000000000000000000010000000" *) (* ap_ST_fsm_state9 = "42'b000000000000000000000000000000000100000000" *) 
(* hls_module = "yes" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p,
    ap_return);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [15:0]p;
  output [63:0]ap_return;

  wire [30:1]add_ln24_fu_84_p2;
  wire [30:1]add_ln24_reg_187;
  wire \add_ln24_reg_187[13]_i_6_n_0 ;
  wire \add_ln24_reg_187[13]_i_7_n_0 ;
  wire \add_ln24_reg_187[17]_i_6_n_0 ;
  wire \add_ln24_reg_187[17]_i_7_n_0 ;
  wire \add_ln24_reg_187[21]_i_10_n_0 ;
  wire \add_ln24_reg_187[21]_i_11_n_0 ;
  wire \add_ln24_reg_187[21]_i_12_n_0 ;
  wire \add_ln24_reg_187[21]_i_13_n_0 ;
  wire \add_ln24_reg_187[21]_i_6_n_0 ;
  wire \add_ln24_reg_187[21]_i_7_n_0 ;
  wire \add_ln24_reg_187[21]_i_8_n_0 ;
  wire \add_ln24_reg_187[21]_i_9_n_0 ;
  wire \add_ln24_reg_187[25]_i_6_n_0 ;
  wire \add_ln24_reg_187[25]_i_7_n_0 ;
  wire \add_ln24_reg_187[25]_i_8_n_0 ;
  wire \add_ln24_reg_187[25]_i_9_n_0 ;
  wire \add_ln24_reg_187[29]_i_6_n_0 ;
  wire \add_ln24_reg_187[29]_i_7_n_0 ;
  wire \add_ln24_reg_187[29]_i_8_n_0 ;
  wire \add_ln24_reg_187[5]_i_5_n_0 ;
  wire \add_ln24_reg_187[9]_i_3_n_0 ;
  wire \add_ln24_reg_187[9]_i_4_n_0 ;
  wire \add_ln24_reg_187[9]_i_5_n_0 ;
  wire \add_ln24_reg_187[9]_i_6_n_0 ;
  wire \add_ln24_reg_187[9]_i_7_n_0 ;
  wire \add_ln24_reg_187_reg[13]_i_1_n_0 ;
  wire \add_ln24_reg_187_reg[13]_i_1_n_1 ;
  wire \add_ln24_reg_187_reg[13]_i_1_n_2 ;
  wire \add_ln24_reg_187_reg[13]_i_1_n_3 ;
  wire \add_ln24_reg_187_reg[17]_i_1_n_0 ;
  wire \add_ln24_reg_187_reg[17]_i_1_n_1 ;
  wire \add_ln24_reg_187_reg[17]_i_1_n_2 ;
  wire \add_ln24_reg_187_reg[17]_i_1_n_3 ;
  wire \add_ln24_reg_187_reg[21]_i_1_n_0 ;
  wire \add_ln24_reg_187_reg[21]_i_1_n_1 ;
  wire \add_ln24_reg_187_reg[21]_i_1_n_2 ;
  wire \add_ln24_reg_187_reg[21]_i_1_n_3 ;
  wire \add_ln24_reg_187_reg[25]_i_1_n_0 ;
  wire \add_ln24_reg_187_reg[25]_i_1_n_1 ;
  wire \add_ln24_reg_187_reg[25]_i_1_n_2 ;
  wire \add_ln24_reg_187_reg[25]_i_1_n_3 ;
  wire \add_ln24_reg_187_reg[29]_i_1_n_0 ;
  wire \add_ln24_reg_187_reg[29]_i_1_n_1 ;
  wire \add_ln24_reg_187_reg[29]_i_1_n_2 ;
  wire \add_ln24_reg_187_reg[29]_i_1_n_3 ;
  wire \add_ln24_reg_187_reg[5]_i_1_n_0 ;
  wire \add_ln24_reg_187_reg[5]_i_1_n_1 ;
  wire \add_ln24_reg_187_reg[5]_i_1_n_2 ;
  wire \add_ln24_reg_187_reg[5]_i_1_n_3 ;
  wire \add_ln24_reg_187_reg[9]_i_1_n_0 ;
  wire \add_ln24_reg_187_reg[9]_i_1_n_1 ;
  wire \add_ln24_reg_187_reg[9]_i_1_n_2 ;
  wire \add_ln24_reg_187_reg[9]_i_1_n_3 ;
  wire \ap_CS_fsm[1]_i_2_n_0 ;
  wire \ap_CS_fsm[1]_i_3_n_0 ;
  wire \ap_CS_fsm[1]_i_4_n_0 ;
  wire \ap_CS_fsm[1]_i_5_n_0 ;
  wire \ap_CS_fsm[1]_i_6_n_0 ;
  wire \ap_CS_fsm[1]_i_7_n_0 ;
  wire \ap_CS_fsm[1]_i_8_n_0 ;
  wire \ap_CS_fsm[1]_i_9_n_0 ;
  wire \ap_CS_fsm_reg_n_0_[10] ;
  wire \ap_CS_fsm_reg_n_0_[12] ;
  wire \ap_CS_fsm_reg_n_0_[13] ;
  wire \ap_CS_fsm_reg_n_0_[14] ;
  wire \ap_CS_fsm_reg_n_0_[15] ;
  wire \ap_CS_fsm_reg_n_0_[16] ;
  wire \ap_CS_fsm_reg_n_0_[17] ;
  wire \ap_CS_fsm_reg_n_0_[18] ;
  wire \ap_CS_fsm_reg_n_0_[19] ;
  wire \ap_CS_fsm_reg_n_0_[20] ;
  wire \ap_CS_fsm_reg_n_0_[22] ;
  wire \ap_CS_fsm_reg_n_0_[23] ;
  wire \ap_CS_fsm_reg_n_0_[24] ;
  wire \ap_CS_fsm_reg_n_0_[25] ;
  wire \ap_CS_fsm_reg_n_0_[26] ;
  wire \ap_CS_fsm_reg_n_0_[27] ;
  wire \ap_CS_fsm_reg_n_0_[28] ;
  wire \ap_CS_fsm_reg_n_0_[29] ;
  wire \ap_CS_fsm_reg_n_0_[2] ;
  wire \ap_CS_fsm_reg_n_0_[30] ;
  wire \ap_CS_fsm_reg_n_0_[31] ;
  wire \ap_CS_fsm_reg_n_0_[32] ;
  wire \ap_CS_fsm_reg_n_0_[33] ;
  wire \ap_CS_fsm_reg_n_0_[34] ;
  wire \ap_CS_fsm_reg_n_0_[35] ;
  wire \ap_CS_fsm_reg_n_0_[36] ;
  wire \ap_CS_fsm_reg_n_0_[37] ;
  wire \ap_CS_fsm_reg_n_0_[38] ;
  wire \ap_CS_fsm_reg_n_0_[39] ;
  wire \ap_CS_fsm_reg_n_0_[3] ;
  wire \ap_CS_fsm_reg_n_0_[40] ;
  wire \ap_CS_fsm_reg_n_0_[4] ;
  wire \ap_CS_fsm_reg_n_0_[5] ;
  wire \ap_CS_fsm_reg_n_0_[6] ;
  wire \ap_CS_fsm_reg_n_0_[7] ;
  wire \ap_CS_fsm_reg_n_0_[8] ;
  wire \ap_CS_fsm_reg_n_0_[9] ;
  wire ap_CS_fsm_state1;
  wire ap_CS_fsm_state12;
  wire ap_CS_fsm_state22;
  wire [1:0]ap_NS_fsm;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire [15:0]\^ap_return ;
  wire ap_rst;
  wire ap_start;
  wire [15:0]p;
  wire sdiv_17s_17ns_3_21_seq_1_U2_n_0;
  wire sdiv_17s_17ns_3_21_seq_1_U2_n_3;
  wire [30:1]shl_ln24_fu_78_p2;
  wire srem_17s_32ns_16_21_seq_1_U3_n_0;
  wire srem_17s_32ns_16_21_seq_1_U3_n_1;
  wire srem_17s_32ns_16_21_seq_1_U3_n_10;
  wire srem_17s_32ns_16_21_seq_1_U3_n_11;
  wire srem_17s_32ns_16_21_seq_1_U3_n_12;
  wire srem_17s_32ns_16_21_seq_1_U3_n_13;
  wire srem_17s_32ns_16_21_seq_1_U3_n_14;
  wire srem_17s_32ns_16_21_seq_1_U3_n_15;
  wire srem_17s_32ns_16_21_seq_1_U3_n_16;
  wire srem_17s_32ns_16_21_seq_1_U3_n_17;
  wire srem_17s_32ns_16_21_seq_1_U3_n_18;
  wire srem_17s_32ns_16_21_seq_1_U3_n_19;
  wire srem_17s_32ns_16_21_seq_1_U3_n_2;
  wire srem_17s_32ns_16_21_seq_1_U3_n_20;
  wire srem_17s_32ns_16_21_seq_1_U3_n_21;
  wire srem_17s_32ns_16_21_seq_1_U3_n_22;
  wire srem_17s_32ns_16_21_seq_1_U3_n_23;
  wire srem_17s_32ns_16_21_seq_1_U3_n_24;
  wire srem_17s_32ns_16_21_seq_1_U3_n_25;
  wire srem_17s_32ns_16_21_seq_1_U3_n_3;
  wire srem_17s_32ns_16_21_seq_1_U3_n_4;
  wire srem_17s_32ns_16_21_seq_1_U3_n_5;
  wire srem_17s_32ns_16_21_seq_1_U3_n_6;
  wire srem_17s_32ns_16_21_seq_1_U3_n_7;
  wire srem_17s_32ns_16_21_seq_1_U3_n_8;
  wire srem_17s_32ns_16_21_seq_1_U3_n_9;
  wire [15:0]srem_ln24_reg_217;
  wire start;
  wire [2:1]sub_ln19_fu_130_p2;
  wire [2:0]sub_ln19_reg_212;
  wire urem_8ns_11ns_3_12_seq_1_U1_n_0;
  wire urem_8ns_11ns_3_12_seq_1_U1_n_1;
  wire urem_8ns_11ns_3_12_seq_1_U1_n_2;
  wire [2:0]urem_ln20_reg_207;
  wire [3:0]\NLW_add_ln24_reg_187_reg[30]_i_1_CO_UNCONNECTED ;
  wire [3:1]\NLW_add_ln24_reg_187_reg[30]_i_1_O_UNCONNECTED ;

  assign ap_ready = ap_done;
  assign ap_return[63] = \^ap_return [15];
  assign ap_return[62] = \^ap_return [15];
  assign ap_return[61] = \^ap_return [15];
  assign ap_return[60] = \^ap_return [15];
  assign ap_return[59] = \^ap_return [15];
  assign ap_return[58] = \^ap_return [15];
  assign ap_return[57] = \^ap_return [15];
  assign ap_return[56] = \^ap_return [15];
  assign ap_return[55] = \^ap_return [15];
  assign ap_return[54] = \^ap_return [15];
  assign ap_return[53] = \^ap_return [15];
  assign ap_return[52] = \^ap_return [15];
  assign ap_return[51] = \^ap_return [15];
  assign ap_return[50] = \^ap_return [15];
  assign ap_return[49] = \^ap_return [15];
  assign ap_return[48] = \^ap_return [15];
  assign ap_return[47] = \^ap_return [15];
  assign ap_return[46] = \^ap_return [15];
  assign ap_return[45] = \^ap_return [15];
  assign ap_return[44] = \^ap_return [15];
  assign ap_return[43] = \^ap_return [15];
  assign ap_return[42] = \^ap_return [15];
  assign ap_return[41] = \^ap_return [15];
  assign ap_return[40] = \^ap_return [15];
  assign ap_return[39] = \^ap_return [15];
  assign ap_return[38] = \^ap_return [15];
  assign ap_return[37] = \^ap_return [15];
  assign ap_return[36] = \^ap_return [15];
  assign ap_return[35] = \^ap_return [15];
  assign ap_return[34] = \^ap_return [15];
  assign ap_return[33] = \^ap_return [15];
  assign ap_return[32] = \^ap_return [15];
  assign ap_return[31] = \^ap_return [15];
  assign ap_return[30] = \^ap_return [15];
  assign ap_return[29] = \^ap_return [15];
  assign ap_return[28] = \^ap_return [15];
  assign ap_return[27] = \^ap_return [15];
  assign ap_return[26] = \^ap_return [15];
  assign ap_return[25] = \^ap_return [15];
  assign ap_return[24] = \^ap_return [15];
  assign ap_return[23] = \^ap_return [15];
  assign ap_return[22] = \^ap_return [15];
  assign ap_return[21] = \^ap_return [15];
  assign ap_return[20] = \^ap_return [15];
  assign ap_return[19] = \^ap_return [15];
  assign ap_return[18] = \^ap_return [15];
  assign ap_return[17] = \^ap_return [15];
  assign ap_return[16] = \^ap_return [15];
  assign ap_return[15:0] = \^ap_return [15:0];
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \add_ln24_reg_187[13]_i_2 
       (.I0(\add_ln24_reg_187[13]_i_6_n_0 ),
        .I1(p[3]),
        .I2(\add_ln24_reg_187[21]_i_6_n_0 ),
        .I3(p[2]),
        .I4(\add_ln24_reg_187[21]_i_7_n_0 ),
        .O(shl_ln24_fu_78_p2[13]));
  LUT6 #(
    .INIT(64'h5150FFFF51500000)) 
    \add_ln24_reg_187[13]_i_3 
       (.I0(p[2]),
        .I1(p[1]),
        .I2(p[0]),
        .I3(p[4]),
        .I4(p[3]),
        .I5(\add_ln24_reg_187[13]_i_7_n_0 ),
        .O(shl_ln24_fu_78_p2[12]));
  LUT6 #(
    .INIT(64'h0F00BFBF0F00B0B0)) 
    \add_ln24_reg_187[13]_i_4 
       (.I0(p[1]),
        .I1(p[0]),
        .I2(p[3]),
        .I3(\add_ln24_reg_187[21]_i_10_n_0 ),
        .I4(p[2]),
        .I5(\add_ln24_reg_187[25]_i_8_n_0 ),
        .O(shl_ln24_fu_78_p2[11]));
  LUT4 #(
    .INIT(16'h4540)) 
    \add_ln24_reg_187[13]_i_5 
       (.I0(p[3]),
        .I1(\add_ln24_reg_187[21]_i_11_n_0 ),
        .I2(p[2]),
        .I3(\add_ln24_reg_187[21]_i_12_n_0 ),
        .O(shl_ln24_fu_78_p2[10]));
  LUT6 #(
    .INIT(64'h0F0A45450F0A4040)) 
    \add_ln24_reg_187[13]_i_6 
       (.I0(p[2]),
        .I1(p[3]),
        .I2(p[1]),
        .I3(p[4]),
        .I4(p[0]),
        .I5(p[5]),
        .O(\add_ln24_reg_187[13]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \add_ln24_reg_187[13]_i_7 
       (.I0(\add_ln24_reg_187[21]_i_9_n_0 ),
        .I1(p[2]),
        .I2(\add_ln24_reg_187[25]_i_7_n_0 ),
        .O(\add_ln24_reg_187[13]_i_7_n_0 ));
  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \add_ln24_reg_187[17]_i_2 
       (.I0(\add_ln24_reg_187[17]_i_6_n_0 ),
        .I1(p[2]),
        .I2(\add_ln24_reg_187[21]_i_6_n_0 ),
        .I3(p[3]),
        .I4(\add_ln24_reg_187[25]_i_6_n_0 ),
        .O(shl_ln24_fu_78_p2[17]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \add_ln24_reg_187[17]_i_3 
       (.I0(\add_ln24_reg_187[17]_i_7_n_0 ),
        .I1(p[3]),
        .I2(\add_ln24_reg_187[25]_i_7_n_0 ),
        .I3(p[2]),
        .I4(\add_ln24_reg_187[29]_i_6_n_0 ),
        .O(shl_ln24_fu_78_p2[16]));
  LUT5 #(
    .INIT(32'hFFCCB8B8)) 
    \add_ln24_reg_187[17]_i_4 
       (.I0(\add_ln24_reg_187[25]_i_8_n_0 ),
        .I1(p[2]),
        .I2(\add_ln24_reg_187[29]_i_7_n_0 ),
        .I3(\add_ln24_reg_187[21]_i_10_n_0 ),
        .I4(p[3]),
        .O(shl_ln24_fu_78_p2[15]));
  LUT6 #(
    .INIT(64'h1F10FFFF1F100000)) 
    \add_ln24_reg_187[17]_i_5 
       (.I0(p[1]),
        .I1(p[0]),
        .I2(p[2]),
        .I3(\add_ln24_reg_187[21]_i_11_n_0 ),
        .I4(p[3]),
        .I5(\add_ln24_reg_187[25]_i_9_n_0 ),
        .O(shl_ln24_fu_78_p2[14]));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[17]_i_6 
       (.I0(p[2]),
        .I1(p[3]),
        .I2(p[1]),
        .I3(p[4]),
        .I4(p[0]),
        .I5(p[5]),
        .O(\add_ln24_reg_187[17]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hEFEAFFFFEFEA0000)) 
    \add_ln24_reg_187[17]_i_7 
       (.I0(p[1]),
        .I1(p[3]),
        .I2(p[0]),
        .I3(p[4]),
        .I4(p[2]),
        .I5(\add_ln24_reg_187[21]_i_9_n_0 ),
        .O(\add_ln24_reg_187[17]_i_7_n_0 ));
  LUT4 #(
    .INIT(16'hFEFF)) 
    \add_ln24_reg_187[1]_i_1 
       (.I0(p[3]),
        .I1(p[2]),
        .I2(p[1]),
        .I3(p[0]),
        .O(add_ln24_fu_84_p2[1]));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[21]_i_10 
       (.I0(p[4]),
        .I1(p[5]),
        .I2(p[1]),
        .I3(p[6]),
        .I4(p[0]),
        .I5(p[7]),
        .O(\add_ln24_reg_187[21]_i_10_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[21]_i_11 
       (.I0(p[3]),
        .I1(p[4]),
        .I2(p[1]),
        .I3(p[5]),
        .I4(p[0]),
        .I5(p[6]),
        .O(\add_ln24_reg_187[21]_i_11_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[21]_i_12 
       (.I0(p[7]),
        .I1(p[8]),
        .I2(p[1]),
        .I3(p[9]),
        .I4(p[0]),
        .I5(p[10]),
        .O(\add_ln24_reg_187[21]_i_12_n_0 ));
  LUT5 #(
    .INIT(32'hB8888888)) 
    \add_ln24_reg_187[21]_i_13 
       (.I0(\add_ln24_reg_187[29]_i_8_n_0 ),
        .I1(p[2]),
        .I2(p[15]),
        .I3(p[1]),
        .I4(p[0]),
        .O(\add_ln24_reg_187[21]_i_13_n_0 ));
  LUT6 #(
    .INIT(64'hAFC0A0C0A0C0A0C0)) 
    \add_ln24_reg_187[21]_i_2 
       (.I0(\add_ln24_reg_187[21]_i_6_n_0 ),
        .I1(\add_ln24_reg_187[21]_i_7_n_0 ),
        .I2(p[3]),
        .I3(p[2]),
        .I4(p[1]),
        .I5(\add_ln24_reg_187[21]_i_8_n_0 ),
        .O(shl_ln24_fu_78_p2[21]));
  LUT5 #(
    .INIT(32'hAACCF000)) 
    \add_ln24_reg_187[21]_i_3 
       (.I0(\add_ln24_reg_187[21]_i_9_n_0 ),
        .I1(\add_ln24_reg_187[25]_i_7_n_0 ),
        .I2(\add_ln24_reg_187[29]_i_6_n_0 ),
        .I3(p[2]),
        .I4(p[3]),
        .O(shl_ln24_fu_78_p2[20]));
  LUT5 #(
    .INIT(32'hAACCF000)) 
    \add_ln24_reg_187[21]_i_4 
       (.I0(\add_ln24_reg_187[21]_i_10_n_0 ),
        .I1(\add_ln24_reg_187[25]_i_8_n_0 ),
        .I2(\add_ln24_reg_187[29]_i_7_n_0 ),
        .I3(p[2]),
        .I4(p[3]),
        .O(shl_ln24_fu_78_p2[19]));
  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \add_ln24_reg_187[21]_i_5 
       (.I0(\add_ln24_reg_187[21]_i_11_n_0 ),
        .I1(p[2]),
        .I2(\add_ln24_reg_187[21]_i_12_n_0 ),
        .I3(p[3]),
        .I4(\add_ln24_reg_187[21]_i_13_n_0 ),
        .O(shl_ln24_fu_78_p2[18]));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[21]_i_6 
       (.I0(p[6]),
        .I1(p[7]),
        .I2(p[1]),
        .I3(p[8]),
        .I4(p[0]),
        .I5(p[9]),
        .O(\add_ln24_reg_187[21]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[21]_i_7 
       (.I0(p[10]),
        .I1(p[11]),
        .I2(p[1]),
        .I3(p[12]),
        .I4(p[0]),
        .I5(p[13]),
        .O(\add_ln24_reg_187[21]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \add_ln24_reg_187[21]_i_8 
       (.I0(p[14]),
        .I1(p[0]),
        .I2(p[15]),
        .O(\add_ln24_reg_187[21]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[21]_i_9 
       (.I0(p[5]),
        .I1(p[6]),
        .I2(p[1]),
        .I3(p[7]),
        .I4(p[0]),
        .I5(p[8]),
        .O(\add_ln24_reg_187[21]_i_9_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \add_ln24_reg_187[25]_i_2 
       (.I0(p[3]),
        .I1(\add_ln24_reg_187[25]_i_6_n_0 ),
        .O(shl_ln24_fu_78_p2[25]));
  LUT4 #(
    .INIT(16'hA808)) 
    \add_ln24_reg_187[25]_i_3 
       (.I0(p[3]),
        .I1(\add_ln24_reg_187[29]_i_6_n_0 ),
        .I2(p[2]),
        .I3(\add_ln24_reg_187[25]_i_7_n_0 ),
        .O(shl_ln24_fu_78_p2[24]));
  LUT4 #(
    .INIT(16'hA808)) 
    \add_ln24_reg_187[25]_i_4 
       (.I0(p[3]),
        .I1(\add_ln24_reg_187[29]_i_7_n_0 ),
        .I2(p[2]),
        .I3(\add_ln24_reg_187[25]_i_8_n_0 ),
        .O(shl_ln24_fu_78_p2[23]));
  LUT6 #(
    .INIT(64'hAAAAAAAAC0000000)) 
    \add_ln24_reg_187[25]_i_5 
       (.I0(\add_ln24_reg_187[25]_i_9_n_0 ),
        .I1(p[15]),
        .I2(p[1]),
        .I3(p[0]),
        .I4(p[2]),
        .I5(p[3]),
        .O(shl_ln24_fu_78_p2[22]));
  LUT6 #(
    .INIT(64'hAAAAAAAACFC00000)) 
    \add_ln24_reg_187[25]_i_6 
       (.I0(\add_ln24_reg_187[21]_i_7_n_0 ),
        .I1(p[14]),
        .I2(p[0]),
        .I3(p[15]),
        .I4(p[1]),
        .I5(p[2]),
        .O(\add_ln24_reg_187[25]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[25]_i_7 
       (.I0(p[9]),
        .I1(p[10]),
        .I2(p[1]),
        .I3(p[11]),
        .I4(p[0]),
        .I5(p[12]),
        .O(\add_ln24_reg_187[25]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[25]_i_8 
       (.I0(p[8]),
        .I1(p[9]),
        .I2(p[1]),
        .I3(p[10]),
        .I4(p[0]),
        .I5(p[11]),
        .O(\add_ln24_reg_187[25]_i_8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \add_ln24_reg_187[25]_i_9 
       (.I0(\add_ln24_reg_187[21]_i_12_n_0 ),
        .I1(p[2]),
        .I2(\add_ln24_reg_187[29]_i_8_n_0 ),
        .O(\add_ln24_reg_187[25]_i_9_n_0 ));
  LUT6 #(
    .INIT(64'h8A80000000000000)) 
    \add_ln24_reg_187[29]_i_2 
       (.I0(p[3]),
        .I1(p[14]),
        .I2(p[0]),
        .I3(p[15]),
        .I4(p[1]),
        .I5(p[2]),
        .O(shl_ln24_fu_78_p2[29]));
  LUT3 #(
    .INIT(8'h80)) 
    \add_ln24_reg_187[29]_i_3 
       (.I0(p[3]),
        .I1(p[2]),
        .I2(\add_ln24_reg_187[29]_i_6_n_0 ),
        .O(shl_ln24_fu_78_p2[28]));
  LUT3 #(
    .INIT(8'h80)) 
    \add_ln24_reg_187[29]_i_4 
       (.I0(p[3]),
        .I1(p[2]),
        .I2(\add_ln24_reg_187[29]_i_7_n_0 ),
        .O(shl_ln24_fu_78_p2[27]));
  LUT6 #(
    .INIT(64'hAAAA800000008000)) 
    \add_ln24_reg_187[29]_i_5 
       (.I0(p[3]),
        .I1(p[0]),
        .I2(p[1]),
        .I3(p[15]),
        .I4(p[2]),
        .I5(\add_ln24_reg_187[29]_i_8_n_0 ),
        .O(shl_ln24_fu_78_p2[26]));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT5 #(
    .INIT(32'hAFC0A0C0)) 
    \add_ln24_reg_187[29]_i_6 
       (.I0(p[13]),
        .I1(p[14]),
        .I2(p[1]),
        .I3(p[0]),
        .I4(p[15]),
        .O(\add_ln24_reg_187[29]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[29]_i_7 
       (.I0(p[12]),
        .I1(p[13]),
        .I2(p[1]),
        .I3(p[14]),
        .I4(p[0]),
        .I5(p[15]),
        .O(\add_ln24_reg_187[29]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \add_ln24_reg_187[29]_i_8 
       (.I0(p[11]),
        .I1(p[12]),
        .I2(p[1]),
        .I3(p[13]),
        .I4(p[0]),
        .I5(p[14]),
        .O(\add_ln24_reg_187[29]_i_8_n_0 ));
  LUT5 #(
    .INIT(32'h80000000)) 
    \add_ln24_reg_187[30]_i_2 
       (.I0(p[3]),
        .I1(p[2]),
        .I2(p[0]),
        .I3(p[1]),
        .I4(p[15]),
        .O(shl_ln24_fu_78_p2[30]));
  LUT4 #(
    .INIT(16'h0002)) 
    \add_ln24_reg_187[5]_i_2 
       (.I0(p[0]),
        .I1(p[1]),
        .I2(p[2]),
        .I3(p[3]),
        .O(shl_ln24_fu_78_p2[1]));
  LUT5 #(
    .INIT(32'h00000C02)) 
    \add_ln24_reg_187[5]_i_3 
       (.I0(p[4]),
        .I1(p[0]),
        .I2(p[3]),
        .I3(p[1]),
        .I4(p[2]),
        .O(shl_ln24_fu_78_p2[4]));
  LUT6 #(
    .INIT(64'h0000000000CC00E2)) 
    \add_ln24_reg_187[5]_i_4 
       (.I0(p[5]),
        .I1(p[0]),
        .I2(p[4]),
        .I3(p[1]),
        .I4(p[2]),
        .I5(p[3]),
        .O(shl_ln24_fu_78_p2[5]));
  LUT5 #(
    .INIT(32'hFBFEFBFF)) 
    \add_ln24_reg_187[5]_i_5 
       (.I0(p[2]),
        .I1(p[1]),
        .I2(p[3]),
        .I3(p[0]),
        .I4(p[4]),
        .O(\add_ln24_reg_187[5]_i_5_n_0 ));
  LUT3 #(
    .INIT(8'h10)) 
    \add_ln24_reg_187[5]_i_6 
       (.I0(p[3]),
        .I1(p[2]),
        .I2(p[1]),
        .O(shl_ln24_fu_78_p2[3]));
  LUT6 #(
    .INIT(64'h0F004F4F0F004040)) 
    \add_ln24_reg_187[9]_i_2 
       (.I0(p[1]),
        .I1(p[0]),
        .I2(p[3]),
        .I3(\add_ln24_reg_187[17]_i_6_n_0 ),
        .I4(p[2]),
        .I5(\add_ln24_reg_187[21]_i_6_n_0 ),
        .O(shl_ln24_fu_78_p2[9]));
  LUT6 #(
    .INIT(64'h2322333323220000)) 
    \add_ln24_reg_187[9]_i_3 
       (.I0(p[1]),
        .I1(p[3]),
        .I2(p[0]),
        .I3(p[4]),
        .I4(p[2]),
        .I5(\add_ln24_reg_187[21]_i_9_n_0 ),
        .O(\add_ln24_reg_187[9]_i_3_n_0 ));
  LUT5 #(
    .INIT(32'h0E0F0E00)) 
    \add_ln24_reg_187[9]_i_4 
       (.I0(p[1]),
        .I1(p[0]),
        .I2(p[3]),
        .I3(p[2]),
        .I4(\add_ln24_reg_187[21]_i_10_n_0 ),
        .O(\add_ln24_reg_187[9]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'hFF1DFF1DCC1DFF1D)) 
    \add_ln24_reg_187[9]_i_5 
       (.I0(\add_ln24_reg_187[21]_i_6_n_0 ),
        .I1(p[2]),
        .I2(\add_ln24_reg_187[17]_i_6_n_0 ),
        .I3(p[3]),
        .I4(p[0]),
        .I5(p[1]),
        .O(\add_ln24_reg_187[9]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'hFFFF1111FFFFDD1D)) 
    \add_ln24_reg_187[9]_i_6 
       (.I0(\add_ln24_reg_187[21]_i_9_n_0 ),
        .I1(p[2]),
        .I2(p[4]),
        .I3(p[0]),
        .I4(p[3]),
        .I5(p[1]),
        .O(\add_ln24_reg_187[9]_i_6_n_0 ));
  LUT5 #(
    .INIT(32'hF1F1F1FD)) 
    \add_ln24_reg_187[9]_i_7 
       (.I0(\add_ln24_reg_187[21]_i_10_n_0 ),
        .I1(p[2]),
        .I2(p[3]),
        .I3(p[0]),
        .I4(p[1]),
        .O(\add_ln24_reg_187[9]_i_7_n_0 ));
  LUT5 #(
    .INIT(32'h0000222E)) 
    \add_ln24_reg_187[9]_i_8 
       (.I0(\add_ln24_reg_187[21]_i_11_n_0 ),
        .I1(p[2]),
        .I2(p[0]),
        .I3(p[1]),
        .I4(p[3]),
        .O(shl_ln24_fu_78_p2[6]));
  FDRE \add_ln24_reg_187_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[10]),
        .Q(add_ln24_reg_187[10]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[11]),
        .Q(add_ln24_reg_187[11]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[12]),
        .Q(add_ln24_reg_187[12]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[13]),
        .Q(add_ln24_reg_187[13]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \add_ln24_reg_187_reg[13]_i_1 
       (.CI(\add_ln24_reg_187_reg[9]_i_1_n_0 ),
        .CO({\add_ln24_reg_187_reg[13]_i_1_n_0 ,\add_ln24_reg_187_reg[13]_i_1_n_1 ,\add_ln24_reg_187_reg[13]_i_1_n_2 ,\add_ln24_reg_187_reg[13]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(add_ln24_fu_84_p2[13:10]),
        .S(shl_ln24_fu_78_p2[13:10]));
  FDRE \add_ln24_reg_187_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[14]),
        .Q(add_ln24_reg_187[14]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[15]),
        .Q(add_ln24_reg_187[15]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[16] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[16]),
        .Q(add_ln24_reg_187[16]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[17] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[17]),
        .Q(add_ln24_reg_187[17]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \add_ln24_reg_187_reg[17]_i_1 
       (.CI(\add_ln24_reg_187_reg[13]_i_1_n_0 ),
        .CO({\add_ln24_reg_187_reg[17]_i_1_n_0 ,\add_ln24_reg_187_reg[17]_i_1_n_1 ,\add_ln24_reg_187_reg[17]_i_1_n_2 ,\add_ln24_reg_187_reg[17]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(add_ln24_fu_84_p2[17:14]),
        .S(shl_ln24_fu_78_p2[17:14]));
  FDRE \add_ln24_reg_187_reg[18] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[18]),
        .Q(add_ln24_reg_187[18]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[19] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[19]),
        .Q(add_ln24_reg_187[19]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[1]),
        .Q(add_ln24_reg_187[1]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[20] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[20]),
        .Q(add_ln24_reg_187[20]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[21] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[21]),
        .Q(add_ln24_reg_187[21]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \add_ln24_reg_187_reg[21]_i_1 
       (.CI(\add_ln24_reg_187_reg[17]_i_1_n_0 ),
        .CO({\add_ln24_reg_187_reg[21]_i_1_n_0 ,\add_ln24_reg_187_reg[21]_i_1_n_1 ,\add_ln24_reg_187_reg[21]_i_1_n_2 ,\add_ln24_reg_187_reg[21]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(add_ln24_fu_84_p2[21:18]),
        .S(shl_ln24_fu_78_p2[21:18]));
  FDRE \add_ln24_reg_187_reg[22] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[22]),
        .Q(add_ln24_reg_187[22]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[23] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[23]),
        .Q(add_ln24_reg_187[23]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[24] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[24]),
        .Q(add_ln24_reg_187[24]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[25] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[25]),
        .Q(add_ln24_reg_187[25]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \add_ln24_reg_187_reg[25]_i_1 
       (.CI(\add_ln24_reg_187_reg[21]_i_1_n_0 ),
        .CO({\add_ln24_reg_187_reg[25]_i_1_n_0 ,\add_ln24_reg_187_reg[25]_i_1_n_1 ,\add_ln24_reg_187_reg[25]_i_1_n_2 ,\add_ln24_reg_187_reg[25]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(add_ln24_fu_84_p2[25:22]),
        .S(shl_ln24_fu_78_p2[25:22]));
  FDRE \add_ln24_reg_187_reg[26] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[26]),
        .Q(add_ln24_reg_187[26]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[27] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[27]),
        .Q(add_ln24_reg_187[27]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[28] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[28]),
        .Q(add_ln24_reg_187[28]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[29] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[29]),
        .Q(add_ln24_reg_187[29]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \add_ln24_reg_187_reg[29]_i_1 
       (.CI(\add_ln24_reg_187_reg[25]_i_1_n_0 ),
        .CO({\add_ln24_reg_187_reg[29]_i_1_n_0 ,\add_ln24_reg_187_reg[29]_i_1_n_1 ,\add_ln24_reg_187_reg[29]_i_1_n_2 ,\add_ln24_reg_187_reg[29]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(add_ln24_fu_84_p2[29:26]),
        .S(shl_ln24_fu_78_p2[29:26]));
  FDRE \add_ln24_reg_187_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[2]),
        .Q(add_ln24_reg_187[2]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[30] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[30]),
        .Q(add_ln24_reg_187[30]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \add_ln24_reg_187_reg[30]_i_1 
       (.CI(\add_ln24_reg_187_reg[29]_i_1_n_0 ),
        .CO(\NLW_add_ln24_reg_187_reg[30]_i_1_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_add_ln24_reg_187_reg[30]_i_1_O_UNCONNECTED [3:1],add_ln24_fu_84_p2[30]}),
        .S({1'b0,1'b0,1'b0,shl_ln24_fu_78_p2[30]}));
  FDRE \add_ln24_reg_187_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[3]),
        .Q(add_ln24_reg_187[3]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[4]),
        .Q(add_ln24_reg_187[4]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[5]),
        .Q(add_ln24_reg_187[5]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \add_ln24_reg_187_reg[5]_i_1 
       (.CI(1'b0),
        .CO({\add_ln24_reg_187_reg[5]_i_1_n_0 ,\add_ln24_reg_187_reg[5]_i_1_n_1 ,\add_ln24_reg_187_reg[5]_i_1_n_2 ,\add_ln24_reg_187_reg[5]_i_1_n_3 }),
        .CYINIT(shl_ln24_fu_78_p2[1]),
        .DI({1'b0,shl_ln24_fu_78_p2[4],1'b0,1'b0}),
        .O(add_ln24_fu_84_p2[5:2]),
        .S({shl_ln24_fu_78_p2[5],\add_ln24_reg_187[5]_i_5_n_0 ,shl_ln24_fu_78_p2[3],1'b1}));
  FDRE \add_ln24_reg_187_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[6]),
        .Q(add_ln24_reg_187[6]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[7]),
        .Q(add_ln24_reg_187[7]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[8]),
        .Q(add_ln24_reg_187[8]),
        .R(1'b0));
  FDRE \add_ln24_reg_187_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state1),
        .D(add_ln24_fu_84_p2[9]),
        .Q(add_ln24_reg_187[9]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \add_ln24_reg_187_reg[9]_i_1 
       (.CI(\add_ln24_reg_187_reg[5]_i_1_n_0 ),
        .CO({\add_ln24_reg_187_reg[9]_i_1_n_0 ,\add_ln24_reg_187_reg[9]_i_1_n_1 ,\add_ln24_reg_187_reg[9]_i_1_n_2 ,\add_ln24_reg_187_reg[9]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({shl_ln24_fu_78_p2[9],\add_ln24_reg_187[9]_i_3_n_0 ,\add_ln24_reg_187[9]_i_4_n_0 ,1'b0}),
        .O(add_ln24_fu_84_p2[9:6]),
        .S({\add_ln24_reg_187[9]_i_5_n_0 ,\add_ln24_reg_187[9]_i_6_n_0 ,\add_ln24_reg_187[9]_i_7_n_0 ,shl_ln24_fu_78_p2[6]}));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT3 #(
    .INIT(8'hF4)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(ap_start),
        .I1(ap_CS_fsm_state1),
        .I2(ap_done),
        .O(ap_NS_fsm[0]));
  LUT3 #(
    .INIT(8'h80)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(\ap_CS_fsm[1]_i_2_n_0 ),
        .I1(\ap_CS_fsm[1]_i_3_n_0 ),
        .I2(\ap_CS_fsm[1]_i_4_n_0 ),
        .O(ap_NS_fsm[1]));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(\ap_CS_fsm_reg_n_0_[32] ),
        .I1(\ap_CS_fsm_reg_n_0_[33] ),
        .I2(\ap_CS_fsm_reg_n_0_[30] ),
        .I3(\ap_CS_fsm_reg_n_0_[31] ),
        .I4(\ap_CS_fsm_reg_n_0_[35] ),
        .I5(\ap_CS_fsm_reg_n_0_[34] ),
        .O(\ap_CS_fsm[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_3 
       (.I0(\ap_CS_fsm_reg_n_0_[38] ),
        .I1(\ap_CS_fsm_reg_n_0_[39] ),
        .I2(\ap_CS_fsm_reg_n_0_[36] ),
        .I3(\ap_CS_fsm_reg_n_0_[37] ),
        .I4(ap_done),
        .I5(\ap_CS_fsm_reg_n_0_[40] ),
        .O(\ap_CS_fsm[1]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \ap_CS_fsm[1]_i_4 
       (.I0(\ap_CS_fsm[1]_i_5_n_0 ),
        .I1(\ap_CS_fsm[1]_i_6_n_0 ),
        .I2(\ap_CS_fsm[1]_i_7_n_0 ),
        .I3(\ap_CS_fsm[1]_i_8_n_0 ),
        .I4(ap_start),
        .I5(\ap_CS_fsm[1]_i_9_n_0 ),
        .O(\ap_CS_fsm[1]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_5 
       (.I0(\ap_CS_fsm_reg_n_0_[14] ),
        .I1(\ap_CS_fsm_reg_n_0_[15] ),
        .I2(\ap_CS_fsm_reg_n_0_[12] ),
        .I3(\ap_CS_fsm_reg_n_0_[13] ),
        .I4(\ap_CS_fsm_reg_n_0_[17] ),
        .I5(\ap_CS_fsm_reg_n_0_[16] ),
        .O(\ap_CS_fsm[1]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_6 
       (.I0(\ap_CS_fsm_reg_n_0_[8] ),
        .I1(\ap_CS_fsm_reg_n_0_[9] ),
        .I2(\ap_CS_fsm_reg_n_0_[6] ),
        .I3(\ap_CS_fsm_reg_n_0_[7] ),
        .I4(ap_CS_fsm_state12),
        .I5(\ap_CS_fsm_reg_n_0_[10] ),
        .O(\ap_CS_fsm[1]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_7 
       (.I0(\ap_CS_fsm_reg_n_0_[26] ),
        .I1(\ap_CS_fsm_reg_n_0_[27] ),
        .I2(\ap_CS_fsm_reg_n_0_[24] ),
        .I3(\ap_CS_fsm_reg_n_0_[25] ),
        .I4(\ap_CS_fsm_reg_n_0_[29] ),
        .I5(\ap_CS_fsm_reg_n_0_[28] ),
        .O(\ap_CS_fsm[1]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_8 
       (.I0(\ap_CS_fsm_reg_n_0_[20] ),
        .I1(ap_CS_fsm_state22),
        .I2(\ap_CS_fsm_reg_n_0_[18] ),
        .I3(\ap_CS_fsm_reg_n_0_[19] ),
        .I4(\ap_CS_fsm_reg_n_0_[23] ),
        .I5(\ap_CS_fsm_reg_n_0_[22] ),
        .O(\ap_CS_fsm[1]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000010)) 
    \ap_CS_fsm[1]_i_9 
       (.I0(\ap_CS_fsm_reg_n_0_[2] ),
        .I1(\ap_CS_fsm_reg_n_0_[3] ),
        .I2(ap_CS_fsm_state1),
        .I3(start),
        .I4(\ap_CS_fsm_reg_n_0_[5] ),
        .I5(\ap_CS_fsm_reg_n_0_[4] ),
        .O(\ap_CS_fsm[1]_i_9_n_0 ));
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
        .Q(ap_CS_fsm_state12),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state12),
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
        .Q(\ap_CS_fsm_reg_n_0_[18] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[18] ),
        .Q(\ap_CS_fsm_reg_n_0_[19] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[1]),
        .Q(start),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[19] ),
        .Q(\ap_CS_fsm_reg_n_0_[20] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[20] ),
        .Q(ap_CS_fsm_state22),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state22),
        .Q(\ap_CS_fsm_reg_n_0_[22] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[22] ),
        .Q(\ap_CS_fsm_reg_n_0_[23] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[23] ),
        .Q(\ap_CS_fsm_reg_n_0_[24] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[24] ),
        .Q(\ap_CS_fsm_reg_n_0_[25] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[25] ),
        .Q(\ap_CS_fsm_reg_n_0_[26] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[26] ),
        .Q(\ap_CS_fsm_reg_n_0_[27] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[27] ),
        .Q(\ap_CS_fsm_reg_n_0_[28] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[28] ),
        .Q(\ap_CS_fsm_reg_n_0_[29] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(start),
        .Q(\ap_CS_fsm_reg_n_0_[2] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[29] ),
        .Q(\ap_CS_fsm_reg_n_0_[30] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[30] ),
        .Q(\ap_CS_fsm_reg_n_0_[31] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[32] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[31] ),
        .Q(\ap_CS_fsm_reg_n_0_[32] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[33] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[32] ),
        .Q(\ap_CS_fsm_reg_n_0_[33] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[34] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[33] ),
        .Q(\ap_CS_fsm_reg_n_0_[34] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[35] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[34] ),
        .Q(\ap_CS_fsm_reg_n_0_[35] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[36] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[35] ),
        .Q(\ap_CS_fsm_reg_n_0_[36] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[37] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[36] ),
        .Q(\ap_CS_fsm_reg_n_0_[37] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[38] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[37] ),
        .Q(\ap_CS_fsm_reg_n_0_[38] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[39] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[38] ),
        .Q(\ap_CS_fsm_reg_n_0_[39] ),
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
    \ap_CS_fsm_reg[40] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[39] ),
        .Q(\ap_CS_fsm_reg_n_0_[40] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[41] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[40] ),
        .Q(ap_done),
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
        .Q(\ap_CS_fsm_reg_n_0_[8] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[8] ),
        .Q(\ap_CS_fsm_reg_n_0_[9] ),
        .R(ap_rst));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(ap_CS_fsm_state1),
        .I1(ap_start),
        .O(ap_idle));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17s_17ns_3_21_seq_1 sdiv_17s_17ns_3_21_seq_1_U2
       (.D({sub_ln19_fu_130_p2,sdiv_17s_17ns_3_21_seq_1_U2_n_3}),
        .E(sdiv_17s_17ns_3_21_seq_1_U2_n_0),
        .Q(start),
        .ap_clk(ap_clk),
        .\dividend_tmp_reg[15] (srem_17s_32ns_16_21_seq_1_U3_n_6),
        .p(p),
        .\quot_reg[0] (srem_17s_32ns_16_21_seq_1_U3_n_9),
        .urem_ln20_reg_207(urem_ln20_reg_207));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_16ns_11ns_16_20_seq_1 srem_16ns_11ns_16_20_seq_1_U4
       (.Q(\ap_CS_fsm_reg_n_0_[22] ),
        .ap_clk(ap_clk),
        .ap_return(\^ap_return ),
        .ap_rst(ap_rst),
        .\dividend0_reg[15] (srem_ln24_reg_217),
        .\divisor0_reg[7] (sub_ln19_reg_212),
        .\r_stage_reg[16] (srem_17s_32ns_16_21_seq_1_U3_n_8));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_17s_32ns_16_21_seq_1 srem_17s_32ns_16_21_seq_1_U3
       (.D({srem_17s_32ns_16_21_seq_1_U3_n_0,srem_17s_32ns_16_21_seq_1_U3_n_1,srem_17s_32ns_16_21_seq_1_U3_n_2,srem_17s_32ns_16_21_seq_1_U3_n_3,srem_17s_32ns_16_21_seq_1_U3_n_4,srem_17s_32ns_16_21_seq_1_U3_n_5}),
        .E(sdiv_17s_17ns_3_21_seq_1_U2_n_0),
        .Q(add_ln24_reg_187),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .p(p),
        .\r_stage_reg[0] (srem_17s_32ns_16_21_seq_1_U3_n_6),
        .\r_stage_reg[17] (srem_17s_32ns_16_21_seq_1_U3_n_9),
        .r_stage_reg_r_13(srem_17s_32ns_16_21_seq_1_U3_n_8),
        .r_stage_reg_r_5(srem_17s_32ns_16_21_seq_1_U3_n_7),
        .\remd_reg[15] ({srem_17s_32ns_16_21_seq_1_U3_n_10,srem_17s_32ns_16_21_seq_1_U3_n_11,srem_17s_32ns_16_21_seq_1_U3_n_12,srem_17s_32ns_16_21_seq_1_U3_n_13,srem_17s_32ns_16_21_seq_1_U3_n_14,srem_17s_32ns_16_21_seq_1_U3_n_15,srem_17s_32ns_16_21_seq_1_U3_n_16,srem_17s_32ns_16_21_seq_1_U3_n_17,srem_17s_32ns_16_21_seq_1_U3_n_18,srem_17s_32ns_16_21_seq_1_U3_n_19,srem_17s_32ns_16_21_seq_1_U3_n_20,srem_17s_32ns_16_21_seq_1_U3_n_21,srem_17s_32ns_16_21_seq_1_U3_n_22,srem_17s_32ns_16_21_seq_1_U3_n_23,srem_17s_32ns_16_21_seq_1_U3_n_24,srem_17s_32ns_16_21_seq_1_U3_n_25}));
  FDRE \srem_ln24_reg_217_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_25),
        .Q(srem_ln24_reg_217[0]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_15),
        .Q(srem_ln24_reg_217[10]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_14),
        .Q(srem_ln24_reg_217[11]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_13),
        .Q(srem_ln24_reg_217[12]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_12),
        .Q(srem_ln24_reg_217[13]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_11),
        .Q(srem_ln24_reg_217[14]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_10),
        .Q(srem_ln24_reg_217[15]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_24),
        .Q(srem_ln24_reg_217[1]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_23),
        .Q(srem_ln24_reg_217[2]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_22),
        .Q(srem_ln24_reg_217[3]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_21),
        .Q(srem_ln24_reg_217[4]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_20),
        .Q(srem_ln24_reg_217[5]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_19),
        .Q(srem_ln24_reg_217[6]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_18),
        .Q(srem_ln24_reg_217[7]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_17),
        .Q(srem_ln24_reg_217[8]),
        .R(1'b0));
  FDRE \srem_ln24_reg_217_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(srem_17s_32ns_16_21_seq_1_U3_n_16),
        .Q(srem_ln24_reg_217[9]),
        .R(1'b0));
  FDRE \sub_ln19_reg_212_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sdiv_17s_17ns_3_21_seq_1_U2_n_3),
        .Q(sub_ln19_reg_212[0]),
        .R(1'b0));
  FDRE \sub_ln19_reg_212_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sub_ln19_fu_130_p2[1]),
        .Q(sub_ln19_reg_212[1]),
        .R(1'b0));
  FDRE \sub_ln19_reg_212_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state22),
        .D(sub_ln19_fu_130_p2[2]),
        .Q(sub_ln19_reg_212[2]),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_urem_8ns_11ns_3_12_seq_1 urem_8ns_11ns_3_12_seq_1_U1
       (.D({srem_17s_32ns_16_21_seq_1_U3_n_0,srem_17s_32ns_16_21_seq_1_U3_n_1,srem_17s_32ns_16_21_seq_1_U3_n_2,srem_17s_32ns_16_21_seq_1_U3_n_3,srem_17s_32ns_16_21_seq_1_U3_n_4,srem_17s_32ns_16_21_seq_1_U3_n_5}),
        .Q({ap_CS_fsm_state12,ap_CS_fsm_state1}),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p(p[7:6]),
        .\r_stage_reg[8] (srem_17s_32ns_16_21_seq_1_U3_n_7),
        .\remd_reg[0] (urem_8ns_11ns_3_12_seq_1_U1_n_2),
        .\remd_reg[1] (urem_8ns_11ns_3_12_seq_1_U1_n_1),
        .\remd_reg[2] (urem_8ns_11ns_3_12_seq_1_U1_n_0),
        .urem_ln20_reg_207(urem_ln20_reg_207));
  FDRE \urem_ln20_reg_207_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(urem_8ns_11ns_3_12_seq_1_U1_n_2),
        .Q(urem_ln20_reg_207[0]),
        .R(1'b0));
  FDRE \urem_ln20_reg_207_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(urem_8ns_11ns_3_12_seq_1_U1_n_1),
        .Q(urem_ln20_reg_207[1]),
        .R(1'b0));
  FDRE \urem_ln20_reg_207_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(urem_8ns_11ns_3_12_seq_1_U1_n_0),
        .Q(urem_ln20_reg_207[2]),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17s_17ns_3_21_seq_1
   (E,
    D,
    Q,
    ap_clk,
    \dividend_tmp_reg[15] ,
    p,
    urem_ln20_reg_207,
    \quot_reg[0] );
  output [0:0]E;
  output [2:0]D;
  input [0:0]Q;
  input ap_clk;
  input \dividend_tmp_reg[15] ;
  input [15:0]p;
  input [2:0]urem_ln20_reg_207;
  input [0:0]\quot_reg[0] ;

  wire [2:0]D;
  wire [0:0]E;
  wire [0:0]Q;
  wire ap_clk;
  wire \dividend_tmp_reg[15] ;
  wire [15:0]p;
  wire [0:0]\quot_reg[0] ;
  wire [2:0]urem_ln20_reg_207;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17s_17ns_3_21_seq_1_div fn1_sdiv_17s_17ns_3_21_seq_1_div_U
       (.D(D),
        .E(E),
        .Q(Q),
        .ap_clk(ap_clk),
        .\dividend_tmp_reg[15] (\dividend_tmp_reg[15] ),
        .p(p),
        .\quot_reg[0]_0 (\quot_reg[0] ),
        .urem_ln20_reg_207(urem_ln20_reg_207));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17s_17ns_3_21_seq_1_div
   (E,
    D,
    Q,
    ap_clk,
    \dividend_tmp_reg[15] ,
    p,
    urem_ln20_reg_207,
    \quot_reg[0]_0 );
  output [0:0]E;
  output [2:0]D;
  input [0:0]Q;
  input ap_clk;
  input \dividend_tmp_reg[15] ;
  input [15:0]p;
  input [2:0]urem_ln20_reg_207;
  input [0:0]\quot_reg[0]_0 ;

  wire \0 ;
  wire [2:0]D;
  wire [0:0]E;
  wire [0:0]Q;
  wire ap_clk;
  wire \dividend_tmp_reg[15] ;
  wire \divisor0[12]_i_3_n_0 ;
  wire \divisor0[12]_i_4_n_0 ;
  wire \divisor0[12]_i_5_n_0 ;
  wire \divisor0[12]_i_6_n_0 ;
  wire \divisor0[16]_i_3_n_0 ;
  wire \divisor0[16]_i_4_n_0 ;
  wire \divisor0[16]_i_5_n_0 ;
  wire \divisor0[16]_i_6_n_0 ;
  wire \divisor0[4]_i_2_n_0 ;
  wire \divisor0[4]_i_3__0_n_0 ;
  wire \divisor0[4]_i_3_n_0 ;
  wire \divisor0[4]_i_4__0_n_0 ;
  wire \divisor0[4]_i_4_n_0 ;
  wire \divisor0[4]_i_5_n_0 ;
  wire \divisor0[4]_i_6_n_0 ;
  wire \divisor0[4]_i_7_n_0 ;
  wire \divisor0[8]_i_2_n_0 ;
  wire \divisor0[8]_i_3__0_n_0 ;
  wire \divisor0[8]_i_3_n_0 ;
  wire \divisor0[8]_i_4_n_0 ;
  wire \divisor0[8]_i_5_n_0 ;
  wire \divisor0[8]_i_6_n_0 ;
  wire \divisor0_reg[12]_i_1_n_0 ;
  wire \divisor0_reg[12]_i_1_n_1 ;
  wire \divisor0_reg[12]_i_1_n_2 ;
  wire \divisor0_reg[12]_i_1_n_3 ;
  wire \divisor0_reg[12]_i_2_n_0 ;
  wire \divisor0_reg[12]_i_2_n_1 ;
  wire \divisor0_reg[12]_i_2_n_2 ;
  wire \divisor0_reg[12]_i_2_n_3 ;
  wire \divisor0_reg[16]_i_1_n_2 ;
  wire \divisor0_reg[16]_i_1_n_3 ;
  wire \divisor0_reg[16]_i_2_n_1 ;
  wire \divisor0_reg[16]_i_2_n_2 ;
  wire \divisor0_reg[16]_i_2_n_3 ;
  wire \divisor0_reg[4]_i_1_n_0 ;
  wire \divisor0_reg[4]_i_1_n_1 ;
  wire \divisor0_reg[4]_i_1_n_2 ;
  wire \divisor0_reg[4]_i_1_n_3 ;
  wire \divisor0_reg[4]_i_2_n_0 ;
  wire \divisor0_reg[4]_i_2_n_1 ;
  wire \divisor0_reg[4]_i_2_n_2 ;
  wire \divisor0_reg[4]_i_2_n_3 ;
  wire \divisor0_reg[8]_i_1_n_0 ;
  wire \divisor0_reg[8]_i_1_n_1 ;
  wire \divisor0_reg[8]_i_1_n_2 ;
  wire \divisor0_reg[8]_i_1_n_3 ;
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
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire [16:1]divisor_u;
  wire [16:1]divisor_u0;
  wire fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1;
  wire fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_2;
  wire fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_3;
  wire [16:0]grp_fu_99_p1;
  wire [15:0]p;
  wire p_0_in;
  wire [2:0]quot;
  wire \quot[1]_i_1_n_0 ;
  wire \quot[2]_i_1_n_0 ;
  wire [0:0]\quot_reg[0]_0 ;
  wire [2:0]urem_ln20_reg_207;
  wire [2:2]\NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_divisor0_reg[16]_i_1_O_UNCONNECTED ;
  wire [3:3]\NLW_divisor0_reg[16]_i_2_CO_UNCONNECTED ;

  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[0]_i_1 
       (.I0(p[0]),
        .O(grp_fu_99_p1[0]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[10]_i_1 
       (.I0(divisor_u0[10]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[10] ),
        .O(divisor_u[10]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[11]_i_1 
       (.I0(divisor_u0[11]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[11] ),
        .O(divisor_u[11]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
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
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[13]_i_1 
       (.I0(divisor_u0[13]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[13] ),
        .O(divisor_u[13]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[14]_i_1 
       (.I0(divisor_u0[14]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[14] ),
        .O(divisor_u[14]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[15]_i_1 
       (.I0(divisor_u0[15]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[15] ),
        .O(divisor_u[15]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \divisor0[16]_i_1 
       (.I0(p_0_in),
        .I1(divisor_u0[16]),
        .O(divisor_u[16]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_3 
       (.I0(p_0_in),
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
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[1]_i_1 
       (.I0(divisor_u0[1]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(divisor_u[1]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[2]_i_1 
       (.I0(divisor_u0[2]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(divisor_u[2]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[3]_i_1 
       (.I0(divisor_u0[3]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(divisor_u[3]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[4]_i_1 
       (.I0(divisor_u0[4]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(divisor_u[4]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_2 
       (.I0(p[4]),
        .O(\divisor0[4]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3 
       (.I0(p[3]),
        .O(\divisor0[4]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3__0 
       (.I0(\divisor0_reg_n_0_[0] ),
        .O(\divisor0[4]_i_3__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_4 
       (.I0(p[1]),
        .O(\divisor0[4]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_4__0 
       (.I0(\divisor0_reg_n_0_[4] ),
        .O(\divisor0[4]_i_4__0_n_0 ));
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
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[5]_i_1 
       (.I0(divisor_u0[5]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(divisor_u[5]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[6]_i_1 
       (.I0(divisor_u0[6]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(divisor_u[6]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[7]_i_1 
       (.I0(divisor_u0[7]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(divisor_u[7]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[8]_i_1 
       (.I0(divisor_u0[8]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(divisor_u[8]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_2 
       (.I0(p[8]),
        .O(\divisor0[8]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3 
       (.I0(p[5]),
        .O(\divisor0[8]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3__0 
       (.I0(\divisor0_reg_n_0_[8] ),
        .O(\divisor0[8]_i_3__0_n_0 ));
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
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
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
        .D(grp_fu_99_p1[0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[12]_i_1 
       (.CI(\divisor0_reg[8]_i_1_n_0 ),
        .CO({\divisor0_reg[12]_i_1_n_0 ,\divisor0_reg[12]_i_1_n_1 ,\divisor0_reg[12]_i_1_n_2 ,\divisor0_reg[12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_99_p1[12:9]),
        .S(p[12:9]));
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
        .D(grp_fu_99_p1[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[16]),
        .Q(p_0_in),
        .R(1'b0));
  CARRY4 \divisor0_reg[16]_i_1 
       (.CI(\divisor0_reg[12]_i_1_n_0 ),
        .CO({grp_fu_99_p1[16],\NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED [2],\divisor0_reg[16]_i_1_n_2 ,\divisor0_reg[16]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_divisor0_reg[16]_i_1_O_UNCONNECTED [3],grp_fu_99_p1[15:13]}),
        .S({1'b1,p[15:13]}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[16]_i_2 
       (.CI(\divisor0_reg[12]_i_2_n_0 ),
        .CO({\NLW_divisor0_reg[16]_i_2_CO_UNCONNECTED [3],\divisor0_reg[16]_i_2_n_1 ,\divisor0_reg[16]_i_2_n_2 ,\divisor0_reg[16]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[16:13]),
        .S({\divisor0[16]_i_3_n_0 ,\divisor0[16]_i_4_n_0 ,\divisor0[16]_i_5_n_0 ,\divisor0[16]_i_6_n_0 }));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[4]_i_1 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_1_n_0 ,\divisor0_reg[4]_i_1_n_1 ,\divisor0_reg[4]_i_1_n_2 ,\divisor0_reg[4]_i_1_n_3 }),
        .CYINIT(p[0]),
        .DI({p[4:3],1'b0,p[1]}),
        .O(grp_fu_99_p1[4:1]),
        .S({\divisor0[4]_i_2_n_0 ,\divisor0[4]_i_3_n_0 ,p[2],\divisor0[4]_i_4_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[4]_i_2 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_2_n_0 ,\divisor0_reg[4]_i_2_n_1 ,\divisor0_reg[4]_i_2_n_2 ,\divisor0_reg[4]_i_2_n_3 }),
        .CYINIT(\divisor0[4]_i_3__0_n_0 ),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[4:1]),
        .S({\divisor0[4]_i_4__0_n_0 ,\divisor0[4]_i_5_n_0 ,\divisor0[4]_i_6_n_0 ,\divisor0[4]_i_7_n_0 }));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[8]_i_1 
       (.CI(\divisor0_reg[4]_i_1_n_0 ),
        .CO({\divisor0_reg[8]_i_1_n_0 ,\divisor0_reg[8]_i_1_n_1 ,\divisor0_reg[8]_i_1_n_2 ,\divisor0_reg[8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({p[8],1'b0,1'b0,p[5]}),
        .O(grp_fu_99_p1[8:5]),
        .S({\divisor0[8]_i_2_n_0 ,p[7:6],\divisor0[8]_i_3_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[8]_i_2 
       (.CI(\divisor0_reg[4]_i_2_n_0 ),
        .CO({\divisor0_reg[8]_i_2_n_0 ,\divisor0_reg[8]_i_2_n_1 ,\divisor0_reg[8]_i_2_n_2 ,\divisor0_reg[8]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[8:5]),
        .S({\divisor0[8]_i_3__0_n_0 ,\divisor0[8]_i_4_n_0 ,\divisor0[8]_i_5_n_0 ,\divisor0[8]_i_6_n_0 }));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_99_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17s_17ns_3_21_seq_1_div_u fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0
       (.\0 (\0 ),
        .D(divisor_u),
        .E(E),
        .Q({p_0_in,\divisor0_reg_n_0_[0] }),
        .ap_clk(ap_clk),
        .\dividend_tmp_reg[0]_0 (fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1),
        .\dividend_tmp_reg[15]_0 (\dividend_tmp_reg[15] ),
        .\dividend_tmp_reg[1]_0 (fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_3),
        .\dividend_tmp_reg[2]_0 (fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_2));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'h6C)) 
    \quot[1]_i_1 
       (.I0(fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1),
        .I1(fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_3),
        .I2(\0 ),
        .O(\quot[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT4 #(
    .INIT(16'h1EF0)) 
    \quot[2]_i_1 
       (.I0(fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1),
        .I1(fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_3),
        .I2(fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_2),
        .I3(\0 ),
        .O(\quot[2]_i_1_n_0 ));
  FDRE \quot_reg[0] 
       (.C(ap_clk),
        .CE(\quot_reg[0]_0 ),
        .D(fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1),
        .Q(quot[0]),
        .R(1'b0));
  FDRE \quot_reg[1] 
       (.C(ap_clk),
        .CE(\quot_reg[0]_0 ),
        .D(\quot[1]_i_1_n_0 ),
        .Q(quot[1]),
        .R(1'b0));
  FDRE \quot_reg[2] 
       (.C(ap_clk),
        .CE(\quot_reg[0]_0 ),
        .D(\quot[2]_i_1_n_0 ),
        .Q(quot[2]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q),
        .Q(E),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \sub_ln19_reg_212[0]_i_1 
       (.I0(quot[0]),
        .I1(urem_ln20_reg_207[0]),
        .O(D[0]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT4 #(
    .INIT(16'h7887)) 
    \sub_ln19_reg_212[1]_i_1 
       (.I0(urem_ln20_reg_207[0]),
        .I1(quot[0]),
        .I2(urem_ln20_reg_207[1]),
        .I3(quot[1]),
        .O(D[1]));
  LUT6 #(
    .INIT(64'h077FF880F880077F)) 
    \sub_ln19_reg_212[2]_i_1 
       (.I0(quot[0]),
        .I1(urem_ln20_reg_207[0]),
        .I2(quot[1]),
        .I3(urem_ln20_reg_207[1]),
        .I4(urem_ln20_reg_207[2]),
        .I5(quot[2]),
        .O(D[2]));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_sdiv_17s_17ns_3_21_seq_1_div_u
   (\0 ,
    \dividend_tmp_reg[0]_0 ,
    \dividend_tmp_reg[2]_0 ,
    \dividend_tmp_reg[1]_0 ,
    E,
    ap_clk,
    \dividend_tmp_reg[15]_0 ,
    Q,
    D);
  output \0 ;
  output [0:0]\dividend_tmp_reg[0]_0 ;
  output \dividend_tmp_reg[2]_0 ;
  output \dividend_tmp_reg[1]_0 ;
  input [0:0]E;
  input ap_clk;
  input \dividend_tmp_reg[15]_0 ;
  input [1:0]Q;
  input [15:0]D;

  wire \0 ;
  wire [15:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire ap_clk;
  wire cal_tmp_carry__0_i_1_n_0;
  wire cal_tmp_carry__0_i_2_n_0;
  wire cal_tmp_carry__0_i_3_n_0;
  wire cal_tmp_carry__0_i_4_n_0;
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
  wire cal_tmp_carry__1_i_1_n_0;
  wire cal_tmp_carry__1_i_2_n_0;
  wire cal_tmp_carry__1_i_3_n_0;
  wire cal_tmp_carry__1_i_4_n_0;
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
  wire cal_tmp_carry__2_i_1_n_0;
  wire cal_tmp_carry__2_i_2_n_0;
  wire cal_tmp_carry__2_i_3_n_0;
  wire cal_tmp_carry__2_i_4_n_0;
  wire cal_tmp_carry__2_i_5_n_0;
  wire cal_tmp_carry__2_i_6_n_0;
  wire cal_tmp_carry__2_i_7_n_0;
  wire cal_tmp_carry__2_i_8_n_0;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
  wire cal_tmp_carry__2_n_4;
  wire cal_tmp_carry__2_n_5;
  wire cal_tmp_carry__2_n_6;
  wire cal_tmp_carry__2_n_7;
  wire cal_tmp_carry__3_i_1_n_0;
  wire cal_tmp_carry__3_i_2__0_n_0;
  wire cal_tmp_carry_i_1_n_0;
  wire cal_tmp_carry_i_2_n_0;
  wire cal_tmp_carry_i_3_n_0;
  wire cal_tmp_carry_i_4__0_n_0;
  wire cal_tmp_carry_i_5__1_n_0;
  wire cal_tmp_carry_i_6__0_n_0;
  wire cal_tmp_carry_i_7__0_n_0;
  wire cal_tmp_carry_n_0;
  wire cal_tmp_carry_n_1;
  wire cal_tmp_carry_n_2;
  wire cal_tmp_carry_n_3;
  wire cal_tmp_carry_n_4;
  wire cal_tmp_carry_n_5;
  wire cal_tmp_carry_n_6;
  wire cal_tmp_carry_n_7;
  wire \dividend_tmp[10]_i_1_n_0 ;
  wire \dividend_tmp[14]_i_1_n_0 ;
  wire \dividend_tmp[16]_i_1_n_0 ;
  wire \dividend_tmp[4]_i_1_n_0 ;
  wire \dividend_tmp[6]_i_1_n_0 ;
  wire \dividend_tmp[9]_i_1_n_0 ;
  wire dividend_tmp_mux_n_0;
  wire [0:0]\dividend_tmp_reg[0]_0 ;
  wire \dividend_tmp_reg[15]_0 ;
  wire \dividend_tmp_reg[1]_0 ;
  wire \dividend_tmp_reg[2]_0 ;
  wire \dividend_tmp_reg_n_0_[10] ;
  wire \dividend_tmp_reg_n_0_[11] ;
  wire \dividend_tmp_reg_n_0_[12] ;
  wire \dividend_tmp_reg_n_0_[13] ;
  wire \dividend_tmp_reg_n_0_[14] ;
  wire \dividend_tmp_reg_n_0_[15] ;
  wire \dividend_tmp_reg_n_0_[16] ;
  wire \dividend_tmp_reg_n_0_[3] ;
  wire \dividend_tmp_reg_n_0_[4] ;
  wire \dividend_tmp_reg_n_0_[5] ;
  wire \dividend_tmp_reg_n_0_[6] ;
  wire \dividend_tmp_reg_n_0_[7] ;
  wire \dividend_tmp_reg_n_0_[8] ;
  wire \dividend_tmp_reg_n_0_[9] ;
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
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp[10]_i_1_n_0 ;
  wire \remd_tmp[11]_i_1_n_0 ;
  wire \remd_tmp[12]_i_1_n_0 ;
  wire \remd_tmp[13]_i_1_n_0 ;
  wire \remd_tmp[14]_i_1_n_0 ;
  wire \remd_tmp[15]_i_1_n_0 ;
  wire \remd_tmp[1]_i_1_n_0 ;
  wire \remd_tmp[2]_i_1_n_0 ;
  wire \remd_tmp[3]_i_1_n_0 ;
  wire \remd_tmp[4]_i_1_n_0 ;
  wire \remd_tmp[5]_i_1_n_0 ;
  wire \remd_tmp[6]_i_1_n_0 ;
  wire \remd_tmp[7]_i_1_n_0 ;
  wire \remd_tmp[8]_i_1_n_0 ;
  wire \remd_tmp[9]_i_1_n_0 ;
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
  wire [1:1]sign_i;
  wire [3:1]NLW_cal_tmp_carry__3_CO_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({cal_tmp_carry_i_1_n_0,cal_tmp_carry_i_2_n_0,cal_tmp_carry_i_3_n_0,dividend_tmp_mux_n_0}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_4__0_n_0,cal_tmp_carry_i_5__1_n_0,cal_tmp_carry_i_6__0_n_0,cal_tmp_carry_i_7__0_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__0_i_1_n_0,cal_tmp_carry__0_i_2_n_0,cal_tmp_carry__0_i_3_n_0,cal_tmp_carry__0_i_4_n_0}),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_5__0_n_0,cal_tmp_carry__0_i_6__0_n_0,cal_tmp_carry__0_i_7__0_n_0,cal_tmp_carry__0_i_8__0_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__0_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__0_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__0_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__0_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5__0
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[6] ),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6__0
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7__0
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[4] ),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_7__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_8__0
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[3] ),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_8__0_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__1_i_1_n_0,cal_tmp_carry__1_i_2_n_0,cal_tmp_carry__1_i_3_n_0,cal_tmp_carry__1_i_4_n_0}),
        .O({cal_tmp_carry__1_n_4,cal_tmp_carry__1_n_5,cal_tmp_carry__1_n_6,cal_tmp_carry__1_n_7}),
        .S({cal_tmp_carry__1_i_5_n_0,cal_tmp_carry__1_i_6_n_0,cal_tmp_carry__1_i_7_n_0,cal_tmp_carry__1_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_1
       (.I0(\remd_tmp_reg_n_0_[10] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__1_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_2
       (.I0(\remd_tmp_reg_n_0_[9] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__1_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_3
       (.I0(\remd_tmp_reg_n_0_[8] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__1_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_4
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__1_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_5
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[10] ),
        .I2(\divisor0_reg_n_0_[11] ),
        .O(cal_tmp_carry__1_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_6
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[9] ),
        .I2(\divisor0_reg_n_0_[10] ),
        .O(cal_tmp_carry__1_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_7
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[8] ),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_8
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[7] ),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_8_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__2_i_1_n_0,cal_tmp_carry__2_i_2_n_0,cal_tmp_carry__2_i_3_n_0,cal_tmp_carry__2_i_4_n_0}),
        .O({cal_tmp_carry__2_n_4,cal_tmp_carry__2_n_5,cal_tmp_carry__2_n_6,cal_tmp_carry__2_n_7}),
        .S({cal_tmp_carry__2_i_5_n_0,cal_tmp_carry__2_i_6_n_0,cal_tmp_carry__2_i_7_n_0,cal_tmp_carry__2_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_1
       (.I0(\remd_tmp_reg_n_0_[14] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__2_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_2
       (.I0(\remd_tmp_reg_n_0_[13] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__2_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_3
       (.I0(\remd_tmp_reg_n_0_[12] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__2_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_4
       (.I0(\remd_tmp_reg_n_0_[11] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__2_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_5
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[14] ),
        .I2(\divisor0_reg_n_0_[15] ),
        .O(cal_tmp_carry__2_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_6
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[13] ),
        .I2(\divisor0_reg_n_0_[14] ),
        .O(cal_tmp_carry__2_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_7
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[12] ),
        .I2(\divisor0_reg_n_0_[13] ),
        .O(cal_tmp_carry__2_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_8
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[11] ),
        .I2(\divisor0_reg_n_0_[12] ),
        .O(cal_tmp_carry__2_i_8_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({NLW_cal_tmp_carry__3_CO_UNCONNECTED[3:1],p_2_out}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,cal_tmp_carry__3_i_1_n_0}),
        .O({NLW_cal_tmp_carry__3_O_UNCONNECTED[3:2],p_0_in,NLW_cal_tmp_carry__3_O_UNCONNECTED[0]}),
        .S({1'b0,1'b0,1'b1,cal_tmp_carry__3_i_2__0_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__3_i_1
       (.I0(\remd_tmp_reg_n_0_[15] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry__3_i_1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__3_i_2__0
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[15] ),
        .I2(\divisor0_reg_n_0_[16] ),
        .O(cal_tmp_carry__3_i_2__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(cal_tmp_carry_i_3_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_4__0
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[2] ),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_4__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5__1
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_5__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6__0
       (.I0(\dividend_tmp_reg[15]_0 ),
        .I1(\remd_tmp_reg_n_0_[0] ),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h2D)) 
    cal_tmp_carry_i_7__0
       (.I0(\dividend_tmp_reg_n_0_[16] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_7__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[10]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[9] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(\dividend_tmp[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[14]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[13] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(\dividend_tmp[14]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[16]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[15] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(\dividend_tmp[16]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[6]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[9]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[8] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(\dividend_tmp[9]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    dividend_tmp_mux
       (.I0(\dividend_tmp_reg_n_0_[16] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .O(dividend_tmp_mux_n_0));
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
  FDSE \dividend_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[10] ),
        .Q(\dividend_tmp_reg_n_0_[11] ),
        .S(\dividend_tmp_reg[15]_0 ));
  FDSE \dividend_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[11] ),
        .Q(\dividend_tmp_reg_n_0_[12] ),
        .S(\dividend_tmp_reg[15]_0 ));
  FDSE \dividend_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[12] ),
        .Q(\dividend_tmp_reg_n_0_[13] ),
        .S(\dividend_tmp_reg[15]_0 ));
  FDRE \dividend_tmp_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[14]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[14] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[14] ),
        .Q(\dividend_tmp_reg_n_0_[15] ),
        .S(\dividend_tmp_reg[15]_0 ));
  FDRE \dividend_tmp_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[16]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[16] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg[0]_0 ),
        .Q(\dividend_tmp_reg[1]_0 ),
        .S(\dividend_tmp_reg[15]_0 ));
  FDSE \dividend_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg[1]_0 ),
        .Q(\dividend_tmp_reg[2]_0 ),
        .S(\dividend_tmp_reg[15]_0 ));
  FDSE \dividend_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg[2]_0 ),
        .Q(\dividend_tmp_reg_n_0_[3] ),
        .S(\dividend_tmp_reg[15]_0 ));
  FDRE \dividend_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[4]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[4] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[4] ),
        .Q(\dividend_tmp_reg_n_0_[5] ),
        .S(\dividend_tmp_reg[15]_0 ));
  FDRE \dividend_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[6]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[6] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[6] ),
        .Q(\dividend_tmp_reg_n_0_[7] ),
        .S(\dividend_tmp_reg[15]_0 ));
  FDSE \dividend_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[7] ),
        .Q(\dividend_tmp_reg_n_0_[8] ),
        .S(\dividend_tmp_reg[15]_0 ));
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
        .D(D[9]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(D[10]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(D[11]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(D[12]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(D[13]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(D[14]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(E),
        .D(D[15]),
        .Q(\divisor0_reg_n_0_[16] ),
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
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[0]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[16] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[10]_i_1 
       (.I0(\remd_tmp_reg_n_0_[9] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_5),
        .O(\remd_tmp[10]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[11]_i_1 
       (.I0(\remd_tmp_reg_n_0_[10] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_4),
        .O(\remd_tmp[11]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[12]_i_1 
       (.I0(\remd_tmp_reg_n_0_[11] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_7),
        .O(\remd_tmp[12]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[13]_i_1 
       (.I0(\remd_tmp_reg_n_0_[12] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_6),
        .O(\remd_tmp[13]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[14]_i_1 
       (.I0(\remd_tmp_reg_n_0_[13] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_5),
        .O(\remd_tmp[14]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[15]_i_1 
       (.I0(\remd_tmp_reg_n_0_[14] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_4),
        .O(\remd_tmp[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1 
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1 
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1 
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1 
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1 
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1 
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_4),
        .O(\remd_tmp[7]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[8]_i_1 
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_7),
        .O(\remd_tmp[8]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[9]_i_1 
       (.I0(\remd_tmp_reg_n_0_[8] ),
        .I1(\dividend_tmp_reg[15]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_6),
        .O(\remd_tmp[9]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[10]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[11]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[12]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[13]_i_1_n_0 ),
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
        .D(\remd_tmp[1]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[2]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[3]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[4]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[5]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[6]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[7]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[8]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[9]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[9] ),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    \sign0[1]_i_1 
       (.I0(Q[1]),
        .O(sign_i));
  FDRE \sign0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(sign_i),
        .Q(\0 ),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_16ns_11ns_16_20_seq_1
   (ap_return,
    Q,
    ap_clk,
    ap_rst,
    \r_stage_reg[16] ,
    \divisor0_reg[7] ,
    \dividend0_reg[15] );
  output [15:0]ap_return;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[16] ;
  input [2:0]\divisor0_reg[7] ;
  input [15:0]\dividend0_reg[15] ;

  wire [0:0]Q;
  wire ap_clk;
  wire [15:0]ap_return;
  wire ap_rst;
  wire [15:0]\dividend0_reg[15] ;
  wire [2:0]\divisor0_reg[7] ;
  wire \r_stage_reg[16] ;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_16ns_11ns_16_20_seq_1_div fn1_srem_16ns_11ns_16_20_seq_1_div_U
       (.Q(Q),
        .ap_clk(ap_clk),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .\dividend0_reg[15]_0 (\dividend0_reg[15] ),
        .\divisor0_reg[7]_0 (\divisor0_reg[7] ),
        .\r_stage_reg[16] (\r_stage_reg[16] ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_16ns_11ns_16_20_seq_1_div
   (ap_return,
    Q,
    ap_clk,
    ap_rst,
    \r_stage_reg[16] ,
    \divisor0_reg[7]_0 ,
    \dividend0_reg[15]_0 );
  output [15:0]ap_return;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[16] ;
  input [2:0]\divisor0_reg[7]_0 ;
  input [15:0]\dividend0_reg[15]_0 ;

  wire [0:0]Q;
  wire ap_clk;
  wire [15:0]ap_return;
  wire ap_rst;
  wire \dividend0[10]_i_1__0_n_0 ;
  wire \dividend0[11]_i_1__0_n_0 ;
  wire \dividend0[12]_i_1__0_n_0 ;
  wire \dividend0[12]_i_3_n_0 ;
  wire \dividend0[12]_i_4_n_0 ;
  wire \dividend0[12]_i_5_n_0 ;
  wire \dividend0[12]_i_6_n_0 ;
  wire \dividend0[13]_i_1__0_n_0 ;
  wire \dividend0[14]_i_1__0_n_0 ;
  wire \dividend0[15]_i_1__0_n_0 ;
  wire \dividend0[15]_i_3_n_0 ;
  wire \dividend0[15]_i_4_n_0 ;
  wire \dividend0[15]_i_5_n_0 ;
  wire \dividend0[1]_i_1__0_n_0 ;
  wire \dividend0[2]_i_1__0_n_0 ;
  wire \dividend0[3]_i_1__0_n_0 ;
  wire \dividend0[4]_i_1__0_n_0 ;
  wire \dividend0[4]_i_3_n_0 ;
  wire \dividend0[4]_i_4_n_0 ;
  wire \dividend0[4]_i_5_n_0 ;
  wire \dividend0[4]_i_6_n_0 ;
  wire \dividend0[4]_i_7_n_0 ;
  wire \dividend0[5]_i_1__0_n_0 ;
  wire \dividend0[6]_i_1__0_n_0 ;
  wire \dividend0[7]_i_1__0_n_0 ;
  wire \dividend0[8]_i_1__0_n_0 ;
  wire \dividend0[8]_i_3_n_0 ;
  wire \dividend0[8]_i_4_n_0 ;
  wire \dividend0[8]_i_5_n_0 ;
  wire \dividend0[8]_i_6_n_0 ;
  wire \dividend0[9]_i_1__0_n_0 ;
  wire \dividend0_reg[12]_i_2__0_n_0 ;
  wire \dividend0_reg[12]_i_2__0_n_1 ;
  wire \dividend0_reg[12]_i_2__0_n_2 ;
  wire \dividend0_reg[12]_i_2__0_n_3 ;
  wire \dividend0_reg[12]_i_2__0_n_4 ;
  wire \dividend0_reg[12]_i_2__0_n_5 ;
  wire \dividend0_reg[12]_i_2__0_n_6 ;
  wire \dividend0_reg[12]_i_2__0_n_7 ;
  wire [15:0]\dividend0_reg[15]_0 ;
  wire \dividend0_reg[15]_i_2_n_2 ;
  wire \dividend0_reg[15]_i_2_n_3 ;
  wire \dividend0_reg[15]_i_2_n_5 ;
  wire \dividend0_reg[15]_i_2_n_6 ;
  wire \dividend0_reg[15]_i_2_n_7 ;
  wire \dividend0_reg[4]_i_2__0_n_0 ;
  wire \dividend0_reg[4]_i_2__0_n_1 ;
  wire \dividend0_reg[4]_i_2__0_n_2 ;
  wire \dividend0_reg[4]_i_2__0_n_3 ;
  wire \dividend0_reg[4]_i_2__0_n_4 ;
  wire \dividend0_reg[4]_i_2__0_n_5 ;
  wire \dividend0_reg[4]_i_2__0_n_6 ;
  wire \dividend0_reg[4]_i_2__0_n_7 ;
  wire \dividend0_reg[8]_i_2__0_n_0 ;
  wire \dividend0_reg[8]_i_2__0_n_1 ;
  wire \dividend0_reg[8]_i_2__0_n_2 ;
  wire \dividend0_reg[8]_i_2__0_n_3 ;
  wire \dividend0_reg[8]_i_2__0_n_4 ;
  wire \dividend0_reg[8]_i_2__0_n_5 ;
  wire \dividend0_reg[8]_i_2__0_n_6 ;
  wire \dividend0_reg[8]_i_2__0_n_7 ;
  wire \dividend0_reg_n_0_[0] ;
  wire \dividend0_reg_n_0_[10] ;
  wire \dividend0_reg_n_0_[11] ;
  wire \dividend0_reg_n_0_[12] ;
  wire \dividend0_reg_n_0_[13] ;
  wire \dividend0_reg_n_0_[14] ;
  wire \dividend0_reg_n_0_[1] ;
  wire \dividend0_reg_n_0_[2] ;
  wire \dividend0_reg_n_0_[3] ;
  wire \dividend0_reg_n_0_[4] ;
  wire \dividend0_reg_n_0_[5] ;
  wire \dividend0_reg_n_0_[6] ;
  wire \dividend0_reg_n_0_[7] ;
  wire \dividend0_reg_n_0_[8] ;
  wire \dividend0_reg_n_0_[9] ;
  wire \divisor0[6]_i_1__0_n_0 ;
  wire \divisor0[7]_i_1__0_n_0 ;
  wire \divisor0[9]_i_1__0_n_0 ;
  wire [2:0]\divisor0_reg[7]_0 ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_1;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_10;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_11;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_12;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_13;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_14;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_15;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_16;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_2;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_3;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_4;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_5;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_6;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_7;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_8;
  wire fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_9;
  wire [15:0]grp_fu_166_p0;
  wire p_1_in;
  wire \r_stage_reg[16] ;
  wire start0_reg_n_0;
  wire [8:8]sub_ln25_fu_156_p2;
  wire [3:2]\NLW_dividend0_reg[15]_i_2_CO_UNCONNECTED ;
  wire [3:3]\NLW_dividend0_reg[15]_i_2_O_UNCONNECTED ;

  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[0]_i_1 
       (.I0(\dividend0_reg[15]_0 [0]),
        .O(grp_fu_166_p0[0]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[10]_i_1 
       (.I0(\dividend0_reg[15]_0 [10]),
        .O(grp_fu_166_p0[10]));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[10]_i_1__0 
       (.I0(\dividend0_reg[12]_i_2__0_n_6 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[10] ),
        .O(\dividend0[10]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[11]_i_1 
       (.I0(\dividend0_reg[15]_0 [11]),
        .O(grp_fu_166_p0[11]));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[11]_i_1__0 
       (.I0(\dividend0_reg[12]_i_2__0_n_5 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[11] ),
        .O(\dividend0[11]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[12]_i_1 
       (.I0(\dividend0_reg[15]_0 [12]),
        .O(grp_fu_166_p0[12]));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[12]_i_1__0 
       (.I0(\dividend0_reg[12]_i_2__0_n_4 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[12] ),
        .O(\dividend0[12]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[12]_i_3 
       (.I0(\dividend0_reg_n_0_[12] ),
        .O(\dividend0[12]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[12]_i_4 
       (.I0(\dividend0_reg_n_0_[11] ),
        .O(\dividend0[12]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[12]_i_5 
       (.I0(\dividend0_reg_n_0_[10] ),
        .O(\dividend0[12]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[12]_i_6 
       (.I0(\dividend0_reg_n_0_[9] ),
        .O(\dividend0[12]_i_6_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[13]_i_1 
       (.I0(\dividend0_reg[15]_0 [13]),
        .O(grp_fu_166_p0[13]));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[13]_i_1__0 
       (.I0(\dividend0_reg[15]_i_2_n_7 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[13] ),
        .O(\dividend0[13]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[14]_i_1 
       (.I0(\dividend0_reg[15]_0 [14]),
        .O(grp_fu_166_p0[14]));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[14]_i_1__0 
       (.I0(\dividend0_reg[15]_i_2_n_6 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[14] ),
        .O(\dividend0[14]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[15]_i_1 
       (.I0(\dividend0_reg[15]_0 [15]),
        .O(grp_fu_166_p0[15]));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \dividend0[15]_i_1__0 
       (.I0(p_1_in),
        .I1(\dividend0_reg[15]_i_2_n_5 ),
        .O(\dividend0[15]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[15]_i_3 
       (.I0(p_1_in),
        .O(\dividend0[15]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[15]_i_4 
       (.I0(\dividend0_reg_n_0_[14] ),
        .O(\dividend0[15]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[15]_i_5 
       (.I0(\dividend0_reg_n_0_[13] ),
        .O(\dividend0[15]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[1]_i_1 
       (.I0(\dividend0_reg[15]_0 [1]),
        .O(grp_fu_166_p0[1]));
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[1]_i_1__0 
       (.I0(\dividend0_reg[4]_i_2__0_n_7 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[1] ),
        .O(\dividend0[1]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[2]_i_1 
       (.I0(\dividend0_reg[15]_0 [2]),
        .O(grp_fu_166_p0[2]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[2]_i_1__0 
       (.I0(\dividend0_reg[4]_i_2__0_n_6 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[2] ),
        .O(\dividend0[2]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[3]_i_1 
       (.I0(\dividend0_reg[15]_0 [3]),
        .O(grp_fu_166_p0[3]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[3]_i_1__0 
       (.I0(\dividend0_reg[4]_i_2__0_n_5 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[3] ),
        .O(\dividend0[3]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_1 
       (.I0(\dividend0_reg[15]_0 [4]),
        .O(grp_fu_166_p0[4]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[4]_i_1__0 
       (.I0(\dividend0_reg[4]_i_2__0_n_4 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[4] ),
        .O(\dividend0[4]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_3 
       (.I0(\dividend0_reg_n_0_[0] ),
        .O(\dividend0[4]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_4 
       (.I0(\dividend0_reg_n_0_[4] ),
        .O(\dividend0[4]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_5 
       (.I0(\dividend0_reg_n_0_[3] ),
        .O(\dividend0[4]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_6 
       (.I0(\dividend0_reg_n_0_[2] ),
        .O(\dividend0[4]_i_6_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_7 
       (.I0(\dividend0_reg_n_0_[1] ),
        .O(\dividend0[4]_i_7_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[5]_i_1 
       (.I0(\dividend0_reg[15]_0 [5]),
        .O(grp_fu_166_p0[5]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[5]_i_1__0 
       (.I0(\dividend0_reg[8]_i_2__0_n_7 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[5] ),
        .O(\dividend0[5]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[6]_i_1 
       (.I0(\dividend0_reg[15]_0 [6]),
        .O(grp_fu_166_p0[6]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[6]_i_1__0 
       (.I0(\dividend0_reg[8]_i_2__0_n_6 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[6] ),
        .O(\dividend0[6]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[7]_i_1 
       (.I0(\dividend0_reg[15]_0 [7]),
        .O(grp_fu_166_p0[7]));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[7]_i_1__0 
       (.I0(\dividend0_reg[8]_i_2__0_n_5 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[7] ),
        .O(\dividend0[7]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[8]_i_1 
       (.I0(\dividend0_reg[15]_0 [8]),
        .O(grp_fu_166_p0[8]));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[8]_i_1__0 
       (.I0(\dividend0_reg[8]_i_2__0_n_4 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[8] ),
        .O(\dividend0[8]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[8]_i_3 
       (.I0(\dividend0_reg_n_0_[8] ),
        .O(\dividend0[8]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[8]_i_4 
       (.I0(\dividend0_reg_n_0_[7] ),
        .O(\dividend0[8]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[8]_i_5 
       (.I0(\dividend0_reg_n_0_[6] ),
        .O(\dividend0[8]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[8]_i_6 
       (.I0(\dividend0_reg_n_0_[5] ),
        .O(\dividend0[8]_i_6_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[9]_i_1 
       (.I0(\dividend0_reg[15]_0 [9]),
        .O(grp_fu_166_p0[9]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[9]_i_1__0 
       (.I0(\dividend0_reg[12]_i_2__0_n_7 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[9] ),
        .O(\dividend0[9]_i_1__0_n_0 ));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[10]),
        .Q(\dividend0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[11]),
        .Q(\dividend0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[12]),
        .Q(\dividend0_reg_n_0_[12] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[12]_i_2__0 
       (.CI(\dividend0_reg[8]_i_2__0_n_0 ),
        .CO({\dividend0_reg[12]_i_2__0_n_0 ,\dividend0_reg[12]_i_2__0_n_1 ,\dividend0_reg[12]_i_2__0_n_2 ,\dividend0_reg[12]_i_2__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\dividend0_reg[12]_i_2__0_n_4 ,\dividend0_reg[12]_i_2__0_n_5 ,\dividend0_reg[12]_i_2__0_n_6 ,\dividend0_reg[12]_i_2__0_n_7 }),
        .S({\dividend0[12]_i_3_n_0 ,\dividend0[12]_i_4_n_0 ,\dividend0[12]_i_5_n_0 ,\dividend0[12]_i_6_n_0 }));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[13]),
        .Q(\dividend0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[14]),
        .Q(\dividend0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \dividend0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[15]),
        .Q(p_1_in),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[15]_i_2 
       (.CI(\dividend0_reg[12]_i_2__0_n_0 ),
        .CO({\NLW_dividend0_reg[15]_i_2_CO_UNCONNECTED [3:2],\dividend0_reg[15]_i_2_n_2 ,\dividend0_reg[15]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_dividend0_reg[15]_i_2_O_UNCONNECTED [3],\dividend0_reg[15]_i_2_n_5 ,\dividend0_reg[15]_i_2_n_6 ,\dividend0_reg[15]_i_2_n_7 }),
        .S({1'b0,\dividend0[15]_i_3_n_0 ,\dividend0[15]_i_4_n_0 ,\dividend0[15]_i_5_n_0 }));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[4]_i_2__0 
       (.CI(1'b0),
        .CO({\dividend0_reg[4]_i_2__0_n_0 ,\dividend0_reg[4]_i_2__0_n_1 ,\dividend0_reg[4]_i_2__0_n_2 ,\dividend0_reg[4]_i_2__0_n_3 }),
        .CYINIT(\dividend0[4]_i_3_n_0 ),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\dividend0_reg[4]_i_2__0_n_4 ,\dividend0_reg[4]_i_2__0_n_5 ,\dividend0_reg[4]_i_2__0_n_6 ,\dividend0_reg[4]_i_2__0_n_7 }),
        .S({\dividend0[4]_i_4_n_0 ,\dividend0[4]_i_5_n_0 ,\dividend0[4]_i_6_n_0 ,\dividend0[4]_i_7_n_0 }));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[8]),
        .Q(\dividend0_reg_n_0_[8] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[8]_i_2__0 
       (.CI(\dividend0_reg[4]_i_2__0_n_0 ),
        .CO({\dividend0_reg[8]_i_2__0_n_0 ,\dividend0_reg[8]_i_2__0_n_1 ,\dividend0_reg[8]_i_2__0_n_2 ,\dividend0_reg[8]_i_2__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\dividend0_reg[8]_i_2__0_n_4 ,\dividend0_reg[8]_i_2__0_n_5 ,\dividend0_reg[8]_i_2__0_n_6 ,\dividend0_reg[8]_i_2__0_n_7 }),
        .S({\dividend0[8]_i_3_n_0 ,\dividend0[8]_i_4_n_0 ,\dividend0[8]_i_5_n_0 ,\dividend0[8]_i_6_n_0 }));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_166_p0[9]),
        .Q(\dividend0_reg_n_0_[9] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \divisor0[6]_i_1__0 
       (.I0(\divisor0_reg[7]_0 [0]),
        .I1(\divisor0_reg[7]_0 [1]),
        .O(\divisor0[6]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \divisor0[7]_i_1__0 
       (.I0(\divisor0_reg[7]_0 [1]),
        .I1(\divisor0_reg[7]_0 [0]),
        .I2(\divisor0_reg[7]_0 [2]),
        .O(\divisor0[7]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'h40)) 
    \divisor0[8]_i_1 
       (.I0(\divisor0_reg[7]_0 [2]),
        .I1(\divisor0_reg[7]_0 [0]),
        .I2(\divisor0_reg[7]_0 [1]),
        .O(sub_ln25_fu_156_p2));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hF7)) 
    \divisor0[9]_i_1__0 
       (.I0(\divisor0_reg[7]_0 [1]),
        .I1(\divisor0_reg[7]_0 [0]),
        .I2(\divisor0_reg[7]_0 [2]),
        .O(\divisor0[9]_i_1__0_n_0 ));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[7]_0 [0]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0[6]_i_1__0_n_0 ),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0[7]_i_1__0_n_0 ),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(sub_ln25_fu_156_p2),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0[9]_i_1__0_n_0 ),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_16ns_11ns_16_20_seq_1_div_u fn1_srem_16ns_11ns_16_20_seq_1_div_u_0
       (.D({\dividend0[15]_i_1__0_n_0 ,\dividend0[14]_i_1__0_n_0 ,\dividend0[13]_i_1__0_n_0 ,\dividend0[12]_i_1__0_n_0 ,\dividend0[11]_i_1__0_n_0 ,\dividend0[10]_i_1__0_n_0 ,\dividend0[9]_i_1__0_n_0 ,\dividend0[8]_i_1__0_n_0 ,\dividend0[7]_i_1__0_n_0 ,\dividend0[6]_i_1__0_n_0 ,\dividend0[5]_i_1__0_n_0 ,\dividend0[4]_i_1__0_n_0 ,\dividend0[3]_i_1__0_n_0 ,\dividend0[2]_i_1__0_n_0 ,\dividend0[1]_i_1__0_n_0 }),
        .E(start0_reg_n_0),
        .O19({fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_1,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_2,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_3,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_4,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_5,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_6,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_7,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_8,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_9,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_10,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_11,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_12,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_13,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_14,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_15,fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_16}),
        .Q({p_1_in,\dividend0_reg_n_0_[0] }),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\divisor0_reg[9]_0 ({\divisor0_reg_n_0_[9] ,\divisor0_reg_n_0_[8] ,\divisor0_reg_n_0_[7] ,\divisor0_reg_n_0_[6] ,\divisor0_reg_n_0_[5] }),
        .\r_stage_reg[16]_0 (fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .\r_stage_reg[16]_1 (\r_stage_reg[16] ));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_16),
        .Q(ap_return[0]),
        .R(1'b0));
  FDRE \remd_reg[10] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_6),
        .Q(ap_return[10]),
        .R(1'b0));
  FDRE \remd_reg[11] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_5),
        .Q(ap_return[11]),
        .R(1'b0));
  FDRE \remd_reg[12] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_4),
        .Q(ap_return[12]),
        .R(1'b0));
  FDRE \remd_reg[13] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_3),
        .Q(ap_return[13]),
        .R(1'b0));
  FDRE \remd_reg[14] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_2),
        .Q(ap_return[14]),
        .R(1'b0));
  FDRE \remd_reg[15] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_1),
        .Q(ap_return[15]),
        .R(1'b0));
  FDRE \remd_reg[1] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_15),
        .Q(ap_return[1]),
        .R(1'b0));
  FDRE \remd_reg[2] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_14),
        .Q(ap_return[2]),
        .R(1'b0));
  FDRE \remd_reg[3] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_13),
        .Q(ap_return[3]),
        .R(1'b0));
  FDRE \remd_reg[4] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_12),
        .Q(ap_return[4]),
        .R(1'b0));
  FDRE \remd_reg[5] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_11),
        .Q(ap_return[5]),
        .R(1'b0));
  FDRE \remd_reg[6] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_10),
        .Q(ap_return[6]),
        .R(1'b0));
  FDRE \remd_reg[7] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_9),
        .Q(ap_return[7]),
        .R(1'b0));
  FDRE \remd_reg[8] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_8),
        .Q(ap_return[8]),
        .R(1'b0));
  FDRE \remd_reg[9] 
       (.C(ap_clk),
        .CE(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0),
        .D(fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_7),
        .Q(ap_return[9]),
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

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_16ns_11ns_16_20_seq_1_div_u
   (\r_stage_reg[16]_0 ,
    O19,
    ap_rst,
    E,
    ap_clk,
    Q,
    \r_stage_reg[16]_1 ,
    D,
    \divisor0_reg[9]_0 );
  output [0:0]\r_stage_reg[16]_0 ;
  output [15:0]O19;
  input ap_rst;
  input [0:0]E;
  input ap_clk;
  input [1:0]Q;
  input \r_stage_reg[16]_1 ;
  input [14:0]D;
  input [4:0]\divisor0_reg[9]_0 ;

  wire [14:0]D;
  wire [0:0]E;
  wire [15:0]O19;
  wire [1:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire cal_tmp_carry__0_i_1_n_0;
  wire cal_tmp_carry__0_i_2_n_0;
  wire cal_tmp_carry__0_i_3_n_0;
  wire cal_tmp_carry__0_i_4_n_0;
  wire cal_tmp_carry__0_i_5__2_n_0;
  wire cal_tmp_carry__0_i_6__2_n_0;
  wire cal_tmp_carry__0_i_7__2_n_0;
  wire cal_tmp_carry__0_i_8_n_0;
  wire cal_tmp_carry__0_n_0;
  wire cal_tmp_carry__0_n_1;
  wire cal_tmp_carry__0_n_2;
  wire cal_tmp_carry__0_n_3;
  wire cal_tmp_carry__0_n_4;
  wire cal_tmp_carry__0_n_5;
  wire cal_tmp_carry__0_n_6;
  wire cal_tmp_carry__0_n_7;
  wire cal_tmp_carry__1_i_1_n_0;
  wire cal_tmp_carry__1_i_2_n_0;
  wire cal_tmp_carry__1_i_3__0_n_0;
  wire cal_tmp_carry__1_i_4_n_0;
  wire cal_tmp_carry__1_i_5__1_n_0;
  wire cal_tmp_carry__1_i_6__1_n_0;
  wire cal_tmp_carry__1_n_0;
  wire cal_tmp_carry__1_n_1;
  wire cal_tmp_carry__1_n_2;
  wire cal_tmp_carry__1_n_3;
  wire cal_tmp_carry__1_n_4;
  wire cal_tmp_carry__1_n_5;
  wire cal_tmp_carry__1_n_6;
  wire cal_tmp_carry__1_n_7;
  wire cal_tmp_carry__2_i_1_n_0;
  wire cal_tmp_carry__2_i_2_n_0;
  wire cal_tmp_carry__2_i_3_n_0;
  wire cal_tmp_carry__2_i_4_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
  wire cal_tmp_carry__2_n_4;
  wire cal_tmp_carry__2_n_5;
  wire cal_tmp_carry__2_n_6;
  wire cal_tmp_carry__2_n_7;
  wire cal_tmp_carry_i_1_n_0;
  wire cal_tmp_carry_i_2_n_0;
  wire cal_tmp_carry_i_3_n_0;
  wire cal_tmp_carry_i_4_n_0;
  wire cal_tmp_carry_i_5_n_0;
  wire cal_tmp_carry_i_6_n_0;
  wire cal_tmp_carry_i_7_n_0;
  wire cal_tmp_carry_n_0;
  wire cal_tmp_carry_n_1;
  wire cal_tmp_carry_n_2;
  wire cal_tmp_carry_n_3;
  wire cal_tmp_carry_n_4;
  wire cal_tmp_carry_n_5;
  wire cal_tmp_carry_n_6;
  wire cal_tmp_carry_n_7;
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
  wire \dividend_tmp[1]_i_1_n_0 ;
  wire \dividend_tmp[2]_i_1_n_0 ;
  wire \dividend_tmp[3]_i_1_n_0 ;
  wire \dividend_tmp[4]_i_1_n_0 ;
  wire \dividend_tmp[5]_i_1_n_0 ;
  wire \dividend_tmp[6]_i_1_n_0 ;
  wire \dividend_tmp[7]_i_1_n_0 ;
  wire \dividend_tmp[8]_i_1_n_0 ;
  wire \dividend_tmp[9]_i_1_n_0 ;
  wire \dividend_tmp_reg_n_0_[0] ;
  wire \dividend_tmp_reg_n_0_[10] ;
  wire \dividend_tmp_reg_n_0_[11] ;
  wire \dividend_tmp_reg_n_0_[12] ;
  wire \dividend_tmp_reg_n_0_[13] ;
  wire \dividend_tmp_reg_n_0_[14] ;
  wire \dividend_tmp_reg_n_0_[15] ;
  wire \dividend_tmp_reg_n_0_[1] ;
  wire \dividend_tmp_reg_n_0_[2] ;
  wire \dividend_tmp_reg_n_0_[3] ;
  wire \dividend_tmp_reg_n_0_[4] ;
  wire \dividend_tmp_reg_n_0_[5] ;
  wire \dividend_tmp_reg_n_0_[6] ;
  wire \dividend_tmp_reg_n_0_[7] ;
  wire \dividend_tmp_reg_n_0_[8] ;
  wire \dividend_tmp_reg_n_0_[9] ;
  wire [4:0]\divisor0_reg[9]_0 ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire p_0_in;
  wire [0:0]p_2_out;
  wire \r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12_n_0 ;
  wire \r_stage_reg[15]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0 ;
  wire [0:0]\r_stage_reg[16]_0 ;
  wire \r_stage_reg[16]_1 ;
  wire r_stage_reg_gate_n_0;
  wire \r_stage_reg_n_0_[0] ;
  wire \remd[11]_i_2__0_n_0 ;
  wire \remd[11]_i_3__0_n_0 ;
  wire \remd[11]_i_4__0_n_0 ;
  wire \remd[11]_i_5__0_n_0 ;
  wire \remd[15]_i_2__0_n_0 ;
  wire \remd[15]_i_3__0_n_0 ;
  wire \remd[15]_i_4__0_n_0 ;
  wire \remd[15]_i_5__0_n_0 ;
  wire \remd[3]_i_2__0_n_0 ;
  wire \remd[3]_i_3__0_n_0 ;
  wire \remd[3]_i_4__0_n_0 ;
  wire \remd[3]_i_5__0_n_0 ;
  wire \remd[7]_i_2__0_n_0 ;
  wire \remd[7]_i_3__0_n_0 ;
  wire \remd[7]_i_4__0_n_0 ;
  wire \remd[7]_i_5__0_n_0 ;
  wire \remd_reg[11]_i_1__0_n_0 ;
  wire \remd_reg[11]_i_1__0_n_1 ;
  wire \remd_reg[11]_i_1__0_n_2 ;
  wire \remd_reg[11]_i_1__0_n_3 ;
  wire \remd_reg[15]_i_1__0_n_1 ;
  wire \remd_reg[15]_i_1__0_n_2 ;
  wire \remd_reg[15]_i_1__0_n_3 ;
  wire \remd_reg[3]_i_1__0_n_0 ;
  wire \remd_reg[3]_i_1__0_n_1 ;
  wire \remd_reg[3]_i_1__0_n_2 ;
  wire \remd_reg[3]_i_1__0_n_3 ;
  wire \remd_reg[7]_i_1__0_n_0 ;
  wire \remd_reg[7]_i_1__0_n_1 ;
  wire \remd_reg[7]_i_1__0_n_2 ;
  wire \remd_reg[7]_i_1__0_n_3 ;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp[10]_i_1_n_0 ;
  wire \remd_tmp[11]_i_1_n_0 ;
  wire \remd_tmp[12]_i_1_n_0 ;
  wire \remd_tmp[13]_i_1_n_0 ;
  wire \remd_tmp[14]_i_1_n_0 ;
  wire \remd_tmp[15]_i_1_n_0 ;
  wire \remd_tmp[1]_i_1_n_0 ;
  wire \remd_tmp[2]_i_1_n_0 ;
  wire \remd_tmp[3]_i_1_n_0 ;
  wire \remd_tmp[4]_i_1_n_0 ;
  wire \remd_tmp[5]_i_1_n_0 ;
  wire \remd_tmp[6]_i_1_n_0 ;
  wire \remd_tmp[7]_i_1_n_0 ;
  wire \remd_tmp[8]_i_1_n_0 ;
  wire \remd_tmp[9]_i_1_n_0 ;
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
  wire \sign0_reg_n_0_[0] ;
  wire [3:0]NLW_cal_tmp_carry__3_CO_UNCONNECTED;
  wire [3:1]NLW_cal_tmp_carry__3_O_UNCONNECTED;
  wire [3:3]\NLW_remd_reg[15]_i_1__0_CO_UNCONNECTED ;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({cal_tmp_carry_i_1_n_0,1'b1,cal_tmp_carry_i_2_n_0,cal_tmp_carry_i_3_n_0}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_4_n_0,cal_tmp_carry_i_5_n_0,cal_tmp_carry_i_6_n_0,cal_tmp_carry_i_7_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__0_i_1_n_0,cal_tmp_carry__0_i_2_n_0,cal_tmp_carry__0_i_3_n_0,cal_tmp_carry__0_i_4_n_0}),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_5__2_n_0,cal_tmp_carry__0_i_6__2_n_0,cal_tmp_carry__0_i_7__2_n_0,cal_tmp_carry__0_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5__2
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[6] ),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_5__2_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6__2
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_6__2_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7__2
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[4] ),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_7__2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_8
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_8_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,cal_tmp_carry__1_i_1_n_0,cal_tmp_carry__1_i_2_n_0}),
        .O({cal_tmp_carry__1_n_4,cal_tmp_carry__1_n_5,cal_tmp_carry__1_n_6,cal_tmp_carry__1_n_7}),
        .S({cal_tmp_carry__1_i_3__0_n_0,cal_tmp_carry__1_i_4_n_0,cal_tmp_carry__1_i_5__1_n_0,cal_tmp_carry__1_i_6__1_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_1
       (.I0(\remd_tmp_reg_n_0_[8] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_2
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__1_i_3__0
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[10] ),
        .O(cal_tmp_carry__1_i_3__0_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__1_i_4
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_5__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[8] ),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_5__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_6__1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[7] ),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_6__1_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({p_2_out,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__2_n_4,cal_tmp_carry__2_n_5,cal_tmp_carry__2_n_6,cal_tmp_carry__2_n_7}),
        .S({cal_tmp_carry__2_i_1_n_0,cal_tmp_carry__2_i_2_n_0,cal_tmp_carry__2_i_3_n_0,cal_tmp_carry__2_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__2_i_1
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[14] ),
        .O(cal_tmp_carry__2_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__2_i_2
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[13] ),
        .O(cal_tmp_carry__2_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__2_i_3
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[12] ),
        .O(cal_tmp_carry__2_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__2_i_4
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[11] ),
        .O(cal_tmp_carry__2_i_4_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(p_2_out),
        .CO(NLW_cal_tmp_carry__3_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__3_O_UNCONNECTED[3:1],p_0_in}),
        .S({1'b0,1'b0,1'b0,1'b1}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_2_n_0));
  LUT3 #(
    .INIT(8'hAC)) 
    cal_tmp_carry_i_3
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\dividend_tmp_reg_n_0_[15] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_4
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_4_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_5_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_6
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_6_n_0));
  LUT3 #(
    .INIT(8'hAC)) 
    cal_tmp_carry_i_7
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\dividend_tmp_reg_n_0_[15] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_7_n_0));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(D[9]),
        .Q(\dividend0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(D[10]),
        .Q(\dividend0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(D[11]),
        .Q(\dividend0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(D[12]),
        .Q(\dividend0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(D[13]),
        .Q(\dividend0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \dividend0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(D[14]),
        .Q(\dividend0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(D[0]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(D[1]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(D[2]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(D[3]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(D[4]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(D[5]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(D[6]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(D[7]),
        .Q(\dividend0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(D[8]),
        .Q(\dividend0_reg_n_0_[9] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[10]_i_1 
       (.I0(\dividend0_reg_n_0_[9] ),
        .I1(\dividend_tmp_reg_n_0_[9] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[11]_i_1 
       (.I0(\dividend0_reg_n_0_[10] ),
        .I1(\dividend_tmp_reg_n_0_[10] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[12]_i_1 
       (.I0(\dividend0_reg_n_0_[11] ),
        .I1(\dividend_tmp_reg_n_0_[11] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[12]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[13]_i_1 
       (.I0(\dividend0_reg_n_0_[12] ),
        .I1(\dividend_tmp_reg_n_0_[12] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[14]_i_1 
       (.I0(\dividend0_reg_n_0_[13] ),
        .I1(\dividend_tmp_reg_n_0_[13] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[14]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[15]_i_1 
       (.I0(\dividend0_reg_n_0_[14] ),
        .I1(\dividend_tmp_reg_n_0_[14] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[1]_i_1 
       (.I0(\dividend0_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg_n_0_[0] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[2]_i_1 
       (.I0(\dividend0_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[3]_i_1 
       (.I0(\dividend0_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg_n_0_[2] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend0_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg_n_0_[3] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[5]_i_1 
       (.I0(\dividend0_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg_n_0_[4] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[6]_i_1 
       (.I0(\dividend0_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg_n_0_[5] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[7]_i_1 
       (.I0(\dividend0_reg_n_0_[6] ),
        .I1(\dividend_tmp_reg_n_0_[6] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[8]_i_1 
       (.I0(\dividend0_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg_n_0_[7] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[9]_i_1 
       (.I0(\dividend0_reg_n_0_[8] ),
        .I1(\dividend_tmp_reg_n_0_[8] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[9]_i_1_n_0 ));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_2_out),
        .Q(\dividend_tmp_reg_n_0_[0] ),
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
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[9]_0 [0]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[9]_0 [1]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[9]_0 [2]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[9]_0 [3]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[9]_0 [4]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  (* srl_bus_name = "inst/\srem_16ns_11ns_16_20_seq_1_U4/fn1_srem_16ns_11ns_16_20_seq_1_div_U/fn1_srem_16ns_11ns_16_20_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\srem_16ns_11ns_16_20_seq_1_U4/fn1_srem_16ns_11ns_16_20_seq_1_div_U/fn1_srem_16ns_11ns_16_20_seq_1_div_u_0/r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12 " *) 
  SRL16E \r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12 
       (.A0(1'b1),
        .A1(1'b0),
        .A2(1'b1),
        .A3(1'b1),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12_n_0 ));
  FDRE \r_stage_reg[15]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12_n_0 ),
        .Q(\r_stage_reg[15]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0 ),
        .R(1'b0));
  FDRE \r_stage_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_gate_n_0),
        .Q(\r_stage_reg[16]_0 ),
        .R(ap_rst));
  LUT2 #(
    .INIT(4'h8)) 
    r_stage_reg_gate
       (.I0(\r_stage_reg[15]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0 ),
        .I1(\r_stage_reg[16]_1 ),
        .O(r_stage_reg_gate_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_2__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[11] ),
        .O(\remd[11]_i_2__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_3__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[10] ),
        .O(\remd[11]_i_3__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_4__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[9] ),
        .O(\remd[11]_i_4__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_5__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[8] ),
        .O(\remd[11]_i_5__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_2__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[15] ),
        .O(\remd[15]_i_2__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_3__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[14] ),
        .O(\remd[15]_i_3__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_4__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[13] ),
        .O(\remd[15]_i_4__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_5__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[12] ),
        .O(\remd[15]_i_5__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[3]_i_2__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[3] ),
        .O(\remd[3]_i_2__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[3]_i_3__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[2] ),
        .O(\remd[3]_i_3__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[3]_i_4__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .O(\remd[3]_i_4__0_n_0 ));
  LUT1 #(
    .INIT(2'h2)) 
    \remd[3]_i_5__0 
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .O(\remd[3]_i_5__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_2__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[7] ),
        .O(\remd[7]_i_2__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_3__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[6] ),
        .O(\remd[7]_i_3__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_4__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .O(\remd[7]_i_4__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_5__0 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[4] ),
        .O(\remd[7]_i_5__0_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[11]_i_1__0 
       (.CI(\remd_reg[7]_i_1__0_n_0 ),
        .CO({\remd_reg[11]_i_1__0_n_0 ,\remd_reg[11]_i_1__0_n_1 ,\remd_reg[11]_i_1__0_n_2 ,\remd_reg[11]_i_1__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(O19[11:8]),
        .S({\remd[11]_i_2__0_n_0 ,\remd[11]_i_3__0_n_0 ,\remd[11]_i_4__0_n_0 ,\remd[11]_i_5__0_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[15]_i_1__0 
       (.CI(\remd_reg[11]_i_1__0_n_0 ),
        .CO({\NLW_remd_reg[15]_i_1__0_CO_UNCONNECTED [3],\remd_reg[15]_i_1__0_n_1 ,\remd_reg[15]_i_1__0_n_2 ,\remd_reg[15]_i_1__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(O19[15:12]),
        .S({\remd[15]_i_2__0_n_0 ,\remd[15]_i_3__0_n_0 ,\remd[15]_i_4__0_n_0 ,\remd[15]_i_5__0_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[3]_i_1__0 
       (.CI(1'b0),
        .CO({\remd_reg[3]_i_1__0_n_0 ,\remd_reg[3]_i_1__0_n_1 ,\remd_reg[3]_i_1__0_n_2 ,\remd_reg[3]_i_1__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\sign0_reg_n_0_[0] }),
        .O(O19[3:0]),
        .S({\remd[3]_i_2__0_n_0 ,\remd[3]_i_3__0_n_0 ,\remd[3]_i_4__0_n_0 ,\remd[3]_i_5__0_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[7]_i_1__0 
       (.CI(\remd_reg[3]_i_1__0_n_0 ),
        .CO({\remd_reg[7]_i_1__0_n_0 ,\remd_reg[7]_i_1__0_n_1 ,\remd_reg[7]_i_1__0_n_2 ,\remd_reg[7]_i_1__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(O19[7:4]),
        .S({\remd[7]_i_2__0_n_0 ,\remd[7]_i_3__0_n_0 ,\remd[7]_i_4__0_n_0 ,\remd[7]_i_5__0_n_0 }));
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \remd_tmp[0]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\dividend_tmp_reg_n_0_[15] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .I3(p_0_in),
        .I4(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[10]_i_1 
       (.I0(\remd_tmp_reg_n_0_[9] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_5),
        .O(\remd_tmp[10]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[11]_i_1 
       (.I0(\remd_tmp_reg_n_0_[10] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_4),
        .O(\remd_tmp[11]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[12]_i_1 
       (.I0(\remd_tmp_reg_n_0_[11] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_7),
        .O(\remd_tmp[12]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[13]_i_1 
       (.I0(\remd_tmp_reg_n_0_[12] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_6),
        .O(\remd_tmp[13]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[14]_i_1 
       (.I0(\remd_tmp_reg_n_0_[13] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_5),
        .O(\remd_tmp[14]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[15]_i_1 
       (.I0(\remd_tmp_reg_n_0_[14] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_4),
        .O(\remd_tmp[15]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1 
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1 
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1 
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1 
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1 
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1 
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_4),
        .O(\remd_tmp[7]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[8]_i_1 
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_7),
        .O(\remd_tmp[8]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[9]_i_1 
       (.I0(\remd_tmp_reg_n_0_[8] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_6),
        .O(\remd_tmp[9]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[10]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[11]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[12]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[13]_i_1_n_0 ),
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
        .D(\remd_tmp[1]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[2]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[3]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[4]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[5]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[6]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[7]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[8]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[9]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \sign0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[1]),
        .Q(\sign0_reg_n_0_[0] ),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_17s_32ns_16_21_seq_1
   (D,
    \r_stage_reg[0] ,
    r_stage_reg_r_5,
    r_stage_reg_r_13,
    \r_stage_reg[17] ,
    \remd_reg[15] ,
    E,
    ap_clk,
    p,
    ap_rst,
    Q);
  output [5:0]D;
  output \r_stage_reg[0] ;
  output r_stage_reg_r_5;
  output r_stage_reg_r_13;
  output [0:0]\r_stage_reg[17] ;
  output [15:0]\remd_reg[15] ;
  input [0:0]E;
  input ap_clk;
  input [15:0]p;
  input ap_rst;
  input [29:0]Q;

  wire [5:0]D;
  wire [0:0]E;
  wire [29:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire [15:0]p;
  wire \r_stage_reg[0] ;
  wire [0:0]\r_stage_reg[17] ;
  wire r_stage_reg_r_13;
  wire r_stage_reg_r_5;
  wire [15:0]\remd_reg[15] ;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_17s_32ns_16_21_seq_1_div fn1_srem_17s_32ns_16_21_seq_1_div_U
       (.D(D),
        .E(E),
        .Q(Q),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .p(p),
        .\r_stage_reg[0] (\r_stage_reg[0] ),
        .\r_stage_reg[17] (\r_stage_reg[17] ),
        .r_stage_reg_r_13(r_stage_reg_r_13),
        .r_stage_reg_r_5(r_stage_reg_r_5),
        .\remd_reg[15]_0 (\remd_reg[15] ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_17s_32ns_16_21_seq_1_div
   (D,
    \r_stage_reg[0] ,
    r_stage_reg_r_5,
    r_stage_reg_r_13,
    \r_stage_reg[17] ,
    \remd_reg[15]_0 ,
    E,
    ap_clk,
    p,
    ap_rst,
    Q);
  output [5:0]D;
  output \r_stage_reg[0] ;
  output r_stage_reg_r_5;
  output r_stage_reg_r_13;
  output [0:0]\r_stage_reg[17] ;
  output [15:0]\remd_reg[15]_0 ;
  input [0:0]E;
  input ap_clk;
  input [15:0]p;
  input ap_rst;
  input [29:0]Q;

  wire [5:0]D;
  wire [0:0]E;
  wire [29:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire \dividend0[10]_i_1_n_0 ;
  wire \dividend0[11]_i_1_n_0 ;
  wire \dividend0[12]_i_1_n_0 ;
  wire \dividend0[12]_i_3_n_0 ;
  wire \dividend0[12]_i_4_n_0 ;
  wire \dividend0[12]_i_5_n_0 ;
  wire \dividend0[12]_i_6_n_0 ;
  wire \dividend0[13]_i_1_n_0 ;
  wire \dividend0[14]_i_1_n_0 ;
  wire \dividend0[15]_i_1_n_0 ;
  wire \dividend0[16]_i_1_n_0 ;
  wire \dividend0[16]_i_3_n_0 ;
  wire \dividend0[16]_i_4_n_0 ;
  wire \dividend0[16]_i_5_n_0 ;
  wire \dividend0[16]_i_6_n_0 ;
  wire \dividend0[1]_i_1_n_0 ;
  wire \dividend0[2]_i_1_n_0 ;
  wire \dividend0[3]_i_1_n_0 ;
  wire \dividend0[4]_i_1_n_0 ;
  wire \dividend0[4]_i_3_n_0 ;
  wire \dividend0[4]_i_4_n_0 ;
  wire \dividend0[4]_i_5_n_0 ;
  wire \dividend0[4]_i_6_n_0 ;
  wire \dividend0[4]_i_7_n_0 ;
  wire \dividend0[5]_i_1_n_0 ;
  wire \dividend0[6]_i_1_n_0 ;
  wire \dividend0[7]_i_1_n_0 ;
  wire \dividend0[8]_i_1_n_0 ;
  wire \dividend0[8]_i_3_n_0 ;
  wire \dividend0[8]_i_4_n_0 ;
  wire \dividend0[8]_i_5_n_0 ;
  wire \dividend0[8]_i_6_n_0 ;
  wire \dividend0[9]_i_1_n_0 ;
  wire \dividend0_reg[12]_i_2_n_0 ;
  wire \dividend0_reg[12]_i_2_n_1 ;
  wire \dividend0_reg[12]_i_2_n_2 ;
  wire \dividend0_reg[12]_i_2_n_3 ;
  wire \dividend0_reg[12]_i_2_n_4 ;
  wire \dividend0_reg[12]_i_2_n_5 ;
  wire \dividend0_reg[12]_i_2_n_6 ;
  wire \dividend0_reg[12]_i_2_n_7 ;
  wire \dividend0_reg[16]_i_2_n_1 ;
  wire \dividend0_reg[16]_i_2_n_2 ;
  wire \dividend0_reg[16]_i_2_n_3 ;
  wire \dividend0_reg[16]_i_2_n_4 ;
  wire \dividend0_reg[16]_i_2_n_5 ;
  wire \dividend0_reg[16]_i_2_n_6 ;
  wire \dividend0_reg[16]_i_2_n_7 ;
  wire \dividend0_reg[4]_i_2_n_0 ;
  wire \dividend0_reg[4]_i_2_n_1 ;
  wire \dividend0_reg[4]_i_2_n_2 ;
  wire \dividend0_reg[4]_i_2_n_3 ;
  wire \dividend0_reg[4]_i_2_n_4 ;
  wire \dividend0_reg[4]_i_2_n_5 ;
  wire \dividend0_reg[4]_i_2_n_6 ;
  wire \dividend0_reg[4]_i_2_n_7 ;
  wire \dividend0_reg[8]_i_2_n_0 ;
  wire \dividend0_reg[8]_i_2_n_1 ;
  wire \dividend0_reg[8]_i_2_n_2 ;
  wire \dividend0_reg[8]_i_2_n_3 ;
  wire \dividend0_reg[8]_i_2_n_4 ;
  wire \dividend0_reg[8]_i_2_n_5 ;
  wire \dividend0_reg[8]_i_2_n_6 ;
  wire \dividend0_reg[8]_i_2_n_7 ;
  wire \dividend0_reg_n_0_[10] ;
  wire \dividend0_reg_n_0_[11] ;
  wire \dividend0_reg_n_0_[12] ;
  wire \dividend0_reg_n_0_[13] ;
  wire \dividend0_reg_n_0_[14] ;
  wire \dividend0_reg_n_0_[6] ;
  wire \dividend0_reg_n_0_[7] ;
  wire \dividend0_reg_n_0_[8] ;
  wire \dividend0_reg_n_0_[9] ;
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
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_10;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_11;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_12;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_13;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_14;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_15;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_16;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_17;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_18;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_19;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_4;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_5;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_6;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_7;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_8;
  wire fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_9;
  wire [15:0]p;
  wire p_1_in;
  wire \r_stage_reg[0] ;
  wire [0:0]\r_stage_reg[17] ;
  wire r_stage_reg_r_13;
  wire r_stage_reg_r_5;
  wire [15:0]\remd_reg[15]_0 ;
  wire [3:3]\NLW_dividend0_reg[16]_i_2_CO_UNCONNECTED ;

  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[10]_i_1 
       (.I0(\dividend0_reg[12]_i_2_n_6 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[10] ),
        .O(\dividend0[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[11]_i_1 
       (.I0(\dividend0_reg[12]_i_2_n_5 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[11] ),
        .O(\dividend0[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[12]_i_1 
       (.I0(\dividend0_reg[12]_i_2_n_4 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[12] ),
        .O(\dividend0[12]_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[12]_i_3 
       (.I0(\dividend0_reg_n_0_[12] ),
        .O(\dividend0[12]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[12]_i_4 
       (.I0(\dividend0_reg_n_0_[11] ),
        .O(\dividend0[12]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[12]_i_5 
       (.I0(\dividend0_reg_n_0_[10] ),
        .O(\dividend0[12]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[12]_i_6 
       (.I0(\dividend0_reg_n_0_[9] ),
        .O(\dividend0[12]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[13]_i_1 
       (.I0(\dividend0_reg[16]_i_2_n_7 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[13] ),
        .O(\dividend0[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[14]_i_1 
       (.I0(\dividend0_reg[16]_i_2_n_6 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[14] ),
        .O(\dividend0[14]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \dividend0[15]_i_1 
       (.I0(p_1_in),
        .I1(\dividend0_reg[16]_i_2_n_5 ),
        .O(\dividend0[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \dividend0[16]_i_1 
       (.I0(p_1_in),
        .I1(\dividend0_reg[16]_i_2_n_4 ),
        .O(\dividend0[16]_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[16]_i_3 
       (.I0(p_1_in),
        .O(\dividend0[16]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[16]_i_4 
       (.I0(p_1_in),
        .O(\dividend0[16]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[16]_i_5 
       (.I0(\dividend0_reg_n_0_[14] ),
        .O(\dividend0[16]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[16]_i_6 
       (.I0(\dividend0_reg_n_0_[13] ),
        .O(\dividend0[16]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[1]_i_1 
       (.I0(\dividend0_reg[4]_i_2_n_7 ),
        .I1(p_1_in),
        .I2(D[1]),
        .O(\dividend0[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[2]_i_1 
       (.I0(\dividend0_reg[4]_i_2_n_6 ),
        .I1(p_1_in),
        .I2(D[2]),
        .O(\dividend0[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[3]_i_1 
       (.I0(\dividend0_reg[4]_i_2_n_5 ),
        .I1(p_1_in),
        .I2(D[3]),
        .O(\dividend0[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[4]_i_1 
       (.I0(\dividend0_reg[4]_i_2_n_4 ),
        .I1(p_1_in),
        .I2(D[4]),
        .O(\dividend0[4]_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_3 
       (.I0(D[0]),
        .O(\dividend0[4]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_4 
       (.I0(D[4]),
        .O(\dividend0[4]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_5 
       (.I0(D[3]),
        .O(\dividend0[4]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_6 
       (.I0(D[2]),
        .O(\dividend0[4]_i_6_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[4]_i_7 
       (.I0(D[1]),
        .O(\dividend0[4]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[5]_i_1 
       (.I0(\dividend0_reg[8]_i_2_n_7 ),
        .I1(p_1_in),
        .I2(D[5]),
        .O(\dividend0[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[6]_i_1 
       (.I0(\dividend0_reg[8]_i_2_n_6 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[6] ),
        .O(\dividend0[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[7]_i_1 
       (.I0(\dividend0_reg[8]_i_2_n_5 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[7] ),
        .O(\dividend0[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[8]_i_1 
       (.I0(\dividend0_reg[8]_i_2_n_4 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[8] ),
        .O(\dividend0[8]_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[8]_i_3 
       (.I0(\dividend0_reg_n_0_[8] ),
        .O(\dividend0[8]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[8]_i_4 
       (.I0(\dividend0_reg_n_0_[7] ),
        .O(\dividend0[8]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[8]_i_5 
       (.I0(\dividend0_reg_n_0_[6] ),
        .O(\dividend0[8]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[8]_i_6 
       (.I0(D[5]),
        .O(\dividend0[8]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[9]_i_1 
       (.I0(\dividend0_reg[12]_i_2_n_7 ),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[9] ),
        .O(\dividend0[9]_i_1_n_0 ));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[0]),
        .Q(D[0]),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[10]),
        .Q(\dividend0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[11]),
        .Q(\dividend0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[12]),
        .Q(\dividend0_reg_n_0_[12] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[12]_i_2 
       (.CI(\dividend0_reg[8]_i_2_n_0 ),
        .CO({\dividend0_reg[12]_i_2_n_0 ,\dividend0_reg[12]_i_2_n_1 ,\dividend0_reg[12]_i_2_n_2 ,\dividend0_reg[12]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\dividend0_reg[12]_i_2_n_4 ,\dividend0_reg[12]_i_2_n_5 ,\dividend0_reg[12]_i_2_n_6 ,\dividend0_reg[12]_i_2_n_7 }),
        .S({\dividend0[12]_i_3_n_0 ,\dividend0[12]_i_4_n_0 ,\dividend0[12]_i_5_n_0 ,\dividend0[12]_i_6_n_0 }));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[13]),
        .Q(\dividend0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[14]),
        .Q(\dividend0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \dividend0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[15]),
        .Q(p_1_in),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[16]_i_2 
       (.CI(\dividend0_reg[12]_i_2_n_0 ),
        .CO({\NLW_dividend0_reg[16]_i_2_CO_UNCONNECTED [3],\dividend0_reg[16]_i_2_n_1 ,\dividend0_reg[16]_i_2_n_2 ,\dividend0_reg[16]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\dividend0_reg[16]_i_2_n_4 ,\dividend0_reg[16]_i_2_n_5 ,\dividend0_reg[16]_i_2_n_6 ,\dividend0_reg[16]_i_2_n_7 }),
        .S({\dividend0[16]_i_3_n_0 ,\dividend0[16]_i_4_n_0 ,\dividend0[16]_i_5_n_0 ,\dividend0[16]_i_6_n_0 }));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[1]),
        .Q(D[1]),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[2]),
        .Q(D[2]),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[3]),
        .Q(D[3]),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[4]),
        .Q(D[4]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[4]_i_2 
       (.CI(1'b0),
        .CO({\dividend0_reg[4]_i_2_n_0 ,\dividend0_reg[4]_i_2_n_1 ,\dividend0_reg[4]_i_2_n_2 ,\dividend0_reg[4]_i_2_n_3 }),
        .CYINIT(\dividend0[4]_i_3_n_0 ),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\dividend0_reg[4]_i_2_n_4 ,\dividend0_reg[4]_i_2_n_5 ,\dividend0_reg[4]_i_2_n_6 ,\dividend0_reg[4]_i_2_n_7 }),
        .S({\dividend0[4]_i_4_n_0 ,\dividend0[4]_i_5_n_0 ,\dividend0[4]_i_6_n_0 ,\dividend0[4]_i_7_n_0 }));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[5]),
        .Q(D[5]),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[8]),
        .Q(\dividend0_reg_n_0_[8] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[8]_i_2 
       (.CI(\dividend0_reg[4]_i_2_n_0 ),
        .CO({\dividend0_reg[8]_i_2_n_0 ,\dividend0_reg[8]_i_2_n_1 ,\dividend0_reg[8]_i_2_n_2 ,\dividend0_reg[8]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\dividend0_reg[8]_i_2_n_4 ,\dividend0_reg[8]_i_2_n_5 ,\dividend0_reg[8]_i_2_n_6 ,\dividend0_reg[8]_i_2_n_7 }),
        .S({\dividend0[8]_i_3_n_0 ,\dividend0[8]_i_4_n_0 ,\dividend0[8]_i_5_n_0 ,\dividend0[8]_i_6_n_0 }));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[9]),
        .Q(\dividend0_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[9]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[10]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[11]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[12]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[13]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[14]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[15]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \divisor0_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[16]),
        .Q(\divisor0_reg_n_0_[17] ),
        .R(1'b0));
  FDRE \divisor0_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[17]),
        .Q(\divisor0_reg_n_0_[18] ),
        .R(1'b0));
  FDRE \divisor0_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[18]),
        .Q(\divisor0_reg_n_0_[19] ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[0]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[19]),
        .Q(\divisor0_reg_n_0_[20] ),
        .R(1'b0));
  FDRE \divisor0_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[20]),
        .Q(\divisor0_reg_n_0_[21] ),
        .R(1'b0));
  FDRE \divisor0_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[21]),
        .Q(\divisor0_reg_n_0_[22] ),
        .R(1'b0));
  FDRE \divisor0_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[22]),
        .Q(\divisor0_reg_n_0_[23] ),
        .R(1'b0));
  FDRE \divisor0_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[23]),
        .Q(\divisor0_reg_n_0_[24] ),
        .R(1'b0));
  FDRE \divisor0_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[24]),
        .Q(\divisor0_reg_n_0_[25] ),
        .R(1'b0));
  FDRE \divisor0_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[25]),
        .Q(\divisor0_reg_n_0_[26] ),
        .R(1'b0));
  FDRE \divisor0_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[26]),
        .Q(\divisor0_reg_n_0_[27] ),
        .R(1'b0));
  FDRE \divisor0_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[27]),
        .Q(\divisor0_reg_n_0_[28] ),
        .R(1'b0));
  FDRE \divisor0_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[28]),
        .Q(\divisor0_reg_n_0_[29] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[1]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[29]),
        .Q(\divisor0_reg_n_0_[30] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[2]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[3]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[4]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[5]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[6]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[7]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[8]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_17s_32ns_16_21_seq_1_div_u fn1_srem_17s_32ns_16_21_seq_1_div_u_0
       (.D({fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_4,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_5,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_6,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_7,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_8,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_9,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_10,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_11,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_12,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_13,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_14,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_15,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_16,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_17,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_18,fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_19}),
        .E(E),
        .Q(p_1_in),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\dividend0_reg[16]_0 ({\dividend0[16]_i_1_n_0 ,\dividend0[15]_i_1_n_0 ,\dividend0[14]_i_1_n_0 ,\dividend0[13]_i_1_n_0 ,\dividend0[12]_i_1_n_0 ,\dividend0[11]_i_1_n_0 ,\dividend0[10]_i_1_n_0 ,\dividend0[9]_i_1_n_0 ,\dividend0[8]_i_1_n_0 ,\dividend0[7]_i_1_n_0 ,\dividend0[6]_i_1_n_0 ,\dividend0[5]_i_1_n_0 ,\dividend0[4]_i_1_n_0 ,\dividend0[3]_i_1_n_0 ,\dividend0[2]_i_1_n_0 ,\dividend0[1]_i_1_n_0 ,D[0]}),
        .\divisor0_reg[30]_0 ({\divisor0_reg_n_0_[30] ,\divisor0_reg_n_0_[29] ,\divisor0_reg_n_0_[28] ,\divisor0_reg_n_0_[27] ,\divisor0_reg_n_0_[26] ,\divisor0_reg_n_0_[25] ,\divisor0_reg_n_0_[24] ,\divisor0_reg_n_0_[23] ,\divisor0_reg_n_0_[22] ,\divisor0_reg_n_0_[21] ,\divisor0_reg_n_0_[20] ,\divisor0_reg_n_0_[19] ,\divisor0_reg_n_0_[18] ,\divisor0_reg_n_0_[17] ,\divisor0_reg_n_0_[16] ,\divisor0_reg_n_0_[15] ,\divisor0_reg_n_0_[14] ,\divisor0_reg_n_0_[13] ,\divisor0_reg_n_0_[12] ,\divisor0_reg_n_0_[11] ,\divisor0_reg_n_0_[10] ,\divisor0_reg_n_0_[9] ,\divisor0_reg_n_0_[8] ,\divisor0_reg_n_0_[7] ,\divisor0_reg_n_0_[6] ,\divisor0_reg_n_0_[5] ,\divisor0_reg_n_0_[4] ,\divisor0_reg_n_0_[3] ,\divisor0_reg_n_0_[2] ,\divisor0_reg_n_0_[1] }),
        .\r_stage_reg[0]_0 (\r_stage_reg[0] ),
        .\r_stage_reg[17]_0 (\r_stage_reg[17] ),
        .r_stage_reg_r_13_0(r_stage_reg_r_13),
        .r_stage_reg_r_5_0(r_stage_reg_r_5));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_19),
        .Q(\remd_reg[15]_0 [0]),
        .R(1'b0));
  FDRE \remd_reg[10] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_9),
        .Q(\remd_reg[15]_0 [10]),
        .R(1'b0));
  FDRE \remd_reg[11] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_8),
        .Q(\remd_reg[15]_0 [11]),
        .R(1'b0));
  FDRE \remd_reg[12] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_7),
        .Q(\remd_reg[15]_0 [12]),
        .R(1'b0));
  FDRE \remd_reg[13] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_6),
        .Q(\remd_reg[15]_0 [13]),
        .R(1'b0));
  FDRE \remd_reg[14] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_5),
        .Q(\remd_reg[15]_0 [14]),
        .R(1'b0));
  FDRE \remd_reg[15] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_4),
        .Q(\remd_reg[15]_0 [15]),
        .R(1'b0));
  FDRE \remd_reg[1] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_18),
        .Q(\remd_reg[15]_0 [1]),
        .R(1'b0));
  FDRE \remd_reg[2] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_17),
        .Q(\remd_reg[15]_0 [2]),
        .R(1'b0));
  FDRE \remd_reg[3] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_16),
        .Q(\remd_reg[15]_0 [3]),
        .R(1'b0));
  FDRE \remd_reg[4] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_15),
        .Q(\remd_reg[15]_0 [4]),
        .R(1'b0));
  FDRE \remd_reg[5] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_14),
        .Q(\remd_reg[15]_0 [5]),
        .R(1'b0));
  FDRE \remd_reg[6] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_13),
        .Q(\remd_reg[15]_0 [6]),
        .R(1'b0));
  FDRE \remd_reg[7] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_12),
        .Q(\remd_reg[15]_0 [7]),
        .R(1'b0));
  FDRE \remd_reg[8] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_11),
        .Q(\remd_reg[15]_0 [8]),
        .R(1'b0));
  FDRE \remd_reg[9] 
       (.C(ap_clk),
        .CE(\r_stage_reg[17] ),
        .D(fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_10),
        .Q(\remd_reg[15]_0 [9]),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_srem_17s_32ns_16_21_seq_1_div_u
   (\r_stage_reg[0]_0 ,
    r_stage_reg_r_5_0,
    r_stage_reg_r_13_0,
    \r_stage_reg[17]_0 ,
    D,
    E,
    Q,
    ap_clk,
    ap_rst,
    \dividend0_reg[16]_0 ,
    \divisor0_reg[30]_0 );
  output \r_stage_reg[0]_0 ;
  output r_stage_reg_r_5_0;
  output r_stage_reg_r_13_0;
  output [0:0]\r_stage_reg[17]_0 ;
  output [15:0]D;
  input [0:0]E;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input [16:0]\dividend0_reg[16]_0 ;
  input [29:0]\divisor0_reg[30]_0 ;

  wire [15:0]D;
  wire [0:0]E;
  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire cal_tmp_carry__0_i_1_n_0;
  wire cal_tmp_carry__0_i_2_n_0;
  wire cal_tmp_carry__0_i_3_n_0;
  wire cal_tmp_carry__0_i_4_n_0;
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
  wire cal_tmp_carry__1_i_1_n_0;
  wire cal_tmp_carry__1_i_2_n_0;
  wire cal_tmp_carry__1_i_3_n_0;
  wire cal_tmp_carry__1_i_4_n_0;
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
  wire cal_tmp_carry__2_i_1_n_0;
  wire cal_tmp_carry__2_i_2_n_0;
  wire cal_tmp_carry__2_i_3_n_0;
  wire cal_tmp_carry__2_i_4_n_0;
  wire cal_tmp_carry__2_i_5__0_n_0;
  wire cal_tmp_carry__2_i_6__0_n_0;
  wire cal_tmp_carry__2_i_7__0_n_0;
  wire cal_tmp_carry__2_i_8__0_n_0;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
  wire cal_tmp_carry__2_n_4;
  wire cal_tmp_carry__2_n_5;
  wire cal_tmp_carry__2_n_6;
  wire cal_tmp_carry__2_n_7;
  wire cal_tmp_carry__3_i_1_n_0;
  wire cal_tmp_carry__3_i_2_n_0;
  wire cal_tmp_carry__3_i_3_n_0;
  wire cal_tmp_carry__3_i_4_n_0;
  wire cal_tmp_carry__3_i_5_n_0;
  wire cal_tmp_carry__3_n_0;
  wire cal_tmp_carry__3_n_1;
  wire cal_tmp_carry__3_n_2;
  wire cal_tmp_carry__3_n_3;
  wire cal_tmp_carry__4_i_1_n_0;
  wire cal_tmp_carry__4_i_2_n_0;
  wire cal_tmp_carry__4_i_3_n_0;
  wire cal_tmp_carry__4_i_4_n_0;
  wire cal_tmp_carry__4_n_0;
  wire cal_tmp_carry__4_n_1;
  wire cal_tmp_carry__4_n_2;
  wire cal_tmp_carry__4_n_3;
  wire cal_tmp_carry__5_i_1_n_0;
  wire cal_tmp_carry__5_i_2_n_0;
  wire cal_tmp_carry__5_i_3_n_0;
  wire cal_tmp_carry__5_i_4_n_0;
  wire cal_tmp_carry__5_n_0;
  wire cal_tmp_carry__5_n_1;
  wire cal_tmp_carry__5_n_2;
  wire cal_tmp_carry__5_n_3;
  wire cal_tmp_carry__6_i_1_n_0;
  wire cal_tmp_carry__6_i_2_n_0;
  wire cal_tmp_carry__6_i_3_n_0;
  wire cal_tmp_carry__6_n_2;
  wire cal_tmp_carry__6_n_3;
  wire cal_tmp_carry_i_1_n_0;
  wire cal_tmp_carry_i_2_n_0;
  wire cal_tmp_carry_i_3_n_0;
  wire cal_tmp_carry_i_4_n_0;
  wire cal_tmp_carry_i_5__2_n_0;
  wire cal_tmp_carry_i_6__1_n_0;
  wire cal_tmp_carry_i_7__1_n_0;
  wire cal_tmp_carry_i_8_n_0;
  wire cal_tmp_carry_n_0;
  wire cal_tmp_carry_n_1;
  wire cal_tmp_carry_n_2;
  wire cal_tmp_carry_n_3;
  wire cal_tmp_carry_n_4;
  wire cal_tmp_carry_n_5;
  wire cal_tmp_carry_n_6;
  wire cal_tmp_carry_n_7;
  wire [16:0]\dividend0_reg[16]_0 ;
  wire \dividend0_reg_n_0_[0] ;
  wire \dividend0_reg_n_0_[10] ;
  wire \dividend0_reg_n_0_[11] ;
  wire \dividend0_reg_n_0_[12] ;
  wire \dividend0_reg_n_0_[13] ;
  wire \dividend0_reg_n_0_[14] ;
  wire \dividend0_reg_n_0_[15] ;
  wire \dividend0_reg_n_0_[16] ;
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
  wire \dividend_tmp_reg_n_0_[0] ;
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
  wire [29:0]\divisor0_reg[30]_0 ;
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
  wire p_0_in;
  wire [0:0]p_2_out;
  wire \r_stage_reg[0]_0 ;
  wire \r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0 ;
  wire \r_stage_reg[16]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_14_n_0 ;
  wire [0:0]\r_stage_reg[17]_0 ;
  wire r_stage_reg_gate_n_0;
  wire r_stage_reg_r_0_n_0;
  wire r_stage_reg_r_10_n_0;
  wire r_stage_reg_r_11_n_0;
  wire r_stage_reg_r_12_n_0;
  wire r_stage_reg_r_13_0;
  wire r_stage_reg_r_14_n_0;
  wire r_stage_reg_r_1_n_0;
  wire r_stage_reg_r_2_n_0;
  wire r_stage_reg_r_3_n_0;
  wire r_stage_reg_r_4_n_0;
  wire r_stage_reg_r_5_0;
  wire r_stage_reg_r_6_n_0;
  wire r_stage_reg_r_7_n_0;
  wire r_stage_reg_r_8_n_0;
  wire r_stage_reg_r_9_n_0;
  wire r_stage_reg_r_n_0;
  wire \remd[11]_i_2_n_0 ;
  wire \remd[11]_i_3_n_0 ;
  wire \remd[11]_i_4_n_0 ;
  wire \remd[11]_i_5_n_0 ;
  wire \remd[15]_i_2_n_0 ;
  wire \remd[15]_i_3_n_0 ;
  wire \remd[15]_i_4_n_0 ;
  wire \remd[15]_i_5_n_0 ;
  wire \remd[3]_i_2_n_0 ;
  wire \remd[3]_i_3_n_0 ;
  wire \remd[3]_i_4_n_0 ;
  wire \remd[3]_i_5_n_0 ;
  wire \remd[7]_i_2_n_0 ;
  wire \remd[7]_i_3_n_0 ;
  wire \remd[7]_i_4_n_0 ;
  wire \remd[7]_i_5_n_0 ;
  wire \remd_reg[11]_i_1_n_0 ;
  wire \remd_reg[11]_i_1_n_1 ;
  wire \remd_reg[11]_i_1_n_2 ;
  wire \remd_reg[11]_i_1_n_3 ;
  wire \remd_reg[15]_i_1_n_1 ;
  wire \remd_reg[15]_i_1_n_2 ;
  wire \remd_reg[15]_i_1_n_3 ;
  wire \remd_reg[3]_i_1_n_0 ;
  wire \remd_reg[3]_i_1_n_1 ;
  wire \remd_reg[3]_i_1_n_2 ;
  wire \remd_reg[3]_i_1_n_3 ;
  wire \remd_reg[7]_i_1_n_0 ;
  wire \remd_reg[7]_i_1_n_1 ;
  wire \remd_reg[7]_i_1_n_2 ;
  wire \remd_reg[7]_i_1_n_3 ;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp[10]_i_1_n_0 ;
  wire \remd_tmp[11]_i_1_n_0 ;
  wire \remd_tmp[12]_i_1_n_0 ;
  wire \remd_tmp[13]_i_1_n_0 ;
  wire \remd_tmp[14]_i_1_n_0 ;
  wire \remd_tmp[15]_i_1_n_0 ;
  wire \remd_tmp[1]_i_1_n_0 ;
  wire \remd_tmp[2]_i_1_n_0 ;
  wire \remd_tmp[3]_i_1_n_0 ;
  wire \remd_tmp[4]_i_1_n_0 ;
  wire \remd_tmp[5]_i_1_n_0 ;
  wire \remd_tmp[6]_i_1_n_0 ;
  wire \remd_tmp[7]_i_1_n_0 ;
  wire \remd_tmp[8]_i_1_n_0 ;
  wire \remd_tmp[9]_i_1_n_0 ;
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
  wire \sign0_reg_n_0_[0] ;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__4_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__5_O_UNCONNECTED;
  wire [3:3]NLW_cal_tmp_carry__6_CO_UNCONNECTED;
  wire [2:0]NLW_cal_tmp_carry__6_O_UNCONNECTED;
  wire [3:3]\NLW_remd_reg[15]_i_1_CO_UNCONNECTED ;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({cal_tmp_carry_i_1_n_0,cal_tmp_carry_i_2_n_0,cal_tmp_carry_i_3_n_0,cal_tmp_carry_i_4_n_0}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_5__2_n_0,cal_tmp_carry_i_6__1_n_0,cal_tmp_carry_i_7__1_n_0,cal_tmp_carry_i_8_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__0_i_1_n_0,cal_tmp_carry__0_i_2_n_0,cal_tmp_carry__0_i_3_n_0,cal_tmp_carry__0_i_4_n_0}),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_5__1_n_0,cal_tmp_carry__0_i_6__1_n_0,cal_tmp_carry__0_i_7__1_n_0,cal_tmp_carry__0_i_8__1_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__0_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__0_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__0_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__0_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5__1
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[6] ),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_5__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6__1
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_6__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7__1
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[4] ),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_7__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_8__1
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[3] ),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_8__1_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__1_i_1_n_0,cal_tmp_carry__1_i_2_n_0,cal_tmp_carry__1_i_3_n_0,cal_tmp_carry__1_i_4_n_0}),
        .O({cal_tmp_carry__1_n_4,cal_tmp_carry__1_n_5,cal_tmp_carry__1_n_6,cal_tmp_carry__1_n_7}),
        .S({cal_tmp_carry__1_i_5__0_n_0,cal_tmp_carry__1_i_6__0_n_0,cal_tmp_carry__1_i_7__0_n_0,cal_tmp_carry__1_i_8__0_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_1
       (.I0(\remd_tmp_reg_n_0_[10] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__1_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_2
       (.I0(\remd_tmp_reg_n_0_[9] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__1_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_3
       (.I0(\remd_tmp_reg_n_0_[8] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__1_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_4
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__1_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_5__0
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[10] ),
        .I2(\divisor0_reg_n_0_[11] ),
        .O(cal_tmp_carry__1_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_6__0
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[9] ),
        .I2(\divisor0_reg_n_0_[10] ),
        .O(cal_tmp_carry__1_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_7__0
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[8] ),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_7__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_8__0
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[7] ),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_8__0_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__2_i_1_n_0,cal_tmp_carry__2_i_2_n_0,cal_tmp_carry__2_i_3_n_0,cal_tmp_carry__2_i_4_n_0}),
        .O({cal_tmp_carry__2_n_4,cal_tmp_carry__2_n_5,cal_tmp_carry__2_n_6,cal_tmp_carry__2_n_7}),
        .S({cal_tmp_carry__2_i_5__0_n_0,cal_tmp_carry__2_i_6__0_n_0,cal_tmp_carry__2_i_7__0_n_0,cal_tmp_carry__2_i_8__0_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_1
       (.I0(\remd_tmp_reg_n_0_[14] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__2_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_2
       (.I0(\remd_tmp_reg_n_0_[13] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__2_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_3
       (.I0(\remd_tmp_reg_n_0_[12] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__2_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_4
       (.I0(\remd_tmp_reg_n_0_[11] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__2_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_5__0
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[14] ),
        .I2(\divisor0_reg_n_0_[15] ),
        .O(cal_tmp_carry__2_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_6__0
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[13] ),
        .I2(\divisor0_reg_n_0_[14] ),
        .O(cal_tmp_carry__2_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_7__0
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[12] ),
        .I2(\divisor0_reg_n_0_[13] ),
        .O(cal_tmp_carry__2_i_7__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_8__0
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[11] ),
        .I2(\divisor0_reg_n_0_[12] ),
        .O(cal_tmp_carry__2_i_8__0_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({cal_tmp_carry__3_n_0,cal_tmp_carry__3_n_1,cal_tmp_carry__3_n_2,cal_tmp_carry__3_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,cal_tmp_carry__3_i_1_n_0}),
        .O(NLW_cal_tmp_carry__3_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__3_i_2_n_0,cal_tmp_carry__3_i_3_n_0,cal_tmp_carry__3_i_4_n_0,cal_tmp_carry__3_i_5_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__3_i_1
       (.I0(\remd_tmp_reg_n_0_[15] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry__3_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_2
       (.I0(\divisor0_reg_n_0_[19] ),
        .O(cal_tmp_carry__3_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_3
       (.I0(\divisor0_reg_n_0_[18] ),
        .O(cal_tmp_carry__3_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_4
       (.I0(\divisor0_reg_n_0_[17] ),
        .O(cal_tmp_carry__3_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__3_i_5
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[15] ),
        .I2(\divisor0_reg_n_0_[16] ),
        .O(cal_tmp_carry__3_i_5_n_0));
  CARRY4 cal_tmp_carry__4
       (.CI(cal_tmp_carry__3_n_0),
        .CO({cal_tmp_carry__4_n_0,cal_tmp_carry__4_n_1,cal_tmp_carry__4_n_2,cal_tmp_carry__4_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__4_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__4_i_1_n_0,cal_tmp_carry__4_i_2_n_0,cal_tmp_carry__4_i_3_n_0,cal_tmp_carry__4_i_4_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__4_i_1
       (.I0(\divisor0_reg_n_0_[23] ),
        .O(cal_tmp_carry__4_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__4_i_2
       (.I0(\divisor0_reg_n_0_[22] ),
        .O(cal_tmp_carry__4_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__4_i_3
       (.I0(\divisor0_reg_n_0_[21] ),
        .O(cal_tmp_carry__4_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__4_i_4
       (.I0(\divisor0_reg_n_0_[20] ),
        .O(cal_tmp_carry__4_i_4_n_0));
  CARRY4 cal_tmp_carry__5
       (.CI(cal_tmp_carry__4_n_0),
        .CO({cal_tmp_carry__5_n_0,cal_tmp_carry__5_n_1,cal_tmp_carry__5_n_2,cal_tmp_carry__5_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__5_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__5_i_1_n_0,cal_tmp_carry__5_i_2_n_0,cal_tmp_carry__5_i_3_n_0,cal_tmp_carry__5_i_4_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__5_i_1
       (.I0(\divisor0_reg_n_0_[27] ),
        .O(cal_tmp_carry__5_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__5_i_2
       (.I0(\divisor0_reg_n_0_[26] ),
        .O(cal_tmp_carry__5_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__5_i_3
       (.I0(\divisor0_reg_n_0_[25] ),
        .O(cal_tmp_carry__5_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__5_i_4
       (.I0(\divisor0_reg_n_0_[24] ),
        .O(cal_tmp_carry__5_i_4_n_0));
  CARRY4 cal_tmp_carry__6
       (.CI(cal_tmp_carry__5_n_0),
        .CO({NLW_cal_tmp_carry__6_CO_UNCONNECTED[3],p_2_out,cal_tmp_carry__6_n_2,cal_tmp_carry__6_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({p_0_in,NLW_cal_tmp_carry__6_O_UNCONNECTED[2:0]}),
        .S({1'b1,cal_tmp_carry__6_i_1_n_0,cal_tmp_carry__6_i_2_n_0,cal_tmp_carry__6_i_3_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__6_i_1
       (.I0(\divisor0_reg_n_0_[30] ),
        .O(cal_tmp_carry__6_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__6_i_2
       (.I0(\divisor0_reg_n_0_[29] ),
        .O(cal_tmp_carry__6_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__6_i_3
       (.I0(\divisor0_reg_n_0_[28] ),
        .O(cal_tmp_carry__6_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry_i_3_n_0));
  LUT3 #(
    .INIT(8'hAC)) 
    cal_tmp_carry_i_4
       (.I0(\dividend0_reg_n_0_[16] ),
        .I1(\dividend_tmp_reg_n_0_[16] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5__2
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[2] ),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_5__2_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6__1
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_6__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_7__1
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[0] ),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_7__1_n_0));
  LUT3 #(
    .INIT(8'hAC)) 
    cal_tmp_carry_i_8
       (.I0(\dividend0_reg_n_0_[16] ),
        .I1(\dividend_tmp_reg_n_0_[16] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(cal_tmp_carry_i_8_n_0));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [10]),
        .Q(\dividend0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [11]),
        .Q(\dividend0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [12]),
        .Q(\dividend0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [13]),
        .Q(\dividend0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [14]),
        .Q(\dividend0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \dividend0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [15]),
        .Q(\dividend0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \dividend0_reg[16] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [16]),
        .Q(\dividend0_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [8]),
        .Q(\dividend0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[16]_0 [9]),
        .Q(\dividend0_reg_n_0_[9] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[10]_i_1 
       (.I0(\dividend0_reg_n_0_[9] ),
        .I1(\dividend_tmp_reg_n_0_[9] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[11]_i_1 
       (.I0(\dividend0_reg_n_0_[10] ),
        .I1(\dividend_tmp_reg_n_0_[10] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[12]_i_1 
       (.I0(\dividend0_reg_n_0_[11] ),
        .I1(\dividend_tmp_reg_n_0_[11] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[12]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[13]_i_1 
       (.I0(\dividend0_reg_n_0_[12] ),
        .I1(\dividend_tmp_reg_n_0_[12] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[14]_i_1 
       (.I0(\dividend0_reg_n_0_[13] ),
        .I1(\dividend_tmp_reg_n_0_[13] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[14]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[15]_i_1 
       (.I0(\dividend0_reg_n_0_[14] ),
        .I1(\dividend_tmp_reg_n_0_[14] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[16]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\dividend_tmp_reg_n_0_[15] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[16]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[1]_i_1 
       (.I0(\dividend0_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg_n_0_[0] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[2]_i_1 
       (.I0(\dividend0_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[3]_i_1 
       (.I0(\dividend0_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg_n_0_[2] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend0_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg_n_0_[3] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[5]_i_1 
       (.I0(\dividend0_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg_n_0_[4] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[6]_i_1 
       (.I0(\dividend0_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg_n_0_[5] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[7]_i_1 
       (.I0(\dividend0_reg_n_0_[6] ),
        .I1(\dividend_tmp_reg_n_0_[6] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[8]_i_1 
       (.I0(\dividend0_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg_n_0_[7] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[9]_i_1 
       (.I0(\dividend0_reg_n_0_[8] ),
        .I1(\dividend_tmp_reg_n_0_[8] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[9]_i_1_n_0 ));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_2_out),
        .Q(\dividend_tmp_reg_n_0_[0] ),
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
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [9]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [10]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [11]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [12]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [13]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [14]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [15]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \divisor0_reg[17] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [16]),
        .Q(\divisor0_reg_n_0_[17] ),
        .R(1'b0));
  FDRE \divisor0_reg[18] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [17]),
        .Q(\divisor0_reg_n_0_[18] ),
        .R(1'b0));
  FDRE \divisor0_reg[19] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [18]),
        .Q(\divisor0_reg_n_0_[19] ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [0]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[20] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [19]),
        .Q(\divisor0_reg_n_0_[20] ),
        .R(1'b0));
  FDRE \divisor0_reg[21] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [20]),
        .Q(\divisor0_reg_n_0_[21] ),
        .R(1'b0));
  FDRE \divisor0_reg[22] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [21]),
        .Q(\divisor0_reg_n_0_[22] ),
        .R(1'b0));
  FDRE \divisor0_reg[23] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [22]),
        .Q(\divisor0_reg_n_0_[23] ),
        .R(1'b0));
  FDRE \divisor0_reg[24] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [23]),
        .Q(\divisor0_reg_n_0_[24] ),
        .R(1'b0));
  FDRE \divisor0_reg[25] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [24]),
        .Q(\divisor0_reg_n_0_[25] ),
        .R(1'b0));
  FDRE \divisor0_reg[26] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [25]),
        .Q(\divisor0_reg_n_0_[26] ),
        .R(1'b0));
  FDRE \divisor0_reg[27] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [26]),
        .Q(\divisor0_reg_n_0_[27] ),
        .R(1'b0));
  FDRE \divisor0_reg[28] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [27]),
        .Q(\divisor0_reg_n_0_[28] ),
        .R(1'b0));
  FDRE \divisor0_reg[29] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [28]),
        .Q(\divisor0_reg_n_0_[29] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [1]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[30] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [29]),
        .Q(\divisor0_reg_n_0_[30] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [2]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [3]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [4]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [5]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [6]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [7]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[30]_0 [8]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg[0]_0 ),
        .R(ap_rst));
  (* srl_bus_name = "inst/\srem_17s_32ns_16_21_seq_1_U3/fn1_srem_17s_32ns_16_21_seq_1_div_U/fn1_srem_17s_32ns_16_21_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\srem_17s_32ns_16_21_seq_1_U3/fn1_srem_17s_32ns_16_21_seq_1_div_U/fn1_srem_17s_32ns_16_21_seq_1_div_u_0/r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13 " *) 
  SRL16E \r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13 
       (.A0(1'b0),
        .A1(1'b1),
        .A2(1'b1),
        .A3(1'b1),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg[0]_0 ),
        .Q(\r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0 ));
  FDRE \r_stage_reg[16]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_14 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0 ),
        .Q(\r_stage_reg[16]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_14_n_0 ),
        .R(1'b0));
  FDRE \r_stage_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_gate_n_0),
        .Q(\r_stage_reg[17]_0 ),
        .R(ap_rst));
  LUT2 #(
    .INIT(4'h8)) 
    r_stage_reg_gate
       (.I0(\r_stage_reg[16]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_14_n_0 ),
        .I1(r_stage_reg_r_14_n_0),
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
  FDRE r_stage_reg_r_13
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_12_n_0),
        .Q(r_stage_reg_r_13_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_14
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_13_0),
        .Q(r_stage_reg_r_14_n_0),
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
        .Q(r_stage_reg_r_5_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_6
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_5_0),
        .Q(r_stage_reg_r_6_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_7
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_6_n_0),
        .Q(r_stage_reg_r_7_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_8
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_7_n_0),
        .Q(r_stage_reg_r_8_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_9
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_8_n_0),
        .Q(r_stage_reg_r_9_n_0),
        .R(ap_rst));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_2 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[11] ),
        .O(\remd[11]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_3 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[10] ),
        .O(\remd[11]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_4 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[9] ),
        .O(\remd[11]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_5 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[8] ),
        .O(\remd[11]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_2 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[15] ),
        .O(\remd[15]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_3 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[14] ),
        .O(\remd[15]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_4 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[13] ),
        .O(\remd[15]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_5 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[12] ),
        .O(\remd[15]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[3]_i_2 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[3] ),
        .O(\remd[3]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[3]_i_3 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[2] ),
        .O(\remd[3]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[3]_i_4 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .O(\remd[3]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h2)) 
    \remd[3]_i_5 
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .O(\remd[3]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_2 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[7] ),
        .O(\remd[7]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_3 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[6] ),
        .O(\remd[7]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_4 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .O(\remd[7]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_5 
       (.I0(\sign0_reg_n_0_[0] ),
        .I1(\remd_tmp_reg_n_0_[4] ),
        .O(\remd[7]_i_5_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[11]_i_1 
       (.CI(\remd_reg[7]_i_1_n_0 ),
        .CO({\remd_reg[11]_i_1_n_0 ,\remd_reg[11]_i_1_n_1 ,\remd_reg[11]_i_1_n_2 ,\remd_reg[11]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(D[11:8]),
        .S({\remd[11]_i_2_n_0 ,\remd[11]_i_3_n_0 ,\remd[11]_i_4_n_0 ,\remd[11]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[15]_i_1 
       (.CI(\remd_reg[11]_i_1_n_0 ),
        .CO({\NLW_remd_reg[15]_i_1_CO_UNCONNECTED [3],\remd_reg[15]_i_1_n_1 ,\remd_reg[15]_i_1_n_2 ,\remd_reg[15]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(D[15:12]),
        .S({\remd[15]_i_2_n_0 ,\remd[15]_i_3_n_0 ,\remd[15]_i_4_n_0 ,\remd[15]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[3]_i_1 
       (.CI(1'b0),
        .CO({\remd_reg[3]_i_1_n_0 ,\remd_reg[3]_i_1_n_1 ,\remd_reg[3]_i_1_n_2 ,\remd_reg[3]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\sign0_reg_n_0_[0] }),
        .O(D[3:0]),
        .S({\remd[3]_i_2_n_0 ,\remd[3]_i_3_n_0 ,\remd[3]_i_4_n_0 ,\remd[3]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[7]_i_1 
       (.CI(\remd_reg[3]_i_1_n_0 ),
        .CO({\remd_reg[7]_i_1_n_0 ,\remd_reg[7]_i_1_n_1 ,\remd_reg[7]_i_1_n_2 ,\remd_reg[7]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(D[7:4]),
        .S({\remd[7]_i_2_n_0 ,\remd[7]_i_3_n_0 ,\remd[7]_i_4_n_0 ,\remd[7]_i_5_n_0 }));
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \remd_tmp[0]_i_1 
       (.I0(\dividend0_reg_n_0_[16] ),
        .I1(\dividend_tmp_reg_n_0_[16] ),
        .I2(\r_stage_reg[0]_0 ),
        .I3(p_0_in),
        .I4(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[10]_i_1 
       (.I0(\remd_tmp_reg_n_0_[9] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_5),
        .O(\remd_tmp[10]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[11]_i_1 
       (.I0(\remd_tmp_reg_n_0_[10] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_4),
        .O(\remd_tmp[11]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[12]_i_1 
       (.I0(\remd_tmp_reg_n_0_[11] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_7),
        .O(\remd_tmp[12]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[13]_i_1 
       (.I0(\remd_tmp_reg_n_0_[12] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_6),
        .O(\remd_tmp[13]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[14]_i_1 
       (.I0(\remd_tmp_reg_n_0_[13] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_5),
        .O(\remd_tmp[14]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[15]_i_1 
       (.I0(\remd_tmp_reg_n_0_[14] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_4),
        .O(\remd_tmp[15]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1 
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1 
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1 
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1 
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1 
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1 
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_4),
        .O(\remd_tmp[7]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[8]_i_1 
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_7),
        .O(\remd_tmp[8]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[9]_i_1 
       (.I0(\remd_tmp_reg_n_0_[8] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_6),
        .O(\remd_tmp[9]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[10]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[11]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[12]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[13]_i_1_n_0 ),
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
        .D(\remd_tmp[1]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[2]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[3]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[4]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[5]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[6]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[7]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[8]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \remd_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[9]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \sign0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(Q),
        .Q(\sign0_reg_n_0_[0] ),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_urem_8ns_11ns_3_12_seq_1
   (\remd_reg[2] ,
    \remd_reg[1] ,
    \remd_reg[0] ,
    ap_clk,
    ap_rst,
    \r_stage_reg[8] ,
    Q,
    urem_ln20_reg_207,
    ap_start,
    p,
    D);
  output \remd_reg[2] ;
  output \remd_reg[1] ;
  output \remd_reg[0] ;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[8] ;
  input [1:0]Q;
  input [2:0]urem_ln20_reg_207;
  input ap_start;
  input [1:0]p;
  input [5:0]D;

  wire [5:0]D;
  wire [1:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire [1:0]p;
  wire \r_stage_reg[8] ;
  wire \remd_reg[0] ;
  wire \remd_reg[1] ;
  wire \remd_reg[2] ;
  wire [2:0]urem_ln20_reg_207;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_urem_8ns_11ns_3_12_seq_1_div fn1_urem_8ns_11ns_3_12_seq_1_div_U
       (.D(D),
        .Q(Q),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p(p),
        .\r_stage_reg[8] (\r_stage_reg[8] ),
        .\remd_reg[0]_0 (\remd_reg[0] ),
        .\remd_reg[1]_0 (\remd_reg[1] ),
        .\remd_reg[2]_0 (\remd_reg[2] ),
        .urem_ln20_reg_207(urem_ln20_reg_207));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_urem_8ns_11ns_3_12_seq_1_div
   (\remd_reg[2]_0 ,
    \remd_reg[1]_0 ,
    \remd_reg[0]_0 ,
    ap_clk,
    ap_rst,
    \r_stage_reg[8] ,
    Q,
    urem_ln20_reg_207,
    ap_start,
    p,
    D);
  output \remd_reg[2]_0 ;
  output \remd_reg[1]_0 ;
  output \remd_reg[0]_0 ;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[8] ;
  input [1:0]Q;
  input [2:0]urem_ln20_reg_207;
  input ap_start;
  input [1:0]p;
  input [5:0]D;

  wire [5:0]D;
  wire [1:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[9] ;
  wire done0;
  wire grp_fu_68_ap_start;
  wire [10:6]grp_fu_68_p1;
  wire [1:0]p;
  wire \r_stage_reg[8] ;
  wire [2:0]remd;
  wire \remd[0]_i_1_n_0 ;
  wire \remd[1]_i_1_n_0 ;
  wire \remd[2]_i_1_n_0 ;
  wire \remd_reg[0]_0 ;
  wire \remd_reg[1]_0 ;
  wire \remd_reg[2]_0 ;
  wire [2:0]remd_tmp;
  wire start0;
  wire [2:0]urem_ln20_reg_207;

  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \divisor0[10]_i_1 
       (.I0(p[0]),
        .I1(p[1]),
        .O(grp_fu_68_p1[10]));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[6]_i_1 
       (.I0(p[0]),
        .O(grp_fu_68_p1[6]));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \divisor0[7]_i_1 
       (.I0(p[1]),
        .I1(p[0]),
        .O(grp_fu_68_p1[7]));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \divisor0[9]_i_1 
       (.I0(p[1]),
        .I1(p[0]),
        .O(grp_fu_68_p1[9]));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_68_p1[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_68_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_68_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_68_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_urem_8ns_11ns_3_12_seq_1_div_u fn1_urem_8ns_11ns_3_12_seq_1_div_u_0
       (.D({\divisor0_reg_n_0_[10] ,\divisor0_reg_n_0_[9] ,\divisor0_reg_n_0_[7] ,\divisor0_reg_n_0_[6] ,D}),
        .E(start0),
        .Q(remd_tmp),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .done0(done0),
        .\r_stage_reg[8]_0 (\r_stage_reg[8] ));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \remd[0]_i_1 
       (.I0(remd_tmp[0]),
        .I1(done0),
        .I2(remd[0]),
        .O(\remd[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \remd[1]_i_1 
       (.I0(remd_tmp[1]),
        .I1(done0),
        .I2(remd[1]),
        .O(\remd[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \remd[2]_i_1 
       (.I0(remd_tmp[2]),
        .I1(done0),
        .I2(remd[2]),
        .O(\remd[2]_i_1_n_0 ));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd[0]_i_1_n_0 ),
        .Q(remd[0]),
        .R(1'b0));
  FDRE \remd_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd[1]_i_1_n_0 ),
        .Q(remd[1]),
        .R(1'b0));
  FDRE \remd_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd[2]_i_1_n_0 ),
        .Q(remd[2]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    start0_i_1
       (.I0(ap_start),
        .I1(Q[0]),
        .O(grp_fu_68_ap_start));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_68_ap_start),
        .Q(start0),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \urem_ln20_reg_207[0]_i_1 
       (.I0(remd[0]),
        .I1(Q[1]),
        .I2(urem_ln20_reg_207[0]),
        .O(\remd_reg[0]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \urem_ln20_reg_207[1]_i_1 
       (.I0(remd[1]),
        .I1(Q[1]),
        .I2(urem_ln20_reg_207[1]),
        .O(\remd_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \urem_ln20_reg_207[2]_i_1 
       (.I0(remd[2]),
        .I1(Q[1]),
        .I2(urem_ln20_reg_207[2]),
        .O(\remd_reg[2]_0 ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_urem_8ns_11ns_3_12_seq_1_div_u
   (done0,
    Q,
    ap_rst,
    E,
    ap_clk,
    \r_stage_reg[8]_0 ,
    D);
  output done0;
  output [2:0]Q;
  input ap_rst;
  input [0:0]E;
  input ap_clk;
  input \r_stage_reg[8]_0 ;
  input [9:0]D;

  wire [9:0]D;
  wire [0:0]E;
  wire [2:0]Q;
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
  wire cal_tmp_carry__0_n_5;
  wire cal_tmp_carry__0_n_6;
  wire cal_tmp_carry__0_n_7;
  wire cal_tmp_carry__1_i_3_n_0;
  wire cal_tmp_carry__1_n_2;
  wire cal_tmp_carry__1_n_3;
  wire cal_tmp_carry_i_4_n_0;
  wire cal_tmp_carry_i_5__0_n_0;
  wire cal_tmp_carry_i_6_n_0;
  wire cal_tmp_carry_i_7_n_0;
  wire cal_tmp_carry_n_0;
  wire cal_tmp_carry_n_1;
  wire cal_tmp_carry_n_2;
  wire cal_tmp_carry_n_3;
  wire cal_tmp_carry_n_4;
  wire cal_tmp_carry_n_5;
  wire cal_tmp_carry_n_6;
  wire cal_tmp_carry_n_7;
  wire [7:0]dividend_tmp;
  wire \dividend_tmp[5]_i_1_n_0 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[9] ;
  wire done0;
  wire [10:9]p_0_in;
  wire p_0_in_0;
  wire p_1_in0;
  wire [0:0]p_2_out;
  wire \r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4_n_0 ;
  wire \r_stage_reg[7]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_5_n_0 ;
  wire \r_stage_reg[8]_0 ;
  wire r_stage_reg_gate_n_0;
  wire \r_stage_reg_n_0_[0] ;
  wire [6:3]remd_tmp;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp[1]_i_1_n_0 ;
  wire \remd_tmp[2]_i_1_n_0 ;
  wire \remd_tmp[3]_i_1_n_0 ;
  wire \remd_tmp[4]_i_1_n_0 ;
  wire \remd_tmp[5]_i_1_n_0 ;
  wire \remd_tmp[6]_i_1_n_0 ;
  wire [6:0]remd_tmp_mux;
  wire [3:3]NLW_cal_tmp_carry__0_O_UNCONNECTED;
  wire [3:3]NLW_cal_tmp_carry__1_CO_UNCONNECTED;
  wire [2:0]NLW_cal_tmp_carry__1_O_UNCONNECTED;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({remd_tmp_mux[2:0],p_1_in0}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_4_n_0,cal_tmp_carry_i_5__0_n_0,cal_tmp_carry_i_6_n_0,cal_tmp_carry_i_7_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI(remd_tmp_mux[6:3]),
        .O({NLW_cal_tmp_carry__0_O_UNCONNECTED[3],cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_5_n_0,cal_tmp_carry__0_i_6_n_0,cal_tmp_carry__0_i_7_n_0,cal_tmp_carry__0_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1
       (.I0(remd_tmp[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[6]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(remd_tmp[5]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[5]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(remd_tmp[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[4]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4
       (.I0(remd_tmp[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[3]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[6]),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[5]),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[4]),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_8
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[3]),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_8_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({NLW_cal_tmp_carry__1_CO_UNCONNECTED[3],p_2_out,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({p_0_in_0,NLW_cal_tmp_carry__1_O_UNCONNECTED[2:0]}),
        .S({1'b1,p_0_in,cal_tmp_carry__1_i_3_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_1
       (.I0(\divisor0_reg_n_0_[10] ),
        .O(p_0_in[10]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_2
       (.I0(\divisor0_reg_n_0_[9] ),
        .O(p_0_in[9]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_3
       (.I0(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1
       (.I0(Q[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[2]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(Q[1]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[1]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3
       (.I0(Q[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[0]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_4
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[2]),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5__0
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[1]),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[0]),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_6_n_0));
  LUT3 #(
    .INIT(8'h2D)) 
    cal_tmp_carry_i_7
       (.I0(dividend_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_7_n_0));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[5]_i_1 
       (.I0(dividend_tmp[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    dividend_tmp_mux
       (.I0(dividend_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(p_1_in0));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_2_out),
        .Q(dividend_tmp[0]),
        .R(1'b0));
  FDSE \dividend_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[0]),
        .Q(dividend_tmp[1]),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[1]),
        .Q(dividend_tmp[2]),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[2]),
        .Q(dividend_tmp[3]),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[3]),
        .Q(dividend_tmp[4]),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \dividend_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[5]_i_1_n_0 ),
        .Q(dividend_tmp[5]),
        .R(1'b0));
  FDSE \dividend_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[5]),
        .Q(dividend_tmp[6]),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(dividend_tmp[6]),
        .Q(dividend_tmp[7]),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(D[0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(D[9]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(D[1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(D[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(D[3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(D[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(D[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(D[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(D[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(D[8]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  (* srl_bus_name = "inst/\urem_8ns_11ns_3_12_seq_1_U1/fn1_urem_8ns_11ns_3_12_seq_1_div_U/fn1_urem_8ns_11ns_3_12_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\urem_8ns_11ns_3_12_seq_1_U1/fn1_urem_8ns_11ns_3_12_seq_1_div_U/fn1_urem_8ns_11ns_3_12_seq_1_div_u_0/r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4 " *) 
  SRL16E \r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4 
       (.A0(1'b1),
        .A1(1'b0),
        .A2(1'b1),
        .A3(1'b0),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4_n_0 ));
  FDRE \r_stage_reg[7]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_5 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4_n_0 ),
        .Q(\r_stage_reg[7]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_5_n_0 ),
        .R(1'b0));
  FDRE \r_stage_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_gate_n_0),
        .Q(done0),
        .R(ap_rst));
  LUT2 #(
    .INIT(4'h8)) 
    r_stage_reg_gate
       (.I0(\r_stage_reg[7]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_5_n_0 ),
        .I1(\r_stage_reg[8]_0 ),
        .O(r_stage_reg_gate_n_0));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[0]_i_1 
       (.I0(dividend_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1 
       (.I0(Q[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1 
       (.I0(Q[1]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1 
       (.I0(Q[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1 
       (.I0(remd_tmp[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(remd_tmp[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1 
       (.I0(remd_tmp[5]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1_n_0 ),
        .Q(Q[0]),
        .R(1'b0));
  FDRE \remd_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[1]_i_1_n_0 ),
        .Q(Q[1]),
        .R(1'b0));
  FDRE \remd_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[2]_i_1_n_0 ),
        .Q(Q[2]),
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
