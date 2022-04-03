// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Sat May  1 16:07:07 2021
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
   (p_ce0,
    ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    ap_return,
    p_address0,
    p_q0,
    p_7);
  output p_ce0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [63:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_address0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_address0, LAYERED_METADATA undef" *) output [0:0]p_address0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_q0, LAYERED_METADATA undef" *) input [63:0]p_q0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_7 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_7, LAYERED_METADATA undef" *) input [63:0]p_7;

  wire \<const0> ;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire [63:0]ap_return;
  wire ap_rst;
  wire ap_start;
  wire [63:0]p_7;
  wire p_ce0;
  wire [63:0]p_q0;
  wire [0:0]NLW_inst_p_address0_UNCONNECTED;

  assign p_address0[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "6'b000001" *) 
  (* ap_ST_fsm_state2 = "6'b000010" *) 
  (* ap_ST_fsm_state3 = "6'b000100" *) 
  (* ap_ST_fsm_state4 = "6'b001000" *) 
  (* ap_ST_fsm_state5 = "6'b010000" *) 
  (* ap_ST_fsm_state6 = "6'b100000" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1 inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p_7(p_7),
        .p_address0(NLW_inst_p_address0_UNCONNECTED[0]),
        .p_ce0(p_ce0),
        .p_q0(p_q0));
endmodule

