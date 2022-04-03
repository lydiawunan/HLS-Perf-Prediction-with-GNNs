// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Sat May  1 15:52:54 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/nanwu/GNN_DFG/bb/dfg_103/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.v
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
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [31:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p, LAYERED_METADATA undef" *) input [15:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_7 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_7, LAYERED_METADATA undef" *) input [31:0]p_7;

  wire \<const0> ;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire [0:0]\^ap_return ;
  wire ap_rst;
  wire ap_start;
  wire [15:0]p;
  wire [31:1]NLW_inst_ap_return_UNCONNECTED;

  assign ap_return[31] = \<const0> ;
  assign ap_return[30] = \<const0> ;
  assign ap_return[29] = \<const0> ;
  assign ap_return[28] = \<const0> ;
  assign ap_return[27] = \<const0> ;
  assign ap_return[26] = \<const0> ;
  assign ap_return[25] = \<const0> ;
  assign ap_return[24] = \<const0> ;
  assign ap_return[23] = \<const0> ;
  assign ap_return[22] = \<const0> ;
  assign ap_return[21] = \<const0> ;
  assign ap_return[20] = \<const0> ;
  assign ap_return[19] = \<const0> ;
  assign ap_return[18] = \<const0> ;
  assign ap_return[17] = \<const0> ;
  assign ap_return[16] = \<const0> ;
  assign ap_return[15] = \<const0> ;
  assign ap_return[14] = \<const0> ;
  assign ap_return[13] = \<const0> ;
  assign ap_return[12] = \<const0> ;
  assign ap_return[11] = \<const0> ;
  assign ap_return[10] = \<const0> ;
  assign ap_return[9] = \<const0> ;
  assign ap_return[8] = \<const0> ;
  assign ap_return[7] = \<const0> ;
  assign ap_return[6] = \<const0> ;
  assign ap_return[5] = \<const0> ;
  assign ap_return[4] = \<const0> ;
  assign ap_return[3] = \<const0> ;
  assign ap_return[2] = \<const0> ;
  assign ap_return[1] = \<const0> ;
  assign ap_return[0] = \^ap_return [0];
  GND GND
       (.G(\<const0> ));
  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "26'b00000000000000000000000001" *) 
  (* ap_ST_fsm_state10 = "26'b00000000000000001000000000" *) 
  (* ap_ST_fsm_state11 = "26'b00000000000000010000000000" *) 
  (* ap_ST_fsm_state12 = "26'b00000000000000100000000000" *) 
  (* ap_ST_fsm_state13 = "26'b00000000000001000000000000" *) 
  (* ap_ST_fsm_state14 = "26'b00000000000010000000000000" *) 
  (* ap_ST_fsm_state15 = "26'b00000000000100000000000000" *) 
  (* ap_ST_fsm_state16 = "26'b00000000001000000000000000" *) 
  (* ap_ST_fsm_state17 = "26'b00000000010000000000000000" *) 
  (* ap_ST_fsm_state18 = "26'b00000000100000000000000000" *) 
  (* ap_ST_fsm_state19 = "26'b00000001000000000000000000" *) 
  (* ap_ST_fsm_state2 = "26'b00000000000000000000000010" *) 
  (* ap_ST_fsm_state20 = "26'b00000010000000000000000000" *) 
  (* ap_ST_fsm_state21 = "26'b00000100000000000000000000" *) 
  (* ap_ST_fsm_state22 = "26'b00001000000000000000000000" *) 
  (* ap_ST_fsm_state23 = "26'b00010000000000000000000000" *) 
  (* ap_ST_fsm_state24 = "26'b00100000000000000000000000" *) 
  (* ap_ST_fsm_state25 = "26'b01000000000000000000000000" *) 
  (* ap_ST_fsm_state26 = "26'b10000000000000000000000000" *) 
  (* ap_ST_fsm_state3 = "26'b00000000000000000000000100" *) 
  (* ap_ST_fsm_state4 = "26'b00000000000000000000001000" *) 
  (* ap_ST_fsm_state5 = "26'b00000000000000000000010000" *) 
  (* ap_ST_fsm_state6 = "26'b00000000000000000000100000" *) 
  (* ap_ST_fsm_state7 = "26'b00000000000000000001000000" *) 
  (* ap_ST_fsm_state8 = "26'b00000000000000000010000000" *) 
  (* ap_ST_fsm_state9 = "26'b00000000000000000100000000" *) 
  bd_0_hls_inst_0_fn1 inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_return({NLW_inst_ap_return_UNCONNECTED[31:1],\^ap_return }),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p(p),
        .p_7({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}));
endmodule

