// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Thu Apr 29 13:59:14 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/nanwu/GNN_DFG/bb/dfg_94/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.v
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
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    ap_return,
    p,
    p_7,
    p_9,
    p_11);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [7:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p, LAYERED_METADATA undef" *) input [63:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_7 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_7, LAYERED_METADATA undef" *) input [15:0]p_7;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_9 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_9, LAYERED_METADATA undef" *) input [15:0]p_9;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_11 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_11, LAYERED_METADATA undef" *) input [31:0]p_11;

  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire [7:0]ap_return;
  wire ap_rst;
  wire ap_start;
  wire [15:0]p_7;
  wire [15:0]p_9;

  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "25'b0000000000000000000000001" *) 
  (* ap_ST_fsm_state10 = "25'b0000000000000001000000000" *) 
  (* ap_ST_fsm_state11 = "25'b0000000000000010000000000" *) 
  (* ap_ST_fsm_state12 = "25'b0000000000000100000000000" *) 
  (* ap_ST_fsm_state13 = "25'b0000000000001000000000000" *) 
  (* ap_ST_fsm_state14 = "25'b0000000000010000000000000" *) 
  (* ap_ST_fsm_state15 = "25'b0000000000100000000000000" *) 
  (* ap_ST_fsm_state16 = "25'b0000000001000000000000000" *) 
  (* ap_ST_fsm_state17 = "25'b0000000010000000000000000" *) 
  (* ap_ST_fsm_state18 = "25'b0000000100000000000000000" *) 
  (* ap_ST_fsm_state19 = "25'b0000001000000000000000000" *) 
  (* ap_ST_fsm_state2 = "25'b0000000000000000000000010" *) 
  (* ap_ST_fsm_state20 = "25'b0000010000000000000000000" *) 
  (* ap_ST_fsm_state21 = "25'b0000100000000000000000000" *) 
  (* ap_ST_fsm_state22 = "25'b0001000000000000000000000" *) 
  (* ap_ST_fsm_state23 = "25'b0010000000000000000000000" *) 
  (* ap_ST_fsm_state24 = "25'b0100000000000000000000000" *) 
  (* ap_ST_fsm_state25 = "25'b1000000000000000000000000" *) 
  (* ap_ST_fsm_state3 = "25'b0000000000000000000000100" *) 
  (* ap_ST_fsm_state4 = "25'b0000000000000000000001000" *) 
  (* ap_ST_fsm_state5 = "25'b0000000000000000000010000" *) 
  (* ap_ST_fsm_state6 = "25'b0000000000000000000100000" *) 
  (* ap_ST_fsm_state7 = "25'b0000000000000000001000000" *) 
  (* ap_ST_fsm_state8 = "25'b0000000000000000010000000" *) 
  (* ap_ST_fsm_state9 = "25'b0000000000000000100000000" *) 
  bd_0_hls_inst_0_fn1 inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_11({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_7(p_7),
        .p_9(p_9));
endmodule

(* ORIG_REF_NAME = "fn1" *) (* ap_ST_fsm_state1 = "25'b0000000000000000000000001" *) (* ap_ST_fsm_state10 = "25'b0000000000000001000000000" *) 
(* ap_ST_fsm_state11 = "25'b0000000000000010000000000" *) (* ap_ST_fsm_state12 = "25'b0000000000000100000000000" *) (* ap_ST_fsm_state13 = "25'b0000000000001000000000000" *) 
(* ap_ST_fsm_state14 = "25'b0000000000010000000000000" *) (* ap_ST_fsm_state15 = "25'b0000000000100000000000000" *) (* ap_ST_fsm_state16 = "25'b0000000001000000000000000" *) 
(* ap_ST_fsm_state17 = "25'b0000000010000000000000000" *) (* ap_ST_fsm_state18 = "25'b0000000100000000000000000" *) (* ap_ST_fsm_state19 = "25'b0000001000000000000000000" *) 
(* ap_ST_fsm_state2 = "25'b0000000000000000000000010" *) (* ap_ST_fsm_state20 = "25'b0000010000000000000000000" *) (* ap_ST_fsm_state21 = "25'b0000100000000000000000000" *) 
(* ap_ST_fsm_state22 = "25'b0001000000000000000000000" *) (* ap_ST_fsm_state23 = "25'b0010000000000000000000000" *) (* ap_ST_fsm_state24 = "25'b0100000000000000000000000" *) 
(* ap_ST_fsm_state25 = "25'b1000000000000000000000000" *) (* ap_ST_fsm_state3 = "25'b0000000000000000000000100" *) (* ap_ST_fsm_state4 = "25'b0000000000000000000001000" *) 
(* ap_ST_fsm_state5 = "25'b0000000000000000000010000" *) (* ap_ST_fsm_state6 = "25'b0000000000000000000100000" *) (* ap_ST_fsm_state7 = "25'b0000000000000000001000000" *) 
(* ap_ST_fsm_state8 = "25'b0000000000000000010000000" *) (* ap_ST_fsm_state9 = "25'b0000000000000000100000000" *) (* hls_module = "yes" *) 
module bd_0_hls_inst_0_fn1
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p,
    p_7,
    p_9,
    p_11,
    ap_return);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [63:0]p;
  input [15:0]p_7;
  input [15:0]p_9;
  input [31:0]p_11;
  output [7:0]ap_return;

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
  wire \ap_CS_fsm_reg_n_0_[18] ;
  wire \ap_CS_fsm_reg_n_0_[1] ;
  wire \ap_CS_fsm_reg_n_0_[20] ;
  wire \ap_CS_fsm_reg_n_0_[21] ;
  wire \ap_CS_fsm_reg_n_0_[22] ;
  wire \ap_CS_fsm_reg_n_0_[23] ;
  wire \ap_CS_fsm_reg_n_0_[2] ;
  wire \ap_CS_fsm_reg_n_0_[3] ;
  wire \ap_CS_fsm_reg_n_0_[4] ;
  wire \ap_CS_fsm_reg_n_0_[6] ;
  wire \ap_CS_fsm_reg_n_0_[9] ;
  wire ap_CS_fsm_state1;
  wire ap_CS_fsm_state20;
  wire ap_CS_fsm_state6;
  wire ap_CS_fsm_state8;
  wire [1:0]ap_NS_fsm;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire [7:0]ap_return;
  wire ap_rst;
  wire ap_start;
  wire [81:74]\fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U/buff1_reg__5 ;
  wire [39:0]\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 ;
  wire [39:0]mul_ln21_reg_184;
  wire [15:0]p_7;
  wire [15:0]p_9;
  wire [0:0]remd;
  wire srem_8s_40ns_7_12_seq_1_U3_n_0;
  wire srem_8s_40ns_7_12_seq_1_U3_n_1;
  wire srem_8s_40ns_7_12_seq_1_U3_n_10;
  wire srem_8s_40ns_7_12_seq_1_U3_n_11;
  wire srem_8s_40ns_7_12_seq_1_U3_n_12;
  wire srem_8s_40ns_7_12_seq_1_U3_n_13;
  wire srem_8s_40ns_7_12_seq_1_U3_n_14;
  wire srem_8s_40ns_7_12_seq_1_U3_n_15;
  wire srem_8s_40ns_7_12_seq_1_U3_n_16;
  wire srem_8s_40ns_7_12_seq_1_U3_n_17;
  wire srem_8s_40ns_7_12_seq_1_U3_n_18;
  wire srem_8s_40ns_7_12_seq_1_U3_n_19;
  wire srem_8s_40ns_7_12_seq_1_U3_n_2;
  wire srem_8s_40ns_7_12_seq_1_U3_n_20;
  wire srem_8s_40ns_7_12_seq_1_U3_n_21;
  wire srem_8s_40ns_7_12_seq_1_U3_n_22;
  wire srem_8s_40ns_7_12_seq_1_U3_n_23;
  wire srem_8s_40ns_7_12_seq_1_U3_n_24;
  wire srem_8s_40ns_7_12_seq_1_U3_n_25;
  wire srem_8s_40ns_7_12_seq_1_U3_n_26;
  wire srem_8s_40ns_7_12_seq_1_U3_n_3;
  wire srem_8s_40ns_7_12_seq_1_U3_n_4;
  wire srem_8s_40ns_7_12_seq_1_U3_n_5;
  wire srem_8s_40ns_7_12_seq_1_U3_n_6;
  wire srem_8s_40ns_7_12_seq_1_U3_n_8;
  wire srem_8s_40ns_7_12_seq_1_U3_n_9;
  wire start;

  assign ap_ready = ap_done;
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hF4)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(ap_start),
        .I1(ap_CS_fsm_state1),
        .I2(ap_done),
        .O(ap_NS_fsm[0]));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(\ap_CS_fsm[1]_i_2_n_0 ),
        .I1(\ap_CS_fsm[1]_i_3_n_0 ),
        .I2(\ap_CS_fsm[1]_i_4_n_0 ),
        .I3(\ap_CS_fsm[1]_i_5_n_0 ),
        .I4(ap_start),
        .I5(ap_CS_fsm_state1),
        .O(ap_NS_fsm[1]));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(\ap_CS_fsm_reg_n_0_[3] ),
        .I1(\ap_CS_fsm_reg_n_0_[4] ),
        .I2(\ap_CS_fsm_reg_n_0_[1] ),
        .I3(\ap_CS_fsm_reg_n_0_[2] ),
        .I4(\ap_CS_fsm_reg_n_0_[6] ),
        .I5(ap_CS_fsm_state6),
        .O(\ap_CS_fsm[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_3 
       (.I0(\ap_CS_fsm_reg_n_0_[21] ),
        .I1(\ap_CS_fsm_reg_n_0_[22] ),
        .I2(ap_CS_fsm_state20),
        .I3(\ap_CS_fsm_reg_n_0_[20] ),
        .I4(ap_done),
        .I5(\ap_CS_fsm_reg_n_0_[23] ),
        .O(\ap_CS_fsm[1]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_4 
       (.I0(\ap_CS_fsm_reg_n_0_[15] ),
        .I1(\ap_CS_fsm_reg_n_0_[16] ),
        .I2(\ap_CS_fsm_reg_n_0_[13] ),
        .I3(\ap_CS_fsm_reg_n_0_[14] ),
        .I4(\ap_CS_fsm_reg_n_0_[18] ),
        .I5(\ap_CS_fsm_reg_n_0_[17] ),
        .O(\ap_CS_fsm[1]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_5 
       (.I0(\ap_CS_fsm_reg_n_0_[9] ),
        .I1(\ap_CS_fsm_reg_n_0_[10] ),
        .I2(ap_CS_fsm_state8),
        .I3(start),
        .I4(\ap_CS_fsm_reg_n_0_[12] ),
        .I5(\ap_CS_fsm_reg_n_0_[11] ),
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
        .Q(\ap_CS_fsm_reg_n_0_[18] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[18] ),
        .Q(ap_CS_fsm_state20),
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
        .D(ap_CS_fsm_state20),
        .Q(\ap_CS_fsm_reg_n_0_[20] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[20] ),
        .Q(\ap_CS_fsm_reg_n_0_[21] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[21] ),
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
        .Q(ap_CS_fsm_state6),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state6),
        .Q(\ap_CS_fsm_reg_n_0_[6] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[6] ),
        .Q(ap_CS_fsm_state8),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state8),
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
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(ap_CS_fsm_state1),
        .I1(ap_start),
        .O(ap_idle));
  bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1 mul_64ns_66ns_82_5_1_U1
       (.Q(ap_CS_fsm_state1),
        .ap_clk(ap_clk),
        .buff0_reg(\fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U/buff1_reg__5 ),
        .p_7(p_7),
        .p_9(p_9));
  bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_0 mul_64ns_66ns_82_5_1_U4
       (.A({srem_8s_40ns_7_12_seq_1_U3_n_22,srem_8s_40ns_7_12_seq_1_U3_n_23,srem_8s_40ns_7_12_seq_1_U3_n_24}),
        .B({srem_8s_40ns_7_12_seq_1_U3_n_20,srem_8s_40ns_7_12_seq_1_U3_n_21}),
        .Q(ap_CS_fsm_state20),
        .ap_clk(ap_clk),
        .ap_return(ap_return),
        .buff0_reg__1({srem_8s_40ns_7_12_seq_1_U3_n_0,srem_8s_40ns_7_12_seq_1_U3_n_1,srem_8s_40ns_7_12_seq_1_U3_n_2,srem_8s_40ns_7_12_seq_1_U3_n_3,srem_8s_40ns_7_12_seq_1_U3_n_4,srem_8s_40ns_7_12_seq_1_U3_n_5,srem_8s_40ns_7_12_seq_1_U3_n_6,remd}),
        .buff0_reg__2(srem_8s_40ns_7_12_seq_1_U3_n_17),
        .buff0_reg__3(srem_8s_40ns_7_12_seq_1_U3_n_19),
        .buff1_reg({srem_8s_40ns_7_12_seq_1_U3_n_25,srem_8s_40ns_7_12_seq_1_U3_n_26}),
        .buff1_reg__0(srem_8s_40ns_7_12_seq_1_U3_n_8),
        .buff1_reg__2({srem_8s_40ns_7_12_seq_1_U3_n_9,srem_8s_40ns_7_12_seq_1_U3_n_10,srem_8s_40ns_7_12_seq_1_U3_n_11}),
        .buff1_reg__2_0(srem_8s_40ns_7_12_seq_1_U3_n_12),
        .tmp_product__0({srem_8s_40ns_7_12_seq_1_U3_n_13,srem_8s_40ns_7_12_seq_1_U3_n_14}),
        .tmp_product__1({srem_8s_40ns_7_12_seq_1_U3_n_15,srem_8s_40ns_7_12_seq_1_U3_n_16}),
        .tmp_product__2(srem_8s_40ns_7_12_seq_1_U3_n_18));
  bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1 mul_8s_33ns_40_2_1_U2
       (.D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 ),
        .Q(ap_CS_fsm_state6),
        .ap_clk(ap_clk),
        .p_reg(\fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U/buff1_reg__5 ));
  FDRE \mul_ln21_reg_184_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [0]),
        .Q(mul_ln21_reg_184[0]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [10]),
        .Q(mul_ln21_reg_184[10]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [11]),
        .Q(mul_ln21_reg_184[11]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [12]),
        .Q(mul_ln21_reg_184[12]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [13]),
        .Q(mul_ln21_reg_184[13]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [14]),
        .Q(mul_ln21_reg_184[14]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [15]),
        .Q(mul_ln21_reg_184[15]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[16] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [16]),
        .Q(mul_ln21_reg_184[16]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[17] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [17]),
        .Q(mul_ln21_reg_184[17]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[18] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [18]),
        .Q(mul_ln21_reg_184[18]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[19] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [19]),
        .Q(mul_ln21_reg_184[19]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [1]),
        .Q(mul_ln21_reg_184[1]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[20] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [20]),
        .Q(mul_ln21_reg_184[20]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[21] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [21]),
        .Q(mul_ln21_reg_184[21]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[22] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [22]),
        .Q(mul_ln21_reg_184[22]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[23] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [23]),
        .Q(mul_ln21_reg_184[23]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[24] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [24]),
        .Q(mul_ln21_reg_184[24]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[25] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [25]),
        .Q(mul_ln21_reg_184[25]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[26] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [26]),
        .Q(mul_ln21_reg_184[26]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[27] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [27]),
        .Q(mul_ln21_reg_184[27]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[28] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [28]),
        .Q(mul_ln21_reg_184[28]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[29] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [29]),
        .Q(mul_ln21_reg_184[29]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [2]),
        .Q(mul_ln21_reg_184[2]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[30] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [30]),
        .Q(mul_ln21_reg_184[30]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[31] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [31]),
        .Q(mul_ln21_reg_184[31]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[32] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [32]),
        .Q(mul_ln21_reg_184[32]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[33] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [33]),
        .Q(mul_ln21_reg_184[33]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[34] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [34]),
        .Q(mul_ln21_reg_184[34]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[35] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [35]),
        .Q(mul_ln21_reg_184[35]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[36] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [36]),
        .Q(mul_ln21_reg_184[36]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[37] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [37]),
        .Q(mul_ln21_reg_184[37]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[38] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [38]),
        .Q(mul_ln21_reg_184[38]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[39] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [39]),
        .Q(mul_ln21_reg_184[39]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [3]),
        .Q(mul_ln21_reg_184[3]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [4]),
        .Q(mul_ln21_reg_184[4]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [5]),
        .Q(mul_ln21_reg_184[5]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [6]),
        .Q(mul_ln21_reg_184[6]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [7]),
        .Q(mul_ln21_reg_184[7]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [8]),
        .Q(mul_ln21_reg_184[8]),
        .R(1'b0));
  FDRE \mul_ln21_reg_184_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state8),
        .D(\fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0 [9]),
        .Q(mul_ln21_reg_184[9]),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1 srem_8s_40ns_7_12_seq_1_U3
       (.A({srem_8s_40ns_7_12_seq_1_U3_n_22,srem_8s_40ns_7_12_seq_1_U3_n_23,srem_8s_40ns_7_12_seq_1_U3_n_24}),
        .B({srem_8s_40ns_7_12_seq_1_U3_n_20,srem_8s_40ns_7_12_seq_1_U3_n_21}),
        .Q(start),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\divisor0_reg[39] (mul_ln21_reg_184),
        .\remd_reg[6] ({srem_8s_40ns_7_12_seq_1_U3_n_0,srem_8s_40ns_7_12_seq_1_U3_n_1,srem_8s_40ns_7_12_seq_1_U3_n_2,srem_8s_40ns_7_12_seq_1_U3_n_3,srem_8s_40ns_7_12_seq_1_U3_n_4,srem_8s_40ns_7_12_seq_1_U3_n_5,srem_8s_40ns_7_12_seq_1_U3_n_6,remd}),
        .\remd_reg[6]_0 (srem_8s_40ns_7_12_seq_1_U3_n_8),
        .\remd_reg[6]_1 ({srem_8s_40ns_7_12_seq_1_U3_n_9,srem_8s_40ns_7_12_seq_1_U3_n_10,srem_8s_40ns_7_12_seq_1_U3_n_11}),
        .\remd_reg[6]_2 (srem_8s_40ns_7_12_seq_1_U3_n_12),
        .\remd_reg[6]_3 ({srem_8s_40ns_7_12_seq_1_U3_n_13,srem_8s_40ns_7_12_seq_1_U3_n_14}),
        .\remd_reg[6]_4 ({srem_8s_40ns_7_12_seq_1_U3_n_15,srem_8s_40ns_7_12_seq_1_U3_n_16}),
        .\remd_reg[6]_5 (srem_8s_40ns_7_12_seq_1_U3_n_17),
        .\remd_reg[6]_6 (srem_8s_40ns_7_12_seq_1_U3_n_18),
        .\remd_reg[6]_7 (srem_8s_40ns_7_12_seq_1_U3_n_19),
        .\remd_reg[6]_8 ({srem_8s_40ns_7_12_seq_1_U3_n_25,srem_8s_40ns_7_12_seq_1_U3_n_26}));
endmodule

(* ORIG_REF_NAME = "fn1_mul_64ns_66ns_82_5_1" *) 
module bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1
   (buff0_reg,
    Q,
    ap_clk,
    p_9,
    p_7);
  output [7:0]buff0_reg;
  input [0:0]Q;
  input ap_clk;
  input [15:0]p_9;
  input [15:0]p_7;

  wire [0:0]Q;
  wire ap_clk;
  wire [7:0]buff0_reg;
  wire [15:0]p_7;
  wire [15:0]p_9;

  bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0_1 fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U
       (.Q(Q),
        .ap_clk(ap_clk),
        .buff0_reg_0(buff0_reg),
        .p_7(p_7),
        .p_9(p_9));
endmodule

(* ORIG_REF_NAME = "fn1_mul_64ns_66ns_82_5_1" *) 
module bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_0
   (ap_return,
    Q,
    ap_clk,
    B,
    A,
    buff1_reg,
    tmp_product__1,
    buff0_reg__1,
    tmp_product__0,
    buff1_reg__2,
    buff1_reg__0,
    buff0_reg__2,
    buff0_reg__3,
    tmp_product__2,
    buff1_reg__2_0);
  output [7:0]ap_return;
  input [0:0]Q;
  input ap_clk;
  input [1:0]B;
  input [2:0]A;
  input [1:0]buff1_reg;
  input [1:0]tmp_product__1;
  input [7:0]buff0_reg__1;
  input [1:0]tmp_product__0;
  input [2:0]buff1_reg__2;
  input [0:0]buff1_reg__0;
  input [0:0]buff0_reg__2;
  input [0:0]buff0_reg__3;
  input [0:0]tmp_product__2;
  input [0:0]buff1_reg__2_0;

  wire [2:0]A;
  wire [1:0]B;
  wire [0:0]Q;
  wire ap_clk;
  wire [7:0]ap_return;
  wire [7:0]buff0_reg__1;
  wire [0:0]buff0_reg__2;
  wire [0:0]buff0_reg__3;
  wire [1:0]buff1_reg;
  wire [0:0]buff1_reg__0;
  wire [2:0]buff1_reg__2;
  wire [0:0]buff1_reg__2_0;
  wire [1:0]tmp_product__0;
  wire [1:0]tmp_product__1;
  wire [0:0]tmp_product__2;

  bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0 fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U
       (.A(A),
        .B(B),
        .Q(Q),
        .ap_clk(ap_clk),
        .ap_return(ap_return),
        .buff0_reg__2_0(buff0_reg__2),
        .buff0_reg__3_0(buff0_reg__3),
        .buff1_reg_0(buff1_reg),
        .buff1_reg__0_0(buff1_reg__0),
        .buff1_reg__2_0(buff1_reg__2),
        .buff1_reg__2_1(buff1_reg__2_0),
        .tmp_product__0_0(tmp_product__0),
        .tmp_product__1_0({tmp_product__1[0],buff0_reg__1}),
        .tmp_product__1_1(tmp_product__1[1]),
        .tmp_product__2_0(tmp_product__2));
endmodule

(* ORIG_REF_NAME = "fn1_mul_64ns_66ns_82_5_1_Multiplier_0" *) 
module bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0
   (ap_return,
    Q,
    ap_clk,
    B,
    A,
    buff1_reg_0,
    tmp_product__1_0,
    tmp_product__0_0,
    buff1_reg__2_0,
    buff1_reg__0_0,
    buff0_reg__2_0,
    tmp_product__1_1,
    buff0_reg__3_0,
    tmp_product__2_0,
    buff1_reg__2_1);
  output [7:0]ap_return;
  input [0:0]Q;
  input ap_clk;
  input [1:0]B;
  input [2:0]A;
  input [1:0]buff1_reg_0;
  input [8:0]tmp_product__1_0;
  input [1:0]tmp_product__0_0;
  input [2:0]buff1_reg__2_0;
  input [0:0]buff1_reg__0_0;
  input [0:0]buff0_reg__2_0;
  input [0:0]tmp_product__1_1;
  input [0:0]buff0_reg__3_0;
  input [0:0]tmp_product__2_0;
  input [0:0]buff1_reg__2_1;

  wire [2:0]A;
  wire [1:0]B;
  wire [0:0]Q;
  wire ap_clk;
  wire [7:0]ap_return;
  wire buff0_reg__0_n_100;
  wire buff0_reg__0_n_101;
  wire buff0_reg__0_n_102;
  wire buff0_reg__0_n_103;
  wire buff0_reg__0_n_104;
  wire buff0_reg__0_n_105;
  wire buff0_reg__0_n_106;
  wire buff0_reg__0_n_107;
  wire buff0_reg__0_n_108;
  wire buff0_reg__0_n_109;
  wire buff0_reg__0_n_110;
  wire buff0_reg__0_n_111;
  wire buff0_reg__0_n_112;
  wire buff0_reg__0_n_113;
  wire buff0_reg__0_n_114;
  wire buff0_reg__0_n_115;
  wire buff0_reg__0_n_116;
  wire buff0_reg__0_n_117;
  wire buff0_reg__0_n_118;
  wire buff0_reg__0_n_119;
  wire buff0_reg__0_n_120;
  wire buff0_reg__0_n_121;
  wire buff0_reg__0_n_122;
  wire buff0_reg__0_n_123;
  wire buff0_reg__0_n_124;
  wire buff0_reg__0_n_125;
  wire buff0_reg__0_n_126;
  wire buff0_reg__0_n_127;
  wire buff0_reg__0_n_128;
  wire buff0_reg__0_n_129;
  wire buff0_reg__0_n_130;
  wire buff0_reg__0_n_131;
  wire buff0_reg__0_n_132;
  wire buff0_reg__0_n_133;
  wire buff0_reg__0_n_134;
  wire buff0_reg__0_n_135;
  wire buff0_reg__0_n_136;
  wire buff0_reg__0_n_137;
  wire buff0_reg__0_n_138;
  wire buff0_reg__0_n_139;
  wire buff0_reg__0_n_140;
  wire buff0_reg__0_n_141;
  wire buff0_reg__0_n_142;
  wire buff0_reg__0_n_143;
  wire buff0_reg__0_n_144;
  wire buff0_reg__0_n_145;
  wire buff0_reg__0_n_146;
  wire buff0_reg__0_n_147;
  wire buff0_reg__0_n_148;
  wire buff0_reg__0_n_149;
  wire buff0_reg__0_n_150;
  wire buff0_reg__0_n_151;
  wire buff0_reg__0_n_152;
  wire buff0_reg__0_n_153;
  wire buff0_reg__0_n_58;
  wire buff0_reg__0_n_59;
  wire buff0_reg__0_n_60;
  wire buff0_reg__0_n_61;
  wire buff0_reg__0_n_62;
  wire buff0_reg__0_n_63;
  wire buff0_reg__0_n_64;
  wire buff0_reg__0_n_65;
  wire buff0_reg__0_n_66;
  wire buff0_reg__0_n_67;
  wire buff0_reg__0_n_68;
  wire buff0_reg__0_n_69;
  wire buff0_reg__0_n_70;
  wire buff0_reg__0_n_71;
  wire buff0_reg__0_n_72;
  wire buff0_reg__0_n_73;
  wire buff0_reg__0_n_74;
  wire buff0_reg__0_n_75;
  wire buff0_reg__0_n_76;
  wire buff0_reg__0_n_77;
  wire buff0_reg__0_n_78;
  wire buff0_reg__0_n_79;
  wire buff0_reg__0_n_80;
  wire buff0_reg__0_n_81;
  wire buff0_reg__0_n_82;
  wire buff0_reg__0_n_83;
  wire buff0_reg__0_n_84;
  wire buff0_reg__0_n_85;
  wire buff0_reg__0_n_86;
  wire buff0_reg__0_n_87;
  wire buff0_reg__0_n_88;
  wire buff0_reg__0_n_89;
  wire buff0_reg__0_n_90;
  wire buff0_reg__0_n_91;
  wire buff0_reg__0_n_92;
  wire buff0_reg__0_n_93;
  wire buff0_reg__0_n_94;
  wire buff0_reg__0_n_95;
  wire buff0_reg__0_n_96;
  wire buff0_reg__0_n_97;
  wire buff0_reg__0_n_98;
  wire buff0_reg__0_n_99;
  wire buff0_reg__1_n_106;
  wire buff0_reg__1_n_107;
  wire buff0_reg__1_n_108;
  wire buff0_reg__1_n_109;
  wire buff0_reg__1_n_110;
  wire buff0_reg__1_n_111;
  wire buff0_reg__1_n_112;
  wire buff0_reg__1_n_113;
  wire buff0_reg__1_n_114;
  wire buff0_reg__1_n_115;
  wire buff0_reg__1_n_116;
  wire buff0_reg__1_n_117;
  wire buff0_reg__1_n_118;
  wire buff0_reg__1_n_119;
  wire buff0_reg__1_n_120;
  wire buff0_reg__1_n_121;
  wire buff0_reg__1_n_122;
  wire buff0_reg__1_n_123;
  wire buff0_reg__1_n_124;
  wire buff0_reg__1_n_125;
  wire buff0_reg__1_n_126;
  wire buff0_reg__1_n_127;
  wire buff0_reg__1_n_128;
  wire buff0_reg__1_n_129;
  wire buff0_reg__1_n_130;
  wire buff0_reg__1_n_131;
  wire buff0_reg__1_n_132;
  wire buff0_reg__1_n_133;
  wire buff0_reg__1_n_134;
  wire buff0_reg__1_n_135;
  wire buff0_reg__1_n_136;
  wire buff0_reg__1_n_137;
  wire buff0_reg__1_n_138;
  wire buff0_reg__1_n_139;
  wire buff0_reg__1_n_140;
  wire buff0_reg__1_n_141;
  wire buff0_reg__1_n_142;
  wire buff0_reg__1_n_143;
  wire buff0_reg__1_n_144;
  wire buff0_reg__1_n_145;
  wire buff0_reg__1_n_146;
  wire buff0_reg__1_n_147;
  wire buff0_reg__1_n_148;
  wire buff0_reg__1_n_149;
  wire buff0_reg__1_n_150;
  wire buff0_reg__1_n_151;
  wire buff0_reg__1_n_152;
  wire buff0_reg__1_n_153;
  wire [0:0]buff0_reg__2_0;
  wire buff0_reg__2_n_106;
  wire buff0_reg__2_n_107;
  wire buff0_reg__2_n_108;
  wire buff0_reg__2_n_109;
  wire buff0_reg__2_n_110;
  wire buff0_reg__2_n_111;
  wire buff0_reg__2_n_112;
  wire buff0_reg__2_n_113;
  wire buff0_reg__2_n_114;
  wire buff0_reg__2_n_115;
  wire buff0_reg__2_n_116;
  wire buff0_reg__2_n_117;
  wire buff0_reg__2_n_118;
  wire buff0_reg__2_n_119;
  wire buff0_reg__2_n_120;
  wire buff0_reg__2_n_121;
  wire buff0_reg__2_n_122;
  wire buff0_reg__2_n_123;
  wire buff0_reg__2_n_124;
  wire buff0_reg__2_n_125;
  wire buff0_reg__2_n_126;
  wire buff0_reg__2_n_127;
  wire buff0_reg__2_n_128;
  wire buff0_reg__2_n_129;
  wire buff0_reg__2_n_130;
  wire buff0_reg__2_n_131;
  wire buff0_reg__2_n_132;
  wire buff0_reg__2_n_133;
  wire buff0_reg__2_n_134;
  wire buff0_reg__2_n_135;
  wire buff0_reg__2_n_136;
  wire buff0_reg__2_n_137;
  wire buff0_reg__2_n_138;
  wire buff0_reg__2_n_139;
  wire buff0_reg__2_n_140;
  wire buff0_reg__2_n_141;
  wire buff0_reg__2_n_142;
  wire buff0_reg__2_n_143;
  wire buff0_reg__2_n_144;
  wire buff0_reg__2_n_145;
  wire buff0_reg__2_n_146;
  wire buff0_reg__2_n_147;
  wire buff0_reg__2_n_148;
  wire buff0_reg__2_n_149;
  wire buff0_reg__2_n_150;
  wire buff0_reg__2_n_151;
  wire buff0_reg__2_n_152;
  wire buff0_reg__2_n_153;
  wire [0:0]buff0_reg__3_0;
  wire buff0_reg__3_n_100;
  wire buff0_reg__3_n_101;
  wire buff0_reg__3_n_102;
  wire buff0_reg__3_n_103;
  wire buff0_reg__3_n_104;
  wire buff0_reg__3_n_105;
  wire buff0_reg__3_n_106;
  wire buff0_reg__3_n_107;
  wire buff0_reg__3_n_108;
  wire buff0_reg__3_n_109;
  wire buff0_reg__3_n_110;
  wire buff0_reg__3_n_111;
  wire buff0_reg__3_n_112;
  wire buff0_reg__3_n_113;
  wire buff0_reg__3_n_114;
  wire buff0_reg__3_n_115;
  wire buff0_reg__3_n_116;
  wire buff0_reg__3_n_117;
  wire buff0_reg__3_n_118;
  wire buff0_reg__3_n_119;
  wire buff0_reg__3_n_120;
  wire buff0_reg__3_n_121;
  wire buff0_reg__3_n_122;
  wire buff0_reg__3_n_123;
  wire buff0_reg__3_n_124;
  wire buff0_reg__3_n_125;
  wire buff0_reg__3_n_126;
  wire buff0_reg__3_n_127;
  wire buff0_reg__3_n_128;
  wire buff0_reg__3_n_129;
  wire buff0_reg__3_n_130;
  wire buff0_reg__3_n_131;
  wire buff0_reg__3_n_132;
  wire buff0_reg__3_n_133;
  wire buff0_reg__3_n_134;
  wire buff0_reg__3_n_135;
  wire buff0_reg__3_n_136;
  wire buff0_reg__3_n_137;
  wire buff0_reg__3_n_138;
  wire buff0_reg__3_n_139;
  wire buff0_reg__3_n_140;
  wire buff0_reg__3_n_141;
  wire buff0_reg__3_n_142;
  wire buff0_reg__3_n_143;
  wire buff0_reg__3_n_144;
  wire buff0_reg__3_n_145;
  wire buff0_reg__3_n_146;
  wire buff0_reg__3_n_147;
  wire buff0_reg__3_n_148;
  wire buff0_reg__3_n_149;
  wire buff0_reg__3_n_150;
  wire buff0_reg__3_n_151;
  wire buff0_reg__3_n_152;
  wire buff0_reg__3_n_153;
  wire buff0_reg__3_n_58;
  wire buff0_reg__3_n_59;
  wire buff0_reg__3_n_60;
  wire buff0_reg__3_n_61;
  wire buff0_reg__3_n_62;
  wire buff0_reg__3_n_63;
  wire buff0_reg__3_n_64;
  wire buff0_reg__3_n_65;
  wire buff0_reg__3_n_66;
  wire buff0_reg__3_n_67;
  wire buff0_reg__3_n_68;
  wire buff0_reg__3_n_69;
  wire buff0_reg__3_n_70;
  wire buff0_reg__3_n_71;
  wire buff0_reg__3_n_72;
  wire buff0_reg__3_n_73;
  wire buff0_reg__3_n_74;
  wire buff0_reg__3_n_75;
  wire buff0_reg__3_n_76;
  wire buff0_reg__3_n_77;
  wire buff0_reg__3_n_78;
  wire buff0_reg__3_n_79;
  wire buff0_reg__3_n_80;
  wire buff0_reg__3_n_81;
  wire buff0_reg__3_n_82;
  wire buff0_reg__3_n_83;
  wire buff0_reg__3_n_84;
  wire buff0_reg__3_n_85;
  wire buff0_reg__3_n_86;
  wire buff0_reg__3_n_87;
  wire buff0_reg__3_n_88;
  wire buff0_reg__3_n_89;
  wire buff0_reg__3_n_90;
  wire buff0_reg__3_n_91;
  wire buff0_reg__3_n_92;
  wire buff0_reg__3_n_93;
  wire buff0_reg__3_n_94;
  wire buff0_reg__3_n_95;
  wire buff0_reg__3_n_96;
  wire buff0_reg__3_n_97;
  wire buff0_reg__3_n_98;
  wire buff0_reg__3_n_99;
  wire buff0_reg_n_100;
  wire buff0_reg_n_101;
  wire buff0_reg_n_102;
  wire buff0_reg_n_103;
  wire buff0_reg_n_104;
  wire buff0_reg_n_105;
  wire buff0_reg_n_106;
  wire buff0_reg_n_107;
  wire buff0_reg_n_108;
  wire buff0_reg_n_109;
  wire buff0_reg_n_110;
  wire buff0_reg_n_111;
  wire buff0_reg_n_112;
  wire buff0_reg_n_113;
  wire buff0_reg_n_114;
  wire buff0_reg_n_115;
  wire buff0_reg_n_116;
  wire buff0_reg_n_117;
  wire buff0_reg_n_118;
  wire buff0_reg_n_119;
  wire buff0_reg_n_120;
  wire buff0_reg_n_121;
  wire buff0_reg_n_122;
  wire buff0_reg_n_123;
  wire buff0_reg_n_124;
  wire buff0_reg_n_125;
  wire buff0_reg_n_126;
  wire buff0_reg_n_127;
  wire buff0_reg_n_128;
  wire buff0_reg_n_129;
  wire buff0_reg_n_130;
  wire buff0_reg_n_131;
  wire buff0_reg_n_132;
  wire buff0_reg_n_133;
  wire buff0_reg_n_134;
  wire buff0_reg_n_135;
  wire buff0_reg_n_136;
  wire buff0_reg_n_137;
  wire buff0_reg_n_138;
  wire buff0_reg_n_139;
  wire buff0_reg_n_140;
  wire buff0_reg_n_141;
  wire buff0_reg_n_142;
  wire buff0_reg_n_143;
  wire buff0_reg_n_144;
  wire buff0_reg_n_145;
  wire buff0_reg_n_146;
  wire buff0_reg_n_147;
  wire buff0_reg_n_148;
  wire buff0_reg_n_149;
  wire buff0_reg_n_150;
  wire buff0_reg_n_151;
  wire buff0_reg_n_152;
  wire buff0_reg_n_153;
  wire buff0_reg_n_58;
  wire buff0_reg_n_59;
  wire buff0_reg_n_60;
  wire buff0_reg_n_61;
  wire buff0_reg_n_62;
  wire buff0_reg_n_63;
  wire buff0_reg_n_64;
  wire buff0_reg_n_65;
  wire buff0_reg_n_66;
  wire buff0_reg_n_67;
  wire buff0_reg_n_68;
  wire buff0_reg_n_69;
  wire buff0_reg_n_70;
  wire buff0_reg_n_71;
  wire buff0_reg_n_72;
  wire buff0_reg_n_73;
  wire buff0_reg_n_74;
  wire buff0_reg_n_75;
  wire buff0_reg_n_76;
  wire buff0_reg_n_77;
  wire buff0_reg_n_78;
  wire buff0_reg_n_79;
  wire buff0_reg_n_80;
  wire buff0_reg_n_81;
  wire buff0_reg_n_82;
  wire buff0_reg_n_83;
  wire buff0_reg_n_84;
  wire buff0_reg_n_85;
  wire buff0_reg_n_86;
  wire buff0_reg_n_87;
  wire buff0_reg_n_88;
  wire buff0_reg_n_89;
  wire buff0_reg_n_90;
  wire buff0_reg_n_91;
  wire buff0_reg_n_92;
  wire buff0_reg_n_93;
  wire buff0_reg_n_94;
  wire buff0_reg_n_95;
  wire buff0_reg_n_96;
  wire buff0_reg_n_97;
  wire buff0_reg_n_98;
  wire buff0_reg_n_99;
  wire \buff1_reg[0]__0_n_0 ;
  wire \buff1_reg[10]__0_n_0 ;
  wire \buff1_reg[11]__0_n_0 ;
  wire \buff1_reg[12]__0_n_0 ;
  wire \buff1_reg[13]__0_n_0 ;
  wire \buff1_reg[14]__0_n_0 ;
  wire \buff1_reg[15]__0_n_0 ;
  wire \buff1_reg[16]__0_n_0 ;
  wire \buff1_reg[1]__0_n_0 ;
  wire \buff1_reg[2]__0_n_0 ;
  wire \buff1_reg[3]__0_n_0 ;
  wire \buff1_reg[4]__0_n_0 ;
  wire \buff1_reg[5]__0_n_0 ;
  wire \buff1_reg[6]__0_n_0 ;
  wire \buff1_reg[7]__0_n_0 ;
  wire \buff1_reg[8]__0_n_0 ;
  wire \buff1_reg[9]__0_n_0 ;
  wire [1:0]buff1_reg_0;
  wire [0:0]buff1_reg__0_0;
  wire buff1_reg__0_n_100;
  wire buff1_reg__0_n_101;
  wire buff1_reg__0_n_102;
  wire buff1_reg__0_n_103;
  wire buff1_reg__0_n_104;
  wire buff1_reg__0_n_105;
  wire buff1_reg__0_n_58;
  wire buff1_reg__0_n_59;
  wire buff1_reg__0_n_60;
  wire buff1_reg__0_n_61;
  wire buff1_reg__0_n_62;
  wire buff1_reg__0_n_63;
  wire buff1_reg__0_n_64;
  wire buff1_reg__0_n_65;
  wire buff1_reg__0_n_66;
  wire buff1_reg__0_n_67;
  wire buff1_reg__0_n_68;
  wire buff1_reg__0_n_69;
  wire buff1_reg__0_n_70;
  wire buff1_reg__0_n_71;
  wire buff1_reg__0_n_72;
  wire buff1_reg__0_n_73;
  wire buff1_reg__0_n_74;
  wire buff1_reg__0_n_75;
  wire buff1_reg__0_n_76;
  wire buff1_reg__0_n_77;
  wire buff1_reg__0_n_78;
  wire buff1_reg__0_n_79;
  wire buff1_reg__0_n_80;
  wire buff1_reg__0_n_81;
  wire buff1_reg__0_n_82;
  wire buff1_reg__0_n_83;
  wire buff1_reg__0_n_84;
  wire buff1_reg__0_n_85;
  wire buff1_reg__0_n_86;
  wire buff1_reg__0_n_87;
  wire buff1_reg__0_n_88;
  wire buff1_reg__0_n_89;
  wire buff1_reg__0_n_90;
  wire buff1_reg__0_n_91;
  wire buff1_reg__0_n_92;
  wire buff1_reg__0_n_93;
  wire buff1_reg__0_n_94;
  wire buff1_reg__0_n_95;
  wire buff1_reg__0_n_96;
  wire buff1_reg__0_n_97;
  wire buff1_reg__0_n_98;
  wire buff1_reg__0_n_99;
  wire buff1_reg__1_n_100;
  wire buff1_reg__1_n_101;
  wire buff1_reg__1_n_102;
  wire buff1_reg__1_n_103;
  wire buff1_reg__1_n_104;
  wire buff1_reg__1_n_105;
  wire buff1_reg__1_n_58;
  wire buff1_reg__1_n_59;
  wire buff1_reg__1_n_60;
  wire buff1_reg__1_n_61;
  wire buff1_reg__1_n_62;
  wire buff1_reg__1_n_63;
  wire buff1_reg__1_n_64;
  wire buff1_reg__1_n_65;
  wire buff1_reg__1_n_66;
  wire buff1_reg__1_n_67;
  wire buff1_reg__1_n_68;
  wire buff1_reg__1_n_69;
  wire buff1_reg__1_n_70;
  wire buff1_reg__1_n_71;
  wire buff1_reg__1_n_72;
  wire buff1_reg__1_n_73;
  wire buff1_reg__1_n_74;
  wire buff1_reg__1_n_75;
  wire buff1_reg__1_n_76;
  wire buff1_reg__1_n_77;
  wire buff1_reg__1_n_78;
  wire buff1_reg__1_n_79;
  wire buff1_reg__1_n_80;
  wire buff1_reg__1_n_81;
  wire buff1_reg__1_n_82;
  wire buff1_reg__1_n_83;
  wire buff1_reg__1_n_84;
  wire buff1_reg__1_n_85;
  wire buff1_reg__1_n_86;
  wire buff1_reg__1_n_87;
  wire buff1_reg__1_n_88;
  wire buff1_reg__1_n_89;
  wire buff1_reg__1_n_90;
  wire buff1_reg__1_n_91;
  wire buff1_reg__1_n_92;
  wire buff1_reg__1_n_93;
  wire buff1_reg__1_n_94;
  wire buff1_reg__1_n_95;
  wire buff1_reg__1_n_96;
  wire buff1_reg__1_n_97;
  wire buff1_reg__1_n_98;
  wire buff1_reg__1_n_99;
  wire [2:0]buff1_reg__2_0;
  wire [0:0]buff1_reg__2_1;
  wire buff1_reg__2_n_100;
  wire buff1_reg__2_n_101;
  wire buff1_reg__2_n_102;
  wire buff1_reg__2_n_103;
  wire buff1_reg__2_n_104;
  wire buff1_reg__2_n_105;
  wire buff1_reg__2_n_58;
  wire buff1_reg__2_n_59;
  wire buff1_reg__2_n_60;
  wire buff1_reg__2_n_61;
  wire buff1_reg__2_n_62;
  wire buff1_reg__2_n_63;
  wire buff1_reg__2_n_64;
  wire buff1_reg__2_n_65;
  wire buff1_reg__2_n_66;
  wire buff1_reg__2_n_67;
  wire buff1_reg__2_n_68;
  wire buff1_reg__2_n_69;
  wire buff1_reg__2_n_70;
  wire buff1_reg__2_n_71;
  wire buff1_reg__2_n_72;
  wire buff1_reg__2_n_73;
  wire buff1_reg__2_n_74;
  wire buff1_reg__2_n_75;
  wire buff1_reg__2_n_76;
  wire buff1_reg__2_n_77;
  wire buff1_reg__2_n_78;
  wire buff1_reg__2_n_79;
  wire buff1_reg__2_n_80;
  wire buff1_reg__2_n_81;
  wire buff1_reg__2_n_82;
  wire buff1_reg__2_n_83;
  wire buff1_reg__2_n_84;
  wire buff1_reg__2_n_85;
  wire buff1_reg__2_n_86;
  wire buff1_reg__2_n_87;
  wire buff1_reg__2_n_88;
  wire buff1_reg__2_n_89;
  wire buff1_reg__2_n_90;
  wire buff1_reg__2_n_91;
  wire buff1_reg__2_n_92;
  wire buff1_reg__2_n_93;
  wire buff1_reg__2_n_94;
  wire buff1_reg__2_n_95;
  wire buff1_reg__2_n_96;
  wire buff1_reg__2_n_97;
  wire buff1_reg__2_n_98;
  wire buff1_reg__2_n_99;
  wire [81:74]buff1_reg__5;
  wire buff1_reg_n_100;
  wire buff1_reg_n_101;
  wire buff1_reg_n_102;
  wire buff1_reg_n_103;
  wire buff1_reg_n_104;
  wire buff1_reg_n_105;
  wire buff1_reg_n_58;
  wire buff1_reg_n_59;
  wire buff1_reg_n_60;
  wire buff1_reg_n_61;
  wire buff1_reg_n_62;
  wire buff1_reg_n_63;
  wire buff1_reg_n_64;
  wire buff1_reg_n_65;
  wire buff1_reg_n_66;
  wire buff1_reg_n_67;
  wire buff1_reg_n_68;
  wire buff1_reg_n_69;
  wire buff1_reg_n_70;
  wire buff1_reg_n_71;
  wire buff1_reg_n_72;
  wire buff1_reg_n_73;
  wire buff1_reg_n_74;
  wire buff1_reg_n_75;
  wire buff1_reg_n_76;
  wire buff1_reg_n_77;
  wire buff1_reg_n_78;
  wire buff1_reg_n_79;
  wire buff1_reg_n_80;
  wire buff1_reg_n_81;
  wire buff1_reg_n_82;
  wire buff1_reg_n_83;
  wire buff1_reg_n_84;
  wire buff1_reg_n_85;
  wire buff1_reg_n_86;
  wire buff1_reg_n_87;
  wire buff1_reg_n_88;
  wire buff1_reg_n_89;
  wire buff1_reg_n_90;
  wire buff1_reg_n_91;
  wire buff1_reg_n_92;
  wire buff1_reg_n_93;
  wire buff1_reg_n_94;
  wire buff1_reg_n_95;
  wire buff1_reg_n_96;
  wire buff1_reg_n_97;
  wire buff1_reg_n_98;
  wire buff1_reg_n_99;
  wire \buff2[77]_i_100_n_0 ;
  wire \buff2[77]_i_101_n_0 ;
  wire \buff2[77]_i_102_n_0 ;
  wire \buff2[77]_i_103_n_0 ;
  wire \buff2[77]_i_104_n_0 ;
  wire \buff2[77]_i_106_n_0 ;
  wire \buff2[77]_i_107_n_0 ;
  wire \buff2[77]_i_108_n_0 ;
  wire \buff2[77]_i_109_n_0 ;
  wire \buff2[77]_i_10_n_0 ;
  wire \buff2[77]_i_111_n_0 ;
  wire \buff2[77]_i_112_n_0 ;
  wire \buff2[77]_i_113_n_0 ;
  wire \buff2[77]_i_114_n_0 ;
  wire \buff2[77]_i_116_n_0 ;
  wire \buff2[77]_i_117_n_0 ;
  wire \buff2[77]_i_118_n_0 ;
  wire \buff2[77]_i_119_n_0 ;
  wire \buff2[77]_i_120_n_0 ;
  wire \buff2[77]_i_121_n_0 ;
  wire \buff2[77]_i_122_n_0 ;
  wire \buff2[77]_i_12_n_0 ;
  wire \buff2[77]_i_13_n_0 ;
  wire \buff2[77]_i_14_n_0 ;
  wire \buff2[77]_i_15_n_0 ;
  wire \buff2[77]_i_16_n_0 ;
  wire \buff2[77]_i_17_n_0 ;
  wire \buff2[77]_i_18_n_0 ;
  wire \buff2[77]_i_19_n_0 ;
  wire \buff2[77]_i_22_n_0 ;
  wire \buff2[77]_i_23_n_0 ;
  wire \buff2[77]_i_24_n_0 ;
  wire \buff2[77]_i_25_n_0 ;
  wire \buff2[77]_i_26_n_0 ;
  wire \buff2[77]_i_28_n_0 ;
  wire \buff2[77]_i_29_n_0 ;
  wire \buff2[77]_i_30_n_0 ;
  wire \buff2[77]_i_31_n_0 ;
  wire \buff2[77]_i_32_n_0 ;
  wire \buff2[77]_i_33_n_0 ;
  wire \buff2[77]_i_34_n_0 ;
  wire \buff2[77]_i_35_n_0 ;
  wire \buff2[77]_i_37_n_0 ;
  wire \buff2[77]_i_38_n_0 ;
  wire \buff2[77]_i_39_n_0 ;
  wire \buff2[77]_i_3_n_0 ;
  wire \buff2[77]_i_40_n_0 ;
  wire \buff2[77]_i_42_n_0 ;
  wire \buff2[77]_i_43_n_0 ;
  wire \buff2[77]_i_44_n_0 ;
  wire \buff2[77]_i_45_n_0 ;
  wire \buff2[77]_i_46_n_0 ;
  wire \buff2[77]_i_47_n_0 ;
  wire \buff2[77]_i_48_n_0 ;
  wire \buff2[77]_i_49_n_0 ;
  wire \buff2[77]_i_4_n_0 ;
  wire \buff2[77]_i_51_n_0 ;
  wire \buff2[77]_i_52_n_0 ;
  wire \buff2[77]_i_53_n_0 ;
  wire \buff2[77]_i_54_n_0 ;
  wire \buff2[77]_i_56_n_0 ;
  wire \buff2[77]_i_57_n_0 ;
  wire \buff2[77]_i_58_n_0 ;
  wire \buff2[77]_i_59_n_0 ;
  wire \buff2[77]_i_5_n_0 ;
  wire \buff2[77]_i_60_n_0 ;
  wire \buff2[77]_i_61_n_0 ;
  wire \buff2[77]_i_62_n_0 ;
  wire \buff2[77]_i_63_n_0 ;
  wire \buff2[77]_i_65_n_0 ;
  wire \buff2[77]_i_66_n_0 ;
  wire \buff2[77]_i_67_n_0 ;
  wire \buff2[77]_i_68_n_0 ;
  wire \buff2[77]_i_6_n_0 ;
  wire \buff2[77]_i_70_n_0 ;
  wire \buff2[77]_i_71_n_0 ;
  wire \buff2[77]_i_72_n_0 ;
  wire \buff2[77]_i_73_n_0 ;
  wire \buff2[77]_i_74_n_0 ;
  wire \buff2[77]_i_75_n_0 ;
  wire \buff2[77]_i_76_n_0 ;
  wire \buff2[77]_i_77_n_0 ;
  wire \buff2[77]_i_78_n_0 ;
  wire \buff2[77]_i_79_n_0 ;
  wire \buff2[77]_i_7_n_0 ;
  wire \buff2[77]_i_80_n_0 ;
  wire \buff2[77]_i_83_n_0 ;
  wire \buff2[77]_i_84_n_0 ;
  wire \buff2[77]_i_85_n_0 ;
  wire \buff2[77]_i_86_n_0 ;
  wire \buff2[77]_i_87_n_0 ;
  wire \buff2[77]_i_88_n_0 ;
  wire \buff2[77]_i_89_n_0 ;
  wire \buff2[77]_i_8_n_0 ;
  wire \buff2[77]_i_90_n_0 ;
  wire \buff2[77]_i_92_n_0 ;
  wire \buff2[77]_i_93_n_0 ;
  wire \buff2[77]_i_94_n_0 ;
  wire \buff2[77]_i_95_n_0 ;
  wire \buff2[77]_i_96_n_0 ;
  wire \buff2[77]_i_97_n_0 ;
  wire \buff2[77]_i_98_n_0 ;
  wire \buff2[77]_i_99_n_0 ;
  wire \buff2[77]_i_9_n_0 ;
  wire \buff2[81]_i_11_n_0 ;
  wire \buff2[81]_i_12_n_0 ;
  wire \buff2[81]_i_13_n_0 ;
  wire \buff2[81]_i_14_n_0 ;
  wire \buff2[81]_i_15_n_0 ;
  wire \buff2[81]_i_16_n_0 ;
  wire \buff2[81]_i_17_n_0 ;
  wire \buff2[81]_i_18_n_0 ;
  wire \buff2[81]_i_19_n_0 ;
  wire \buff2[81]_i_2_n_0 ;
  wire \buff2[81]_i_3_n_0 ;
  wire \buff2[81]_i_4_n_0 ;
  wire \buff2[81]_i_5_n_0 ;
  wire \buff2[81]_i_6_n_0 ;
  wire \buff2[81]_i_7_n_0 ;
  wire \buff2[81]_i_8_n_0 ;
  wire \buff2_reg[77]_i_105_n_0 ;
  wire \buff2_reg[77]_i_105_n_1 ;
  wire \buff2_reg[77]_i_105_n_2 ;
  wire \buff2_reg[77]_i_105_n_3 ;
  wire \buff2_reg[77]_i_110_n_0 ;
  wire \buff2_reg[77]_i_110_n_1 ;
  wire \buff2_reg[77]_i_110_n_2 ;
  wire \buff2_reg[77]_i_110_n_3 ;
  wire \buff2_reg[77]_i_115_n_0 ;
  wire \buff2_reg[77]_i_115_n_1 ;
  wire \buff2_reg[77]_i_115_n_2 ;
  wire \buff2_reg[77]_i_115_n_3 ;
  wire \buff2_reg[77]_i_11_n_0 ;
  wire \buff2_reg[77]_i_11_n_1 ;
  wire \buff2_reg[77]_i_11_n_2 ;
  wire \buff2_reg[77]_i_11_n_3 ;
  wire \buff2_reg[77]_i_1_n_0 ;
  wire \buff2_reg[77]_i_1_n_1 ;
  wire \buff2_reg[77]_i_1_n_2 ;
  wire \buff2_reg[77]_i_1_n_3 ;
  wire \buff2_reg[77]_i_20_n_0 ;
  wire \buff2_reg[77]_i_20_n_1 ;
  wire \buff2_reg[77]_i_20_n_2 ;
  wire \buff2_reg[77]_i_20_n_3 ;
  wire \buff2_reg[77]_i_20_n_4 ;
  wire \buff2_reg[77]_i_20_n_5 ;
  wire \buff2_reg[77]_i_20_n_6 ;
  wire \buff2_reg[77]_i_20_n_7 ;
  wire \buff2_reg[77]_i_21_n_0 ;
  wire \buff2_reg[77]_i_21_n_1 ;
  wire \buff2_reg[77]_i_21_n_2 ;
  wire \buff2_reg[77]_i_21_n_3 ;
  wire \buff2_reg[77]_i_27_n_0 ;
  wire \buff2_reg[77]_i_27_n_1 ;
  wire \buff2_reg[77]_i_27_n_2 ;
  wire \buff2_reg[77]_i_27_n_3 ;
  wire \buff2_reg[77]_i_27_n_4 ;
  wire \buff2_reg[77]_i_27_n_5 ;
  wire \buff2_reg[77]_i_27_n_6 ;
  wire \buff2_reg[77]_i_27_n_7 ;
  wire \buff2_reg[77]_i_2_n_0 ;
  wire \buff2_reg[77]_i_2_n_1 ;
  wire \buff2_reg[77]_i_2_n_2 ;
  wire \buff2_reg[77]_i_2_n_3 ;
  wire \buff2_reg[77]_i_36_n_0 ;
  wire \buff2_reg[77]_i_36_n_1 ;
  wire \buff2_reg[77]_i_36_n_2 ;
  wire \buff2_reg[77]_i_36_n_3 ;
  wire \buff2_reg[77]_i_41_n_0 ;
  wire \buff2_reg[77]_i_41_n_1 ;
  wire \buff2_reg[77]_i_41_n_2 ;
  wire \buff2_reg[77]_i_41_n_3 ;
  wire \buff2_reg[77]_i_41_n_4 ;
  wire \buff2_reg[77]_i_41_n_5 ;
  wire \buff2_reg[77]_i_41_n_6 ;
  wire \buff2_reg[77]_i_41_n_7 ;
  wire \buff2_reg[77]_i_50_n_0 ;
  wire \buff2_reg[77]_i_50_n_1 ;
  wire \buff2_reg[77]_i_50_n_2 ;
  wire \buff2_reg[77]_i_50_n_3 ;
  wire \buff2_reg[77]_i_55_n_0 ;
  wire \buff2_reg[77]_i_55_n_1 ;
  wire \buff2_reg[77]_i_55_n_2 ;
  wire \buff2_reg[77]_i_55_n_3 ;
  wire \buff2_reg[77]_i_55_n_4 ;
  wire \buff2_reg[77]_i_55_n_5 ;
  wire \buff2_reg[77]_i_55_n_6 ;
  wire \buff2_reg[77]_i_55_n_7 ;
  wire \buff2_reg[77]_i_64_n_0 ;
  wire \buff2_reg[77]_i_64_n_1 ;
  wire \buff2_reg[77]_i_64_n_2 ;
  wire \buff2_reg[77]_i_64_n_3 ;
  wire \buff2_reg[77]_i_69_n_0 ;
  wire \buff2_reg[77]_i_69_n_1 ;
  wire \buff2_reg[77]_i_69_n_2 ;
  wire \buff2_reg[77]_i_69_n_3 ;
  wire \buff2_reg[77]_i_69_n_4 ;
  wire \buff2_reg[77]_i_69_n_5 ;
  wire \buff2_reg[77]_i_69_n_6 ;
  wire \buff2_reg[77]_i_69_n_7 ;
  wire \buff2_reg[77]_i_81_n_0 ;
  wire \buff2_reg[77]_i_81_n_1 ;
  wire \buff2_reg[77]_i_81_n_2 ;
  wire \buff2_reg[77]_i_81_n_3 ;
  wire \buff2_reg[77]_i_81_n_4 ;
  wire \buff2_reg[77]_i_81_n_5 ;
  wire \buff2_reg[77]_i_81_n_6 ;
  wire \buff2_reg[77]_i_82_n_0 ;
  wire \buff2_reg[77]_i_82_n_1 ;
  wire \buff2_reg[77]_i_82_n_2 ;
  wire \buff2_reg[77]_i_82_n_3 ;
  wire \buff2_reg[77]_i_82_n_4 ;
  wire \buff2_reg[77]_i_82_n_5 ;
  wire \buff2_reg[77]_i_82_n_6 ;
  wire \buff2_reg[77]_i_82_n_7 ;
  wire \buff2_reg[77]_i_91_n_0 ;
  wire \buff2_reg[77]_i_91_n_1 ;
  wire \buff2_reg[77]_i_91_n_2 ;
  wire \buff2_reg[77]_i_91_n_3 ;
  wire \buff2_reg[81]_i_10_n_7 ;
  wire \buff2_reg[81]_i_1_n_1 ;
  wire \buff2_reg[81]_i_1_n_2 ;
  wire \buff2_reg[81]_i_1_n_3 ;
  wire \buff2_reg[81]_i_9_n_0 ;
  wire \buff2_reg[81]_i_9_n_1 ;
  wire \buff2_reg[81]_i_9_n_2 ;
  wire \buff2_reg[81]_i_9_n_3 ;
  wire \buff2_reg[81]_i_9_n_4 ;
  wire \buff2_reg[81]_i_9_n_5 ;
  wire \buff2_reg[81]_i_9_n_6 ;
  wire \buff2_reg[81]_i_9_n_7 ;
  wire [1:0]tmp_product__0_0;
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
  wire [8:0]tmp_product__1_0;
  wire [0:0]tmp_product__1_1;
  wire tmp_product__1_n_106;
  wire tmp_product__1_n_107;
  wire tmp_product__1_n_108;
  wire tmp_product__1_n_109;
  wire tmp_product__1_n_110;
  wire tmp_product__1_n_111;
  wire tmp_product__1_n_112;
  wire tmp_product__1_n_113;
  wire tmp_product__1_n_114;
  wire tmp_product__1_n_115;
  wire tmp_product__1_n_116;
  wire tmp_product__1_n_117;
  wire tmp_product__1_n_118;
  wire tmp_product__1_n_119;
  wire tmp_product__1_n_120;
  wire tmp_product__1_n_121;
  wire tmp_product__1_n_122;
  wire tmp_product__1_n_123;
  wire tmp_product__1_n_124;
  wire tmp_product__1_n_125;
  wire tmp_product__1_n_126;
  wire tmp_product__1_n_127;
  wire tmp_product__1_n_128;
  wire tmp_product__1_n_129;
  wire tmp_product__1_n_130;
  wire tmp_product__1_n_131;
  wire tmp_product__1_n_132;
  wire tmp_product__1_n_133;
  wire tmp_product__1_n_134;
  wire tmp_product__1_n_135;
  wire tmp_product__1_n_136;
  wire tmp_product__1_n_137;
  wire tmp_product__1_n_138;
  wire tmp_product__1_n_139;
  wire tmp_product__1_n_140;
  wire tmp_product__1_n_141;
  wire tmp_product__1_n_142;
  wire tmp_product__1_n_143;
  wire tmp_product__1_n_144;
  wire tmp_product__1_n_145;
  wire tmp_product__1_n_146;
  wire tmp_product__1_n_147;
  wire tmp_product__1_n_148;
  wire tmp_product__1_n_149;
  wire tmp_product__1_n_150;
  wire tmp_product__1_n_151;
  wire tmp_product__1_n_152;
  wire tmp_product__1_n_153;
  wire [0:0]tmp_product__2_0;
  wire tmp_product__2_n_106;
  wire tmp_product__2_n_107;
  wire tmp_product__2_n_108;
  wire tmp_product__2_n_109;
  wire tmp_product__2_n_110;
  wire tmp_product__2_n_111;
  wire tmp_product__2_n_112;
  wire tmp_product__2_n_113;
  wire tmp_product__2_n_114;
  wire tmp_product__2_n_115;
  wire tmp_product__2_n_116;
  wire tmp_product__2_n_117;
  wire tmp_product__2_n_118;
  wire tmp_product__2_n_119;
  wire tmp_product__2_n_120;
  wire tmp_product__2_n_121;
  wire tmp_product__2_n_122;
  wire tmp_product__2_n_123;
  wire tmp_product__2_n_124;
  wire tmp_product__2_n_125;
  wire tmp_product__2_n_126;
  wire tmp_product__2_n_127;
  wire tmp_product__2_n_128;
  wire tmp_product__2_n_129;
  wire tmp_product__2_n_130;
  wire tmp_product__2_n_131;
  wire tmp_product__2_n_132;
  wire tmp_product__2_n_133;
  wire tmp_product__2_n_134;
  wire tmp_product__2_n_135;
  wire tmp_product__2_n_136;
  wire tmp_product__2_n_137;
  wire tmp_product__2_n_138;
  wire tmp_product__2_n_139;
  wire tmp_product__2_n_140;
  wire tmp_product__2_n_141;
  wire tmp_product__2_n_142;
  wire tmp_product__2_n_143;
  wire tmp_product__2_n_144;
  wire tmp_product__2_n_145;
  wire tmp_product__2_n_146;
  wire tmp_product__2_n_147;
  wire tmp_product__2_n_148;
  wire tmp_product__2_n_149;
  wire tmp_product__2_n_150;
  wire tmp_product__2_n_151;
  wire tmp_product__2_n_152;
  wire tmp_product__2_n_153;
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
  wire NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg_CARRYOUT_UNCONNECTED;
  wire NLW_buff0_reg__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg__0_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg__0_CARRYOUT_UNCONNECTED;
  wire NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg__1_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg__1_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg__1_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg__1_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg__1_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg__1_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg__1_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg__1_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff0_reg__1_P_UNCONNECTED;
  wire NLW_buff0_reg__2_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg__2_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg__2_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg__2_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg__2_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg__2_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg__2_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg__2_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg__2_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff0_reg__2_P_UNCONNECTED;
  wire NLW_buff0_reg__3_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg__3_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg__3_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg__3_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg__3_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg__3_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg__3_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg__3_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg__3_CARRYOUT_UNCONNECTED;
  wire NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg_PCOUT_UNCONNECTED;
  wire NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg__0_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg__0_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg__0_PCOUT_UNCONNECTED;
  wire NLW_buff1_reg__1_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg__1_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg__1_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg__1_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg__1_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg__1_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg__1_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg__1_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg__1_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg__1_PCOUT_UNCONNECTED;
  wire NLW_buff1_reg__2_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg__2_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg__2_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg__2_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg__2_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg__2_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg__2_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg__2_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg__2_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg__2_PCOUT_UNCONNECTED;
  wire [3:0]\NLW_buff2_reg[77]_i_105_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[77]_i_11_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[77]_i_110_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[77]_i_115_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[77]_i_2_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[77]_i_21_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[77]_i_36_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[77]_i_50_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[77]_i_64_O_UNCONNECTED ;
  wire [0:0]\NLW_buff2_reg[77]_i_81_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[77]_i_91_O_UNCONNECTED ;
  wire [3:3]\NLW_buff2_reg[81]_i_1_CO_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[81]_i_10_CO_UNCONNECTED ;
  wire [3:1]\NLW_buff2_reg[81]_i_10_O_UNCONNECTED ;
  wire NLW_tmp_product_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_tmp_product_P_UNCONNECTED;
  wire NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__0_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__0_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_tmp_product__0_P_UNCONNECTED;
  wire NLW_tmp_product__1_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__1_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__1_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__1_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__1_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__1_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product__1_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product__1_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__1_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_tmp_product__1_P_UNCONNECTED;
  wire NLW_tmp_product__2_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__2_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__2_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__2_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__2_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__2_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product__2_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product__2_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__2_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_tmp_product__2_P_UNCONNECTED;

  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 14x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(2),
    .BREG(2),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff0_reg
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,B[1],B[1],B[1],B[1],B[1],B[1],B[1],B[1],B[1],B,B[0],B[0],B[0]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(Q),
        .CEB2(1'b1),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg_OVERFLOW_UNCONNECTED),
        .P({buff0_reg_n_58,buff0_reg_n_59,buff0_reg_n_60,buff0_reg_n_61,buff0_reg_n_62,buff0_reg_n_63,buff0_reg_n_64,buff0_reg_n_65,buff0_reg_n_66,buff0_reg_n_67,buff0_reg_n_68,buff0_reg_n_69,buff0_reg_n_70,buff0_reg_n_71,buff0_reg_n_72,buff0_reg_n_73,buff0_reg_n_74,buff0_reg_n_75,buff0_reg_n_76,buff0_reg_n_77,buff0_reg_n_78,buff0_reg_n_79,buff0_reg_n_80,buff0_reg_n_81,buff0_reg_n_82,buff0_reg_n_83,buff0_reg_n_84,buff0_reg_n_85,buff0_reg_n_86,buff0_reg_n_87,buff0_reg_n_88,buff0_reg_n_89,buff0_reg_n_90,buff0_reg_n_91,buff0_reg_n_92,buff0_reg_n_93,buff0_reg_n_94,buff0_reg_n_95,buff0_reg_n_96,buff0_reg_n_97,buff0_reg_n_98,buff0_reg_n_99,buff0_reg_n_100,buff0_reg_n_101,buff0_reg_n_102,buff0_reg_n_103,buff0_reg_n_104,buff0_reg_n_105}),
        .PATTERNBDETECT(NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg_n_106,buff0_reg_n_107,buff0_reg_n_108,buff0_reg_n_109,buff0_reg_n_110,buff0_reg_n_111,buff0_reg_n_112,buff0_reg_n_113,buff0_reg_n_114,buff0_reg_n_115,buff0_reg_n_116,buff0_reg_n_117,buff0_reg_n_118,buff0_reg_n_119,buff0_reg_n_120,buff0_reg_n_121,buff0_reg_n_122,buff0_reg_n_123,buff0_reg_n_124,buff0_reg_n_125,buff0_reg_n_126,buff0_reg_n_127,buff0_reg_n_128,buff0_reg_n_129,buff0_reg_n_130,buff0_reg_n_131,buff0_reg_n_132,buff0_reg_n_133,buff0_reg_n_134,buff0_reg_n_135,buff0_reg_n_136,buff0_reg_n_137,buff0_reg_n_138,buff0_reg_n_139,buff0_reg_n_140,buff0_reg_n_141,buff0_reg_n_142,buff0_reg_n_143,buff0_reg_n_144,buff0_reg_n_145,buff0_reg_n_146,buff0_reg_n_147,buff0_reg_n_148,buff0_reg_n_149,buff0_reg_n_150,buff0_reg_n_151,buff0_reg_n_152,buff0_reg_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 14x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(2),
    .BREG(2),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
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
    buff0_reg__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,B[0],B[0],B[0],B[0],B[0],B[0],A[2],A[2],A[2],A[2],A[2],A[2],A[2],A[2]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(Q),
        .CEB2(1'b1),
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
        .MULTSIGNOUT(NLW_buff0_reg__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg__0_OVERFLOW_UNCONNECTED),
        .P({buff0_reg__0_n_58,buff0_reg__0_n_59,buff0_reg__0_n_60,buff0_reg__0_n_61,buff0_reg__0_n_62,buff0_reg__0_n_63,buff0_reg__0_n_64,buff0_reg__0_n_65,buff0_reg__0_n_66,buff0_reg__0_n_67,buff0_reg__0_n_68,buff0_reg__0_n_69,buff0_reg__0_n_70,buff0_reg__0_n_71,buff0_reg__0_n_72,buff0_reg__0_n_73,buff0_reg__0_n_74,buff0_reg__0_n_75,buff0_reg__0_n_76,buff0_reg__0_n_77,buff0_reg__0_n_78,buff0_reg__0_n_79,buff0_reg__0_n_80,buff0_reg__0_n_81,buff0_reg__0_n_82,buff0_reg__0_n_83,buff0_reg__0_n_84,buff0_reg__0_n_85,buff0_reg__0_n_86,buff0_reg__0_n_87,buff0_reg__0_n_88,buff0_reg__0_n_89,buff0_reg__0_n_90,buff0_reg__0_n_91,buff0_reg__0_n_92,buff0_reg__0_n_93,buff0_reg__0_n_94,buff0_reg__0_n_95,buff0_reg__0_n_96,buff0_reg__0_n_97,buff0_reg__0_n_98,buff0_reg__0_n_99,buff0_reg__0_n_100,buff0_reg__0_n_101,buff0_reg__0_n_102,buff0_reg__0_n_103,buff0_reg__0_n_104,buff0_reg__0_n_105}),
        .PATTERNBDETECT(NLW_buff0_reg__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg__0_n_106,buff0_reg__0_n_107,buff0_reg__0_n_108,buff0_reg__0_n_109,buff0_reg__0_n_110,buff0_reg__0_n_111,buff0_reg__0_n_112,buff0_reg__0_n_113,buff0_reg__0_n_114,buff0_reg__0_n_115,buff0_reg__0_n_116,buff0_reg__0_n_117,buff0_reg__0_n_118,buff0_reg__0_n_119,buff0_reg__0_n_120,buff0_reg__0_n_121,buff0_reg__0_n_122,buff0_reg__0_n_123,buff0_reg__0_n_124,buff0_reg__0_n_125,buff0_reg__0_n_126,buff0_reg__0_n_127,buff0_reg__0_n_128,buff0_reg__0_n_129,buff0_reg__0_n_130,buff0_reg__0_n_131,buff0_reg__0_n_132,buff0_reg__0_n_133,buff0_reg__0_n_134,buff0_reg__0_n_135,buff0_reg__0_n_136,buff0_reg__0_n_137,buff0_reg__0_n_138,buff0_reg__0_n_139,buff0_reg__0_n_140,buff0_reg__0_n_141,buff0_reg__0_n_142,buff0_reg__0_n_143,buff0_reg__0_n_144,buff0_reg__0_n_145,buff0_reg__0_n_146,buff0_reg__0_n_147,buff0_reg__0_n_148,buff0_reg__0_n_149,buff0_reg__0_n_150,buff0_reg__0_n_151,buff0_reg__0_n_152,buff0_reg__0_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg__0_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x16 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
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
    buff0_reg__1
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,tmp_product__1_0[8],tmp_product__1_0[8:7],tmp_product__1_0[7],tmp_product__1_0[7],tmp_product__1_0[7],tmp_product__1_0[7],tmp_product__1_0[7],tmp_product__1_0[7],tmp_product__1_0[7:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__1_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__1_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
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
        .MULTSIGNOUT(NLW_buff0_reg__1_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg__1_OVERFLOW_UNCONNECTED),
        .P(NLW_buff0_reg__1_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_buff0_reg__1_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg__1_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg__1_n_106,buff0_reg__1_n_107,buff0_reg__1_n_108,buff0_reg__1_n_109,buff0_reg__1_n_110,buff0_reg__1_n_111,buff0_reg__1_n_112,buff0_reg__1_n_113,buff0_reg__1_n_114,buff0_reg__1_n_115,buff0_reg__1_n_116,buff0_reg__1_n_117,buff0_reg__1_n_118,buff0_reg__1_n_119,buff0_reg__1_n_120,buff0_reg__1_n_121,buff0_reg__1_n_122,buff0_reg__1_n_123,buff0_reg__1_n_124,buff0_reg__1_n_125,buff0_reg__1_n_126,buff0_reg__1_n_127,buff0_reg__1_n_128,buff0_reg__1_n_129,buff0_reg__1_n_130,buff0_reg__1_n_131,buff0_reg__1_n_132,buff0_reg__1_n_133,buff0_reg__1_n_134,buff0_reg__1_n_135,buff0_reg__1_n_136,buff0_reg__1_n_137,buff0_reg__1_n_138,buff0_reg__1_n_139,buff0_reg__1_n_140,buff0_reg__1_n_141,buff0_reg__1_n_142,buff0_reg__1_n_143,buff0_reg__1_n_144,buff0_reg__1_n_145,buff0_reg__1_n_146,buff0_reg__1_n_147,buff0_reg__1_n_148,buff0_reg__1_n_149,buff0_reg__1_n_150,buff0_reg__1_n_151,buff0_reg__1_n_152,buff0_reg__1_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg__1_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
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
    buff0_reg__2
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,buff0_reg__2_0,buff0_reg__2_0,buff0_reg__2_0,buff0_reg__2_0,buff0_reg__2_0,buff0_reg__2_0,buff0_reg__2_0,buff0_reg__2_0,buff0_reg__2_0,buff0_reg__2_0,tmp_product__1_0[6:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__2_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__2_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__2_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
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
        .MULTSIGNOUT(NLW_buff0_reg__2_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg__2_OVERFLOW_UNCONNECTED),
        .P(NLW_buff0_reg__2_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_buff0_reg__2_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg__2_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg__2_n_106,buff0_reg__2_n_107,buff0_reg__2_n_108,buff0_reg__2_n_109,buff0_reg__2_n_110,buff0_reg__2_n_111,buff0_reg__2_n_112,buff0_reg__2_n_113,buff0_reg__2_n_114,buff0_reg__2_n_115,buff0_reg__2_n_116,buff0_reg__2_n_117,buff0_reg__2_n_118,buff0_reg__2_n_119,buff0_reg__2_n_120,buff0_reg__2_n_121,buff0_reg__2_n_122,buff0_reg__2_n_123,buff0_reg__2_n_124,buff0_reg__2_n_125,buff0_reg__2_n_126,buff0_reg__2_n_127,buff0_reg__2_n_128,buff0_reg__2_n_129,buff0_reg__2_n_130,buff0_reg__2_n_131,buff0_reg__2_n_132,buff0_reg__2_n_133,buff0_reg__2_n_134,buff0_reg__2_n_135,buff0_reg__2_n_136,buff0_reg__2_n_137,buff0_reg__2_n_138,buff0_reg__2_n_139,buff0_reg__2_n_140,buff0_reg__2_n_141,buff0_reg__2_n_142,buff0_reg__2_n_143,buff0_reg__2_n_144,buff0_reg__2_n_145,buff0_reg__2_n_146,buff0_reg__2_n_147,buff0_reg__2_n_148,buff0_reg__2_n_149,buff0_reg__2_n_150,buff0_reg__2_n_151,buff0_reg__2_n_152,buff0_reg__2_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg__2_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
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
    buff0_reg__3
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,buff0_reg__3_0,buff0_reg__3_0,buff0_reg__3_0,buff0_reg__3_0,buff0_reg__3_0,buff0_reg__3_0,buff0_reg__3_0,buff0_reg__3_0,buff0_reg__3_0,buff0_reg__3_0,tmp_product__1_0[6:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__3_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__3_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__3_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__3_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
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
        .MULTSIGNOUT(NLW_buff0_reg__3_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg__3_OVERFLOW_UNCONNECTED),
        .P({buff0_reg__3_n_58,buff0_reg__3_n_59,buff0_reg__3_n_60,buff0_reg__3_n_61,buff0_reg__3_n_62,buff0_reg__3_n_63,buff0_reg__3_n_64,buff0_reg__3_n_65,buff0_reg__3_n_66,buff0_reg__3_n_67,buff0_reg__3_n_68,buff0_reg__3_n_69,buff0_reg__3_n_70,buff0_reg__3_n_71,buff0_reg__3_n_72,buff0_reg__3_n_73,buff0_reg__3_n_74,buff0_reg__3_n_75,buff0_reg__3_n_76,buff0_reg__3_n_77,buff0_reg__3_n_78,buff0_reg__3_n_79,buff0_reg__3_n_80,buff0_reg__3_n_81,buff0_reg__3_n_82,buff0_reg__3_n_83,buff0_reg__3_n_84,buff0_reg__3_n_85,buff0_reg__3_n_86,buff0_reg__3_n_87,buff0_reg__3_n_88,buff0_reg__3_n_89,buff0_reg__3_n_90,buff0_reg__3_n_91,buff0_reg__3_n_92,buff0_reg__3_n_93,buff0_reg__3_n_94,buff0_reg__3_n_95,buff0_reg__3_n_96,buff0_reg__3_n_97,buff0_reg__3_n_98,buff0_reg__3_n_99,buff0_reg__3_n_100,buff0_reg__3_n_101,buff0_reg__3_n_102,buff0_reg__3_n_103,buff0_reg__3_n_104,buff0_reg__3_n_105}),
        .PATTERNBDETECT(NLW_buff0_reg__3_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg__3_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg__3_n_106,buff0_reg__3_n_107,buff0_reg__3_n_108,buff0_reg__3_n_109,buff0_reg__3_n_110,buff0_reg__3_n_111,buff0_reg__3_n_112,buff0_reg__3_n_113,buff0_reg__3_n_114,buff0_reg__3_n_115,buff0_reg__3_n_116,buff0_reg__3_n_117,buff0_reg__3_n_118,buff0_reg__3_n_119,buff0_reg__3_n_120,buff0_reg__3_n_121,buff0_reg__3_n_122,buff0_reg__3_n_123,buff0_reg__3_n_124,buff0_reg__3_n_125,buff0_reg__3_n_126,buff0_reg__3_n_127,buff0_reg__3_n_128,buff0_reg__3_n_129,buff0_reg__3_n_130,buff0_reg__3_n_131,buff0_reg__3_n_132,buff0_reg__3_n_133,buff0_reg__3_n_134,buff0_reg__3_n_135,buff0_reg__3_n_136,buff0_reg__3_n_137,buff0_reg__3_n_138,buff0_reg__3_n_139,buff0_reg__3_n_140,buff0_reg__3_n_141,buff0_reg__3_n_142,buff0_reg__3_n_143,buff0_reg__3_n_144,buff0_reg__3_n_145,buff0_reg__3_n_146,buff0_reg__3_n_147,buff0_reg__3_n_148,buff0_reg__3_n_149,buff0_reg__3_n_150,buff0_reg__3_n_151,buff0_reg__3_n_152,buff0_reg__3_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg__3_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff1_reg
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,A[0],A[0],A[0],A[0],buff1_reg_0[1],buff1_reg_0[1],buff1_reg_0[1],buff1_reg_0[1],buff1_reg_0[1],buff1_reg_0[1],buff1_reg_0[1],buff1_reg_0[1],buff1_reg_0[1],buff1_reg_0,buff1_reg_0[0],buff1_reg_0[0],buff1_reg_0[0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg_OVERFLOW_UNCONNECTED),
        .P({buff1_reg_n_58,buff1_reg_n_59,buff1_reg_n_60,buff1_reg_n_61,buff1_reg_n_62,buff1_reg_n_63,buff1_reg_n_64,buff1_reg_n_65,buff1_reg_n_66,buff1_reg_n_67,buff1_reg_n_68,buff1_reg_n_69,buff1_reg_n_70,buff1_reg_n_71,buff1_reg_n_72,buff1_reg_n_73,buff1_reg_n_74,buff1_reg_n_75,buff1_reg_n_76,buff1_reg_n_77,buff1_reg_n_78,buff1_reg_n_79,buff1_reg_n_80,buff1_reg_n_81,buff1_reg_n_82,buff1_reg_n_83,buff1_reg_n_84,buff1_reg_n_85,buff1_reg_n_86,buff1_reg_n_87,buff1_reg_n_88,buff1_reg_n_89,buff1_reg_n_90,buff1_reg_n_91,buff1_reg_n_92,buff1_reg_n_93,buff1_reg_n_94,buff1_reg_n_95,buff1_reg_n_96,buff1_reg_n_97,buff1_reg_n_98,buff1_reg_n_99,buff1_reg_n_100,buff1_reg_n_101,buff1_reg_n_102,buff1_reg_n_103,buff1_reg_n_104,buff1_reg_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product_n_106,tmp_product_n_107,tmp_product_n_108,tmp_product_n_109,tmp_product_n_110,tmp_product_n_111,tmp_product_n_112,tmp_product_n_113,tmp_product_n_114,tmp_product_n_115,tmp_product_n_116,tmp_product_n_117,tmp_product_n_118,tmp_product_n_119,tmp_product_n_120,tmp_product_n_121,tmp_product_n_122,tmp_product_n_123,tmp_product_n_124,tmp_product_n_125,tmp_product_n_126,tmp_product_n_127,tmp_product_n_128,tmp_product_n_129,tmp_product_n_130,tmp_product_n_131,tmp_product_n_132,tmp_product_n_133,tmp_product_n_134,tmp_product_n_135,tmp_product_n_136,tmp_product_n_137,tmp_product_n_138,tmp_product_n_139,tmp_product_n_140,tmp_product_n_141,tmp_product_n_142,tmp_product_n_143,tmp_product_n_144,tmp_product_n_145,tmp_product_n_146,tmp_product_n_147,tmp_product_n_148,tmp_product_n_149,tmp_product_n_150,tmp_product_n_151,tmp_product_n_152,tmp_product_n_153}),
        .PCOUT(NLW_buff1_reg_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg_UNDERFLOW_UNCONNECTED));
  FDRE \buff1_reg[0]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_105),
        .Q(\buff1_reg[0]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[10]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_95),
        .Q(\buff1_reg[10]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[11]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_94),
        .Q(\buff1_reg[11]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[12]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_93),
        .Q(\buff1_reg[12]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[13]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_92),
        .Q(\buff1_reg[13]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[14]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_91),
        .Q(\buff1_reg[14]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[15]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_90),
        .Q(\buff1_reg[15]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[16]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_89),
        .Q(\buff1_reg[16]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[1]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_104),
        .Q(\buff1_reg[1]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[2]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_103),
        .Q(\buff1_reg[2]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[3]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_102),
        .Q(\buff1_reg[3]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[4]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_101),
        .Q(\buff1_reg[4]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[5]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_100),
        .Q(\buff1_reg[5]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[6]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_99),
        .Q(\buff1_reg[6]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[7]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_98),
        .Q(\buff1_reg[7]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[8]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_97),
        .Q(\buff1_reg[8]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[9]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_96),
        .Q(\buff1_reg[9]__0_n_0 ),
        .R(1'b0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff1_reg__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,buff1_reg__2_0[0],buff1_reg__2_0[0],buff1_reg__2_0[0],buff1_reg__2_0[0],buff1_reg__2_0[0],buff1_reg__2_0[0],buff1_reg__2_0[0],buff1_reg__2_0[0],buff1_reg__0_0,buff1_reg__0_0,buff1_reg__0_0,buff1_reg__0_0,buff1_reg__0_0,buff1_reg__0_0,buff1_reg__0_0,buff1_reg__0_0,buff1_reg__0_0,buff1_reg__0_0}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff1_reg__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg__0_OVERFLOW_UNCONNECTED),
        .P({buff1_reg__0_n_58,buff1_reg__0_n_59,buff1_reg__0_n_60,buff1_reg__0_n_61,buff1_reg__0_n_62,buff1_reg__0_n_63,buff1_reg__0_n_64,buff1_reg__0_n_65,buff1_reg__0_n_66,buff1_reg__0_n_67,buff1_reg__0_n_68,buff1_reg__0_n_69,buff1_reg__0_n_70,buff1_reg__0_n_71,buff1_reg__0_n_72,buff1_reg__0_n_73,buff1_reg__0_n_74,buff1_reg__0_n_75,buff1_reg__0_n_76,buff1_reg__0_n_77,buff1_reg__0_n_78,buff1_reg__0_n_79,buff1_reg__0_n_80,buff1_reg__0_n_81,buff1_reg__0_n_82,buff1_reg__0_n_83,buff1_reg__0_n_84,buff1_reg__0_n_85,buff1_reg__0_n_86,buff1_reg__0_n_87,buff1_reg__0_n_88,buff1_reg__0_n_89,buff1_reg__0_n_90,buff1_reg__0_n_91,buff1_reg__0_n_92,buff1_reg__0_n_93,buff1_reg__0_n_94,buff1_reg__0_n_95,buff1_reg__0_n_96,buff1_reg__0_n_97,buff1_reg__0_n_98,buff1_reg__0_n_99,buff1_reg__0_n_100,buff1_reg__0_n_101,buff1_reg__0_n_102,buff1_reg__0_n_103,buff1_reg__0_n_104,buff1_reg__0_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__0_n_106,tmp_product__0_n_107,tmp_product__0_n_108,tmp_product__0_n_109,tmp_product__0_n_110,tmp_product__0_n_111,tmp_product__0_n_112,tmp_product__0_n_113,tmp_product__0_n_114,tmp_product__0_n_115,tmp_product__0_n_116,tmp_product__0_n_117,tmp_product__0_n_118,tmp_product__0_n_119,tmp_product__0_n_120,tmp_product__0_n_121,tmp_product__0_n_122,tmp_product__0_n_123,tmp_product__0_n_124,tmp_product__0_n_125,tmp_product__0_n_126,tmp_product__0_n_127,tmp_product__0_n_128,tmp_product__0_n_129,tmp_product__0_n_130,tmp_product__0_n_131,tmp_product__0_n_132,tmp_product__0_n_133,tmp_product__0_n_134,tmp_product__0_n_135,tmp_product__0_n_136,tmp_product__0_n_137,tmp_product__0_n_138,tmp_product__0_n_139,tmp_product__0_n_140,tmp_product__0_n_141,tmp_product__0_n_142,tmp_product__0_n_143,tmp_product__0_n_144,tmp_product__0_n_145,tmp_product__0_n_146,tmp_product__0_n_147,tmp_product__0_n_148,tmp_product__0_n_149,tmp_product__0_n_150,tmp_product__0_n_151,tmp_product__0_n_152,tmp_product__0_n_153}),
        .PCOUT(NLW_buff1_reg__0_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg__0_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff1_reg__1
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,buff1_reg__2_0[2],buff1_reg__2_0[2],buff1_reg__2_0[2],buff1_reg__2_0[2],buff1_reg__2_0[2],buff1_reg__2_0[2:1],buff1_reg__2_0[1],buff1_reg__2_0[1],buff1_reg__2_0[1],buff1_reg__2_0[1],buff1_reg__2_0[1],buff1_reg__2_0[1],buff1_reg__2_0[1],buff1_reg__2_0[1],buff1_reg__2_0[1:0],buff1_reg__2_0[0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__1_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__1_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__1_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff1_reg__1_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg__1_OVERFLOW_UNCONNECTED),
        .P({buff1_reg__1_n_58,buff1_reg__1_n_59,buff1_reg__1_n_60,buff1_reg__1_n_61,buff1_reg__1_n_62,buff1_reg__1_n_63,buff1_reg__1_n_64,buff1_reg__1_n_65,buff1_reg__1_n_66,buff1_reg__1_n_67,buff1_reg__1_n_68,buff1_reg__1_n_69,buff1_reg__1_n_70,buff1_reg__1_n_71,buff1_reg__1_n_72,buff1_reg__1_n_73,buff1_reg__1_n_74,buff1_reg__1_n_75,buff1_reg__1_n_76,buff1_reg__1_n_77,buff1_reg__1_n_78,buff1_reg__1_n_79,buff1_reg__1_n_80,buff1_reg__1_n_81,buff1_reg__1_n_82,buff1_reg__1_n_83,buff1_reg__1_n_84,buff1_reg__1_n_85,buff1_reg__1_n_86,buff1_reg__1_n_87,buff1_reg__1_n_88,buff1_reg__1_n_89,buff1_reg__1_n_90,buff1_reg__1_n_91,buff1_reg__1_n_92,buff1_reg__1_n_93,buff1_reg__1_n_94,buff1_reg__1_n_95,buff1_reg__1_n_96,buff1_reg__1_n_97,buff1_reg__1_n_98,buff1_reg__1_n_99,buff1_reg__1_n_100,buff1_reg__1_n_101,buff1_reg__1_n_102,buff1_reg__1_n_103,buff1_reg__1_n_104,buff1_reg__1_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg__1_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg__1_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__1_n_106,tmp_product__1_n_107,tmp_product__1_n_108,tmp_product__1_n_109,tmp_product__1_n_110,tmp_product__1_n_111,tmp_product__1_n_112,tmp_product__1_n_113,tmp_product__1_n_114,tmp_product__1_n_115,tmp_product__1_n_116,tmp_product__1_n_117,tmp_product__1_n_118,tmp_product__1_n_119,tmp_product__1_n_120,tmp_product__1_n_121,tmp_product__1_n_122,tmp_product__1_n_123,tmp_product__1_n_124,tmp_product__1_n_125,tmp_product__1_n_126,tmp_product__1_n_127,tmp_product__1_n_128,tmp_product__1_n_129,tmp_product__1_n_130,tmp_product__1_n_131,tmp_product__1_n_132,tmp_product__1_n_133,tmp_product__1_n_134,tmp_product__1_n_135,tmp_product__1_n_136,tmp_product__1_n_137,tmp_product__1_n_138,tmp_product__1_n_139,tmp_product__1_n_140,tmp_product__1_n_141,tmp_product__1_n_142,tmp_product__1_n_143,tmp_product__1_n_144,tmp_product__1_n_145,tmp_product__1_n_146,tmp_product__1_n_147,tmp_product__1_n_148,tmp_product__1_n_149,tmp_product__1_n_150,tmp_product__1_n_151,tmp_product__1_n_152,tmp_product__1_n_153}),
        .PCOUT(NLW_buff1_reg__1_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg__1_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff1_reg__2
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,tmp_product__0_0[0],tmp_product__0_0[0],tmp_product__0_0[0],tmp_product__0_0[0],buff1_reg__2_1,buff1_reg__2_1,buff1_reg__2_1,buff1_reg__2_1,buff1_reg__2_1,buff1_reg__2_1,buff1_reg__2_1,buff1_reg__2_1,buff1_reg__2_1,buff1_reg__2_1,buff1_reg__2_0[2],buff1_reg__2_0[2],buff1_reg__2_0[2],buff1_reg__2_0[2]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__2_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__2_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__2_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff1_reg__2_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg__2_OVERFLOW_UNCONNECTED),
        .P({buff1_reg__2_n_58,buff1_reg__2_n_59,buff1_reg__2_n_60,buff1_reg__2_n_61,buff1_reg__2_n_62,buff1_reg__2_n_63,buff1_reg__2_n_64,buff1_reg__2_n_65,buff1_reg__2_n_66,buff1_reg__2_n_67,buff1_reg__2_n_68,buff1_reg__2_n_69,buff1_reg__2_n_70,buff1_reg__2_n_71,buff1_reg__2_n_72,buff1_reg__2_n_73,buff1_reg__2_n_74,buff1_reg__2_n_75,buff1_reg__2_n_76,buff1_reg__2_n_77,buff1_reg__2_n_78,buff1_reg__2_n_79,buff1_reg__2_n_80,buff1_reg__2_n_81,buff1_reg__2_n_82,buff1_reg__2_n_83,buff1_reg__2_n_84,buff1_reg__2_n_85,buff1_reg__2_n_86,buff1_reg__2_n_87,buff1_reg__2_n_88,buff1_reg__2_n_89,buff1_reg__2_n_90,buff1_reg__2_n_91,buff1_reg__2_n_92,buff1_reg__2_n_93,buff1_reg__2_n_94,buff1_reg__2_n_95,buff1_reg__2_n_96,buff1_reg__2_n_97,buff1_reg__2_n_98,buff1_reg__2_n_99,buff1_reg__2_n_100,buff1_reg__2_n_101,buff1_reg__2_n_102,buff1_reg__2_n_103,buff1_reg__2_n_104,buff1_reg__2_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg__2_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg__2_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__2_n_106,tmp_product__2_n_107,tmp_product__2_n_108,tmp_product__2_n_109,tmp_product__2_n_110,tmp_product__2_n_111,tmp_product__2_n_112,tmp_product__2_n_113,tmp_product__2_n_114,tmp_product__2_n_115,tmp_product__2_n_116,tmp_product__2_n_117,tmp_product__2_n_118,tmp_product__2_n_119,tmp_product__2_n_120,tmp_product__2_n_121,tmp_product__2_n_122,tmp_product__2_n_123,tmp_product__2_n_124,tmp_product__2_n_125,tmp_product__2_n_126,tmp_product__2_n_127,tmp_product__2_n_128,tmp_product__2_n_129,tmp_product__2_n_130,tmp_product__2_n_131,tmp_product__2_n_132,tmp_product__2_n_133,tmp_product__2_n_134,tmp_product__2_n_135,tmp_product__2_n_136,tmp_product__2_n_137,tmp_product__2_n_138,tmp_product__2_n_139,tmp_product__2_n_140,tmp_product__2_n_141,tmp_product__2_n_142,tmp_product__2_n_143,tmp_product__2_n_144,tmp_product__2_n_145,tmp_product__2_n_146,tmp_product__2_n_147,tmp_product__2_n_148,tmp_product__2_n_149,tmp_product__2_n_150,tmp_product__2_n_151,tmp_product__2_n_152,tmp_product__2_n_153}),
        .PCOUT(NLW_buff1_reg__2_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg__2_UNDERFLOW_UNCONNECTED));
  (* HLUTNM = "lutpair38" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_10 
       (.I0(\buff2_reg[77]_i_20_n_6 ),
        .I1(buff0_reg_n_99),
        .I2(buff1_reg_n_99),
        .I3(\buff2[77]_i_6_n_0 ),
        .O(\buff2[77]_i_10_n_0 ));
  (* HLUTNM = "lutpair22" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_100 
       (.I0(buff1_reg__0_n_104),
        .I1(buff1_reg__1_n_87),
        .I2(buff1_reg__2_n_70),
        .O(\buff2[77]_i_100_n_0 ));
  (* HLUTNM = "lutpair26" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_101 
       (.I0(buff1_reg__0_n_100),
        .I1(buff1_reg__1_n_83),
        .I2(buff1_reg__2_n_66),
        .I3(\buff2[77]_i_97_n_0 ),
        .O(\buff2[77]_i_101_n_0 ));
  (* HLUTNM = "lutpair25" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_102 
       (.I0(buff1_reg__0_n_101),
        .I1(buff1_reg__1_n_84),
        .I2(buff1_reg__2_n_67),
        .I3(\buff2[77]_i_98_n_0 ),
        .O(\buff2[77]_i_102_n_0 ));
  (* HLUTNM = "lutpair24" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_103 
       (.I0(buff1_reg__0_n_102),
        .I1(buff1_reg__1_n_85),
        .I2(buff1_reg__2_n_68),
        .I3(\buff2[77]_i_99_n_0 ),
        .O(\buff2[77]_i_103_n_0 ));
  (* HLUTNM = "lutpair23" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_104 
       (.I0(buff1_reg__0_n_103),
        .I1(buff1_reg__1_n_86),
        .I2(buff1_reg__2_n_69),
        .I3(\buff2[77]_i_100_n_0 ),
        .O(\buff2[77]_i_104_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_106 
       (.I0(buff1_reg__2_n_74),
        .I1(buff1_reg__1_n_91),
        .O(\buff2[77]_i_106_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_107 
       (.I0(buff1_reg__2_n_75),
        .I1(buff1_reg__1_n_92),
        .O(\buff2[77]_i_107_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_108 
       (.I0(buff1_reg__2_n_76),
        .I1(buff1_reg__1_n_93),
        .O(\buff2[77]_i_108_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_109 
       (.I0(buff1_reg__2_n_77),
        .I1(buff1_reg__1_n_94),
        .O(\buff2[77]_i_109_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_111 
       (.I0(buff1_reg__2_n_78),
        .I1(buff1_reg__1_n_95),
        .O(\buff2[77]_i_111_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_112 
       (.I0(buff1_reg__2_n_79),
        .I1(buff1_reg__1_n_96),
        .O(\buff2[77]_i_112_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_113 
       (.I0(buff1_reg__2_n_80),
        .I1(buff1_reg__1_n_97),
        .O(\buff2[77]_i_113_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_114 
       (.I0(buff1_reg__2_n_81),
        .I1(buff1_reg__1_n_98),
        .O(\buff2[77]_i_114_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_116 
       (.I0(buff1_reg__2_n_82),
        .I1(buff1_reg__1_n_99),
        .O(\buff2[77]_i_116_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_117 
       (.I0(buff1_reg__2_n_83),
        .I1(buff1_reg__1_n_100),
        .O(\buff2[77]_i_117_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_118 
       (.I0(buff1_reg__2_n_84),
        .I1(buff1_reg__1_n_101),
        .O(\buff2[77]_i_118_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_119 
       (.I0(buff1_reg__2_n_85),
        .I1(buff1_reg__1_n_102),
        .O(\buff2[77]_i_119_n_0 ));
  (* HLUTNM = "lutpair36" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_12 
       (.I0(\buff2_reg[77]_i_27_n_4 ),
        .I1(buff0_reg_n_101),
        .I2(buff1_reg_n_101),
        .O(\buff2[77]_i_12_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_120 
       (.I0(buff1_reg__2_n_86),
        .I1(buff1_reg__1_n_103),
        .O(\buff2[77]_i_120_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_121 
       (.I0(buff1_reg__2_n_87),
        .I1(buff1_reg__1_n_104),
        .O(\buff2[77]_i_121_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_122 
       (.I0(buff1_reg__2_n_88),
        .I1(buff1_reg__1_n_105),
        .O(\buff2[77]_i_122_n_0 ));
  (* HLUTNM = "lutpair35" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_13 
       (.I0(\buff2_reg[77]_i_27_n_5 ),
        .I1(buff0_reg_n_102),
        .I2(buff1_reg_n_102),
        .O(\buff2[77]_i_13_n_0 ));
  (* HLUTNM = "lutpair34" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_14 
       (.I0(\buff2_reg[77]_i_27_n_6 ),
        .I1(buff0_reg_n_103),
        .I2(buff1_reg_n_103),
        .O(\buff2[77]_i_14_n_0 ));
  (* HLUTNM = "lutpair33" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_15 
       (.I0(\buff2_reg[77]_i_27_n_7 ),
        .I1(buff0_reg_n_104),
        .I2(buff1_reg_n_104),
        .O(\buff2[77]_i_15_n_0 ));
  (* HLUTNM = "lutpair37" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_16 
       (.I0(\buff2_reg[77]_i_20_n_7 ),
        .I1(buff0_reg_n_100),
        .I2(buff1_reg_n_100),
        .I3(\buff2[77]_i_12_n_0 ),
        .O(\buff2[77]_i_16_n_0 ));
  (* HLUTNM = "lutpair36" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_17 
       (.I0(\buff2_reg[77]_i_27_n_4 ),
        .I1(buff0_reg_n_101),
        .I2(buff1_reg_n_101),
        .I3(\buff2[77]_i_13_n_0 ),
        .O(\buff2[77]_i_17_n_0 ));
  (* HLUTNM = "lutpair35" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_18 
       (.I0(\buff2_reg[77]_i_27_n_5 ),
        .I1(buff0_reg_n_102),
        .I2(buff1_reg_n_102),
        .I3(\buff2[77]_i_14_n_0 ),
        .O(\buff2[77]_i_18_n_0 ));
  (* HLUTNM = "lutpair34" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_19 
       (.I0(\buff2_reg[77]_i_27_n_6 ),
        .I1(buff0_reg_n_103),
        .I2(buff1_reg_n_103),
        .I3(\buff2[77]_i_15_n_0 ),
        .O(\buff2[77]_i_19_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[77]_i_22 
       (.I0(buff1_reg_n_104),
        .I1(\buff2_reg[77]_i_27_n_7 ),
        .I2(buff0_reg_n_104),
        .O(\buff2[77]_i_22_n_0 ));
  (* HLUTNM = "lutpair33" *) 
  LUT5 #(
    .INIT(32'h69969696)) 
    \buff2[77]_i_23 
       (.I0(\buff2_reg[77]_i_27_n_7 ),
        .I1(buff0_reg_n_104),
        .I2(buff1_reg_n_104),
        .I3(buff0_reg_n_105),
        .I4(\buff2_reg[77]_i_41_n_4 ),
        .O(\buff2[77]_i_23_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[77]_i_24 
       (.I0(\buff2_reg[77]_i_41_n_4 ),
        .I1(buff0_reg_n_105),
        .I2(buff1_reg_n_105),
        .O(\buff2[77]_i_24_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_25 
       (.I0(\buff1_reg[16]__0_n_0 ),
        .I1(\buff2_reg[77]_i_41_n_5 ),
        .O(\buff2[77]_i_25_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_26 
       (.I0(\buff1_reg[15]__0_n_0 ),
        .I1(\buff2_reg[77]_i_41_n_6 ),
        .O(\buff2[77]_i_26_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_28 
       (.I0(buff1_reg__0_n_82),
        .I1(buff1_reg__1_n_65),
        .I2(buff1_reg__0_n_81),
        .I3(buff1_reg__1_n_64),
        .O(\buff2[77]_i_28_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_29 
       (.I0(buff1_reg__0_n_83),
        .I1(buff1_reg__1_n_66),
        .I2(buff1_reg__0_n_82),
        .I3(buff1_reg__1_n_65),
        .O(\buff2[77]_i_29_n_0 ));
  (* HLUTNM = "lutpair40" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_3 
       (.I0(\buff2_reg[77]_i_20_n_4 ),
        .I1(buff0_reg_n_97),
        .I2(buff1_reg_n_97),
        .O(\buff2[77]_i_3_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_30 
       (.I0(buff1_reg__0_n_84),
        .I1(buff1_reg__1_n_67),
        .I2(buff1_reg__0_n_83),
        .I3(buff1_reg__1_n_66),
        .O(\buff2[77]_i_30_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_31 
       (.I0(buff1_reg__0_n_85),
        .I1(buff1_reg__1_n_68),
        .I2(buff1_reg__0_n_84),
        .I3(buff1_reg__1_n_67),
        .O(\buff2[77]_i_31_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_32 
       (.I0(buff1_reg__1_n_65),
        .I1(buff1_reg__0_n_82),
        .I2(buff1_reg__1_n_63),
        .I3(buff1_reg__0_n_80),
        .I4(buff1_reg__1_n_64),
        .I5(buff1_reg__0_n_81),
        .O(\buff2[77]_i_32_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_33 
       (.I0(buff1_reg__1_n_66),
        .I1(buff1_reg__0_n_83),
        .I2(buff1_reg__1_n_64),
        .I3(buff1_reg__0_n_81),
        .I4(buff1_reg__1_n_65),
        .I5(buff1_reg__0_n_82),
        .O(\buff2[77]_i_33_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_34 
       (.I0(buff1_reg__1_n_67),
        .I1(buff1_reg__0_n_84),
        .I2(buff1_reg__1_n_65),
        .I3(buff1_reg__0_n_82),
        .I4(buff1_reg__1_n_66),
        .I5(buff1_reg__0_n_83),
        .O(\buff2[77]_i_34_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_35 
       (.I0(buff1_reg__1_n_68),
        .I1(buff1_reg__0_n_85),
        .I2(buff1_reg__1_n_66),
        .I3(buff1_reg__0_n_83),
        .I4(buff1_reg__1_n_67),
        .I5(buff1_reg__0_n_84),
        .O(\buff2[77]_i_35_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_37 
       (.I0(\buff1_reg[14]__0_n_0 ),
        .I1(\buff2_reg[77]_i_41_n_7 ),
        .O(\buff2[77]_i_37_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_38 
       (.I0(\buff1_reg[13]__0_n_0 ),
        .I1(\buff2_reg[77]_i_55_n_4 ),
        .O(\buff2[77]_i_38_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_39 
       (.I0(\buff1_reg[12]__0_n_0 ),
        .I1(\buff2_reg[77]_i_55_n_5 ),
        .O(\buff2[77]_i_39_n_0 ));
  (* HLUTNM = "lutpair39" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_4 
       (.I0(\buff2_reg[77]_i_20_n_5 ),
        .I1(buff0_reg_n_98),
        .I2(buff1_reg_n_98),
        .O(\buff2[77]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_40 
       (.I0(\buff1_reg[11]__0_n_0 ),
        .I1(\buff2_reg[77]_i_55_n_6 ),
        .O(\buff2[77]_i_40_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_42 
       (.I0(buff1_reg__0_n_86),
        .I1(buff1_reg__1_n_69),
        .I2(buff1_reg__0_n_85),
        .I3(buff1_reg__1_n_68),
        .O(\buff2[77]_i_42_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_43 
       (.I0(buff1_reg__0_n_87),
        .I1(buff1_reg__1_n_70),
        .I2(buff1_reg__0_n_86),
        .I3(buff1_reg__1_n_69),
        .O(\buff2[77]_i_43_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_44 
       (.I0(buff1_reg__0_n_88),
        .I1(buff1_reg__1_n_71),
        .I2(buff1_reg__0_n_87),
        .I3(buff1_reg__1_n_70),
        .O(\buff2[77]_i_44_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_45 
       (.I0(buff1_reg__0_n_89),
        .I1(buff1_reg__1_n_72),
        .I2(buff1_reg__0_n_88),
        .I3(buff1_reg__1_n_71),
        .O(\buff2[77]_i_45_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_46 
       (.I0(buff1_reg__1_n_69),
        .I1(buff1_reg__0_n_86),
        .I2(buff1_reg__1_n_67),
        .I3(buff1_reg__0_n_84),
        .I4(buff1_reg__1_n_68),
        .I5(buff1_reg__0_n_85),
        .O(\buff2[77]_i_46_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_47 
       (.I0(buff1_reg__1_n_70),
        .I1(buff1_reg__0_n_87),
        .I2(buff1_reg__1_n_68),
        .I3(buff1_reg__0_n_85),
        .I4(buff1_reg__1_n_69),
        .I5(buff1_reg__0_n_86),
        .O(\buff2[77]_i_47_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_48 
       (.I0(buff1_reg__1_n_71),
        .I1(buff1_reg__0_n_88),
        .I2(buff1_reg__1_n_69),
        .I3(buff1_reg__0_n_86),
        .I4(buff1_reg__1_n_70),
        .I5(buff1_reg__0_n_87),
        .O(\buff2[77]_i_48_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_49 
       (.I0(buff1_reg__1_n_72),
        .I1(buff1_reg__0_n_89),
        .I2(buff1_reg__1_n_70),
        .I3(buff1_reg__0_n_87),
        .I4(buff1_reg__1_n_71),
        .I5(buff1_reg__0_n_88),
        .O(\buff2[77]_i_49_n_0 ));
  (* HLUTNM = "lutpair38" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_5 
       (.I0(\buff2_reg[77]_i_20_n_6 ),
        .I1(buff0_reg_n_99),
        .I2(buff1_reg_n_99),
        .O(\buff2[77]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_51 
       (.I0(\buff1_reg[10]__0_n_0 ),
        .I1(\buff2_reg[77]_i_55_n_7 ),
        .O(\buff2[77]_i_51_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_52 
       (.I0(\buff1_reg[9]__0_n_0 ),
        .I1(\buff2_reg[77]_i_69_n_4 ),
        .O(\buff2[77]_i_52_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_53 
       (.I0(\buff1_reg[8]__0_n_0 ),
        .I1(\buff2_reg[77]_i_69_n_5 ),
        .O(\buff2[77]_i_53_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_54 
       (.I0(\buff1_reg[7]__0_n_0 ),
        .I1(\buff2_reg[77]_i_69_n_6 ),
        .O(\buff2[77]_i_54_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_56 
       (.I0(buff1_reg__0_n_90),
        .I1(buff1_reg__1_n_73),
        .I2(buff1_reg__0_n_89),
        .I3(buff1_reg__1_n_72),
        .O(\buff2[77]_i_56_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_57 
       (.I0(buff1_reg__0_n_91),
        .I1(buff1_reg__1_n_74),
        .I2(buff1_reg__0_n_90),
        .I3(buff1_reg__1_n_73),
        .O(\buff2[77]_i_57_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[77]_i_58 
       (.I0(buff1_reg__0_n_92),
        .I1(buff1_reg__1_n_75),
        .I2(buff1_reg__0_n_91),
        .I3(buff1_reg__1_n_74),
        .O(\buff2[77]_i_58_n_0 ));
  LUT3 #(
    .INIT(8'h09)) 
    \buff2[77]_i_59 
       (.I0(buff1_reg__0_n_92),
        .I1(buff1_reg__1_n_75),
        .I2(buff1_reg__2_n_58),
        .O(\buff2[77]_i_59_n_0 ));
  (* HLUTNM = "lutpair37" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_6 
       (.I0(\buff2_reg[77]_i_20_n_7 ),
        .I1(buff0_reg_n_100),
        .I2(buff1_reg_n_100),
        .O(\buff2[77]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_60 
       (.I0(buff1_reg__1_n_73),
        .I1(buff1_reg__0_n_90),
        .I2(buff1_reg__1_n_71),
        .I3(buff1_reg__0_n_88),
        .I4(buff1_reg__1_n_72),
        .I5(buff1_reg__0_n_89),
        .O(\buff2[77]_i_60_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_61 
       (.I0(buff1_reg__1_n_74),
        .I1(buff1_reg__0_n_91),
        .I2(buff1_reg__1_n_72),
        .I3(buff1_reg__0_n_89),
        .I4(buff1_reg__1_n_73),
        .I5(buff1_reg__0_n_90),
        .O(\buff2[77]_i_61_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[77]_i_62 
       (.I0(buff1_reg__1_n_75),
        .I1(buff1_reg__0_n_92),
        .I2(buff1_reg__1_n_73),
        .I3(buff1_reg__0_n_90),
        .I4(buff1_reg__1_n_74),
        .I5(buff1_reg__0_n_91),
        .O(\buff2[77]_i_62_n_0 ));
  LUT5 #(
    .INIT(32'h693C3C96)) 
    \buff2[77]_i_63 
       (.I0(buff1_reg__2_n_58),
        .I1(buff1_reg__1_n_74),
        .I2(buff1_reg__0_n_91),
        .I3(buff1_reg__1_n_75),
        .I4(buff1_reg__0_n_92),
        .O(\buff2[77]_i_63_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_65 
       (.I0(\buff1_reg[6]__0_n_0 ),
        .I1(\buff2_reg[77]_i_69_n_7 ),
        .O(\buff2[77]_i_65_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_66 
       (.I0(\buff1_reg[5]__0_n_0 ),
        .I1(\buff2_reg[77]_i_82_n_4 ),
        .O(\buff2[77]_i_66_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_67 
       (.I0(\buff1_reg[4]__0_n_0 ),
        .I1(\buff2_reg[77]_i_82_n_5 ),
        .O(\buff2[77]_i_67_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_68 
       (.I0(\buff1_reg[3]__0_n_0 ),
        .I1(\buff2_reg[77]_i_82_n_6 ),
        .O(\buff2[77]_i_68_n_0 ));
  (* HLUTNM = "lutpair41" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_7 
       (.I0(\buff2_reg[81]_i_9_n_7 ),
        .I1(buff0_reg_n_96),
        .I2(buff1_reg_n_96),
        .I3(\buff2[77]_i_3_n_0 ),
        .O(\buff2[77]_i_7_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[77]_i_70 
       (.I0(buff1_reg__2_n_58),
        .I1(buff1_reg__1_n_75),
        .I2(buff1_reg__0_n_92),
        .O(\buff2[77]_i_70_n_0 ));
  (* HLUTNM = "lutpair32" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_71 
       (.I0(buff1_reg__0_n_94),
        .I1(buff1_reg__1_n_77),
        .I2(buff1_reg__2_n_60),
        .O(\buff2[77]_i_71_n_0 ));
  (* HLUTNM = "lutpair31" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_72 
       (.I0(buff1_reg__0_n_95),
        .I1(buff1_reg__1_n_78),
        .I2(buff1_reg__2_n_61),
        .O(\buff2[77]_i_72_n_0 ));
  (* HLUTNM = "lutpair30" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_73 
       (.I0(buff1_reg__0_n_96),
        .I1(buff1_reg__1_n_79),
        .I2(buff1_reg__2_n_62),
        .O(\buff2[77]_i_73_n_0 ));
  LUT6 #(
    .INIT(64'h6969699669969696)) 
    \buff2[77]_i_74 
       (.I0(buff1_reg__2_n_58),
        .I1(buff1_reg__1_n_75),
        .I2(buff1_reg__0_n_92),
        .I3(buff1_reg__2_n_59),
        .I4(buff1_reg__1_n_76),
        .I5(buff1_reg__0_n_93),
        .O(\buff2[77]_i_74_n_0 ));
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_75 
       (.I0(\buff2[77]_i_71_n_0 ),
        .I1(buff1_reg__1_n_76),
        .I2(buff1_reg__0_n_93),
        .I3(buff1_reg__2_n_59),
        .O(\buff2[77]_i_75_n_0 ));
  (* HLUTNM = "lutpair32" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_76 
       (.I0(buff1_reg__0_n_94),
        .I1(buff1_reg__1_n_77),
        .I2(buff1_reg__2_n_60),
        .I3(\buff2[77]_i_72_n_0 ),
        .O(\buff2[77]_i_76_n_0 ));
  (* HLUTNM = "lutpair31" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_77 
       (.I0(buff1_reg__0_n_95),
        .I1(buff1_reg__1_n_78),
        .I2(buff1_reg__2_n_61),
        .I3(\buff2[77]_i_73_n_0 ),
        .O(\buff2[77]_i_77_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_78 
       (.I0(\buff1_reg[2]__0_n_0 ),
        .I1(\buff2_reg[77]_i_82_n_7 ),
        .O(\buff2[77]_i_78_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_79 
       (.I0(\buff1_reg[1]__0_n_0 ),
        .I1(\buff2_reg[77]_i_81_n_4 ),
        .O(\buff2[77]_i_79_n_0 ));
  (* HLUTNM = "lutpair40" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_8 
       (.I0(\buff2_reg[77]_i_20_n_4 ),
        .I1(buff0_reg_n_97),
        .I2(buff1_reg_n_97),
        .I3(\buff2[77]_i_4_n_0 ),
        .O(\buff2[77]_i_8_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_80 
       (.I0(\buff1_reg[0]__0_n_0 ),
        .I1(\buff2_reg[77]_i_81_n_5 ),
        .O(\buff2[77]_i_80_n_0 ));
  (* HLUTNM = "lutpair29" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_83 
       (.I0(buff1_reg__0_n_97),
        .I1(buff1_reg__1_n_80),
        .I2(buff1_reg__2_n_63),
        .O(\buff2[77]_i_83_n_0 ));
  (* HLUTNM = "lutpair28" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_84 
       (.I0(buff1_reg__0_n_98),
        .I1(buff1_reg__1_n_81),
        .I2(buff1_reg__2_n_64),
        .O(\buff2[77]_i_84_n_0 ));
  (* HLUTNM = "lutpair27" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_85 
       (.I0(buff1_reg__0_n_99),
        .I1(buff1_reg__1_n_82),
        .I2(buff1_reg__2_n_65),
        .O(\buff2[77]_i_85_n_0 ));
  (* HLUTNM = "lutpair26" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_86 
       (.I0(buff1_reg__0_n_100),
        .I1(buff1_reg__1_n_83),
        .I2(buff1_reg__2_n_66),
        .O(\buff2[77]_i_86_n_0 ));
  (* HLUTNM = "lutpair30" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_87 
       (.I0(buff1_reg__0_n_96),
        .I1(buff1_reg__1_n_79),
        .I2(buff1_reg__2_n_62),
        .I3(\buff2[77]_i_83_n_0 ),
        .O(\buff2[77]_i_87_n_0 ));
  (* HLUTNM = "lutpair29" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_88 
       (.I0(buff1_reg__0_n_97),
        .I1(buff1_reg__1_n_80),
        .I2(buff1_reg__2_n_63),
        .I3(\buff2[77]_i_84_n_0 ),
        .O(\buff2[77]_i_88_n_0 ));
  (* HLUTNM = "lutpair28" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_89 
       (.I0(buff1_reg__0_n_98),
        .I1(buff1_reg__1_n_81),
        .I2(buff1_reg__2_n_64),
        .I3(\buff2[77]_i_85_n_0 ),
        .O(\buff2[77]_i_89_n_0 ));
  (* HLUTNM = "lutpair39" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_9 
       (.I0(\buff2_reg[77]_i_20_n_5 ),
        .I1(buff0_reg_n_98),
        .I2(buff1_reg_n_98),
        .I3(\buff2[77]_i_5_n_0 ),
        .O(\buff2[77]_i_9_n_0 ));
  (* HLUTNM = "lutpair27" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[77]_i_90 
       (.I0(buff1_reg__0_n_99),
        .I1(buff1_reg__1_n_82),
        .I2(buff1_reg__2_n_65),
        .I3(\buff2[77]_i_86_n_0 ),
        .O(\buff2[77]_i_90_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[77]_i_92 
       (.I0(buff1_reg__2_n_70),
        .I1(buff1_reg__0_n_104),
        .I2(buff1_reg__1_n_87),
        .O(\buff2[77]_i_92_n_0 ));
  (* HLUTNM = "lutpair22" *) 
  LUT5 #(
    .INIT(32'h69969696)) 
    \buff2[77]_i_93 
       (.I0(buff1_reg__0_n_104),
        .I1(buff1_reg__1_n_87),
        .I2(buff1_reg__2_n_70),
        .I3(buff1_reg__1_n_88),
        .I4(buff1_reg__0_n_105),
        .O(\buff2[77]_i_93_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[77]_i_94 
       (.I0(buff1_reg__0_n_105),
        .I1(buff1_reg__1_n_88),
        .I2(buff1_reg__2_n_71),
        .O(\buff2[77]_i_94_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_95 
       (.I0(buff1_reg__2_n_72),
        .I1(buff1_reg__1_n_89),
        .O(\buff2[77]_i_95_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[77]_i_96 
       (.I0(buff1_reg__2_n_73),
        .I1(buff1_reg__1_n_90),
        .O(\buff2[77]_i_96_n_0 ));
  (* HLUTNM = "lutpair25" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_97 
       (.I0(buff1_reg__0_n_101),
        .I1(buff1_reg__1_n_84),
        .I2(buff1_reg__2_n_67),
        .O(\buff2[77]_i_97_n_0 ));
  (* HLUTNM = "lutpair24" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_98 
       (.I0(buff1_reg__0_n_102),
        .I1(buff1_reg__1_n_85),
        .I2(buff1_reg__2_n_68),
        .O(\buff2[77]_i_98_n_0 ));
  (* HLUTNM = "lutpair23" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[77]_i_99 
       (.I0(buff1_reg__0_n_103),
        .I1(buff1_reg__1_n_86),
        .I2(buff1_reg__2_n_69),
        .O(\buff2[77]_i_99_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[81]_i_11 
       (.I0(buff1_reg__0_n_78),
        .I1(buff1_reg__1_n_61),
        .I2(buff1_reg__0_n_77),
        .I3(buff1_reg__1_n_60),
        .O(\buff2[81]_i_11_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[81]_i_12 
       (.I0(buff1_reg__0_n_79),
        .I1(buff1_reg__1_n_62),
        .I2(buff1_reg__0_n_78),
        .I3(buff1_reg__1_n_61),
        .O(\buff2[81]_i_12_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[81]_i_13 
       (.I0(buff1_reg__0_n_80),
        .I1(buff1_reg__1_n_63),
        .I2(buff1_reg__0_n_79),
        .I3(buff1_reg__1_n_62),
        .O(\buff2[81]_i_13_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[81]_i_14 
       (.I0(buff1_reg__0_n_81),
        .I1(buff1_reg__1_n_64),
        .I2(buff1_reg__0_n_80),
        .I3(buff1_reg__1_n_63),
        .O(\buff2[81]_i_14_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[81]_i_15 
       (.I0(buff1_reg__1_n_61),
        .I1(buff1_reg__0_n_78),
        .I2(buff1_reg__1_n_59),
        .I3(buff1_reg__0_n_76),
        .I4(buff1_reg__1_n_60),
        .I5(buff1_reg__0_n_77),
        .O(\buff2[81]_i_15_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[81]_i_16 
       (.I0(buff1_reg__1_n_62),
        .I1(buff1_reg__0_n_79),
        .I2(buff1_reg__1_n_60),
        .I3(buff1_reg__0_n_77),
        .I4(buff1_reg__1_n_61),
        .I5(buff1_reg__0_n_78),
        .O(\buff2[81]_i_16_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[81]_i_17 
       (.I0(buff1_reg__1_n_63),
        .I1(buff1_reg__0_n_80),
        .I2(buff1_reg__1_n_61),
        .I3(buff1_reg__0_n_78),
        .I4(buff1_reg__1_n_62),
        .I5(buff1_reg__0_n_79),
        .O(\buff2[81]_i_17_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[81]_i_18 
       (.I0(buff1_reg__1_n_64),
        .I1(buff1_reg__0_n_81),
        .I2(buff1_reg__1_n_62),
        .I3(buff1_reg__0_n_79),
        .I4(buff1_reg__1_n_63),
        .I5(buff1_reg__0_n_80),
        .O(\buff2[81]_i_18_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[81]_i_19 
       (.I0(buff1_reg__1_n_60),
        .I1(buff1_reg__0_n_77),
        .I2(buff1_reg__1_n_58),
        .I3(buff1_reg__0_n_75),
        .I4(buff1_reg__1_n_59),
        .I5(buff1_reg__0_n_76),
        .O(\buff2[81]_i_19_n_0 ));
  (* HLUTNM = "lutpair43" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[81]_i_2 
       (.I0(\buff2_reg[81]_i_9_n_5 ),
        .I1(buff0_reg_n_94),
        .I2(buff1_reg_n_94),
        .O(\buff2[81]_i_2_n_0 ));
  (* HLUTNM = "lutpair42" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[81]_i_3 
       (.I0(\buff2_reg[81]_i_9_n_6 ),
        .I1(buff0_reg_n_95),
        .I2(buff1_reg_n_95),
        .O(\buff2[81]_i_3_n_0 ));
  (* HLUTNM = "lutpair41" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[81]_i_4 
       (.I0(\buff2_reg[81]_i_9_n_7 ),
        .I1(buff0_reg_n_96),
        .I2(buff1_reg_n_96),
        .O(\buff2[81]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \buff2[81]_i_5 
       (.I0(buff1_reg_n_93),
        .I1(buff0_reg_n_93),
        .I2(\buff2_reg[81]_i_9_n_4 ),
        .I3(buff0_reg_n_92),
        .I4(\buff2_reg[81]_i_10_n_7 ),
        .I5(buff1_reg_n_92),
        .O(\buff2[81]_i_5_n_0 ));
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[81]_i_6 
       (.I0(\buff2[81]_i_2_n_0 ),
        .I1(buff0_reg_n_93),
        .I2(\buff2_reg[81]_i_9_n_4 ),
        .I3(buff1_reg_n_93),
        .O(\buff2[81]_i_6_n_0 ));
  (* HLUTNM = "lutpair43" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[81]_i_7 
       (.I0(\buff2_reg[81]_i_9_n_5 ),
        .I1(buff0_reg_n_94),
        .I2(buff1_reg_n_94),
        .I3(\buff2[81]_i_3_n_0 ),
        .O(\buff2[81]_i_7_n_0 ));
  (* HLUTNM = "lutpair42" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[81]_i_8 
       (.I0(\buff2_reg[81]_i_9_n_6 ),
        .I1(buff0_reg_n_95),
        .I2(buff1_reg_n_95),
        .I3(\buff2[81]_i_4_n_0 ),
        .O(\buff2[81]_i_8_n_0 ));
  FDRE \buff2_reg[74] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[74]),
        .Q(ap_return[0]),
        .R(1'b0));
  FDRE \buff2_reg[75] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[75]),
        .Q(ap_return[1]),
        .R(1'b0));
  FDRE \buff2_reg[76] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[76]),
        .Q(ap_return[2]),
        .R(1'b0));
  FDRE \buff2_reg[77] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[77]),
        .Q(ap_return[3]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_1 
       (.CI(\buff2_reg[77]_i_2_n_0 ),
        .CO({\buff2_reg[77]_i_1_n_0 ,\buff2_reg[77]_i_1_n_1 ,\buff2_reg[77]_i_1_n_2 ,\buff2_reg[77]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_3_n_0 ,\buff2[77]_i_4_n_0 ,\buff2[77]_i_5_n_0 ,\buff2[77]_i_6_n_0 }),
        .O(buff1_reg__5[77:74]),
        .S({\buff2[77]_i_7_n_0 ,\buff2[77]_i_8_n_0 ,\buff2[77]_i_9_n_0 ,\buff2[77]_i_10_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_105 
       (.CI(\buff2_reg[77]_i_110_n_0 ),
        .CO({\buff2_reg[77]_i_105_n_0 ,\buff2_reg[77]_i_105_n_1 ,\buff2_reg[77]_i_105_n_2 ,\buff2_reg[77]_i_105_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_78,buff1_reg__2_n_79,buff1_reg__2_n_80,buff1_reg__2_n_81}),
        .O(\NLW_buff2_reg[77]_i_105_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_111_n_0 ,\buff2[77]_i_112_n_0 ,\buff2[77]_i_113_n_0 ,\buff2[77]_i_114_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_11 
       (.CI(\buff2_reg[77]_i_21_n_0 ),
        .CO({\buff2_reg[77]_i_11_n_0 ,\buff2_reg[77]_i_11_n_1 ,\buff2_reg[77]_i_11_n_2 ,\buff2_reg[77]_i_11_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_22_n_0 ,buff1_reg_n_105,\buff1_reg[16]__0_n_0 ,\buff1_reg[15]__0_n_0 }),
        .O(\NLW_buff2_reg[77]_i_11_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_23_n_0 ,\buff2[77]_i_24_n_0 ,\buff2[77]_i_25_n_0 ,\buff2[77]_i_26_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_110 
       (.CI(\buff2_reg[77]_i_115_n_0 ),
        .CO({\buff2_reg[77]_i_110_n_0 ,\buff2_reg[77]_i_110_n_1 ,\buff2_reg[77]_i_110_n_2 ,\buff2_reg[77]_i_110_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_82,buff1_reg__2_n_83,buff1_reg__2_n_84,buff1_reg__2_n_85}),
        .O(\NLW_buff2_reg[77]_i_110_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_116_n_0 ,\buff2[77]_i_117_n_0 ,\buff2[77]_i_118_n_0 ,\buff2[77]_i_119_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_115 
       (.CI(1'b0),
        .CO({\buff2_reg[77]_i_115_n_0 ,\buff2_reg[77]_i_115_n_1 ,\buff2_reg[77]_i_115_n_2 ,\buff2_reg[77]_i_115_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_86,buff1_reg__2_n_87,buff1_reg__2_n_88,1'b0}),
        .O(\NLW_buff2_reg[77]_i_115_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_120_n_0 ,\buff2[77]_i_121_n_0 ,\buff2[77]_i_122_n_0 ,buff1_reg__2_n_89}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_2 
       (.CI(\buff2_reg[77]_i_11_n_0 ),
        .CO({\buff2_reg[77]_i_2_n_0 ,\buff2_reg[77]_i_2_n_1 ,\buff2_reg[77]_i_2_n_2 ,\buff2_reg[77]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_12_n_0 ,\buff2[77]_i_13_n_0 ,\buff2[77]_i_14_n_0 ,\buff2[77]_i_15_n_0 }),
        .O(\NLW_buff2_reg[77]_i_2_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_16_n_0 ,\buff2[77]_i_17_n_0 ,\buff2[77]_i_18_n_0 ,\buff2[77]_i_19_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_20 
       (.CI(\buff2_reg[77]_i_27_n_0 ),
        .CO({\buff2_reg[77]_i_20_n_0 ,\buff2_reg[77]_i_20_n_1 ,\buff2_reg[77]_i_20_n_2 ,\buff2_reg[77]_i_20_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_28_n_0 ,\buff2[77]_i_29_n_0 ,\buff2[77]_i_30_n_0 ,\buff2[77]_i_31_n_0 }),
        .O({\buff2_reg[77]_i_20_n_4 ,\buff2_reg[77]_i_20_n_5 ,\buff2_reg[77]_i_20_n_6 ,\buff2_reg[77]_i_20_n_7 }),
        .S({\buff2[77]_i_32_n_0 ,\buff2[77]_i_33_n_0 ,\buff2[77]_i_34_n_0 ,\buff2[77]_i_35_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_21 
       (.CI(\buff2_reg[77]_i_36_n_0 ),
        .CO({\buff2_reg[77]_i_21_n_0 ,\buff2_reg[77]_i_21_n_1 ,\buff2_reg[77]_i_21_n_2 ,\buff2_reg[77]_i_21_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff1_reg[14]__0_n_0 ,\buff1_reg[13]__0_n_0 ,\buff1_reg[12]__0_n_0 ,\buff1_reg[11]__0_n_0 }),
        .O(\NLW_buff2_reg[77]_i_21_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_37_n_0 ,\buff2[77]_i_38_n_0 ,\buff2[77]_i_39_n_0 ,\buff2[77]_i_40_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_27 
       (.CI(\buff2_reg[77]_i_41_n_0 ),
        .CO({\buff2_reg[77]_i_27_n_0 ,\buff2_reg[77]_i_27_n_1 ,\buff2_reg[77]_i_27_n_2 ,\buff2_reg[77]_i_27_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_42_n_0 ,\buff2[77]_i_43_n_0 ,\buff2[77]_i_44_n_0 ,\buff2[77]_i_45_n_0 }),
        .O({\buff2_reg[77]_i_27_n_4 ,\buff2_reg[77]_i_27_n_5 ,\buff2_reg[77]_i_27_n_6 ,\buff2_reg[77]_i_27_n_7 }),
        .S({\buff2[77]_i_46_n_0 ,\buff2[77]_i_47_n_0 ,\buff2[77]_i_48_n_0 ,\buff2[77]_i_49_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_36 
       (.CI(\buff2_reg[77]_i_50_n_0 ),
        .CO({\buff2_reg[77]_i_36_n_0 ,\buff2_reg[77]_i_36_n_1 ,\buff2_reg[77]_i_36_n_2 ,\buff2_reg[77]_i_36_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff1_reg[10]__0_n_0 ,\buff1_reg[9]__0_n_0 ,\buff1_reg[8]__0_n_0 ,\buff1_reg[7]__0_n_0 }),
        .O(\NLW_buff2_reg[77]_i_36_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_51_n_0 ,\buff2[77]_i_52_n_0 ,\buff2[77]_i_53_n_0 ,\buff2[77]_i_54_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_41 
       (.CI(\buff2_reg[77]_i_55_n_0 ),
        .CO({\buff2_reg[77]_i_41_n_0 ,\buff2_reg[77]_i_41_n_1 ,\buff2_reg[77]_i_41_n_2 ,\buff2_reg[77]_i_41_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_56_n_0 ,\buff2[77]_i_57_n_0 ,\buff2[77]_i_58_n_0 ,\buff2[77]_i_59_n_0 }),
        .O({\buff2_reg[77]_i_41_n_4 ,\buff2_reg[77]_i_41_n_5 ,\buff2_reg[77]_i_41_n_6 ,\buff2_reg[77]_i_41_n_7 }),
        .S({\buff2[77]_i_60_n_0 ,\buff2[77]_i_61_n_0 ,\buff2[77]_i_62_n_0 ,\buff2[77]_i_63_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_50 
       (.CI(\buff2_reg[77]_i_64_n_0 ),
        .CO({\buff2_reg[77]_i_50_n_0 ,\buff2_reg[77]_i_50_n_1 ,\buff2_reg[77]_i_50_n_2 ,\buff2_reg[77]_i_50_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff1_reg[6]__0_n_0 ,\buff1_reg[5]__0_n_0 ,\buff1_reg[4]__0_n_0 ,\buff1_reg[3]__0_n_0 }),
        .O(\NLW_buff2_reg[77]_i_50_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_65_n_0 ,\buff2[77]_i_66_n_0 ,\buff2[77]_i_67_n_0 ,\buff2[77]_i_68_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_55 
       (.CI(\buff2_reg[77]_i_69_n_0 ),
        .CO({\buff2_reg[77]_i_55_n_0 ,\buff2_reg[77]_i_55_n_1 ,\buff2_reg[77]_i_55_n_2 ,\buff2_reg[77]_i_55_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_70_n_0 ,\buff2[77]_i_71_n_0 ,\buff2[77]_i_72_n_0 ,\buff2[77]_i_73_n_0 }),
        .O({\buff2_reg[77]_i_55_n_4 ,\buff2_reg[77]_i_55_n_5 ,\buff2_reg[77]_i_55_n_6 ,\buff2_reg[77]_i_55_n_7 }),
        .S({\buff2[77]_i_74_n_0 ,\buff2[77]_i_75_n_0 ,\buff2[77]_i_76_n_0 ,\buff2[77]_i_77_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_64 
       (.CI(1'b0),
        .CO({\buff2_reg[77]_i_64_n_0 ,\buff2_reg[77]_i_64_n_1 ,\buff2_reg[77]_i_64_n_2 ,\buff2_reg[77]_i_64_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff1_reg[2]__0_n_0 ,\buff1_reg[1]__0_n_0 ,\buff1_reg[0]__0_n_0 ,1'b0}),
        .O(\NLW_buff2_reg[77]_i_64_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_78_n_0 ,\buff2[77]_i_79_n_0 ,\buff2[77]_i_80_n_0 ,\buff2_reg[77]_i_81_n_6 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_69 
       (.CI(\buff2_reg[77]_i_82_n_0 ),
        .CO({\buff2_reg[77]_i_69_n_0 ,\buff2_reg[77]_i_69_n_1 ,\buff2_reg[77]_i_69_n_2 ,\buff2_reg[77]_i_69_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_83_n_0 ,\buff2[77]_i_84_n_0 ,\buff2[77]_i_85_n_0 ,\buff2[77]_i_86_n_0 }),
        .O({\buff2_reg[77]_i_69_n_4 ,\buff2_reg[77]_i_69_n_5 ,\buff2_reg[77]_i_69_n_6 ,\buff2_reg[77]_i_69_n_7 }),
        .S({\buff2[77]_i_87_n_0 ,\buff2[77]_i_88_n_0 ,\buff2[77]_i_89_n_0 ,\buff2[77]_i_90_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_81 
       (.CI(\buff2_reg[77]_i_91_n_0 ),
        .CO({\buff2_reg[77]_i_81_n_0 ,\buff2_reg[77]_i_81_n_1 ,\buff2_reg[77]_i_81_n_2 ,\buff2_reg[77]_i_81_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_92_n_0 ,buff1_reg__2_n_71,buff1_reg__2_n_72,buff1_reg__2_n_73}),
        .O({\buff2_reg[77]_i_81_n_4 ,\buff2_reg[77]_i_81_n_5 ,\buff2_reg[77]_i_81_n_6 ,\NLW_buff2_reg[77]_i_81_O_UNCONNECTED [0]}),
        .S({\buff2[77]_i_93_n_0 ,\buff2[77]_i_94_n_0 ,\buff2[77]_i_95_n_0 ,\buff2[77]_i_96_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_82 
       (.CI(\buff2_reg[77]_i_81_n_0 ),
        .CO({\buff2_reg[77]_i_82_n_0 ,\buff2_reg[77]_i_82_n_1 ,\buff2_reg[77]_i_82_n_2 ,\buff2_reg[77]_i_82_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[77]_i_97_n_0 ,\buff2[77]_i_98_n_0 ,\buff2[77]_i_99_n_0 ,\buff2[77]_i_100_n_0 }),
        .O({\buff2_reg[77]_i_82_n_4 ,\buff2_reg[77]_i_82_n_5 ,\buff2_reg[77]_i_82_n_6 ,\buff2_reg[77]_i_82_n_7 }),
        .S({\buff2[77]_i_101_n_0 ,\buff2[77]_i_102_n_0 ,\buff2[77]_i_103_n_0 ,\buff2[77]_i_104_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[77]_i_91 
       (.CI(\buff2_reg[77]_i_105_n_0 ),
        .CO({\buff2_reg[77]_i_91_n_0 ,\buff2_reg[77]_i_91_n_1 ,\buff2_reg[77]_i_91_n_2 ,\buff2_reg[77]_i_91_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_74,buff1_reg__2_n_75,buff1_reg__2_n_76,buff1_reg__2_n_77}),
        .O(\NLW_buff2_reg[77]_i_91_O_UNCONNECTED [3:0]),
        .S({\buff2[77]_i_106_n_0 ,\buff2[77]_i_107_n_0 ,\buff2[77]_i_108_n_0 ,\buff2[77]_i_109_n_0 }));
  FDRE \buff2_reg[78] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[78]),
        .Q(ap_return[4]),
        .R(1'b0));
  FDRE \buff2_reg[79] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[79]),
        .Q(ap_return[5]),
        .R(1'b0));
  FDRE \buff2_reg[80] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[80]),
        .Q(ap_return[6]),
        .R(1'b0));
  FDRE \buff2_reg[81] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[81]),
        .Q(ap_return[7]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[81]_i_1 
       (.CI(\buff2_reg[77]_i_1_n_0 ),
        .CO({\NLW_buff2_reg[81]_i_1_CO_UNCONNECTED [3],\buff2_reg[81]_i_1_n_1 ,\buff2_reg[81]_i_1_n_2 ,\buff2_reg[81]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,\buff2[81]_i_2_n_0 ,\buff2[81]_i_3_n_0 ,\buff2[81]_i_4_n_0 }),
        .O(buff1_reg__5[81:78]),
        .S({\buff2[81]_i_5_n_0 ,\buff2[81]_i_6_n_0 ,\buff2[81]_i_7_n_0 ,\buff2[81]_i_8_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[81]_i_10 
       (.CI(\buff2_reg[81]_i_9_n_0 ),
        .CO(\NLW_buff2_reg[81]_i_10_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_buff2_reg[81]_i_10_O_UNCONNECTED [3:1],\buff2_reg[81]_i_10_n_7 }),
        .S({1'b0,1'b0,1'b0,\buff2[81]_i_19_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[81]_i_9 
       (.CI(\buff2_reg[77]_i_20_n_0 ),
        .CO({\buff2_reg[81]_i_9_n_0 ,\buff2_reg[81]_i_9_n_1 ,\buff2_reg[81]_i_9_n_2 ,\buff2_reg[81]_i_9_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[81]_i_11_n_0 ,\buff2[81]_i_12_n_0 ,\buff2[81]_i_13_n_0 ,\buff2[81]_i_14_n_0 }),
        .O({\buff2_reg[81]_i_9_n_4 ,\buff2_reg[81]_i_9_n_5 ,\buff2_reg[81]_i_9_n_6 ,\buff2_reg[81]_i_9_n_7 }),
        .S({\buff2[81]_i_15_n_0 ,\buff2[81]_i_16_n_0 ,\buff2[81]_i_17_n_0 ,\buff2[81]_i_18_n_0 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x16 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,A[2],A[2:1],A[1],A[1],A[1],A[1],A[1],A[1],A[1],A[1],A[1:0],A[0],A[0],A[0],A[0],A[0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__0_n_106,buff0_reg__0_n_107,buff0_reg__0_n_108,buff0_reg__0_n_109,buff0_reg__0_n_110,buff0_reg__0_n_111,buff0_reg__0_n_112,buff0_reg__0_n_113,buff0_reg__0_n_114,buff0_reg__0_n_115,buff0_reg__0_n_116,buff0_reg__0_n_117,buff0_reg__0_n_118,buff0_reg__0_n_119,buff0_reg__0_n_120,buff0_reg__0_n_121,buff0_reg__0_n_122,buff0_reg__0_n_123,buff0_reg__0_n_124,buff0_reg__0_n_125,buff0_reg__0_n_126,buff0_reg__0_n_127,buff0_reg__0_n_128,buff0_reg__0_n_129,buff0_reg__0_n_130,buff0_reg__0_n_131,buff0_reg__0_n_132,buff0_reg__0_n_133,buff0_reg__0_n_134,buff0_reg__0_n_135,buff0_reg__0_n_136,buff0_reg__0_n_137,buff0_reg__0_n_138,buff0_reg__0_n_139,buff0_reg__0_n_140,buff0_reg__0_n_141,buff0_reg__0_n_142,buff0_reg__0_n_143,buff0_reg__0_n_144,buff0_reg__0_n_145,buff0_reg__0_n_146,buff0_reg__0_n_147,buff0_reg__0_n_148,buff0_reg__0_n_149,buff0_reg__0_n_150,buff0_reg__0_n_151,buff0_reg__0_n_152,buff0_reg__0_n_153}),
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
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,tmp_product__1_0[7],tmp_product__1_0[7],tmp_product__0_0[1],tmp_product__0_0[1],tmp_product__0_0[1],tmp_product__0_0[1],tmp_product__0_0[1],tmp_product__0_0[1],tmp_product__0_0[1],tmp_product__0_0[1],tmp_product__0_0[1],tmp_product__0_0,tmp_product__0_0[0],tmp_product__0_0[0],tmp_product__0_0[0],tmp_product__0_0[0],tmp_product__0_0[0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__0_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product__0_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__1_n_106,buff0_reg__1_n_107,buff0_reg__1_n_108,buff0_reg__1_n_109,buff0_reg__1_n_110,buff0_reg__1_n_111,buff0_reg__1_n_112,buff0_reg__1_n_113,buff0_reg__1_n_114,buff0_reg__1_n_115,buff0_reg__1_n_116,buff0_reg__1_n_117,buff0_reg__1_n_118,buff0_reg__1_n_119,buff0_reg__1_n_120,buff0_reg__1_n_121,buff0_reg__1_n_122,buff0_reg__1_n_123,buff0_reg__1_n_124,buff0_reg__1_n_125,buff0_reg__1_n_126,buff0_reg__1_n_127,buff0_reg__1_n_128,buff0_reg__1_n_129,buff0_reg__1_n_130,buff0_reg__1_n_131,buff0_reg__1_n_132,buff0_reg__1_n_133,buff0_reg__1_n_134,buff0_reg__1_n_135,buff0_reg__1_n_136,buff0_reg__1_n_137,buff0_reg__1_n_138,buff0_reg__1_n_139,buff0_reg__1_n_140,buff0_reg__1_n_141,buff0_reg__1_n_142,buff0_reg__1_n_143,buff0_reg__1_n_144,buff0_reg__1_n_145,buff0_reg__1_n_146,buff0_reg__1_n_147,buff0_reg__1_n_148,buff0_reg__1_n_149,buff0_reg__1_n_150,buff0_reg__1_n_151,buff0_reg__1_n_152,buff0_reg__1_n_153}),
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
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product__1
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,tmp_product__1_1,tmp_product__1_1,tmp_product__1_1,tmp_product__1_1,tmp_product__1_1,tmp_product__1_1,tmp_product__1_1,tmp_product__1_1,tmp_product__1_1,tmp_product__1_1,tmp_product__1_0[8],tmp_product__1_0[8],tmp_product__1_0[8],tmp_product__1_0[8],tmp_product__1_0[8],tmp_product__1_0[8],tmp_product__1_0[8],tmp_product__1_0[8]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__1_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__1_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__1_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product__1_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__1_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product__1_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product__1_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__1_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__2_n_106,buff0_reg__2_n_107,buff0_reg__2_n_108,buff0_reg__2_n_109,buff0_reg__2_n_110,buff0_reg__2_n_111,buff0_reg__2_n_112,buff0_reg__2_n_113,buff0_reg__2_n_114,buff0_reg__2_n_115,buff0_reg__2_n_116,buff0_reg__2_n_117,buff0_reg__2_n_118,buff0_reg__2_n_119,buff0_reg__2_n_120,buff0_reg__2_n_121,buff0_reg__2_n_122,buff0_reg__2_n_123,buff0_reg__2_n_124,buff0_reg__2_n_125,buff0_reg__2_n_126,buff0_reg__2_n_127,buff0_reg__2_n_128,buff0_reg__2_n_129,buff0_reg__2_n_130,buff0_reg__2_n_131,buff0_reg__2_n_132,buff0_reg__2_n_133,buff0_reg__2_n_134,buff0_reg__2_n_135,buff0_reg__2_n_136,buff0_reg__2_n_137,buff0_reg__2_n_138,buff0_reg__2_n_139,buff0_reg__2_n_140,buff0_reg__2_n_141,buff0_reg__2_n_142,buff0_reg__2_n_143,buff0_reg__2_n_144,buff0_reg__2_n_145,buff0_reg__2_n_146,buff0_reg__2_n_147,buff0_reg__2_n_148,buff0_reg__2_n_149,buff0_reg__2_n_150,buff0_reg__2_n_151,buff0_reg__2_n_152,buff0_reg__2_n_153}),
        .PCOUT({tmp_product__1_n_106,tmp_product__1_n_107,tmp_product__1_n_108,tmp_product__1_n_109,tmp_product__1_n_110,tmp_product__1_n_111,tmp_product__1_n_112,tmp_product__1_n_113,tmp_product__1_n_114,tmp_product__1_n_115,tmp_product__1_n_116,tmp_product__1_n_117,tmp_product__1_n_118,tmp_product__1_n_119,tmp_product__1_n_120,tmp_product__1_n_121,tmp_product__1_n_122,tmp_product__1_n_123,tmp_product__1_n_124,tmp_product__1_n_125,tmp_product__1_n_126,tmp_product__1_n_127,tmp_product__1_n_128,tmp_product__1_n_129,tmp_product__1_n_130,tmp_product__1_n_131,tmp_product__1_n_132,tmp_product__1_n_133,tmp_product__1_n_134,tmp_product__1_n_135,tmp_product__1_n_136,tmp_product__1_n_137,tmp_product__1_n_138,tmp_product__1_n_139,tmp_product__1_n_140,tmp_product__1_n_141,tmp_product__1_n_142,tmp_product__1_n_143,tmp_product__1_n_144,tmp_product__1_n_145,tmp_product__1_n_146,tmp_product__1_n_147,tmp_product__1_n_148,tmp_product__1_n_149,tmp_product__1_n_150,tmp_product__1_n_151,tmp_product__1_n_152,tmp_product__1_n_153}),
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
        .UNDERFLOW(NLW_tmp_product__1_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product__2
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,tmp_product__2_0,tmp_product__2_0,tmp_product__2_0,tmp_product__2_0,tmp_product__2_0,tmp_product__2_0,tmp_product__2_0,tmp_product__2_0,tmp_product__2_0,tmp_product__2_0,tmp_product__1_0[6:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__2_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__2_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__2_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product__2_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__2_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product__2_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product__2_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__2_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__3_n_106,buff0_reg__3_n_107,buff0_reg__3_n_108,buff0_reg__3_n_109,buff0_reg__3_n_110,buff0_reg__3_n_111,buff0_reg__3_n_112,buff0_reg__3_n_113,buff0_reg__3_n_114,buff0_reg__3_n_115,buff0_reg__3_n_116,buff0_reg__3_n_117,buff0_reg__3_n_118,buff0_reg__3_n_119,buff0_reg__3_n_120,buff0_reg__3_n_121,buff0_reg__3_n_122,buff0_reg__3_n_123,buff0_reg__3_n_124,buff0_reg__3_n_125,buff0_reg__3_n_126,buff0_reg__3_n_127,buff0_reg__3_n_128,buff0_reg__3_n_129,buff0_reg__3_n_130,buff0_reg__3_n_131,buff0_reg__3_n_132,buff0_reg__3_n_133,buff0_reg__3_n_134,buff0_reg__3_n_135,buff0_reg__3_n_136,buff0_reg__3_n_137,buff0_reg__3_n_138,buff0_reg__3_n_139,buff0_reg__3_n_140,buff0_reg__3_n_141,buff0_reg__3_n_142,buff0_reg__3_n_143,buff0_reg__3_n_144,buff0_reg__3_n_145,buff0_reg__3_n_146,buff0_reg__3_n_147,buff0_reg__3_n_148,buff0_reg__3_n_149,buff0_reg__3_n_150,buff0_reg__3_n_151,buff0_reg__3_n_152,buff0_reg__3_n_153}),
        .PCOUT({tmp_product__2_n_106,tmp_product__2_n_107,tmp_product__2_n_108,tmp_product__2_n_109,tmp_product__2_n_110,tmp_product__2_n_111,tmp_product__2_n_112,tmp_product__2_n_113,tmp_product__2_n_114,tmp_product__2_n_115,tmp_product__2_n_116,tmp_product__2_n_117,tmp_product__2_n_118,tmp_product__2_n_119,tmp_product__2_n_120,tmp_product__2_n_121,tmp_product__2_n_122,tmp_product__2_n_123,tmp_product__2_n_124,tmp_product__2_n_125,tmp_product__2_n_126,tmp_product__2_n_127,tmp_product__2_n_128,tmp_product__2_n_129,tmp_product__2_n_130,tmp_product__2_n_131,tmp_product__2_n_132,tmp_product__2_n_133,tmp_product__2_n_134,tmp_product__2_n_135,tmp_product__2_n_136,tmp_product__2_n_137,tmp_product__2_n_138,tmp_product__2_n_139,tmp_product__2_n_140,tmp_product__2_n_141,tmp_product__2_n_142,tmp_product__2_n_143,tmp_product__2_n_144,tmp_product__2_n_145,tmp_product__2_n_146,tmp_product__2_n_147,tmp_product__2_n_148,tmp_product__2_n_149,tmp_product__2_n_150,tmp_product__2_n_151,tmp_product__2_n_152,tmp_product__2_n_153}),
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
        .UNDERFLOW(NLW_tmp_product__2_UNDERFLOW_UNCONNECTED));
endmodule

(* ORIG_REF_NAME = "fn1_mul_64ns_66ns_82_5_1_Multiplier_0" *) 
module bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0_1
   (buff0_reg_0,
    Q,
    ap_clk,
    p_9,
    p_7);
  output [7:0]buff0_reg_0;
  input [0:0]Q;
  input ap_clk;
  input [15:0]p_9;
  input [15:0]p_7;

  wire [0:0]Q;
  wire ap_clk;
  wire [7:0]buff0_reg_0;
  wire buff0_reg__0_n_100;
  wire buff0_reg__0_n_101;
  wire buff0_reg__0_n_102;
  wire buff0_reg__0_n_103;
  wire buff0_reg__0_n_104;
  wire buff0_reg__0_n_105;
  wire buff0_reg__0_n_106;
  wire buff0_reg__0_n_107;
  wire buff0_reg__0_n_108;
  wire buff0_reg__0_n_109;
  wire buff0_reg__0_n_110;
  wire buff0_reg__0_n_111;
  wire buff0_reg__0_n_112;
  wire buff0_reg__0_n_113;
  wire buff0_reg__0_n_114;
  wire buff0_reg__0_n_115;
  wire buff0_reg__0_n_116;
  wire buff0_reg__0_n_117;
  wire buff0_reg__0_n_118;
  wire buff0_reg__0_n_119;
  wire buff0_reg__0_n_120;
  wire buff0_reg__0_n_121;
  wire buff0_reg__0_n_122;
  wire buff0_reg__0_n_123;
  wire buff0_reg__0_n_124;
  wire buff0_reg__0_n_125;
  wire buff0_reg__0_n_126;
  wire buff0_reg__0_n_127;
  wire buff0_reg__0_n_128;
  wire buff0_reg__0_n_129;
  wire buff0_reg__0_n_130;
  wire buff0_reg__0_n_131;
  wire buff0_reg__0_n_132;
  wire buff0_reg__0_n_133;
  wire buff0_reg__0_n_134;
  wire buff0_reg__0_n_135;
  wire buff0_reg__0_n_136;
  wire buff0_reg__0_n_137;
  wire buff0_reg__0_n_138;
  wire buff0_reg__0_n_139;
  wire buff0_reg__0_n_140;
  wire buff0_reg__0_n_141;
  wire buff0_reg__0_n_142;
  wire buff0_reg__0_n_143;
  wire buff0_reg__0_n_144;
  wire buff0_reg__0_n_145;
  wire buff0_reg__0_n_146;
  wire buff0_reg__0_n_147;
  wire buff0_reg__0_n_148;
  wire buff0_reg__0_n_149;
  wire buff0_reg__0_n_150;
  wire buff0_reg__0_n_151;
  wire buff0_reg__0_n_152;
  wire buff0_reg__0_n_153;
  wire buff0_reg__0_n_58;
  wire buff0_reg__0_n_59;
  wire buff0_reg__0_n_60;
  wire buff0_reg__0_n_61;
  wire buff0_reg__0_n_62;
  wire buff0_reg__0_n_63;
  wire buff0_reg__0_n_64;
  wire buff0_reg__0_n_65;
  wire buff0_reg__0_n_66;
  wire buff0_reg__0_n_67;
  wire buff0_reg__0_n_68;
  wire buff0_reg__0_n_69;
  wire buff0_reg__0_n_70;
  wire buff0_reg__0_n_71;
  wire buff0_reg__0_n_72;
  wire buff0_reg__0_n_73;
  wire buff0_reg__0_n_74;
  wire buff0_reg__0_n_75;
  wire buff0_reg__0_n_76;
  wire buff0_reg__0_n_77;
  wire buff0_reg__0_n_78;
  wire buff0_reg__0_n_79;
  wire buff0_reg__0_n_80;
  wire buff0_reg__0_n_81;
  wire buff0_reg__0_n_82;
  wire buff0_reg__0_n_83;
  wire buff0_reg__0_n_84;
  wire buff0_reg__0_n_85;
  wire buff0_reg__0_n_86;
  wire buff0_reg__0_n_87;
  wire buff0_reg__0_n_88;
  wire buff0_reg__0_n_89;
  wire buff0_reg__0_n_90;
  wire buff0_reg__0_n_91;
  wire buff0_reg__0_n_92;
  wire buff0_reg__0_n_93;
  wire buff0_reg__0_n_94;
  wire buff0_reg__0_n_95;
  wire buff0_reg__0_n_96;
  wire buff0_reg__0_n_97;
  wire buff0_reg__0_n_98;
  wire buff0_reg__0_n_99;
  wire buff0_reg__1_i_10_n_0;
  wire buff0_reg__1_i_11_n_0;
  wire buff0_reg__1_i_12_n_0;
  wire buff0_reg__1_i_13_n_0;
  wire buff0_reg__1_i_14_n_0;
  wire buff0_reg__1_i_15_n_0;
  wire buff0_reg__1_i_16_n_0;
  wire buff0_reg__1_i_17_n_0;
  wire buff0_reg__1_i_18_n_0;
  wire buff0_reg__1_i_19_n_0;
  wire buff0_reg__1_i_1_n_0;
  wire buff0_reg__1_i_1_n_1;
  wire buff0_reg__1_i_1_n_2;
  wire buff0_reg__1_i_1_n_3;
  wire buff0_reg__1_i_20_n_0;
  wire buff0_reg__1_i_21_n_0;
  wire buff0_reg__1_i_22_n_0;
  wire buff0_reg__1_i_23_n_0;
  wire buff0_reg__1_i_24_n_0;
  wire buff0_reg__1_i_25_n_0;
  wire buff0_reg__1_i_26_n_0;
  wire buff0_reg__1_i_27_n_0;
  wire buff0_reg__1_i_28_n_0;
  wire buff0_reg__1_i_29_n_0;
  wire buff0_reg__1_i_2_n_0;
  wire buff0_reg__1_i_2_n_1;
  wire buff0_reg__1_i_2_n_2;
  wire buff0_reg__1_i_2_n_3;
  wire buff0_reg__1_i_30_n_0;
  wire buff0_reg__1_i_31_n_0;
  wire buff0_reg__1_i_32_n_0;
  wire buff0_reg__1_i_33_n_0;
  wire buff0_reg__1_i_34_n_0;
  wire buff0_reg__1_i_3_n_0;
  wire buff0_reg__1_i_3_n_1;
  wire buff0_reg__1_i_3_n_2;
  wire buff0_reg__1_i_3_n_3;
  wire buff0_reg__1_i_4_n_0;
  wire buff0_reg__1_i_4_n_1;
  wire buff0_reg__1_i_4_n_2;
  wire buff0_reg__1_i_4_n_3;
  wire buff0_reg__1_i_5__0_n_0;
  wire buff0_reg__1_i_6__0_n_0;
  wire buff0_reg__1_i_7__0_n_0;
  wire buff0_reg__1_i_8__0_n_0;
  wire buff0_reg__1_i_9_n_0;
  wire buff0_reg__1_n_106;
  wire buff0_reg__1_n_107;
  wire buff0_reg__1_n_108;
  wire buff0_reg__1_n_109;
  wire buff0_reg__1_n_110;
  wire buff0_reg__1_n_111;
  wire buff0_reg__1_n_112;
  wire buff0_reg__1_n_113;
  wire buff0_reg__1_n_114;
  wire buff0_reg__1_n_115;
  wire buff0_reg__1_n_116;
  wire buff0_reg__1_n_117;
  wire buff0_reg__1_n_118;
  wire buff0_reg__1_n_119;
  wire buff0_reg__1_n_120;
  wire buff0_reg__1_n_121;
  wire buff0_reg__1_n_122;
  wire buff0_reg__1_n_123;
  wire buff0_reg__1_n_124;
  wire buff0_reg__1_n_125;
  wire buff0_reg__1_n_126;
  wire buff0_reg__1_n_127;
  wire buff0_reg__1_n_128;
  wire buff0_reg__1_n_129;
  wire buff0_reg__1_n_130;
  wire buff0_reg__1_n_131;
  wire buff0_reg__1_n_132;
  wire buff0_reg__1_n_133;
  wire buff0_reg__1_n_134;
  wire buff0_reg__1_n_135;
  wire buff0_reg__1_n_136;
  wire buff0_reg__1_n_137;
  wire buff0_reg__1_n_138;
  wire buff0_reg__1_n_139;
  wire buff0_reg__1_n_140;
  wire buff0_reg__1_n_141;
  wire buff0_reg__1_n_142;
  wire buff0_reg__1_n_143;
  wire buff0_reg__1_n_144;
  wire buff0_reg__1_n_145;
  wire buff0_reg__1_n_146;
  wire buff0_reg__1_n_147;
  wire buff0_reg__1_n_148;
  wire buff0_reg__1_n_149;
  wire buff0_reg__1_n_150;
  wire buff0_reg__1_n_151;
  wire buff0_reg__1_n_152;
  wire buff0_reg__1_n_153;
  wire buff0_reg__2_n_106;
  wire buff0_reg__2_n_107;
  wire buff0_reg__2_n_108;
  wire buff0_reg__2_n_109;
  wire buff0_reg__2_n_110;
  wire buff0_reg__2_n_111;
  wire buff0_reg__2_n_112;
  wire buff0_reg__2_n_113;
  wire buff0_reg__2_n_114;
  wire buff0_reg__2_n_115;
  wire buff0_reg__2_n_116;
  wire buff0_reg__2_n_117;
  wire buff0_reg__2_n_118;
  wire buff0_reg__2_n_119;
  wire buff0_reg__2_n_120;
  wire buff0_reg__2_n_121;
  wire buff0_reg__2_n_122;
  wire buff0_reg__2_n_123;
  wire buff0_reg__2_n_124;
  wire buff0_reg__2_n_125;
  wire buff0_reg__2_n_126;
  wire buff0_reg__2_n_127;
  wire buff0_reg__2_n_128;
  wire buff0_reg__2_n_129;
  wire buff0_reg__2_n_130;
  wire buff0_reg__2_n_131;
  wire buff0_reg__2_n_132;
  wire buff0_reg__2_n_133;
  wire buff0_reg__2_n_134;
  wire buff0_reg__2_n_135;
  wire buff0_reg__2_n_136;
  wire buff0_reg__2_n_137;
  wire buff0_reg__2_n_138;
  wire buff0_reg__2_n_139;
  wire buff0_reg__2_n_140;
  wire buff0_reg__2_n_141;
  wire buff0_reg__2_n_142;
  wire buff0_reg__2_n_143;
  wire buff0_reg__2_n_144;
  wire buff0_reg__2_n_145;
  wire buff0_reg__2_n_146;
  wire buff0_reg__2_n_147;
  wire buff0_reg__2_n_148;
  wire buff0_reg__2_n_149;
  wire buff0_reg__2_n_150;
  wire buff0_reg__2_n_151;
  wire buff0_reg__2_n_152;
  wire buff0_reg__2_n_153;
  wire buff0_reg__3_n_100;
  wire buff0_reg__3_n_101;
  wire buff0_reg__3_n_102;
  wire buff0_reg__3_n_103;
  wire buff0_reg__3_n_104;
  wire buff0_reg__3_n_105;
  wire buff0_reg__3_n_106;
  wire buff0_reg__3_n_107;
  wire buff0_reg__3_n_108;
  wire buff0_reg__3_n_109;
  wire buff0_reg__3_n_110;
  wire buff0_reg__3_n_111;
  wire buff0_reg__3_n_112;
  wire buff0_reg__3_n_113;
  wire buff0_reg__3_n_114;
  wire buff0_reg__3_n_115;
  wire buff0_reg__3_n_116;
  wire buff0_reg__3_n_117;
  wire buff0_reg__3_n_118;
  wire buff0_reg__3_n_119;
  wire buff0_reg__3_n_120;
  wire buff0_reg__3_n_121;
  wire buff0_reg__3_n_122;
  wire buff0_reg__3_n_123;
  wire buff0_reg__3_n_124;
  wire buff0_reg__3_n_125;
  wire buff0_reg__3_n_126;
  wire buff0_reg__3_n_127;
  wire buff0_reg__3_n_128;
  wire buff0_reg__3_n_129;
  wire buff0_reg__3_n_130;
  wire buff0_reg__3_n_131;
  wire buff0_reg__3_n_132;
  wire buff0_reg__3_n_133;
  wire buff0_reg__3_n_134;
  wire buff0_reg__3_n_135;
  wire buff0_reg__3_n_136;
  wire buff0_reg__3_n_137;
  wire buff0_reg__3_n_138;
  wire buff0_reg__3_n_139;
  wire buff0_reg__3_n_140;
  wire buff0_reg__3_n_141;
  wire buff0_reg__3_n_142;
  wire buff0_reg__3_n_143;
  wire buff0_reg__3_n_144;
  wire buff0_reg__3_n_145;
  wire buff0_reg__3_n_146;
  wire buff0_reg__3_n_147;
  wire buff0_reg__3_n_148;
  wire buff0_reg__3_n_149;
  wire buff0_reg__3_n_150;
  wire buff0_reg__3_n_151;
  wire buff0_reg__3_n_152;
  wire buff0_reg__3_n_153;
  wire buff0_reg__3_n_58;
  wire buff0_reg__3_n_59;
  wire buff0_reg__3_n_60;
  wire buff0_reg__3_n_61;
  wire buff0_reg__3_n_62;
  wire buff0_reg__3_n_63;
  wire buff0_reg__3_n_64;
  wire buff0_reg__3_n_65;
  wire buff0_reg__3_n_66;
  wire buff0_reg__3_n_67;
  wire buff0_reg__3_n_68;
  wire buff0_reg__3_n_69;
  wire buff0_reg__3_n_70;
  wire buff0_reg__3_n_71;
  wire buff0_reg__3_n_72;
  wire buff0_reg__3_n_73;
  wire buff0_reg__3_n_74;
  wire buff0_reg__3_n_75;
  wire buff0_reg__3_n_76;
  wire buff0_reg__3_n_77;
  wire buff0_reg__3_n_78;
  wire buff0_reg__3_n_79;
  wire buff0_reg__3_n_80;
  wire buff0_reg__3_n_81;
  wire buff0_reg__3_n_82;
  wire buff0_reg__3_n_83;
  wire buff0_reg__3_n_84;
  wire buff0_reg__3_n_85;
  wire buff0_reg__3_n_86;
  wire buff0_reg__3_n_87;
  wire buff0_reg__3_n_88;
  wire buff0_reg__3_n_89;
  wire buff0_reg__3_n_90;
  wire buff0_reg__3_n_91;
  wire buff0_reg__3_n_92;
  wire buff0_reg__3_n_93;
  wire buff0_reg__3_n_94;
  wire buff0_reg__3_n_95;
  wire buff0_reg__3_n_96;
  wire buff0_reg__3_n_97;
  wire buff0_reg__3_n_98;
  wire buff0_reg__3_n_99;
  wire buff0_reg_i_1_n_3;
  wire buff0_reg_i_2_n_0;
  wire buff0_reg_n_100;
  wire buff0_reg_n_101;
  wire buff0_reg_n_102;
  wire buff0_reg_n_103;
  wire buff0_reg_n_104;
  wire buff0_reg_n_105;
  wire buff0_reg_n_106;
  wire buff0_reg_n_107;
  wire buff0_reg_n_108;
  wire buff0_reg_n_109;
  wire buff0_reg_n_110;
  wire buff0_reg_n_111;
  wire buff0_reg_n_112;
  wire buff0_reg_n_113;
  wire buff0_reg_n_114;
  wire buff0_reg_n_115;
  wire buff0_reg_n_116;
  wire buff0_reg_n_117;
  wire buff0_reg_n_118;
  wire buff0_reg_n_119;
  wire buff0_reg_n_120;
  wire buff0_reg_n_121;
  wire buff0_reg_n_122;
  wire buff0_reg_n_123;
  wire buff0_reg_n_124;
  wire buff0_reg_n_125;
  wire buff0_reg_n_126;
  wire buff0_reg_n_127;
  wire buff0_reg_n_128;
  wire buff0_reg_n_129;
  wire buff0_reg_n_130;
  wire buff0_reg_n_131;
  wire buff0_reg_n_132;
  wire buff0_reg_n_133;
  wire buff0_reg_n_134;
  wire buff0_reg_n_135;
  wire buff0_reg_n_136;
  wire buff0_reg_n_137;
  wire buff0_reg_n_138;
  wire buff0_reg_n_139;
  wire buff0_reg_n_140;
  wire buff0_reg_n_141;
  wire buff0_reg_n_142;
  wire buff0_reg_n_143;
  wire buff0_reg_n_144;
  wire buff0_reg_n_145;
  wire buff0_reg_n_146;
  wire buff0_reg_n_147;
  wire buff0_reg_n_148;
  wire buff0_reg_n_149;
  wire buff0_reg_n_150;
  wire buff0_reg_n_151;
  wire buff0_reg_n_152;
  wire buff0_reg_n_153;
  wire buff0_reg_n_58;
  wire buff0_reg_n_59;
  wire buff0_reg_n_60;
  wire buff0_reg_n_61;
  wire buff0_reg_n_62;
  wire buff0_reg_n_63;
  wire buff0_reg_n_64;
  wire buff0_reg_n_65;
  wire buff0_reg_n_66;
  wire buff0_reg_n_67;
  wire buff0_reg_n_68;
  wire buff0_reg_n_69;
  wire buff0_reg_n_70;
  wire buff0_reg_n_71;
  wire buff0_reg_n_72;
  wire buff0_reg_n_73;
  wire buff0_reg_n_74;
  wire buff0_reg_n_75;
  wire buff0_reg_n_76;
  wire buff0_reg_n_77;
  wire buff0_reg_n_78;
  wire buff0_reg_n_79;
  wire buff0_reg_n_80;
  wire buff0_reg_n_81;
  wire buff0_reg_n_82;
  wire buff0_reg_n_83;
  wire buff0_reg_n_84;
  wire buff0_reg_n_85;
  wire buff0_reg_n_86;
  wire buff0_reg_n_87;
  wire buff0_reg_n_88;
  wire buff0_reg_n_89;
  wire buff0_reg_n_90;
  wire buff0_reg_n_91;
  wire buff0_reg_n_92;
  wire buff0_reg_n_93;
  wire buff0_reg_n_94;
  wire buff0_reg_n_95;
  wire buff0_reg_n_96;
  wire buff0_reg_n_97;
  wire buff0_reg_n_98;
  wire buff0_reg_n_99;
  wire \buff1_reg[0]__0_n_0 ;
  wire \buff1_reg[10]__0_n_0 ;
  wire \buff1_reg[11]__0_n_0 ;
  wire \buff1_reg[12]__0_n_0 ;
  wire \buff1_reg[13]__0_n_0 ;
  wire \buff1_reg[14]__0_n_0 ;
  wire \buff1_reg[15]__0_n_0 ;
  wire \buff1_reg[16]__0_n_0 ;
  wire \buff1_reg[1]__0_n_0 ;
  wire \buff1_reg[2]__0_n_0 ;
  wire \buff1_reg[3]__0_n_0 ;
  wire \buff1_reg[4]__0_n_0 ;
  wire \buff1_reg[5]__0_n_0 ;
  wire \buff1_reg[6]__0_n_0 ;
  wire \buff1_reg[7]__0_n_0 ;
  wire \buff1_reg[8]__0_n_0 ;
  wire \buff1_reg[9]__0_n_0 ;
  wire buff1_reg__0_n_100;
  wire buff1_reg__0_n_101;
  wire buff1_reg__0_n_102;
  wire buff1_reg__0_n_103;
  wire buff1_reg__0_n_104;
  wire buff1_reg__0_n_105;
  wire buff1_reg__0_n_58;
  wire buff1_reg__0_n_59;
  wire buff1_reg__0_n_60;
  wire buff1_reg__0_n_61;
  wire buff1_reg__0_n_62;
  wire buff1_reg__0_n_63;
  wire buff1_reg__0_n_64;
  wire buff1_reg__0_n_65;
  wire buff1_reg__0_n_66;
  wire buff1_reg__0_n_67;
  wire buff1_reg__0_n_68;
  wire buff1_reg__0_n_69;
  wire buff1_reg__0_n_70;
  wire buff1_reg__0_n_71;
  wire buff1_reg__0_n_72;
  wire buff1_reg__0_n_73;
  wire buff1_reg__0_n_74;
  wire buff1_reg__0_n_75;
  wire buff1_reg__0_n_76;
  wire buff1_reg__0_n_77;
  wire buff1_reg__0_n_78;
  wire buff1_reg__0_n_79;
  wire buff1_reg__0_n_80;
  wire buff1_reg__0_n_81;
  wire buff1_reg__0_n_82;
  wire buff1_reg__0_n_83;
  wire buff1_reg__0_n_84;
  wire buff1_reg__0_n_85;
  wire buff1_reg__0_n_86;
  wire buff1_reg__0_n_87;
  wire buff1_reg__0_n_88;
  wire buff1_reg__0_n_89;
  wire buff1_reg__0_n_90;
  wire buff1_reg__0_n_91;
  wire buff1_reg__0_n_92;
  wire buff1_reg__0_n_93;
  wire buff1_reg__0_n_94;
  wire buff1_reg__0_n_95;
  wire buff1_reg__0_n_96;
  wire buff1_reg__0_n_97;
  wire buff1_reg__0_n_98;
  wire buff1_reg__0_n_99;
  wire buff1_reg__1_n_100;
  wire buff1_reg__1_n_101;
  wire buff1_reg__1_n_102;
  wire buff1_reg__1_n_103;
  wire buff1_reg__1_n_104;
  wire buff1_reg__1_n_105;
  wire buff1_reg__1_n_58;
  wire buff1_reg__1_n_59;
  wire buff1_reg__1_n_60;
  wire buff1_reg__1_n_61;
  wire buff1_reg__1_n_62;
  wire buff1_reg__1_n_63;
  wire buff1_reg__1_n_64;
  wire buff1_reg__1_n_65;
  wire buff1_reg__1_n_66;
  wire buff1_reg__1_n_67;
  wire buff1_reg__1_n_68;
  wire buff1_reg__1_n_69;
  wire buff1_reg__1_n_70;
  wire buff1_reg__1_n_71;
  wire buff1_reg__1_n_72;
  wire buff1_reg__1_n_73;
  wire buff1_reg__1_n_74;
  wire buff1_reg__1_n_75;
  wire buff1_reg__1_n_76;
  wire buff1_reg__1_n_77;
  wire buff1_reg__1_n_78;
  wire buff1_reg__1_n_79;
  wire buff1_reg__1_n_80;
  wire buff1_reg__1_n_81;
  wire buff1_reg__1_n_82;
  wire buff1_reg__1_n_83;
  wire buff1_reg__1_n_84;
  wire buff1_reg__1_n_85;
  wire buff1_reg__1_n_86;
  wire buff1_reg__1_n_87;
  wire buff1_reg__1_n_88;
  wire buff1_reg__1_n_89;
  wire buff1_reg__1_n_90;
  wire buff1_reg__1_n_91;
  wire buff1_reg__1_n_92;
  wire buff1_reg__1_n_93;
  wire buff1_reg__1_n_94;
  wire buff1_reg__1_n_95;
  wire buff1_reg__1_n_96;
  wire buff1_reg__1_n_97;
  wire buff1_reg__1_n_98;
  wire buff1_reg__1_n_99;
  wire buff1_reg__2_n_100;
  wire buff1_reg__2_n_101;
  wire buff1_reg__2_n_102;
  wire buff1_reg__2_n_103;
  wire buff1_reg__2_n_104;
  wire buff1_reg__2_n_105;
  wire buff1_reg__2_n_58;
  wire buff1_reg__2_n_59;
  wire buff1_reg__2_n_60;
  wire buff1_reg__2_n_61;
  wire buff1_reg__2_n_62;
  wire buff1_reg__2_n_63;
  wire buff1_reg__2_n_64;
  wire buff1_reg__2_n_65;
  wire buff1_reg__2_n_66;
  wire buff1_reg__2_n_67;
  wire buff1_reg__2_n_68;
  wire buff1_reg__2_n_69;
  wire buff1_reg__2_n_70;
  wire buff1_reg__2_n_71;
  wire buff1_reg__2_n_72;
  wire buff1_reg__2_n_73;
  wire buff1_reg__2_n_74;
  wire buff1_reg__2_n_75;
  wire buff1_reg__2_n_76;
  wire buff1_reg__2_n_77;
  wire buff1_reg__2_n_78;
  wire buff1_reg__2_n_79;
  wire buff1_reg__2_n_80;
  wire buff1_reg__2_n_81;
  wire buff1_reg__2_n_82;
  wire buff1_reg__2_n_83;
  wire buff1_reg__2_n_84;
  wire buff1_reg__2_n_85;
  wire buff1_reg__2_n_86;
  wire buff1_reg__2_n_87;
  wire buff1_reg__2_n_88;
  wire buff1_reg__2_n_89;
  wire buff1_reg__2_n_90;
  wire buff1_reg__2_n_91;
  wire buff1_reg__2_n_92;
  wire buff1_reg__2_n_93;
  wire buff1_reg__2_n_94;
  wire buff1_reg__2_n_95;
  wire buff1_reg__2_n_96;
  wire buff1_reg__2_n_97;
  wire buff1_reg__2_n_98;
  wire buff1_reg__2_n_99;
  wire buff1_reg_n_100;
  wire buff1_reg_n_101;
  wire buff1_reg_n_102;
  wire buff1_reg_n_103;
  wire buff1_reg_n_104;
  wire buff1_reg_n_105;
  wire buff1_reg_n_58;
  wire buff1_reg_n_59;
  wire buff1_reg_n_60;
  wire buff1_reg_n_61;
  wire buff1_reg_n_62;
  wire buff1_reg_n_63;
  wire buff1_reg_n_64;
  wire buff1_reg_n_65;
  wire buff1_reg_n_66;
  wire buff1_reg_n_67;
  wire buff1_reg_n_68;
  wire buff1_reg_n_69;
  wire buff1_reg_n_70;
  wire buff1_reg_n_71;
  wire buff1_reg_n_72;
  wire buff1_reg_n_73;
  wire buff1_reg_n_74;
  wire buff1_reg_n_75;
  wire buff1_reg_n_76;
  wire buff1_reg_n_77;
  wire buff1_reg_n_78;
  wire buff1_reg_n_79;
  wire buff1_reg_n_80;
  wire buff1_reg_n_81;
  wire buff1_reg_n_82;
  wire buff1_reg_n_83;
  wire buff1_reg_n_84;
  wire buff1_reg_n_85;
  wire buff1_reg_n_86;
  wire buff1_reg_n_87;
  wire buff1_reg_n_88;
  wire buff1_reg_n_89;
  wire buff1_reg_n_90;
  wire buff1_reg_n_91;
  wire buff1_reg_n_92;
  wire buff1_reg_n_93;
  wire buff1_reg_n_94;
  wire buff1_reg_n_95;
  wire buff1_reg_n_96;
  wire buff1_reg_n_97;
  wire buff1_reg_n_98;
  wire buff1_reg_n_99;
  wire [15:0]p_7;
  wire [15:0]p_9;
  wire [17:0]sub_ln17_fu_78_p2;
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
  wire tmp_product__1_n_106;
  wire tmp_product__1_n_107;
  wire tmp_product__1_n_108;
  wire tmp_product__1_n_109;
  wire tmp_product__1_n_110;
  wire tmp_product__1_n_111;
  wire tmp_product__1_n_112;
  wire tmp_product__1_n_113;
  wire tmp_product__1_n_114;
  wire tmp_product__1_n_115;
  wire tmp_product__1_n_116;
  wire tmp_product__1_n_117;
  wire tmp_product__1_n_118;
  wire tmp_product__1_n_119;
  wire tmp_product__1_n_120;
  wire tmp_product__1_n_121;
  wire tmp_product__1_n_122;
  wire tmp_product__1_n_123;
  wire tmp_product__1_n_124;
  wire tmp_product__1_n_125;
  wire tmp_product__1_n_126;
  wire tmp_product__1_n_127;
  wire tmp_product__1_n_128;
  wire tmp_product__1_n_129;
  wire tmp_product__1_n_130;
  wire tmp_product__1_n_131;
  wire tmp_product__1_n_132;
  wire tmp_product__1_n_133;
  wire tmp_product__1_n_134;
  wire tmp_product__1_n_135;
  wire tmp_product__1_n_136;
  wire tmp_product__1_n_137;
  wire tmp_product__1_n_138;
  wire tmp_product__1_n_139;
  wire tmp_product__1_n_140;
  wire tmp_product__1_n_141;
  wire tmp_product__1_n_142;
  wire tmp_product__1_n_143;
  wire tmp_product__1_n_144;
  wire tmp_product__1_n_145;
  wire tmp_product__1_n_146;
  wire tmp_product__1_n_147;
  wire tmp_product__1_n_148;
  wire tmp_product__1_n_149;
  wire tmp_product__1_n_150;
  wire tmp_product__1_n_151;
  wire tmp_product__1_n_152;
  wire tmp_product__1_n_153;
  wire tmp_product__2_n_106;
  wire tmp_product__2_n_107;
  wire tmp_product__2_n_108;
  wire tmp_product__2_n_109;
  wire tmp_product__2_n_110;
  wire tmp_product__2_n_111;
  wire tmp_product__2_n_112;
  wire tmp_product__2_n_113;
  wire tmp_product__2_n_114;
  wire tmp_product__2_n_115;
  wire tmp_product__2_n_116;
  wire tmp_product__2_n_117;
  wire tmp_product__2_n_118;
  wire tmp_product__2_n_119;
  wire tmp_product__2_n_120;
  wire tmp_product__2_n_121;
  wire tmp_product__2_n_122;
  wire tmp_product__2_n_123;
  wire tmp_product__2_n_124;
  wire tmp_product__2_n_125;
  wire tmp_product__2_n_126;
  wire tmp_product__2_n_127;
  wire tmp_product__2_n_128;
  wire tmp_product__2_n_129;
  wire tmp_product__2_n_130;
  wire tmp_product__2_n_131;
  wire tmp_product__2_n_132;
  wire tmp_product__2_n_133;
  wire tmp_product__2_n_134;
  wire tmp_product__2_n_135;
  wire tmp_product__2_n_136;
  wire tmp_product__2_n_137;
  wire tmp_product__2_n_138;
  wire tmp_product__2_n_139;
  wire tmp_product__2_n_140;
  wire tmp_product__2_n_141;
  wire tmp_product__2_n_142;
  wire tmp_product__2_n_143;
  wire tmp_product__2_n_144;
  wire tmp_product__2_n_145;
  wire tmp_product__2_n_146;
  wire tmp_product__2_n_147;
  wire tmp_product__2_n_148;
  wire tmp_product__2_n_149;
  wire tmp_product__2_n_150;
  wire tmp_product__2_n_151;
  wire tmp_product__2_n_152;
  wire tmp_product__2_n_153;
  wire tmp_product_i_100_n_0;
  wire tmp_product_i_100_n_1;
  wire tmp_product_i_100_n_2;
  wire tmp_product_i_100_n_3;
  wire tmp_product_i_100_n_4;
  wire tmp_product_i_100_n_5;
  wire tmp_product_i_100_n_6;
  wire tmp_product_i_101_n_0;
  wire tmp_product_i_101_n_1;
  wire tmp_product_i_101_n_2;
  wire tmp_product_i_101_n_3;
  wire tmp_product_i_101_n_4;
  wire tmp_product_i_101_n_5;
  wire tmp_product_i_101_n_6;
  wire tmp_product_i_101_n_7;
  wire tmp_product_i_102_n_0;
  wire tmp_product_i_103_n_0;
  wire tmp_product_i_104_n_0;
  wire tmp_product_i_105_n_0;
  wire tmp_product_i_106_n_0;
  wire tmp_product_i_107_n_0;
  wire tmp_product_i_108_n_0;
  wire tmp_product_i_109_n_0;
  wire tmp_product_i_10_n_0;
  wire tmp_product_i_10_n_1;
  wire tmp_product_i_10_n_2;
  wire tmp_product_i_10_n_3;
  wire tmp_product_i_110_n_0;
  wire tmp_product_i_110_n_1;
  wire tmp_product_i_110_n_2;
  wire tmp_product_i_110_n_3;
  wire tmp_product_i_111_n_0;
  wire tmp_product_i_112_n_0;
  wire tmp_product_i_113_n_0;
  wire tmp_product_i_114_n_0;
  wire tmp_product_i_115_n_0;
  wire tmp_product_i_116_n_0;
  wire tmp_product_i_117_n_0;
  wire tmp_product_i_118_n_0;
  wire tmp_product_i_119_n_0;
  wire tmp_product_i_11_n_0;
  wire tmp_product_i_120_n_0;
  wire tmp_product_i_121_n_0;
  wire tmp_product_i_122_n_0;
  wire tmp_product_i_123_n_0;
  wire tmp_product_i_124_n_0;
  wire tmp_product_i_124_n_1;
  wire tmp_product_i_124_n_2;
  wire tmp_product_i_124_n_3;
  wire tmp_product_i_125_n_0;
  wire tmp_product_i_126_n_0;
  wire tmp_product_i_127_n_0;
  wire tmp_product_i_128_n_0;
  wire tmp_product_i_129_n_0;
  wire tmp_product_i_129_n_1;
  wire tmp_product_i_129_n_2;
  wire tmp_product_i_129_n_3;
  wire tmp_product_i_12_n_0;
  wire tmp_product_i_130_n_0;
  wire tmp_product_i_131_n_0;
  wire tmp_product_i_132_n_0;
  wire tmp_product_i_133_n_0;
  wire tmp_product_i_134_n_0;
  wire tmp_product_i_134_n_1;
  wire tmp_product_i_134_n_2;
  wire tmp_product_i_134_n_3;
  wire tmp_product_i_135_n_0;
  wire tmp_product_i_136_n_0;
  wire tmp_product_i_137_n_0;
  wire tmp_product_i_138_n_0;
  wire tmp_product_i_139_n_0;
  wire tmp_product_i_13_n_0;
  wire tmp_product_i_140_n_0;
  wire tmp_product_i_141_n_0;
  wire tmp_product_i_14_n_0;
  wire tmp_product_i_15_n_0;
  wire tmp_product_i_16_n_0;
  wire tmp_product_i_17_n_0;
  wire tmp_product_i_18_n_0;
  wire tmp_product_i_19_n_0;
  wire tmp_product_i_19_n_1;
  wire tmp_product_i_19_n_2;
  wire tmp_product_i_19_n_3;
  wire tmp_product_i_19_n_4;
  wire tmp_product_i_19_n_5;
  wire tmp_product_i_19_n_6;
  wire tmp_product_i_19_n_7;
  wire tmp_product_i_1_n_1;
  wire tmp_product_i_1_n_2;
  wire tmp_product_i_1_n_3;
  wire tmp_product_i_20_n_7;
  wire tmp_product_i_21_n_0;
  wire tmp_product_i_21_n_1;
  wire tmp_product_i_21_n_2;
  wire tmp_product_i_21_n_3;
  wire tmp_product_i_22_n_0;
  wire tmp_product_i_23_n_0;
  wire tmp_product_i_24_n_0;
  wire tmp_product_i_25_n_0;
  wire tmp_product_i_26_n_0;
  wire tmp_product_i_27_n_0;
  wire tmp_product_i_28_n_0;
  wire tmp_product_i_29_n_0;
  wire tmp_product_i_2_n_0;
  wire tmp_product_i_2_n_1;
  wire tmp_product_i_2_n_2;
  wire tmp_product_i_2_n_3;
  wire tmp_product_i_30_n_0;
  wire tmp_product_i_30_n_1;
  wire tmp_product_i_30_n_2;
  wire tmp_product_i_30_n_3;
  wire tmp_product_i_30_n_4;
  wire tmp_product_i_30_n_5;
  wire tmp_product_i_30_n_6;
  wire tmp_product_i_30_n_7;
  wire tmp_product_i_31_n_0;
  wire tmp_product_i_32_n_0;
  wire tmp_product_i_33_n_0;
  wire tmp_product_i_34_n_0;
  wire tmp_product_i_35_n_0;
  wire tmp_product_i_36_n_0;
  wire tmp_product_i_37_n_0;
  wire tmp_product_i_38_n_0;
  wire tmp_product_i_39_n_0;
  wire tmp_product_i_3_n_0;
  wire tmp_product_i_40_n_0;
  wire tmp_product_i_40_n_1;
  wire tmp_product_i_40_n_2;
  wire tmp_product_i_40_n_3;
  wire tmp_product_i_41_n_0;
  wire tmp_product_i_42_n_0;
  wire tmp_product_i_43_n_0;
  wire tmp_product_i_44_n_0;
  wire tmp_product_i_45_n_0;
  wire tmp_product_i_46_n_0;
  wire tmp_product_i_46_n_1;
  wire tmp_product_i_46_n_2;
  wire tmp_product_i_46_n_3;
  wire tmp_product_i_46_n_4;
  wire tmp_product_i_46_n_5;
  wire tmp_product_i_46_n_6;
  wire tmp_product_i_46_n_7;
  wire tmp_product_i_47_n_0;
  wire tmp_product_i_48_n_0;
  wire tmp_product_i_49_n_0;
  wire tmp_product_i_4_n_0;
  wire tmp_product_i_50_n_0;
  wire tmp_product_i_51_n_0;
  wire tmp_product_i_52_n_0;
  wire tmp_product_i_53_n_0;
  wire tmp_product_i_54_n_0;
  wire tmp_product_i_55_n_0;
  wire tmp_product_i_55_n_1;
  wire tmp_product_i_55_n_2;
  wire tmp_product_i_55_n_3;
  wire tmp_product_i_56_n_0;
  wire tmp_product_i_57_n_0;
  wire tmp_product_i_58_n_0;
  wire tmp_product_i_59_n_0;
  wire tmp_product_i_5_n_0;
  wire tmp_product_i_60_n_0;
  wire tmp_product_i_60_n_1;
  wire tmp_product_i_60_n_2;
  wire tmp_product_i_60_n_3;
  wire tmp_product_i_60_n_4;
  wire tmp_product_i_60_n_5;
  wire tmp_product_i_60_n_6;
  wire tmp_product_i_60_n_7;
  wire tmp_product_i_61_n_0;
  wire tmp_product_i_62_n_0;
  wire tmp_product_i_63_n_0;
  wire tmp_product_i_64_n_0;
  wire tmp_product_i_65_n_0;
  wire tmp_product_i_66_n_0;
  wire tmp_product_i_67_n_0;
  wire tmp_product_i_68_n_0;
  wire tmp_product_i_69_n_0;
  wire tmp_product_i_69_n_1;
  wire tmp_product_i_69_n_2;
  wire tmp_product_i_69_n_3;
  wire tmp_product_i_6_n_0;
  wire tmp_product_i_70_n_0;
  wire tmp_product_i_71_n_0;
  wire tmp_product_i_72_n_0;
  wire tmp_product_i_73_n_0;
  wire tmp_product_i_74_n_0;
  wire tmp_product_i_74_n_1;
  wire tmp_product_i_74_n_2;
  wire tmp_product_i_74_n_3;
  wire tmp_product_i_74_n_4;
  wire tmp_product_i_74_n_5;
  wire tmp_product_i_74_n_6;
  wire tmp_product_i_74_n_7;
  wire tmp_product_i_75_n_0;
  wire tmp_product_i_76_n_0;
  wire tmp_product_i_77_n_0;
  wire tmp_product_i_78_n_0;
  wire tmp_product_i_79_n_0;
  wire tmp_product_i_7_n_0;
  wire tmp_product_i_80_n_0;
  wire tmp_product_i_81_n_0;
  wire tmp_product_i_82_n_0;
  wire tmp_product_i_83_n_0;
  wire tmp_product_i_83_n_1;
  wire tmp_product_i_83_n_2;
  wire tmp_product_i_83_n_3;
  wire tmp_product_i_84_n_0;
  wire tmp_product_i_85_n_0;
  wire tmp_product_i_86_n_0;
  wire tmp_product_i_87_n_0;
  wire tmp_product_i_88_n_0;
  wire tmp_product_i_88_n_1;
  wire tmp_product_i_88_n_2;
  wire tmp_product_i_88_n_3;
  wire tmp_product_i_88_n_4;
  wire tmp_product_i_88_n_5;
  wire tmp_product_i_88_n_6;
  wire tmp_product_i_88_n_7;
  wire tmp_product_i_89_n_0;
  wire tmp_product_i_8_n_0;
  wire tmp_product_i_90_n_0;
  wire tmp_product_i_91_n_0;
  wire tmp_product_i_92_n_0;
  wire tmp_product_i_93_n_0;
  wire tmp_product_i_94_n_0;
  wire tmp_product_i_95_n_0;
  wire tmp_product_i_96_n_0;
  wire tmp_product_i_97_n_0;
  wire tmp_product_i_98_n_0;
  wire tmp_product_i_99_n_0;
  wire tmp_product_i_9_n_0;
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
  wire NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg_CARRYOUT_UNCONNECTED;
  wire NLW_buff0_reg__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg__0_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg__0_CARRYOUT_UNCONNECTED;
  wire NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg__1_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg__1_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg__1_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg__1_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg__1_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg__1_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg__1_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg__1_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff0_reg__1_P_UNCONNECTED;
  wire NLW_buff0_reg__2_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg__2_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg__2_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg__2_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg__2_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg__2_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg__2_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg__2_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg__2_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff0_reg__2_P_UNCONNECTED;
  wire NLW_buff0_reg__3_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg__3_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg__3_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg__3_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg__3_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg__3_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff0_reg__3_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff0_reg__3_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg__3_CARRYOUT_UNCONNECTED;
  wire [3:1]NLW_buff0_reg_i_1_CO_UNCONNECTED;
  wire [3:2]NLW_buff0_reg_i_1_O_UNCONNECTED;
  wire NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg_PCOUT_UNCONNECTED;
  wire NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg__0_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg__0_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg__0_PCOUT_UNCONNECTED;
  wire NLW_buff1_reg__1_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg__1_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg__1_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg__1_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg__1_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg__1_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg__1_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg__1_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg__1_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg__1_PCOUT_UNCONNECTED;
  wire NLW_buff1_reg__2_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg__2_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg__2_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg__2_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg__2_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg__2_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg__2_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg__2_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg__2_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg__2_PCOUT_UNCONNECTED;
  wire NLW_tmp_product_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_tmp_product_P_UNCONNECTED;
  wire NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__0_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__0_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_tmp_product__0_P_UNCONNECTED;
  wire NLW_tmp_product__1_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__1_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__1_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__1_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__1_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__1_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product__1_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product__1_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__1_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_tmp_product__1_P_UNCONNECTED;
  wire NLW_tmp_product__2_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__2_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__2_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__2_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__2_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__2_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product__2_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product__2_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__2_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_tmp_product__2_P_UNCONNECTED;
  wire [3:3]NLW_tmp_product_i_1_CO_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_10_O_UNCONNECTED;
  wire [0:0]NLW_tmp_product_i_100_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_110_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_124_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_129_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_134_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_20_CO_UNCONNECTED;
  wire [3:1]NLW_tmp_product_i_20_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_21_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_40_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_55_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_69_O_UNCONNECTED;
  wire [3:0]NLW_tmp_product_i_83_O_UNCONNECTED;

  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 14x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(2),
    .BREG(2),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff0_reg
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(Q),
        .CEB2(1'b1),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg_OVERFLOW_UNCONNECTED),
        .P({buff0_reg_n_58,buff0_reg_n_59,buff0_reg_n_60,buff0_reg_n_61,buff0_reg_n_62,buff0_reg_n_63,buff0_reg_n_64,buff0_reg_n_65,buff0_reg_n_66,buff0_reg_n_67,buff0_reg_n_68,buff0_reg_n_69,buff0_reg_n_70,buff0_reg_n_71,buff0_reg_n_72,buff0_reg_n_73,buff0_reg_n_74,buff0_reg_n_75,buff0_reg_n_76,buff0_reg_n_77,buff0_reg_n_78,buff0_reg_n_79,buff0_reg_n_80,buff0_reg_n_81,buff0_reg_n_82,buff0_reg_n_83,buff0_reg_n_84,buff0_reg_n_85,buff0_reg_n_86,buff0_reg_n_87,buff0_reg_n_88,buff0_reg_n_89,buff0_reg_n_90,buff0_reg_n_91,buff0_reg_n_92,buff0_reg_n_93,buff0_reg_n_94,buff0_reg_n_95,buff0_reg_n_96,buff0_reg_n_97,buff0_reg_n_98,buff0_reg_n_99,buff0_reg_n_100,buff0_reg_n_101,buff0_reg_n_102,buff0_reg_n_103,buff0_reg_n_104,buff0_reg_n_105}),
        .PATTERNBDETECT(NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg_n_106,buff0_reg_n_107,buff0_reg_n_108,buff0_reg_n_109,buff0_reg_n_110,buff0_reg_n_111,buff0_reg_n_112,buff0_reg_n_113,buff0_reg_n_114,buff0_reg_n_115,buff0_reg_n_116,buff0_reg_n_117,buff0_reg_n_118,buff0_reg_n_119,buff0_reg_n_120,buff0_reg_n_121,buff0_reg_n_122,buff0_reg_n_123,buff0_reg_n_124,buff0_reg_n_125,buff0_reg_n_126,buff0_reg_n_127,buff0_reg_n_128,buff0_reg_n_129,buff0_reg_n_130,buff0_reg_n_131,buff0_reg_n_132,buff0_reg_n_133,buff0_reg_n_134,buff0_reg_n_135,buff0_reg_n_136,buff0_reg_n_137,buff0_reg_n_138,buff0_reg_n_139,buff0_reg_n_140,buff0_reg_n_141,buff0_reg_n_142,buff0_reg_n_143,buff0_reg_n_144,buff0_reg_n_145,buff0_reg_n_146,buff0_reg_n_147,buff0_reg_n_148,buff0_reg_n_149,buff0_reg_n_150,buff0_reg_n_151,buff0_reg_n_152,buff0_reg_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 14x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(2),
    .BREG(2),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
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
    buff0_reg__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b1}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(Q),
        .CEB2(1'b1),
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
        .MULTSIGNOUT(NLW_buff0_reg__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg__0_OVERFLOW_UNCONNECTED),
        .P({buff0_reg__0_n_58,buff0_reg__0_n_59,buff0_reg__0_n_60,buff0_reg__0_n_61,buff0_reg__0_n_62,buff0_reg__0_n_63,buff0_reg__0_n_64,buff0_reg__0_n_65,buff0_reg__0_n_66,buff0_reg__0_n_67,buff0_reg__0_n_68,buff0_reg__0_n_69,buff0_reg__0_n_70,buff0_reg__0_n_71,buff0_reg__0_n_72,buff0_reg__0_n_73,buff0_reg__0_n_74,buff0_reg__0_n_75,buff0_reg__0_n_76,buff0_reg__0_n_77,buff0_reg__0_n_78,buff0_reg__0_n_79,buff0_reg__0_n_80,buff0_reg__0_n_81,buff0_reg__0_n_82,buff0_reg__0_n_83,buff0_reg__0_n_84,buff0_reg__0_n_85,buff0_reg__0_n_86,buff0_reg__0_n_87,buff0_reg__0_n_88,buff0_reg__0_n_89,buff0_reg__0_n_90,buff0_reg__0_n_91,buff0_reg__0_n_92,buff0_reg__0_n_93,buff0_reg__0_n_94,buff0_reg__0_n_95,buff0_reg__0_n_96,buff0_reg__0_n_97,buff0_reg__0_n_98,buff0_reg__0_n_99,buff0_reg__0_n_100,buff0_reg__0_n_101,buff0_reg__0_n_102,buff0_reg__0_n_103,buff0_reg__0_n_104,buff0_reg__0_n_105}),
        .PATTERNBDETECT(NLW_buff0_reg__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg__0_n_106,buff0_reg__0_n_107,buff0_reg__0_n_108,buff0_reg__0_n_109,buff0_reg__0_n_110,buff0_reg__0_n_111,buff0_reg__0_n_112,buff0_reg__0_n_113,buff0_reg__0_n_114,buff0_reg__0_n_115,buff0_reg__0_n_116,buff0_reg__0_n_117,buff0_reg__0_n_118,buff0_reg__0_n_119,buff0_reg__0_n_120,buff0_reg__0_n_121,buff0_reg__0_n_122,buff0_reg__0_n_123,buff0_reg__0_n_124,buff0_reg__0_n_125,buff0_reg__0_n_126,buff0_reg__0_n_127,buff0_reg__0_n_128,buff0_reg__0_n_129,buff0_reg__0_n_130,buff0_reg__0_n_131,buff0_reg__0_n_132,buff0_reg__0_n_133,buff0_reg__0_n_134,buff0_reg__0_n_135,buff0_reg__0_n_136,buff0_reg__0_n_137,buff0_reg__0_n_138,buff0_reg__0_n_139,buff0_reg__0_n_140,buff0_reg__0_n_141,buff0_reg__0_n_142,buff0_reg__0_n_143,buff0_reg__0_n_144,buff0_reg__0_n_145,buff0_reg__0_n_146,buff0_reg__0_n_147,buff0_reg__0_n_148,buff0_reg__0_n_149,buff0_reg__0_n_150,buff0_reg__0_n_151,buff0_reg__0_n_152,buff0_reg__0_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg__0_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x16 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
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
    buff0_reg__1
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__1_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__1_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
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
        .MULTSIGNOUT(NLW_buff0_reg__1_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg__1_OVERFLOW_UNCONNECTED),
        .P(NLW_buff0_reg__1_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_buff0_reg__1_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg__1_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg__1_n_106,buff0_reg__1_n_107,buff0_reg__1_n_108,buff0_reg__1_n_109,buff0_reg__1_n_110,buff0_reg__1_n_111,buff0_reg__1_n_112,buff0_reg__1_n_113,buff0_reg__1_n_114,buff0_reg__1_n_115,buff0_reg__1_n_116,buff0_reg__1_n_117,buff0_reg__1_n_118,buff0_reg__1_n_119,buff0_reg__1_n_120,buff0_reg__1_n_121,buff0_reg__1_n_122,buff0_reg__1_n_123,buff0_reg__1_n_124,buff0_reg__1_n_125,buff0_reg__1_n_126,buff0_reg__1_n_127,buff0_reg__1_n_128,buff0_reg__1_n_129,buff0_reg__1_n_130,buff0_reg__1_n_131,buff0_reg__1_n_132,buff0_reg__1_n_133,buff0_reg__1_n_134,buff0_reg__1_n_135,buff0_reg__1_n_136,buff0_reg__1_n_137,buff0_reg__1_n_138,buff0_reg__1_n_139,buff0_reg__1_n_140,buff0_reg__1_n_141,buff0_reg__1_n_142,buff0_reg__1_n_143,buff0_reg__1_n_144,buff0_reg__1_n_145,buff0_reg__1_n_146,buff0_reg__1_n_147,buff0_reg__1_n_148,buff0_reg__1_n_149,buff0_reg__1_n_150,buff0_reg__1_n_151,buff0_reg__1_n_152,buff0_reg__1_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg__1_UNDERFLOW_UNCONNECTED));
  CARRY4 buff0_reg__1_i_1
       (.CI(buff0_reg__1_i_2_n_0),
        .CO({buff0_reg__1_i_1_n_0,buff0_reg__1_i_1_n_1,buff0_reg__1_i_1_n_2,buff0_reg__1_i_1_n_3}),
        .CYINIT(1'b0),
        .DI({buff0_reg__1_i_5__0_n_0,buff0_reg__1_i_6__0_n_0,buff0_reg__1_i_7__0_n_0,buff0_reg__1_i_8__0_n_0}),
        .O(sub_ln17_fu_78_p2[15:12]),
        .S({buff0_reg__1_i_9_n_0,buff0_reg__1_i_10_n_0,buff0_reg__1_i_11_n_0,buff0_reg__1_i_12_n_0}));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_10
       (.I0(p_9[13]),
        .I1(p_7[13]),
        .I2(p_7[14]),
        .I3(p_9[14]),
        .O(buff0_reg__1_i_10_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_11
       (.I0(p_9[12]),
        .I1(p_7[12]),
        .I2(p_7[13]),
        .I3(p_9[13]),
        .O(buff0_reg__1_i_11_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_12
       (.I0(p_9[11]),
        .I1(p_7[11]),
        .I2(p_7[12]),
        .I3(p_9[12]),
        .O(buff0_reg__1_i_12_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_13
       (.I0(p_7[10]),
        .I1(p_9[10]),
        .O(buff0_reg__1_i_13_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_14
       (.I0(p_7[9]),
        .I1(p_9[9]),
        .O(buff0_reg__1_i_14_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_15
       (.I0(p_7[8]),
        .I1(p_9[8]),
        .O(buff0_reg__1_i_15_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_16
       (.I0(p_7[7]),
        .I1(p_9[7]),
        .O(buff0_reg__1_i_16_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_17
       (.I0(p_9[10]),
        .I1(p_7[10]),
        .I2(p_7[11]),
        .I3(p_9[11]),
        .O(buff0_reg__1_i_17_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_18
       (.I0(p_9[9]),
        .I1(p_7[9]),
        .I2(p_7[10]),
        .I3(p_9[10]),
        .O(buff0_reg__1_i_18_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_19
       (.I0(p_9[8]),
        .I1(p_7[8]),
        .I2(p_7[9]),
        .I3(p_9[9]),
        .O(buff0_reg__1_i_19_n_0));
  CARRY4 buff0_reg__1_i_2
       (.CI(buff0_reg__1_i_3_n_0),
        .CO({buff0_reg__1_i_2_n_0,buff0_reg__1_i_2_n_1,buff0_reg__1_i_2_n_2,buff0_reg__1_i_2_n_3}),
        .CYINIT(1'b0),
        .DI({buff0_reg__1_i_13_n_0,buff0_reg__1_i_14_n_0,buff0_reg__1_i_15_n_0,buff0_reg__1_i_16_n_0}),
        .O(sub_ln17_fu_78_p2[11:8]),
        .S({buff0_reg__1_i_17_n_0,buff0_reg__1_i_18_n_0,buff0_reg__1_i_19_n_0,buff0_reg__1_i_20_n_0}));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_20
       (.I0(p_9[7]),
        .I1(p_7[7]),
        .I2(p_7[8]),
        .I3(p_9[8]),
        .O(buff0_reg__1_i_20_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_21
       (.I0(p_7[6]),
        .I1(p_9[6]),
        .O(buff0_reg__1_i_21_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_22
       (.I0(p_7[5]),
        .I1(p_9[5]),
        .O(buff0_reg__1_i_22_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_23
       (.I0(p_7[4]),
        .I1(p_9[4]),
        .O(buff0_reg__1_i_23_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_24
       (.I0(p_7[3]),
        .I1(p_9[3]),
        .O(buff0_reg__1_i_24_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_25
       (.I0(p_9[6]),
        .I1(p_7[6]),
        .I2(p_7[7]),
        .I3(p_9[7]),
        .O(buff0_reg__1_i_25_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_26
       (.I0(p_9[5]),
        .I1(p_7[5]),
        .I2(p_7[6]),
        .I3(p_9[6]),
        .O(buff0_reg__1_i_26_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_27
       (.I0(p_9[4]),
        .I1(p_7[4]),
        .I2(p_7[5]),
        .I3(p_9[5]),
        .O(buff0_reg__1_i_27_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_28
       (.I0(p_9[3]),
        .I1(p_7[3]),
        .I2(p_7[4]),
        .I3(p_9[4]),
        .O(buff0_reg__1_i_28_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_29
       (.I0(p_7[2]),
        .I1(p_9[2]),
        .O(buff0_reg__1_i_29_n_0));
  CARRY4 buff0_reg__1_i_3
       (.CI(buff0_reg__1_i_4_n_0),
        .CO({buff0_reg__1_i_3_n_0,buff0_reg__1_i_3_n_1,buff0_reg__1_i_3_n_2,buff0_reg__1_i_3_n_3}),
        .CYINIT(1'b0),
        .DI({buff0_reg__1_i_21_n_0,buff0_reg__1_i_22_n_0,buff0_reg__1_i_23_n_0,buff0_reg__1_i_24_n_0}),
        .O(sub_ln17_fu_78_p2[7:4]),
        .S({buff0_reg__1_i_25_n_0,buff0_reg__1_i_26_n_0,buff0_reg__1_i_27_n_0,buff0_reg__1_i_28_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_30
       (.I0(p_7[1]),
        .O(buff0_reg__1_i_30_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    buff0_reg__1_i_31
       (.I0(p_9[2]),
        .I1(p_7[2]),
        .I2(p_7[3]),
        .I3(p_9[3]),
        .O(buff0_reg__1_i_31_n_0));
  LUT3 #(
    .INIT(8'h69)) 
    buff0_reg__1_i_32
       (.I0(p_7[1]),
        .I1(p_7[2]),
        .I2(p_9[2]),
        .O(buff0_reg__1_i_32_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    buff0_reg__1_i_33
       (.I0(p_7[1]),
        .I1(p_9[1]),
        .O(buff0_reg__1_i_33_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    buff0_reg__1_i_34
       (.I0(p_9[0]),
        .I1(p_7[0]),
        .O(buff0_reg__1_i_34_n_0));
  CARRY4 buff0_reg__1_i_4
       (.CI(1'b0),
        .CO({buff0_reg__1_i_4_n_0,buff0_reg__1_i_4_n_1,buff0_reg__1_i_4_n_2,buff0_reg__1_i_4_n_3}),
        .CYINIT(1'b0),
        .DI({buff0_reg__1_i_29_n_0,p_7[1],buff0_reg__1_i_30_n_0,p_7[0]}),
        .O(sub_ln17_fu_78_p2[3:0]),
        .S({buff0_reg__1_i_31_n_0,buff0_reg__1_i_32_n_0,buff0_reg__1_i_33_n_0,buff0_reg__1_i_34_n_0}));
  LUT2 #(
    .INIT(4'h9)) 
    buff0_reg__1_i_5__0
       (.I0(p_9[15]),
        .I1(p_7[15]),
        .O(buff0_reg__1_i_5__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_6__0
       (.I0(p_7[13]),
        .I1(p_9[13]),
        .O(buff0_reg__1_i_6__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_7__0
       (.I0(p_7[12]),
        .I1(p_9[12]),
        .O(buff0_reg__1_i_7__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    buff0_reg__1_i_8__0
       (.I0(p_7[11]),
        .I1(p_9[11]),
        .O(buff0_reg__1_i_8__0_n_0));
  LUT4 #(
    .INIT(16'h9699)) 
    buff0_reg__1_i_9
       (.I0(p_7[15]),
        .I1(p_9[15]),
        .I2(p_9[14]),
        .I3(p_7[14]),
        .O(buff0_reg__1_i_9_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
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
    buff0_reg__2
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__2_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__2_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__2_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
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
        .MULTSIGNOUT(NLW_buff0_reg__2_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg__2_OVERFLOW_UNCONNECTED),
        .P(NLW_buff0_reg__2_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_buff0_reg__2_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg__2_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg__2_n_106,buff0_reg__2_n_107,buff0_reg__2_n_108,buff0_reg__2_n_109,buff0_reg__2_n_110,buff0_reg__2_n_111,buff0_reg__2_n_112,buff0_reg__2_n_113,buff0_reg__2_n_114,buff0_reg__2_n_115,buff0_reg__2_n_116,buff0_reg__2_n_117,buff0_reg__2_n_118,buff0_reg__2_n_119,buff0_reg__2_n_120,buff0_reg__2_n_121,buff0_reg__2_n_122,buff0_reg__2_n_123,buff0_reg__2_n_124,buff0_reg__2_n_125,buff0_reg__2_n_126,buff0_reg__2_n_127,buff0_reg__2_n_128,buff0_reg__2_n_129,buff0_reg__2_n_130,buff0_reg__2_n_131,buff0_reg__2_n_132,buff0_reg__2_n_133,buff0_reg__2_n_134,buff0_reg__2_n_135,buff0_reg__2_n_136,buff0_reg__2_n_137,buff0_reg__2_n_138,buff0_reg__2_n_139,buff0_reg__2_n_140,buff0_reg__2_n_141,buff0_reg__2_n_142,buff0_reg__2_n_143,buff0_reg__2_n_144,buff0_reg__2_n_145,buff0_reg__2_n_146,buff0_reg__2_n_147,buff0_reg__2_n_148,buff0_reg__2_n_149,buff0_reg__2_n_150,buff0_reg__2_n_151,buff0_reg__2_n_152,buff0_reg__2_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg__2_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
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
    buff0_reg__3
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__3_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__3_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__3_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__3_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
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
        .MULTSIGNOUT(NLW_buff0_reg__3_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg__3_OVERFLOW_UNCONNECTED),
        .P({buff0_reg__3_n_58,buff0_reg__3_n_59,buff0_reg__3_n_60,buff0_reg__3_n_61,buff0_reg__3_n_62,buff0_reg__3_n_63,buff0_reg__3_n_64,buff0_reg__3_n_65,buff0_reg__3_n_66,buff0_reg__3_n_67,buff0_reg__3_n_68,buff0_reg__3_n_69,buff0_reg__3_n_70,buff0_reg__3_n_71,buff0_reg__3_n_72,buff0_reg__3_n_73,buff0_reg__3_n_74,buff0_reg__3_n_75,buff0_reg__3_n_76,buff0_reg__3_n_77,buff0_reg__3_n_78,buff0_reg__3_n_79,buff0_reg__3_n_80,buff0_reg__3_n_81,buff0_reg__3_n_82,buff0_reg__3_n_83,buff0_reg__3_n_84,buff0_reg__3_n_85,buff0_reg__3_n_86,buff0_reg__3_n_87,buff0_reg__3_n_88,buff0_reg__3_n_89,buff0_reg__3_n_90,buff0_reg__3_n_91,buff0_reg__3_n_92,buff0_reg__3_n_93,buff0_reg__3_n_94,buff0_reg__3_n_95,buff0_reg__3_n_96,buff0_reg__3_n_97,buff0_reg__3_n_98,buff0_reg__3_n_99,buff0_reg__3_n_100,buff0_reg__3_n_101,buff0_reg__3_n_102,buff0_reg__3_n_103,buff0_reg__3_n_104,buff0_reg__3_n_105}),
        .PATTERNBDETECT(NLW_buff0_reg__3_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff0_reg__3_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({buff0_reg__3_n_106,buff0_reg__3_n_107,buff0_reg__3_n_108,buff0_reg__3_n_109,buff0_reg__3_n_110,buff0_reg__3_n_111,buff0_reg__3_n_112,buff0_reg__3_n_113,buff0_reg__3_n_114,buff0_reg__3_n_115,buff0_reg__3_n_116,buff0_reg__3_n_117,buff0_reg__3_n_118,buff0_reg__3_n_119,buff0_reg__3_n_120,buff0_reg__3_n_121,buff0_reg__3_n_122,buff0_reg__3_n_123,buff0_reg__3_n_124,buff0_reg__3_n_125,buff0_reg__3_n_126,buff0_reg__3_n_127,buff0_reg__3_n_128,buff0_reg__3_n_129,buff0_reg__3_n_130,buff0_reg__3_n_131,buff0_reg__3_n_132,buff0_reg__3_n_133,buff0_reg__3_n_134,buff0_reg__3_n_135,buff0_reg__3_n_136,buff0_reg__3_n_137,buff0_reg__3_n_138,buff0_reg__3_n_139,buff0_reg__3_n_140,buff0_reg__3_n_141,buff0_reg__3_n_142,buff0_reg__3_n_143,buff0_reg__3_n_144,buff0_reg__3_n_145,buff0_reg__3_n_146,buff0_reg__3_n_147,buff0_reg__3_n_148,buff0_reg__3_n_149,buff0_reg__3_n_150,buff0_reg__3_n_151,buff0_reg__3_n_152,buff0_reg__3_n_153}),
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
        .UNDERFLOW(NLW_buff0_reg__3_UNDERFLOW_UNCONNECTED));
  CARRY4 buff0_reg_i_1
       (.CI(buff0_reg__1_i_1_n_0),
        .CO({NLW_buff0_reg_i_1_CO_UNCONNECTED[3:1],buff0_reg_i_1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_buff0_reg_i_1_O_UNCONNECTED[3:2],sub_ln17_fu_78_p2[17:16]}),
        .S({1'b0,1'b0,1'b1,buff0_reg_i_2_n_0}));
  LUT2 #(
    .INIT(4'h7)) 
    buff0_reg_i_2
       (.I0(p_9[15]),
        .I1(p_7[15]),
        .O(buff0_reg_i_2_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff1_reg
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg_OVERFLOW_UNCONNECTED),
        .P({buff1_reg_n_58,buff1_reg_n_59,buff1_reg_n_60,buff1_reg_n_61,buff1_reg_n_62,buff1_reg_n_63,buff1_reg_n_64,buff1_reg_n_65,buff1_reg_n_66,buff1_reg_n_67,buff1_reg_n_68,buff1_reg_n_69,buff1_reg_n_70,buff1_reg_n_71,buff1_reg_n_72,buff1_reg_n_73,buff1_reg_n_74,buff1_reg_n_75,buff1_reg_n_76,buff1_reg_n_77,buff1_reg_n_78,buff1_reg_n_79,buff1_reg_n_80,buff1_reg_n_81,buff1_reg_n_82,buff1_reg_n_83,buff1_reg_n_84,buff1_reg_n_85,buff1_reg_n_86,buff1_reg_n_87,buff1_reg_n_88,buff1_reg_n_89,buff1_reg_n_90,buff1_reg_n_91,buff1_reg_n_92,buff1_reg_n_93,buff1_reg_n_94,buff1_reg_n_95,buff1_reg_n_96,buff1_reg_n_97,buff1_reg_n_98,buff1_reg_n_99,buff1_reg_n_100,buff1_reg_n_101,buff1_reg_n_102,buff1_reg_n_103,buff1_reg_n_104,buff1_reg_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product_n_106,tmp_product_n_107,tmp_product_n_108,tmp_product_n_109,tmp_product_n_110,tmp_product_n_111,tmp_product_n_112,tmp_product_n_113,tmp_product_n_114,tmp_product_n_115,tmp_product_n_116,tmp_product_n_117,tmp_product_n_118,tmp_product_n_119,tmp_product_n_120,tmp_product_n_121,tmp_product_n_122,tmp_product_n_123,tmp_product_n_124,tmp_product_n_125,tmp_product_n_126,tmp_product_n_127,tmp_product_n_128,tmp_product_n_129,tmp_product_n_130,tmp_product_n_131,tmp_product_n_132,tmp_product_n_133,tmp_product_n_134,tmp_product_n_135,tmp_product_n_136,tmp_product_n_137,tmp_product_n_138,tmp_product_n_139,tmp_product_n_140,tmp_product_n_141,tmp_product_n_142,tmp_product_n_143,tmp_product_n_144,tmp_product_n_145,tmp_product_n_146,tmp_product_n_147,tmp_product_n_148,tmp_product_n_149,tmp_product_n_150,tmp_product_n_151,tmp_product_n_152,tmp_product_n_153}),
        .PCOUT(NLW_buff1_reg_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg_UNDERFLOW_UNCONNECTED));
  FDRE \buff1_reg[0]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_105),
        .Q(\buff1_reg[0]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[10]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_95),
        .Q(\buff1_reg[10]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[11]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_94),
        .Q(\buff1_reg[11]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[12]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_93),
        .Q(\buff1_reg[12]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[13]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_92),
        .Q(\buff1_reg[13]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[14]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_91),
        .Q(\buff1_reg[14]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[15]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_90),
        .Q(\buff1_reg[15]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[16]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_89),
        .Q(\buff1_reg[16]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[1]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_104),
        .Q(\buff1_reg[1]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[2]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_103),
        .Q(\buff1_reg[2]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[3]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_102),
        .Q(\buff1_reg[3]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[4]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_101),
        .Q(\buff1_reg[4]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[5]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_100),
        .Q(\buff1_reg[5]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[6]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_99),
        .Q(\buff1_reg[6]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[7]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_98),
        .Q(\buff1_reg[7]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[8]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_97),
        .Q(\buff1_reg[8]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[9]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_96),
        .Q(\buff1_reg[9]__0_n_0 ),
        .R(1'b0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff1_reg__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff1_reg__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg__0_OVERFLOW_UNCONNECTED),
        .P({buff1_reg__0_n_58,buff1_reg__0_n_59,buff1_reg__0_n_60,buff1_reg__0_n_61,buff1_reg__0_n_62,buff1_reg__0_n_63,buff1_reg__0_n_64,buff1_reg__0_n_65,buff1_reg__0_n_66,buff1_reg__0_n_67,buff1_reg__0_n_68,buff1_reg__0_n_69,buff1_reg__0_n_70,buff1_reg__0_n_71,buff1_reg__0_n_72,buff1_reg__0_n_73,buff1_reg__0_n_74,buff1_reg__0_n_75,buff1_reg__0_n_76,buff1_reg__0_n_77,buff1_reg__0_n_78,buff1_reg__0_n_79,buff1_reg__0_n_80,buff1_reg__0_n_81,buff1_reg__0_n_82,buff1_reg__0_n_83,buff1_reg__0_n_84,buff1_reg__0_n_85,buff1_reg__0_n_86,buff1_reg__0_n_87,buff1_reg__0_n_88,buff1_reg__0_n_89,buff1_reg__0_n_90,buff1_reg__0_n_91,buff1_reg__0_n_92,buff1_reg__0_n_93,buff1_reg__0_n_94,buff1_reg__0_n_95,buff1_reg__0_n_96,buff1_reg__0_n_97,buff1_reg__0_n_98,buff1_reg__0_n_99,buff1_reg__0_n_100,buff1_reg__0_n_101,buff1_reg__0_n_102,buff1_reg__0_n_103,buff1_reg__0_n_104,buff1_reg__0_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__0_n_106,tmp_product__0_n_107,tmp_product__0_n_108,tmp_product__0_n_109,tmp_product__0_n_110,tmp_product__0_n_111,tmp_product__0_n_112,tmp_product__0_n_113,tmp_product__0_n_114,tmp_product__0_n_115,tmp_product__0_n_116,tmp_product__0_n_117,tmp_product__0_n_118,tmp_product__0_n_119,tmp_product__0_n_120,tmp_product__0_n_121,tmp_product__0_n_122,tmp_product__0_n_123,tmp_product__0_n_124,tmp_product__0_n_125,tmp_product__0_n_126,tmp_product__0_n_127,tmp_product__0_n_128,tmp_product__0_n_129,tmp_product__0_n_130,tmp_product__0_n_131,tmp_product__0_n_132,tmp_product__0_n_133,tmp_product__0_n_134,tmp_product__0_n_135,tmp_product__0_n_136,tmp_product__0_n_137,tmp_product__0_n_138,tmp_product__0_n_139,tmp_product__0_n_140,tmp_product__0_n_141,tmp_product__0_n_142,tmp_product__0_n_143,tmp_product__0_n_144,tmp_product__0_n_145,tmp_product__0_n_146,tmp_product__0_n_147,tmp_product__0_n_148,tmp_product__0_n_149,tmp_product__0_n_150,tmp_product__0_n_151,tmp_product__0_n_152,tmp_product__0_n_153}),
        .PCOUT(NLW_buff1_reg__0_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg__0_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff1_reg__1
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__1_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__1_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__1_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff1_reg__1_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg__1_OVERFLOW_UNCONNECTED),
        .P({buff1_reg__1_n_58,buff1_reg__1_n_59,buff1_reg__1_n_60,buff1_reg__1_n_61,buff1_reg__1_n_62,buff1_reg__1_n_63,buff1_reg__1_n_64,buff1_reg__1_n_65,buff1_reg__1_n_66,buff1_reg__1_n_67,buff1_reg__1_n_68,buff1_reg__1_n_69,buff1_reg__1_n_70,buff1_reg__1_n_71,buff1_reg__1_n_72,buff1_reg__1_n_73,buff1_reg__1_n_74,buff1_reg__1_n_75,buff1_reg__1_n_76,buff1_reg__1_n_77,buff1_reg__1_n_78,buff1_reg__1_n_79,buff1_reg__1_n_80,buff1_reg__1_n_81,buff1_reg__1_n_82,buff1_reg__1_n_83,buff1_reg__1_n_84,buff1_reg__1_n_85,buff1_reg__1_n_86,buff1_reg__1_n_87,buff1_reg__1_n_88,buff1_reg__1_n_89,buff1_reg__1_n_90,buff1_reg__1_n_91,buff1_reg__1_n_92,buff1_reg__1_n_93,buff1_reg__1_n_94,buff1_reg__1_n_95,buff1_reg__1_n_96,buff1_reg__1_n_97,buff1_reg__1_n_98,buff1_reg__1_n_99,buff1_reg__1_n_100,buff1_reg__1_n_101,buff1_reg__1_n_102,buff1_reg__1_n_103,buff1_reg__1_n_104,buff1_reg__1_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg__1_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg__1_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__1_n_106,tmp_product__1_n_107,tmp_product__1_n_108,tmp_product__1_n_109,tmp_product__1_n_110,tmp_product__1_n_111,tmp_product__1_n_112,tmp_product__1_n_113,tmp_product__1_n_114,tmp_product__1_n_115,tmp_product__1_n_116,tmp_product__1_n_117,tmp_product__1_n_118,tmp_product__1_n_119,tmp_product__1_n_120,tmp_product__1_n_121,tmp_product__1_n_122,tmp_product__1_n_123,tmp_product__1_n_124,tmp_product__1_n_125,tmp_product__1_n_126,tmp_product__1_n_127,tmp_product__1_n_128,tmp_product__1_n_129,tmp_product__1_n_130,tmp_product__1_n_131,tmp_product__1_n_132,tmp_product__1_n_133,tmp_product__1_n_134,tmp_product__1_n_135,tmp_product__1_n_136,tmp_product__1_n_137,tmp_product__1_n_138,tmp_product__1_n_139,tmp_product__1_n_140,tmp_product__1_n_141,tmp_product__1_n_142,tmp_product__1_n_143,tmp_product__1_n_144,tmp_product__1_n_145,tmp_product__1_n_146,tmp_product__1_n_147,tmp_product__1_n_148,tmp_product__1_n_149,tmp_product__1_n_150,tmp_product__1_n_151,tmp_product__1_n_152,tmp_product__1_n_153}),
        .PCOUT(NLW_buff1_reg__1_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg__1_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    buff1_reg__2
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__2_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__2_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__2_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_buff1_reg__2_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg__2_OVERFLOW_UNCONNECTED),
        .P({buff1_reg__2_n_58,buff1_reg__2_n_59,buff1_reg__2_n_60,buff1_reg__2_n_61,buff1_reg__2_n_62,buff1_reg__2_n_63,buff1_reg__2_n_64,buff1_reg__2_n_65,buff1_reg__2_n_66,buff1_reg__2_n_67,buff1_reg__2_n_68,buff1_reg__2_n_69,buff1_reg__2_n_70,buff1_reg__2_n_71,buff1_reg__2_n_72,buff1_reg__2_n_73,buff1_reg__2_n_74,buff1_reg__2_n_75,buff1_reg__2_n_76,buff1_reg__2_n_77,buff1_reg__2_n_78,buff1_reg__2_n_79,buff1_reg__2_n_80,buff1_reg__2_n_81,buff1_reg__2_n_82,buff1_reg__2_n_83,buff1_reg__2_n_84,buff1_reg__2_n_85,buff1_reg__2_n_86,buff1_reg__2_n_87,buff1_reg__2_n_88,buff1_reg__2_n_89,buff1_reg__2_n_90,buff1_reg__2_n_91,buff1_reg__2_n_92,buff1_reg__2_n_93,buff1_reg__2_n_94,buff1_reg__2_n_95,buff1_reg__2_n_96,buff1_reg__2_n_97,buff1_reg__2_n_98,buff1_reg__2_n_99,buff1_reg__2_n_100,buff1_reg__2_n_101,buff1_reg__2_n_102,buff1_reg__2_n_103,buff1_reg__2_n_104,buff1_reg__2_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg__2_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg__2_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__2_n_106,tmp_product__2_n_107,tmp_product__2_n_108,tmp_product__2_n_109,tmp_product__2_n_110,tmp_product__2_n_111,tmp_product__2_n_112,tmp_product__2_n_113,tmp_product__2_n_114,tmp_product__2_n_115,tmp_product__2_n_116,tmp_product__2_n_117,tmp_product__2_n_118,tmp_product__2_n_119,tmp_product__2_n_120,tmp_product__2_n_121,tmp_product__2_n_122,tmp_product__2_n_123,tmp_product__2_n_124,tmp_product__2_n_125,tmp_product__2_n_126,tmp_product__2_n_127,tmp_product__2_n_128,tmp_product__2_n_129,tmp_product__2_n_130,tmp_product__2_n_131,tmp_product__2_n_132,tmp_product__2_n_133,tmp_product__2_n_134,tmp_product__2_n_135,tmp_product__2_n_136,tmp_product__2_n_137,tmp_product__2_n_138,tmp_product__2_n_139,tmp_product__2_n_140,tmp_product__2_n_141,tmp_product__2_n_142,tmp_product__2_n_143,tmp_product__2_n_144,tmp_product__2_n_145,tmp_product__2_n_146,tmp_product__2_n_147,tmp_product__2_n_148,tmp_product__2_n_149,tmp_product__2_n_150,tmp_product__2_n_151,tmp_product__2_n_152,tmp_product__2_n_153}),
        .PCOUT(NLW_buff1_reg__2_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg__2_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x16 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__0_n_106,buff0_reg__0_n_107,buff0_reg__0_n_108,buff0_reg__0_n_109,buff0_reg__0_n_110,buff0_reg__0_n_111,buff0_reg__0_n_112,buff0_reg__0_n_113,buff0_reg__0_n_114,buff0_reg__0_n_115,buff0_reg__0_n_116,buff0_reg__0_n_117,buff0_reg__0_n_118,buff0_reg__0_n_119,buff0_reg__0_n_120,buff0_reg__0_n_121,buff0_reg__0_n_122,buff0_reg__0_n_123,buff0_reg__0_n_124,buff0_reg__0_n_125,buff0_reg__0_n_126,buff0_reg__0_n_127,buff0_reg__0_n_128,buff0_reg__0_n_129,buff0_reg__0_n_130,buff0_reg__0_n_131,buff0_reg__0_n_132,buff0_reg__0_n_133,buff0_reg__0_n_134,buff0_reg__0_n_135,buff0_reg__0_n_136,buff0_reg__0_n_137,buff0_reg__0_n_138,buff0_reg__0_n_139,buff0_reg__0_n_140,buff0_reg__0_n_141,buff0_reg__0_n_142,buff0_reg__0_n_143,buff0_reg__0_n_144,buff0_reg__0_n_145,buff0_reg__0_n_146,buff0_reg__0_n_147,buff0_reg__0_n_148,buff0_reg__0_n_149,buff0_reg__0_n_150,buff0_reg__0_n_151,buff0_reg__0_n_152,buff0_reg__0_n_153}),
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
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__0_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product__0_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__1_n_106,buff0_reg__1_n_107,buff0_reg__1_n_108,buff0_reg__1_n_109,buff0_reg__1_n_110,buff0_reg__1_n_111,buff0_reg__1_n_112,buff0_reg__1_n_113,buff0_reg__1_n_114,buff0_reg__1_n_115,buff0_reg__1_n_116,buff0_reg__1_n_117,buff0_reg__1_n_118,buff0_reg__1_n_119,buff0_reg__1_n_120,buff0_reg__1_n_121,buff0_reg__1_n_122,buff0_reg__1_n_123,buff0_reg__1_n_124,buff0_reg__1_n_125,buff0_reg__1_n_126,buff0_reg__1_n_127,buff0_reg__1_n_128,buff0_reg__1_n_129,buff0_reg__1_n_130,buff0_reg__1_n_131,buff0_reg__1_n_132,buff0_reg__1_n_133,buff0_reg__1_n_134,buff0_reg__1_n_135,buff0_reg__1_n_136,buff0_reg__1_n_137,buff0_reg__1_n_138,buff0_reg__1_n_139,buff0_reg__1_n_140,buff0_reg__1_n_141,buff0_reg__1_n_142,buff0_reg__1_n_143,buff0_reg__1_n_144,buff0_reg__1_n_145,buff0_reg__1_n_146,buff0_reg__1_n_147,buff0_reg__1_n_148,buff0_reg__1_n_149,buff0_reg__1_n_150,buff0_reg__1_n_151,buff0_reg__1_n_152,buff0_reg__1_n_153}),
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
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product__1
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17],sub_ln17_fu_78_p2[17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__1_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__1_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__1_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product__1_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__1_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product__1_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product__1_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__1_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__2_n_106,buff0_reg__2_n_107,buff0_reg__2_n_108,buff0_reg__2_n_109,buff0_reg__2_n_110,buff0_reg__2_n_111,buff0_reg__2_n_112,buff0_reg__2_n_113,buff0_reg__2_n_114,buff0_reg__2_n_115,buff0_reg__2_n_116,buff0_reg__2_n_117,buff0_reg__2_n_118,buff0_reg__2_n_119,buff0_reg__2_n_120,buff0_reg__2_n_121,buff0_reg__2_n_122,buff0_reg__2_n_123,buff0_reg__2_n_124,buff0_reg__2_n_125,buff0_reg__2_n_126,buff0_reg__2_n_127,buff0_reg__2_n_128,buff0_reg__2_n_129,buff0_reg__2_n_130,buff0_reg__2_n_131,buff0_reg__2_n_132,buff0_reg__2_n_133,buff0_reg__2_n_134,buff0_reg__2_n_135,buff0_reg__2_n_136,buff0_reg__2_n_137,buff0_reg__2_n_138,buff0_reg__2_n_139,buff0_reg__2_n_140,buff0_reg__2_n_141,buff0_reg__2_n_142,buff0_reg__2_n_143,buff0_reg__2_n_144,buff0_reg__2_n_145,buff0_reg__2_n_146,buff0_reg__2_n_147,buff0_reg__2_n_148,buff0_reg__2_n_149,buff0_reg__2_n_150,buff0_reg__2_n_151,buff0_reg__2_n_152,buff0_reg__2_n_153}),
        .PCOUT({tmp_product__1_n_106,tmp_product__1_n_107,tmp_product__1_n_108,tmp_product__1_n_109,tmp_product__1_n_110,tmp_product__1_n_111,tmp_product__1_n_112,tmp_product__1_n_113,tmp_product__1_n_114,tmp_product__1_n_115,tmp_product__1_n_116,tmp_product__1_n_117,tmp_product__1_n_118,tmp_product__1_n_119,tmp_product__1_n_120,tmp_product__1_n_121,tmp_product__1_n_122,tmp_product__1_n_123,tmp_product__1_n_124,tmp_product__1_n_125,tmp_product__1_n_126,tmp_product__1_n_127,tmp_product__1_n_128,tmp_product__1_n_129,tmp_product__1_n_130,tmp_product__1_n_131,tmp_product__1_n_132,tmp_product__1_n_133,tmp_product__1_n_134,tmp_product__1_n_135,tmp_product__1_n_136,tmp_product__1_n_137,tmp_product__1_n_138,tmp_product__1_n_139,tmp_product__1_n_140,tmp_product__1_n_141,tmp_product__1_n_142,tmp_product__1_n_143,tmp_product__1_n_144,tmp_product__1_n_145,tmp_product__1_n_146,tmp_product__1_n_147,tmp_product__1_n_148,tmp_product__1_n_149,tmp_product__1_n_150,tmp_product__1_n_151,tmp_product__1_n_152,tmp_product__1_n_153}),
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
        .UNDERFLOW(NLW_tmp_product__1_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 16}}" *) 
  DSP48E1 #(
    .ACASCREG(2),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(2),
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
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product__2
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,sub_ln17_fu_78_p2[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__2_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__2_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__2_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(Q),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b0),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product__2_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__2_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product__2_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product__2_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__2_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__3_n_106,buff0_reg__3_n_107,buff0_reg__3_n_108,buff0_reg__3_n_109,buff0_reg__3_n_110,buff0_reg__3_n_111,buff0_reg__3_n_112,buff0_reg__3_n_113,buff0_reg__3_n_114,buff0_reg__3_n_115,buff0_reg__3_n_116,buff0_reg__3_n_117,buff0_reg__3_n_118,buff0_reg__3_n_119,buff0_reg__3_n_120,buff0_reg__3_n_121,buff0_reg__3_n_122,buff0_reg__3_n_123,buff0_reg__3_n_124,buff0_reg__3_n_125,buff0_reg__3_n_126,buff0_reg__3_n_127,buff0_reg__3_n_128,buff0_reg__3_n_129,buff0_reg__3_n_130,buff0_reg__3_n_131,buff0_reg__3_n_132,buff0_reg__3_n_133,buff0_reg__3_n_134,buff0_reg__3_n_135,buff0_reg__3_n_136,buff0_reg__3_n_137,buff0_reg__3_n_138,buff0_reg__3_n_139,buff0_reg__3_n_140,buff0_reg__3_n_141,buff0_reg__3_n_142,buff0_reg__3_n_143,buff0_reg__3_n_144,buff0_reg__3_n_145,buff0_reg__3_n_146,buff0_reg__3_n_147,buff0_reg__3_n_148,buff0_reg__3_n_149,buff0_reg__3_n_150,buff0_reg__3_n_151,buff0_reg__3_n_152,buff0_reg__3_n_153}),
        .PCOUT({tmp_product__2_n_106,tmp_product__2_n_107,tmp_product__2_n_108,tmp_product__2_n_109,tmp_product__2_n_110,tmp_product__2_n_111,tmp_product__2_n_112,tmp_product__2_n_113,tmp_product__2_n_114,tmp_product__2_n_115,tmp_product__2_n_116,tmp_product__2_n_117,tmp_product__2_n_118,tmp_product__2_n_119,tmp_product__2_n_120,tmp_product__2_n_121,tmp_product__2_n_122,tmp_product__2_n_123,tmp_product__2_n_124,tmp_product__2_n_125,tmp_product__2_n_126,tmp_product__2_n_127,tmp_product__2_n_128,tmp_product__2_n_129,tmp_product__2_n_130,tmp_product__2_n_131,tmp_product__2_n_132,tmp_product__2_n_133,tmp_product__2_n_134,tmp_product__2_n_135,tmp_product__2_n_136,tmp_product__2_n_137,tmp_product__2_n_138,tmp_product__2_n_139,tmp_product__2_n_140,tmp_product__2_n_141,tmp_product__2_n_142,tmp_product__2_n_143,tmp_product__2_n_144,tmp_product__2_n_145,tmp_product__2_n_146,tmp_product__2_n_147,tmp_product__2_n_148,tmp_product__2_n_149,tmp_product__2_n_150,tmp_product__2_n_151,tmp_product__2_n_152,tmp_product__2_n_153}),
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
        .UNDERFLOW(NLW_tmp_product__2_UNDERFLOW_UNCONNECTED));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_1
       (.CI(tmp_product_i_2_n_0),
        .CO({NLW_tmp_product_i_1_CO_UNCONNECTED[3],tmp_product_i_1_n_1,tmp_product_i_1_n_2,tmp_product_i_1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,tmp_product_i_3_n_0,tmp_product_i_4_n_0,tmp_product_i_5_n_0}),
        .O(buff0_reg_0[7:4]),
        .S({tmp_product_i_6_n_0,tmp_product_i_7_n_0,tmp_product_i_8_n_0,tmp_product_i_9_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_10
       (.CI(tmp_product_i_21_n_0),
        .CO({tmp_product_i_10_n_0,tmp_product_i_10_n_1,tmp_product_i_10_n_2,tmp_product_i_10_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_22_n_0,tmp_product_i_23_n_0,tmp_product_i_24_n_0,tmp_product_i_25_n_0}),
        .O(NLW_tmp_product_i_10_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_26_n_0,tmp_product_i_27_n_0,tmp_product_i_28_n_0,tmp_product_i_29_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_100
       (.CI(tmp_product_i_110_n_0),
        .CO({tmp_product_i_100_n_0,tmp_product_i_100_n_1,tmp_product_i_100_n_2,tmp_product_i_100_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_111_n_0,buff1_reg__2_n_71,buff1_reg__2_n_72,buff1_reg__2_n_73}),
        .O({tmp_product_i_100_n_4,tmp_product_i_100_n_5,tmp_product_i_100_n_6,NLW_tmp_product_i_100_O_UNCONNECTED[0]}),
        .S({tmp_product_i_112_n_0,tmp_product_i_113_n_0,tmp_product_i_114_n_0,tmp_product_i_115_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_101
       (.CI(tmp_product_i_100_n_0),
        .CO({tmp_product_i_101_n_0,tmp_product_i_101_n_1,tmp_product_i_101_n_2,tmp_product_i_101_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_116_n_0,tmp_product_i_117_n_0,tmp_product_i_118_n_0,tmp_product_i_119_n_0}),
        .O({tmp_product_i_101_n_4,tmp_product_i_101_n_5,tmp_product_i_101_n_6,tmp_product_i_101_n_7}),
        .S({tmp_product_i_120_n_0,tmp_product_i_121_n_0,tmp_product_i_122_n_0,tmp_product_i_123_n_0}));
  (* HLUTNM = "lutpair7" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_102
       (.I0(buff1_reg__0_n_97),
        .I1(buff1_reg__1_n_80),
        .I2(buff1_reg__2_n_63),
        .O(tmp_product_i_102_n_0));
  (* HLUTNM = "lutpair6" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_103
       (.I0(buff1_reg__0_n_98),
        .I1(buff1_reg__1_n_81),
        .I2(buff1_reg__2_n_64),
        .O(tmp_product_i_103_n_0));
  (* HLUTNM = "lutpair5" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_104
       (.I0(buff1_reg__0_n_99),
        .I1(buff1_reg__1_n_82),
        .I2(buff1_reg__2_n_65),
        .O(tmp_product_i_104_n_0));
  (* HLUTNM = "lutpair4" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_105
       (.I0(buff1_reg__0_n_100),
        .I1(buff1_reg__1_n_83),
        .I2(buff1_reg__2_n_66),
        .O(tmp_product_i_105_n_0));
  (* HLUTNM = "lutpair8" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_106
       (.I0(buff1_reg__0_n_96),
        .I1(buff1_reg__1_n_79),
        .I2(buff1_reg__2_n_62),
        .I3(tmp_product_i_102_n_0),
        .O(tmp_product_i_106_n_0));
  (* HLUTNM = "lutpair7" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_107
       (.I0(buff1_reg__0_n_97),
        .I1(buff1_reg__1_n_80),
        .I2(buff1_reg__2_n_63),
        .I3(tmp_product_i_103_n_0),
        .O(tmp_product_i_107_n_0));
  (* HLUTNM = "lutpair6" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_108
       (.I0(buff1_reg__0_n_98),
        .I1(buff1_reg__1_n_81),
        .I2(buff1_reg__2_n_64),
        .I3(tmp_product_i_104_n_0),
        .O(tmp_product_i_108_n_0));
  (* HLUTNM = "lutpair5" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_109
       (.I0(buff1_reg__0_n_99),
        .I1(buff1_reg__1_n_82),
        .I2(buff1_reg__2_n_65),
        .I3(tmp_product_i_105_n_0),
        .O(tmp_product_i_109_n_0));
  (* HLUTNM = "lutpair18" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_11
       (.I0(tmp_product_i_30_n_4),
        .I1(buff0_reg_n_97),
        .I2(buff1_reg_n_97),
        .O(tmp_product_i_11_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_110
       (.CI(tmp_product_i_124_n_0),
        .CO({tmp_product_i_110_n_0,tmp_product_i_110_n_1,tmp_product_i_110_n_2,tmp_product_i_110_n_3}),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_74,buff1_reg__2_n_75,buff1_reg__2_n_76,buff1_reg__2_n_77}),
        .O(NLW_tmp_product_i_110_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_125_n_0,tmp_product_i_126_n_0,tmp_product_i_127_n_0,tmp_product_i_128_n_0}));
  LUT3 #(
    .INIT(8'h96)) 
    tmp_product_i_111
       (.I0(buff1_reg__2_n_70),
        .I1(buff1_reg__0_n_104),
        .I2(buff1_reg__1_n_87),
        .O(tmp_product_i_111_n_0));
  (* HLUTNM = "lutpair0" *) 
  LUT5 #(
    .INIT(32'h69969696)) 
    tmp_product_i_112
       (.I0(buff1_reg__0_n_104),
        .I1(buff1_reg__1_n_87),
        .I2(buff1_reg__2_n_70),
        .I3(buff1_reg__1_n_88),
        .I4(buff1_reg__0_n_105),
        .O(tmp_product_i_112_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    tmp_product_i_113
       (.I0(buff1_reg__0_n_105),
        .I1(buff1_reg__1_n_88),
        .I2(buff1_reg__2_n_71),
        .O(tmp_product_i_113_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_114
       (.I0(buff1_reg__2_n_72),
        .I1(buff1_reg__1_n_89),
        .O(tmp_product_i_114_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_115
       (.I0(buff1_reg__2_n_73),
        .I1(buff1_reg__1_n_90),
        .O(tmp_product_i_115_n_0));
  (* HLUTNM = "lutpair3" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_116
       (.I0(buff1_reg__0_n_101),
        .I1(buff1_reg__1_n_84),
        .I2(buff1_reg__2_n_67),
        .O(tmp_product_i_116_n_0));
  (* HLUTNM = "lutpair2" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_117
       (.I0(buff1_reg__0_n_102),
        .I1(buff1_reg__1_n_85),
        .I2(buff1_reg__2_n_68),
        .O(tmp_product_i_117_n_0));
  (* HLUTNM = "lutpair1" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_118
       (.I0(buff1_reg__0_n_103),
        .I1(buff1_reg__1_n_86),
        .I2(buff1_reg__2_n_69),
        .O(tmp_product_i_118_n_0));
  (* HLUTNM = "lutpair0" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_119
       (.I0(buff1_reg__0_n_104),
        .I1(buff1_reg__1_n_87),
        .I2(buff1_reg__2_n_70),
        .O(tmp_product_i_119_n_0));
  (* HLUTNM = "lutpair17" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_12
       (.I0(tmp_product_i_30_n_5),
        .I1(buff0_reg_n_98),
        .I2(buff1_reg_n_98),
        .O(tmp_product_i_12_n_0));
  (* HLUTNM = "lutpair4" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_120
       (.I0(buff1_reg__0_n_100),
        .I1(buff1_reg__1_n_83),
        .I2(buff1_reg__2_n_66),
        .I3(tmp_product_i_116_n_0),
        .O(tmp_product_i_120_n_0));
  (* HLUTNM = "lutpair3" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_121
       (.I0(buff1_reg__0_n_101),
        .I1(buff1_reg__1_n_84),
        .I2(buff1_reg__2_n_67),
        .I3(tmp_product_i_117_n_0),
        .O(tmp_product_i_121_n_0));
  (* HLUTNM = "lutpair2" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_122
       (.I0(buff1_reg__0_n_102),
        .I1(buff1_reg__1_n_85),
        .I2(buff1_reg__2_n_68),
        .I3(tmp_product_i_118_n_0),
        .O(tmp_product_i_122_n_0));
  (* HLUTNM = "lutpair1" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_123
       (.I0(buff1_reg__0_n_103),
        .I1(buff1_reg__1_n_86),
        .I2(buff1_reg__2_n_69),
        .I3(tmp_product_i_119_n_0),
        .O(tmp_product_i_123_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_124
       (.CI(tmp_product_i_129_n_0),
        .CO({tmp_product_i_124_n_0,tmp_product_i_124_n_1,tmp_product_i_124_n_2,tmp_product_i_124_n_3}),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_78,buff1_reg__2_n_79,buff1_reg__2_n_80,buff1_reg__2_n_81}),
        .O(NLW_tmp_product_i_124_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_130_n_0,tmp_product_i_131_n_0,tmp_product_i_132_n_0,tmp_product_i_133_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_125
       (.I0(buff1_reg__2_n_74),
        .I1(buff1_reg__1_n_91),
        .O(tmp_product_i_125_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_126
       (.I0(buff1_reg__2_n_75),
        .I1(buff1_reg__1_n_92),
        .O(tmp_product_i_126_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_127
       (.I0(buff1_reg__2_n_76),
        .I1(buff1_reg__1_n_93),
        .O(tmp_product_i_127_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_128
       (.I0(buff1_reg__2_n_77),
        .I1(buff1_reg__1_n_94),
        .O(tmp_product_i_128_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_129
       (.CI(tmp_product_i_134_n_0),
        .CO({tmp_product_i_129_n_0,tmp_product_i_129_n_1,tmp_product_i_129_n_2,tmp_product_i_129_n_3}),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_82,buff1_reg__2_n_83,buff1_reg__2_n_84,buff1_reg__2_n_85}),
        .O(NLW_tmp_product_i_129_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_135_n_0,tmp_product_i_136_n_0,tmp_product_i_137_n_0,tmp_product_i_138_n_0}));
  (* HLUTNM = "lutpair16" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_13
       (.I0(tmp_product_i_30_n_6),
        .I1(buff0_reg_n_99),
        .I2(buff1_reg_n_99),
        .O(tmp_product_i_13_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_130
       (.I0(buff1_reg__2_n_78),
        .I1(buff1_reg__1_n_95),
        .O(tmp_product_i_130_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_131
       (.I0(buff1_reg__2_n_79),
        .I1(buff1_reg__1_n_96),
        .O(tmp_product_i_131_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_132
       (.I0(buff1_reg__2_n_80),
        .I1(buff1_reg__1_n_97),
        .O(tmp_product_i_132_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_133
       (.I0(buff1_reg__2_n_81),
        .I1(buff1_reg__1_n_98),
        .O(tmp_product_i_133_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_134
       (.CI(1'b0),
        .CO({tmp_product_i_134_n_0,tmp_product_i_134_n_1,tmp_product_i_134_n_2,tmp_product_i_134_n_3}),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_86,buff1_reg__2_n_87,buff1_reg__2_n_88,1'b0}),
        .O(NLW_tmp_product_i_134_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_139_n_0,tmp_product_i_140_n_0,tmp_product_i_141_n_0,buff1_reg__2_n_89}));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_135
       (.I0(buff1_reg__2_n_82),
        .I1(buff1_reg__1_n_99),
        .O(tmp_product_i_135_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_136
       (.I0(buff1_reg__2_n_83),
        .I1(buff1_reg__1_n_100),
        .O(tmp_product_i_136_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_137
       (.I0(buff1_reg__2_n_84),
        .I1(buff1_reg__1_n_101),
        .O(tmp_product_i_137_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_138
       (.I0(buff1_reg__2_n_85),
        .I1(buff1_reg__1_n_102),
        .O(tmp_product_i_138_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_139
       (.I0(buff1_reg__2_n_86),
        .I1(buff1_reg__1_n_103),
        .O(tmp_product_i_139_n_0));
  (* HLUTNM = "lutpair15" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_14
       (.I0(tmp_product_i_30_n_7),
        .I1(buff0_reg_n_100),
        .I2(buff1_reg_n_100),
        .O(tmp_product_i_14_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_140
       (.I0(buff1_reg__2_n_87),
        .I1(buff1_reg__1_n_104),
        .O(tmp_product_i_140_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_141
       (.I0(buff1_reg__2_n_88),
        .I1(buff1_reg__1_n_105),
        .O(tmp_product_i_141_n_0));
  (* HLUTNM = "lutpair19" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_15
       (.I0(tmp_product_i_19_n_7),
        .I1(buff0_reg_n_96),
        .I2(buff1_reg_n_96),
        .I3(tmp_product_i_11_n_0),
        .O(tmp_product_i_15_n_0));
  (* HLUTNM = "lutpair18" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_16
       (.I0(tmp_product_i_30_n_4),
        .I1(buff0_reg_n_97),
        .I2(buff1_reg_n_97),
        .I3(tmp_product_i_12_n_0),
        .O(tmp_product_i_16_n_0));
  (* HLUTNM = "lutpair17" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_17
       (.I0(tmp_product_i_30_n_5),
        .I1(buff0_reg_n_98),
        .I2(buff1_reg_n_98),
        .I3(tmp_product_i_13_n_0),
        .O(tmp_product_i_17_n_0));
  (* HLUTNM = "lutpair16" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_18
       (.I0(tmp_product_i_30_n_6),
        .I1(buff0_reg_n_99),
        .I2(buff1_reg_n_99),
        .I3(tmp_product_i_14_n_0),
        .O(tmp_product_i_18_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_19
       (.CI(tmp_product_i_30_n_0),
        .CO({tmp_product_i_19_n_0,tmp_product_i_19_n_1,tmp_product_i_19_n_2,tmp_product_i_19_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_31_n_0,tmp_product_i_32_n_0,tmp_product_i_33_n_0,tmp_product_i_34_n_0}),
        .O({tmp_product_i_19_n_4,tmp_product_i_19_n_5,tmp_product_i_19_n_6,tmp_product_i_19_n_7}),
        .S({tmp_product_i_35_n_0,tmp_product_i_36_n_0,tmp_product_i_37_n_0,tmp_product_i_38_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_2
       (.CI(tmp_product_i_10_n_0),
        .CO({tmp_product_i_2_n_0,tmp_product_i_2_n_1,tmp_product_i_2_n_2,tmp_product_i_2_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_11_n_0,tmp_product_i_12_n_0,tmp_product_i_13_n_0,tmp_product_i_14_n_0}),
        .O(buff0_reg_0[3:0]),
        .S({tmp_product_i_15_n_0,tmp_product_i_16_n_0,tmp_product_i_17_n_0,tmp_product_i_18_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_20
       (.CI(tmp_product_i_19_n_0),
        .CO(NLW_tmp_product_i_20_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_tmp_product_i_20_O_UNCONNECTED[3:1],tmp_product_i_20_n_7}),
        .S({1'b0,1'b0,1'b0,tmp_product_i_39_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_21
       (.CI(tmp_product_i_40_n_0),
        .CO({tmp_product_i_21_n_0,tmp_product_i_21_n_1,tmp_product_i_21_n_2,tmp_product_i_21_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_41_n_0,buff1_reg_n_105,\buff1_reg[16]__0_n_0 ,\buff1_reg[15]__0_n_0 }),
        .O(NLW_tmp_product_i_21_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_42_n_0,tmp_product_i_43_n_0,tmp_product_i_44_n_0,tmp_product_i_45_n_0}));
  (* HLUTNM = "lutpair14" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_22
       (.I0(tmp_product_i_46_n_4),
        .I1(buff0_reg_n_101),
        .I2(buff1_reg_n_101),
        .O(tmp_product_i_22_n_0));
  (* HLUTNM = "lutpair13" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_23
       (.I0(tmp_product_i_46_n_5),
        .I1(buff0_reg_n_102),
        .I2(buff1_reg_n_102),
        .O(tmp_product_i_23_n_0));
  (* HLUTNM = "lutpair12" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_24
       (.I0(tmp_product_i_46_n_6),
        .I1(buff0_reg_n_103),
        .I2(buff1_reg_n_103),
        .O(tmp_product_i_24_n_0));
  (* HLUTNM = "lutpair11" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_25
       (.I0(tmp_product_i_46_n_7),
        .I1(buff0_reg_n_104),
        .I2(buff1_reg_n_104),
        .O(tmp_product_i_25_n_0));
  (* HLUTNM = "lutpair15" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_26
       (.I0(tmp_product_i_30_n_7),
        .I1(buff0_reg_n_100),
        .I2(buff1_reg_n_100),
        .I3(tmp_product_i_22_n_0),
        .O(tmp_product_i_26_n_0));
  (* HLUTNM = "lutpair14" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_27
       (.I0(tmp_product_i_46_n_4),
        .I1(buff0_reg_n_101),
        .I2(buff1_reg_n_101),
        .I3(tmp_product_i_23_n_0),
        .O(tmp_product_i_27_n_0));
  (* HLUTNM = "lutpair13" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_28
       (.I0(tmp_product_i_46_n_5),
        .I1(buff0_reg_n_102),
        .I2(buff1_reg_n_102),
        .I3(tmp_product_i_24_n_0),
        .O(tmp_product_i_28_n_0));
  (* HLUTNM = "lutpair12" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_29
       (.I0(tmp_product_i_46_n_6),
        .I1(buff0_reg_n_103),
        .I2(buff1_reg_n_103),
        .I3(tmp_product_i_25_n_0),
        .O(tmp_product_i_29_n_0));
  (* HLUTNM = "lutpair21" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_3
       (.I0(tmp_product_i_19_n_5),
        .I1(buff0_reg_n_94),
        .I2(buff1_reg_n_94),
        .O(tmp_product_i_3_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_30
       (.CI(tmp_product_i_46_n_0),
        .CO({tmp_product_i_30_n_0,tmp_product_i_30_n_1,tmp_product_i_30_n_2,tmp_product_i_30_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_47_n_0,tmp_product_i_48_n_0,tmp_product_i_49_n_0,tmp_product_i_50_n_0}),
        .O({tmp_product_i_30_n_4,tmp_product_i_30_n_5,tmp_product_i_30_n_6,tmp_product_i_30_n_7}),
        .S({tmp_product_i_51_n_0,tmp_product_i_52_n_0,tmp_product_i_53_n_0,tmp_product_i_54_n_0}));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_31
       (.I0(buff1_reg__0_n_78),
        .I1(buff1_reg__1_n_61),
        .I2(buff1_reg__0_n_77),
        .I3(buff1_reg__1_n_60),
        .O(tmp_product_i_31_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_32
       (.I0(buff1_reg__0_n_79),
        .I1(buff1_reg__1_n_62),
        .I2(buff1_reg__0_n_78),
        .I3(buff1_reg__1_n_61),
        .O(tmp_product_i_32_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_33
       (.I0(buff1_reg__0_n_80),
        .I1(buff1_reg__1_n_63),
        .I2(buff1_reg__0_n_79),
        .I3(buff1_reg__1_n_62),
        .O(tmp_product_i_33_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_34
       (.I0(buff1_reg__0_n_81),
        .I1(buff1_reg__1_n_64),
        .I2(buff1_reg__0_n_80),
        .I3(buff1_reg__1_n_63),
        .O(tmp_product_i_34_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_35
       (.I0(buff1_reg__1_n_61),
        .I1(buff1_reg__0_n_78),
        .I2(buff1_reg__1_n_59),
        .I3(buff1_reg__0_n_76),
        .I4(buff1_reg__1_n_60),
        .I5(buff1_reg__0_n_77),
        .O(tmp_product_i_35_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_36
       (.I0(buff1_reg__1_n_62),
        .I1(buff1_reg__0_n_79),
        .I2(buff1_reg__1_n_60),
        .I3(buff1_reg__0_n_77),
        .I4(buff1_reg__1_n_61),
        .I5(buff1_reg__0_n_78),
        .O(tmp_product_i_36_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_37
       (.I0(buff1_reg__1_n_63),
        .I1(buff1_reg__0_n_80),
        .I2(buff1_reg__1_n_61),
        .I3(buff1_reg__0_n_78),
        .I4(buff1_reg__1_n_62),
        .I5(buff1_reg__0_n_79),
        .O(tmp_product_i_37_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_38
       (.I0(buff1_reg__1_n_64),
        .I1(buff1_reg__0_n_81),
        .I2(buff1_reg__1_n_62),
        .I3(buff1_reg__0_n_79),
        .I4(buff1_reg__1_n_63),
        .I5(buff1_reg__0_n_80),
        .O(tmp_product_i_38_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_39
       (.I0(buff1_reg__1_n_60),
        .I1(buff1_reg__0_n_77),
        .I2(buff1_reg__1_n_58),
        .I3(buff1_reg__0_n_75),
        .I4(buff1_reg__1_n_59),
        .I5(buff1_reg__0_n_76),
        .O(tmp_product_i_39_n_0));
  (* HLUTNM = "lutpair20" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_4
       (.I0(tmp_product_i_19_n_6),
        .I1(buff0_reg_n_95),
        .I2(buff1_reg_n_95),
        .O(tmp_product_i_4_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_40
       (.CI(tmp_product_i_55_n_0),
        .CO({tmp_product_i_40_n_0,tmp_product_i_40_n_1,tmp_product_i_40_n_2,tmp_product_i_40_n_3}),
        .CYINIT(1'b0),
        .DI({\buff1_reg[14]__0_n_0 ,\buff1_reg[13]__0_n_0 ,\buff1_reg[12]__0_n_0 ,\buff1_reg[11]__0_n_0 }),
        .O(NLW_tmp_product_i_40_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_56_n_0,tmp_product_i_57_n_0,tmp_product_i_58_n_0,tmp_product_i_59_n_0}));
  LUT3 #(
    .INIT(8'h96)) 
    tmp_product_i_41
       (.I0(buff1_reg_n_104),
        .I1(tmp_product_i_46_n_7),
        .I2(buff0_reg_n_104),
        .O(tmp_product_i_41_n_0));
  (* HLUTNM = "lutpair11" *) 
  LUT5 #(
    .INIT(32'h69969696)) 
    tmp_product_i_42
       (.I0(tmp_product_i_46_n_7),
        .I1(buff0_reg_n_104),
        .I2(buff1_reg_n_104),
        .I3(buff0_reg_n_105),
        .I4(tmp_product_i_60_n_4),
        .O(tmp_product_i_42_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    tmp_product_i_43
       (.I0(tmp_product_i_60_n_4),
        .I1(buff0_reg_n_105),
        .I2(buff1_reg_n_105),
        .O(tmp_product_i_43_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_44
       (.I0(\buff1_reg[16]__0_n_0 ),
        .I1(tmp_product_i_60_n_5),
        .O(tmp_product_i_44_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_45
       (.I0(\buff1_reg[15]__0_n_0 ),
        .I1(tmp_product_i_60_n_6),
        .O(tmp_product_i_45_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_46
       (.CI(tmp_product_i_60_n_0),
        .CO({tmp_product_i_46_n_0,tmp_product_i_46_n_1,tmp_product_i_46_n_2,tmp_product_i_46_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_61_n_0,tmp_product_i_62_n_0,tmp_product_i_63_n_0,tmp_product_i_64_n_0}),
        .O({tmp_product_i_46_n_4,tmp_product_i_46_n_5,tmp_product_i_46_n_6,tmp_product_i_46_n_7}),
        .S({tmp_product_i_65_n_0,tmp_product_i_66_n_0,tmp_product_i_67_n_0,tmp_product_i_68_n_0}));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_47
       (.I0(buff1_reg__0_n_82),
        .I1(buff1_reg__1_n_65),
        .I2(buff1_reg__0_n_81),
        .I3(buff1_reg__1_n_64),
        .O(tmp_product_i_47_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_48
       (.I0(buff1_reg__0_n_83),
        .I1(buff1_reg__1_n_66),
        .I2(buff1_reg__0_n_82),
        .I3(buff1_reg__1_n_65),
        .O(tmp_product_i_48_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_49
       (.I0(buff1_reg__0_n_84),
        .I1(buff1_reg__1_n_67),
        .I2(buff1_reg__0_n_83),
        .I3(buff1_reg__1_n_66),
        .O(tmp_product_i_49_n_0));
  (* HLUTNM = "lutpair19" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_5
       (.I0(tmp_product_i_19_n_7),
        .I1(buff0_reg_n_96),
        .I2(buff1_reg_n_96),
        .O(tmp_product_i_5_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_50
       (.I0(buff1_reg__0_n_85),
        .I1(buff1_reg__1_n_68),
        .I2(buff1_reg__0_n_84),
        .I3(buff1_reg__1_n_67),
        .O(tmp_product_i_50_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_51
       (.I0(buff1_reg__1_n_65),
        .I1(buff1_reg__0_n_82),
        .I2(buff1_reg__1_n_63),
        .I3(buff1_reg__0_n_80),
        .I4(buff1_reg__1_n_64),
        .I5(buff1_reg__0_n_81),
        .O(tmp_product_i_51_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_52
       (.I0(buff1_reg__1_n_66),
        .I1(buff1_reg__0_n_83),
        .I2(buff1_reg__1_n_64),
        .I3(buff1_reg__0_n_81),
        .I4(buff1_reg__1_n_65),
        .I5(buff1_reg__0_n_82),
        .O(tmp_product_i_52_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_53
       (.I0(buff1_reg__1_n_67),
        .I1(buff1_reg__0_n_84),
        .I2(buff1_reg__1_n_65),
        .I3(buff1_reg__0_n_82),
        .I4(buff1_reg__1_n_66),
        .I5(buff1_reg__0_n_83),
        .O(tmp_product_i_53_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_54
       (.I0(buff1_reg__1_n_68),
        .I1(buff1_reg__0_n_85),
        .I2(buff1_reg__1_n_66),
        .I3(buff1_reg__0_n_83),
        .I4(buff1_reg__1_n_67),
        .I5(buff1_reg__0_n_84),
        .O(tmp_product_i_54_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_55
       (.CI(tmp_product_i_69_n_0),
        .CO({tmp_product_i_55_n_0,tmp_product_i_55_n_1,tmp_product_i_55_n_2,tmp_product_i_55_n_3}),
        .CYINIT(1'b0),
        .DI({\buff1_reg[10]__0_n_0 ,\buff1_reg[9]__0_n_0 ,\buff1_reg[8]__0_n_0 ,\buff1_reg[7]__0_n_0 }),
        .O(NLW_tmp_product_i_55_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_70_n_0,tmp_product_i_71_n_0,tmp_product_i_72_n_0,tmp_product_i_73_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_56
       (.I0(\buff1_reg[14]__0_n_0 ),
        .I1(tmp_product_i_60_n_7),
        .O(tmp_product_i_56_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_57
       (.I0(\buff1_reg[13]__0_n_0 ),
        .I1(tmp_product_i_74_n_4),
        .O(tmp_product_i_57_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_58
       (.I0(\buff1_reg[12]__0_n_0 ),
        .I1(tmp_product_i_74_n_5),
        .O(tmp_product_i_58_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_59
       (.I0(\buff1_reg[11]__0_n_0 ),
        .I1(tmp_product_i_74_n_6),
        .O(tmp_product_i_59_n_0));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    tmp_product_i_6
       (.I0(buff1_reg_n_93),
        .I1(buff0_reg_n_93),
        .I2(tmp_product_i_19_n_4),
        .I3(buff0_reg_n_92),
        .I4(tmp_product_i_20_n_7),
        .I5(buff1_reg_n_92),
        .O(tmp_product_i_6_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_60
       (.CI(tmp_product_i_74_n_0),
        .CO({tmp_product_i_60_n_0,tmp_product_i_60_n_1,tmp_product_i_60_n_2,tmp_product_i_60_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_75_n_0,tmp_product_i_76_n_0,tmp_product_i_77_n_0,tmp_product_i_78_n_0}),
        .O({tmp_product_i_60_n_4,tmp_product_i_60_n_5,tmp_product_i_60_n_6,tmp_product_i_60_n_7}),
        .S({tmp_product_i_79_n_0,tmp_product_i_80_n_0,tmp_product_i_81_n_0,tmp_product_i_82_n_0}));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_61
       (.I0(buff1_reg__0_n_86),
        .I1(buff1_reg__1_n_69),
        .I2(buff1_reg__0_n_85),
        .I3(buff1_reg__1_n_68),
        .O(tmp_product_i_61_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_62
       (.I0(buff1_reg__0_n_87),
        .I1(buff1_reg__1_n_70),
        .I2(buff1_reg__0_n_86),
        .I3(buff1_reg__1_n_69),
        .O(tmp_product_i_62_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_63
       (.I0(buff1_reg__0_n_88),
        .I1(buff1_reg__1_n_71),
        .I2(buff1_reg__0_n_87),
        .I3(buff1_reg__1_n_70),
        .O(tmp_product_i_63_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_64
       (.I0(buff1_reg__0_n_89),
        .I1(buff1_reg__1_n_72),
        .I2(buff1_reg__0_n_88),
        .I3(buff1_reg__1_n_71),
        .O(tmp_product_i_64_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_65
       (.I0(buff1_reg__1_n_69),
        .I1(buff1_reg__0_n_86),
        .I2(buff1_reg__1_n_67),
        .I3(buff1_reg__0_n_84),
        .I4(buff1_reg__1_n_68),
        .I5(buff1_reg__0_n_85),
        .O(tmp_product_i_65_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_66
       (.I0(buff1_reg__1_n_70),
        .I1(buff1_reg__0_n_87),
        .I2(buff1_reg__1_n_68),
        .I3(buff1_reg__0_n_85),
        .I4(buff1_reg__1_n_69),
        .I5(buff1_reg__0_n_86),
        .O(tmp_product_i_66_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_67
       (.I0(buff1_reg__1_n_71),
        .I1(buff1_reg__0_n_88),
        .I2(buff1_reg__1_n_69),
        .I3(buff1_reg__0_n_86),
        .I4(buff1_reg__1_n_70),
        .I5(buff1_reg__0_n_87),
        .O(tmp_product_i_67_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_68
       (.I0(buff1_reg__1_n_72),
        .I1(buff1_reg__0_n_89),
        .I2(buff1_reg__1_n_70),
        .I3(buff1_reg__0_n_87),
        .I4(buff1_reg__1_n_71),
        .I5(buff1_reg__0_n_88),
        .O(tmp_product_i_68_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_69
       (.CI(tmp_product_i_83_n_0),
        .CO({tmp_product_i_69_n_0,tmp_product_i_69_n_1,tmp_product_i_69_n_2,tmp_product_i_69_n_3}),
        .CYINIT(1'b0),
        .DI({\buff1_reg[6]__0_n_0 ,\buff1_reg[5]__0_n_0 ,\buff1_reg[4]__0_n_0 ,\buff1_reg[3]__0_n_0 }),
        .O(NLW_tmp_product_i_69_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_84_n_0,tmp_product_i_85_n_0,tmp_product_i_86_n_0,tmp_product_i_87_n_0}));
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_7
       (.I0(tmp_product_i_3_n_0),
        .I1(buff0_reg_n_93),
        .I2(tmp_product_i_19_n_4),
        .I3(buff1_reg_n_93),
        .O(tmp_product_i_7_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_70
       (.I0(\buff1_reg[10]__0_n_0 ),
        .I1(tmp_product_i_74_n_7),
        .O(tmp_product_i_70_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_71
       (.I0(\buff1_reg[9]__0_n_0 ),
        .I1(tmp_product_i_88_n_4),
        .O(tmp_product_i_71_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_72
       (.I0(\buff1_reg[8]__0_n_0 ),
        .I1(tmp_product_i_88_n_5),
        .O(tmp_product_i_72_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_73
       (.I0(\buff1_reg[7]__0_n_0 ),
        .I1(tmp_product_i_88_n_6),
        .O(tmp_product_i_73_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_74
       (.CI(tmp_product_i_88_n_0),
        .CO({tmp_product_i_74_n_0,tmp_product_i_74_n_1,tmp_product_i_74_n_2,tmp_product_i_74_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_89_n_0,tmp_product_i_90_n_0,tmp_product_i_91_n_0,tmp_product_i_92_n_0}),
        .O({tmp_product_i_74_n_4,tmp_product_i_74_n_5,tmp_product_i_74_n_6,tmp_product_i_74_n_7}),
        .S({tmp_product_i_93_n_0,tmp_product_i_94_n_0,tmp_product_i_95_n_0,tmp_product_i_96_n_0}));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_75
       (.I0(buff1_reg__0_n_90),
        .I1(buff1_reg__1_n_73),
        .I2(buff1_reg__0_n_89),
        .I3(buff1_reg__1_n_72),
        .O(tmp_product_i_75_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_76
       (.I0(buff1_reg__0_n_91),
        .I1(buff1_reg__1_n_74),
        .I2(buff1_reg__0_n_90),
        .I3(buff1_reg__1_n_73),
        .O(tmp_product_i_76_n_0));
  LUT4 #(
    .INIT(16'hE00E)) 
    tmp_product_i_77
       (.I0(buff1_reg__0_n_92),
        .I1(buff1_reg__1_n_75),
        .I2(buff1_reg__0_n_91),
        .I3(buff1_reg__1_n_74),
        .O(tmp_product_i_77_n_0));
  LUT3 #(
    .INIT(8'h09)) 
    tmp_product_i_78
       (.I0(buff1_reg__0_n_92),
        .I1(buff1_reg__1_n_75),
        .I2(buff1_reg__2_n_58),
        .O(tmp_product_i_78_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_79
       (.I0(buff1_reg__1_n_73),
        .I1(buff1_reg__0_n_90),
        .I2(buff1_reg__1_n_71),
        .I3(buff1_reg__0_n_88),
        .I4(buff1_reg__1_n_72),
        .I5(buff1_reg__0_n_89),
        .O(tmp_product_i_79_n_0));
  (* HLUTNM = "lutpair21" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_8
       (.I0(tmp_product_i_19_n_5),
        .I1(buff0_reg_n_94),
        .I2(buff1_reg_n_94),
        .I3(tmp_product_i_4_n_0),
        .O(tmp_product_i_8_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_80
       (.I0(buff1_reg__1_n_74),
        .I1(buff1_reg__0_n_91),
        .I2(buff1_reg__1_n_72),
        .I3(buff1_reg__0_n_89),
        .I4(buff1_reg__1_n_73),
        .I5(buff1_reg__0_n_90),
        .O(tmp_product_i_80_n_0));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    tmp_product_i_81
       (.I0(buff1_reg__1_n_75),
        .I1(buff1_reg__0_n_92),
        .I2(buff1_reg__1_n_73),
        .I3(buff1_reg__0_n_90),
        .I4(buff1_reg__1_n_74),
        .I5(buff1_reg__0_n_91),
        .O(tmp_product_i_81_n_0));
  LUT5 #(
    .INIT(32'h693C3C96)) 
    tmp_product_i_82
       (.I0(buff1_reg__2_n_58),
        .I1(buff1_reg__1_n_74),
        .I2(buff1_reg__0_n_91),
        .I3(buff1_reg__1_n_75),
        .I4(buff1_reg__0_n_92),
        .O(tmp_product_i_82_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_83
       (.CI(1'b0),
        .CO({tmp_product_i_83_n_0,tmp_product_i_83_n_1,tmp_product_i_83_n_2,tmp_product_i_83_n_3}),
        .CYINIT(1'b0),
        .DI({\buff1_reg[2]__0_n_0 ,\buff1_reg[1]__0_n_0 ,\buff1_reg[0]__0_n_0 ,1'b0}),
        .O(NLW_tmp_product_i_83_O_UNCONNECTED[3:0]),
        .S({tmp_product_i_97_n_0,tmp_product_i_98_n_0,tmp_product_i_99_n_0,tmp_product_i_100_n_6}));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_84
       (.I0(\buff1_reg[6]__0_n_0 ),
        .I1(tmp_product_i_88_n_7),
        .O(tmp_product_i_84_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_85
       (.I0(\buff1_reg[5]__0_n_0 ),
        .I1(tmp_product_i_101_n_4),
        .O(tmp_product_i_85_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_86
       (.I0(\buff1_reg[4]__0_n_0 ),
        .I1(tmp_product_i_101_n_5),
        .O(tmp_product_i_86_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_87
       (.I0(\buff1_reg[3]__0_n_0 ),
        .I1(tmp_product_i_101_n_6),
        .O(tmp_product_i_87_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 tmp_product_i_88
       (.CI(tmp_product_i_101_n_0),
        .CO({tmp_product_i_88_n_0,tmp_product_i_88_n_1,tmp_product_i_88_n_2,tmp_product_i_88_n_3}),
        .CYINIT(1'b0),
        .DI({tmp_product_i_102_n_0,tmp_product_i_103_n_0,tmp_product_i_104_n_0,tmp_product_i_105_n_0}),
        .O({tmp_product_i_88_n_4,tmp_product_i_88_n_5,tmp_product_i_88_n_6,tmp_product_i_88_n_7}),
        .S({tmp_product_i_106_n_0,tmp_product_i_107_n_0,tmp_product_i_108_n_0,tmp_product_i_109_n_0}));
  LUT3 #(
    .INIT(8'h96)) 
    tmp_product_i_89
       (.I0(buff1_reg__2_n_58),
        .I1(buff1_reg__1_n_75),
        .I2(buff1_reg__0_n_92),
        .O(tmp_product_i_89_n_0));
  (* HLUTNM = "lutpair20" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_9
       (.I0(tmp_product_i_19_n_6),
        .I1(buff0_reg_n_95),
        .I2(buff1_reg_n_95),
        .I3(tmp_product_i_5_n_0),
        .O(tmp_product_i_9_n_0));
  (* HLUTNM = "lutpair10" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_90
       (.I0(buff1_reg__0_n_94),
        .I1(buff1_reg__1_n_77),
        .I2(buff1_reg__2_n_60),
        .O(tmp_product_i_90_n_0));
  (* HLUTNM = "lutpair9" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_91
       (.I0(buff1_reg__0_n_95),
        .I1(buff1_reg__1_n_78),
        .I2(buff1_reg__2_n_61),
        .O(tmp_product_i_91_n_0));
  (* HLUTNM = "lutpair8" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    tmp_product_i_92
       (.I0(buff1_reg__0_n_96),
        .I1(buff1_reg__1_n_79),
        .I2(buff1_reg__2_n_62),
        .O(tmp_product_i_92_n_0));
  LUT6 #(
    .INIT(64'h6969699669969696)) 
    tmp_product_i_93
       (.I0(buff1_reg__2_n_58),
        .I1(buff1_reg__1_n_75),
        .I2(buff1_reg__0_n_92),
        .I3(buff1_reg__2_n_59),
        .I4(buff1_reg__1_n_76),
        .I5(buff1_reg__0_n_93),
        .O(tmp_product_i_93_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_94
       (.I0(tmp_product_i_90_n_0),
        .I1(buff1_reg__1_n_76),
        .I2(buff1_reg__0_n_93),
        .I3(buff1_reg__2_n_59),
        .O(tmp_product_i_94_n_0));
  (* HLUTNM = "lutpair10" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_95
       (.I0(buff1_reg__0_n_94),
        .I1(buff1_reg__1_n_77),
        .I2(buff1_reg__2_n_60),
        .I3(tmp_product_i_91_n_0),
        .O(tmp_product_i_95_n_0));
  (* HLUTNM = "lutpair9" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    tmp_product_i_96
       (.I0(buff1_reg__0_n_95),
        .I1(buff1_reg__1_n_78),
        .I2(buff1_reg__2_n_61),
        .I3(tmp_product_i_92_n_0),
        .O(tmp_product_i_96_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_97
       (.I0(\buff1_reg[2]__0_n_0 ),
        .I1(tmp_product_i_101_n_7),
        .O(tmp_product_i_97_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_98
       (.I0(\buff1_reg[1]__0_n_0 ),
        .I1(tmp_product_i_100_n_4),
        .O(tmp_product_i_98_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    tmp_product_i_99
       (.I0(\buff1_reg[0]__0_n_0 ),
        .I1(tmp_product_i_100_n_5),
        .O(tmp_product_i_99_n_0));
endmodule

(* ORIG_REF_NAME = "fn1_mul_8s_33ns_40_2_1" *) 
module bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1
   (D,
    Q,
    ap_clk,
    p_reg);
  output [39:0]D;
  input [0:0]Q;
  input ap_clk;
  input [7:0]p_reg;

  wire [39:0]D;
  wire [0:0]Q;
  wire ap_clk;
  wire [7:0]p_reg;

  bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1_Multiplier_1 fn1_mul_8s_33ns_40_2_1_Multiplier_1_U
       (.D(D),
        .Q(Q),
        .ap_clk(ap_clk),
        .p_reg_0(p_reg));
endmodule

(* ORIG_REF_NAME = "fn1_mul_8s_33ns_40_2_1_Multiplier_1" *) 
module bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1_Multiplier_1
   (D,
    Q,
    ap_clk,
    p_reg_0);
  output [39:0]D;
  input [0:0]Q;
  input ap_clk;
  input [7:0]p_reg_0;

  wire [39:0]D;
  wire [0:0]Q;
  wire ap_clk;
  wire [7:0]p_reg_0;
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
  wire NLW_tmp_product_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product_CARRYOUT_UNCONNECTED;

  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(2),
    .BREG(2),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_p_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0}),
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
        .CEB1(1'b1),
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
        .P({p_reg_n_58,p_reg_n_59,p_reg_n_60,p_reg_n_61,p_reg_n_62,p_reg_n_63,p_reg_n_64,p_reg_n_65,p_reg_n_66,p_reg_n_67,p_reg_n_68,p_reg_n_69,p_reg_n_70,p_reg_n_71,p_reg_n_72,p_reg_n_73,p_reg_n_74,p_reg_n_75,p_reg_n_76,p_reg_n_77,p_reg_n_78,p_reg_n_79,p_reg_n_80,p_reg_n_81,p_reg_n_82,D[39:17]}),
        .PATTERNBDETECT(NLW_p_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_p_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product_n_106,tmp_product_n_107,tmp_product_n_108,tmp_product_n_109,tmp_product_n_110,tmp_product_n_111,tmp_product_n_112,tmp_product_n_113,tmp_product_n_114,tmp_product_n_115,tmp_product_n_116,tmp_product_n_117,tmp_product_n_118,tmp_product_n_119,tmp_product_n_120,tmp_product_n_121,tmp_product_n_122,tmp_product_n_123,tmp_product_n_124,tmp_product_n_125,tmp_product_n_126,tmp_product_n_127,tmp_product_n_128,tmp_product_n_129,tmp_product_n_130,tmp_product_n_131,tmp_product_n_132,tmp_product_n_133,tmp_product_n_134,tmp_product_n_135,tmp_product_n_136,tmp_product_n_137,tmp_product_n_138,tmp_product_n_139,tmp_product_n_140,tmp_product_n_141,tmp_product_n_142,tmp_product_n_143,tmp_product_n_144,tmp_product_n_145,tmp_product_n_146,tmp_product_n_147,tmp_product_n_148,tmp_product_n_149,tmp_product_n_150,tmp_product_n_151,tmp_product_n_152,tmp_product_n_153}),
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
  FDRE \p_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_105),
        .Q(D[0]),
        .R(1'b0));
  FDRE \p_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_95),
        .Q(D[10]),
        .R(1'b0));
  FDRE \p_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_94),
        .Q(D[11]),
        .R(1'b0));
  FDRE \p_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_93),
        .Q(D[12]),
        .R(1'b0));
  FDRE \p_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_92),
        .Q(D[13]),
        .R(1'b0));
  FDRE \p_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_91),
        .Q(D[14]),
        .R(1'b0));
  FDRE \p_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_90),
        .Q(D[15]),
        .R(1'b0));
  FDRE \p_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_89),
        .Q(D[16]),
        .R(1'b0));
  FDRE \p_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_104),
        .Q(D[1]),
        .R(1'b0));
  FDRE \p_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_103),
        .Q(D[2]),
        .R(1'b0));
  FDRE \p_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_102),
        .Q(D[3]),
        .R(1'b0));
  FDRE \p_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_101),
        .Q(D[4]),
        .R(1'b0));
  FDRE \p_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_100),
        .Q(D[5]),
        .R(1'b0));
  FDRE \p_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_99),
        .Q(D[6]),
        .R(1'b0));
  FDRE \p_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_98),
        .Q(D[7]),
        .R(1'b0));
  FDRE \p_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_97),
        .Q(D[8]),
        .R(1'b0));
  FDRE \p_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_96),
        .Q(D[9]),
        .R(1'b0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-11 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(2),
    .BREG(2),
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
    tmp_product
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b0,1'b1,1'b0,1'b0}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0[7],p_reg_0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b1),
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
endmodule

(* ORIG_REF_NAME = "fn1_srem_8s_40ns_7_12_seq_1" *) 
module bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1
   (\remd_reg[6] ,
    \remd_reg[6]_0 ,
    \remd_reg[6]_1 ,
    \remd_reg[6]_2 ,
    \remd_reg[6]_3 ,
    \remd_reg[6]_4 ,
    \remd_reg[6]_5 ,
    \remd_reg[6]_6 ,
    \remd_reg[6]_7 ,
    B,
    A,
    \remd_reg[6]_8 ,
    Q,
    ap_clk,
    ap_rst,
    \divisor0_reg[39] );
  output [7:0]\remd_reg[6] ;
  output [0:0]\remd_reg[6]_0 ;
  output [2:0]\remd_reg[6]_1 ;
  output [0:0]\remd_reg[6]_2 ;
  output [1:0]\remd_reg[6]_3 ;
  output [1:0]\remd_reg[6]_4 ;
  output [0:0]\remd_reg[6]_5 ;
  output [0:0]\remd_reg[6]_6 ;
  output [0:0]\remd_reg[6]_7 ;
  output [1:0]B;
  output [2:0]A;
  output [1:0]\remd_reg[6]_8 ;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input [39:0]\divisor0_reg[39] ;

  wire [2:0]A;
  wire [1:0]B;
  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire [39:0]\divisor0_reg[39] ;
  wire [7:0]\remd_reg[6] ;
  wire [0:0]\remd_reg[6]_0 ;
  wire [2:0]\remd_reg[6]_1 ;
  wire [0:0]\remd_reg[6]_2 ;
  wire [1:0]\remd_reg[6]_3 ;
  wire [1:0]\remd_reg[6]_4 ;
  wire [0:0]\remd_reg[6]_5 ;
  wire [0:0]\remd_reg[6]_6 ;
  wire [0:0]\remd_reg[6]_7 ;
  wire [1:0]\remd_reg[6]_8 ;

  bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div fn1_srem_8s_40ns_7_12_seq_1_div_U
       (.A(A),
        .B(B),
        .Q(Q),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\divisor0_reg[39]_0 (\divisor0_reg[39] ),
        .\remd_reg[6]_0 (\remd_reg[6] ),
        .\remd_reg[6]_1 (\remd_reg[6]_0 ),
        .\remd_reg[6]_2 (\remd_reg[6]_1 ),
        .\remd_reg[6]_3 (\remd_reg[6]_2 ),
        .\remd_reg[6]_4 (\remd_reg[6]_3 ),
        .\remd_reg[6]_5 (\remd_reg[6]_4 ),
        .\remd_reg[6]_6 (\remd_reg[6]_5 ),
        .\remd_reg[6]_7 (\remd_reg[6]_6 ),
        .\remd_reg[6]_8 (\remd_reg[6]_7 ),
        .\remd_reg[6]_9 (\remd_reg[6]_8 ));
endmodule

(* ORIG_REF_NAME = "fn1_srem_8s_40ns_7_12_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div
   (\remd_reg[6]_0 ,
    \remd_reg[6]_1 ,
    \remd_reg[6]_2 ,
    \remd_reg[6]_3 ,
    \remd_reg[6]_4 ,
    \remd_reg[6]_5 ,
    \remd_reg[6]_6 ,
    \remd_reg[6]_7 ,
    \remd_reg[6]_8 ,
    B,
    A,
    \remd_reg[6]_9 ,
    Q,
    ap_clk,
    ap_rst,
    \divisor0_reg[39]_0 );
  output [7:0]\remd_reg[6]_0 ;
  output [0:0]\remd_reg[6]_1 ;
  output [2:0]\remd_reg[6]_2 ;
  output [0:0]\remd_reg[6]_3 ;
  output [1:0]\remd_reg[6]_4 ;
  output [1:0]\remd_reg[6]_5 ;
  output [0:0]\remd_reg[6]_6 ;
  output [0:0]\remd_reg[6]_7 ;
  output [0:0]\remd_reg[6]_8 ;
  output [1:0]B;
  output [2:0]A;
  output [1:0]\remd_reg[6]_9 ;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input [39:0]\divisor0_reg[39]_0 ;

  wire [2:0]A;
  wire [1:0]B;
  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire buff0_reg_i_3_n_0;
  wire \divisor0[12]_i_2_n_0 ;
  wire \divisor0[12]_inv_i_3_n_0 ;
  wire \divisor0[12]_inv_i_4_n_0 ;
  wire \divisor0[12]_inv_i_5_n_0 ;
  wire \divisor0[12]_inv_i_6_n_0 ;
  wire \divisor0[16]_inv_i_3_n_0 ;
  wire \divisor0[16]_inv_i_4_n_0 ;
  wire \divisor0[16]_inv_i_5_n_0 ;
  wire \divisor0[16]_inv_i_6_n_0 ;
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
  wire \divisor0[32]_inv_i_3_n_0 ;
  wire \divisor0[32]_inv_i_4_n_0 ;
  wire \divisor0[32]_inv_i_5_n_0 ;
  wire \divisor0[32]_inv_i_6_n_0 ;
  wire \divisor0[36]_inv_i_3_n_0 ;
  wire \divisor0[36]_inv_i_4_n_0 ;
  wire \divisor0[36]_inv_i_5_n_0 ;
  wire \divisor0[36]_inv_i_6_n_0 ;
  wire \divisor0[39]_inv_i_3_n_0 ;
  wire \divisor0[39]_inv_i_4_n_0 ;
  wire \divisor0[39]_inv_i_5_n_0 ;
  wire \divisor0[4]_i_2_n_0 ;
  wire \divisor0[4]_i_3__0_n_0 ;
  wire \divisor0[4]_i_3_n_0 ;
  wire \divisor0[4]_i_4_n_0 ;
  wire \divisor0[4]_i_5_n_0 ;
  wire \divisor0[4]_i_6_n_0 ;
  wire \divisor0[4]_i_7_n_0 ;
  wire \divisor0[8]_i_2_n_0 ;
  wire \divisor0[8]_i_3_n_0 ;
  wire \divisor0[8]_i_4_n_0 ;
  wire \divisor0[8]_inv_i_3_n_0 ;
  wire \divisor0[8]_inv_i_4_n_0 ;
  wire \divisor0[8]_inv_i_5_n_0 ;
  wire \divisor0[8]_inv_i_6_n_0 ;
  wire \divisor0_reg[12]_i_1_n_0 ;
  wire \divisor0_reg[12]_i_1_n_1 ;
  wire \divisor0_reg[12]_i_1_n_2 ;
  wire \divisor0_reg[12]_i_1_n_3 ;
  wire \divisor0_reg[12]_inv_i_2_n_0 ;
  wire \divisor0_reg[12]_inv_i_2_n_1 ;
  wire \divisor0_reg[12]_inv_i_2_n_2 ;
  wire \divisor0_reg[12]_inv_i_2_n_3 ;
  wire \divisor0_reg[16]_i_1_n_0 ;
  wire \divisor0_reg[16]_i_1_n_1 ;
  wire \divisor0_reg[16]_i_1_n_2 ;
  wire \divisor0_reg[16]_i_1_n_3 ;
  wire \divisor0_reg[16]_inv_i_2_n_0 ;
  wire \divisor0_reg[16]_inv_i_2_n_1 ;
  wire \divisor0_reg[16]_inv_i_2_n_2 ;
  wire \divisor0_reg[16]_inv_i_2_n_3 ;
  wire \divisor0_reg[20]_i_1_n_0 ;
  wire \divisor0_reg[20]_i_1_n_1 ;
  wire \divisor0_reg[20]_i_1_n_2 ;
  wire \divisor0_reg[20]_i_1_n_3 ;
  wire \divisor0_reg[20]_inv_i_2_n_0 ;
  wire \divisor0_reg[20]_inv_i_2_n_1 ;
  wire \divisor0_reg[20]_inv_i_2_n_2 ;
  wire \divisor0_reg[20]_inv_i_2_n_3 ;
  wire \divisor0_reg[24]_i_1_n_0 ;
  wire \divisor0_reg[24]_i_1_n_1 ;
  wire \divisor0_reg[24]_i_1_n_2 ;
  wire \divisor0_reg[24]_i_1_n_3 ;
  wire \divisor0_reg[24]_inv_i_2_n_0 ;
  wire \divisor0_reg[24]_inv_i_2_n_1 ;
  wire \divisor0_reg[24]_inv_i_2_n_2 ;
  wire \divisor0_reg[24]_inv_i_2_n_3 ;
  wire \divisor0_reg[28]_i_1_n_0 ;
  wire \divisor0_reg[28]_i_1_n_1 ;
  wire \divisor0_reg[28]_i_1_n_2 ;
  wire \divisor0_reg[28]_i_1_n_3 ;
  wire \divisor0_reg[28]_inv_i_2_n_0 ;
  wire \divisor0_reg[28]_inv_i_2_n_1 ;
  wire \divisor0_reg[28]_inv_i_2_n_2 ;
  wire \divisor0_reg[28]_inv_i_2_n_3 ;
  wire \divisor0_reg[32]_i_1_n_0 ;
  wire \divisor0_reg[32]_i_1_n_1 ;
  wire \divisor0_reg[32]_i_1_n_2 ;
  wire \divisor0_reg[32]_i_1_n_3 ;
  wire \divisor0_reg[32]_inv_i_2_n_0 ;
  wire \divisor0_reg[32]_inv_i_2_n_1 ;
  wire \divisor0_reg[32]_inv_i_2_n_2 ;
  wire \divisor0_reg[32]_inv_i_2_n_3 ;
  wire \divisor0_reg[36]_i_1_n_0 ;
  wire \divisor0_reg[36]_i_1_n_1 ;
  wire \divisor0_reg[36]_i_1_n_2 ;
  wire \divisor0_reg[36]_i_1_n_3 ;
  wire \divisor0_reg[36]_inv_i_2_n_0 ;
  wire \divisor0_reg[36]_inv_i_2_n_1 ;
  wire \divisor0_reg[36]_inv_i_2_n_2 ;
  wire \divisor0_reg[36]_inv_i_2_n_3 ;
  wire [39:0]\divisor0_reg[39]_0 ;
  wire \divisor0_reg[39]_i_1_n_2 ;
  wire \divisor0_reg[39]_i_1_n_3 ;
  wire \divisor0_reg[39]_inv_i_2_n_2 ;
  wire \divisor0_reg[39]_inv_i_2_n_3 ;
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
  wire \divisor0_reg[8]_inv_i_2_n_0 ;
  wire \divisor0_reg[8]_inv_i_2_n_1 ;
  wire \divisor0_reg[8]_inv_i_2_n_2 ;
  wire \divisor0_reg[8]_inv_i_2_n_3 ;
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
  wire \divisor0_reg_n_0_[31] ;
  wire \divisor0_reg_n_0_[32] ;
  wire \divisor0_reg_n_0_[33] ;
  wire \divisor0_reg_n_0_[34] ;
  wire \divisor0_reg_n_0_[35] ;
  wire \divisor0_reg_n_0_[36] ;
  wire \divisor0_reg_n_0_[37] ;
  wire \divisor0_reg_n_0_[38] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire [39:1]divisor_u;
  wire [39:1]divisor_u0;
  wire done0;
  wire fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_1;
  wire fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_2;
  wire fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_3;
  wire fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_4;
  wire fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_5;
  wire fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_6;
  wire [39:1]grp_fu_121_p1;
  wire p_0_in_0;
  wire [6:1]remd;
  wire [7:0]\remd_reg[6]_0 ;
  wire [0:0]\remd_reg[6]_1 ;
  wire [2:0]\remd_reg[6]_2 ;
  wire [0:0]\remd_reg[6]_3 ;
  wire [1:0]\remd_reg[6]_4 ;
  wire [1:0]\remd_reg[6]_5 ;
  wire [0:0]\remd_reg[6]_6 ;
  wire [0:0]\remd_reg[6]_7 ;
  wire [0:0]\remd_reg[6]_8 ;
  wire [1:0]\remd_reg[6]_9 ;
  wire [0:0]remd_tmp;
  wire start0;
  wire [3:2]\NLW_divisor0_reg[39]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_divisor0_reg[39]_i_1_O_UNCONNECTED ;
  wire [3:2]\NLW_divisor0_reg[39]_inv_i_2_CO_UNCONNECTED ;
  wire [3:3]\NLW_divisor0_reg[39]_inv_i_2_O_UNCONNECTED ;

  LUT2 #(
    .INIT(4'h1)) 
    buff0_reg__0_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(A[2]));
  LUT2 #(
    .INIT(4'h1)) 
    buff0_reg__1_i_1__0
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_5 [0]));
  LUT2 #(
    .INIT(4'h1)) 
    buff0_reg__1_i_2__0
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_0 [7]));
  LUT2 #(
    .INIT(4'h9)) 
    buff0_reg__1_i_3__0
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_0 [6]));
  LUT6 #(
    .INIT(64'h00000001FFFFFFFE)) 
    buff0_reg__1_i_4__0
       (.I0(remd[4]),
        .I1(remd[2]),
        .I2(\remd_reg[6]_0 [0]),
        .I3(remd[1]),
        .I4(remd[3]),
        .I5(remd[5]),
        .O(\remd_reg[6]_0 [5]));
  LUT5 #(
    .INIT(32'h0001FFFE)) 
    buff0_reg__1_i_5
       (.I0(remd[3]),
        .I1(remd[1]),
        .I2(\remd_reg[6]_0 [0]),
        .I3(remd[2]),
        .I4(remd[4]),
        .O(\remd_reg[6]_0 [4]));
  LUT4 #(
    .INIT(16'h01FE)) 
    buff0_reg__1_i_6
       (.I0(remd[2]),
        .I1(\remd_reg[6]_0 [0]),
        .I2(remd[1]),
        .I3(remd[3]),
        .O(\remd_reg[6]_0 [3]));
  LUT3 #(
    .INIT(8'h1E)) 
    buff0_reg__1_i_7
       (.I0(remd[1]),
        .I1(\remd_reg[6]_0 [0]),
        .I2(remd[2]),
        .O(\remd_reg[6]_0 [2]));
  LUT2 #(
    .INIT(4'h6)) 
    buff0_reg__1_i_8
       (.I0(\remd_reg[6]_0 [0]),
        .I1(remd[1]),
        .O(\remd_reg[6]_0 [1]));
  LUT2 #(
    .INIT(4'h1)) 
    buff0_reg__2_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_6 ));
  LUT2 #(
    .INIT(4'h1)) 
    buff0_reg__3_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_8 ));
  LUT2 #(
    .INIT(4'h1)) 
    buff0_reg_i_1__0
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(B[1]));
  LUT2 #(
    .INIT(4'h1)) 
    buff0_reg_i_2__0
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(B[0]));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    buff0_reg_i_3
       (.I0(remd[4]),
        .I1(remd[2]),
        .I2(\remd_reg[6]_0 [0]),
        .I3(remd[1]),
        .I4(remd[3]),
        .I5(remd[5]),
        .O(buff0_reg_i_3_n_0));
  LUT2 #(
    .INIT(4'h1)) 
    buff1_reg__0_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_2 [0]));
  LUT2 #(
    .INIT(4'h1)) 
    buff1_reg__0_i_2
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_1 ));
  LUT2 #(
    .INIT(4'h1)) 
    buff1_reg__1_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_2 [2]));
  LUT2 #(
    .INIT(4'h1)) 
    buff1_reg__1_i_2
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_2 [1]));
  LUT2 #(
    .INIT(4'h1)) 
    buff1_reg__2_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_3 ));
  LUT2 #(
    .INIT(4'h1)) 
    buff1_reg_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_9 [1]));
  LUT2 #(
    .INIT(4'h1)) 
    buff1_reg_i_2
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_9 [0]));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[10]_inv_i_1 
       (.I0(divisor_u0[10]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[10] ),
        .O(divisor_u[10]));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[11]_inv_i_1 
       (.I0(divisor_u0[11]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[11] ),
        .O(divisor_u[11]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_2 
       (.I0(\divisor0_reg[39]_0 [9]),
        .O(\divisor0[12]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[12]_inv_i_1 
       (.I0(divisor_u0[12]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[12] ),
        .O(divisor_u[12]));
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
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[13]_inv_i_1 
       (.I0(divisor_u0[13]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[13] ),
        .O(divisor_u[13]));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[14]_inv_i_1 
       (.I0(divisor_u0[14]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[14] ),
        .O(divisor_u[14]));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[15]_inv_i_1 
       (.I0(divisor_u0[15]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[15] ),
        .O(divisor_u[15]));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[16]_inv_i_1 
       (.I0(divisor_u0[16]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[16] ),
        .O(divisor_u[16]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_inv_i_3 
       (.I0(\divisor0_reg_n_0_[16] ),
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
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[17]_inv_i_1 
       (.I0(divisor_u0[17]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[17] ),
        .O(divisor_u[17]));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[18]_inv_i_1 
       (.I0(divisor_u0[18]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[18] ),
        .O(divisor_u[18]));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[19]_inv_i_1 
       (.I0(divisor_u0[19]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[19] ),
        .O(divisor_u[19]));
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[1]_i_1 
       (.I0(divisor_u0[1]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(divisor_u[1]));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[20]_inv_i_1 
       (.I0(divisor_u0[20]),
        .I1(p_0_in_0),
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
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[21]_inv_i_1 
       (.I0(divisor_u0[21]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[21] ),
        .O(divisor_u[21]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[22]_inv_i_1 
       (.I0(divisor_u0[22]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[22] ),
        .O(divisor_u[22]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[23]_inv_i_1 
       (.I0(divisor_u0[23]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[23] ),
        .O(divisor_u[23]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[24]_inv_i_1 
       (.I0(divisor_u0[24]),
        .I1(p_0_in_0),
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
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[25]_inv_i_1 
       (.I0(divisor_u0[25]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[25] ),
        .O(divisor_u[25]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[26]_inv_i_1 
       (.I0(divisor_u0[26]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[26] ),
        .O(divisor_u[26]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[27]_inv_i_1 
       (.I0(divisor_u0[27]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[27] ),
        .O(divisor_u[27]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[28]_inv_i_1 
       (.I0(divisor_u0[28]),
        .I1(p_0_in_0),
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
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[29]_inv_i_1 
       (.I0(divisor_u0[29]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[29] ),
        .O(divisor_u[29]));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[2]_i_1 
       (.I0(divisor_u0[2]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(divisor_u[2]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[30]_inv_i_1 
       (.I0(divisor_u0[30]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[30] ),
        .O(divisor_u[30]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[31]_inv_i_1 
       (.I0(divisor_u0[31]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[31] ),
        .O(divisor_u[31]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[32]_inv_i_1 
       (.I0(divisor_u0[32]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[32] ),
        .O(divisor_u[32]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[32]_inv_i_3 
       (.I0(\divisor0_reg_n_0_[32] ),
        .O(\divisor0[32]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[32]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(\divisor0[32]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[32]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[30] ),
        .O(\divisor0[32]_inv_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[32]_inv_i_6 
       (.I0(\divisor0_reg_n_0_[29] ),
        .O(\divisor0[32]_inv_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[33]_inv_i_1 
       (.I0(divisor_u0[33]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[33] ),
        .O(divisor_u[33]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[34]_inv_i_1 
       (.I0(divisor_u0[34]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[34] ),
        .O(divisor_u[34]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[35]_inv_i_1 
       (.I0(divisor_u0[35]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[35] ),
        .O(divisor_u[35]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[36]_inv_i_1 
       (.I0(divisor_u0[36]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[36] ),
        .O(divisor_u[36]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[36]_inv_i_3 
       (.I0(\divisor0_reg_n_0_[36] ),
        .O(\divisor0[36]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[36]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[35] ),
        .O(\divisor0[36]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[36]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[34] ),
        .O(\divisor0[36]_inv_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[36]_inv_i_6 
       (.I0(\divisor0_reg_n_0_[33] ),
        .O(\divisor0[36]_inv_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[37]_inv_i_1 
       (.I0(divisor_u0[37]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[37] ),
        .O(divisor_u[37]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[38]_inv_i_1 
       (.I0(divisor_u0[38]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[38] ),
        .O(divisor_u[38]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT2 #(
    .INIT(4'h7)) 
    \divisor0[39]_inv_i_1 
       (.I0(p_0_in_0),
        .I1(divisor_u0[39]),
        .O(divisor_u[39]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[39]_inv_i_3 
       (.I0(p_0_in_0),
        .O(\divisor0[39]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[39]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[38] ),
        .O(\divisor0[39]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[39]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[37] ),
        .O(\divisor0[39]_inv_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[3]_i_1 
       (.I0(divisor_u0[3]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(divisor_u[3]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[4]_i_1 
       (.I0(divisor_u0[4]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(divisor_u[4]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_2 
       (.I0(\divisor0_reg[39]_0 [3]),
        .O(\divisor0[4]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3 
       (.I0(\divisor0_reg[39]_0 [2]),
        .O(\divisor0[4]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3__0 
       (.I0(\divisor0_reg_n_0_[0] ),
        .O(\divisor0[4]_i_3__0_n_0 ));
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
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[5]_i_1 
       (.I0(divisor_u0[5]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(divisor_u[5]));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[6]_i_1 
       (.I0(divisor_u0[6]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(divisor_u[6]));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[7]_i_1 
       (.I0(divisor_u0[7]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(divisor_u[7]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_2 
       (.I0(\divisor0_reg[39]_0 [8]),
        .O(\divisor0[8]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3 
       (.I0(\divisor0_reg[39]_0 [7]),
        .O(\divisor0[8]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_4 
       (.I0(\divisor0_reg[39]_0 [5]),
        .O(\divisor0[8]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[8]_inv_i_1 
       (.I0(divisor_u0[8]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(divisor_u[8]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_inv_i_3 
       (.I0(\divisor0_reg_n_0_[8] ),
        .O(\divisor0[8]_inv_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_inv_i_4 
       (.I0(\divisor0_reg_n_0_[7] ),
        .O(\divisor0[8]_inv_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_inv_i_5 
       (.I0(\divisor0_reg_n_0_[6] ),
        .O(\divisor0[8]_inv_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_inv_i_6 
       (.I0(\divisor0_reg_n_0_[5] ),
        .O(\divisor0[8]_inv_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'h47)) 
    \divisor0[9]_inv_i_1 
       (.I0(divisor_u0[9]),
        .I1(p_0_in_0),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(divisor_u[9]));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[39]_0 [0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[12]_i_1 
       (.CI(\divisor0_reg[8]_i_1_n_0 ),
        .CO({\divisor0_reg[12]_i_1_n_0 ,\divisor0_reg[12]_i_1_n_1 ,\divisor0_reg[12]_i_1_n_2 ,\divisor0_reg[12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\divisor0_reg[39]_0 [9]}),
        .O(grp_fu_121_p1[12:9]),
        .S({\divisor0_reg[39]_0 [12:10],\divisor0[12]_i_2_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[12]_inv_i_2 
       (.CI(\divisor0_reg[8]_inv_i_2_n_0 ),
        .CO({\divisor0_reg[12]_inv_i_2_n_0 ,\divisor0_reg[12]_inv_i_2_n_1 ,\divisor0_reg[12]_inv_i_2_n_2 ,\divisor0_reg[12]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[12:9]),
        .S({\divisor0[12]_inv_i_3_n_0 ,\divisor0[12]_inv_i_4_n_0 ,\divisor0[12]_inv_i_5_n_0 ,\divisor0[12]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[16]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[16]_i_1 
       (.CI(\divisor0_reg[12]_i_1_n_0 ),
        .CO({\divisor0_reg[16]_i_1_n_0 ,\divisor0_reg[16]_i_1_n_1 ,\divisor0_reg[16]_i_1_n_2 ,\divisor0_reg[16]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_121_p1[16:13]),
        .S(\divisor0_reg[39]_0 [16:13]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[16]_inv_i_2 
       (.CI(\divisor0_reg[12]_inv_i_2_n_0 ),
        .CO({\divisor0_reg[16]_inv_i_2_n_0 ,\divisor0_reg[16]_inv_i_2_n_1 ,\divisor0_reg[16]_inv_i_2_n_2 ,\divisor0_reg[16]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[16:13]),
        .S({\divisor0[16]_inv_i_3_n_0 ,\divisor0[16]_inv_i_4_n_0 ,\divisor0[16]_inv_i_5_n_0 ,\divisor0[16]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[17]),
        .Q(\divisor0_reg_n_0_[17] ),
        .R(1'b0));
  FDRE \divisor0_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[18]),
        .Q(\divisor0_reg_n_0_[18] ),
        .R(1'b0));
  FDRE \divisor0_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[19]),
        .Q(\divisor0_reg_n_0_[19] ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[20]),
        .Q(\divisor0_reg_n_0_[20] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[20]_i_1 
       (.CI(\divisor0_reg[16]_i_1_n_0 ),
        .CO({\divisor0_reg[20]_i_1_n_0 ,\divisor0_reg[20]_i_1_n_1 ,\divisor0_reg[20]_i_1_n_2 ,\divisor0_reg[20]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_121_p1[20:17]),
        .S(\divisor0_reg[39]_0 [20:17]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[20]_inv_i_2 
       (.CI(\divisor0_reg[16]_inv_i_2_n_0 ),
        .CO({\divisor0_reg[20]_inv_i_2_n_0 ,\divisor0_reg[20]_inv_i_2_n_1 ,\divisor0_reg[20]_inv_i_2_n_2 ,\divisor0_reg[20]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[20:17]),
        .S({\divisor0[20]_inv_i_3_n_0 ,\divisor0[20]_inv_i_4_n_0 ,\divisor0[20]_inv_i_5_n_0 ,\divisor0[20]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[21]),
        .Q(\divisor0_reg_n_0_[21] ),
        .R(1'b0));
  FDRE \divisor0_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[22]),
        .Q(\divisor0_reg_n_0_[22] ),
        .R(1'b0));
  FDRE \divisor0_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[23]),
        .Q(\divisor0_reg_n_0_[23] ),
        .R(1'b0));
  FDRE \divisor0_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[24]),
        .Q(\divisor0_reg_n_0_[24] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[24]_i_1 
       (.CI(\divisor0_reg[20]_i_1_n_0 ),
        .CO({\divisor0_reg[24]_i_1_n_0 ,\divisor0_reg[24]_i_1_n_1 ,\divisor0_reg[24]_i_1_n_2 ,\divisor0_reg[24]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_121_p1[24:21]),
        .S(\divisor0_reg[39]_0 [24:21]));
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
        .D(grp_fu_121_p1[25]),
        .Q(\divisor0_reg_n_0_[25] ),
        .R(1'b0));
  FDRE \divisor0_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[26]),
        .Q(\divisor0_reg_n_0_[26] ),
        .R(1'b0));
  FDRE \divisor0_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[27]),
        .Q(\divisor0_reg_n_0_[27] ),
        .R(1'b0));
  FDRE \divisor0_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[28]),
        .Q(\divisor0_reg_n_0_[28] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[28]_i_1 
       (.CI(\divisor0_reg[24]_i_1_n_0 ),
        .CO({\divisor0_reg[28]_i_1_n_0 ,\divisor0_reg[28]_i_1_n_1 ,\divisor0_reg[28]_i_1_n_2 ,\divisor0_reg[28]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_121_p1[28:25]),
        .S(\divisor0_reg[39]_0 [28:25]));
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
        .D(grp_fu_121_p1[29]),
        .Q(\divisor0_reg_n_0_[29] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[30]),
        .Q(\divisor0_reg_n_0_[30] ),
        .R(1'b0));
  FDRE \divisor0_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[31]),
        .Q(\divisor0_reg_n_0_[31] ),
        .R(1'b0));
  FDRE \divisor0_reg[32] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[32]),
        .Q(\divisor0_reg_n_0_[32] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[32]_i_1 
       (.CI(\divisor0_reg[28]_i_1_n_0 ),
        .CO({\divisor0_reg[32]_i_1_n_0 ,\divisor0_reg[32]_i_1_n_1 ,\divisor0_reg[32]_i_1_n_2 ,\divisor0_reg[32]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_121_p1[32:29]),
        .S(\divisor0_reg[39]_0 [32:29]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[32]_inv_i_2 
       (.CI(\divisor0_reg[28]_inv_i_2_n_0 ),
        .CO({\divisor0_reg[32]_inv_i_2_n_0 ,\divisor0_reg[32]_inv_i_2_n_1 ,\divisor0_reg[32]_inv_i_2_n_2 ,\divisor0_reg[32]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[32:29]),
        .S({\divisor0[32]_inv_i_3_n_0 ,\divisor0[32]_inv_i_4_n_0 ,\divisor0[32]_inv_i_5_n_0 ,\divisor0[32]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[33] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[33]),
        .Q(\divisor0_reg_n_0_[33] ),
        .R(1'b0));
  FDRE \divisor0_reg[34] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[34]),
        .Q(\divisor0_reg_n_0_[34] ),
        .R(1'b0));
  FDRE \divisor0_reg[35] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[35]),
        .Q(\divisor0_reg_n_0_[35] ),
        .R(1'b0));
  FDRE \divisor0_reg[36] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[36]),
        .Q(\divisor0_reg_n_0_[36] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[36]_i_1 
       (.CI(\divisor0_reg[32]_i_1_n_0 ),
        .CO({\divisor0_reg[36]_i_1_n_0 ,\divisor0_reg[36]_i_1_n_1 ,\divisor0_reg[36]_i_1_n_2 ,\divisor0_reg[36]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_121_p1[36:33]),
        .S(\divisor0_reg[39]_0 [36:33]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[36]_inv_i_2 
       (.CI(\divisor0_reg[32]_inv_i_2_n_0 ),
        .CO({\divisor0_reg[36]_inv_i_2_n_0 ,\divisor0_reg[36]_inv_i_2_n_1 ,\divisor0_reg[36]_inv_i_2_n_2 ,\divisor0_reg[36]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[36:33]),
        .S({\divisor0[36]_inv_i_3_n_0 ,\divisor0[36]_inv_i_4_n_0 ,\divisor0[36]_inv_i_5_n_0 ,\divisor0[36]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[37] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[37]),
        .Q(\divisor0_reg_n_0_[37] ),
        .R(1'b0));
  FDRE \divisor0_reg[38] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[38]),
        .Q(\divisor0_reg_n_0_[38] ),
        .R(1'b0));
  FDRE \divisor0_reg[39] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[39]),
        .Q(p_0_in_0),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[39]_i_1 
       (.CI(\divisor0_reg[36]_i_1_n_0 ),
        .CO({\NLW_divisor0_reg[39]_i_1_CO_UNCONNECTED [3:2],\divisor0_reg[39]_i_1_n_2 ,\divisor0_reg[39]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_divisor0_reg[39]_i_1_O_UNCONNECTED [3],grp_fu_121_p1[39:37]}),
        .S({1'b0,\divisor0_reg[39]_0 [39:37]}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[39]_inv_i_2 
       (.CI(\divisor0_reg[36]_inv_i_2_n_0 ),
        .CO({\NLW_divisor0_reg[39]_inv_i_2_CO_UNCONNECTED [3:2],\divisor0_reg[39]_inv_i_2_n_2 ,\divisor0_reg[39]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_divisor0_reg[39]_inv_i_2_O_UNCONNECTED [3],divisor_u0[39:37]}),
        .S({1'b0,\divisor0[39]_inv_i_3_n_0 ,\divisor0[39]_inv_i_4_n_0 ,\divisor0[39]_inv_i_5_n_0 }));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[4]_i_1 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_1_n_0 ,\divisor0_reg[4]_i_1_n_1 ,\divisor0_reg[4]_i_1_n_2 ,\divisor0_reg[4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,\divisor0_reg[39]_0 [3:2],1'b0}),
        .O(grp_fu_121_p1[4:1]),
        .S({\divisor0_reg[39]_0 [4],\divisor0[4]_i_2_n_0 ,\divisor0[4]_i_3_n_0 ,\divisor0_reg[39]_0 [1]}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[4]_i_2 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_2_n_0 ,\divisor0_reg[4]_i_2_n_1 ,\divisor0_reg[4]_i_2_n_2 ,\divisor0_reg[4]_i_2_n_3 }),
        .CYINIT(\divisor0[4]_i_3__0_n_0 ),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[4:1]),
        .S({\divisor0[4]_i_4_n_0 ,\divisor0[4]_i_5_n_0 ,\divisor0[4]_i_6_n_0 ,\divisor0[4]_i_7_n_0 }));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[8]_i_1 
       (.CI(\divisor0_reg[4]_i_1_n_0 ),
        .CO({\divisor0_reg[8]_i_1_n_0 ,\divisor0_reg[8]_i_1_n_1 ,\divisor0_reg[8]_i_1_n_2 ,\divisor0_reg[8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\divisor0_reg[39]_0 [8:7],1'b0,\divisor0_reg[39]_0 [5]}),
        .O(grp_fu_121_p1[8:5]),
        .S({\divisor0[8]_i_2_n_0 ,\divisor0[8]_i_3_n_0 ,\divisor0_reg[39]_0 [6],\divisor0[8]_i_4_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[8]_inv_i_2 
       (.CI(\divisor0_reg[4]_i_2_n_0 ),
        .CO({\divisor0_reg[8]_inv_i_2_n_0 ,\divisor0_reg[8]_inv_i_2_n_1 ,\divisor0_reg[8]_inv_i_2_n_2 ,\divisor0_reg[8]_inv_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[8:5]),
        .S({\divisor0[8]_inv_i_3_n_0 ,\divisor0[8]_inv_i_4_n_0 ,\divisor0[8]_inv_i_5_n_0 ,\divisor0[8]_inv_i_6_n_0 }));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_121_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div_u fn1_srem_8s_40ns_7_12_seq_1_div_u_0
       (.D({fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_1,fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_2,fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_3,fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_4,fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_5,fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_6}),
        .E(start0),
        .Q(remd_tmp),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\divisor0_reg[39]_inv_0 ({divisor_u,\divisor0_reg_n_0_[0] }),
        .\r_stage_reg[8]_0 (done0));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(done0),
        .D(remd_tmp),
        .Q(\remd_reg[6]_0 [0]),
        .R(1'b0));
  FDRE \remd_reg[1] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_6),
        .Q(remd[1]),
        .R(1'b0));
  FDRE \remd_reg[2] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_5),
        .Q(remd[2]),
        .R(1'b0));
  FDRE \remd_reg[3] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_4),
        .Q(remd[3]),
        .R(1'b0));
  FDRE \remd_reg[4] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_3),
        .Q(remd[4]),
        .R(1'b0));
  FDRE \remd_reg[5] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_2),
        .Q(remd[5]),
        .R(1'b0));
  FDRE \remd_reg[6] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_1),
        .Q(remd[6]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q),
        .Q(start0),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h1)) 
    tmp_product__0_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_4 [1]));
  LUT2 #(
    .INIT(4'h1)) 
    tmp_product__0_i_2
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_4 [0]));
  LUT2 #(
    .INIT(4'h1)) 
    tmp_product__1_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_5 [1]));
  LUT2 #(
    .INIT(4'h1)) 
    tmp_product__2_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(\remd_reg[6]_7 ));
  LUT2 #(
    .INIT(4'h1)) 
    tmp_product_i_1
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(A[1]));
  LUT2 #(
    .INIT(4'h1)) 
    tmp_product_i_2
       (.I0(buff0_reg_i_3_n_0),
        .I1(remd[6]),
        .O(A[0]));
endmodule

(* ORIG_REF_NAME = "fn1_srem_8s_40ns_7_12_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div_u
   (Q,
    D,
    \r_stage_reg[8]_0 ,
    ap_rst,
    ap_clk,
    E,
    \divisor0_reg[39]_inv_0 );
  output [0:0]Q;
  output [5:0]D;
  output [0:0]\r_stage_reg[8]_0 ;
  input ap_rst;
  input ap_clk;
  input [0:0]E;
  input [39:0]\divisor0_reg[39]_inv_0 ;

  wire [5:0]D;
  wire [0:0]E;
  wire [0:0]Q;
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
  wire cal_tmp_carry__1_n_0;
  wire cal_tmp_carry__1_n_1;
  wire cal_tmp_carry__1_n_2;
  wire cal_tmp_carry__1_n_3;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
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
  wire cal_tmp_carry__6_n_0;
  wire cal_tmp_carry__6_n_1;
  wire cal_tmp_carry__6_n_2;
  wire cal_tmp_carry__6_n_3;
  wire cal_tmp_carry__7_n_0;
  wire cal_tmp_carry__7_n_1;
  wire cal_tmp_carry__7_n_2;
  wire cal_tmp_carry__7_n_3;
  wire cal_tmp_carry__8_n_1;
  wire cal_tmp_carry__8_n_2;
  wire cal_tmp_carry__8_n_3;
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
  wire [7:0]dividend_tmp;
  wire \dividend_tmp[1]_i_1_n_0 ;
  wire \dividend_tmp[2]_i_1_n_0 ;
  wire \dividend_tmp[3]_i_1_n_0 ;
  wire \dividend_tmp[4]_i_1_n_0 ;
  wire \dividend_tmp[5]_i_1_n_0 ;
  wire \dividend_tmp[6]_i_1_n_0 ;
  wire \dividend_tmp[7]_i_1_n_0 ;
  wire [39:0]\divisor0_reg[39]_inv_0 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire [39:8]p_0_in;
  wire p_0_in_0;
  wire p_1_in0;
  wire [0:0]p_2_out;
  wire [0:0]\r_stage_reg[8]_0 ;
  wire \r_stage_reg_n_0_[0] ;
  wire \r_stage_reg_n_0_[1] ;
  wire \r_stage_reg_n_0_[2] ;
  wire \r_stage_reg_n_0_[3] ;
  wire \r_stage_reg_n_0_[4] ;
  wire \r_stage_reg_n_0_[5] ;
  wire \r_stage_reg_n_0_[6] ;
  wire \r_stage_reg_n_0_[7] ;
  wire \remd[6]_i_2_n_0 ;
  wire [6:1]remd_tmp;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp[1]_i_1_n_0 ;
  wire \remd_tmp[2]_i_1_n_0 ;
  wire \remd_tmp[3]_i_1_n_0 ;
  wire \remd_tmp[4]_i_1_n_0 ;
  wire \remd_tmp[5]_i_1_n_0 ;
  wire \remd_tmp[6]_i_1_n_0 ;
  wire [6:0]remd_tmp_mux;
  wire [3:3]NLW_cal_tmp_carry__0_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__1_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__2_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__4_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__5_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__6_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__7_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__8_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__9_CO_UNCONNECTED;
  wire [3:1]NLW_cal_tmp_carry__9_O_UNCONNECTED;

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
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__1_O_UNCONNECTED[3:0]),
        .S(p_0_in[11:8]));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__2_O_UNCONNECTED[3:0]),
        .S(p_0_in[15:12]));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({cal_tmp_carry__3_n_0,cal_tmp_carry__3_n_1,cal_tmp_carry__3_n_2,cal_tmp_carry__3_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__3_O_UNCONNECTED[3:0]),
        .S(p_0_in[19:16]));
  CARRY4 cal_tmp_carry__4
       (.CI(cal_tmp_carry__3_n_0),
        .CO({cal_tmp_carry__4_n_0,cal_tmp_carry__4_n_1,cal_tmp_carry__4_n_2,cal_tmp_carry__4_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__4_O_UNCONNECTED[3:0]),
        .S(p_0_in[23:20]));
  CARRY4 cal_tmp_carry__5
       (.CI(cal_tmp_carry__4_n_0),
        .CO({cal_tmp_carry__5_n_0,cal_tmp_carry__5_n_1,cal_tmp_carry__5_n_2,cal_tmp_carry__5_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__5_O_UNCONNECTED[3:0]),
        .S(p_0_in[27:24]));
  CARRY4 cal_tmp_carry__6
       (.CI(cal_tmp_carry__5_n_0),
        .CO({cal_tmp_carry__6_n_0,cal_tmp_carry__6_n_1,cal_tmp_carry__6_n_2,cal_tmp_carry__6_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__6_O_UNCONNECTED[3:0]),
        .S(p_0_in[31:28]));
  CARRY4 cal_tmp_carry__7
       (.CI(cal_tmp_carry__6_n_0),
        .CO({cal_tmp_carry__7_n_0,cal_tmp_carry__7_n_1,cal_tmp_carry__7_n_2,cal_tmp_carry__7_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__7_O_UNCONNECTED[3:0]),
        .S(p_0_in[35:32]));
  CARRY4 cal_tmp_carry__8
       (.CI(cal_tmp_carry__7_n_0),
        .CO({p_2_out,cal_tmp_carry__8_n_1,cal_tmp_carry__8_n_2,cal_tmp_carry__8_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__8_O_UNCONNECTED[3:0]),
        .S(p_0_in[39:36]));
  CARRY4 cal_tmp_carry__9
       (.CI(p_2_out),
        .CO(NLW_cal_tmp_carry__9_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__9_O_UNCONNECTED[3:1],p_0_in_0}),
        .S({1'b0,1'b0,1'b0,1'b1}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1
       (.I0(remd_tmp[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[2]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(remd_tmp[1]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[1]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3
       (.I0(Q),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[0]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_4
       (.I0(dividend_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(p_1_in0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[2]),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[1]),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_7
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_7_n_0));
  LUT3 #(
    .INIT(8'h2D)) 
    cal_tmp_carry_i_8
       (.I0(dividend_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_8_n_0));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \dividend_tmp[1]_i_1 
       (.I0(dividend_tmp[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[2]_i_1 
       (.I0(dividend_tmp[1]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[3]_i_1 
       (.I0(dividend_tmp[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \dividend_tmp[4]_i_1 
       (.I0(dividend_tmp[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[5]_i_1 
       (.I0(dividend_tmp[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \dividend_tmp[6]_i_1 
       (.I0(dividend_tmp[5]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[7]_i_1 
       (.I0(dividend_tmp[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_2_out),
        .Q(dividend_tmp[0]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[1]_i_1_n_0 ),
        .Q(dividend_tmp[1]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[2]_i_1_n_0 ),
        .Q(dividend_tmp[2]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[3]_i_1_n_0 ),
        .Q(dividend_tmp[3]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[4]_i_1_n_0 ),
        .Q(dividend_tmp[4]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[5]_i_1_n_0 ),
        .Q(dividend_tmp[5]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[6]_i_1_n_0 ),
        .Q(dividend_tmp[6]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[7]_i_1_n_0 ),
        .Q(dividend_tmp[7]),
        .R(1'b0));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[10]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [10]),
        .Q(p_0_in[10]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[11]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [11]),
        .Q(p_0_in[11]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[12]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [12]),
        .Q(p_0_in[12]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[13]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [13]),
        .Q(p_0_in[13]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[14]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [14]),
        .Q(p_0_in[14]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[15]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [15]),
        .Q(p_0_in[15]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[16]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [16]),
        .Q(p_0_in[16]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[17]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [17]),
        .Q(p_0_in[17]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[18]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [18]),
        .Q(p_0_in[18]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[19]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [19]),
        .Q(p_0_in[19]),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[20]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [20]),
        .Q(p_0_in[20]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[21]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [21]),
        .Q(p_0_in[21]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[22]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [22]),
        .Q(p_0_in[22]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[23]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [23]),
        .Q(p_0_in[23]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[24]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [24]),
        .Q(p_0_in[24]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[25]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [25]),
        .Q(p_0_in[25]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[26]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [26]),
        .Q(p_0_in[26]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[27]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [27]),
        .Q(p_0_in[27]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[28]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [28]),
        .Q(p_0_in[28]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[29]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [29]),
        .Q(p_0_in[29]),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[30]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [30]),
        .Q(p_0_in[30]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[31]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [31]),
        .Q(p_0_in[31]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[32]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [32]),
        .Q(p_0_in[32]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[33]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [33]),
        .Q(p_0_in[33]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[34]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [34]),
        .Q(p_0_in[34]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[35]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [35]),
        .Q(p_0_in[35]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[36]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [36]),
        .Q(p_0_in[36]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[37]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [37]),
        .Q(p_0_in[37]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[38]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [38]),
        .Q(p_0_in[38]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[39]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [39]),
        .Q(p_0_in[39]),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[8]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [8]),
        .Q(p_0_in[8]),
        .R(1'b0));
  (* inverted = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \divisor0_reg[9]_inv 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[39]_inv_0 [9]),
        .Q(p_0_in[9]),
        .R(1'b0));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  FDRE \r_stage_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\r_stage_reg_n_0_[1] ),
        .R(ap_rst));
  FDRE \r_stage_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[1] ),
        .Q(\r_stage_reg_n_0_[2] ),
        .R(ap_rst));
  FDRE \r_stage_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[2] ),
        .Q(\r_stage_reg_n_0_[3] ),
        .R(ap_rst));
  FDRE \r_stage_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[3] ),
        .Q(\r_stage_reg_n_0_[4] ),
        .R(ap_rst));
  FDRE \r_stage_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[4] ),
        .Q(\r_stage_reg_n_0_[5] ),
        .R(ap_rst));
  FDRE \r_stage_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[5] ),
        .Q(\r_stage_reg_n_0_[6] ),
        .R(ap_rst));
  FDRE \r_stage_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[6] ),
        .Q(\r_stage_reg_n_0_[7] ),
        .R(ap_rst));
  FDRE \r_stage_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[7] ),
        .Q(\r_stage_reg[8]_0 ),
        .R(ap_rst));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \remd[1]_i_1 
       (.I0(Q),
        .I1(remd_tmp[1]),
        .O(D[0]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'h1E)) 
    \remd[2]_i_1 
       (.I0(Q),
        .I1(remd_tmp[1]),
        .I2(remd_tmp[2]),
        .O(D[1]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT4 #(
    .INIT(16'h01FE)) 
    \remd[3]_i_1 
       (.I0(remd_tmp[2]),
        .I1(remd_tmp[1]),
        .I2(Q),
        .I3(remd_tmp[3]),
        .O(D[2]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h0001FFFE)) 
    \remd[4]_i_1 
       (.I0(remd_tmp[3]),
        .I1(Q),
        .I2(remd_tmp[1]),
        .I3(remd_tmp[2]),
        .I4(remd_tmp[4]),
        .O(D[3]));
  LUT6 #(
    .INIT(64'h00000001FFFFFFFE)) 
    \remd[5]_i_1 
       (.I0(remd_tmp[4]),
        .I1(remd_tmp[2]),
        .I2(remd_tmp[1]),
        .I3(Q),
        .I4(remd_tmp[3]),
        .I5(remd_tmp[5]),
        .O(D[4]));
  LUT3 #(
    .INIT(8'h4B)) 
    \remd[6]_i_1 
       (.I0(remd_tmp[5]),
        .I1(\remd[6]_i_2_n_0 ),
        .I2(remd_tmp[6]),
        .O(D[5]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h00000001)) 
    \remd[6]_i_2 
       (.I0(remd_tmp[3]),
        .I1(Q),
        .I2(remd_tmp[1]),
        .I3(remd_tmp[2]),
        .I4(remd_tmp[4]),
        .O(\remd[6]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[0]_i_1 
       (.I0(dividend_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1 
       (.I0(Q),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1 
       (.I0(remd_tmp[1]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1 
       (.I0(remd_tmp[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1 
       (.I0(remd_tmp[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(remd_tmp[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
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
        .Q(Q),
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
