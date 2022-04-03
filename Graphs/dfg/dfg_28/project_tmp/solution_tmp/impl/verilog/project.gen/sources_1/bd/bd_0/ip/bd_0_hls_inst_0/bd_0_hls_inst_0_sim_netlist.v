// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Mon Apr 12 10:36:49 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/nanwu/GNN_DFG/bb/dfg_28/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.v
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
    p_7);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [15:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p, LAYERED_METADATA undef" *) input [7:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_7 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_7, LAYERED_METADATA undef" *) input [15:0]p_7;

  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire [15:0]ap_return;
  wire ap_rst;
  wire ap_start;
  wire [7:0]p;
  wire [15:0]p_7;

  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "13'b0000000000001" *) 
  (* ap_ST_fsm_state10 = "13'b0001000000000" *) 
  (* ap_ST_fsm_state11 = "13'b0010000000000" *) 
  (* ap_ST_fsm_state12 = "13'b0100000000000" *) 
  (* ap_ST_fsm_state13 = "13'b1000000000000" *) 
  (* ap_ST_fsm_state2 = "13'b0000000000010" *) 
  (* ap_ST_fsm_state3 = "13'b0000000000100" *) 
  (* ap_ST_fsm_state4 = "13'b0000000001000" *) 
  (* ap_ST_fsm_state5 = "13'b0000000010000" *) 
  (* ap_ST_fsm_state6 = "13'b0000000100000" *) 
  (* ap_ST_fsm_state7 = "13'b0000001000000" *) 
  (* ap_ST_fsm_state8 = "13'b0000010000000" *) 
  (* ap_ST_fsm_state9 = "13'b0000100000000" *) 
  bd_0_hls_inst_0_fn1 inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p(p),
        .p_7(p_7));
endmodule