(* ORIG_REF_NAME = "fn1" *) (* ap_ST_fsm_state1 = "26'b00000000000000000000000001" *) (* ap_ST_fsm_state10 = "26'b00000000000000001000000000" *) 
(* ap_ST_fsm_state11 = "26'b00000000000000010000000000" *) (* ap_ST_fsm_state12 = "26'b00000000000000100000000000" *) (* ap_ST_fsm_state13 = "26'b00000000000001000000000000" *) 
(* ap_ST_fsm_state14 = "26'b00000000000010000000000000" *) (* ap_ST_fsm_state15 = "26'b00000000000100000000000000" *) (* ap_ST_fsm_state16 = "26'b00000000001000000000000000" *) 
(* ap_ST_fsm_state17 = "26'b00000000010000000000000000" *) (* ap_ST_fsm_state18 = "26'b00000000100000000000000000" *) (* ap_ST_fsm_state19 = "26'b00000001000000000000000000" *) 
(* ap_ST_fsm_state2 = "26'b00000000000000000000000010" *) (* ap_ST_fsm_state20 = "26'b00000010000000000000000000" *) (* ap_ST_fsm_state21 = "26'b00000100000000000000000000" *) 
(* ap_ST_fsm_state22 = "26'b00001000000000000000000000" *) (* ap_ST_fsm_state23 = "26'b00010000000000000000000000" *) (* ap_ST_fsm_state24 = "26'b00100000000000000000000000" *) 
(* ap_ST_fsm_state25 = "26'b01000000000000000000000000" *) (* ap_ST_fsm_state26 = "26'b10000000000000000000000000" *) (* ap_ST_fsm_state3 = "26'b00000000000000000000000100" *) 
(* ap_ST_fsm_state4 = "26'b00000000000000000000001000" *) (* ap_ST_fsm_state5 = "26'b00000000000000000000010000" *) (* ap_ST_fsm_state6 = "26'b00000000000000000000100000" *) 
(* ap_ST_fsm_state7 = "26'b00000000000000000001000000" *) (* ap_ST_fsm_state8 = "26'b00000000000000000010000000" *) (* ap_ST_fsm_state9 = "26'b00000000000000000100000000" *) 
(* hls_module = "yes" *) 
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
  input [15:0]p;
  input [31:0]p_7;
  output [31:0]ap_return;

  wire \<const0> ;
  wire \ap_CS_fsm[1]_i_2_n_0 ;
  wire \ap_CS_fsm[1]_i_3_n_0 ;
  wire \ap_CS_fsm[1]_i_4_n_0 ;
  wire \ap_CS_fsm[1]_i_5_n_0 ;
  wire \ap_CS_fsm[1]_i_6_n_0 ;
  wire \ap_CS_fsm_reg_n_0_[0] ;
  wire \ap_CS_fsm_reg_n_0_[10] ;
  wire \ap_CS_fsm_reg_n_0_[11] ;
  wire \ap_CS_fsm_reg_n_0_[12] ;
  wire \ap_CS_fsm_reg_n_0_[13] ;
  wire \ap_CS_fsm_reg_n_0_[14] ;
  wire \ap_CS_fsm_reg_n_0_[15] ;
  wire \ap_CS_fsm_reg_n_0_[16] ;
  wire \ap_CS_fsm_reg_n_0_[17] ;
  wire \ap_CS_fsm_reg_n_0_[18] ;
  wire \ap_CS_fsm_reg_n_0_[19] ;
  wire \ap_CS_fsm_reg_n_0_[1] ;
  wire \ap_CS_fsm_reg_n_0_[22] ;
  wire \ap_CS_fsm_reg_n_0_[23] ;
  wire \ap_CS_fsm_reg_n_0_[24] ;
  wire \ap_CS_fsm_reg_n_0_[2] ;
  wire \ap_CS_fsm_reg_n_0_[3] ;
  wire \ap_CS_fsm_reg_n_0_[4] ;
  wire \ap_CS_fsm_reg_n_0_[5] ;
  wire \ap_CS_fsm_reg_n_0_[6] ;
  wire \ap_CS_fsm_reg_n_0_[7] ;
  wire \ap_CS_fsm_reg_n_0_[8] ;
  wire \ap_CS_fsm_reg_n_0_[9] ;
  wire ap_CS_fsm_state21;
  wire [1:0]ap_NS_fsm;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire [0:0]\^ap_return ;
  wire ap_rst;
  wire ap_start;
  wire [15:0]p;
  wire [16:0]quot;
  wire [16:0]sdiv_ln21_reg_153;
  wire start;

  assign ap_ready = ap_done;
  assign ap_return[31] = \<const0> ;
  assign ap_return[30] = \<const0> ;
  assign ap_return[29] = \<const0> ;
  assign ap_return[28] = \<const0> ;
  assign ap_return[27] = \<const0> ;
  assign ap_return[26] = \<const0> ;
  assign ap_return[25] = \<const0> ;
  assign ap_return[24] = \<const0> ;
  assign ap_return[23] = \<const0> ;
  assign ap_return[22] = \<const0> ;
  assign ap_return[21] = \<const0> ;
  assign ap_return[20] = \<const0> ;
  assign ap_return[19] = \<const0> ;
  assign ap_return[18] = \<const0> ;
  assign ap_return[17] = \<const0> ;
  assign ap_return[16] = \<const0> ;
  assign ap_return[15] = \<const0> ;
  assign ap_return[14] = \<const0> ;
  assign ap_return[13] = \<const0> ;
  assign ap_return[12] = \<const0> ;
  assign ap_return[11] = \<const0> ;
  assign ap_return[10] = \<const0> ;
  assign ap_return[9] = \<const0> ;
  assign ap_return[8] = \<const0> ;
  assign ap_return[7] = \<const0> ;
  assign ap_return[6] = \<const0> ;
  assign ap_return[5] = \<const0> ;
  assign ap_return[4] = \<const0> ;
  assign ap_return[3] = \<const0> ;
  assign ap_return[2] = \<const0> ;
  assign ap_return[1] = \<const0> ;
  assign ap_return[0] = \^ap_return [0];
  GND GND
       (.G(\<const0> ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hF4)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(ap_start),
        .I1(\ap_CS_fsm_reg_n_0_[0] ),
        .I2(ap_done),
        .O(ap_NS_fsm[0]));
  LUT5 #(
    .INIT(32'h80000000)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(\ap_CS_fsm[1]_i_2_n_0 ),
        .I1(\ap_CS_fsm[1]_i_3_n_0 ),
        .I2(\ap_CS_fsm[1]_i_4_n_0 ),
        .I3(\ap_CS_fsm[1]_i_5_n_0 ),
        .I4(\ap_CS_fsm[1]_i_6_n_0 ),
        .O(ap_NS_fsm[1]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'h40)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(\ap_CS_fsm_reg_n_0_[1] ),
        .I1(\ap_CS_fsm_reg_n_0_[0] ),
        .I2(ap_start),
        .O(\ap_CS_fsm[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_3 
       (.I0(\ap_CS_fsm_reg_n_0_[4] ),
        .I1(\ap_CS_fsm_reg_n_0_[5] ),
        .I2(\ap_CS_fsm_reg_n_0_[2] ),
        .I3(\ap_CS_fsm_reg_n_0_[3] ),
        .I4(\ap_CS_fsm_reg_n_0_[7] ),
        .I5(\ap_CS_fsm_reg_n_0_[6] ),
        .O(\ap_CS_fsm[1]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_4 
       (.I0(\ap_CS_fsm_reg_n_0_[16] ),
        .I1(\ap_CS_fsm_reg_n_0_[17] ),
        .I2(\ap_CS_fsm_reg_n_0_[14] ),
        .I3(\ap_CS_fsm_reg_n_0_[15] ),
        .I4(\ap_CS_fsm_reg_n_0_[19] ),
        .I5(\ap_CS_fsm_reg_n_0_[18] ),
        .O(\ap_CS_fsm[1]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_5 
       (.I0(\ap_CS_fsm_reg_n_0_[10] ),
        .I1(\ap_CS_fsm_reg_n_0_[11] ),
        .I2(\ap_CS_fsm_reg_n_0_[8] ),
        .I3(\ap_CS_fsm_reg_n_0_[9] ),
        .I4(\ap_CS_fsm_reg_n_0_[13] ),
        .I5(\ap_CS_fsm_reg_n_0_[12] ),
        .O(\ap_CS_fsm[1]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_6 
       (.I0(\ap_CS_fsm_reg_n_0_[22] ),
        .I1(\ap_CS_fsm_reg_n_0_[23] ),
        .I2(ap_CS_fsm_state21),
        .I3(start),
        .I4(ap_done),
        .I5(\ap_CS_fsm_reg_n_0_[24] ),
        .O(\ap_CS_fsm[1]_i_6_n_0 ));
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
        .Q(start),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(start),
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
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(\ap_CS_fsm_reg_n_0_[0] ),
        .I1(ap_start),
        .O(ap_idle));
  bd_0_hls_inst_0_fn1_sdiv_17ns_17ns_17_21_seq_1 sdiv_17ns_17ns_17_21_seq_1_U1
       (.Q(\ap_CS_fsm_reg_n_0_[0] ),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p(p),
        .\quot_reg[16] (quot));
  FDRE \sdiv_ln21_reg_153_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[0]),
        .Q(sdiv_ln21_reg_153[0]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[10]),
        .Q(sdiv_ln21_reg_153[10]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[11]),
        .Q(sdiv_ln21_reg_153[11]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[12]),
        .Q(sdiv_ln21_reg_153[12]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[13]),
        .Q(sdiv_ln21_reg_153[13]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[14]),
        .Q(sdiv_ln21_reg_153[14]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[15]),
        .Q(sdiv_ln21_reg_153[15]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[16] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[16]),
        .Q(sdiv_ln21_reg_153[16]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[1]),
        .Q(sdiv_ln21_reg_153[1]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[2]),
        .Q(sdiv_ln21_reg_153[2]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[3]),
        .Q(sdiv_ln21_reg_153[3]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[4]),
        .Q(sdiv_ln21_reg_153[4]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[5]),
        .Q(sdiv_ln21_reg_153[5]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[6]),
        .Q(sdiv_ln21_reg_153[6]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[7]),
        .Q(sdiv_ln21_reg_153[7]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[8]),
        .Q(sdiv_ln21_reg_153[8]),
        .R(1'b0));
  FDRE \sdiv_ln21_reg_153_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state21),
        .D(quot[9]),
        .Q(sdiv_ln21_reg_153[9]),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_urem_1ns_18ns_18_5_seq_1 urem_1ns_18ns_18_5_seq_1_U2
       (.Q(start),
        .ap_clk(ap_clk),
        .ap_return(\^ap_return ),
        .ap_rst(ap_rst),
        .\divisor0_reg[16] (sdiv_ln21_reg_153));
endmodule

(* ORIG_REF_NAME = "fn1_sdiv_17ns_17ns_17_21_seq_1" *) 
module bd_0_hls_inst_0_fn1_sdiv_17ns_17ns_17_21_seq_1
   (\quot_reg[16] ,
    ap_clk,
    ap_start,
    Q,
    p,
    ap_rst);
  output [16:0]\quot_reg[16] ;
  input ap_clk;
  input ap_start;
  input [0:0]Q;
  input [15:0]p;
  input ap_rst;

  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire [15:0]p;
  wire [16:0]\quot_reg[16] ;

  bd_0_hls_inst_0_fn1_sdiv_17ns_17ns_17_21_seq_1_div fn1_sdiv_17ns_17ns_17_21_seq_1_div_U
       (.Q(Q),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p(p),
        .\quot_reg[16]_0 (\quot_reg[16] ));
endmodule

(* ORIG_REF_NAME = "fn1_sdiv_17ns_17ns_17_21_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_sdiv_17ns_17ns_17_21_seq_1_div
   (\quot_reg[16]_0 ,
    ap_clk,
    ap_start,
    Q,
    p,
    ap_rst);
  output [16:0]\quot_reg[16]_0 ;
  input ap_clk;
  input ap_start;
  input [0:0]Q;
  input [15:0]p;
  input ap_rst;

  wire [0:0]Q;
  wire \_inferred__2/i__carry_n_1 ;
  wire \_inferred__2/i__carry_n_3 ;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire [15:0]dividend_u;
  wire \divisor0[16]_i_1_n_0 ;
  wire \divisor0[3]_i_1_n_0 ;
  wire \divisor0[4]_i_1_n_0 ;
  wire \divisor0[8]_i_1__0_n_0 ;
  wire \divisor0[9]_i_3_n_0 ;
  wire \divisor0[9]_i_4_n_0 ;
  wire \divisor0[9]_i_5_n_0 ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire [9:4]divisor_u;
  wire [9:4]divisor_u0;
  wire done0;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_10;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_11;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_12;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_13;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_14;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_15;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_16;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_17;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_18;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_19;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_20;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_4;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_5;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_6;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_7;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_8;
  wire fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_9;
  wire grp_fu_110_ap_start;
  wire [9:5]grp_fu_110_p1;
  wire i__carry_i_1_n_0;
  wire i__carry_i_2_n_0;
  wire i__carry_i_3_n_0;
  wire [15:0]p;
  wire p_0_in;
  wire [16:0]\quot_reg[16]_0 ;
  wire start0;
  wire [3:1]\NLW__inferred__2/i__carry_CO_UNCONNECTED ;
  wire [3:2]\NLW__inferred__2/i__carry_O_UNCONNECTED ;

  CARRY4 \_inferred__2/i__carry 
       (.CI(1'b0),
        .CO({\NLW__inferred__2/i__carry_CO_UNCONNECTED [3],\_inferred__2/i__carry_n_1 ,\NLW__inferred__2/i__carry_CO_UNCONNECTED [1],\_inferred__2/i__carry_n_3 }),
        .CYINIT(i__carry_i_1_n_0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW__inferred__2/i__carry_O_UNCONNECTED [3:2],divisor_u0[5:4]}),
        .S({1'b0,1'b1,i__carry_i_2_n_0,i__carry_i_3_n_0}));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[0]),
        .Q(dividend_u[0]),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[10]),
        .Q(dividend_u[10]),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[11]),
        .Q(dividend_u[11]),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[12]),
        .Q(dividend_u[12]),
        .R(1'b0));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[13]),
        .Q(dividend_u[13]),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[14]),
        .Q(dividend_u[14]),
        .R(1'b0));
  FDRE \dividend0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[15]),
        .Q(dividend_u[15]),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[1]),
        .Q(dividend_u[1]),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[2]),
        .Q(dividend_u[2]),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[3]),
        .Q(dividend_u[3]),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[4]),
        .Q(dividend_u[4]),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[5]),
        .Q(dividend_u[5]),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[6]),
        .Q(dividend_u[6]),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[7]),
        .Q(dividend_u[7]),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[8]),
        .Q(dividend_u[8]),
        .R(1'b0));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[9]),
        .Q(dividend_u[9]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT2 #(
    .INIT(4'h7)) 
    \divisor0[16]_i_1 
       (.I0(p[9]),
        .I1(p[7]),
        .O(\divisor0[16]_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[3]_i_1 
       (.I0(p[1]),
        .O(\divisor0[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \divisor0[4]_i_1 
       (.I0(p[1]),
        .I1(p[4]),
        .O(\divisor0[4]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[4]_i_1__0 
       (.I0(divisor_u0[4]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(divisor_u[4]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[5]_i_1 
       (.I0(divisor_u0[5]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(divisor_u[5]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \divisor0[5]_i_1__0 
       (.I0(p[1]),
        .I1(p[4]),
        .O(grp_fu_110_p1[5]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[7]_i_1 
       (.I0(divisor_u0[7]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(divisor_u[7]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[8]_i_1 
       (.I0(divisor_u0[8]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(divisor_u[8]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_1__0 
       (.I0(p[7]),
        .O(\divisor0[8]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \divisor0[9]_i_1 
       (.I0(divisor_u0[9]),
        .I1(p_0_in),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(divisor_u[9]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \divisor0[9]_i_1__0 
       (.I0(p[7]),
        .I1(p[9]),
        .O(grp_fu_110_p1[9]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[9]_i_3 
       (.I0(\divisor0_reg_n_0_[9] ),
        .O(\divisor0[9]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[9]_i_4 
       (.I0(\divisor0_reg_n_0_[8] ),
        .O(\divisor0[9]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[9]_i_5 
       (.I0(\divisor0_reg_n_0_[8] ),
        .O(\divisor0[9]_i_5_n_0 ));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0[16]_i_1_n_0 ),
        .Q(p_0_in),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0[3]_i_1_n_0 ),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0[4]_i_1_n_0 ),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_110_p1[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0[8]_i_1__0_n_0 ),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_110_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_sdiv_17ns_17ns_17_21_seq_1_div_u fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0
       (.CO(\_inferred__2/i__carry_n_1 ),
        .D({divisor_u[9:7],divisor_u[5:4]}),
        .O(divisor_u0[9:7]),
        .O2({fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_4,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_5,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_6,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_7,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_8,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_9,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_10,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_11,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_12,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_13,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_14,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_15,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_16,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_17,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_18,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_19,fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_20}),
        .Q({p_0_in,\divisor0_reg_n_0_[3] }),
        .S({\divisor0[9]_i_3_n_0 ,\divisor0[9]_i_4_n_0 ,\divisor0[9]_i_5_n_0 }),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\dividend0_reg[15]_0 (dividend_u),
        .\r_stage_reg[17]_0 (done0),
        .start0(start0));
  LUT1 #(
    .INIT(2'h1)) 
    i__carry_i_1
       (.I0(\divisor0_reg_n_0_[3] ),
        .O(i__carry_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    i__carry_i_2
       (.I0(\divisor0_reg_n_0_[5] ),
        .O(i__carry_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    i__carry_i_3
       (.I0(\divisor0_reg_n_0_[4] ),
        .O(i__carry_i_3_n_0));
  FDRE \quot_reg[0] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_20),
        .Q(\quot_reg[16]_0 [0]),
        .R(1'b0));
  FDRE \quot_reg[10] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_10),
        .Q(\quot_reg[16]_0 [10]),
        .R(1'b0));
  FDRE \quot_reg[11] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_9),
        .Q(\quot_reg[16]_0 [11]),
        .R(1'b0));
  FDRE \quot_reg[12] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_8),
        .Q(\quot_reg[16]_0 [12]),
        .R(1'b0));
  FDRE \quot_reg[13] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_7),
        .Q(\quot_reg[16]_0 [13]),
        .R(1'b0));
  FDRE \quot_reg[14] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_6),
        .Q(\quot_reg[16]_0 [14]),
        .R(1'b0));
  FDRE \quot_reg[15] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_5),
        .Q(\quot_reg[16]_0 [15]),
        .R(1'b0));
  FDRE \quot_reg[16] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_4),
        .Q(\quot_reg[16]_0 [16]),
        .R(1'b0));
  FDRE \quot_reg[1] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_19),
        .Q(\quot_reg[16]_0 [1]),
        .R(1'b0));
  FDRE \quot_reg[2] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_18),
        .Q(\quot_reg[16]_0 [2]),
        .R(1'b0));
  FDRE \quot_reg[3] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_17),
        .Q(\quot_reg[16]_0 [3]),
        .R(1'b0));
  FDRE \quot_reg[4] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_16),
        .Q(\quot_reg[16]_0 [4]),
        .R(1'b0));
  FDRE \quot_reg[5] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_15),
        .Q(\quot_reg[16]_0 [5]),
        .R(1'b0));
  FDRE \quot_reg[6] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_14),
        .Q(\quot_reg[16]_0 [6]),
        .R(1'b0));
  FDRE \quot_reg[7] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_13),
        .Q(\quot_reg[16]_0 [7]),
        .R(1'b0));
  FDRE \quot_reg[8] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_12),
        .Q(\quot_reg[16]_0 [8]),
        .R(1'b0));
  FDRE \quot_reg[9] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_sdiv_17ns_17ns_17_21_seq_1_div_u_0_n_11),
        .Q(\quot_reg[16]_0 [9]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    start0_i_1
       (.I0(ap_start),
        .I1(Q),
        .O(grp_fu_110_ap_start));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_110_ap_start),
        .Q(start0),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_sdiv_17ns_17ns_17_21_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_sdiv_17ns_17ns_17_21_seq_1_div_u
   (O,
    \r_stage_reg[17]_0 ,
    O2,
    start0,
    Q,
    ap_clk,
    CO,
    S,
    ap_rst,
    \dividend0_reg[15]_0 ,
    D);
  output [2:0]O;
  output [0:0]\r_stage_reg[17]_0 ;
  output [16:0]O2;
  input start0;
  input [1:0]Q;
  input ap_clk;
  input [0:0]CO;
  input [2:0]S;
  input ap_rst;
  input [15:0]\dividend0_reg[15]_0 ;
  input [4:0]D;

  wire \0 ;
  wire [0:0]CO;
  wire [4:0]D;
  wire [2:0]O;
  wire [16:0]O2;
  wire [1:0]Q;
  wire [2:0]S;
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
  wire cal_tmp_carry__2_i_8_n_0;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
  wire cal_tmp_carry__2_n_4;
  wire cal_tmp_carry__2_n_5;
  wire cal_tmp_carry__2_n_6;
  wire cal_tmp_carry__2_n_7;
  wire cal_tmp_carry__3_i_2__0_n_0;
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
  wire [16:0]dividend_tmp;
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
  wire \divisor0[13]_i_2_n_0 ;
  wire \divisor0[13]_i_3_n_0 ;
  wire \divisor0[13]_i_4_n_0 ;
  wire \divisor0[13]_i_5_n_0 ;
  wire \divisor0[16]_i_1__0_n_0 ;
  wire \divisor0[16]_i_3_n_0 ;
  wire \divisor0[16]_i_4_n_0 ;
  wire \divisor0[16]_i_5_n_0 ;
  wire \divisor0[3]_i_1__0_n_0 ;
  wire \divisor0[6]_i_1_n_0 ;
  wire \divisor0_reg[13]_i_1_n_0 ;
  wire \divisor0_reg[13]_i_1_n_1 ;
  wire \divisor0_reg[13]_i_1_n_2 ;
  wire \divisor0_reg[13]_i_1_n_3 ;
  wire \divisor0_reg[16]_i_2_n_2 ;
  wire \divisor0_reg[16]_i_2_n_3 ;
  wire \divisor0_reg[9]_i_2_n_0 ;
  wire \divisor0_reg[9]_i_2_n_1 ;
  wire \divisor0_reg[9]_i_2_n_2 ;
  wire \divisor0_reg[9]_i_2_n_3 ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[11] ;
  wire \divisor0_reg_n_0_[12] ;
  wire \divisor0_reg_n_0_[13] ;
  wire \divisor0_reg_n_0_[14] ;
  wire \divisor0_reg_n_0_[15] ;
  wire \divisor0_reg_n_0_[16] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire [16:10]divisor_u0;
  wire p_0_in;
  wire p_1_in0;
  wire [0:0]p_2_out;
  wire \quot[11]_i_2_n_0 ;
  wire \quot[11]_i_3_n_0 ;
  wire \quot[11]_i_4_n_0 ;
  wire \quot[11]_i_5_n_0 ;
  wire \quot[15]_i_2_n_0 ;
  wire \quot[15]_i_3_n_0 ;
  wire \quot[15]_i_4_n_0 ;
  wire \quot[15]_i_5_n_0 ;
  wire \quot[16]_i_2_n_0 ;
  wire \quot[3]_i_2_n_0 ;
  wire \quot[3]_i_3_n_0 ;
  wire \quot[3]_i_4_n_0 ;
  wire \quot[3]_i_5_n_0 ;
  wire \quot[7]_i_2_n_0 ;
  wire \quot[7]_i_3_n_0 ;
  wire \quot[7]_i_4_n_0 ;
  wire \quot[7]_i_5_n_0 ;
  wire \quot_reg[11]_i_1_n_0 ;
  wire \quot_reg[11]_i_1_n_1 ;
  wire \quot_reg[11]_i_1_n_2 ;
  wire \quot_reg[11]_i_1_n_3 ;
  wire \quot_reg[15]_i_1_n_0 ;
  wire \quot_reg[15]_i_1_n_1 ;
  wire \quot_reg[15]_i_1_n_2 ;
  wire \quot_reg[15]_i_1_n_3 ;
  wire \quot_reg[3]_i_1_n_0 ;
  wire \quot_reg[3]_i_1_n_1 ;
  wire \quot_reg[3]_i_1_n_2 ;
  wire \quot_reg[3]_i_1_n_3 ;
  wire \quot_reg[7]_i_1_n_0 ;
  wire \quot_reg[7]_i_1_n_1 ;
  wire \quot_reg[7]_i_1_n_2 ;
  wire \quot_reg[7]_i_1_n_3 ;
  wire [0:0]\r_stage_reg[17]_0 ;
  wire \r_stage_reg_n_0_[0] ;
  wire \r_stage_reg_n_0_[10] ;
  wire \r_stage_reg_n_0_[11] ;
  wire \r_stage_reg_n_0_[12] ;
  wire \r_stage_reg_n_0_[13] ;
  wire \r_stage_reg_n_0_[14] ;
  wire \r_stage_reg_n_0_[15] ;
  wire \r_stage_reg_n_0_[16] ;
  wire \r_stage_reg_n_0_[1] ;
  wire \r_stage_reg_n_0_[2] ;
  wire \r_stage_reg_n_0_[3] ;
  wire \r_stage_reg_n_0_[4] ;
  wire \r_stage_reg_n_0_[5] ;
  wire \r_stage_reg_n_0_[6] ;
  wire \r_stage_reg_n_0_[7] ;
  wire \r_stage_reg_n_0_[8] ;
  wire \r_stage_reg_n_0_[9] ;
  wire [15:0]remd_tmp;
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
  wire [15:0]remd_tmp_mux;
  wire start0;
  wire [3:1]NLW_cal_tmp_carry__3_CO_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;
  wire [3:2]\NLW_divisor0_reg[16]_i_2_CO_UNCONNECTED ;
  wire [3:3]\NLW_divisor0_reg[16]_i_2_O_UNCONNECTED ;
  wire [0:0]\NLW_divisor0_reg[9]_i_2_O_UNCONNECTED ;
  wire [3:0]\NLW_quot_reg[16]_i_1_CO_UNCONNECTED ;
  wire [3:1]\NLW_quot_reg[16]_i_1_O_UNCONNECTED ;

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
        .DI(remd_tmp_mux[10:7]),
        .O({cal_tmp_carry__1_n_4,cal_tmp_carry__1_n_5,cal_tmp_carry__1_n_6,cal_tmp_carry__1_n_7}),
        .S({cal_tmp_carry__1_i_5_n_0,cal_tmp_carry__1_i_6_n_0,cal_tmp_carry__1_i_7_n_0,cal_tmp_carry__1_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_1
       (.I0(remd_tmp[10]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[10]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_2
       (.I0(remd_tmp[9]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[9]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_3
       (.I0(remd_tmp[8]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[8]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_4
       (.I0(remd_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[7]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[10]),
        .I2(\divisor0_reg_n_0_[11] ),
        .O(cal_tmp_carry__1_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[9]),
        .I2(\divisor0_reg_n_0_[10] ),
        .O(cal_tmp_carry__1_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_7
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[8]),
        .I2(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__1_i_8
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[7]),
        .I2(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_8_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI(remd_tmp_mux[14:11]),
        .O({cal_tmp_carry__2_n_4,cal_tmp_carry__2_n_5,cal_tmp_carry__2_n_6,cal_tmp_carry__2_n_7}),
        .S({cal_tmp_carry__2_i_5_n_0,cal_tmp_carry__2_i_6_n_0,cal_tmp_carry__2_i_7_n_0,cal_tmp_carry__2_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_1
       (.I0(remd_tmp[14]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[14]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_2
       (.I0(remd_tmp[13]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[13]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_3
       (.I0(remd_tmp[12]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[12]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_4
       (.I0(remd_tmp[11]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[11]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[14]),
        .I2(\divisor0_reg_n_0_[15] ),
        .O(cal_tmp_carry__2_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[13]),
        .I2(\divisor0_reg_n_0_[14] ),
        .O(cal_tmp_carry__2_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_7
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[12]),
        .I2(\divisor0_reg_n_0_[13] ),
        .O(cal_tmp_carry__2_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__2_i_8
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[11]),
        .I2(\divisor0_reg_n_0_[12] ),
        .O(cal_tmp_carry__2_i_8_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({NLW_cal_tmp_carry__3_CO_UNCONNECTED[3:1],p_2_out}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,remd_tmp_mux[15]}),
        .O({NLW_cal_tmp_carry__3_O_UNCONNECTED[3:2],p_0_in,NLW_cal_tmp_carry__3_O_UNCONNECTED[0]}),
        .S({1'b0,1'b0,1'b1,cal_tmp_carry__3_i_2__0_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__3_i_1
       (.I0(remd_tmp[15]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[15]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__3_i_2__0
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[15]),
        .I2(\divisor0_reg_n_0_[16] ),
        .O(cal_tmp_carry__3_i_2__0_n_0));
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
       (.I0(remd_tmp[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[0]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_4
       (.I0(dividend_tmp[16]),
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
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_7
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[0]),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_7_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry_i_8
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(dividend_tmp[16]),
        .O(cal_tmp_carry_i_8_n_0));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [10]),
        .Q(\dividend0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [11]),
        .Q(\dividend0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [12]),
        .Q(\dividend0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [13]),
        .Q(\dividend0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [14]),
        .Q(\dividend0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \dividend0_reg[15] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [15]),
        .Q(\dividend0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [8]),
        .Q(\dividend0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(start0),
        .D(\dividend0_reg[15]_0 [9]),
        .Q(\dividend0_reg_n_0_[9] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[10]_i_1 
       (.I0(\dividend0_reg_n_0_[9] ),
        .I1(dividend_tmp[9]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[11]_i_1 
       (.I0(\dividend0_reg_n_0_[10] ),
        .I1(dividend_tmp[10]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[12]_i_1 
       (.I0(\dividend0_reg_n_0_[11] ),
        .I1(dividend_tmp[11]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[12]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[13]_i_1 
       (.I0(\dividend0_reg_n_0_[12] ),
        .I1(dividend_tmp[12]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[14]_i_1 
       (.I0(\dividend0_reg_n_0_[13] ),
        .I1(dividend_tmp[13]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[14]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[15]_i_1 
       (.I0(\dividend0_reg_n_0_[14] ),
        .I1(dividend_tmp[14]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[16]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(dividend_tmp[15]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[16]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[1]_i_1 
       (.I0(\dividend0_reg_n_0_[0] ),
        .I1(dividend_tmp[0]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[2]_i_1 
       (.I0(\dividend0_reg_n_0_[1] ),
        .I1(dividend_tmp[1]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[3]_i_1 
       (.I0(\dividend0_reg_n_0_[2] ),
        .I1(dividend_tmp[2]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend0_reg_n_0_[3] ),
        .I1(dividend_tmp[3]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[5]_i_1 
       (.I0(\dividend0_reg_n_0_[4] ),
        .I1(dividend_tmp[4]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[6]_i_1 
       (.I0(\dividend0_reg_n_0_[5] ),
        .I1(dividend_tmp[5]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[7]_i_1 
       (.I0(\dividend0_reg_n_0_[6] ),
        .I1(dividend_tmp[6]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[8]_i_1 
       (.I0(\dividend0_reg_n_0_[7] ),
        .I1(dividend_tmp[7]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[9]_i_1 
       (.I0(\dividend0_reg_n_0_[8] ),
        .I1(dividend_tmp[8]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[9]_i_1_n_0 ));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_2_out),
        .Q(dividend_tmp[0]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[10]_i_1_n_0 ),
        .Q(dividend_tmp[10]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[11]_i_1_n_0 ),
        .Q(dividend_tmp[11]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[12]_i_1_n_0 ),
        .Q(dividend_tmp[12]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[13]_i_1_n_0 ),
        .Q(dividend_tmp[13]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[14]_i_1_n_0 ),
        .Q(dividend_tmp[14]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[15]_i_1_n_0 ),
        .Q(dividend_tmp[15]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[16]_i_1_n_0 ),
        .Q(dividend_tmp[16]),
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
  FDRE \dividend_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[8]_i_1_n_0 ),
        .Q(dividend_tmp[8]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[9]_i_1_n_0 ),
        .Q(dividend_tmp[9]),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[13]_i_2 
       (.I0(Q[1]),
        .O(\divisor0[13]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[13]_i_3 
       (.I0(Q[1]),
        .O(\divisor0[13]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[13]_i_4 
       (.I0(Q[1]),
        .O(\divisor0[13]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[13]_i_5 
       (.I0(Q[1]),
        .O(\divisor0[13]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \divisor0[16]_i_1__0 
       (.I0(start0),
        .I1(Q[1]),
        .O(\divisor0[16]_i_1__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_3 
       (.I0(Q[1]),
        .O(\divisor0[16]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_4 
       (.I0(Q[1]),
        .O(\divisor0[16]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_5 
       (.I0(Q[1]),
        .O(\divisor0[16]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \divisor0[3]_i_1__0 
       (.I0(Q[0]),
        .I1(Q[1]),
        .O(\divisor0[3]_i_1__0_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \divisor0[6]_i_1 
       (.I0(Q[1]),
        .I1(CO),
        .O(\divisor0[6]_i_1_n_0 ));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(start0),
        .D(divisor_u0[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(\divisor0[16]_i_1__0_n_0 ));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(start0),
        .D(divisor_u0[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(\divisor0[16]_i_1__0_n_0 ));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(start0),
        .D(divisor_u0[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(\divisor0[16]_i_1__0_n_0 ));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(start0),
        .D(divisor_u0[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(\divisor0[16]_i_1__0_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[13]_i_1 
       (.CI(\divisor0_reg[9]_i_2_n_0 ),
        .CO({\divisor0_reg[13]_i_1_n_0 ,\divisor0_reg[13]_i_1_n_1 ,\divisor0_reg[13]_i_1_n_2 ,\divisor0_reg[13]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(divisor_u0[13:10]),
        .S({\divisor0[13]_i_2_n_0 ,\divisor0[13]_i_3_n_0 ,\divisor0[13]_i_4_n_0 ,\divisor0[13]_i_5_n_0 }));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(start0),
        .D(divisor_u0[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(\divisor0[16]_i_1__0_n_0 ));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(start0),
        .D(divisor_u0[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(\divisor0[16]_i_1__0_n_0 ));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(start0),
        .D(divisor_u0[16]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(\divisor0[16]_i_1__0_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[16]_i_2 
       (.CI(\divisor0_reg[13]_i_1_n_0 ),
        .CO({\NLW_divisor0_reg[16]_i_2_CO_UNCONNECTED [3:2],\divisor0_reg[16]_i_2_n_2 ,\divisor0_reg[16]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_divisor0_reg[16]_i_2_O_UNCONNECTED [3],divisor_u0[16:14]}),
        .S({1'b0,\divisor0[16]_i_3_n_0 ,\divisor0[16]_i_4_n_0 ,\divisor0[16]_i_5_n_0 }));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(start0),
        .D(Q[0]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(start0),
        .D(\divisor0[3]_i_1__0_n_0 ),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(start0),
        .D(D[0]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(start0),
        .D(D[1]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(start0),
        .D(\divisor0[6]_i_1_n_0 ),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(start0),
        .D(D[2]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(start0),
        .D(D[3]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(start0),
        .D(D[4]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \divisor0_reg[9]_i_2 
       (.CI(1'b0),
        .CO({\divisor0_reg[9]_i_2_n_0 ,\divisor0_reg[9]_i_2_n_1 ,\divisor0_reg[9]_i_2_n_2 ,\divisor0_reg[9]_i_2_n_3 }),
        .CYINIT(CO),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({O,\NLW_divisor0_reg[9]_i_2_O_UNCONNECTED [0]}),
        .S({S,1'b1}));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[11]_i_2 
       (.I0(\0 ),
        .I1(dividend_tmp[11]),
        .O(\quot[11]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[11]_i_3 
       (.I0(\0 ),
        .I1(dividend_tmp[10]),
        .O(\quot[11]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[11]_i_4 
       (.I0(\0 ),
        .I1(dividend_tmp[9]),
        .O(\quot[11]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[11]_i_5 
       (.I0(\0 ),
        .I1(dividend_tmp[8]),
        .O(\quot[11]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[15]_i_2 
       (.I0(\0 ),
        .I1(dividend_tmp[15]),
        .O(\quot[15]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[15]_i_3 
       (.I0(\0 ),
        .I1(dividend_tmp[14]),
        .O(\quot[15]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[15]_i_4 
       (.I0(\0 ),
        .I1(dividend_tmp[13]),
        .O(\quot[15]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[15]_i_5 
       (.I0(\0 ),
        .I1(dividend_tmp[12]),
        .O(\quot[15]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[16]_i_2 
       (.I0(\0 ),
        .I1(dividend_tmp[16]),
        .O(\quot[16]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[3]_i_2 
       (.I0(\0 ),
        .I1(dividend_tmp[3]),
        .O(\quot[3]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[3]_i_3 
       (.I0(\0 ),
        .I1(dividend_tmp[2]),
        .O(\quot[3]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[3]_i_4 
       (.I0(\0 ),
        .I1(dividend_tmp[1]),
        .O(\quot[3]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h2)) 
    \quot[3]_i_5 
       (.I0(dividend_tmp[0]),
        .O(\quot[3]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[7]_i_2 
       (.I0(\0 ),
        .I1(dividend_tmp[7]),
        .O(\quot[7]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[7]_i_3 
       (.I0(\0 ),
        .I1(dividend_tmp[6]),
        .O(\quot[7]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[7]_i_4 
       (.I0(\0 ),
        .I1(dividend_tmp[5]),
        .O(\quot[7]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \quot[7]_i_5 
       (.I0(\0 ),
        .I1(dividend_tmp[4]),
        .O(\quot[7]_i_5_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \quot_reg[11]_i_1 
       (.CI(\quot_reg[7]_i_1_n_0 ),
        .CO({\quot_reg[11]_i_1_n_0 ,\quot_reg[11]_i_1_n_1 ,\quot_reg[11]_i_1_n_2 ,\quot_reg[11]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(O2[11:8]),
        .S({\quot[11]_i_2_n_0 ,\quot[11]_i_3_n_0 ,\quot[11]_i_4_n_0 ,\quot[11]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \quot_reg[15]_i_1 
       (.CI(\quot_reg[11]_i_1_n_0 ),
        .CO({\quot_reg[15]_i_1_n_0 ,\quot_reg[15]_i_1_n_1 ,\quot_reg[15]_i_1_n_2 ,\quot_reg[15]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(O2[15:12]),
        .S({\quot[15]_i_2_n_0 ,\quot[15]_i_3_n_0 ,\quot[15]_i_4_n_0 ,\quot[15]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \quot_reg[16]_i_1 
       (.CI(\quot_reg[15]_i_1_n_0 ),
        .CO(\NLW_quot_reg[16]_i_1_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_quot_reg[16]_i_1_O_UNCONNECTED [3:1],O2[16]}),
        .S({1'b0,1'b0,1'b0,\quot[16]_i_2_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \quot_reg[3]_i_1 
       (.CI(1'b0),
        .CO({\quot_reg[3]_i_1_n_0 ,\quot_reg[3]_i_1_n_1 ,\quot_reg[3]_i_1_n_2 ,\quot_reg[3]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\0 }),
        .O(O2[3:0]),
        .S({\quot[3]_i_2_n_0 ,\quot[3]_i_3_n_0 ,\quot[3]_i_4_n_0 ,\quot[3]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \quot_reg[7]_i_1 
       (.CI(\quot_reg[3]_i_1_n_0 ),
        .CO({\quot_reg[7]_i_1_n_0 ,\quot_reg[7]_i_1_n_1 ,\quot_reg[7]_i_1_n_2 ,\quot_reg[7]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(O2[7:4]),
        .S({\quot[7]_i_2_n_0 ,\quot[7]_i_3_n_0 ,\quot[7]_i_4_n_0 ,\quot[7]_i_5_n_0 }));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(start0),
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  FDRE \r_stage_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[9] ),
        .Q(\r_stage_reg_n_0_[10] ),
        .R(ap_rst));
  FDRE \r_stage_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[10] ),
        .Q(\r_stage_reg_n_0_[11] ),
        .R(ap_rst));
  FDRE \r_stage_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[11] ),
        .Q(\r_stage_reg_n_0_[12] ),
        .R(ap_rst));
  FDRE \r_stage_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[12] ),
        .Q(\r_stage_reg_n_0_[13] ),
        .R(ap_rst));
  FDRE \r_stage_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[13] ),
        .Q(\r_stage_reg_n_0_[14] ),
        .R(ap_rst));
  FDRE \r_stage_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[14] ),
        .Q(\r_stage_reg_n_0_[15] ),
        .R(ap_rst));
  FDRE \r_stage_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[15] ),
        .Q(\r_stage_reg_n_0_[16] ),
        .R(ap_rst));
  FDRE \r_stage_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[16] ),
        .Q(\r_stage_reg[17]_0 ),
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
        .Q(\r_stage_reg_n_0_[8] ),
        .R(ap_rst));
  FDRE \r_stage_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[8] ),
        .Q(\r_stage_reg_n_0_[9] ),
        .R(ap_rst));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[0]_i_1 
       (.I0(dividend_tmp[16]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[10]_i_1 
       (.I0(remd_tmp[9]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_5),
        .O(\remd_tmp[10]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[11]_i_1 
       (.I0(remd_tmp[10]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_4),
        .O(\remd_tmp[11]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[12]_i_1 
       (.I0(remd_tmp[11]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_7),
        .O(\remd_tmp[12]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[13]_i_1 
       (.I0(remd_tmp[12]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_6),
        .O(\remd_tmp[13]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[14]_i_1 
       (.I0(remd_tmp[13]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_5),
        .O(\remd_tmp[14]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[15]_i_1 
       (.I0(remd_tmp[14]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_4),
        .O(\remd_tmp[15]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1 
       (.I0(remd_tmp[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1 
       (.I0(remd_tmp[1]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1 
       (.I0(remd_tmp[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1 
       (.I0(remd_tmp[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(remd_tmp[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1 
       (.I0(remd_tmp[5]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1 
       (.I0(remd_tmp[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_4),
        .O(\remd_tmp[7]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[8]_i_1 
       (.I0(remd_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_7),
        .O(\remd_tmp[8]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[9]_i_1 
       (.I0(remd_tmp[8]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
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
  FDRE \remd_tmp_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[14]_i_1_n_0 ),
        .Q(remd_tmp[14]),
        .R(1'b0));
  FDRE \remd_tmp_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[15]_i_1_n_0 ),
        .Q(remd_tmp[15]),
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
  FDRE \sign0_reg[1] 
       (.C(ap_clk),
        .CE(start0),
        .D(Q[1]),
        .Q(\0 ),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_urem_1ns_18ns_18_5_seq_1" *) 
module bd_0_hls_inst_0_fn1_urem_1ns_18ns_18_5_seq_1
   (ap_return,
    Q,
    ap_clk,
    ap_rst,
    \divisor0_reg[16] );
  output [0:0]ap_return;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input [16:0]\divisor0_reg[16] ;

  wire [0:0]Q;
  wire ap_clk;
  wire [0:0]ap_return;
  wire ap_rst;
  wire [16:0]\divisor0_reg[16] ;

  bd_0_hls_inst_0_fn1_urem_1ns_18ns_18_5_seq_1_div fn1_urem_1ns_18ns_18_5_seq_1_div_U
       (.Q(Q),
        .ap_clk(ap_clk),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .\divisor0_reg[16]_0 (\divisor0_reg[16] ));
endmodule

(* ORIG_REF_NAME = "fn1_urem_1ns_18ns_18_5_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_urem_1ns_18ns_18_5_seq_1_div
   (ap_return,
    Q,
    ap_clk,
    ap_rst,
    \divisor0_reg[16]_0 );
  output [0:0]ap_return;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input [16:0]\divisor0_reg[16]_0 ;

  wire [0:0]Q;
  wire ap_clk;
  wire [0:0]ap_return;
  wire ap_rst;
  wire \divisor0[12]_i_2_n_0 ;
  wire \divisor0[12]_i_3_n_0 ;
  wire \divisor0[12]_i_4_n_0 ;
  wire \divisor0[12]_i_5_n_0 ;
  wire \divisor0[16]_i_2_n_0 ;
  wire \divisor0[16]_i_3__0_n_0 ;
  wire \divisor0[16]_i_4__0_n_0 ;
  wire \divisor0[16]_i_5__0_n_0 ;
  wire \divisor0[4]_i_2_n_0 ;
  wire \divisor0[4]_i_3_n_0 ;
  wire \divisor0[4]_i_4_n_0 ;
  wire \divisor0[4]_i_5_n_0 ;
  wire \divisor0[4]_i_6_n_0 ;
  wire \divisor0[8]_i_2_n_0 ;
  wire \divisor0[8]_i_3_n_0 ;
  wire \divisor0[8]_i_4_n_0 ;
  wire \divisor0[8]_i_5_n_0 ;
  wire \divisor0_reg[12]_i_1_n_0 ;
  wire \divisor0_reg[12]_i_1_n_1 ;
  wire \divisor0_reg[12]_i_1_n_2 ;
  wire \divisor0_reg[12]_i_1_n_3 ;
  wire [16:0]\divisor0_reg[16]_0 ;
  wire \divisor0_reg[16]_i_1_n_0 ;
  wire \divisor0_reg[16]_i_1_n_1 ;
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
  wire \divisor0_reg_n_0_[17] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire fn1_urem_1ns_18ns_18_5_seq_1_div_u_0_n_0;
  wire [17:1]grp_fu_128_p1;
  wire start0_reg_n_0;
  wire [3:0]\NLW_divisor0_reg[17]_i_1_CO_UNCONNECTED ;
  wire [3:1]\NLW_divisor0_reg[17]_i_1_O_UNCONNECTED ;

  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_2 
       (.I0(\divisor0_reg[16]_0 [9]),
        .O(\divisor0[12]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_3 
       (.I0(\divisor0_reg[16]_0 [12]),
        .O(\divisor0[12]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_4 
       (.I0(\divisor0_reg[16]_0 [11]),
        .O(\divisor0[12]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[12]_i_5 
       (.I0(\divisor0_reg[16]_0 [10]),
        .O(\divisor0[12]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_2 
       (.I0(\divisor0_reg[16]_0 [16]),
        .O(\divisor0[16]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_3__0 
       (.I0(\divisor0_reg[16]_0 [15]),
        .O(\divisor0[16]_i_3__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_4__0 
       (.I0(\divisor0_reg[16]_0 [14]),
        .O(\divisor0[16]_i_4__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[16]_i_5__0 
       (.I0(\divisor0_reg[16]_0 [13]),
        .O(\divisor0[16]_i_5__0_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_2 
       (.I0(\divisor0_reg[16]_0 [0]),
        .O(\divisor0[4]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_3 
       (.I0(\divisor0_reg[16]_0 [3]),
        .O(\divisor0[4]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_4 
       (.I0(\divisor0_reg[16]_0 [4]),
        .O(\divisor0[4]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_5 
       (.I0(\divisor0_reg[16]_0 [2]),
        .O(\divisor0[4]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[4]_i_6 
       (.I0(\divisor0_reg[16]_0 [1]),
        .O(\divisor0[4]_i_6_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_2 
       (.I0(\divisor0_reg[16]_0 [7]),
        .O(\divisor0[8]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_3 
       (.I0(\divisor0_reg[16]_0 [6]),
        .O(\divisor0[8]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_4 
       (.I0(\divisor0_reg[16]_0 [5]),
        .O(\divisor0[8]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[8]_i_5 
       (.I0(\divisor0_reg[16]_0 [8]),
        .O(\divisor0[8]_i_5_n_0 ));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[16]_0 [0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[12]_i_1 
       (.CI(\divisor0_reg[8]_i_1_n_0 ),
        .CO({\divisor0_reg[12]_i_1_n_0 ,\divisor0_reg[12]_i_1_n_1 ,\divisor0_reg[12]_i_1_n_2 ,\divisor0_reg[12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\divisor0[12]_i_2_n_0 }),
        .O(grp_fu_128_p1[12:9]),
        .S({\divisor0[12]_i_3_n_0 ,\divisor0[12]_i_4_n_0 ,\divisor0[12]_i_5_n_0 ,\divisor0_reg[16]_0 [9]}));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[16]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[16]_i_1 
       (.CI(\divisor0_reg[12]_i_1_n_0 ),
        .CO({\divisor0_reg[16]_i_1_n_0 ,\divisor0_reg[16]_i_1_n_1 ,\divisor0_reg[16]_i_1_n_2 ,\divisor0_reg[16]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b1,1'b0,1'b0,1'b0}),
        .O(grp_fu_128_p1[16:13]),
        .S({\divisor0[16]_i_2_n_0 ,\divisor0[16]_i_3__0_n_0 ,\divisor0[16]_i_4__0_n_0 ,\divisor0[16]_i_5__0_n_0 }));
  FDRE \divisor0_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[17]),
        .Q(\divisor0_reg_n_0_[17] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[17]_i_1 
       (.CI(\divisor0_reg[16]_i_1_n_0 ),
        .CO(\NLW_divisor0_reg[17]_i_1_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_divisor0_reg[17]_i_1_O_UNCONNECTED [3:1],grp_fu_128_p1[17]}),
        .S({1'b0,1'b0,1'b0,1'b1}));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[4]_i_1 
       (.CI(1'b0),
        .CO({\divisor0_reg[4]_i_1_n_0 ,\divisor0_reg[4]_i_1_n_1 ,\divisor0_reg[4]_i_1_n_2 ,\divisor0_reg[4]_i_1_n_3 }),
        .CYINIT(\divisor0[4]_i_2_n_0 ),
        .DI({1'b0,\divisor0[4]_i_3_n_0 ,1'b0,1'b0}),
        .O(grp_fu_128_p1[4:1]),
        .S({\divisor0[4]_i_4_n_0 ,\divisor0_reg[16]_0 [3],\divisor0[4]_i_5_n_0 ,\divisor0[4]_i_6_n_0 }));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[8]_i_1 
       (.CI(\divisor0_reg[4]_i_1_n_0 ),
        .CO({\divisor0_reg[8]_i_1_n_0 ,\divisor0_reg[8]_i_1_n_1 ,\divisor0_reg[8]_i_1_n_2 ,\divisor0_reg[8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,\divisor0[8]_i_2_n_0 ,\divisor0[8]_i_3_n_0 ,\divisor0[8]_i_4_n_0 }),
        .O(grp_fu_128_p1[8:5]),
        .S({\divisor0[8]_i_5_n_0 ,\divisor0_reg[16]_0 [7:5]}));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_128_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_urem_1ns_18ns_18_5_seq_1_div_u fn1_urem_1ns_18ns_18_5_seq_1_div_u_0
       (.E(start0_reg_n_0),
        .Q({\divisor0_reg_n_0_[17] ,\divisor0_reg_n_0_[16] ,\divisor0_reg_n_0_[15] ,\divisor0_reg_n_0_[14] ,\divisor0_reg_n_0_[13] ,\divisor0_reg_n_0_[12] ,\divisor0_reg_n_0_[11] ,\divisor0_reg_n_0_[10] ,\divisor0_reg_n_0_[9] ,\divisor0_reg_n_0_[8] ,\divisor0_reg_n_0_[7] ,\divisor0_reg_n_0_[6] ,\divisor0_reg_n_0_[5] ,\divisor0_reg_n_0_[4] ,\divisor0_reg_n_0_[3] ,\divisor0_reg_n_0_[2] ,\divisor0_reg_n_0_[1] ,\divisor0_reg_n_0_[0] }),
        .ap_clk(ap_clk),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .\remd_tmp_reg[0]_0 (fn1_urem_1ns_18ns_18_5_seq_1_div_u_0_n_0));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(fn1_urem_1ns_18ns_18_5_seq_1_div_u_0_n_0),
        .Q(ap_return),
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

(* ORIG_REF_NAME = "fn1_urem_1ns_18ns_18_5_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_urem_1ns_18ns_18_5_seq_1_div_u
   (\remd_tmp_reg[0]_0 ,
    ap_clk,
    ap_return,
    ap_rst,
    E,
    Q);
  output \remd_tmp_reg[0]_0 ;
  input ap_clk;
  input [0:0]ap_return;
  input ap_rst;
  input [0:0]E;
  input [17:0]Q;

  wire [0:0]E;
  wire [17:0]Q;
  wire ap_clk;
  wire [0:0]ap_return;
  wire ap_rst;
  wire cal_tmp_carry__0_i_1_n_0;
  wire cal_tmp_carry__0_i_2_n_0;
  wire cal_tmp_carry__0_i_3_n_0;
  wire cal_tmp_carry__0_i_4_n_0;
  wire cal_tmp_carry__0_n_0;
  wire cal_tmp_carry__0_n_1;
  wire cal_tmp_carry__0_n_2;
  wire cal_tmp_carry__0_n_3;
  wire cal_tmp_carry__1_i_1_n_0;
  wire cal_tmp_carry__1_i_2_n_0;
  wire cal_tmp_carry__1_i_3_n_0;
  wire cal_tmp_carry__1_i_4_n_0;
  wire cal_tmp_carry__1_n_0;
  wire cal_tmp_carry__1_n_1;
  wire cal_tmp_carry__1_n_2;
  wire cal_tmp_carry__1_n_3;
  wire cal_tmp_carry__2_i_1_n_0;
  wire cal_tmp_carry__2_i_2_n_0;
  wire cal_tmp_carry__2_i_3_n_0;
  wire cal_tmp_carry__2_i_4_n_0;
  wire cal_tmp_carry__2_n_0;
  wire cal_tmp_carry__2_n_1;
  wire cal_tmp_carry__2_n_2;
  wire cal_tmp_carry__2_n_3;
  wire cal_tmp_carry__3_i_1_n_0;
  wire cal_tmp_carry__3_i_2_n_0;
  wire cal_tmp_carry__3_n_2;
  wire cal_tmp_carry__3_n_3;
  wire cal_tmp_carry__3_n_5;
  wire cal_tmp_carry_i_1_n_0;
  wire cal_tmp_carry_i_2_n_0;
  wire cal_tmp_carry_i_3_n_0;
  wire cal_tmp_carry_i_4_n_0;
  wire cal_tmp_carry_i_5__0_n_0;
  wire cal_tmp_carry_n_0;
  wire cal_tmp_carry_n_1;
  wire cal_tmp_carry_n_2;
  wire cal_tmp_carry_n_3;
  wire cal_tmp_carry_n_7;
  wire \dividend_tmp_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[10] ;
  wire \divisor0_reg_n_0_[11] ;
  wire \divisor0_reg_n_0_[12] ;
  wire \divisor0_reg_n_0_[13] ;
  wire \divisor0_reg_n_0_[14] ;
  wire \divisor0_reg_n_0_[15] ;
  wire \divisor0_reg_n_0_[16] ;
  wire \divisor0_reg_n_0_[17] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire \divisor0_reg_n_0_[9] ;
  wire \r_stage_reg_n_0_[0] ;
  wire \r_stage_reg_n_0_[1] ;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp_reg[0]_0 ;
  wire \remd_tmp_reg_n_0_[0] ;
  wire [3:1]NLW_cal_tmp_carry_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__0_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__1_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__2_O_UNCONNECTED;
  wire [3:2]NLW_cal_tmp_carry__3_CO_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,cal_tmp_carry_i_1_n_0,1'b0}),
        .O({NLW_cal_tmp_carry_O_UNCONNECTED[3:1],cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_2_n_0,cal_tmp_carry_i_3_n_0,cal_tmp_carry_i_4_n_0,cal_tmp_carry_i_5__0_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__0_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__0_i_1_n_0,cal_tmp_carry__0_i_2_n_0,cal_tmp_carry__0_i_3_n_0,cal_tmp_carry__0_i_4_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__0_i_1
       (.I0(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__0_i_2
       (.I0(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__0_i_3
       (.I0(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__0_i_4
       (.I0(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_4_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__1_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__1_i_1_n_0,cal_tmp_carry__1_i_2_n_0,cal_tmp_carry__1_i_3_n_0,cal_tmp_carry__1_i_4_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_1
       (.I0(\divisor0_reg_n_0_[11] ),
        .O(cal_tmp_carry__1_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_2
       (.I0(\divisor0_reg_n_0_[10] ),
        .O(cal_tmp_carry__1_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_3
       (.I0(\divisor0_reg_n_0_[9] ),
        .O(cal_tmp_carry__1_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_4
       (.I0(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_4_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__2_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__2_i_1_n_0,cal_tmp_carry__2_i_2_n_0,cal_tmp_carry__2_i_3_n_0,cal_tmp_carry__2_i_4_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_1
       (.I0(\divisor0_reg_n_0_[15] ),
        .O(cal_tmp_carry__2_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_2
       (.I0(\divisor0_reg_n_0_[14] ),
        .O(cal_tmp_carry__2_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_3
       (.I0(\divisor0_reg_n_0_[13] ),
        .O(cal_tmp_carry__2_i_3_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__2_i_4
       (.I0(\divisor0_reg_n_0_[12] ),
        .O(cal_tmp_carry__2_i_4_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({NLW_cal_tmp_carry__3_CO_UNCONNECTED[3:2],cal_tmp_carry__3_n_2,cal_tmp_carry__3_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__3_O_UNCONNECTED[3],cal_tmp_carry__3_n_5,NLW_cal_tmp_carry__3_O_UNCONNECTED[1:0]}),
        .S({1'b0,1'b1,cal_tmp_carry__3_i_1_n_0,cal_tmp_carry__3_i_2_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_1
       (.I0(\divisor0_reg_n_0_[17] ),
        .O(cal_tmp_carry__3_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_2
       (.I0(\divisor0_reg_n_0_[16] ),
        .O(cal_tmp_carry__3_i_2_n_0));
  LUT3 #(
    .INIT(8'h2F)) 
    cal_tmp_carry_i_1
       (.I0(\dividend_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry_i_2
       (.I0(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry_i_3
       (.I0(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_3_n_0));
  LUT4 #(
    .INIT(16'h758A)) 
    cal_tmp_carry_i_4
       (.I0(\divisor0_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[0] ),
        .I3(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_4_n_0));
  LUT3 #(
    .INIT(8'hD2)) 
    cal_tmp_carry_i_5__0
       (.I0(\dividend_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_5__0_n_0));
  FDRE \dividend_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(cal_tmp_carry__3_n_2),
        .Q(\dividend_tmp_reg_n_0_[0] ),
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
  FDRE \divisor0_reg[17] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[17]),
        .Q(\divisor0_reg_n_0_[17] ),
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
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  FDRE \r_stage_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\r_stage_reg_n_0_[1] ),
        .R(ap_rst));
  LUT3 #(
    .INIT(8'hB8)) 
    \remd[0]_i_1 
       (.I0(\remd_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[1] ),
        .I2(ap_return),
        .O(\remd_tmp_reg[0]_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[0]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(cal_tmp_carry__3_n_5),
        .I3(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1_n_0 ),
        .Q(\remd_tmp_reg_n_0_[0] ),
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