(* ap_ST_fsm_state1 = "6'b000001" *) (* ap_ST_fsm_state2 = "6'b000010" *) (* ap_ST_fsm_state3 = "6'b000100" *) 
(* ap_ST_fsm_state4 = "6'b001000" *) (* ap_ST_fsm_state5 = "6'b010000" *) (* ap_ST_fsm_state6 = "6'b100000" *) 
(* hls_module = "yes" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p_address0,
    p_ce0,
    p_q0,
    p_7,
    ap_return);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [0:0]p_address0;
  output p_ce0;
  input [63:0]p_q0;
  input [63:0]p_7;
  output [63:0]ap_return;

  wire \<const0> ;
  wire \ap_CS_fsm_reg_n_0_[0] ;
  wire \ap_CS_fsm_reg_n_0_[1] ;
  wire \ap_CS_fsm_reg_n_0_[2] ;
  wire \ap_CS_fsm_reg_n_0_[3] ;
  wire [1:0]ap_NS_fsm;
  wire ap_NS_fsm1;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire [63:0]ap_return;
  wire \ap_return[0]_INST_0_i_10_n_0 ;
  wire \ap_return[0]_INST_0_i_11_n_0 ;
  wire \ap_return[0]_INST_0_i_12_n_0 ;
  wire \ap_return[0]_INST_0_i_13_n_0 ;
  wire \ap_return[0]_INST_0_i_13_n_1 ;
  wire \ap_return[0]_INST_0_i_13_n_2 ;
  wire \ap_return[0]_INST_0_i_13_n_3 ;
  wire \ap_return[0]_INST_0_i_14_n_0 ;
  wire \ap_return[0]_INST_0_i_15_n_0 ;
  wire \ap_return[0]_INST_0_i_16_n_0 ;
  wire \ap_return[0]_INST_0_i_17_n_0 ;
  wire \ap_return[0]_INST_0_i_18_n_0 ;
  wire \ap_return[0]_INST_0_i_18_n_1 ;
  wire \ap_return[0]_INST_0_i_18_n_2 ;
  wire \ap_return[0]_INST_0_i_18_n_3 ;
  wire \ap_return[0]_INST_0_i_19_n_0 ;
  wire \ap_return[0]_INST_0_i_1_n_0 ;
  wire \ap_return[0]_INST_0_i_20_n_0 ;
  wire \ap_return[0]_INST_0_i_21_n_0 ;
  wire \ap_return[0]_INST_0_i_22_n_0 ;
  wire \ap_return[0]_INST_0_i_23_n_0 ;
  wire \ap_return[0]_INST_0_i_23_n_1 ;
  wire \ap_return[0]_INST_0_i_23_n_2 ;
  wire \ap_return[0]_INST_0_i_23_n_3 ;
  wire \ap_return[0]_INST_0_i_24_n_0 ;
  wire \ap_return[0]_INST_0_i_25_n_0 ;
  wire \ap_return[0]_INST_0_i_26_n_0 ;
  wire \ap_return[0]_INST_0_i_27_n_0 ;
  wire \ap_return[0]_INST_0_i_28_n_0 ;
  wire \ap_return[0]_INST_0_i_29_n_0 ;
  wire \ap_return[0]_INST_0_i_2_n_0 ;
  wire \ap_return[0]_INST_0_i_30_n_0 ;
  wire \ap_return[0]_INST_0_i_31_n_0 ;
  wire \ap_return[0]_INST_0_i_3_n_0 ;
  wire \ap_return[0]_INST_0_i_4_n_2 ;
  wire \ap_return[0]_INST_0_i_4_n_3 ;
  wire \ap_return[0]_INST_0_i_5_n_0 ;
  wire \ap_return[0]_INST_0_i_5_n_1 ;
  wire \ap_return[0]_INST_0_i_5_n_2 ;
  wire \ap_return[0]_INST_0_i_5_n_3 ;
  wire \ap_return[0]_INST_0_i_6_n_0 ;
  wire \ap_return[0]_INST_0_i_7_n_0 ;
  wire \ap_return[0]_INST_0_i_8_n_0 ;
  wire \ap_return[0]_INST_0_i_8_n_1 ;
  wire \ap_return[0]_INST_0_i_8_n_2 ;
  wire \ap_return[0]_INST_0_i_8_n_3 ;
  wire \ap_return[0]_INST_0_i_9_n_0 ;
  wire \ap_return[0]_INST_0_n_0 ;
  wire \ap_return[0]_INST_0_n_1 ;
  wire \ap_return[0]_INST_0_n_2 ;
  wire \ap_return[0]_INST_0_n_3 ;
  wire \ap_return[12]_INST_0_n_0 ;
  wire \ap_return[12]_INST_0_n_1 ;
  wire \ap_return[12]_INST_0_n_2 ;
  wire \ap_return[12]_INST_0_n_3 ;
  wire \ap_return[16]_INST_0_i_1_n_0 ;
  wire \ap_return[16]_INST_0_i_2_n_0 ;
  wire \ap_return[16]_INST_0_i_3_n_0 ;
  wire \ap_return[16]_INST_0_i_4_n_0 ;
  wire \ap_return[16]_INST_0_n_0 ;
  wire \ap_return[16]_INST_0_n_1 ;
  wire \ap_return[16]_INST_0_n_2 ;
  wire \ap_return[16]_INST_0_n_3 ;
  wire \ap_return[20]_INST_0_i_1_n_0 ;
  wire \ap_return[20]_INST_0_i_2_n_0 ;
  wire \ap_return[20]_INST_0_n_0 ;
  wire \ap_return[20]_INST_0_n_1 ;
  wire \ap_return[20]_INST_0_n_2 ;
  wire \ap_return[20]_INST_0_n_3 ;
  wire \ap_return[24]_INST_0_i_1_n_0 ;
  wire \ap_return[24]_INST_0_i_2_n_0 ;
  wire \ap_return[24]_INST_0_i_3_n_0 ;
  wire \ap_return[24]_INST_0_n_0 ;
  wire \ap_return[24]_INST_0_n_1 ;
  wire \ap_return[24]_INST_0_n_2 ;
  wire \ap_return[24]_INST_0_n_3 ;
  wire \ap_return[28]_INST_0_i_1_n_0 ;
  wire \ap_return[28]_INST_0_i_2_n_0 ;
  wire \ap_return[28]_INST_0_n_0 ;
  wire \ap_return[28]_INST_0_n_1 ;
  wire \ap_return[28]_INST_0_n_2 ;
  wire \ap_return[28]_INST_0_n_3 ;
  wire \ap_return[32]_INST_0_i_1_n_0 ;
  wire \ap_return[32]_INST_0_i_2_n_0 ;
  wire \ap_return[32]_INST_0_i_3_n_0 ;
  wire \ap_return[32]_INST_0_i_4_n_0 ;
  wire \ap_return[32]_INST_0_n_0 ;
  wire \ap_return[32]_INST_0_n_1 ;
  wire \ap_return[32]_INST_0_n_2 ;
  wire \ap_return[32]_INST_0_n_3 ;
  wire \ap_return[36]_INST_0_i_1_n_0 ;
  wire \ap_return[36]_INST_0_i_2_n_0 ;
  wire \ap_return[36]_INST_0_i_3_n_0 ;
  wire \ap_return[36]_INST_0_i_4_n_0 ;
  wire \ap_return[36]_INST_0_n_0 ;
  wire \ap_return[36]_INST_0_n_1 ;
  wire \ap_return[36]_INST_0_n_2 ;
  wire \ap_return[36]_INST_0_n_3 ;
  wire \ap_return[40]_INST_0_i_1_n_0 ;
  wire \ap_return[40]_INST_0_i_2_n_0 ;
  wire \ap_return[40]_INST_0_i_3_n_0 ;
  wire \ap_return[40]_INST_0_i_4_n_0 ;
  wire \ap_return[40]_INST_0_n_0 ;
  wire \ap_return[40]_INST_0_n_1 ;
  wire \ap_return[40]_INST_0_n_2 ;
  wire \ap_return[40]_INST_0_n_3 ;
  wire \ap_return[44]_INST_0_i_1_n_0 ;
  wire \ap_return[44]_INST_0_i_2_n_0 ;
  wire \ap_return[44]_INST_0_i_3_n_0 ;
  wire \ap_return[44]_INST_0_i_4_n_0 ;
  wire \ap_return[44]_INST_0_n_0 ;
  wire \ap_return[44]_INST_0_n_1 ;
  wire \ap_return[44]_INST_0_n_2 ;
  wire \ap_return[44]_INST_0_n_3 ;
  wire \ap_return[48]_INST_0_i_1_n_0 ;
  wire \ap_return[48]_INST_0_i_2_n_0 ;
  wire \ap_return[48]_INST_0_i_3_n_0 ;
  wire \ap_return[48]_INST_0_i_4_n_0 ;
  wire \ap_return[48]_INST_0_n_0 ;
  wire \ap_return[48]_INST_0_n_1 ;
  wire \ap_return[48]_INST_0_n_2 ;
  wire \ap_return[48]_INST_0_n_3 ;
  wire \ap_return[4]_INST_0_i_1_n_0 ;
  wire \ap_return[4]_INST_0_i_2_n_0 ;
  wire \ap_return[4]_INST_0_n_0 ;
  wire \ap_return[4]_INST_0_n_1 ;
  wire \ap_return[4]_INST_0_n_2 ;
  wire \ap_return[4]_INST_0_n_3 ;
  wire \ap_return[52]_INST_0_i_1_n_0 ;
  wire \ap_return[52]_INST_0_i_2_n_0 ;
  wire \ap_return[52]_INST_0_i_3_n_0 ;
  wire \ap_return[52]_INST_0_i_4_n_0 ;
  wire \ap_return[52]_INST_0_n_0 ;
  wire \ap_return[52]_INST_0_n_1 ;
  wire \ap_return[52]_INST_0_n_2 ;
  wire \ap_return[52]_INST_0_n_3 ;
  wire \ap_return[56]_INST_0_i_1_n_0 ;
  wire \ap_return[56]_INST_0_i_2_n_0 ;
  wire \ap_return[56]_INST_0_i_3_n_0 ;
  wire \ap_return[56]_INST_0_i_4_n_0 ;
  wire \ap_return[56]_INST_0_n_0 ;
  wire \ap_return[56]_INST_0_n_1 ;
  wire \ap_return[56]_INST_0_n_2 ;
  wire \ap_return[56]_INST_0_n_3 ;
  wire \ap_return[60]_INST_0_i_1_n_0 ;
  wire \ap_return[60]_INST_0_i_2_n_0 ;
  wire \ap_return[60]_INST_0_i_3_n_0 ;
  wire \ap_return[60]_INST_0_i_4_n_0 ;
  wire \ap_return[60]_INST_0_n_1 ;
  wire \ap_return[60]_INST_0_n_2 ;
  wire \ap_return[60]_INST_0_n_3 ;
  wire \ap_return[8]_INST_0_i_1_n_0 ;
  wire \ap_return[8]_INST_0_i_2_n_0 ;
  wire \ap_return[8]_INST_0_i_3_n_0 ;
  wire \ap_return[8]_INST_0_n_0 ;
  wire \ap_return[8]_INST_0_n_1 ;
  wire \ap_return[8]_INST_0_n_2 ;
  wire \ap_return[8]_INST_0_n_3 ;
  wire ap_rst;
  wire ap_start;
  wire [63:0]buff2;
  wire [63:0]mul_ln12_reg_82;
  wire [63:0]p_7;
  wire p_ce0;
  wire [63:0]p_q0;
  wire [3:0]\NLW_ap_return[0]_INST_0_i_13_O_UNCONNECTED ;
  wire [3:0]\NLW_ap_return[0]_INST_0_i_18_O_UNCONNECTED ;
  wire [3:0]\NLW_ap_return[0]_INST_0_i_23_O_UNCONNECTED ;
  wire [3:2]\NLW_ap_return[0]_INST_0_i_4_CO_UNCONNECTED ;
  wire [3:0]\NLW_ap_return[0]_INST_0_i_4_O_UNCONNECTED ;
  wire [3:0]\NLW_ap_return[0]_INST_0_i_5_O_UNCONNECTED ;
  wire [3:0]\NLW_ap_return[0]_INST_0_i_8_O_UNCONNECTED ;
  wire [3:3]\NLW_ap_return[60]_INST_0_CO_UNCONNECTED ;

  assign ap_ready = ap_done;
  assign p_address0[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'hAE)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(ap_done),
        .I1(\ap_CS_fsm_reg_n_0_[0] ),
        .I2(ap_start),
        .O(ap_NS_fsm[0]));
  LUT6 #(
    .INIT(64'h0000000000000100)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(\ap_CS_fsm_reg_n_0_[1] ),
        .I1(ap_done),
        .I2(\ap_CS_fsm_reg_n_0_[2] ),
        .I3(ap_NS_fsm1),
        .I4(p_ce0),
        .I5(\ap_CS_fsm_reg_n_0_[3] ),
        .O(ap_NS_fsm[1]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(\ap_CS_fsm_reg_n_0_[0] ),
        .I1(ap_start),
        .O(ap_NS_fsm1));
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
        .Q(p_ce0),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_ce0),
        .Q(ap_done),
        .R(ap_rst));
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(\ap_CS_fsm_reg_n_0_[0] ),
        .I1(ap_start),
        .O(ap_idle));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[0]_INST_0 
       (.CI(1'b0),
        .CO({\ap_return[0]_INST_0_n_0 ,\ap_return[0]_INST_0_n_1 ,\ap_return[0]_INST_0_n_2 ,\ap_return[0]_INST_0_n_3 }),
        .CYINIT(1'b1),
        .DI({1'b0,p_q0[2:0]}),
        .O(ap_return[3:0]),
        .S({p_q0[3],\ap_return[0]_INST_0_i_1_n_0 ,\ap_return[0]_INST_0_i_2_n_0 ,\ap_return[0]_INST_0_i_3_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[0]_INST_0_i_1 
       (.I0(p_q0[2]),
        .O(\ap_return[0]_INST_0_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_10 
       (.I0(mul_ln12_reg_82[56]),
        .I1(mul_ln12_reg_82[55]),
        .I2(mul_ln12_reg_82[54]),
        .O(\ap_return[0]_INST_0_i_10_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_11 
       (.I0(mul_ln12_reg_82[53]),
        .I1(mul_ln12_reg_82[52]),
        .I2(mul_ln12_reg_82[51]),
        .O(\ap_return[0]_INST_0_i_11_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_12 
       (.I0(mul_ln12_reg_82[50]),
        .I1(mul_ln12_reg_82[49]),
        .I2(mul_ln12_reg_82[48]),
        .O(\ap_return[0]_INST_0_i_12_n_0 ));
  CARRY4 \ap_return[0]_INST_0_i_13 
       (.CI(\ap_return[0]_INST_0_i_18_n_0 ),
        .CO({\ap_return[0]_INST_0_i_13_n_0 ,\ap_return[0]_INST_0_i_13_n_1 ,\ap_return[0]_INST_0_i_13_n_2 ,\ap_return[0]_INST_0_i_13_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O(\NLW_ap_return[0]_INST_0_i_13_O_UNCONNECTED [3:0]),
        .S({\ap_return[0]_INST_0_i_19_n_0 ,\ap_return[0]_INST_0_i_20_n_0 ,\ap_return[0]_INST_0_i_21_n_0 ,\ap_return[0]_INST_0_i_22_n_0 }));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_14 
       (.I0(mul_ln12_reg_82[47]),
        .I1(mul_ln12_reg_82[46]),
        .I2(mul_ln12_reg_82[45]),
        .O(\ap_return[0]_INST_0_i_14_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_15 
       (.I0(mul_ln12_reg_82[44]),
        .I1(mul_ln12_reg_82[43]),
        .I2(mul_ln12_reg_82[42]),
        .O(\ap_return[0]_INST_0_i_15_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_16 
       (.I0(mul_ln12_reg_82[41]),
        .I1(mul_ln12_reg_82[40]),
        .I2(mul_ln12_reg_82[39]),
        .O(\ap_return[0]_INST_0_i_16_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_17 
       (.I0(mul_ln12_reg_82[38]),
        .I1(mul_ln12_reg_82[37]),
        .I2(mul_ln12_reg_82[36]),
        .O(\ap_return[0]_INST_0_i_17_n_0 ));
  CARRY4 \ap_return[0]_INST_0_i_18 
       (.CI(\ap_return[0]_INST_0_i_23_n_0 ),
        .CO({\ap_return[0]_INST_0_i_18_n_0 ,\ap_return[0]_INST_0_i_18_n_1 ,\ap_return[0]_INST_0_i_18_n_2 ,\ap_return[0]_INST_0_i_18_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O(\NLW_ap_return[0]_INST_0_i_18_O_UNCONNECTED [3:0]),
        .S({\ap_return[0]_INST_0_i_24_n_0 ,\ap_return[0]_INST_0_i_25_n_0 ,\ap_return[0]_INST_0_i_26_n_0 ,\ap_return[0]_INST_0_i_27_n_0 }));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_19 
       (.I0(mul_ln12_reg_82[35]),
        .I1(mul_ln12_reg_82[34]),
        .I2(mul_ln12_reg_82[33]),
        .O(\ap_return[0]_INST_0_i_19_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \ap_return[0]_INST_0_i_2 
       (.I0(p_q0[1]),
        .I1(\ap_return[0]_INST_0_i_4_n_2 ),
        .O(\ap_return[0]_INST_0_i_2_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_20 
       (.I0(mul_ln12_reg_82[32]),
        .I1(mul_ln12_reg_82[31]),
        .I2(mul_ln12_reg_82[30]),
        .O(\ap_return[0]_INST_0_i_20_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_21 
       (.I0(mul_ln12_reg_82[29]),
        .I1(mul_ln12_reg_82[28]),
        .I2(mul_ln12_reg_82[27]),
        .O(\ap_return[0]_INST_0_i_21_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_22 
       (.I0(mul_ln12_reg_82[26]),
        .I1(mul_ln12_reg_82[25]),
        .I2(mul_ln12_reg_82[24]),
        .O(\ap_return[0]_INST_0_i_22_n_0 ));
  CARRY4 \ap_return[0]_INST_0_i_23 
       (.CI(1'b0),
        .CO({\ap_return[0]_INST_0_i_23_n_0 ,\ap_return[0]_INST_0_i_23_n_1 ,\ap_return[0]_INST_0_i_23_n_2 ,\ap_return[0]_INST_0_i_23_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O(\NLW_ap_return[0]_INST_0_i_23_O_UNCONNECTED [3:0]),
        .S({\ap_return[0]_INST_0_i_28_n_0 ,\ap_return[0]_INST_0_i_29_n_0 ,\ap_return[0]_INST_0_i_30_n_0 ,\ap_return[0]_INST_0_i_31_n_0 }));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_24 
       (.I0(mul_ln12_reg_82[23]),
        .I1(mul_ln12_reg_82[22]),
        .I2(mul_ln12_reg_82[21]),
        .O(\ap_return[0]_INST_0_i_24_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_25 
       (.I0(mul_ln12_reg_82[20]),
        .I1(mul_ln12_reg_82[19]),
        .I2(mul_ln12_reg_82[18]),
        .O(\ap_return[0]_INST_0_i_25_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_26 
       (.I0(mul_ln12_reg_82[17]),
        .I1(mul_ln12_reg_82[16]),
        .I2(mul_ln12_reg_82[15]),
        .O(\ap_return[0]_INST_0_i_26_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_27 
       (.I0(mul_ln12_reg_82[14]),
        .I1(mul_ln12_reg_82[13]),
        .I2(mul_ln12_reg_82[12]),
        .O(\ap_return[0]_INST_0_i_27_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_28 
       (.I0(mul_ln12_reg_82[11]),
        .I1(mul_ln12_reg_82[10]),
        .I2(mul_ln12_reg_82[9]),
        .O(\ap_return[0]_INST_0_i_28_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_29 
       (.I0(mul_ln12_reg_82[8]),
        .I1(mul_ln12_reg_82[7]),
        .I2(mul_ln12_reg_82[6]),
        .O(\ap_return[0]_INST_0_i_29_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \ap_return[0]_INST_0_i_3 
       (.I0(p_q0[0]),
        .I1(\ap_return[0]_INST_0_i_4_n_2 ),
        .O(\ap_return[0]_INST_0_i_3_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_30 
       (.I0(mul_ln12_reg_82[5]),
        .I1(mul_ln12_reg_82[4]),
        .I2(mul_ln12_reg_82[3]),
        .O(\ap_return[0]_INST_0_i_30_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_31 
       (.I0(mul_ln12_reg_82[2]),
        .I1(mul_ln12_reg_82[1]),
        .I2(mul_ln12_reg_82[0]),
        .O(\ap_return[0]_INST_0_i_31_n_0 ));
  CARRY4 \ap_return[0]_INST_0_i_4 
       (.CI(\ap_return[0]_INST_0_i_5_n_0 ),
        .CO({\NLW_ap_return[0]_INST_0_i_4_CO_UNCONNECTED [3:2],\ap_return[0]_INST_0_i_4_n_2 ,\ap_return[0]_INST_0_i_4_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b1,1'b1}),
        .O(\NLW_ap_return[0]_INST_0_i_4_O_UNCONNECTED [3:0]),
        .S({1'b0,1'b0,\ap_return[0]_INST_0_i_6_n_0 ,\ap_return[0]_INST_0_i_7_n_0 }));
  CARRY4 \ap_return[0]_INST_0_i_5 
       (.CI(\ap_return[0]_INST_0_i_8_n_0 ),
        .CO({\ap_return[0]_INST_0_i_5_n_0 ,\ap_return[0]_INST_0_i_5_n_1 ,\ap_return[0]_INST_0_i_5_n_2 ,\ap_return[0]_INST_0_i_5_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O(\NLW_ap_return[0]_INST_0_i_5_O_UNCONNECTED [3:0]),
        .S({\ap_return[0]_INST_0_i_9_n_0 ,\ap_return[0]_INST_0_i_10_n_0 ,\ap_return[0]_INST_0_i_11_n_0 ,\ap_return[0]_INST_0_i_12_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[0]_INST_0_i_6 
       (.I0(mul_ln12_reg_82[63]),
        .O(\ap_return[0]_INST_0_i_6_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_7 
       (.I0(mul_ln12_reg_82[62]),
        .I1(mul_ln12_reg_82[61]),
        .I2(mul_ln12_reg_82[60]),
        .O(\ap_return[0]_INST_0_i_7_n_0 ));
  CARRY4 \ap_return[0]_INST_0_i_8 
       (.CI(\ap_return[0]_INST_0_i_13_n_0 ),
        .CO({\ap_return[0]_INST_0_i_8_n_0 ,\ap_return[0]_INST_0_i_8_n_1 ,\ap_return[0]_INST_0_i_8_n_2 ,\ap_return[0]_INST_0_i_8_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O(\NLW_ap_return[0]_INST_0_i_8_O_UNCONNECTED [3:0]),
        .S({\ap_return[0]_INST_0_i_14_n_0 ,\ap_return[0]_INST_0_i_15_n_0 ,\ap_return[0]_INST_0_i_16_n_0 ,\ap_return[0]_INST_0_i_17_n_0 }));
  LUT3 #(
    .INIT(8'h01)) 
    \ap_return[0]_INST_0_i_9 
       (.I0(mul_ln12_reg_82[59]),
        .I1(mul_ln12_reg_82[58]),
        .I2(mul_ln12_reg_82[57]),
        .O(\ap_return[0]_INST_0_i_9_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[12]_INST_0 
       (.CI(\ap_return[8]_INST_0_n_0 ),
        .CO({\ap_return[12]_INST_0_n_0 ,\ap_return[12]_INST_0_n_1 ,\ap_return[12]_INST_0_n_2 ,\ap_return[12]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(ap_return[15:12]),
        .S(p_q0[15:12]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[16]_INST_0 
       (.CI(\ap_return[12]_INST_0_n_0 ),
        .CO({\ap_return[16]_INST_0_n_0 ,\ap_return[16]_INST_0_n_1 ,\ap_return[16]_INST_0_n_2 ,\ap_return[16]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI(p_q0[19:16]),
        .O(ap_return[19:16]),
        .S({\ap_return[16]_INST_0_i_1_n_0 ,\ap_return[16]_INST_0_i_2_n_0 ,\ap_return[16]_INST_0_i_3_n_0 ,\ap_return[16]_INST_0_i_4_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[16]_INST_0_i_1 
       (.I0(p_q0[19]),
        .O(\ap_return[16]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[16]_INST_0_i_2 
       (.I0(p_q0[18]),
        .O(\ap_return[16]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[16]_INST_0_i_3 
       (.I0(p_q0[17]),
        .O(\ap_return[16]_INST_0_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[16]_INST_0_i_4 
       (.I0(p_q0[16]),
        .O(\ap_return[16]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[20]_INST_0 
       (.CI(\ap_return[16]_INST_0_n_0 ),
        .CO({\ap_return[20]_INST_0_n_0 ,\ap_return[20]_INST_0_n_1 ,\ap_return[20]_INST_0_n_2 ,\ap_return[20]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({p_q0[23:22],1'b0,1'b0}),
        .O(ap_return[23:20]),
        .S({\ap_return[20]_INST_0_i_1_n_0 ,\ap_return[20]_INST_0_i_2_n_0 ,p_q0[21:20]}));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[20]_INST_0_i_1 
       (.I0(p_q0[23]),
        .O(\ap_return[20]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[20]_INST_0_i_2 
       (.I0(p_q0[22]),
        .O(\ap_return[20]_INST_0_i_2_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[24]_INST_0 
       (.CI(\ap_return[20]_INST_0_n_0 ),
        .CO({\ap_return[24]_INST_0_n_0 ,\ap_return[24]_INST_0_n_1 ,\ap_return[24]_INST_0_n_2 ,\ap_return[24]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({p_q0[27:25],1'b0}),
        .O(ap_return[27:24]),
        .S({\ap_return[24]_INST_0_i_1_n_0 ,\ap_return[24]_INST_0_i_2_n_0 ,\ap_return[24]_INST_0_i_3_n_0 ,p_q0[24]}));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[24]_INST_0_i_1 
       (.I0(p_q0[27]),
        .O(\ap_return[24]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[24]_INST_0_i_2 
       (.I0(p_q0[26]),
        .O(\ap_return[24]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[24]_INST_0_i_3 
       (.I0(p_q0[25]),
        .O(\ap_return[24]_INST_0_i_3_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[28]_INST_0 
       (.CI(\ap_return[24]_INST_0_n_0 ),
        .CO({\ap_return[28]_INST_0_n_0 ,\ap_return[28]_INST_0_n_1 ,\ap_return[28]_INST_0_n_2 ,\ap_return[28]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,p_q0[29:28]}),
        .O(ap_return[31:28]),
        .S({p_q0[31:30],\ap_return[28]_INST_0_i_1_n_0 ,\ap_return[28]_INST_0_i_2_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[28]_INST_0_i_1 
       (.I0(p_q0[29]),
        .O(\ap_return[28]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[28]_INST_0_i_2 
       (.I0(p_q0[28]),
        .O(\ap_return[28]_INST_0_i_2_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[32]_INST_0 
       (.CI(\ap_return[28]_INST_0_n_0 ),
        .CO({\ap_return[32]_INST_0_n_0 ,\ap_return[32]_INST_0_n_1 ,\ap_return[32]_INST_0_n_2 ,\ap_return[32]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI(p_q0[35:32]),
        .O(ap_return[35:32]),
        .S({\ap_return[32]_INST_0_i_1_n_0 ,\ap_return[32]_INST_0_i_2_n_0 ,\ap_return[32]_INST_0_i_3_n_0 ,\ap_return[32]_INST_0_i_4_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[32]_INST_0_i_1 
       (.I0(p_q0[35]),
        .O(\ap_return[32]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[32]_INST_0_i_2 
       (.I0(p_q0[34]),
        .O(\ap_return[32]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[32]_INST_0_i_3 
       (.I0(p_q0[33]),
        .O(\ap_return[32]_INST_0_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[32]_INST_0_i_4 
       (.I0(p_q0[32]),
        .O(\ap_return[32]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[36]_INST_0 
       (.CI(\ap_return[32]_INST_0_n_0 ),
        .CO({\ap_return[36]_INST_0_n_0 ,\ap_return[36]_INST_0_n_1 ,\ap_return[36]_INST_0_n_2 ,\ap_return[36]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI(p_q0[39:36]),
        .O(ap_return[39:36]),
        .S({\ap_return[36]_INST_0_i_1_n_0 ,\ap_return[36]_INST_0_i_2_n_0 ,\ap_return[36]_INST_0_i_3_n_0 ,\ap_return[36]_INST_0_i_4_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[36]_INST_0_i_1 
       (.I0(p_q0[39]),
        .O(\ap_return[36]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[36]_INST_0_i_2 
       (.I0(p_q0[38]),
        .O(\ap_return[36]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[36]_INST_0_i_3 
       (.I0(p_q0[37]),
        .O(\ap_return[36]_INST_0_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[36]_INST_0_i_4 
       (.I0(p_q0[36]),
        .O(\ap_return[36]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[40]_INST_0 
       (.CI(\ap_return[36]_INST_0_n_0 ),
        .CO({\ap_return[40]_INST_0_n_0 ,\ap_return[40]_INST_0_n_1 ,\ap_return[40]_INST_0_n_2 ,\ap_return[40]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI(p_q0[43:40]),
        .O(ap_return[43:40]),
        .S({\ap_return[40]_INST_0_i_1_n_0 ,\ap_return[40]_INST_0_i_2_n_0 ,\ap_return[40]_INST_0_i_3_n_0 ,\ap_return[40]_INST_0_i_4_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[40]_INST_0_i_1 
       (.I0(p_q0[43]),
        .O(\ap_return[40]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[40]_INST_0_i_2 
       (.I0(p_q0[42]),
        .O(\ap_return[40]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[40]_INST_0_i_3 
       (.I0(p_q0[41]),
        .O(\ap_return[40]_INST_0_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[40]_INST_0_i_4 
       (.I0(p_q0[40]),
        .O(\ap_return[40]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[44]_INST_0 
       (.CI(\ap_return[40]_INST_0_n_0 ),
        .CO({\ap_return[44]_INST_0_n_0 ,\ap_return[44]_INST_0_n_1 ,\ap_return[44]_INST_0_n_2 ,\ap_return[44]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI(p_q0[47:44]),
        .O(ap_return[47:44]),
        .S({\ap_return[44]_INST_0_i_1_n_0 ,\ap_return[44]_INST_0_i_2_n_0 ,\ap_return[44]_INST_0_i_3_n_0 ,\ap_return[44]_INST_0_i_4_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[44]_INST_0_i_1 
       (.I0(p_q0[47]),
        .O(\ap_return[44]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[44]_INST_0_i_2 
       (.I0(p_q0[46]),
        .O(\ap_return[44]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[44]_INST_0_i_3 
       (.I0(p_q0[45]),
        .O(\ap_return[44]_INST_0_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[44]_INST_0_i_4 
       (.I0(p_q0[44]),
        .O(\ap_return[44]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[48]_INST_0 
       (.CI(\ap_return[44]_INST_0_n_0 ),
        .CO({\ap_return[48]_INST_0_n_0 ,\ap_return[48]_INST_0_n_1 ,\ap_return[48]_INST_0_n_2 ,\ap_return[48]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI(p_q0[51:48]),
        .O(ap_return[51:48]),
        .S({\ap_return[48]_INST_0_i_1_n_0 ,\ap_return[48]_INST_0_i_2_n_0 ,\ap_return[48]_INST_0_i_3_n_0 ,\ap_return[48]_INST_0_i_4_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[48]_INST_0_i_1 
       (.I0(p_q0[51]),
        .O(\ap_return[48]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[48]_INST_0_i_2 
       (.I0(p_q0[50]),
        .O(\ap_return[48]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[48]_INST_0_i_3 
       (.I0(p_q0[49]),
        .O(\ap_return[48]_INST_0_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[48]_INST_0_i_4 
       (.I0(p_q0[48]),
        .O(\ap_return[48]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[4]_INST_0 
       (.CI(\ap_return[0]_INST_0_n_0 ),
        .CO({\ap_return[4]_INST_0_n_0 ,\ap_return[4]_INST_0_n_1 ,\ap_return[4]_INST_0_n_2 ,\ap_return[4]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({p_q0[7:6],1'b0,1'b0}),
        .O(ap_return[7:4]),
        .S({\ap_return[4]_INST_0_i_1_n_0 ,\ap_return[4]_INST_0_i_2_n_0 ,p_q0[5:4]}));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[4]_INST_0_i_1 
       (.I0(p_q0[7]),
        .O(\ap_return[4]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[4]_INST_0_i_2 
       (.I0(p_q0[6]),
        .O(\ap_return[4]_INST_0_i_2_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[52]_INST_0 
       (.CI(\ap_return[48]_INST_0_n_0 ),
        .CO({\ap_return[52]_INST_0_n_0 ,\ap_return[52]_INST_0_n_1 ,\ap_return[52]_INST_0_n_2 ,\ap_return[52]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI(p_q0[55:52]),
        .O(ap_return[55:52]),
        .S({\ap_return[52]_INST_0_i_1_n_0 ,\ap_return[52]_INST_0_i_2_n_0 ,\ap_return[52]_INST_0_i_3_n_0 ,\ap_return[52]_INST_0_i_4_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[52]_INST_0_i_1 
       (.I0(p_q0[55]),
        .O(\ap_return[52]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[52]_INST_0_i_2 
       (.I0(p_q0[54]),
        .O(\ap_return[52]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[52]_INST_0_i_3 
       (.I0(p_q0[53]),
        .O(\ap_return[52]_INST_0_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[52]_INST_0_i_4 
       (.I0(p_q0[52]),
        .O(\ap_return[52]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[56]_INST_0 
       (.CI(\ap_return[52]_INST_0_n_0 ),
        .CO({\ap_return[56]_INST_0_n_0 ,\ap_return[56]_INST_0_n_1 ,\ap_return[56]_INST_0_n_2 ,\ap_return[56]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI(p_q0[59:56]),
        .O(ap_return[59:56]),
        .S({\ap_return[56]_INST_0_i_1_n_0 ,\ap_return[56]_INST_0_i_2_n_0 ,\ap_return[56]_INST_0_i_3_n_0 ,\ap_return[56]_INST_0_i_4_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[56]_INST_0_i_1 
       (.I0(p_q0[59]),
        .O(\ap_return[56]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[56]_INST_0_i_2 
       (.I0(p_q0[58]),
        .O(\ap_return[56]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[56]_INST_0_i_3 
       (.I0(p_q0[57]),
        .O(\ap_return[56]_INST_0_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[56]_INST_0_i_4 
       (.I0(p_q0[56]),
        .O(\ap_return[56]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[60]_INST_0 
       (.CI(\ap_return[56]_INST_0_n_0 ),
        .CO({\NLW_ap_return[60]_INST_0_CO_UNCONNECTED [3],\ap_return[60]_INST_0_n_1 ,\ap_return[60]_INST_0_n_2 ,\ap_return[60]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,p_q0[62:60]}),
        .O(ap_return[63:60]),
        .S({\ap_return[60]_INST_0_i_1_n_0 ,\ap_return[60]_INST_0_i_2_n_0 ,\ap_return[60]_INST_0_i_3_n_0 ,\ap_return[60]_INST_0_i_4_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[60]_INST_0_i_1 
       (.I0(p_q0[63]),
        .O(\ap_return[60]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[60]_INST_0_i_2 
       (.I0(p_q0[62]),
        .O(\ap_return[60]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[60]_INST_0_i_3 
       (.I0(p_q0[61]),
        .O(\ap_return[60]_INST_0_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[60]_INST_0_i_4 
       (.I0(p_q0[60]),
        .O(\ap_return[60]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[8]_INST_0 
       (.CI(\ap_return[4]_INST_0_n_0 ),
        .CO({\ap_return[8]_INST_0_n_0 ,\ap_return[8]_INST_0_n_1 ,\ap_return[8]_INST_0_n_2 ,\ap_return[8]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({p_q0[11:10],1'b0,p_q0[8]}),
        .O(ap_return[11:8]),
        .S({\ap_return[8]_INST_0_i_1_n_0 ,\ap_return[8]_INST_0_i_2_n_0 ,p_q0[9],\ap_return[8]_INST_0_i_3_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[8]_INST_0_i_1 
       (.I0(p_q0[11]),
        .O(\ap_return[8]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[8]_INST_0_i_2 
       (.I0(p_q0[10]),
        .O(\ap_return[8]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[8]_INST_0_i_3 
       (.I0(p_q0[8]),
        .O(\ap_return[8]_INST_0_i_3_n_0 ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_mul_64s_31ns_64_5_1 mul_64s_31ns_64_5_1_U1
       (.Q(buff2),
        .ap_clk(ap_clk),
        .p_7(p_7));
  FDRE \mul_ln12_reg_82_reg[0] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[0]),
        .Q(mul_ln12_reg_82[0]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[10] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[10]),
        .Q(mul_ln12_reg_82[10]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[11] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[11]),
        .Q(mul_ln12_reg_82[11]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[12] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[12]),
        .Q(mul_ln12_reg_82[12]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[13] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[13]),
        .Q(mul_ln12_reg_82[13]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[14] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[14]),
        .Q(mul_ln12_reg_82[14]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[15] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[15]),
        .Q(mul_ln12_reg_82[15]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[16] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[16]),
        .Q(mul_ln12_reg_82[16]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[17] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[17]),
        .Q(mul_ln12_reg_82[17]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[18] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[18]),
        .Q(mul_ln12_reg_82[18]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[19] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[19]),
        .Q(mul_ln12_reg_82[19]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[1] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[1]),
        .Q(mul_ln12_reg_82[1]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[20] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[20]),
        .Q(mul_ln12_reg_82[20]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[21] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[21]),
        .Q(mul_ln12_reg_82[21]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[22] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[22]),
        .Q(mul_ln12_reg_82[22]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[23] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[23]),
        .Q(mul_ln12_reg_82[23]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[24] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[24]),
        .Q(mul_ln12_reg_82[24]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[25] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[25]),
        .Q(mul_ln12_reg_82[25]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[26] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[26]),
        .Q(mul_ln12_reg_82[26]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[27] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[27]),
        .Q(mul_ln12_reg_82[27]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[28] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[28]),
        .Q(mul_ln12_reg_82[28]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[29] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[29]),
        .Q(mul_ln12_reg_82[29]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[2] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[2]),
        .Q(mul_ln12_reg_82[2]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[30] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[30]),
        .Q(mul_ln12_reg_82[30]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[31] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[31]),
        .Q(mul_ln12_reg_82[31]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[32] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[32]),
        .Q(mul_ln12_reg_82[32]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[33] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[33]),
        .Q(mul_ln12_reg_82[33]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[34] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[34]),
        .Q(mul_ln12_reg_82[34]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[35] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[35]),
        .Q(mul_ln12_reg_82[35]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[36] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[36]),
        .Q(mul_ln12_reg_82[36]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[37] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[37]),
        .Q(mul_ln12_reg_82[37]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[38] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[38]),
        .Q(mul_ln12_reg_82[38]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[39] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[39]),
        .Q(mul_ln12_reg_82[39]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[3] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[3]),
        .Q(mul_ln12_reg_82[3]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[40] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[40]),
        .Q(mul_ln12_reg_82[40]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[41] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[41]),
        .Q(mul_ln12_reg_82[41]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[42] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[42]),
        .Q(mul_ln12_reg_82[42]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[43] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[43]),
        .Q(mul_ln12_reg_82[43]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[44] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[44]),
        .Q(mul_ln12_reg_82[44]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[45] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[45]),
        .Q(mul_ln12_reg_82[45]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[46] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[46]),
        .Q(mul_ln12_reg_82[46]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[47] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[47]),
        .Q(mul_ln12_reg_82[47]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[48] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[48]),
        .Q(mul_ln12_reg_82[48]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[49] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[49]),
        .Q(mul_ln12_reg_82[49]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[4] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[4]),
        .Q(mul_ln12_reg_82[4]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[50] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[50]),
        .Q(mul_ln12_reg_82[50]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[51] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[51]),
        .Q(mul_ln12_reg_82[51]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[52] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[52]),
        .Q(mul_ln12_reg_82[52]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[53] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[53]),
        .Q(mul_ln12_reg_82[53]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[54] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[54]),
        .Q(mul_ln12_reg_82[54]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[55] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[55]),
        .Q(mul_ln12_reg_82[55]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[56] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[56]),
        .Q(mul_ln12_reg_82[56]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[57] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[57]),
        .Q(mul_ln12_reg_82[57]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[58] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[58]),
        .Q(mul_ln12_reg_82[58]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[59] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[59]),
        .Q(mul_ln12_reg_82[59]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[5] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[5]),
        .Q(mul_ln12_reg_82[5]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[60] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[60]),
        .Q(mul_ln12_reg_82[60]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[61] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[61]),
        .Q(mul_ln12_reg_82[61]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[62] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[62]),
        .Q(mul_ln12_reg_82[62]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[63] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[63]),
        .Q(mul_ln12_reg_82[63]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[6] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[6]),
        .Q(mul_ln12_reg_82[6]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[7] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[7]),
        .Q(mul_ln12_reg_82[7]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[8] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[8]),
        .Q(mul_ln12_reg_82[8]),
        .R(1'b0));
  FDRE \mul_ln12_reg_82_reg[9] 
       (.C(ap_clk),
        .CE(p_ce0),
        .D(buff2[9]),
        .Q(mul_ln12_reg_82[9]),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_mul_64s_31ns_64_5_1
   (Q,
    ap_clk,
    p_7);
  output [63:0]Q;
  input ap_clk;
  input [63:0]p_7;

  wire [63:0]Q;
  wire ap_clk;
  wire [63:0]p_7;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_mul_64s_31ns_64_5_1_Multiplier_0 fn1_mul_64s_31ns_64_5_1_Multiplier_0_U
       (.Q(Q),
        .ap_clk(ap_clk),
        .p_7(p_7));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1_mul_64s_31ns_64_5_1_Multiplier_0
   (Q,
    ap_clk,
    p_7);
  output [63:0]Q;
  input ap_clk;
  input [63:0]p_7;

  wire [63:0]Q;
  wire ap_clk;
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
  wire buff0_reg__1_n_100;
  wire buff0_reg__1_n_101;
  wire buff0_reg__1_n_102;
  wire buff0_reg__1_n_103;
  wire buff0_reg__1_n_104;
  wire buff0_reg__1_n_105;
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
  wire buff0_reg__1_n_24;
  wire buff0_reg__1_n_25;
  wire buff0_reg__1_n_26;
  wire buff0_reg__1_n_27;
  wire buff0_reg__1_n_28;
  wire buff0_reg__1_n_29;
  wire buff0_reg__1_n_30;
  wire buff0_reg__1_n_31;
  wire buff0_reg__1_n_32;
  wire buff0_reg__1_n_33;
  wire buff0_reg__1_n_34;
  wire buff0_reg__1_n_35;
  wire buff0_reg__1_n_36;
  wire buff0_reg__1_n_37;
  wire buff0_reg__1_n_38;
  wire buff0_reg__1_n_39;
  wire buff0_reg__1_n_40;
  wire buff0_reg__1_n_41;
  wire buff0_reg__1_n_42;
  wire buff0_reg__1_n_43;
  wire buff0_reg__1_n_44;
  wire buff0_reg__1_n_45;
  wire buff0_reg__1_n_46;
  wire buff0_reg__1_n_47;
  wire buff0_reg__1_n_48;
  wire buff0_reg__1_n_49;
  wire buff0_reg__1_n_50;
  wire buff0_reg__1_n_51;
  wire buff0_reg__1_n_52;
  wire buff0_reg__1_n_53;
  wire buff0_reg__1_n_58;
  wire buff0_reg__1_n_59;
  wire buff0_reg__1_n_60;
  wire buff0_reg__1_n_61;
  wire buff0_reg__1_n_62;
  wire buff0_reg__1_n_63;
  wire buff0_reg__1_n_64;
  wire buff0_reg__1_n_65;
  wire buff0_reg__1_n_66;
  wire buff0_reg__1_n_67;
  wire buff0_reg__1_n_68;
  wire buff0_reg__1_n_69;
  wire buff0_reg__1_n_70;
  wire buff0_reg__1_n_71;
  wire buff0_reg__1_n_72;
  wire buff0_reg__1_n_73;
  wire buff0_reg__1_n_74;
  wire buff0_reg__1_n_75;
  wire buff0_reg__1_n_76;
  wire buff0_reg__1_n_77;
  wire buff0_reg__1_n_78;
  wire buff0_reg__1_n_79;
  wire buff0_reg__1_n_80;
  wire buff0_reg__1_n_81;
  wire buff0_reg__1_n_82;
  wire buff0_reg__1_n_83;
  wire buff0_reg__1_n_84;
  wire buff0_reg__1_n_85;
  wire buff0_reg__1_n_86;
  wire buff0_reg__1_n_87;
  wire buff0_reg__1_n_88;
  wire buff0_reg__1_n_89;
  wire buff0_reg__1_n_90;
  wire buff0_reg__1_n_91;
  wire buff0_reg__1_n_92;
  wire buff0_reg__1_n_93;
  wire buff0_reg__1_n_94;
  wire buff0_reg__1_n_95;
  wire buff0_reg__1_n_96;
  wire buff0_reg__1_n_97;
  wire buff0_reg__1_n_98;
  wire buff0_reg__1_n_99;
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
  wire \buff1_reg[0]__1_n_0 ;
  wire \buff1_reg[10]__0_n_0 ;
  wire \buff1_reg[10]__1_n_0 ;
  wire \buff1_reg[11]__0_n_0 ;
  wire \buff1_reg[11]__1_n_0 ;
  wire \buff1_reg[12]__0_n_0 ;
  wire \buff1_reg[12]__1_n_0 ;
  wire \buff1_reg[13]__0_n_0 ;
  wire \buff1_reg[13]__1_n_0 ;
  wire \buff1_reg[14]__0_n_0 ;
  wire \buff1_reg[14]__1_n_0 ;
  wire \buff1_reg[15]__0_n_0 ;
  wire \buff1_reg[15]__1_n_0 ;
  wire \buff1_reg[16]__0_n_0 ;
  wire \buff1_reg[16]__1_n_0 ;
  wire \buff1_reg[1]__0_n_0 ;
  wire \buff1_reg[1]__1_n_0 ;
  wire \buff1_reg[2]__0_n_0 ;
  wire \buff1_reg[2]__1_n_0 ;
  wire \buff1_reg[3]__0_n_0 ;
  wire \buff1_reg[3]__1_n_0 ;
  wire \buff1_reg[4]__0_n_0 ;
  wire \buff1_reg[4]__1_n_0 ;
  wire \buff1_reg[5]__0_n_0 ;
  wire \buff1_reg[5]__1_n_0 ;
  wire \buff1_reg[6]__0_n_0 ;
  wire \buff1_reg[6]__1_n_0 ;
  wire \buff1_reg[7]__0_n_0 ;
  wire \buff1_reg[7]__1_n_0 ;
  wire \buff1_reg[8]__0_n_0 ;
  wire \buff1_reg[8]__1_n_0 ;
  wire \buff1_reg[9]__0_n_0 ;
  wire \buff1_reg[9]__1_n_0 ;
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
  wire [63:33]buff1_reg__2;
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
  wire \buff2[36]_i_2_n_0 ;
  wire \buff2[36]_i_3_n_0 ;
  wire \buff2[36]_i_4_n_0 ;
  wire \buff2[40]_i_2_n_0 ;
  wire \buff2[40]_i_3_n_0 ;
  wire \buff2[40]_i_4_n_0 ;
  wire \buff2[40]_i_5_n_0 ;
  wire \buff2[44]_i_2_n_0 ;
  wire \buff2[44]_i_3_n_0 ;
  wire \buff2[44]_i_4_n_0 ;
  wire \buff2[44]_i_5_n_0 ;
  wire \buff2[48]_i_2_n_0 ;
  wire \buff2[48]_i_3_n_0 ;
  wire \buff2[48]_i_4_n_0 ;
  wire \buff2[48]_i_5_n_0 ;
  wire \buff2[52]_i_2_n_0 ;
  wire \buff2[52]_i_3_n_0 ;
  wire \buff2[52]_i_4_n_0 ;
  wire \buff2[52]_i_5_n_0 ;
  wire \buff2[52]_i_6_n_0 ;
  wire \buff2[56]_i_2_n_0 ;
  wire \buff2[56]_i_3_n_0 ;
  wire \buff2[56]_i_4_n_0 ;
  wire \buff2[56]_i_5_n_0 ;
  wire \buff2[56]_i_6_n_0 ;
  wire \buff2[56]_i_7_n_0 ;
  wire \buff2[56]_i_8_n_0 ;
  wire \buff2[56]_i_9_n_0 ;
  wire \buff2[60]_i_2_n_0 ;
  wire \buff2[60]_i_3_n_0 ;
  wire \buff2[60]_i_4_n_0 ;
  wire \buff2[60]_i_5_n_0 ;
  wire \buff2[60]_i_6_n_0 ;
  wire \buff2[60]_i_7_n_0 ;
  wire \buff2[60]_i_8_n_0 ;
  wire \buff2[60]_i_9_n_0 ;
  wire \buff2[63]_i_2_n_0 ;
  wire \buff2[63]_i_3_n_0 ;
  wire \buff2[63]_i_4_n_0 ;
  wire \buff2[63]_i_5_n_0 ;
  wire \buff2[63]_i_6_n_0 ;
  wire \buff2_reg[36]_i_1_n_0 ;
  wire \buff2_reg[36]_i_1_n_1 ;
  wire \buff2_reg[36]_i_1_n_2 ;
  wire \buff2_reg[36]_i_1_n_3 ;
  wire \buff2_reg[40]_i_1_n_0 ;
  wire \buff2_reg[40]_i_1_n_1 ;
  wire \buff2_reg[40]_i_1_n_2 ;
  wire \buff2_reg[40]_i_1_n_3 ;
  wire \buff2_reg[44]_i_1_n_0 ;
  wire \buff2_reg[44]_i_1_n_1 ;
  wire \buff2_reg[44]_i_1_n_2 ;
  wire \buff2_reg[44]_i_1_n_3 ;
  wire \buff2_reg[48]_i_1_n_0 ;
  wire \buff2_reg[48]_i_1_n_1 ;
  wire \buff2_reg[48]_i_1_n_2 ;
  wire \buff2_reg[48]_i_1_n_3 ;
  wire \buff2_reg[52]_i_1_n_0 ;
  wire \buff2_reg[52]_i_1_n_1 ;
  wire \buff2_reg[52]_i_1_n_2 ;
  wire \buff2_reg[52]_i_1_n_3 ;
  wire \buff2_reg[56]_i_1_n_0 ;
  wire \buff2_reg[56]_i_1_n_1 ;
  wire \buff2_reg[56]_i_1_n_2 ;
  wire \buff2_reg[56]_i_1_n_3 ;
  wire \buff2_reg[60]_i_1_n_0 ;
  wire \buff2_reg[60]_i_1_n_1 ;
  wire \buff2_reg[60]_i_1_n_2 ;
  wire \buff2_reg[60]_i_1_n_3 ;
  wire \buff2_reg[63]_i_1_n_2 ;
  wire \buff2_reg[63]_i_1_n_3 ;
  wire [63:0]p_7;
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
  wire tmp_product_n_24;
  wire tmp_product_n_25;
  wire tmp_product_n_26;
  wire tmp_product_n_27;
  wire tmp_product_n_28;
  wire tmp_product_n_29;
  wire tmp_product_n_30;
  wire tmp_product_n_31;
  wire tmp_product_n_32;
  wire tmp_product_n_33;
  wire tmp_product_n_34;
  wire tmp_product_n_35;
  wire tmp_product_n_36;
  wire tmp_product_n_37;
  wire tmp_product_n_38;
  wire tmp_product_n_39;
  wire tmp_product_n_40;
  wire tmp_product_n_41;
  wire tmp_product_n_42;
  wire tmp_product_n_43;
  wire tmp_product_n_44;
  wire tmp_product_n_45;
  wire tmp_product_n_46;
  wire tmp_product_n_47;
  wire tmp_product_n_48;
  wire tmp_product_n_49;
  wire tmp_product_n_50;
  wire tmp_product_n_51;
  wire tmp_product_n_52;
  wire tmp_product_n_53;
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
  wire [47:0]NLW_buff0_reg__0_P_UNCONNECTED;
  wire NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff0_reg__1_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff0_reg__1_OVERFLOW_UNCONNECTED;
  wire NLW_buff0_reg__1_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff0_reg__1_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff0_reg__1_UNDERFLOW_UNCONNECTED;
  wire [17:0]NLW_buff0_reg__1_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff0_reg__1_CARRYOUT_UNCONNECTED;
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
  wire [3:2]\NLW_buff2_reg[63]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_buff2_reg[63]_i_1_O_UNCONNECTED ;
  wire NLW_tmp_product_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product_UNDERFLOW_UNCONNECTED;
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
  wire [47:0]NLW_tmp_product__0_P_UNCONNECTED;

  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 13x18 8}}" *) 
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({p_7[63],p_7[63],p_7[63],p_7[63],p_7[63],p_7[63:51]}),
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
        .CEB1(1'b0),
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
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x15 8}}" *) 
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,p_7[33:17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
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
        .MULTSIGNOUT(NLW_buff0_reg__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff0_reg__0_OVERFLOW_UNCONNECTED),
        .P(NLW_buff0_reg__0_P_UNCONNECTED[47:0]),
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
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 8}}" *) 
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,p_7[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT({buff0_reg__1_n_24,buff0_reg__1_n_25,buff0_reg__1_n_26,buff0_reg__1_n_27,buff0_reg__1_n_28,buff0_reg__1_n_29,buff0_reg__1_n_30,buff0_reg__1_n_31,buff0_reg__1_n_32,buff0_reg__1_n_33,buff0_reg__1_n_34,buff0_reg__1_n_35,buff0_reg__1_n_36,buff0_reg__1_n_37,buff0_reg__1_n_38,buff0_reg__1_n_39,buff0_reg__1_n_40,buff0_reg__1_n_41,buff0_reg__1_n_42,buff0_reg__1_n_43,buff0_reg__1_n_44,buff0_reg__1_n_45,buff0_reg__1_n_46,buff0_reg__1_n_47,buff0_reg__1_n_48,buff0_reg__1_n_49,buff0_reg__1_n_50,buff0_reg__1_n_51,buff0_reg__1_n_52,buff0_reg__1_n_53}),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff0_reg__1_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff0_reg__1_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
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
        .P({buff0_reg__1_n_58,buff0_reg__1_n_59,buff0_reg__1_n_60,buff0_reg__1_n_61,buff0_reg__1_n_62,buff0_reg__1_n_63,buff0_reg__1_n_64,buff0_reg__1_n_65,buff0_reg__1_n_66,buff0_reg__1_n_67,buff0_reg__1_n_68,buff0_reg__1_n_69,buff0_reg__1_n_70,buff0_reg__1_n_71,buff0_reg__1_n_72,buff0_reg__1_n_73,buff0_reg__1_n_74,buff0_reg__1_n_75,buff0_reg__1_n_76,buff0_reg__1_n_77,buff0_reg__1_n_78,buff0_reg__1_n_79,buff0_reg__1_n_80,buff0_reg__1_n_81,buff0_reg__1_n_82,buff0_reg__1_n_83,buff0_reg__1_n_84,buff0_reg__1_n_85,buff0_reg__1_n_86,buff0_reg__1_n_87,buff0_reg__1_n_88,buff0_reg__1_n_89,buff0_reg__1_n_90,buff0_reg__1_n_91,buff0_reg__1_n_92,buff0_reg__1_n_93,buff0_reg__1_n_94,buff0_reg__1_n_95,buff0_reg__1_n_96,buff0_reg__1_n_97,buff0_reg__1_n_98,buff0_reg__1_n_99,buff0_reg__1_n_100,buff0_reg__1_n_101,buff0_reg__1_n_102,buff0_reg__1_n_103,buff0_reg__1_n_104,buff0_reg__1_n_105}),
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
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x15 8}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("CASCADE"),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACIN({tmp_product_n_24,tmp_product_n_25,tmp_product_n_26,tmp_product_n_27,tmp_product_n_28,tmp_product_n_29,tmp_product_n_30,tmp_product_n_31,tmp_product_n_32,tmp_product_n_33,tmp_product_n_34,tmp_product_n_35,tmp_product_n_36,tmp_product_n_37,tmp_product_n_38,tmp_product_n_39,tmp_product_n_40,tmp_product_n_41,tmp_product_n_42,tmp_product_n_43,tmp_product_n_44,tmp_product_n_45,tmp_product_n_46,tmp_product_n_47,tmp_product_n_48,tmp_product_n_49,tmp_product_n_50,tmp_product_n_51,tmp_product_n_52,tmp_product_n_53}),
        .ACOUT(NLW_buff1_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
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
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
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
        .D(tmp_product_n_105),
        .Q(\buff1_reg[0]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[0]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_105),
        .Q(\buff1_reg[0]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[10]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_95),
        .Q(\buff1_reg[10]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[10]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_95),
        .Q(\buff1_reg[10]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[11]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_94),
        .Q(\buff1_reg[11]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[11]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_94),
        .Q(\buff1_reg[11]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[12]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_93),
        .Q(\buff1_reg[12]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[12]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_93),
        .Q(\buff1_reg[12]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[13]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_92),
        .Q(\buff1_reg[13]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[13]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_92),
        .Q(\buff1_reg[13]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[14]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_91),
        .Q(\buff1_reg[14]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[14]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_91),
        .Q(\buff1_reg[14]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[15]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_90),
        .Q(\buff1_reg[15]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[15]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_90),
        .Q(\buff1_reg[15]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[16]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_89),
        .Q(\buff1_reg[16]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[16]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_89),
        .Q(\buff1_reg[16]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[1]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_104),
        .Q(\buff1_reg[1]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[1]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_104),
        .Q(\buff1_reg[1]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[2]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_103),
        .Q(\buff1_reg[2]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[2]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_103),
        .Q(\buff1_reg[2]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[3]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_102),
        .Q(\buff1_reg[3]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[3]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_102),
        .Q(\buff1_reg[3]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[4]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_101),
        .Q(\buff1_reg[4]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[4]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_101),
        .Q(\buff1_reg[4]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[5]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_100),
        .Q(\buff1_reg[5]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[5]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_100),
        .Q(\buff1_reg[5]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[6]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_99),
        .Q(\buff1_reg[6]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[6]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_99),
        .Q(\buff1_reg[6]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[7]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_98),
        .Q(\buff1_reg[7]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[7]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_98),
        .Q(\buff1_reg[7]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[8]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_97),
        .Q(\buff1_reg[8]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[8]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_97),
        .Q(\buff1_reg[8]__1_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[9]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(tmp_product_n_96),
        .Q(\buff1_reg[9]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[9]__1 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__1_n_96),
        .Q(\buff1_reg[9]__1_n_0 ),
        .R(1'b0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 8}}" *) 
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,p_7[33:17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
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
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[36]_i_2 
       (.I0(buff1_reg__0_n_86),
        .I1(\buff1_reg[2]__0_n_0 ),
        .O(\buff2[36]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[36]_i_3 
       (.I0(buff1_reg__0_n_87),
        .I1(\buff1_reg[1]__0_n_0 ),
        .O(\buff2[36]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[36]_i_4 
       (.I0(buff1_reg__0_n_88),
        .I1(\buff1_reg[0]__0_n_0 ),
        .O(\buff2[36]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[40]_i_2 
       (.I0(buff1_reg__0_n_82),
        .I1(\buff1_reg[6]__0_n_0 ),
        .O(\buff2[40]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[40]_i_3 
       (.I0(buff1_reg__0_n_83),
        .I1(\buff1_reg[5]__0_n_0 ),
        .O(\buff2[40]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[40]_i_4 
       (.I0(buff1_reg__0_n_84),
        .I1(\buff1_reg[4]__0_n_0 ),
        .O(\buff2[40]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[40]_i_5 
       (.I0(buff1_reg__0_n_85),
        .I1(\buff1_reg[3]__0_n_0 ),
        .O(\buff2[40]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[44]_i_2 
       (.I0(buff1_reg__0_n_78),
        .I1(\buff1_reg[10]__0_n_0 ),
        .O(\buff2[44]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[44]_i_3 
       (.I0(buff1_reg__0_n_79),
        .I1(\buff1_reg[9]__0_n_0 ),
        .O(\buff2[44]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[44]_i_4 
       (.I0(buff1_reg__0_n_80),
        .I1(\buff1_reg[8]__0_n_0 ),
        .O(\buff2[44]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[44]_i_5 
       (.I0(buff1_reg__0_n_81),
        .I1(\buff1_reg[7]__0_n_0 ),
        .O(\buff2[44]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[48]_i_2 
       (.I0(buff1_reg__0_n_74),
        .I1(\buff1_reg[14]__0_n_0 ),
        .O(\buff2[48]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[48]_i_3 
       (.I0(buff1_reg__0_n_75),
        .I1(\buff1_reg[13]__0_n_0 ),
        .O(\buff2[48]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[48]_i_4 
       (.I0(buff1_reg__0_n_76),
        .I1(\buff1_reg[12]__0_n_0 ),
        .O(\buff2[48]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[48]_i_5 
       (.I0(buff1_reg__0_n_77),
        .I1(\buff1_reg[11]__0_n_0 ),
        .O(\buff2[48]_i_5_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[52]_i_2 
       (.I0(buff1_reg__0_n_70),
        .I1(buff0_reg_n_104),
        .I2(buff1_reg_n_104),
        .O(\buff2[52]_i_2_n_0 ));
  (* HLUTNM = "lutpair0" *) 
  LUT5 #(
    .INIT(32'h69969696)) 
    \buff2[52]_i_3 
       (.I0(buff0_reg_n_104),
        .I1(buff1_reg_n_104),
        .I2(buff1_reg__0_n_70),
        .I3(buff1_reg_n_105),
        .I4(buff0_reg_n_105),
        .O(\buff2[52]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[52]_i_4 
       (.I0(buff0_reg_n_105),
        .I1(buff1_reg_n_105),
        .I2(buff1_reg__0_n_71),
        .O(\buff2[52]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[52]_i_5 
       (.I0(buff1_reg__0_n_72),
        .I1(\buff1_reg[16]__0_n_0 ),
        .O(\buff2[52]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[52]_i_6 
       (.I0(buff1_reg__0_n_73),
        .I1(\buff1_reg[15]__0_n_0 ),
        .O(\buff2[52]_i_6_n_0 ));
  (* HLUTNM = "lutpair3" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[56]_i_2 
       (.I0(buff0_reg_n_101),
        .I1(buff1_reg_n_101),
        .I2(buff1_reg__0_n_67),
        .O(\buff2[56]_i_2_n_0 ));
  (* HLUTNM = "lutpair2" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[56]_i_3 
       (.I0(buff0_reg_n_102),
        .I1(buff1_reg_n_102),
        .I2(buff1_reg__0_n_68),
        .O(\buff2[56]_i_3_n_0 ));
  (* HLUTNM = "lutpair1" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[56]_i_4 
       (.I0(buff0_reg_n_103),
        .I1(buff1_reg_n_103),
        .I2(buff1_reg__0_n_69),
        .O(\buff2[56]_i_4_n_0 ));
  (* HLUTNM = "lutpair0" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[56]_i_5 
       (.I0(buff0_reg_n_104),
        .I1(buff1_reg_n_104),
        .I2(buff1_reg__0_n_70),
        .O(\buff2[56]_i_5_n_0 ));
  (* HLUTNM = "lutpair4" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[56]_i_6 
       (.I0(buff0_reg_n_100),
        .I1(buff1_reg_n_100),
        .I2(buff1_reg__0_n_66),
        .I3(\buff2[56]_i_2_n_0 ),
        .O(\buff2[56]_i_6_n_0 ));
  (* HLUTNM = "lutpair3" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[56]_i_7 
       (.I0(buff0_reg_n_101),
        .I1(buff1_reg_n_101),
        .I2(buff1_reg__0_n_67),
        .I3(\buff2[56]_i_3_n_0 ),
        .O(\buff2[56]_i_7_n_0 ));
  (* HLUTNM = "lutpair2" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[56]_i_8 
       (.I0(buff0_reg_n_102),
        .I1(buff1_reg_n_102),
        .I2(buff1_reg__0_n_68),
        .I3(\buff2[56]_i_4_n_0 ),
        .O(\buff2[56]_i_8_n_0 ));
  (* HLUTNM = "lutpair1" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[56]_i_9 
       (.I0(buff0_reg_n_103),
        .I1(buff1_reg_n_103),
        .I2(buff1_reg__0_n_69),
        .I3(\buff2[56]_i_5_n_0 ),
        .O(\buff2[56]_i_9_n_0 ));
  (* HLUTNM = "lutpair7" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[60]_i_2 
       (.I0(buff0_reg_n_97),
        .I1(buff1_reg_n_97),
        .I2(buff1_reg__0_n_63),
        .O(\buff2[60]_i_2_n_0 ));
  (* HLUTNM = "lutpair6" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[60]_i_3 
       (.I0(buff0_reg_n_98),
        .I1(buff1_reg_n_98),
        .I2(buff1_reg__0_n_64),
        .O(\buff2[60]_i_3_n_0 ));
  (* HLUTNM = "lutpair5" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[60]_i_4 
       (.I0(buff0_reg_n_99),
        .I1(buff1_reg_n_99),
        .I2(buff1_reg__0_n_65),
        .O(\buff2[60]_i_4_n_0 ));
  (* HLUTNM = "lutpair4" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[60]_i_5 
       (.I0(buff0_reg_n_100),
        .I1(buff1_reg_n_100),
        .I2(buff1_reg__0_n_66),
        .O(\buff2[60]_i_5_n_0 ));
  (* HLUTNM = "lutpair8" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[60]_i_6 
       (.I0(buff0_reg_n_96),
        .I1(buff1_reg_n_96),
        .I2(buff1_reg__0_n_62),
        .I3(\buff2[60]_i_2_n_0 ),
        .O(\buff2[60]_i_6_n_0 ));
  (* HLUTNM = "lutpair7" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[60]_i_7 
       (.I0(buff0_reg_n_97),
        .I1(buff1_reg_n_97),
        .I2(buff1_reg__0_n_63),
        .I3(\buff2[60]_i_3_n_0 ),
        .O(\buff2[60]_i_7_n_0 ));
  (* HLUTNM = "lutpair6" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[60]_i_8 
       (.I0(buff0_reg_n_98),
        .I1(buff1_reg_n_98),
        .I2(buff1_reg__0_n_64),
        .I3(\buff2[60]_i_4_n_0 ),
        .O(\buff2[60]_i_8_n_0 ));
  (* HLUTNM = "lutpair5" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[60]_i_9 
       (.I0(buff0_reg_n_99),
        .I1(buff1_reg_n_99),
        .I2(buff1_reg__0_n_65),
        .I3(\buff2[60]_i_5_n_0 ),
        .O(\buff2[60]_i_9_n_0 ));
  (* HLUTNM = "lutpair9" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[63]_i_2 
       (.I0(buff0_reg_n_95),
        .I1(buff1_reg_n_95),
        .I2(buff1_reg__0_n_61),
        .O(\buff2[63]_i_2_n_0 ));
  (* HLUTNM = "lutpair8" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[63]_i_3 
       (.I0(buff0_reg_n_96),
        .I1(buff1_reg_n_96),
        .I2(buff1_reg__0_n_62),
        .O(\buff2[63]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \buff2[63]_i_4 
       (.I0(buff1_reg__0_n_60),
        .I1(buff1_reg_n_94),
        .I2(buff0_reg_n_94),
        .I3(buff1_reg_n_93),
        .I4(buff0_reg_n_93),
        .I5(buff1_reg__0_n_59),
        .O(\buff2[63]_i_4_n_0 ));
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[63]_i_5 
       (.I0(\buff2[63]_i_2_n_0 ),
        .I1(buff1_reg_n_94),
        .I2(buff0_reg_n_94),
        .I3(buff1_reg__0_n_60),
        .O(\buff2[63]_i_5_n_0 ));
  (* HLUTNM = "lutpair9" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[63]_i_6 
       (.I0(buff0_reg_n_95),
        .I1(buff1_reg_n_95),
        .I2(buff1_reg__0_n_61),
        .I3(\buff2[63]_i_3_n_0 ),
        .O(\buff2[63]_i_6_n_0 ));
  FDRE \buff2_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[0]__1_n_0 ),
        .Q(Q[0]),
        .R(1'b0));
  FDRE \buff2_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[10]__1_n_0 ),
        .Q(Q[10]),
        .R(1'b0));
  FDRE \buff2_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[11]__1_n_0 ),
        .Q(Q[11]),
        .R(1'b0));
  FDRE \buff2_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[12]__1_n_0 ),
        .Q(Q[12]),
        .R(1'b0));
  FDRE \buff2_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[13]__1_n_0 ),
        .Q(Q[13]),
        .R(1'b0));
  FDRE \buff2_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[14]__1_n_0 ),
        .Q(Q[14]),
        .R(1'b0));
  FDRE \buff2_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[15]__1_n_0 ),
        .Q(Q[15]),
        .R(1'b0));
  FDRE \buff2_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[16]__1_n_0 ),
        .Q(Q[16]),
        .R(1'b0));
  FDRE \buff2_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_105),
        .Q(Q[17]),
        .R(1'b0));
  FDRE \buff2_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_104),
        .Q(Q[18]),
        .R(1'b0));
  FDRE \buff2_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_103),
        .Q(Q[19]),
        .R(1'b0));
  FDRE \buff2_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[1]__1_n_0 ),
        .Q(Q[1]),
        .R(1'b0));
  FDRE \buff2_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_102),
        .Q(Q[20]),
        .R(1'b0));
  FDRE \buff2_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_101),
        .Q(Q[21]),
        .R(1'b0));
  FDRE \buff2_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_100),
        .Q(Q[22]),
        .R(1'b0));
  FDRE \buff2_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_99),
        .Q(Q[23]),
        .R(1'b0));
  FDRE \buff2_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_98),
        .Q(Q[24]),
        .R(1'b0));
  FDRE \buff2_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_97),
        .Q(Q[25]),
        .R(1'b0));
  FDRE \buff2_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_96),
        .Q(Q[26]),
        .R(1'b0));
  FDRE \buff2_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_95),
        .Q(Q[27]),
        .R(1'b0));
  FDRE \buff2_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_94),
        .Q(Q[28]),
        .R(1'b0));
  FDRE \buff2_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_93),
        .Q(Q[29]),
        .R(1'b0));
  FDRE \buff2_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[2]__1_n_0 ),
        .Q(Q[2]),
        .R(1'b0));
  FDRE \buff2_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_92),
        .Q(Q[30]),
        .R(1'b0));
  FDRE \buff2_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_91),
        .Q(Q[31]),
        .R(1'b0));
  FDRE \buff2_reg[32] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__0_n_90),
        .Q(Q[32]),
        .R(1'b0));
  FDRE \buff2_reg[33] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[33]),
        .Q(Q[33]),
        .R(1'b0));
  FDRE \buff2_reg[34] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[34]),
        .Q(Q[34]),
        .R(1'b0));
  FDRE \buff2_reg[35] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[35]),
        .Q(Q[35]),
        .R(1'b0));
  FDRE \buff2_reg[36] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[36]),
        .Q(Q[36]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[36]_i_1 
       (.CI(1'b0),
        .CO({\buff2_reg[36]_i_1_n_0 ,\buff2_reg[36]_i_1_n_1 ,\buff2_reg[36]_i_1_n_2 ,\buff2_reg[36]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__0_n_86,buff1_reg__0_n_87,buff1_reg__0_n_88,1'b0}),
        .O(buff1_reg__2[36:33]),
        .S({\buff2[36]_i_2_n_0 ,\buff2[36]_i_3_n_0 ,\buff2[36]_i_4_n_0 ,buff1_reg__0_n_89}));
  FDRE \buff2_reg[37] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[37]),
        .Q(Q[37]),
        .R(1'b0));
  FDRE \buff2_reg[38] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[38]),
        .Q(Q[38]),
        .R(1'b0));
  FDRE \buff2_reg[39] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[39]),
        .Q(Q[39]),
        .R(1'b0));
  FDRE \buff2_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[3]__1_n_0 ),
        .Q(Q[3]),
        .R(1'b0));
  FDRE \buff2_reg[40] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[40]),
        .Q(Q[40]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[40]_i_1 
       (.CI(\buff2_reg[36]_i_1_n_0 ),
        .CO({\buff2_reg[40]_i_1_n_0 ,\buff2_reg[40]_i_1_n_1 ,\buff2_reg[40]_i_1_n_2 ,\buff2_reg[40]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__0_n_82,buff1_reg__0_n_83,buff1_reg__0_n_84,buff1_reg__0_n_85}),
        .O(buff1_reg__2[40:37]),
        .S({\buff2[40]_i_2_n_0 ,\buff2[40]_i_3_n_0 ,\buff2[40]_i_4_n_0 ,\buff2[40]_i_5_n_0 }));
  FDRE \buff2_reg[41] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[41]),
        .Q(Q[41]),
        .R(1'b0));
  FDRE \buff2_reg[42] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[42]),
        .Q(Q[42]),
        .R(1'b0));
  FDRE \buff2_reg[43] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[43]),
        .Q(Q[43]),
        .R(1'b0));
  FDRE \buff2_reg[44] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[44]),
        .Q(Q[44]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[44]_i_1 
       (.CI(\buff2_reg[40]_i_1_n_0 ),
        .CO({\buff2_reg[44]_i_1_n_0 ,\buff2_reg[44]_i_1_n_1 ,\buff2_reg[44]_i_1_n_2 ,\buff2_reg[44]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__0_n_78,buff1_reg__0_n_79,buff1_reg__0_n_80,buff1_reg__0_n_81}),
        .O(buff1_reg__2[44:41]),
        .S({\buff2[44]_i_2_n_0 ,\buff2[44]_i_3_n_0 ,\buff2[44]_i_4_n_0 ,\buff2[44]_i_5_n_0 }));
  FDRE \buff2_reg[45] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[45]),
        .Q(Q[45]),
        .R(1'b0));
  FDRE \buff2_reg[46] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[46]),
        .Q(Q[46]),
        .R(1'b0));
  FDRE \buff2_reg[47] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[47]),
        .Q(Q[47]),
        .R(1'b0));
  FDRE \buff2_reg[48] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[48]),
        .Q(Q[48]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[48]_i_1 
       (.CI(\buff2_reg[44]_i_1_n_0 ),
        .CO({\buff2_reg[48]_i_1_n_0 ,\buff2_reg[48]_i_1_n_1 ,\buff2_reg[48]_i_1_n_2 ,\buff2_reg[48]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__0_n_74,buff1_reg__0_n_75,buff1_reg__0_n_76,buff1_reg__0_n_77}),
        .O(buff1_reg__2[48:45]),
        .S({\buff2[48]_i_2_n_0 ,\buff2[48]_i_3_n_0 ,\buff2[48]_i_4_n_0 ,\buff2[48]_i_5_n_0 }));
  FDRE \buff2_reg[49] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[49]),
        .Q(Q[49]),
        .R(1'b0));
  FDRE \buff2_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[4]__1_n_0 ),
        .Q(Q[4]),
        .R(1'b0));
  FDRE \buff2_reg[50] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[50]),
        .Q(Q[50]),
        .R(1'b0));
  FDRE \buff2_reg[51] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[51]),
        .Q(Q[51]),
        .R(1'b0));
  FDRE \buff2_reg[52] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[52]),
        .Q(Q[52]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[52]_i_1 
       (.CI(\buff2_reg[48]_i_1_n_0 ),
        .CO({\buff2_reg[52]_i_1_n_0 ,\buff2_reg[52]_i_1_n_1 ,\buff2_reg[52]_i_1_n_2 ,\buff2_reg[52]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[52]_i_2_n_0 ,buff1_reg__0_n_71,buff1_reg__0_n_72,buff1_reg__0_n_73}),
        .O(buff1_reg__2[52:49]),
        .S({\buff2[52]_i_3_n_0 ,\buff2[52]_i_4_n_0 ,\buff2[52]_i_5_n_0 ,\buff2[52]_i_6_n_0 }));
  FDRE \buff2_reg[53] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[53]),
        .Q(Q[53]),
        .R(1'b0));
  FDRE \buff2_reg[54] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[54]),
        .Q(Q[54]),
        .R(1'b0));
  FDRE \buff2_reg[55] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[55]),
        .Q(Q[55]),
        .R(1'b0));
  FDRE \buff2_reg[56] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[56]),
        .Q(Q[56]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[56]_i_1 
       (.CI(\buff2_reg[52]_i_1_n_0 ),
        .CO({\buff2_reg[56]_i_1_n_0 ,\buff2_reg[56]_i_1_n_1 ,\buff2_reg[56]_i_1_n_2 ,\buff2_reg[56]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[56]_i_2_n_0 ,\buff2[56]_i_3_n_0 ,\buff2[56]_i_4_n_0 ,\buff2[56]_i_5_n_0 }),
        .O(buff1_reg__2[56:53]),
        .S({\buff2[56]_i_6_n_0 ,\buff2[56]_i_7_n_0 ,\buff2[56]_i_8_n_0 ,\buff2[56]_i_9_n_0 }));
  FDRE \buff2_reg[57] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[57]),
        .Q(Q[57]),
        .R(1'b0));
  FDRE \buff2_reg[58] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[58]),
        .Q(Q[58]),
        .R(1'b0));
  FDRE \buff2_reg[59] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[59]),
        .Q(Q[59]),
        .R(1'b0));
  FDRE \buff2_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[5]__1_n_0 ),
        .Q(Q[5]),
        .R(1'b0));
  FDRE \buff2_reg[60] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[60]),
        .Q(Q[60]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[60]_i_1 
       (.CI(\buff2_reg[56]_i_1_n_0 ),
        .CO({\buff2_reg[60]_i_1_n_0 ,\buff2_reg[60]_i_1_n_1 ,\buff2_reg[60]_i_1_n_2 ,\buff2_reg[60]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[60]_i_2_n_0 ,\buff2[60]_i_3_n_0 ,\buff2[60]_i_4_n_0 ,\buff2[60]_i_5_n_0 }),
        .O(buff1_reg__2[60:57]),
        .S({\buff2[60]_i_6_n_0 ,\buff2[60]_i_7_n_0 ,\buff2[60]_i_8_n_0 ,\buff2[60]_i_9_n_0 }));
  FDRE \buff2_reg[61] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[61]),
        .Q(Q[61]),
        .R(1'b0));
  FDRE \buff2_reg[62] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[62]),
        .Q(Q[62]),
        .R(1'b0));
  FDRE \buff2_reg[63] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__2[63]),
        .Q(Q[63]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[63]_i_1 
       (.CI(\buff2_reg[60]_i_1_n_0 ),
        .CO({\NLW_buff2_reg[63]_i_1_CO_UNCONNECTED [3:2],\buff2_reg[63]_i_1_n_2 ,\buff2_reg[63]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,\buff2[63]_i_2_n_0 ,\buff2[63]_i_3_n_0 }),
        .O({\NLW_buff2_reg[63]_i_1_O_UNCONNECTED [3],buff1_reg__2[63:61]}),
        .S({1'b0,\buff2[63]_i_4_n_0 ,\buff2[63]_i_5_n_0 ,\buff2[63]_i_6_n_0 }));
  FDRE \buff2_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[6]__1_n_0 ),
        .Q(Q[6]),
        .R(1'b0));
  FDRE \buff2_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[7]__1_n_0 ),
        .Q(Q[7]),
        .R(1'b0));
  FDRE \buff2_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[8]__1_n_0 ),
        .Q(Q[8]),
        .R(1'b0));
  FDRE \buff2_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\buff1_reg[9]__1_n_0 ),
        .Q(Q[9]),
        .R(1'b0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 8}}" *) 
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,p_7[50:34]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT({tmp_product_n_24,tmp_product_n_25,tmp_product_n_26,tmp_product_n_27,tmp_product_n_28,tmp_product_n_29,tmp_product_n_30,tmp_product_n_31,tmp_product_n_32,tmp_product_n_33,tmp_product_n_34,tmp_product_n_35,tmp_product_n_36,tmp_product_n_37,tmp_product_n_38,tmp_product_n_39,tmp_product_n_40,tmp_product_n_41,tmp_product_n_42,tmp_product_n_43,tmp_product_n_44,tmp_product_n_45,tmp_product_n_46,tmp_product_n_47,tmp_product_n_48,tmp_product_n_49,tmp_product_n_50,tmp_product_n_51,tmp_product_n_52,tmp_product_n_53}),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
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
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product_OVERFLOW_UNCONNECTED),
        .P({tmp_product_n_58,tmp_product_n_59,tmp_product_n_60,tmp_product_n_61,tmp_product_n_62,tmp_product_n_63,tmp_product_n_64,tmp_product_n_65,tmp_product_n_66,tmp_product_n_67,tmp_product_n_68,tmp_product_n_69,tmp_product_n_70,tmp_product_n_71,tmp_product_n_72,tmp_product_n_73,tmp_product_n_74,tmp_product_n_75,tmp_product_n_76,tmp_product_n_77,tmp_product_n_78,tmp_product_n_79,tmp_product_n_80,tmp_product_n_81,tmp_product_n_82,tmp_product_n_83,tmp_product_n_84,tmp_product_n_85,tmp_product_n_86,tmp_product_n_87,tmp_product_n_88,tmp_product_n_89,tmp_product_n_90,tmp_product_n_91,tmp_product_n_92,tmp_product_n_93,tmp_product_n_94,tmp_product_n_95,tmp_product_n_96,tmp_product_n_97,tmp_product_n_98,tmp_product_n_99,tmp_product_n_100,tmp_product_n_101,tmp_product_n_102,tmp_product_n_103,tmp_product_n_104,tmp_product_n_105}),
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
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x15 8}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("CASCADE"),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACIN({buff0_reg__1_n_24,buff0_reg__1_n_25,buff0_reg__1_n_26,buff0_reg__1_n_27,buff0_reg__1_n_28,buff0_reg__1_n_29,buff0_reg__1_n_30,buff0_reg__1_n_31,buff0_reg__1_n_32,buff0_reg__1_n_33,buff0_reg__1_n_34,buff0_reg__1_n_35,buff0_reg__1_n_36,buff0_reg__1_n_37,buff0_reg__1_n_38,buff0_reg__1_n_39,buff0_reg__1_n_40,buff0_reg__1_n_41,buff0_reg__1_n_42,buff0_reg__1_n_43,buff0_reg__1_n_44,buff0_reg__1_n_45,buff0_reg__1_n_46,buff0_reg__1_n_47,buff0_reg__1_n_48,buff0_reg__1_n_49,buff0_reg__1_n_50,buff0_reg__1_n_51,buff0_reg__1_n_52,buff0_reg__1_n_53}),
        .ACOUT(NLW_tmp_product__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
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
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
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