(* ORIG_REF_NAME = "fn1" *) (* ap_ST_fsm_state1 = "13'b0000000000001" *) (* ap_ST_fsm_state10 = "13'b0001000000000" *) 
(* ap_ST_fsm_state11 = "13'b0010000000000" *) (* ap_ST_fsm_state12 = "13'b0100000000000" *) (* ap_ST_fsm_state13 = "13'b1000000000000" *) 
(* ap_ST_fsm_state2 = "13'b0000000000010" *) (* ap_ST_fsm_state3 = "13'b0000000000100" *) (* ap_ST_fsm_state4 = "13'b0000000001000" *) 
(* ap_ST_fsm_state5 = "13'b0000000010000" *) (* ap_ST_fsm_state6 = "13'b0000000100000" *) (* ap_ST_fsm_state7 = "13'b0000001000000" *) 
(* ap_ST_fsm_state8 = "13'b0000010000000" *) (* ap_ST_fsm_state9 = "13'b0000100000000" *) (* hls_module = "yes" *) 
module bd_0_hls_inst_0_fn1
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p,
    p_7,
    ap_return);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [7:0]p;
  input [15:0]p_7;
  output [15:0]ap_return;

  wire \ap_CS_fsm[1]_i_2_n_0 ;
  wire \ap_CS_fsm[1]_i_3_n_0 ;
  wire \ap_CS_fsm_reg_n_0_[0] ;
  wire \ap_CS_fsm_reg_n_0_[10] ;
  wire \ap_CS_fsm_reg_n_0_[11] ;
  wire \ap_CS_fsm_reg_n_0_[1] ;
  wire \ap_CS_fsm_reg_n_0_[2] ;
  wire \ap_CS_fsm_reg_n_0_[3] ;
  wire \ap_CS_fsm_reg_n_0_[5] ;
  wire \ap_CS_fsm_reg_n_0_[6] ;
  wire \ap_CS_fsm_reg_n_0_[7] ;
  wire \ap_CS_fsm_reg_n_0_[8] ;
  wire \ap_CS_fsm_reg_n_0_[9] ;
  wire ap_CS_fsm_state5;
  wire [1:0]ap_NS_fsm;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire [15:0]ap_return;
  wire \ap_return[12]_INST_0_i_1_n_0 ;
  wire \ap_return[8]_INST_0_i_1_n_0 ;
  wire \ap_return[8]_INST_0_i_2_n_0 ;
  wire ap_rst;
  wire ap_start;
  wire [7:0]p;
  wire [15:0]p_7;
  wire srem_9s_18ns_8_13_seq_1_U2_n_0;
  wire srem_9s_18ns_8_13_seq_1_U2_n_1;
  wire start0;
  wire urem_1ns_33ns_1_5_seq_1_U1_n_1;
  wire v_9_reg_155;

  assign ap_ready = ap_done;
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hAE)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(ap_done),
        .I1(\ap_CS_fsm_reg_n_0_[0] ),
        .I2(ap_start),
        .O(ap_NS_fsm[0]));
  LUT6 #(
    .INIT(64'h0000000000000004)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(\ap_CS_fsm[1]_i_2_n_0 ),
        .I1(\ap_CS_fsm[1]_i_3_n_0 ),
        .I2(\ap_CS_fsm_reg_n_0_[8] ),
        .I3(\ap_CS_fsm_reg_n_0_[9] ),
        .I4(\ap_CS_fsm_reg_n_0_[6] ),
        .I5(\ap_CS_fsm_reg_n_0_[7] ),
        .O(ap_NS_fsm[1]));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFF7)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(ap_start),
        .I1(\ap_CS_fsm_reg_n_0_[0] ),
        .I2(\ap_CS_fsm_reg_n_0_[11] ),
        .I3(\ap_CS_fsm_reg_n_0_[10] ),
        .I4(ap_done),
        .I5(\ap_CS_fsm_reg_n_0_[1] ),
        .O(\ap_CS_fsm[1]_i_2_n_0 ));
  LUT4 #(
    .INIT(16'h0001)) 
    \ap_CS_fsm[1]_i_3 
       (.I0(ap_CS_fsm_state5),
        .I1(\ap_CS_fsm_reg_n_0_[5] ),
        .I2(\ap_CS_fsm_reg_n_0_[2] ),
        .I3(\ap_CS_fsm_reg_n_0_[3] ),
        .O(\ap_CS_fsm[1]_i_3_n_0 ));
  (* FSM_ENCODING = "none" *) 
  FDSE #(
    .INIT(1'b1)) 
    \ap_CS_fsm_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[0]),
        .Q(\ap_CS_fsm_reg_n_0_[0] ),
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
        .Q(ap_done),
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
        .Q(ap_CS_fsm_state5),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state5),
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
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(\ap_CS_fsm_reg_n_0_[0] ),
        .I1(ap_start),
        .O(ap_idle));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[12]_INST_0_i_1 
       (.I0(v_9_reg_155),
        .O(\ap_return[12]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[15]_INST_0 
       (.I0(v_9_reg_155),
        .O(ap_return[15]));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[8]_INST_0_i_1 
       (.I0(v_9_reg_155),
        .O(\ap_return[8]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[8]_INST_0_i_2 
       (.I0(v_9_reg_155),
        .O(\ap_return[8]_INST_0_i_2_n_0 ));
  bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1 srem_9s_18ns_8_13_seq_1_U2
       (.D(srem_9s_18ns_8_13_seq_1_U2_n_1),
        .DI({\ap_return[8]_INST_0_i_1_n_0 ,\ap_return[8]_INST_0_i_2_n_0 }),
        .E(start0),
        .ap_clk(ap_clk),
        .ap_return(ap_return[14:0]),
        .\ap_return[14] (\ap_return[12]_INST_0_i_1_n_0 ),
        .ap_rst(ap_rst),
        .p(p),
        .p_7(p_7),
        .\r_stage_reg[0] (srem_9s_18ns_8_13_seq_1_U2_n_0),
        .v_9_reg_155(v_9_reg_155));
  bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1 urem_1ns_33ns_1_5_seq_1_U1
       (.D(srem_9s_18ns_8_13_seq_1_U2_n_1),
        .E(start0),
        .Q({ap_CS_fsm_state5,\ap_CS_fsm_reg_n_0_[0] }),
        .ap_clk(ap_clk),
        .ap_start(ap_start),
        .p(p),
        .p_7(p_7),
        .\remd_reg[0] (urem_1ns_33ns_1_5_seq_1_U1_n_1),
        .\remd_tmp_reg[0] (srem_9s_18ns_8_13_seq_1_U2_n_0),
        .v_9_reg_155(v_9_reg_155));
  FDRE \v_9_reg_155_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(urem_1ns_33ns_1_5_seq_1_U1_n_1),
        .Q(v_9_reg_155),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_srem_9s_18ns_8_13_seq_1" *) 
module bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1
   (\r_stage_reg[0] ,
    D,
    ap_return,
    E,
    ap_clk,
    p_7,
    ap_rst,
    v_9_reg_155,
    p,
    DI,
    \ap_return[14] );
  output \r_stage_reg[0] ;
  output [0:0]D;
  output [14:0]ap_return;
  input [0:0]E;
  input ap_clk;
  input [15:0]p_7;
  input ap_rst;
  input v_9_reg_155;
  input [7:0]p;
  input [1:0]DI;
  input [0:0]\ap_return[14] ;

  wire [0:0]D;
  wire [1:0]DI;
  wire [0:0]E;
  wire ap_clk;
  wire [14:0]ap_return;
  wire [0:0]\ap_return[14] ;
  wire ap_rst;
  wire [7:0]p;
  wire [15:0]p_7;
  wire \r_stage_reg[0] ;
  wire v_9_reg_155;

  bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div fn1_srem_9s_18ns_8_13_seq_1_div_U
       (.D(D),
        .DI(DI),
        .E(E),
        .ap_clk(ap_clk),
        .ap_return(ap_return),
        .\ap_return[14] (\ap_return[14] ),
        .ap_rst(ap_rst),
        .p(p),
        .p_7(p_7),
        .\r_stage_reg[0] (\r_stage_reg[0] ),
        .v_9_reg_155(v_9_reg_155));
endmodule

(* ORIG_REF_NAME = "fn1_srem_9s_18ns_8_13_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div
   (\r_stage_reg[0] ,
    D,
    ap_return,
    E,
    ap_clk,
    p_7,
    ap_rst,
    v_9_reg_155,
    p,
    DI,
    \ap_return[14] );
  output \r_stage_reg[0] ;
  output [0:0]D;
  output [14:0]ap_return;
  input [0:0]E;
  input ap_clk;
  input [15:0]p_7;
  input ap_rst;
  input v_9_reg_155;
  input [7:0]p;
  input [1:0]DI;
  input [0:0]\ap_return[14] ;

  wire [0:0]D;
  wire [1:0]DI;
  wire [0:0]E;
  wire ap_clk;
  wire [14:0]ap_return;
  wire \ap_return[0]_INST_0_i_2_n_0 ;
  wire \ap_return[0]_INST_0_i_3_n_0 ;
  wire \ap_return[0]_INST_0_i_4_n_0 ;
  wire \ap_return[0]_INST_0_n_0 ;
  wire \ap_return[0]_INST_0_n_1 ;
  wire \ap_return[0]_INST_0_n_2 ;
  wire \ap_return[0]_INST_0_n_3 ;
  wire [0:0]\ap_return[14] ;
  wire \ap_return[4]_INST_0_i_1_n_0 ;
  wire \ap_return[4]_INST_0_i_2_n_0 ;
  wire \ap_return[4]_INST_0_i_4_n_0 ;
  wire \ap_return[4]_INST_0_i_5_n_0 ;
  wire \ap_return[4]_INST_0_n_0 ;
  wire \ap_return[4]_INST_0_n_1 ;
  wire \ap_return[4]_INST_0_n_2 ;
  wire \ap_return[4]_INST_0_n_3 ;
  wire \ap_return[8]_INST_0_n_0 ;
  wire \ap_return[8]_INST_0_n_1 ;
  wire \ap_return[8]_INST_0_n_2 ;
  wire \ap_return[8]_INST_0_n_3 ;
  wire ap_rst;
  wire \dividend0_reg_n_0_[0] ;
  wire \dividend0_reg_n_0_[1] ;
  wire \dividend0_reg_n_0_[2] ;
  wire \dividend0_reg_n_0_[3] ;
  wire \dividend0_reg_n_0_[4] ;
  wire \dividend0_reg_n_0_[5] ;
  wire \dividend0_reg_n_0_[6] ;
  wire \divisor0[4]_i_2_n_0 ;
  wire \divisor0[4]_i_3__0_n_0 ;
  wire \divisor0[8]_i_2_n_0 ;
  wire \divisor0[8]_i_3__0_n_0 ;
  wire \divisor0_reg[12]_i_1_n_0 ;
  wire \divisor0_reg[12]_i_1_n_1 ;
  wire \divisor0_reg[12]_i_1_n_2 ;
  wire \divisor0_reg[12]_i_1_n_3 ;
  wire \divisor0_reg[12]_i_1_n_4 ;
  wire \divisor0_reg[12]_i_1_n_5 ;
  wire \divisor0_reg[12]_i_1_n_6 ;
  wire \divisor0_reg[12]_i_1_n_7 ;
  wire \divisor0_reg[16]_i_1_n_0 ;
  wire \divisor0_reg[16]_i_1_n_2 ;
  wire \divisor0_reg[16]_i_1_n_3 ;
  wire \divisor0_reg[16]_i_1_n_5 ;
  wire \divisor0_reg[16]_i_1_n_6 ;
  wire \divisor0_reg[16]_i_1_n_7 ;
  wire \divisor0_reg[4]_i_1_n_0 ;
  wire \divisor0_reg[4]_i_1_n_1 ;
  wire \divisor0_reg[4]_i_1_n_2 ;
  wire \divisor0_reg[4]_i_1_n_3 ;
  wire \divisor0_reg[4]_i_1_n_4 ;
  wire \divisor0_reg[4]_i_1_n_5 ;
  wire \divisor0_reg[4]_i_1_n_6 ;
  wire \divisor0_reg[4]_i_1_n_7 ;
  wire \divisor0_reg[8]_i_1_n_0 ;
  wire \divisor0_reg[8]_i_1_n_1 ;
  wire \divisor0_reg[8]_i_1_n_2 ;
  wire \divisor0_reg[8]_i_1_n_3 ;
  wire \divisor0_reg[8]_i_1_n_4 ;
  wire \divisor0_reg[8]_i_1_n_5 ;
  wire \divisor0_reg[8]_i_1_n_6 ;
  wire \divisor0_reg[8]_i_1_n_7 ;
  wire [16:1]divisor_u;
  wire fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10;
  wire fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_2;
  wire fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_3;
  wire fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_4;
  wire fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_5;
  wire fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_6;
  wire fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_7;
  wire fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_8;
  wire fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_9;
  wire [7:0]grp_fu_94_p2;
  wire [7:0]p;
  wire p_1_in;
  wire [15:0]p_7;
  wire \r_stage_reg[0] ;
  wire [7:3]sext_ln21_1_fu_112_p1;
  wire v_9_reg_155;
  wire [3:1]\NLW_ap_return[12]_INST_0_CO_UNCONNECTED ;
  wire [3:2]\NLW_ap_return[12]_INST_0_O_UNCONNECTED ;
  wire [2:2]\NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_divisor0_reg[16]_i_1_O_UNCONNECTED ;

  CARRY4 \ap_return[0]_INST_0 
       (.CI(1'b0),
        .CO({\ap_return[0]_INST_0_n_0 ,\ap_return[0]_INST_0_n_1 ,\ap_return[0]_INST_0_n_2 ,\ap_return[0]_INST_0_n_3 }),
        .CYINIT(1'b1),
        .DI({1'b0,1'b1,1'b1,v_9_reg_155}),
        .O(ap_return[3:0]),
        .S({sext_ln21_1_fu_112_p1[3],\ap_return[0]_INST_0_i_2_n_0 ,\ap_return[0]_INST_0_i_3_n_0 ,\ap_return[0]_INST_0_i_4_n_0 }));
  LUT2 #(
    .INIT(4'hE)) 
    \ap_return[0]_INST_0_i_1 
       (.I0(grp_fu_94_p2[3]),
        .I1(p[3]),
        .O(sext_ln21_1_fu_112_p1[3]));
  LUT2 #(
    .INIT(4'h1)) 
    \ap_return[0]_INST_0_i_2 
       (.I0(grp_fu_94_p2[2]),
        .I1(p[2]),
        .O(\ap_return[0]_INST_0_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h1)) 
    \ap_return[0]_INST_0_i_3 
       (.I0(grp_fu_94_p2[1]),
        .I1(p[1]),
        .O(\ap_return[0]_INST_0_i_3_n_0 ));
  LUT3 #(
    .INIT(8'h1E)) 
    \ap_return[0]_INST_0_i_4 
       (.I0(p[0]),
        .I1(grp_fu_94_p2[0]),
        .I2(v_9_reg_155),
        .O(\ap_return[0]_INST_0_i_4_n_0 ));
  CARRY4 \ap_return[12]_INST_0 
       (.CI(\ap_return[8]_INST_0_n_0 ),
        .CO({\NLW_ap_return[12]_INST_0_CO_UNCONNECTED [3:1],ap_return[14]}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\ap_return[14] }),
        .O({\NLW_ap_return[12]_INST_0_O_UNCONNECTED [3:2],ap_return[13:12]}),
        .S({1'b0,1'b0,1'b1,v_9_reg_155}));
  CARRY4 \ap_return[4]_INST_0 
       (.CI(\ap_return[0]_INST_0_n_0 ),
        .CO({\ap_return[4]_INST_0_n_0 ,\ap_return[4]_INST_0_n_1 ,\ap_return[4]_INST_0_n_2 ,\ap_return[4]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b1,\ap_return[4]_INST_0_i_1_n_0 ,\ap_return[4]_INST_0_i_2_n_0 ,1'b1}),
        .O(ap_return[7:4]),
        .S({sext_ln21_1_fu_112_p1[7],\ap_return[4]_INST_0_i_4_n_0 ,\ap_return[4]_INST_0_i_5_n_0 ,sext_ln21_1_fu_112_p1[4]}));
  LUT3 #(
    .INIT(8'hEF)) 
    \ap_return[4]_INST_0_i_1 
       (.I0(p[5]),
        .I1(grp_fu_94_p2[5]),
        .I2(v_9_reg_155),
        .O(\ap_return[4]_INST_0_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h56)) 
    \ap_return[4]_INST_0_i_2 
       (.I0(v_9_reg_155),
        .I1(grp_fu_94_p2[5]),
        .I2(p[5]),
        .O(\ap_return[4]_INST_0_i_2_n_0 ));
  LUT2 #(
    .INIT(4'hE)) 
    \ap_return[4]_INST_0_i_3 
       (.I0(grp_fu_94_p2[7]),
        .I1(p[7]),
        .O(sext_ln21_1_fu_112_p1[7]));
  LUT5 #(
    .INIT(32'h020202FD)) 
    \ap_return[4]_INST_0_i_4 
       (.I0(v_9_reg_155),
        .I1(grp_fu_94_p2[5]),
        .I2(p[5]),
        .I3(p[6]),
        .I4(grp_fu_94_p2[6]),
        .O(\ap_return[4]_INST_0_i_4_n_0 ));
  LUT5 #(
    .INIT(32'hA9A9A956)) 
    \ap_return[4]_INST_0_i_5 
       (.I0(v_9_reg_155),
        .I1(grp_fu_94_p2[5]),
        .I2(p[5]),
        .I3(p[4]),
        .I4(grp_fu_94_p2[4]),
        .O(\ap_return[4]_INST_0_i_5_n_0 ));
  LUT2 #(
    .INIT(4'hE)) 
    \ap_return[4]_INST_0_i_6 
       (.I0(grp_fu_94_p2[4]),
        .I1(p[4]),
        .O(sext_ln21_1_fu_112_p1[4]));
  CARRY4 \ap_return[8]_INST_0 
       (.CI(\ap_return[4]_INST_0_n_0 ),
        .CO({\ap_return[8]_INST_0_n_0 ,\ap_return[8]_INST_0_n_1 ,\ap_return[8]_INST_0_n_2 ,\ap_return[8]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,DI[1],1'b0,DI[0]}),
        .O(ap_return[11:8]),
        .S({1'b1,v_9_reg_155,1'b1,v_9_reg_155}));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_7[0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_7[1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_7[2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_7[3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_7[4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_7[5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_7[6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_7[7]),
        .Q(p_1_in),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_2 
       (.I0(p_7[4]),
        .O(\divisor0[4]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3__0 
       (.I0(p_7[2]),
        .O(\divisor0[4]_i_3__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_2 
       (.I0(p_7[7]),
        .O(\divisor0[8]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3__0 
       (.I0(p_7[5]),
        .O(\divisor0[8]_i_3__0_n_0 ));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[12]_i_1_n_6 ),
        .Q(divisor_u[10]),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[12]_i_1_n_5 ),
        .Q(divisor_u[11]),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[12]_i_1_n_4 ),
        .Q(divisor_u[12]),
        .R(1'b0));
  CARRY4 \divisor0_reg[12]_i_1 
       (.CI(\divisor0_reg[8]_i_1_n_0 ),
        .CO({\divisor0_reg[12]_i_1_n_0 ,\divisor0_reg[12]_i_1_n_1 ,\divisor0_reg[12]_i_1_n_2 ,\divisor0_reg[12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\divisor0_reg[12]_i_1_n_4 ,\divisor0_reg[12]_i_1_n_5 ,\divisor0_reg[12]_i_1_n_6 ,\divisor0_reg[12]_i_1_n_7 }),
        .S(p_7[12:9]));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[16]_i_1_n_7 ),
        .Q(divisor_u[13]),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[16]_i_1_n_6 ),
        .Q(divisor_u[14]),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[16]_i_1_n_5 ),
        .Q(divisor_u[15]),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[16]_i_1_n_0 ),
        .Q(divisor_u[16]),
        .R(1'b0));
  CARRY4 \divisor0_reg[16]_i_1 
       (.CI(\divisor0_reg[12]_i_1_n_0 ),
        .CO({\divisor0_reg[16]_i_1_n_0 ,\NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED [2],\divisor0_reg[16]_i_1_n_2 ,\divisor0_reg[16]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_divisor0_reg[16]_i_1_O_UNCONNECTED [3],\divisor0_reg[16]_i_1_n_5 ,\divisor0_reg[16]_i_1_n_6 ,\divisor0_reg[16]_i_1_n_7 }),
        .S({1'b1,p_7[15:13]}));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[4]_i_1_n_7 ),
        .Q(divisor_u[1]),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[4]_i_1_n_6 ),
        .Q(divisor_u[2]),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[4]_i_1_n_5 ),
        .Q(divisor_u[3]),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[4]_i_1_n_4 ),
        .Q(divisor_u[4]),
        .R(1'b0));
  CARRY4 \divisor0_reg[4]_i_1 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_1_n_0 ,\divisor0_reg[4]_i_1_n_1 ,\divisor0_reg[4]_i_1_n_2 ,\divisor0_reg[4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({p_7[4],1'b0,p_7[2],1'b0}),
        .O({\divisor0_reg[4]_i_1_n_4 ,\divisor0_reg[4]_i_1_n_5 ,\divisor0_reg[4]_i_1_n_6 ,\divisor0_reg[4]_i_1_n_7 }),
        .S({\divisor0[4]_i_2_n_0 ,p_7[3],\divisor0[4]_i_3__0_n_0 ,p_7[1]}));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[8]_i_1_n_7 ),
        .Q(divisor_u[5]),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[8]_i_1_n_6 ),
        .Q(divisor_u[6]),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[8]_i_1_n_5 ),
        .Q(divisor_u[7]),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[8]_i_1_n_4 ),
        .Q(divisor_u[8]),
        .R(1'b0));
  CARRY4 \divisor0_reg[8]_i_1 
       (.CI(\divisor0_reg[4]_i_1_n_0 ),
        .CO({\divisor0_reg[8]_i_1_n_0 ,\divisor0_reg[8]_i_1_n_1 ,\divisor0_reg[8]_i_1_n_2 ,\divisor0_reg[8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,p_7[7],1'b0,p_7[5]}),
        .O({\divisor0_reg[8]_i_1_n_4 ,\divisor0_reg[8]_i_1_n_5 ,\divisor0_reg[8]_i_1_n_6 ,\divisor0_reg[8]_i_1_n_7 }),
        .S({p_7[8],\divisor0[8]_i_2_n_0 ,p_7[6],\divisor0[8]_i_3__0_n_0 }));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[12]_i_1_n_7 ),
        .Q(divisor_u[9]),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div_u fn1_srem_9s_18ns_8_13_seq_1_div_u_0
       (.D(D),
        .E(E),
        .Q({p_1_in,\dividend0_reg_n_0_[6] ,\dividend0_reg_n_0_[5] ,\dividend0_reg_n_0_[4] ,\dividend0_reg_n_0_[3] ,\dividend0_reg_n_0_[2] ,\dividend0_reg_n_0_[1] }),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\dividend0_reg[0]_0 (\dividend0_reg_n_0_[0] ),
        .\divisor0_reg[16]_0 (divisor_u),
        .\r_stage_reg[0]_0 (\r_stage_reg[0] ),
        .\r_stage_reg[9]_0 (fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10),
        .\remd_tmp_reg[0]_0 (fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_2),
        .\remd_tmp_reg[5]_0 ({fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_3,fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_4,fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_5,fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_6,fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_7,fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_8,fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_9}));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10),
        .D(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_2),
        .Q(grp_fu_94_p2[0]),
        .R(1'b0));
  FDRE \remd_reg[1] 
       (.C(ap_clk),
        .CE(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10),
        .D(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_9),
        .Q(grp_fu_94_p2[1]),
        .R(1'b0));
  FDRE \remd_reg[2] 
       (.C(ap_clk),
        .CE(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10),
        .D(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_8),
        .Q(grp_fu_94_p2[2]),
        .R(1'b0));
  FDRE \remd_reg[3] 
       (.C(ap_clk),
        .CE(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10),
        .D(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_7),
        .Q(grp_fu_94_p2[3]),
        .R(1'b0));
  FDRE \remd_reg[4] 
       (.C(ap_clk),
        .CE(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10),
        .D(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_6),
        .Q(grp_fu_94_p2[4]),
        .R(1'b0));
  FDRE \remd_reg[5] 
       (.C(ap_clk),
        .CE(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10),
        .D(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_5),
        .Q(grp_fu_94_p2[5]),
        .R(1'b0));
  FDRE \remd_reg[6] 
       (.C(ap_clk),
        .CE(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10),
        .D(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_4),
        .Q(grp_fu_94_p2[6]),
        .R(1'b0));
  FDRE \remd_reg[7] 
       (.C(ap_clk),
        .CE(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10),
        .D(fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_3),
        .Q(grp_fu_94_p2[7]),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_srem_9s_18ns_8_13_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div_u
   (\r_stage_reg[0]_0 ,
    D,
    \remd_tmp_reg[0]_0 ,
    \remd_tmp_reg[5]_0 ,
    \r_stage_reg[9]_0 ,
    E,
    Q,
    ap_clk,
    \dividend0_reg[0]_0 ,
    ap_rst,
    \divisor0_reg[16]_0 );
  output \r_stage_reg[0]_0 ;
  output [0:0]D;
  output [0:0]\remd_tmp_reg[0]_0 ;
  output [6:0]\remd_tmp_reg[5]_0 ;
  output [0:0]\r_stage_reg[9]_0 ;
  input [0:0]E;
  input [6:0]Q;
  input ap_clk;
  input \dividend0_reg[0]_0 ;
  input ap_rst;
  input [15:0]\divisor0_reg[16]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [6:0]Q;
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
  wire cal_tmp_carry__1_n_0;
  wire cal_tmp_carry__1_n_1;
  wire cal_tmp_carry__1_n_2;
  wire cal_tmp_carry__1_n_3;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
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
  wire \dividend0[5]_i_2_n_0 ;
  wire \dividend0[7]_i_2_n_0 ;
  wire \dividend0_reg[0]_0 ;
  wire \dividend0_reg_n_0_[0] ;
  wire \dividend0_reg_n_0_[1] ;
  wire \dividend0_reg_n_0_[2] ;
  wire \dividend0_reg_n_0_[3] ;
  wire \dividend0_reg_n_0_[4] ;
  wire \dividend0_reg_n_0_[5] ;
  wire \dividend0_reg_n_0_[6] ;
  wire \dividend0_reg_n_0_[7] ;
  wire \dividend_tmp[1]_i_1_n_0 ;
  wire \dividend_tmp[2]_i_1_n_0 ;
  wire \dividend_tmp[3]_i_1_n_0 ;
  wire \dividend_tmp[4]_i_1_n_0 ;
  wire \dividend_tmp[5]_i_1_n_0 ;
  wire \dividend_tmp[6]_i_1_n_0 ;
  wire \dividend_tmp[7]_i_1_n_0 ;
  wire \dividend_tmp[8]_i_1_n_0 ;
  wire \dividend_tmp_reg_n_0_[0] ;
  wire \dividend_tmp_reg_n_0_[1] ;
  wire \dividend_tmp_reg_n_0_[2] ;
  wire \dividend_tmp_reg_n_0_[3] ;
  wire \dividend_tmp_reg_n_0_[4] ;
  wire \dividend_tmp_reg_n_0_[5] ;
  wire \dividend_tmp_reg_n_0_[6] ;
  wire \dividend_tmp_reg_n_0_[7] ;
  wire \dividend_tmp_reg_n_0_[8] ;
  wire [7:1]dividend_u;
  wire [15:0]\divisor0_reg[16]_0 ;
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
  wire [16:9]p_0_in;
  wire p_0_in_0;
  wire p_1_in0;
  wire [0:0]p_2_out;
  wire \r_stage_reg[0]_0 ;
  wire [0:0]\r_stage_reg[9]_0 ;
  wire \r_stage_reg_n_0_[2] ;
  wire \r_stage_reg_n_0_[3] ;
  wire \r_stage_reg_n_0_[4] ;
  wire \r_stage_reg_n_0_[5] ;
  wire \r_stage_reg_n_0_[6] ;
  wire \r_stage_reg_n_0_[7] ;
  wire \r_stage_reg_n_0_[8] ;
  wire \remd[7]_i_2_n_0 ;
  wire \remd_tmp[0]_i_1__0_n_0 ;
  wire \remd_tmp[1]_i_1_n_0 ;
  wire \remd_tmp[2]_i_1_n_0 ;
  wire \remd_tmp[3]_i_1_n_0 ;
  wire \remd_tmp[4]_i_1_n_0 ;
  wire \remd_tmp[5]_i_1_n_0 ;
  wire \remd_tmp[6]_i_1_n_0 ;
  wire \remd_tmp[7]_i_1_n_0 ;
  wire [7:0]remd_tmp_mux;
  wire [0:0]\remd_tmp_reg[0]_0 ;
  wire [6:0]\remd_tmp_reg[5]_0 ;
  wire \remd_tmp_reg_n_0_[1] ;
  wire \remd_tmp_reg_n_0_[2] ;
  wire \remd_tmp_reg_n_0_[3] ;
  wire \remd_tmp_reg_n_0_[4] ;
  wire \remd_tmp_reg_n_0_[5] ;
  wire \remd_tmp_reg_n_0_[6] ;
  wire \remd_tmp_reg_n_0_[7] ;
  wire sign0;
  wire [3:0]NLW_cal_tmp_carry__1_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__2_O_UNCONNECTED;
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
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[6]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[5]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[4]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[3]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[6] ),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[4] ),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_8
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[3] ),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_8_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,remd_tmp_mux[7]}),
        .O(NLW_cal_tmp_carry__1_O_UNCONNECTED[3:0]),
        .S({p_0_in[11:9],cal_tmp_carry__1_i_5_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_1
       (.I0(\remd_tmp_reg_n_0_[7] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[7]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_2
       (.I0(\divisor0_reg_n_0_[11] ),
        .O(p_0_in[11]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_3
       (.I0(\divisor0_reg_n_0_[10] ),
        .O(p_0_in[10]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_4
       (.I0(\divisor0_reg_n_0_[9] ),
        .O(p_0_in[9]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_5
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[7] ),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_5_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__2_O_UNCONNECTED[3:0]),
        .S(p_0_in[15:12]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_1
       (.I0(\divisor0_reg_n_0_[15] ),
        .O(p_0_in[15]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_2
       (.I0(\divisor0_reg_n_0_[14] ),
        .O(p_0_in[14]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_3
       (.I0(\divisor0_reg_n_0_[13] ),
        .O(p_0_in[13]));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_4
       (.I0(\divisor0_reg_n_0_[12] ),
        .O(p_0_in[12]));
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
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[2]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[1]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3
       (.I0(\remd_tmp_reg[0]_0 ),
        .I1(\r_stage_reg[0]_0 ),
        .O(remd_tmp_mux[0]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_4
       (.I0(\dividend_tmp_reg_n_0_[8] ),
        .I1(\r_stage_reg[0]_0 ),
        .O(p_1_in0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[2] ),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_7
       (.I0(\r_stage_reg[0]_0 ),
        .I1(\remd_tmp_reg[0]_0 ),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_7_n_0));
  LUT3 #(
    .INIT(8'h2D)) 
    cal_tmp_carry_i_8
       (.I0(\dividend_tmp_reg_n_0_[8] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(\dividend0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_8_n_0));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \dividend0[1]_i_1 
       (.I0(Q[6]),
        .I1(\dividend0_reg[0]_0 ),
        .I2(Q[0]),
        .O(dividend_u[1]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h57A8)) 
    \dividend0[2]_i_1 
       (.I0(Q[6]),
        .I1(\dividend0_reg[0]_0 ),
        .I2(Q[0]),
        .I3(Q[1]),
        .O(dividend_u[2]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'h5557AAA8)) 
    \dividend0[3]_i_1 
       (.I0(Q[6]),
        .I1(Q[0]),
        .I2(\dividend0_reg[0]_0 ),
        .I3(Q[1]),
        .I4(Q[2]),
        .O(dividend_u[3]));
  LUT6 #(
    .INIT(64'h55555557AAAAAAA8)) 
    \dividend0[4]_i_1 
       (.I0(Q[6]),
        .I1(Q[1]),
        .I2(\dividend0_reg[0]_0 ),
        .I3(Q[0]),
        .I4(Q[2]),
        .I5(Q[3]),
        .O(dividend_u[4]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \dividend0[5]_i_1 
       (.I0(Q[6]),
        .I1(\dividend0[5]_i_2_n_0 ),
        .I2(Q[4]),
        .O(dividend_u[5]));
  LUT5 #(
    .INIT(32'hFFFFFFFE)) 
    \dividend0[5]_i_2 
       (.I0(Q[2]),
        .I1(Q[0]),
        .I2(\dividend0_reg[0]_0 ),
        .I3(Q[1]),
        .I4(Q[3]),
        .O(\dividend0[5]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \dividend0[6]_i_1 
       (.I0(Q[6]),
        .I1(\dividend0[7]_i_2_n_0 ),
        .I2(Q[5]),
        .O(dividend_u[6]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'h04)) 
    \dividend0[7]_i_1 
       (.I0(Q[5]),
        .I1(Q[6]),
        .I2(\dividend0[7]_i_2_n_0 ),
        .O(dividend_u[7]));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \dividend0[7]_i_2 
       (.I0(Q[3]),
        .I1(Q[1]),
        .I2(\dividend0_reg[0]_0 ),
        .I3(Q[0]),
        .I4(Q[2]),
        .I5(Q[4]),
        .O(\dividend0[7]_i_2_n_0 ));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[0]_0 ),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(dividend_u[1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(dividend_u[2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(dividend_u[3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(dividend_u[4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(dividend_u[5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(dividend_u[6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(dividend_u[7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[1]_i_1 
       (.I0(\dividend0_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg_n_0_[0] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[2]_i_1 
       (.I0(\dividend0_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[3]_i_1 
       (.I0(\dividend0_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg_n_0_[2] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend0_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg_n_0_[3] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[5]_i_1 
       (.I0(\dividend0_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg_n_0_[4] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[6]_i_1 
       (.I0(\dividend0_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg_n_0_[5] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[7]_i_1 
       (.I0(\dividend0_reg_n_0_[6] ),
        .I1(\dividend_tmp_reg_n_0_[6] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[8]_i_1 
       (.I0(\dividend0_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg_n_0_[7] ),
        .I2(\r_stage_reg[0]_0 ),
        .O(\dividend_tmp[8]_i_1_n_0 ));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_2_out),
        .Q(\dividend_tmp_reg_n_0_[0] ),
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
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [9]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [10]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [11]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [12]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [13]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [14]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [15]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [0]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [1]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [2]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [3]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [4]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [5]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [6]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [7]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [8]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg[0]_0 ),
        .R(ap_rst));
  FDRE \r_stage_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[0]_0 ),
        .Q(D),
        .R(ap_rst));
  FDRE \r_stage_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D),
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
        .Q(\r_stage_reg_n_0_[8] ),
        .R(ap_rst));
  FDRE \r_stage_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[8] ),
        .Q(\r_stage_reg[9]_0 ),
        .R(ap_rst));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h6C)) 
    \remd[1]_i_1 
       (.I0(\remd_tmp_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .I2(sign0),
        .O(\remd_tmp_reg[5]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h1EF0)) 
    \remd[2]_i_1 
       (.I0(\remd_tmp_reg[0]_0 ),
        .I1(\remd_tmp_reg_n_0_[1] ),
        .I2(\remd_tmp_reg_n_0_[2] ),
        .I3(sign0),
        .O(\remd_tmp_reg[5]_0 [1]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'h01FEFF00)) 
    \remd[3]_i_1 
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\remd_tmp_reg[0]_0 ),
        .I2(\remd_tmp_reg_n_0_[2] ),
        .I3(\remd_tmp_reg_n_0_[3] ),
        .I4(sign0),
        .O(\remd_tmp_reg[5]_0 [2]));
  LUT6 #(
    .INIT(64'h0001FFFEFFFF0000)) 
    \remd[4]_i_1 
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\remd_tmp_reg[0]_0 ),
        .I2(\remd_tmp_reg_n_0_[1] ),
        .I3(\remd_tmp_reg_n_0_[3] ),
        .I4(\remd_tmp_reg_n_0_[4] ),
        .I5(sign0),
        .O(\remd_tmp_reg[5]_0 [3]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \remd[5]_i_1 
       (.I0(\remd[7]_i_2_n_0 ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .I2(sign0),
        .O(\remd_tmp_reg[5]_0 [4]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h2D78)) 
    \remd[6]_i_1 
       (.I0(\remd[7]_i_2_n_0 ),
        .I1(\remd_tmp_reg_n_0_[5] ),
        .I2(\remd_tmp_reg_n_0_[6] ),
        .I3(sign0),
        .O(\remd_tmp_reg[5]_0 [5]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h04FB7F80)) 
    \remd[7]_i_1 
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\remd[7]_i_2_n_0 ),
        .I2(\remd_tmp_reg_n_0_[6] ),
        .I3(\remd_tmp_reg_n_0_[7] ),
        .I4(sign0),
        .O(\remd_tmp_reg[5]_0 [6]));
  LUT6 #(
    .INIT(64'h0000000000000100)) 
    \remd[7]_i_2 
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\remd_tmp_reg_n_0_[2] ),
        .I2(\remd_tmp_reg[0]_0 ),
        .I3(sign0),
        .I4(\remd_tmp_reg_n_0_[1] ),
        .I5(\remd_tmp_reg_n_0_[3] ),
        .O(\remd[7]_i_2_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[0]_i_1__0 
       (.I0(\dividend_tmp_reg_n_0_[8] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1 
       (.I0(\remd_tmp_reg[0]_0 ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1 
       (.I0(\remd_tmp_reg_n_0_[1] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1 
       (.I0(\remd_tmp_reg_n_0_[2] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1 
       (.I0(\remd_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(\remd_tmp_reg_n_0_[4] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1 
       (.I0(\remd_tmp_reg_n_0_[5] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1 
       (.I0(\remd_tmp_reg_n_0_[6] ),
        .I1(\r_stage_reg[0]_0 ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_4),
        .O(\remd_tmp[7]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1__0_n_0 ),
        .Q(\remd_tmp_reg[0]_0 ),
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
  FDRE \sign0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[6]),
        .Q(sign0),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_urem_1ns_33ns_1_5_seq_1" *) 
module bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1
   (E,
    \remd_reg[0] ,
    ap_clk,
    \remd_tmp_reg[0] ,
    Q,
    ap_start,
    p,
    p_7,
    D,
    v_9_reg_155);
  output [0:0]E;
  output \remd_reg[0] ;
  input ap_clk;
  input \remd_tmp_reg[0] ;
  input [1:0]Q;
  input ap_start;
  input [7:0]p;
  input [15:0]p_7;
  input [0:0]D;
  input v_9_reg_155;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire ap_clk;
  wire ap_start;
  wire [7:0]p;
  wire [15:0]p_7;
  wire \remd_reg[0] ;
  wire \remd_tmp_reg[0] ;
  wire v_9_reg_155;

  bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div fn1_urem_1ns_33ns_1_5_seq_1_div_U
       (.D(D),
        .E(E),
        .Q(Q),
        .ap_clk(ap_clk),
        .ap_start(ap_start),
        .p(p),
        .p_7(p_7),
        .\remd_reg[0]_0 (\remd_reg[0] ),
        .\remd_tmp_reg[0] (\remd_tmp_reg[0] ),
        .v_9_reg_155(v_9_reg_155));
endmodule

(* ORIG_REF_NAME = "fn1_urem_1ns_33ns_1_5_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div
   (E,
    \remd_reg[0]_0 ,
    ap_clk,
    \remd_tmp_reg[0] ,
    Q,
    ap_start,
    p,
    p_7,
    D,
    v_9_reg_155);
  output [0:0]E;
  output \remd_reg[0]_0 ;
  input ap_clk;
  input \remd_tmp_reg[0] ;
  input [1:0]Q;
  input ap_start;
  input [7:0]p;
  input [15:0]p_7;
  input [0:0]D;
  input v_9_reg_155;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire ap_clk;
  wire ap_start;
  wire \dividend0[0]_i_2_n_0 ;
  wire \dividend0_reg_n_0_[0] ;
  wire \divisor0[12]_i_2_n_0 ;
  wire \divisor0[12]_i_3_n_0 ;
  wire \divisor0[32]_i_2_n_0 ;
  wire \divisor0[32]_i_3_n_0 ;
  wire \divisor0[32]_i_4_n_0 ;
  wire \divisor0[4]_i_2__0_n_0 ;
  wire \divisor0[4]_i_3_n_0 ;
  wire \divisor0[4]_i_4_n_0 ;
  wire \divisor0[8]_i_2__0_n_0 ;
  wire \divisor0[8]_i_3_n_0 ;
  wire \divisor0[8]_i_4_n_0 ;
  wire \divisor0_reg[12]_i_1__0_n_0 ;
  wire \divisor0_reg[12]_i_1__0_n_1 ;
  wire \divisor0_reg[12]_i_1__0_n_2 ;
  wire \divisor0_reg[12]_i_1__0_n_3 ;
  wire \divisor0_reg[32]_i_1_n_2 ;
  wire \divisor0_reg[32]_i_1_n_3 ;
  wire \divisor0_reg[4]_i_1__0_n_0 ;
  wire \divisor0_reg[4]_i_1__0_n_1 ;
  wire \divisor0_reg[4]_i_1__0_n_2 ;
  wire \divisor0_reg[4]_i_1__0_n_3 ;
  wire \divisor0_reg[8]_i_1__0_n_0 ;
  wire \divisor0_reg[8]_i_1__0_n_1 ;
  wire \divisor0_reg[8]_i_1__0_n_2 ;
  wire \divisor0_reg[8]_i_1__0_n_3 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[11] ;
  wire \divisor0_reg_n_0_[12] ;
  wire \divisor0_reg_n_0_[13] ;
  wire \divisor0_reg_n_0_[14] ;
  wire \divisor0_reg_n_0_[15] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[31] ;
  wire \divisor0_reg_n_0_[32] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire fn1_urem_1ns_33ns_1_5_seq_1_div_u_0_n_0;
  wire grp_fu_70_ap_start;
  wire [32:0]grp_fu_70_p1;
  wire icmp_ln18_fu_50_p2;
  wire [7:0]p;
  wire [15:0]p_7;
  wire \remd_reg[0]_0 ;
  wire \remd_reg_n_0_[0] ;
  wire \remd_tmp_reg[0] ;
  wire v_9_reg_155;
  wire [3:3]\NLW_divisor0_reg[32]_i_1_CO_UNCONNECTED ;

  LUT5 #(
    .INIT(32'h00000001)) 
    \dividend0[0]_i_1 
       (.I0(p[5]),
        .I1(p[4]),
        .I2(p[6]),
        .I3(p[7]),
        .I4(\dividend0[0]_i_2_n_0 ),
        .O(icmp_ln18_fu_50_p2));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \dividend0[0]_i_2 
       (.I0(p[2]),
        .I1(p[3]),
        .I2(p[0]),
        .I3(p[1]),
        .O(\dividend0[0]_i_2_n_0 ));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(icmp_ln18_fu_50_p2),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[0]_i_1 
       (.I0(p_7[0]),
        .O(grp_fu_70_p1[0]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_2 
       (.I0(p_7[11]),
        .O(\divisor0[12]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_3 
       (.I0(p_7[9]),
        .O(\divisor0[12]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[32]_i_2 
       (.I0(p_7[15]),
        .O(\divisor0[32]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[32]_i_3 
       (.I0(p_7[14]),
        .O(\divisor0[32]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[32]_i_4 
       (.I0(p_7[13]),
        .O(\divisor0[32]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_2__0 
       (.I0(p_7[3]),
        .O(\divisor0[4]_i_2__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3 
       (.I0(p_7[2]),
        .O(\divisor0[4]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_4 
       (.I0(p_7[1]),
        .O(\divisor0[4]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_2__0 
       (.I0(p_7[8]),
        .O(\divisor0[8]_i_2__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3 
       (.I0(p_7[6]),
        .O(\divisor0[8]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_4 
       (.I0(p_7[5]),
        .O(\divisor0[8]_i_4_n_0 ));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[12]_i_1__0 
       (.CI(\divisor0_reg[8]_i_1__0_n_0 ),
        .CO({\divisor0_reg[12]_i_1__0_n_0 ,\divisor0_reg[12]_i_1__0_n_1 ,\divisor0_reg[12]_i_1__0_n_2 ,\divisor0_reg[12]_i_1__0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,p_7[11],1'b0,p_7[9]}),
        .O(grp_fu_70_p1[12:9]),
        .S({p_7[12],\divisor0[12]_i_2_n_0 ,p_7[10],\divisor0[12]_i_3_n_0 }));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[31]),
        .Q(\divisor0_reg_n_0_[31] ),
        .R(1'b0));
  FDRE \divisor0_reg[32] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[32]),
        .Q(\divisor0_reg_n_0_[32] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[32]_i_1 
       (.CI(\divisor0_reg[12]_i_1__0_n_0 ),
        .CO({\NLW_divisor0_reg[32]_i_1_CO_UNCONNECTED [3],grp_fu_70_p1[32],\divisor0_reg[32]_i_1_n_2 ,\divisor0_reg[32]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,p_7[15:13]}),
        .O({grp_fu_70_p1[31],grp_fu_70_p1[15:13]}),
        .S({1'b1,\divisor0[32]_i_2_n_0 ,\divisor0[32]_i_3_n_0 ,\divisor0[32]_i_4_n_0 }));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[4]_i_1__0 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_1__0_n_0 ,\divisor0_reg[4]_i_1__0_n_1 ,\divisor0_reg[4]_i_1__0_n_2 ,\divisor0_reg[4]_i_1__0_n_3 }),
        .CYINIT(p_7[0]),
        .DI({1'b0,p_7[3:1]}),
        .O(grp_fu_70_p1[4:1]),
        .S({p_7[4],\divisor0[4]_i_2__0_n_0 ,\divisor0[4]_i_3_n_0 ,\divisor0[4]_i_4_n_0 }));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[8]_i_1__0 
       (.CI(\divisor0_reg[4]_i_1__0_n_0 ),
        .CO({\divisor0_reg[8]_i_1__0_n_0 ,\divisor0_reg[8]_i_1__0_n_1 ,\divisor0_reg[8]_i_1__0_n_2 ,\divisor0_reg[8]_i_1__0_n_3 }),
        .CYINIT(1'b0),
        .DI({p_7[8],1'b0,p_7[6:5]}),
        .O(grp_fu_70_p1[8:5]),
        .S({\divisor0[8]_i_2__0_n_0 ,p_7[7],\divisor0[8]_i_3_n_0 ,\divisor0[8]_i_4_n_0 }));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div_u fn1_urem_1ns_33ns_1_5_seq_1_div_u_0
       (.D(D),
        .E(E),
        .Q({\divisor0_reg_n_0_[32] ,\divisor0_reg_n_0_[31] ,\divisor0_reg_n_0_[15] ,\divisor0_reg_n_0_[14] ,\divisor0_reg_n_0_[13] ,\divisor0_reg_n_0_[12] ,\divisor0_reg_n_0_[11] ,\divisor0_reg_n_0_[10] ,\divisor0_reg_n_0_[9] ,\divisor0_reg_n_0_[8] ,\divisor0_reg_n_0_[7] ,\divisor0_reg_n_0_[6] ,\divisor0_reg_n_0_[5] ,\divisor0_reg_n_0_[4] ,\divisor0_reg_n_0_[3] ,\divisor0_reg_n_0_[2] ,\divisor0_reg_n_0_[1] ,\divisor0_reg_n_0_[0] }),
        .ap_clk(ap_clk),
        .\dividend0_reg[0]_0 (\dividend0_reg_n_0_[0] ),
        .\remd_reg[0] (\remd_reg_n_0_[0] ),
        .\remd_tmp_reg[0]_0 (fn1_urem_1ns_33ns_1_5_seq_1_div_u_0_n_0),
        .\remd_tmp_reg[0]_1 (\remd_tmp_reg[0] ));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(fn1_urem_1ns_33ns_1_5_seq_1_div_u_0_n_0),
        .Q(\remd_reg_n_0_[0] ),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    start0_i_1
       (.I0(Q[0]),
        .I1(ap_start),
        .O(grp_fu_70_ap_start));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_70_ap_start),
        .Q(E),
        .R(1'b0));
  LUT3 #(
    .INIT(8'hB8)) 
    \v_9_reg_155[0]_i_1 
       (.I0(\remd_reg_n_0_[0] ),
        .I1(Q[1]),
        .I2(v_9_reg_155),
        .O(\remd_reg[0]_0 ));
endmodule

(* ORIG_REF_NAME = "fn1_urem_1ns_33ns_1_5_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div_u
   (\remd_tmp_reg[0]_0 ,
    ap_clk,
    E,
    \dividend0_reg[0]_0 ,
    \remd_tmp_reg[0]_1 ,
    D,
    \remd_reg[0] ,
    Q);
  output \remd_tmp_reg[0]_0 ;
  input ap_clk;
  input [0:0]E;
  input \dividend0_reg[0]_0 ;
  input \remd_tmp_reg[0]_1 ;
  input [0:0]D;
  input \remd_reg[0] ;
  input [17:0]Q;

  wire [0:0]D;
  wire [0:0]E;
  wire [17:0]Q;
  wire ap_clk;
  wire cal_tmp_carry__0_i_1__0_n_0;
  wire cal_tmp_carry__0_i_2__0_n_0;
  wire cal_tmp_carry__0_i_3__0_n_0;
  wire cal_tmp_carry__0_i_4__0_n_0;
  wire cal_tmp_carry__0_n_0;
  wire cal_tmp_carry__0_n_1;
  wire cal_tmp_carry__0_n_2;
  wire cal_tmp_carry__0_n_3;
  wire cal_tmp_carry__1_i_1__0_n_0;
  wire cal_tmp_carry__1_i_2__0_n_0;
  wire cal_tmp_carry__1_i_3__0_n_0;
  wire cal_tmp_carry__1_i_4__0_n_0;
  wire cal_tmp_carry__1_n_0;
  wire cal_tmp_carry__1_n_1;
  wire cal_tmp_carry__1_n_2;
  wire cal_tmp_carry__1_n_3;
  wire cal_tmp_carry__2_i_1__0_n_0;
  wire cal_tmp_carry__2_i_2__0_n_0;
  wire cal_tmp_carry__2_i_3__0_n_0;
  wire cal_tmp_carry__2_i_4__0_n_0;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
  wire cal_tmp_carry__3_i_1__0_n_0;
  wire cal_tmp_carry__3_i_2_n_0;
  wire cal_tmp_carry__3_i_3_n_0;
  wire cal_tmp_carry__3_i_4_n_0;
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
  wire cal_tmp_carry__6_i_4_n_0;
  wire cal_tmp_carry__6_n_0;
  wire cal_tmp_carry__6_n_1;
  wire cal_tmp_carry__6_n_2;
  wire cal_tmp_carry__6_n_3;
  wire cal_tmp_carry__7_i_1_n_0;
  wire cal_tmp_carry__7_n_3;
  wire cal_tmp_carry__7_n_6;
  wire cal_tmp_carry_i_1__0_n_0;
  wire cal_tmp_carry_i_2__0_n_0;
  wire cal_tmp_carry_i_3__0_n_0;
  wire cal_tmp_carry_i_4__0_n_0;
  wire cal_tmp_carry_i_5__0_n_0;
  wire cal_tmp_carry_n_0;
  wire cal_tmp_carry_n_1;
  wire cal_tmp_carry_n_2;
  wire cal_tmp_carry_n_3;
  wire cal_tmp_carry_n_7;
  wire \dividend0_reg[0]_0 ;
  wire \dividend0_reg_n_0_[0] ;
  wire dividend_tmp;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[11] ;
  wire \divisor0_reg_n_0_[12] ;
  wire \divisor0_reg_n_0_[13] ;
  wire \divisor0_reg_n_0_[14] ;
  wire \divisor0_reg_n_0_[15] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[31] ;
  wire \divisor0_reg_n_0_[32] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire \remd_reg[0] ;
  wire remd_tmp;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp_reg[0]_0 ;
  wire \remd_tmp_reg[0]_1 ;
  wire [3:1]NLW_cal_tmp_carry_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__0_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__1_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__2_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__4_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__5_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__6_O_UNCONNECTED;
  wire [3:1]NLW_cal_tmp_carry__7_CO_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__7_O_UNCONNECTED;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,cal_tmp_carry_i_1__0_n_0,1'b0}),
        .O({NLW_cal_tmp_carry_O_UNCONNECTED[3:1],cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_2__0_n_0,cal_tmp_carry_i_3__0_n_0,cal_tmp_carry_i_4__0_n_0,cal_tmp_carry_i_5__0_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__0_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__0_i_1__0_n_0,cal_tmp_carry__0_i_2__0_n_0,cal_tmp_carry__0_i_3__0_n_0,cal_tmp_carry__0_i_4__0_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__0_i_1__0
       (.I0(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_1__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__0_i_2__0
       (.I0(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_2__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__0_i_3__0
       (.I0(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_3__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__0_i_4__0
       (.I0(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_4__0_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__1_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__1_i_1__0_n_0,cal_tmp_carry__1_i_2__0_n_0,cal_tmp_carry__1_i_3__0_n_0,cal_tmp_carry__1_i_4__0_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_1__0
       (.I0(\divisor0_reg_n_0_[11] ),
        .O(cal_tmp_carry__1_i_1__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_2__0
       (.I0(\divisor0_reg_n_0_[10] ),
        .O(cal_tmp_carry__1_i_2__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_3__0
       (.I0(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_3__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_4__0
       (.I0(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_4__0_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__2_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__2_i_1__0_n_0,cal_tmp_carry__2_i_2__0_n_0,cal_tmp_carry__2_i_3__0_n_0,cal_tmp_carry__2_i_4__0_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_1__0
       (.I0(\divisor0_reg_n_0_[15] ),
        .O(cal_tmp_carry__2_i_1__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_2__0
       (.I0(\divisor0_reg_n_0_[14] ),
        .O(cal_tmp_carry__2_i_2__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_3__0
       (.I0(\divisor0_reg_n_0_[13] ),
        .O(cal_tmp_carry__2_i_3__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_4__0
       (.I0(\divisor0_reg_n_0_[12] ),
        .O(cal_tmp_carry__2_i_4__0_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({cal_tmp_carry__3_n_0,cal_tmp_carry__3_n_1,cal_tmp_carry__3_n_2,cal_tmp_carry__3_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__3_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__3_i_1__0_n_0,cal_tmp_carry__3_i_2_n_0,cal_tmp_carry__3_i_3_n_0,cal_tmp_carry__3_i_4_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_1__0
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__3_i_1__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_2
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__3_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_3
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__3_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_4
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__3_i_4_n_0));
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
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__4_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__4_i_2
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__4_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__4_i_3
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__4_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__4_i_4
       (.I0(\divisor0_reg_n_0_[31] ),
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
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__5_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__5_i_2
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__5_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__5_i_3
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__5_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__5_i_4
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__5_i_4_n_0));
  CARRY4 cal_tmp_carry__6
       (.CI(cal_tmp_carry__5_n_0),
        .CO({cal_tmp_carry__6_n_0,cal_tmp_carry__6_n_1,cal_tmp_carry__6_n_2,cal_tmp_carry__6_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__6_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__6_i_1_n_0,cal_tmp_carry__6_i_2_n_0,cal_tmp_carry__6_i_3_n_0,cal_tmp_carry__6_i_4_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__6_i_1
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__6_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__6_i_2
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__6_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__6_i_3
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__6_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__6_i_4
       (.I0(\divisor0_reg_n_0_[31] ),
        .O(cal_tmp_carry__6_i_4_n_0));
  CARRY4 cal_tmp_carry__7
       (.CI(cal_tmp_carry__6_n_0),
        .CO({NLW_cal_tmp_carry__7_CO_UNCONNECTED[3:1],cal_tmp_carry__7_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__7_O_UNCONNECTED[3:2],cal_tmp_carry__7_n_6,NLW_cal_tmp_carry__7_O_UNCONNECTED[0]}),
        .S({1'b0,1'b0,1'b1,cal_tmp_carry__7_i_1_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__7_i_1
       (.I0(\divisor0_reg_n_0_[32] ),
        .O(cal_tmp_carry__7_i_1_n_0));
  LUT4 #(
    .INIT(16'hE4FF)) 
    cal_tmp_carry_i_1__0
       (.I0(\remd_tmp_reg[0]_1 ),
        .I1(dividend_tmp),
        .I2(\dividend0_reg_n_0_[0] ),
        .I3(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_1__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry_i_2__0
       (.I0(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_2__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry_i_3__0
       (.I0(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_3__0_n_0));
  LUT5 #(
    .INIT(32'hDDF5220A)) 
    cal_tmp_carry_i_4__0
       (.I0(\divisor0_reg_n_0_[0] ),
        .I1(\dividend0_reg_n_0_[0] ),
        .I2(dividend_tmp),
        .I3(\remd_tmp_reg[0]_1 ),
        .I4(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_4__0_n_0));
  LUT4 #(
    .INIT(16'h1BE4)) 
    cal_tmp_carry_i_5__0
       (.I0(\remd_tmp_reg[0]_1 ),
        .I1(dividend_tmp),
        .I2(\dividend0_reg_n_0_[0] ),
        .I3(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_5__0_n_0));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[0]_0 ),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(cal_tmp_carry__7_n_3),
        .Q(dividend_tmp),
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
  FDRE \divisor0_reg[31] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[16]),
        .Q(\divisor0_reg_n_0_[31] ),
        .R(1'b0));
  FDRE \divisor0_reg[32] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[17]),
        .Q(\divisor0_reg_n_0_[32] ),
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
  LUT3 #(
    .INIT(8'hB8)) 
    \remd[0]_i_1 
       (.I0(remd_tmp),
        .I1(D),
        .I2(\remd_reg[0] ),
        .O(\remd_tmp_reg[0]_0 ));
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \remd_tmp[0]_i_1 
       (.I0(\dividend0_reg_n_0_[0] ),
        .I1(dividend_tmp),
        .I2(\remd_tmp_reg[0]_1 ),
        .I3(cal_tmp_carry__7_n_6),
        .I4(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1_n_0 ),
        .Q(remd_tmp),
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
