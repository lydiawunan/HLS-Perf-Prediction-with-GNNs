// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Thu Apr 29 00:08:16 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/nanwu/GNN_DFG/bb/dfg_79/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.v
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
   (p_13_ce0,
    ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    ap_return,
    p,
    p_5,
    p_7,
    p_9,
    p_13_address0,
    p_13_q0);
  output p_13_ce0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [15:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p, LAYERED_METADATA undef" *) input [7:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_5 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_5, LAYERED_METADATA undef" *) input [63:0]p_5;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_7 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_7, LAYERED_METADATA undef" *) input [63:0]p_7;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_9 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_9, LAYERED_METADATA undef" *) input [63:0]p_9;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_13_address0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_13_address0, LAYERED_METADATA undef" *) output [1:0]p_13_address0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_13_q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_13_q0, LAYERED_METADATA undef" *) input [15:0]p_13_q0;

  wire \<const1> ;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire [15:0]ap_return;
  wire ap_rst;
  wire ap_start;
  wire [7:0]p;
  wire p_13_ce0;
  wire [63:0]p_5;
  wire [63:0]p_7;
  wire [63:0]p_9;
  wire [1:0]NLW_inst_p_13_address0_UNCONNECTED;

  assign p_13_address0[1] = \<const1> ;
  assign p_13_address0[0] = \<const1> ;
  VCC VCC
       (.P(\<const1> ));
  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000001" *) 
  (* ap_ST_fsm_state10 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000001000000000" *) 
  (* ap_ST_fsm_state11 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000010000000000" *) 
  (* ap_ST_fsm_state12 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000100000000000" *) 
  (* ap_ST_fsm_state13 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000001000000000000" *) 
  (* ap_ST_fsm_state14 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000010000000000000" *) 
  (* ap_ST_fsm_state15 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000100000000000000" *) 
  (* ap_ST_fsm_state16 = "85'b0000000000000000000000000000000000000000000000000000000000000000000001000000000000000" *) 
  (* ap_ST_fsm_state17 = "85'b0000000000000000000000000000000000000000000000000000000000000000000010000000000000000" *) 
  (* ap_ST_fsm_state18 = "85'b0000000000000000000000000000000000000000000000000000000000000000000100000000000000000" *) 
  (* ap_ST_fsm_state19 = "85'b0000000000000000000000000000000000000000000000000000000000000000001000000000000000000" *) 
  (* ap_ST_fsm_state2 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000010" *) 
  (* ap_ST_fsm_state20 = "85'b0000000000000000000000000000000000000000000000000000000000000000010000000000000000000" *) 
  (* ap_ST_fsm_state21 = "85'b0000000000000000000000000000000000000000000000000000000000000000100000000000000000000" *) 
  (* ap_ST_fsm_state22 = "85'b0000000000000000000000000000000000000000000000000000000000000001000000000000000000000" *) 
  (* ap_ST_fsm_state23 = "85'b0000000000000000000000000000000000000000000000000000000000000010000000000000000000000" *) 
  (* ap_ST_fsm_state24 = "85'b0000000000000000000000000000000000000000000000000000000000000100000000000000000000000" *) 
  (* ap_ST_fsm_state25 = "85'b0000000000000000000000000000000000000000000000000000000000001000000000000000000000000" *) 
  (* ap_ST_fsm_state26 = "85'b0000000000000000000000000000000000000000000000000000000000010000000000000000000000000" *) 
  (* ap_ST_fsm_state27 = "85'b0000000000000000000000000000000000000000000000000000000000100000000000000000000000000" *) 
  (* ap_ST_fsm_state28 = "85'b0000000000000000000000000000000000000000000000000000000001000000000000000000000000000" *) 
  (* ap_ST_fsm_state29 = "85'b0000000000000000000000000000000000000000000000000000000010000000000000000000000000000" *) 
  (* ap_ST_fsm_state3 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000100" *) 
  (* ap_ST_fsm_state30 = "85'b0000000000000000000000000000000000000000000000000000000100000000000000000000000000000" *) 
  (* ap_ST_fsm_state31 = "85'b0000000000000000000000000000000000000000000000000000001000000000000000000000000000000" *) 
  (* ap_ST_fsm_state32 = "85'b0000000000000000000000000000000000000000000000000000010000000000000000000000000000000" *) 
  (* ap_ST_fsm_state33 = "85'b0000000000000000000000000000000000000000000000000000100000000000000000000000000000000" *) 
  (* ap_ST_fsm_state34 = "85'b0000000000000000000000000000000000000000000000000001000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state35 = "85'b0000000000000000000000000000000000000000000000000010000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state36 = "85'b0000000000000000000000000000000000000000000000000100000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state37 = "85'b0000000000000000000000000000000000000000000000001000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state38 = "85'b0000000000000000000000000000000000000000000000010000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state39 = "85'b0000000000000000000000000000000000000000000000100000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state4 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000001000" *) 
  (* ap_ST_fsm_state40 = "85'b0000000000000000000000000000000000000000000001000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state41 = "85'b0000000000000000000000000000000000000000000010000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state42 = "85'b0000000000000000000000000000000000000000000100000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state43 = "85'b0000000000000000000000000000000000000000001000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state44 = "85'b0000000000000000000000000000000000000000010000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state45 = "85'b0000000000000000000000000000000000000000100000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state46 = "85'b0000000000000000000000000000000000000001000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state47 = "85'b0000000000000000000000000000000000000010000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state48 = "85'b0000000000000000000000000000000000000100000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state49 = "85'b0000000000000000000000000000000000001000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state5 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000010000" *) 
  (* ap_ST_fsm_state50 = "85'b0000000000000000000000000000000000010000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state51 = "85'b0000000000000000000000000000000000100000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state52 = "85'b0000000000000000000000000000000001000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state53 = "85'b0000000000000000000000000000000010000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state54 = "85'b0000000000000000000000000000000100000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state55 = "85'b0000000000000000000000000000001000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state56 = "85'b0000000000000000000000000000010000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state57 = "85'b0000000000000000000000000000100000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state58 = "85'b0000000000000000000000000001000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state59 = "85'b0000000000000000000000000010000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state6 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000100000" *) 
  (* ap_ST_fsm_state60 = "85'b0000000000000000000000000100000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state61 = "85'b0000000000000000000000001000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state62 = "85'b0000000000000000000000010000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state63 = "85'b0000000000000000000000100000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state64 = "85'b0000000000000000000001000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state65 = "85'b0000000000000000000010000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state66 = "85'b0000000000000000000100000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state67 = "85'b0000000000000000001000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state68 = "85'b0000000000000000010000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state69 = "85'b0000000000000000100000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state7 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000001000000" *) 
  (* ap_ST_fsm_state70 = "85'b0000000000000001000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state71 = "85'b0000000000000010000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state72 = "85'b0000000000000100000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state73 = "85'b0000000000001000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state74 = "85'b0000000000010000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state75 = "85'b0000000000100000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state76 = "85'b0000000001000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state77 = "85'b0000000010000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state78 = "85'b0000000100000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state79 = "85'b0000001000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state8 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000010000000" *) 
  (* ap_ST_fsm_state80 = "85'b0000010000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state81 = "85'b0000100000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state82 = "85'b0001000000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state83 = "85'b0010000000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state84 = "85'b0100000000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state85 = "85'b1000000000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state9 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000100000000" *) 
  bd_0_hls_inst_0_fn1 inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p(p),
        .p_13_address0(NLW_inst_p_13_address0_UNCONNECTED[1:0]),
        .p_13_ce0(p_13_ce0),
        .p_13_q0({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_5(p_5),
        .p_7({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,p_7[15:0]}),
        .p_9({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,p_9[15:0]}));
endmodule

(* ORIG_REF_NAME = "fn1" *) (* ap_ST_fsm_state1 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000001" *) (* ap_ST_fsm_state10 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000001000000000" *) 
(* ap_ST_fsm_state11 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000010000000000" *) (* ap_ST_fsm_state12 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000100000000000" *) (* ap_ST_fsm_state13 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000001000000000000" *) 
(* ap_ST_fsm_state14 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000010000000000000" *) (* ap_ST_fsm_state15 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000100000000000000" *) (* ap_ST_fsm_state16 = "85'b0000000000000000000000000000000000000000000000000000000000000000000001000000000000000" *) 
(* ap_ST_fsm_state17 = "85'b0000000000000000000000000000000000000000000000000000000000000000000010000000000000000" *) (* ap_ST_fsm_state18 = "85'b0000000000000000000000000000000000000000000000000000000000000000000100000000000000000" *) (* ap_ST_fsm_state19 = "85'b0000000000000000000000000000000000000000000000000000000000000000001000000000000000000" *) 
(* ap_ST_fsm_state2 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000010" *) (* ap_ST_fsm_state20 = "85'b0000000000000000000000000000000000000000000000000000000000000000010000000000000000000" *) (* ap_ST_fsm_state21 = "85'b0000000000000000000000000000000000000000000000000000000000000000100000000000000000000" *) 
(* ap_ST_fsm_state22 = "85'b0000000000000000000000000000000000000000000000000000000000000001000000000000000000000" *) (* ap_ST_fsm_state23 = "85'b0000000000000000000000000000000000000000000000000000000000000010000000000000000000000" *) (* ap_ST_fsm_state24 = "85'b0000000000000000000000000000000000000000000000000000000000000100000000000000000000000" *) 
(* ap_ST_fsm_state25 = "85'b0000000000000000000000000000000000000000000000000000000000001000000000000000000000000" *) (* ap_ST_fsm_state26 = "85'b0000000000000000000000000000000000000000000000000000000000010000000000000000000000000" *) (* ap_ST_fsm_state27 = "85'b0000000000000000000000000000000000000000000000000000000000100000000000000000000000000" *) 
(* ap_ST_fsm_state28 = "85'b0000000000000000000000000000000000000000000000000000000001000000000000000000000000000" *) (* ap_ST_fsm_state29 = "85'b0000000000000000000000000000000000000000000000000000000010000000000000000000000000000" *) (* ap_ST_fsm_state3 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000100" *) 
(* ap_ST_fsm_state30 = "85'b0000000000000000000000000000000000000000000000000000000100000000000000000000000000000" *) (* ap_ST_fsm_state31 = "85'b0000000000000000000000000000000000000000000000000000001000000000000000000000000000000" *) (* ap_ST_fsm_state32 = "85'b0000000000000000000000000000000000000000000000000000010000000000000000000000000000000" *) 
(* ap_ST_fsm_state33 = "85'b0000000000000000000000000000000000000000000000000000100000000000000000000000000000000" *) (* ap_ST_fsm_state34 = "85'b0000000000000000000000000000000000000000000000000001000000000000000000000000000000000" *) (* ap_ST_fsm_state35 = "85'b0000000000000000000000000000000000000000000000000010000000000000000000000000000000000" *) 
(* ap_ST_fsm_state36 = "85'b0000000000000000000000000000000000000000000000000100000000000000000000000000000000000" *) (* ap_ST_fsm_state37 = "85'b0000000000000000000000000000000000000000000000001000000000000000000000000000000000000" *) (* ap_ST_fsm_state38 = "85'b0000000000000000000000000000000000000000000000010000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state39 = "85'b0000000000000000000000000000000000000000000000100000000000000000000000000000000000000" *) (* ap_ST_fsm_state4 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000001000" *) (* ap_ST_fsm_state40 = "85'b0000000000000000000000000000000000000000000001000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state41 = "85'b0000000000000000000000000000000000000000000010000000000000000000000000000000000000000" *) (* ap_ST_fsm_state42 = "85'b0000000000000000000000000000000000000000000100000000000000000000000000000000000000000" *) (* ap_ST_fsm_state43 = "85'b0000000000000000000000000000000000000000001000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state44 = "85'b0000000000000000000000000000000000000000010000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state45 = "85'b0000000000000000000000000000000000000000100000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state46 = "85'b0000000000000000000000000000000000000001000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state47 = "85'b0000000000000000000000000000000000000010000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state48 = "85'b0000000000000000000000000000000000000100000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state49 = "85'b0000000000000000000000000000000000001000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state5 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000010000" *) (* ap_ST_fsm_state50 = "85'b0000000000000000000000000000000000010000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state51 = "85'b0000000000000000000000000000000000100000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state52 = "85'b0000000000000000000000000000000001000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state53 = "85'b0000000000000000000000000000000010000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state54 = "85'b0000000000000000000000000000000100000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state55 = "85'b0000000000000000000000000000001000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state56 = "85'b0000000000000000000000000000010000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state57 = "85'b0000000000000000000000000000100000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state58 = "85'b0000000000000000000000000001000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state59 = "85'b0000000000000000000000000010000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state6 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000000100000" *) 
(* ap_ST_fsm_state60 = "85'b0000000000000000000000000100000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state61 = "85'b0000000000000000000000001000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state62 = "85'b0000000000000000000000010000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state63 = "85'b0000000000000000000000100000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state64 = "85'b0000000000000000000001000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state65 = "85'b0000000000000000000010000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state66 = "85'b0000000000000000000100000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state67 = "85'b0000000000000000001000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state68 = "85'b0000000000000000010000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state69 = "85'b0000000000000000100000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state7 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000001000000" *) (* ap_ST_fsm_state70 = "85'b0000000000000001000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state71 = "85'b0000000000000010000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state72 = "85'b0000000000000100000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state73 = "85'b0000000000001000000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state74 = "85'b0000000000010000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state75 = "85'b0000000000100000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state76 = "85'b0000000001000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state77 = "85'b0000000010000000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state78 = "85'b0000000100000000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state79 = "85'b0000001000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state8 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000010000000" *) (* ap_ST_fsm_state80 = "85'b0000010000000000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state81 = "85'b0000100000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state82 = "85'b0001000000000000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state83 = "85'b0010000000000000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state84 = "85'b0100000000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state85 = "85'b1000000000000000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state9 = "85'b0000000000000000000000000000000000000000000000000000000000000000000000000000100000000" *) (* hls_module = "yes" *) 
module bd_0_hls_inst_0_fn1
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p,
    p_5,
    p_7,
    p_9,
    p_13_address0,
    p_13_ce0,
    p_13_q0,
    ap_return);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [7:0]p;
  input [63:0]p_5;
  input [63:0]p_7;
  input [63:0]p_9;
  output [1:0]p_13_address0;
  output p_13_ce0;
  input [15:0]p_13_q0;
  output [15:0]ap_return;

  wire \<const0> ;
  wire ad_carry__0_i_5_n_0;
  wire ad_carry__0_i_5_n_1;
  wire ad_carry__0_i_5_n_2;
  wire ad_carry__0_i_5_n_3;
  wire ad_carry__0_i_5_n_4;
  wire ad_carry__0_i_5_n_5;
  wire ad_carry__0_i_5_n_6;
  wire ad_carry__0_i_5_n_7;
  wire ad_carry__0_i_6_n_0;
  wire ad_carry__1_i_5_n_0;
  wire ad_carry__1_i_5_n_1;
  wire ad_carry__1_i_5_n_2;
  wire ad_carry__1_i_5_n_3;
  wire ad_carry__1_i_5_n_4;
  wire ad_carry__1_i_5_n_5;
  wire ad_carry__1_i_5_n_6;
  wire ad_carry__1_i_5_n_7;
  wire ad_carry__1_i_6_n_0;
  wire ad_carry__1_i_7_n_0;
  wire ad_carry__1_i_8_n_0;
  wire ad_carry__2_i_5_n_2;
  wire ad_carry__2_i_5_n_3;
  wire ad_carry__2_i_5_n_5;
  wire ad_carry__2_i_5_n_6;
  wire ad_carry__2_i_5_n_7;
  wire ad_carry__2_i_6_n_0;
  wire ad_carry__2_i_7_n_0;
  wire ad_carry_i_5_n_0;
  wire ad_carry_i_5_n_1;
  wire ad_carry_i_5_n_2;
  wire ad_carry_i_5_n_3;
  wire ad_carry_i_5_n_4;
  wire ad_carry_i_5_n_5;
  wire ad_carry_i_5_n_6;
  wire ad_carry_i_5_n_7;
  wire ad_carry_i_6_n_0;
  wire [8:0]add_ln19_1_fu_203_p2;
  wire [8:0]add_ln19_1_reg_302;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_0;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_1;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_10;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_11;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_12;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_13;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_14;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_15;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_2;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_3;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_4;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_5;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_6;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_7;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_8;
  wire ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_9;
  wire \ap_CS_fsm[1]_i_10_n_0 ;
  wire \ap_CS_fsm[1]_i_11_n_0 ;
  wire \ap_CS_fsm[1]_i_12_n_0 ;
  wire \ap_CS_fsm[1]_i_13_n_0 ;
  wire \ap_CS_fsm[1]_i_14_n_0 ;
  wire \ap_CS_fsm[1]_i_15_n_0 ;
  wire \ap_CS_fsm[1]_i_16_n_0 ;
  wire \ap_CS_fsm[1]_i_17_n_0 ;
  wire \ap_CS_fsm[1]_i_2_n_0 ;
  wire \ap_CS_fsm[1]_i_3_n_0 ;
  wire \ap_CS_fsm[1]_i_4_n_0 ;
  wire \ap_CS_fsm[1]_i_5_n_0 ;
  wire \ap_CS_fsm[1]_i_6_n_0 ;
  wire \ap_CS_fsm[1]_i_7_n_0 ;
  wire \ap_CS_fsm[1]_i_8_n_0 ;
  wire \ap_CS_fsm[1]_i_9_n_0 ;
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
  wire \ap_CS_fsm_reg_n_0_[20] ;
  wire \ap_CS_fsm_reg_n_0_[21] ;
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
  wire \ap_CS_fsm_reg_n_0_[41] ;
  wire \ap_CS_fsm_reg_n_0_[42] ;
  wire \ap_CS_fsm_reg_n_0_[43] ;
  wire \ap_CS_fsm_reg_n_0_[44] ;
  wire \ap_CS_fsm_reg_n_0_[45] ;
  wire \ap_CS_fsm_reg_n_0_[46] ;
  wire \ap_CS_fsm_reg_n_0_[47] ;
  wire \ap_CS_fsm_reg_n_0_[4] ;
  wire \ap_CS_fsm_reg_n_0_[51] ;
  wire \ap_CS_fsm_reg_n_0_[52] ;
  wire \ap_CS_fsm_reg_n_0_[53] ;
  wire \ap_CS_fsm_reg_n_0_[54] ;
  wire \ap_CS_fsm_reg_n_0_[55] ;
  wire \ap_CS_fsm_reg_n_0_[56] ;
  wire \ap_CS_fsm_reg_n_0_[57] ;
  wire \ap_CS_fsm_reg_n_0_[58] ;
  wire \ap_CS_fsm_reg_n_0_[59] ;
  wire \ap_CS_fsm_reg_n_0_[60] ;
  wire \ap_CS_fsm_reg_n_0_[61] ;
  wire \ap_CS_fsm_reg_n_0_[62] ;
  wire \ap_CS_fsm_reg_n_0_[63] ;
  wire \ap_CS_fsm_reg_n_0_[64] ;
  wire \ap_CS_fsm_reg_n_0_[65] ;
  wire \ap_CS_fsm_reg_n_0_[66] ;
  wire \ap_CS_fsm_reg_n_0_[68] ;
  wire \ap_CS_fsm_reg_n_0_[69] ;
  wire \ap_CS_fsm_reg_n_0_[6] ;
  wire \ap_CS_fsm_reg_n_0_[70] ;
  wire \ap_CS_fsm_reg_n_0_[72] ;
  wire \ap_CS_fsm_reg_n_0_[73] ;
  wire \ap_CS_fsm_reg_n_0_[74] ;
  wire \ap_CS_fsm_reg_n_0_[75] ;
  wire \ap_CS_fsm_reg_n_0_[76] ;
  wire \ap_CS_fsm_reg_n_0_[77] ;
  wire \ap_CS_fsm_reg_n_0_[78] ;
  wire \ap_CS_fsm_reg_n_0_[79] ;
  wire \ap_CS_fsm_reg_n_0_[7] ;
  wire \ap_CS_fsm_reg_n_0_[80] ;
  wire \ap_CS_fsm_reg_n_0_[81] ;
  wire \ap_CS_fsm_reg_n_0_[8] ;
  wire \ap_CS_fsm_reg_n_0_[9] ;
  wire ap_CS_fsm_state1;
  wire ap_CS_fsm_state50;
  wire ap_CS_fsm_state6;
  wire ap_CS_fsm_state68;
  wire ap_CS_fsm_state72;
  wire ap_CS_fsm_state83;
  wire ap_CS_fsm_state84;
  wire [1:0]ap_NS_fsm;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire [15:0]ap_return;
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
  wire \ap_return[12]_INST_0_i_1_n_0 ;
  wire \ap_return[12]_INST_0_i_2_n_0 ;
  wire \ap_return[12]_INST_0_i_3_n_0 ;
  wire \ap_return[12]_INST_0_i_4_n_0 ;
  wire \ap_return[12]_INST_0_n_1 ;
  wire \ap_return[12]_INST_0_n_2 ;
  wire \ap_return[12]_INST_0_n_3 ;
  wire \ap_return[4]_INST_0_i_1_n_0 ;
  wire \ap_return[4]_INST_0_i_2_n_0 ;
  wire \ap_return[4]_INST_0_i_3_n_0 ;
  wire \ap_return[4]_INST_0_i_4_n_0 ;
  wire \ap_return[4]_INST_0_i_5_n_0 ;
  wire \ap_return[4]_INST_0_i_6_n_0 ;
  wire \ap_return[4]_INST_0_i_7_n_0 ;
  wire \ap_return[4]_INST_0_i_8_n_0 ;
  wire \ap_return[4]_INST_0_n_0 ;
  wire \ap_return[4]_INST_0_n_1 ;
  wire \ap_return[4]_INST_0_n_2 ;
  wire \ap_return[4]_INST_0_n_3 ;
  wire \ap_return[8]_INST_0_i_1_n_0 ;
  wire \ap_return[8]_INST_0_i_2_n_0 ;
  wire \ap_return[8]_INST_0_i_3_n_0 ;
  wire \ap_return[8]_INST_0_i_4_n_0 ;
  wire \ap_return[8]_INST_0_i_5_n_0 ;
  wire \ap_return[8]_INST_0_n_0 ;
  wire \ap_return[8]_INST_0_n_1 ;
  wire \ap_return[8]_INST_0_n_2 ;
  wire \ap_return[8]_INST_0_n_3 ;
  wire ap_rst;
  wire ap_start;
  wire \icmp_ln15_reg_297_reg_n_0_[0] ;
  wire [7:0]p;
  wire [15:0]p_0_in;
  wire p_13_ce0;
  wire [63:0]p_5;
  wire [63:0]p_7;
  wire [63:0]p_9;
  wire [15:0]remd;
  wire [15:0]result_1_reg_282;
  wire srem_64ns_33ns_16_68_seq_1_U1_n_0;
  wire srem_64ns_33ns_16_68_seq_1_U1_n_1;
  wire [15:0]srem_ln16_reg_272;
  wire start;
  wire [15:0]trunc_ln3_reg_252;
  wire urem_29ns_30ns_28_33_seq_1_U3_n_0;
  wire [3:2]NLW_ad_carry__2_i_5_CO_UNCONNECTED;
  wire [3:3]NLW_ad_carry__2_i_5_O_UNCONNECTED;
  wire [3:3]\NLW_ap_return[12]_INST_0_CO_UNCONNECTED ;

  assign ap_ready = ap_done;
  assign p_13_address0[1] = \<const0> ;
  assign p_13_address0[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 ad_carry__0_i_5
       (.CI(ad_carry_i_5_n_0),
        .CO({ad_carry__0_i_5_n_0,ad_carry__0_i_5_n_1,ad_carry__0_i_5_n_2,ad_carry__0_i_5_n_3}),
        .CYINIT(1'b0),
        .DI({srem_ln16_reg_272[8],1'b0,1'b0,1'b0}),
        .O({ad_carry__0_i_5_n_4,ad_carry__0_i_5_n_5,ad_carry__0_i_5_n_6,ad_carry__0_i_5_n_7}),
        .S({ad_carry__0_i_6_n_0,srem_ln16_reg_272[7:5]}));
  LUT1 #(
    .INIT(2'h1)) 
    ad_carry__0_i_6
       (.I0(srem_ln16_reg_272[8]),
        .O(ad_carry__0_i_6_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 ad_carry__1_i_5
       (.CI(ad_carry__0_i_5_n_0),
        .CO({ad_carry__1_i_5_n_0,ad_carry__1_i_5_n_1,ad_carry__1_i_5_n_2,ad_carry__1_i_5_n_3}),
        .CYINIT(1'b0),
        .DI({srem_ln16_reg_272[12:11],1'b0,srem_ln16_reg_272[9]}),
        .O({ad_carry__1_i_5_n_4,ad_carry__1_i_5_n_5,ad_carry__1_i_5_n_6,ad_carry__1_i_5_n_7}),
        .S({ad_carry__1_i_6_n_0,ad_carry__1_i_7_n_0,srem_ln16_reg_272[10],ad_carry__1_i_8_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    ad_carry__1_i_6
       (.I0(srem_ln16_reg_272[12]),
        .O(ad_carry__1_i_6_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    ad_carry__1_i_7
       (.I0(srem_ln16_reg_272[11]),
        .O(ad_carry__1_i_7_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    ad_carry__1_i_8
       (.I0(srem_ln16_reg_272[9]),
        .O(ad_carry__1_i_8_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 ad_carry__2_i_5
       (.CI(ad_carry__1_i_5_n_0),
        .CO({NLW_ad_carry__2_i_5_CO_UNCONNECTED[3:2],ad_carry__2_i_5_n_2,ad_carry__2_i_5_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,srem_ln16_reg_272[13]}),
        .O({NLW_ad_carry__2_i_5_O_UNCONNECTED[3],ad_carry__2_i_5_n_5,ad_carry__2_i_5_n_6,ad_carry__2_i_5_n_7}),
        .S({1'b0,ad_carry__2_i_6_n_0,srem_ln16_reg_272[14],ad_carry__2_i_7_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    ad_carry__2_i_6
       (.I0(srem_ln16_reg_272[15]),
        .O(ad_carry__2_i_6_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    ad_carry__2_i_7
       (.I0(srem_ln16_reg_272[13]),
        .O(ad_carry__2_i_7_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 ad_carry_i_5
       (.CI(1'b0),
        .CO({ad_carry_i_5_n_0,ad_carry_i_5_n_1,ad_carry_i_5_n_2,ad_carry_i_5_n_3}),
        .CYINIT(srem_ln16_reg_272[0]),
        .DI({srem_ln16_reg_272[4],1'b0,1'b0,1'b0}),
        .O({ad_carry_i_5_n_4,ad_carry_i_5_n_5,ad_carry_i_5_n_6,ad_carry_i_5_n_7}),
        .S({ad_carry_i_6_n_0,srem_ln16_reg_272[3:1]}));
  LUT1 #(
    .INIT(2'h1)) 
    ad_carry_i_6
       (.I0(srem_ln16_reg_272[4]),
        .O(ad_carry_i_6_n_0));
  FDRE \add_ln19_1_reg_302_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state84),
        .D(add_ln19_1_fu_203_p2[0]),
        .Q(add_ln19_1_reg_302[0]),
        .R(1'b0));
  FDRE \add_ln19_1_reg_302_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state84),
        .D(add_ln19_1_fu_203_p2[1]),
        .Q(add_ln19_1_reg_302[1]),
        .R(1'b0));
  FDRE \add_ln19_1_reg_302_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state84),
        .D(add_ln19_1_fu_203_p2[2]),
        .Q(add_ln19_1_reg_302[2]),
        .R(1'b0));
  FDRE \add_ln19_1_reg_302_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state84),
        .D(add_ln19_1_fu_203_p2[3]),
        .Q(add_ln19_1_reg_302[3]),
        .R(1'b0));
  FDRE \add_ln19_1_reg_302_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state84),
        .D(add_ln19_1_fu_203_p2[4]),
        .Q(add_ln19_1_reg_302[4]),
        .R(1'b0));
  FDRE \add_ln19_1_reg_302_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state84),
        .D(add_ln19_1_fu_203_p2[5]),
        .Q(add_ln19_1_reg_302[5]),
        .R(1'b0));
  FDRE \add_ln19_1_reg_302_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state84),
        .D(add_ln19_1_fu_203_p2[6]),
        .Q(add_ln19_1_reg_302[6]),
        .R(1'b0));
  FDRE \add_ln19_1_reg_302_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state84),
        .D(add_ln19_1_fu_203_p2[7]),
        .Q(add_ln19_1_reg_302[7]),
        .R(1'b0));
  FDRE \add_ln19_1_reg_302_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state84),
        .D(add_ln19_1_fu_203_p2[8]),
        .Q(add_ln19_1_reg_302[8]),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_ama_addmuladd_16ns_16ns_16s_16ns_16_4_1 ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5
       (.D({ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_0,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_1,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_2,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_3,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_4,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_5,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_6,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_7,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_8,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_9,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_10,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_11,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_12,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_13,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_14,ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_15}),
        .O({ad_carry_i_5_n_4,ad_carry_i_5_n_5,ad_carry_i_5_n_6,ad_carry_i_5_n_7}),
        .Q(ap_CS_fsm_state1),
        .ap_clk(ap_clk),
        .p_5(p_5[15:0]),
        .p_7(p_7[15:0]),
        .p_9(p_9[15:0]),
        .p_reg_reg({ad_carry__0_i_5_n_4,ad_carry__0_i_5_n_5,ad_carry__0_i_5_n_6,ad_carry__0_i_5_n_7}),
        .p_reg_reg_0({ad_carry__1_i_5_n_4,ad_carry__1_i_5_n_5,ad_carry__1_i_5_n_6,ad_carry__1_i_5_n_7}),
        .p_reg_reg_1({ad_carry__2_i_5_n_5,ad_carry__2_i_5_n_6,ad_carry__2_i_5_n_7}),
        .p_reg_reg_2(srem_ln16_reg_272[0]));
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
  LUT3 #(
    .INIT(8'h74)) 
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
        .I4(\ap_CS_fsm[1]_i_6_n_0 ),
        .I5(\ap_CS_fsm[1]_i_7_n_0 ),
        .O(ap_NS_fsm[1]));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_10 
       (.I0(\ap_CS_fsm_reg_n_0_[9] ),
        .I1(\ap_CS_fsm_reg_n_0_[10] ),
        .I2(\ap_CS_fsm_reg_n_0_[7] ),
        .I3(\ap_CS_fsm_reg_n_0_[8] ),
        .I4(\ap_CS_fsm_reg_n_0_[12] ),
        .I5(\ap_CS_fsm_reg_n_0_[11] ),
        .O(\ap_CS_fsm[1]_i_10_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_11 
       (.I0(\ap_CS_fsm_reg_n_0_[3] ),
        .I1(\ap_CS_fsm_reg_n_0_[4] ),
        .I2(\ap_CS_fsm_reg_n_0_[1] ),
        .I3(\ap_CS_fsm_reg_n_0_[2] ),
        .I4(\ap_CS_fsm_reg_n_0_[6] ),
        .I5(ap_CS_fsm_state6),
        .O(\ap_CS_fsm[1]_i_11_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_12 
       (.I0(\ap_CS_fsm_reg_n_0_[45] ),
        .I1(\ap_CS_fsm_reg_n_0_[46] ),
        .I2(\ap_CS_fsm_reg_n_0_[43] ),
        .I3(\ap_CS_fsm_reg_n_0_[44] ),
        .I4(p_13_ce0),
        .I5(\ap_CS_fsm_reg_n_0_[47] ),
        .O(\ap_CS_fsm[1]_i_12_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_13 
       (.I0(\ap_CS_fsm_reg_n_0_[39] ),
        .I1(\ap_CS_fsm_reg_n_0_[40] ),
        .I2(\ap_CS_fsm_reg_n_0_[37] ),
        .I3(\ap_CS_fsm_reg_n_0_[38] ),
        .I4(\ap_CS_fsm_reg_n_0_[42] ),
        .I5(\ap_CS_fsm_reg_n_0_[41] ),
        .O(\ap_CS_fsm[1]_i_13_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_14 
       (.I0(\ap_CS_fsm_reg_n_0_[57] ),
        .I1(\ap_CS_fsm_reg_n_0_[58] ),
        .I2(\ap_CS_fsm_reg_n_0_[55] ),
        .I3(\ap_CS_fsm_reg_n_0_[56] ),
        .I4(\ap_CS_fsm_reg_n_0_[60] ),
        .I5(\ap_CS_fsm_reg_n_0_[59] ),
        .O(\ap_CS_fsm[1]_i_14_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_15 
       (.I0(\ap_CS_fsm_reg_n_0_[51] ),
        .I1(\ap_CS_fsm_reg_n_0_[52] ),
        .I2(ap_CS_fsm_state50),
        .I3(start),
        .I4(\ap_CS_fsm_reg_n_0_[54] ),
        .I5(\ap_CS_fsm_reg_n_0_[53] ),
        .O(\ap_CS_fsm[1]_i_15_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_16 
       (.I0(\ap_CS_fsm_reg_n_0_[27] ),
        .I1(\ap_CS_fsm_reg_n_0_[28] ),
        .I2(\ap_CS_fsm_reg_n_0_[25] ),
        .I3(\ap_CS_fsm_reg_n_0_[26] ),
        .I4(\ap_CS_fsm_reg_n_0_[30] ),
        .I5(\ap_CS_fsm_reg_n_0_[29] ),
        .O(\ap_CS_fsm[1]_i_16_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_17 
       (.I0(\ap_CS_fsm_reg_n_0_[33] ),
        .I1(\ap_CS_fsm_reg_n_0_[34] ),
        .I2(\ap_CS_fsm_reg_n_0_[31] ),
        .I3(\ap_CS_fsm_reg_n_0_[32] ),
        .I4(\ap_CS_fsm_reg_n_0_[36] ),
        .I5(\ap_CS_fsm_reg_n_0_[35] ),
        .O(\ap_CS_fsm[1]_i_17_n_0 ));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(\ap_CS_fsm[1]_i_8_n_0 ),
        .I1(\ap_CS_fsm[1]_i_9_n_0 ),
        .I2(\ap_CS_fsm[1]_i_10_n_0 ),
        .I3(\ap_CS_fsm[1]_i_11_n_0 ),
        .I4(ap_start),
        .I5(ap_CS_fsm_state1),
        .O(\ap_CS_fsm[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_3 
       (.I0(\ap_CS_fsm_reg_n_0_[69] ),
        .I1(\ap_CS_fsm_reg_n_0_[70] ),
        .I2(ap_CS_fsm_state68),
        .I3(\ap_CS_fsm_reg_n_0_[68] ),
        .I4(\ap_CS_fsm_reg_n_0_[72] ),
        .I5(ap_CS_fsm_state72),
        .O(\ap_CS_fsm[1]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_4 
       (.I0(\ap_CS_fsm_reg_n_0_[81] ),
        .I1(ap_CS_fsm_state83),
        .I2(\ap_CS_fsm_reg_n_0_[79] ),
        .I3(\ap_CS_fsm_reg_n_0_[80] ),
        .I4(ap_done),
        .I5(ap_CS_fsm_state84),
        .O(\ap_CS_fsm[1]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_5 
       (.I0(\ap_CS_fsm_reg_n_0_[63] ),
        .I1(\ap_CS_fsm_reg_n_0_[64] ),
        .I2(\ap_CS_fsm_reg_n_0_[61] ),
        .I3(\ap_CS_fsm_reg_n_0_[62] ),
        .I4(\ap_CS_fsm_reg_n_0_[66] ),
        .I5(\ap_CS_fsm_reg_n_0_[65] ),
        .O(\ap_CS_fsm[1]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_6 
       (.I0(\ap_CS_fsm_reg_n_0_[75] ),
        .I1(\ap_CS_fsm_reg_n_0_[76] ),
        .I2(\ap_CS_fsm_reg_n_0_[73] ),
        .I3(\ap_CS_fsm_reg_n_0_[74] ),
        .I4(\ap_CS_fsm_reg_n_0_[78] ),
        .I5(\ap_CS_fsm_reg_n_0_[77] ),
        .O(\ap_CS_fsm[1]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \ap_CS_fsm[1]_i_7 
       (.I0(\ap_CS_fsm[1]_i_12_n_0 ),
        .I1(\ap_CS_fsm[1]_i_13_n_0 ),
        .I2(\ap_CS_fsm[1]_i_14_n_0 ),
        .I3(\ap_CS_fsm[1]_i_15_n_0 ),
        .I4(\ap_CS_fsm[1]_i_16_n_0 ),
        .I5(\ap_CS_fsm[1]_i_17_n_0 ),
        .O(\ap_CS_fsm[1]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_8 
       (.I0(\ap_CS_fsm_reg_n_0_[21] ),
        .I1(\ap_CS_fsm_reg_n_0_[22] ),
        .I2(\ap_CS_fsm_reg_n_0_[19] ),
        .I3(\ap_CS_fsm_reg_n_0_[20] ),
        .I4(\ap_CS_fsm_reg_n_0_[24] ),
        .I5(\ap_CS_fsm_reg_n_0_[23] ),
        .O(\ap_CS_fsm[1]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_9 
       (.I0(\ap_CS_fsm_reg_n_0_[15] ),
        .I1(\ap_CS_fsm_reg_n_0_[16] ),
        .I2(\ap_CS_fsm_reg_n_0_[13] ),
        .I3(\ap_CS_fsm_reg_n_0_[14] ),
        .I4(\ap_CS_fsm_reg_n_0_[18] ),
        .I5(\ap_CS_fsm_reg_n_0_[17] ),
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
        .D(\ap_CS_fsm_reg_n_0_[1] ),
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
        .Q(\ap_CS_fsm_reg_n_0_[41] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[42] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[41] ),
        .Q(\ap_CS_fsm_reg_n_0_[42] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[43] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[42] ),
        .Q(\ap_CS_fsm_reg_n_0_[43] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[44] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[43] ),
        .Q(\ap_CS_fsm_reg_n_0_[44] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[45] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[44] ),
        .Q(\ap_CS_fsm_reg_n_0_[45] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[46] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[45] ),
        .Q(\ap_CS_fsm_reg_n_0_[46] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[47] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[46] ),
        .Q(\ap_CS_fsm_reg_n_0_[47] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[48] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[47] ),
        .Q(p_13_ce0),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[49] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_13_ce0),
        .Q(ap_CS_fsm_state50),
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
    \ap_CS_fsm_reg[50] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state50),
        .Q(start),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[51] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(start),
        .Q(\ap_CS_fsm_reg_n_0_[51] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[52] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[51] ),
        .Q(\ap_CS_fsm_reg_n_0_[52] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[53] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[52] ),
        .Q(\ap_CS_fsm_reg_n_0_[53] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[54] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[53] ),
        .Q(\ap_CS_fsm_reg_n_0_[54] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[55] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[54] ),
        .Q(\ap_CS_fsm_reg_n_0_[55] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[56] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[55] ),
        .Q(\ap_CS_fsm_reg_n_0_[56] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[57] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[56] ),
        .Q(\ap_CS_fsm_reg_n_0_[57] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[58] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[57] ),
        .Q(\ap_CS_fsm_reg_n_0_[58] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[59] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[58] ),
        .Q(\ap_CS_fsm_reg_n_0_[59] ),
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
    \ap_CS_fsm_reg[60] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[59] ),
        .Q(\ap_CS_fsm_reg_n_0_[60] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[61] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[60] ),
        .Q(\ap_CS_fsm_reg_n_0_[61] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[62] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[61] ),
        .Q(\ap_CS_fsm_reg_n_0_[62] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[63] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[62] ),
        .Q(\ap_CS_fsm_reg_n_0_[63] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[64] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[63] ),
        .Q(\ap_CS_fsm_reg_n_0_[64] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[65] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[64] ),
        .Q(\ap_CS_fsm_reg_n_0_[65] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[66] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[65] ),
        .Q(\ap_CS_fsm_reg_n_0_[66] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[67] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[66] ),
        .Q(ap_CS_fsm_state68),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[68] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state68),
        .Q(\ap_CS_fsm_reg_n_0_[68] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[69] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[68] ),
        .Q(\ap_CS_fsm_reg_n_0_[69] ),
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
    \ap_CS_fsm_reg[70] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[69] ),
        .Q(\ap_CS_fsm_reg_n_0_[70] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[71] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[70] ),
        .Q(ap_CS_fsm_state72),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[72] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state72),
        .Q(\ap_CS_fsm_reg_n_0_[72] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[73] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[72] ),
        .Q(\ap_CS_fsm_reg_n_0_[73] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[74] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[73] ),
        .Q(\ap_CS_fsm_reg_n_0_[74] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[75] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[74] ),
        .Q(\ap_CS_fsm_reg_n_0_[75] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[76] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[75] ),
        .Q(\ap_CS_fsm_reg_n_0_[76] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[77] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[76] ),
        .Q(\ap_CS_fsm_reg_n_0_[77] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[78] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[77] ),
        .Q(\ap_CS_fsm_reg_n_0_[78] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[79] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[78] ),
        .Q(\ap_CS_fsm_reg_n_0_[79] ),
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
    \ap_CS_fsm_reg[80] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[79] ),
        .Q(\ap_CS_fsm_reg_n_0_[80] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[81] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[80] ),
        .Q(\ap_CS_fsm_reg_n_0_[81] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[82] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[81] ),
        .Q(ap_CS_fsm_state83),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[83] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state83),
        .Q(ap_CS_fsm_state84),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[84] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state84),
        .Q(ap_done),
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
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
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
        .DI({\ap_return[0]_INST_0_i_1_n_0 ,\ap_return[0]_INST_0_i_2_n_0 ,trunc_ln3_reg_252[1],\ap_return[0]_INST_0_i_3_n_0 }),
        .O(ap_return[3:0]),
        .S({\ap_return[0]_INST_0_i_4_n_0 ,\ap_return[0]_INST_0_i_5_n_0 ,\ap_return[0]_INST_0_i_6_n_0 ,\ap_return[0]_INST_0_i_7_n_0 }));
  LUT2 #(
    .INIT(4'h1)) 
    \ap_return[0]_INST_0_i_1 
       (.I0(trunc_ln3_reg_252[2]),
        .I1(add_ln19_1_reg_302[2]),
        .O(\ap_return[0]_INST_0_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[0]_INST_0_i_2 
       (.I0(trunc_ln3_reg_252[1]),
        .O(\ap_return[0]_INST_0_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[0]_INST_0_i_3 
       (.I0(add_ln19_1_reg_302[0]),
        .O(\ap_return[0]_INST_0_i_3_n_0 ));
  LUT4 #(
    .INIT(16'h1EE1)) 
    \ap_return[0]_INST_0_i_4 
       (.I0(add_ln19_1_reg_302[2]),
        .I1(trunc_ln3_reg_252[2]),
        .I2(trunc_ln3_reg_252[3]),
        .I3(add_ln19_1_reg_302[3]),
        .O(\ap_return[0]_INST_0_i_4_n_0 ));
  LUT3 #(
    .INIT(8'h69)) 
    \ap_return[0]_INST_0_i_5 
       (.I0(trunc_ln3_reg_252[1]),
        .I1(trunc_ln3_reg_252[2]),
        .I2(add_ln19_1_reg_302[2]),
        .O(\ap_return[0]_INST_0_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \ap_return[0]_INST_0_i_6 
       (.I0(trunc_ln3_reg_252[1]),
        .I1(add_ln19_1_reg_302[1]),
        .O(\ap_return[0]_INST_0_i_6_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \ap_return[0]_INST_0_i_7 
       (.I0(add_ln19_1_reg_302[0]),
        .I1(trunc_ln3_reg_252[0]),
        .O(\ap_return[0]_INST_0_i_7_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[12]_INST_0 
       (.CI(\ap_return[8]_INST_0_n_0 ),
        .CO({\NLW_ap_return[12]_INST_0_CO_UNCONNECTED [3],\ap_return[12]_INST_0_n_1 ,\ap_return[12]_INST_0_n_2 ,\ap_return[12]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,trunc_ln3_reg_252[14:12]}),
        .O(ap_return[15:12]),
        .S({\ap_return[12]_INST_0_i_1_n_0 ,\ap_return[12]_INST_0_i_2_n_0 ,\ap_return[12]_INST_0_i_3_n_0 ,\ap_return[12]_INST_0_i_4_n_0 }));
  LUT2 #(
    .INIT(4'h9)) 
    \ap_return[12]_INST_0_i_1 
       (.I0(trunc_ln3_reg_252[14]),
        .I1(trunc_ln3_reg_252[15]),
        .O(\ap_return[12]_INST_0_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \ap_return[12]_INST_0_i_2 
       (.I0(trunc_ln3_reg_252[13]),
        .I1(trunc_ln3_reg_252[14]),
        .O(\ap_return[12]_INST_0_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \ap_return[12]_INST_0_i_3 
       (.I0(trunc_ln3_reg_252[12]),
        .I1(trunc_ln3_reg_252[13]),
        .O(\ap_return[12]_INST_0_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \ap_return[12]_INST_0_i_4 
       (.I0(trunc_ln3_reg_252[11]),
        .I1(trunc_ln3_reg_252[12]),
        .O(\ap_return[12]_INST_0_i_4_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[4]_INST_0 
       (.CI(\ap_return[0]_INST_0_n_0 ),
        .CO({\ap_return[4]_INST_0_n_0 ,\ap_return[4]_INST_0_n_1 ,\ap_return[4]_INST_0_n_2 ,\ap_return[4]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\ap_return[4]_INST_0_i_1_n_0 ,\ap_return[4]_INST_0_i_2_n_0 ,\ap_return[4]_INST_0_i_3_n_0 ,\ap_return[4]_INST_0_i_4_n_0 }),
        .O(ap_return[7:4]),
        .S({\ap_return[4]_INST_0_i_5_n_0 ,\ap_return[4]_INST_0_i_6_n_0 ,\ap_return[4]_INST_0_i_7_n_0 ,\ap_return[4]_INST_0_i_8_n_0 }));
  LUT2 #(
    .INIT(4'h1)) 
    \ap_return[4]_INST_0_i_1 
       (.I0(trunc_ln3_reg_252[6]),
        .I1(add_ln19_1_reg_302[6]),
        .O(\ap_return[4]_INST_0_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h1)) 
    \ap_return[4]_INST_0_i_2 
       (.I0(trunc_ln3_reg_252[5]),
        .I1(add_ln19_1_reg_302[5]),
        .O(\ap_return[4]_INST_0_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h1)) 
    \ap_return[4]_INST_0_i_3 
       (.I0(trunc_ln3_reg_252[4]),
        .I1(add_ln19_1_reg_302[4]),
        .O(\ap_return[4]_INST_0_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h1)) 
    \ap_return[4]_INST_0_i_4 
       (.I0(trunc_ln3_reg_252[3]),
        .I1(add_ln19_1_reg_302[3]),
        .O(\ap_return[4]_INST_0_i_4_n_0 ));
  LUT4 #(
    .INIT(16'h1EE1)) 
    \ap_return[4]_INST_0_i_5 
       (.I0(add_ln19_1_reg_302[6]),
        .I1(trunc_ln3_reg_252[6]),
        .I2(trunc_ln3_reg_252[7]),
        .I3(add_ln19_1_reg_302[7]),
        .O(\ap_return[4]_INST_0_i_5_n_0 ));
  LUT4 #(
    .INIT(16'h1EE1)) 
    \ap_return[4]_INST_0_i_6 
       (.I0(add_ln19_1_reg_302[5]),
        .I1(trunc_ln3_reg_252[5]),
        .I2(trunc_ln3_reg_252[6]),
        .I3(add_ln19_1_reg_302[6]),
        .O(\ap_return[4]_INST_0_i_6_n_0 ));
  LUT4 #(
    .INIT(16'h1EE1)) 
    \ap_return[4]_INST_0_i_7 
       (.I0(add_ln19_1_reg_302[4]),
        .I1(trunc_ln3_reg_252[4]),
        .I2(trunc_ln3_reg_252[5]),
        .I3(add_ln19_1_reg_302[5]),
        .O(\ap_return[4]_INST_0_i_7_n_0 ));
  LUT4 #(
    .INIT(16'h1EE1)) 
    \ap_return[4]_INST_0_i_8 
       (.I0(add_ln19_1_reg_302[3]),
        .I1(trunc_ln3_reg_252[3]),
        .I2(trunc_ln3_reg_252[4]),
        .I3(add_ln19_1_reg_302[4]),
        .O(\ap_return[4]_INST_0_i_8_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \ap_return[8]_INST_0 
       (.CI(\ap_return[4]_INST_0_n_0 ),
        .CO({\ap_return[8]_INST_0_n_0 ,\ap_return[8]_INST_0_n_1 ,\ap_return[8]_INST_0_n_2 ,\ap_return[8]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({trunc_ln3_reg_252[11:9],\ap_return[8]_INST_0_i_1_n_0 }),
        .O(ap_return[11:8]),
        .S({\ap_return[8]_INST_0_i_2_n_0 ,\ap_return[8]_INST_0_i_3_n_0 ,\ap_return[8]_INST_0_i_4_n_0 ,\ap_return[8]_INST_0_i_5_n_0 }));
  LUT2 #(
    .INIT(4'h1)) 
    \ap_return[8]_INST_0_i_1 
       (.I0(trunc_ln3_reg_252[7]),
        .I1(add_ln19_1_reg_302[7]),
        .O(\ap_return[8]_INST_0_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \ap_return[8]_INST_0_i_2 
       (.I0(trunc_ln3_reg_252[10]),
        .I1(trunc_ln3_reg_252[11]),
        .O(\ap_return[8]_INST_0_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \ap_return[8]_INST_0_i_3 
       (.I0(trunc_ln3_reg_252[9]),
        .I1(trunc_ln3_reg_252[10]),
        .O(\ap_return[8]_INST_0_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hE1)) 
    \ap_return[8]_INST_0_i_4 
       (.I0(add_ln19_1_reg_302[8]),
        .I1(trunc_ln3_reg_252[8]),
        .I2(trunc_ln3_reg_252[9]),
        .O(\ap_return[8]_INST_0_i_4_n_0 ));
  LUT4 #(
    .INIT(16'h1EE1)) 
    \ap_return[8]_INST_0_i_5 
       (.I0(add_ln19_1_reg_302[7]),
        .I1(trunc_ln3_reg_252[7]),
        .I2(trunc_ln3_reg_252[8]),
        .I3(add_ln19_1_reg_302[8]),
        .O(\ap_return[8]_INST_0_i_5_n_0 ));
  FDRE \icmp_ln15_reg_297_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(urem_29ns_30ns_28_33_seq_1_U3_n_0),
        .Q(\icmp_ln15_reg_297_reg_n_0_[0] ),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_mul_64ns_66ns_112_5_1 mul_64ns_66ns_112_5_1_U2
       (.Q(ap_CS_fsm_state1),
        .ap_clk(ap_clk),
        .\buff2_reg[111] (p_0_in),
        .p_5(p_5));
  FDRE \result_1_reg_282_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_15),
        .Q(result_1_reg_282[0]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_5),
        .Q(result_1_reg_282[10]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_4),
        .Q(result_1_reg_282[11]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_3),
        .Q(result_1_reg_282[12]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_2),
        .Q(result_1_reg_282[13]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_1),
        .Q(result_1_reg_282[14]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_0),
        .Q(result_1_reg_282[15]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_14),
        .Q(result_1_reg_282[1]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_13),
        .Q(result_1_reg_282[2]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_12),
        .Q(result_1_reg_282[3]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_11),
        .Q(result_1_reg_282[4]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_10),
        .Q(result_1_reg_282[5]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_9),
        .Q(result_1_reg_282[6]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_8),
        .Q(result_1_reg_282[7]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_7),
        .Q(result_1_reg_282[8]),
        .R(1'b0));
  FDRE \result_1_reg_282_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state72),
        .D(ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_U5_n_6),
        .Q(result_1_reg_282[9]),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_srem_64ns_33ns_16_68_seq_1 srem_64ns_33ns_16_68_seq_1_U1
       (.Q(ap_CS_fsm_state1),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p_5(p_5),
        .r_stage_reg_r_26(srem_64ns_33ns_16_68_seq_1_U1_n_1),
        .r_stage_reg_r_5(srem_64ns_33ns_16_68_seq_1_U1_n_0),
        .\remd_reg[15] (remd));
  FDRE \srem_ln16_reg_272_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[0]),
        .Q(srem_ln16_reg_272[0]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[10]),
        .Q(srem_ln16_reg_272[10]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[11]),
        .Q(srem_ln16_reg_272[11]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[12]),
        .Q(srem_ln16_reg_272[12]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[13]),
        .Q(srem_ln16_reg_272[13]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[14]),
        .Q(srem_ln16_reg_272[14]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[15]),
        .Q(srem_ln16_reg_272[15]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[1]),
        .Q(srem_ln16_reg_272[1]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[2]),
        .Q(srem_ln16_reg_272[2]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[3]),
        .Q(srem_ln16_reg_272[3]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[4]),
        .Q(srem_ln16_reg_272[4]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[5]),
        .Q(srem_ln16_reg_272[5]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[6]),
        .Q(srem_ln16_reg_272[6]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[7]),
        .Q(srem_ln16_reg_272[7]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[8]),
        .Q(srem_ln16_reg_272[8]),
        .R(1'b0));
  FDRE \srem_ln16_reg_272_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state68),
        .D(remd[9]),
        .Q(srem_ln16_reg_272[9]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[0]),
        .Q(trunc_ln3_reg_252[0]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[10] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[10]),
        .Q(trunc_ln3_reg_252[10]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[11] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[11]),
        .Q(trunc_ln3_reg_252[11]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[12] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[12]),
        .Q(trunc_ln3_reg_252[12]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[13] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[13]),
        .Q(trunc_ln3_reg_252[13]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[14] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[14]),
        .Q(trunc_ln3_reg_252[14]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[15] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[15]),
        .Q(trunc_ln3_reg_252[15]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[1]),
        .Q(trunc_ln3_reg_252[1]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[2]),
        .Q(trunc_ln3_reg_252[2]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[3]),
        .Q(trunc_ln3_reg_252[3]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[4] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[4]),
        .Q(trunc_ln3_reg_252[4]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[5] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[5]),
        .Q(trunc_ln3_reg_252[5]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[6] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[6]),
        .Q(trunc_ln3_reg_252[6]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[7] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[7]),
        .Q(trunc_ln3_reg_252[7]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[8] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[8]),
        .Q(trunc_ln3_reg_252[8]),
        .R(1'b0));
  FDRE \trunc_ln3_reg_252_reg[9] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state6),
        .D(p_0_in[9]),
        .Q(trunc_ln3_reg_252[9]),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_urem_29ns_30ns_28_33_seq_1 urem_29ns_30ns_28_33_seq_1_U3
       (.Q({ap_CS_fsm_state83,start}),
        .\ap_CS_fsm_reg[82] (urem_29ns_30ns_28_33_seq_1_U3_n_0),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\icmp_ln15_reg_297_reg[0] (\icmp_ln15_reg_297_reg_n_0_[0] ),
        .\r_stage_reg[29] (srem_64ns_33ns_16_68_seq_1_U1_n_1));
  bd_0_hls_inst_0_fn1_urem_8ns_17ns_9_12_seq_1 urem_8ns_17ns_9_12_seq_1_U4
       (.D(add_ln19_1_fu_203_p2),
        .Q(\ap_CS_fsm_reg_n_0_[72] ),
        .\add_ln19_1_reg_302_reg[1] (\icmp_ln15_reg_297_reg_n_0_[0] ),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\divisor0_reg[15] (result_1_reg_282),
        .p(p),
        .\r_stage_reg[8] (srem_64ns_33ns_16_68_seq_1_U1_n_0));
endmodule

(* ORIG_REF_NAME = "fn1_ama_addmuladd_16ns_16ns_16s_16ns_16_4_1" *) 
module bd_0_hls_inst_0_fn1_ama_addmuladd_16ns_16ns_16s_16ns_16_4_1
   (D,
    Q,
    ap_clk,
    p_9,
    p_5,
    p_7,
    O,
    p_reg_reg,
    p_reg_reg_0,
    p_reg_reg_1,
    p_reg_reg_2);
  output [15:0]D;
  input [0:0]Q;
  input ap_clk;
  input [15:0]p_9;
  input [15:0]p_5;
  input [15:0]p_7;
  input [3:0]O;
  input [3:0]p_reg_reg;
  input [3:0]p_reg_reg_0;
  input [2:0]p_reg_reg_1;
  input [0:0]p_reg_reg_2;

  wire [15:0]D;
  wire [3:0]O;
  wire [0:0]Q;
  wire ap_clk;
  wire [15:0]p_5;
  wire [15:0]p_7;
  wire [15:0]p_9;
  wire [3:0]p_reg_reg;
  wire [3:0]p_reg_reg_0;
  wire [2:0]p_reg_reg_1;
  wire [0:0]p_reg_reg_2;

  bd_0_hls_inst_0_fn1_ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_DSP48_0 fn1_ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_DSP48_0_U
       (.D(D),
        .O(O),
        .Q(Q),
        .ap_clk(ap_clk),
        .p_5(p_5),
        .p_7(p_7),
        .p_9(p_9),
        .p_reg_reg_0(p_reg_reg),
        .p_reg_reg_1(p_reg_reg_0),
        .p_reg_reg_2(p_reg_reg_1),
        .p_reg_reg_3(p_reg_reg_2));
endmodule

(* ORIG_REF_NAME = "fn1_ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_DSP48_0" *) 
module bd_0_hls_inst_0_fn1_ama_addmuladd_16ns_16ns_16s_16ns_16_4_1_DSP48_0
   (D,
    Q,
    ap_clk,
    p_9,
    p_5,
    p_7,
    O,
    p_reg_reg_0,
    p_reg_reg_1,
    p_reg_reg_2,
    p_reg_reg_3);
  output [15:0]D;
  input [0:0]Q;
  input ap_clk;
  input [15:0]p_9;
  input [15:0]p_5;
  input [15:0]p_7;
  input [3:0]O;
  input [3:0]p_reg_reg_0;
  input [3:0]p_reg_reg_1;
  input [2:0]p_reg_reg_2;
  input [0:0]p_reg_reg_3;

  wire [15:0]D;
  wire [3:0]O;
  wire [0:0]Q;
  wire [15:0]ad;
  wire ad_carry__0_i_1_n_0;
  wire ad_carry__0_i_2_n_0;
  wire ad_carry__0_i_3_n_0;
  wire ad_carry__0_i_4_n_0;
  wire ad_carry__0_n_0;
  wire ad_carry__0_n_1;
  wire ad_carry__0_n_2;
  wire ad_carry__0_n_3;
  wire ad_carry__1_i_1_n_0;
  wire ad_carry__1_i_2_n_0;
  wire ad_carry__1_i_3_n_0;
  wire ad_carry__1_i_4_n_0;
  wire ad_carry__1_n_0;
  wire ad_carry__1_n_1;
  wire ad_carry__1_n_2;
  wire ad_carry__1_n_3;
  wire ad_carry__2_i_1_n_0;
  wire ad_carry__2_i_2_n_0;
  wire ad_carry__2_i_3_n_0;
  wire ad_carry__2_i_4_n_0;
  wire ad_carry__2_n_1;
  wire ad_carry__2_n_2;
  wire ad_carry__2_n_3;
  wire ad_carry_i_1_n_0;
  wire ad_carry_i_2_n_0;
  wire ad_carry_i_3_n_0;
  wire ad_carry_i_4_n_0;
  wire ad_carry_n_0;
  wire ad_carry_n_1;
  wire ad_carry_n_2;
  wire ad_carry_n_3;
  wire ap_clk;
  wire [15:0]p_5;
  wire [15:0]p_7;
  wire [15:0]p_9;
  wire [3:0]p_reg_reg_0;
  wire [3:0]p_reg_reg_1;
  wire [2:0]p_reg_reg_2;
  wire [0:0]p_reg_reg_3;
  wire [3:3]NLW_ad_carry__2_CO_UNCONNECTED;
  wire NLW_p_reg_reg_CARRYCASCOUT_UNCONNECTED;
  wire NLW_p_reg_reg_MULTSIGNOUT_UNCONNECTED;
  wire NLW_p_reg_reg_OVERFLOW_UNCONNECTED;
  wire NLW_p_reg_reg_PATTERNBDETECT_UNCONNECTED;
  wire NLW_p_reg_reg_PATTERNDETECT_UNCONNECTED;
  wire NLW_p_reg_reg_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_p_reg_reg_ACOUT_UNCONNECTED;
  wire [17:0]NLW_p_reg_reg_BCOUT_UNCONNECTED;
  wire [3:0]NLW_p_reg_reg_CARRYOUT_UNCONNECTED;
  wire [47:16]NLW_p_reg_reg_P_UNCONNECTED;
  wire [47:0]NLW_p_reg_reg_PCOUT_UNCONNECTED;

  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 ad_carry
       (.CI(1'b0),
        .CO({ad_carry_n_0,ad_carry_n_1,ad_carry_n_2,ad_carry_n_3}),
        .CYINIT(1'b0),
        .DI(p_7[3:0]),
        .O(ad[3:0]),
        .S({ad_carry_i_1_n_0,ad_carry_i_2_n_0,ad_carry_i_3_n_0,ad_carry_i_4_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 ad_carry__0
       (.CI(ad_carry_n_0),
        .CO({ad_carry__0_n_0,ad_carry__0_n_1,ad_carry__0_n_2,ad_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI(p_7[7:4]),
        .O(ad[7:4]),
        .S({ad_carry__0_i_1_n_0,ad_carry__0_i_2_n_0,ad_carry__0_i_3_n_0,ad_carry__0_i_4_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__0_i_1
       (.I0(p_7[7]),
        .I1(p_reg_reg_0[2]),
        .O(ad_carry__0_i_1_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__0_i_2
       (.I0(p_7[6]),
        .I1(p_reg_reg_0[1]),
        .O(ad_carry__0_i_2_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__0_i_3
       (.I0(p_7[5]),
        .I1(p_reg_reg_0[0]),
        .O(ad_carry__0_i_3_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__0_i_4
       (.I0(p_7[4]),
        .I1(O[3]),
        .O(ad_carry__0_i_4_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 ad_carry__1
       (.CI(ad_carry__0_n_0),
        .CO({ad_carry__1_n_0,ad_carry__1_n_1,ad_carry__1_n_2,ad_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI(p_7[11:8]),
        .O(ad[11:8]),
        .S({ad_carry__1_i_1_n_0,ad_carry__1_i_2_n_0,ad_carry__1_i_3_n_0,ad_carry__1_i_4_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__1_i_1
       (.I0(p_7[11]),
        .I1(p_reg_reg_1[2]),
        .O(ad_carry__1_i_1_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__1_i_2
       (.I0(p_7[10]),
        .I1(p_reg_reg_1[1]),
        .O(ad_carry__1_i_2_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__1_i_3
       (.I0(p_7[9]),
        .I1(p_reg_reg_1[0]),
        .O(ad_carry__1_i_3_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__1_i_4
       (.I0(p_7[8]),
        .I1(p_reg_reg_0[3]),
        .O(ad_carry__1_i_4_n_0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 ad_carry__2
       (.CI(ad_carry__1_n_0),
        .CO({NLW_ad_carry__2_CO_UNCONNECTED[3],ad_carry__2_n_1,ad_carry__2_n_2,ad_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,p_7[14:12]}),
        .O(ad[15:12]),
        .S({ad_carry__2_i_1_n_0,ad_carry__2_i_2_n_0,ad_carry__2_i_3_n_0,ad_carry__2_i_4_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__2_i_1
       (.I0(p_7[15]),
        .I1(p_reg_reg_2[2]),
        .O(ad_carry__2_i_1_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__2_i_2
       (.I0(p_7[14]),
        .I1(p_reg_reg_2[1]),
        .O(ad_carry__2_i_2_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__2_i_3
       (.I0(p_7[13]),
        .I1(p_reg_reg_2[0]),
        .O(ad_carry__2_i_3_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry__2_i_4
       (.I0(p_7[12]),
        .I1(p_reg_reg_1[3]),
        .O(ad_carry__2_i_4_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry_i_1
       (.I0(p_7[3]),
        .I1(O[2]),
        .O(ad_carry_i_1_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry_i_2
       (.I0(p_7[2]),
        .I1(O[1]),
        .O(ad_carry_i_2_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    ad_carry_i_3
       (.I0(p_7[1]),
        .I1(O[0]),
        .O(ad_carry_i_3_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    ad_carry_i_4
       (.I0(p_7[0]),
        .I1(p_reg_reg_3),
        .O(ad_carry_i_4_n_0));
  DSP48E1 #(
    .ACASCREG(1),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(1),
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
    p_reg_reg
       (.A({ad[15],ad[15],ad[15],ad[15],ad[15],ad[15],ad[15],ad[15],ad[15],ad[15],ad[15],ad[15],ad[15],ad[15],ad}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_p_reg_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({p_9[15],p_9[15],p_9}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_p_reg_reg_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,p_5}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_p_reg_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_p_reg_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b1),
        .CEC(Q),
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
        .MULTSIGNOUT(NLW_p_reg_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_p_reg_reg_OVERFLOW_UNCONNECTED),
        .P({NLW_p_reg_reg_P_UNCONNECTED[47:16],D}),
        .PATTERNBDETECT(NLW_p_reg_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_p_reg_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_p_reg_reg_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_p_reg_reg_UNDERFLOW_UNCONNECTED));
endmodule

(* ORIG_REF_NAME = "fn1_mul_64ns_66ns_112_5_1" *) 
module bd_0_hls_inst_0_fn1_mul_64ns_66ns_112_5_1
   (\buff2_reg[111] ,
    Q,
    ap_clk,
    p_5);
  output [15:0]\buff2_reg[111] ;
  input [0:0]Q;
  input ap_clk;
  input [63:0]p_5;

  wire [0:0]Q;
  wire ap_clk;
  wire [15:0]\buff2_reg[111] ;
  wire [63:0]p_5;

  bd_0_hls_inst_0_fn1_mul_64ns_66ns_112_5_1_Multiplier_0 fn1_mul_64ns_66ns_112_5_1_Multiplier_0_U
       (.Q(Q),
        .ap_clk(ap_clk),
        .\buff2_reg[111]_0 (\buff2_reg[111] ),
        .p_5(p_5));
endmodule

(* ORIG_REF_NAME = "fn1_mul_64ns_66ns_112_5_1_Multiplier_0" *) 
module bd_0_hls_inst_0_fn1_mul_64ns_66ns_112_5_1_Multiplier_0
   (\buff2_reg[111]_0 ,
    Q,
    ap_clk,
    p_5);
  output [15:0]\buff2_reg[111]_0 ;
  input [0:0]Q;
  input ap_clk;
  input [63:0]p_5;

  wire [0:0]Q;
  wire ap_clk;
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
  wire buff1_reg__3_n_100;
  wire buff1_reg__3_n_101;
  wire buff1_reg__3_n_102;
  wire buff1_reg__3_n_103;
  wire buff1_reg__3_n_104;
  wire buff1_reg__3_n_105;
  wire buff1_reg__3_n_58;
  wire buff1_reg__3_n_59;
  wire buff1_reg__3_n_60;
  wire buff1_reg__3_n_61;
  wire buff1_reg__3_n_62;
  wire buff1_reg__3_n_63;
  wire buff1_reg__3_n_64;
  wire buff1_reg__3_n_65;
  wire buff1_reg__3_n_66;
  wire buff1_reg__3_n_67;
  wire buff1_reg__3_n_68;
  wire buff1_reg__3_n_69;
  wire buff1_reg__3_n_70;
  wire buff1_reg__3_n_71;
  wire buff1_reg__3_n_72;
  wire buff1_reg__3_n_73;
  wire buff1_reg__3_n_74;
  wire buff1_reg__3_n_75;
  wire buff1_reg__3_n_76;
  wire buff1_reg__3_n_77;
  wire buff1_reg__3_n_78;
  wire buff1_reg__3_n_79;
  wire buff1_reg__3_n_80;
  wire buff1_reg__3_n_81;
  wire buff1_reg__3_n_82;
  wire buff1_reg__3_n_83;
  wire buff1_reg__3_n_84;
  wire buff1_reg__3_n_85;
  wire buff1_reg__3_n_86;
  wire buff1_reg__3_n_87;
  wire buff1_reg__3_n_88;
  wire buff1_reg__3_n_89;
  wire buff1_reg__3_n_90;
  wire buff1_reg__3_n_91;
  wire buff1_reg__3_n_92;
  wire buff1_reg__3_n_93;
  wire buff1_reg__3_n_94;
  wire buff1_reg__3_n_95;
  wire buff1_reg__3_n_96;
  wire buff1_reg__3_n_97;
  wire buff1_reg__3_n_98;
  wire buff1_reg__3_n_99;
  wire buff1_reg__4_n_100;
  wire buff1_reg__4_n_101;
  wire buff1_reg__4_n_102;
  wire buff1_reg__4_n_103;
  wire buff1_reg__4_n_104;
  wire buff1_reg__4_n_105;
  wire buff1_reg__4_n_58;
  wire buff1_reg__4_n_59;
  wire buff1_reg__4_n_60;
  wire buff1_reg__4_n_61;
  wire buff1_reg__4_n_62;
  wire buff1_reg__4_n_63;
  wire buff1_reg__4_n_64;
  wire buff1_reg__4_n_65;
  wire buff1_reg__4_n_66;
  wire buff1_reg__4_n_67;
  wire buff1_reg__4_n_68;
  wire buff1_reg__4_n_69;
  wire buff1_reg__4_n_70;
  wire buff1_reg__4_n_71;
  wire buff1_reg__4_n_72;
  wire buff1_reg__4_n_73;
  wire buff1_reg__4_n_74;
  wire buff1_reg__4_n_75;
  wire buff1_reg__4_n_76;
  wire buff1_reg__4_n_77;
  wire buff1_reg__4_n_78;
  wire buff1_reg__4_n_79;
  wire buff1_reg__4_n_80;
  wire buff1_reg__4_n_81;
  wire buff1_reg__4_n_82;
  wire buff1_reg__4_n_83;
  wire buff1_reg__4_n_84;
  wire buff1_reg__4_n_85;
  wire buff1_reg__4_n_86;
  wire buff1_reg__4_n_87;
  wire buff1_reg__4_n_88;
  wire buff1_reg__4_n_89;
  wire buff1_reg__4_n_90;
  wire buff1_reg__4_n_91;
  wire buff1_reg__4_n_92;
  wire buff1_reg__4_n_93;
  wire buff1_reg__4_n_94;
  wire buff1_reg__4_n_95;
  wire buff1_reg__4_n_96;
  wire buff1_reg__4_n_97;
  wire buff1_reg__4_n_98;
  wire buff1_reg__4_n_99;
  wire [111:96]buff1_reg__5;
  wire \buff1_reg_n_0_[0] ;
  wire \buff1_reg_n_0_[10] ;
  wire \buff1_reg_n_0_[11] ;
  wire \buff1_reg_n_0_[12] ;
  wire \buff1_reg_n_0_[13] ;
  wire \buff1_reg_n_0_[14] ;
  wire \buff1_reg_n_0_[15] ;
  wire \buff1_reg_n_0_[16] ;
  wire \buff1_reg_n_0_[1] ;
  wire \buff1_reg_n_0_[2] ;
  wire \buff1_reg_n_0_[3] ;
  wire \buff1_reg_n_0_[4] ;
  wire \buff1_reg_n_0_[5] ;
  wire \buff1_reg_n_0_[6] ;
  wire \buff1_reg_n_0_[7] ;
  wire \buff1_reg_n_0_[8] ;
  wire \buff1_reg_n_0_[9] ;
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
  wire \buff2[101]_i_2_n_0 ;
  wire \buff2[101]_i_3_n_0 ;
  wire \buff2[101]_i_4_n_0 ;
  wire \buff2[101]_i_5_n_0 ;
  wire \buff2[101]_i_6_n_0 ;
  wire \buff2[101]_i_7_n_0 ;
  wire \buff2[101]_i_8_n_0 ;
  wire \buff2[101]_i_9_n_0 ;
  wire \buff2[105]_i_10_n_0 ;
  wire \buff2[105]_i_11_n_0 ;
  wire \buff2[105]_i_12_n_0 ;
  wire \buff2[105]_i_2_n_0 ;
  wire \buff2[105]_i_3_n_0 ;
  wire \buff2[105]_i_4_n_0 ;
  wire \buff2[105]_i_5_n_0 ;
  wire \buff2[105]_i_6_n_0 ;
  wire \buff2[105]_i_7_n_0 ;
  wire \buff2[105]_i_8_n_0 ;
  wire \buff2[105]_i_9_n_0 ;
  wire \buff2[109]_i_10_n_0 ;
  wire \buff2[109]_i_11_n_0 ;
  wire \buff2[109]_i_12_n_0 ;
  wire \buff2[109]_i_13_n_0 ;
  wire \buff2[109]_i_2_n_0 ;
  wire \buff2[109]_i_3_n_0 ;
  wire \buff2[109]_i_4_n_0 ;
  wire \buff2[109]_i_5_n_0 ;
  wire \buff2[109]_i_6_n_0 ;
  wire \buff2[109]_i_7_n_0 ;
  wire \buff2[109]_i_8_n_0 ;
  wire \buff2[109]_i_9_n_0 ;
  wire \buff2[111]_i_2_n_0 ;
  wire \buff2[111]_i_3_n_0 ;
  wire \buff2[111]_i_4_n_0 ;
  wire \buff2[111]_i_6_n_0 ;
  wire \buff2[111]_i_7_n_0 ;
  wire \buff2[111]_i_8_n_0 ;
  wire \buff2[111]_i_9_n_0 ;
  wire \buff2[97]_i_100_n_0 ;
  wire \buff2[97]_i_101_n_0 ;
  wire \buff2[97]_i_102_n_0 ;
  wire \buff2[97]_i_104_n_0 ;
  wire \buff2[97]_i_105_n_0 ;
  wire \buff2[97]_i_106_n_0 ;
  wire \buff2[97]_i_107_n_0 ;
  wire \buff2[97]_i_108_n_0 ;
  wire \buff2[97]_i_109_n_0 ;
  wire \buff2[97]_i_10_n_0 ;
  wire \buff2[97]_i_110_n_0 ;
  wire \buff2[97]_i_111_n_0 ;
  wire \buff2[97]_i_113_n_0 ;
  wire \buff2[97]_i_114_n_0 ;
  wire \buff2[97]_i_115_n_0 ;
  wire \buff2[97]_i_116_n_0 ;
  wire \buff2[97]_i_118_n_0 ;
  wire \buff2[97]_i_119_n_0 ;
  wire \buff2[97]_i_120_n_0 ;
  wire \buff2[97]_i_121_n_0 ;
  wire \buff2[97]_i_122_n_0 ;
  wire \buff2[97]_i_123_n_0 ;
  wire \buff2[97]_i_124_n_0 ;
  wire \buff2[97]_i_125_n_0 ;
  wire \buff2[97]_i_127_n_0 ;
  wire \buff2[97]_i_128_n_0 ;
  wire \buff2[97]_i_129_n_0 ;
  wire \buff2[97]_i_12_n_0 ;
  wire \buff2[97]_i_130_n_0 ;
  wire \buff2[97]_i_132_n_0 ;
  wire \buff2[97]_i_133_n_0 ;
  wire \buff2[97]_i_134_n_0 ;
  wire \buff2[97]_i_135_n_0 ;
  wire \buff2[97]_i_136_n_0 ;
  wire \buff2[97]_i_137_n_0 ;
  wire \buff2[97]_i_138_n_0 ;
  wire \buff2[97]_i_139_n_0 ;
  wire \buff2[97]_i_13_n_0 ;
  wire \buff2[97]_i_141_n_0 ;
  wire \buff2[97]_i_142_n_0 ;
  wire \buff2[97]_i_143_n_0 ;
  wire \buff2[97]_i_144_n_0 ;
  wire \buff2[97]_i_146_n_0 ;
  wire \buff2[97]_i_147_n_0 ;
  wire \buff2[97]_i_148_n_0 ;
  wire \buff2[97]_i_149_n_0 ;
  wire \buff2[97]_i_14_n_0 ;
  wire \buff2[97]_i_150_n_0 ;
  wire \buff2[97]_i_151_n_0 ;
  wire \buff2[97]_i_152_n_0 ;
  wire \buff2[97]_i_153_n_0 ;
  wire \buff2[97]_i_154_n_0 ;
  wire \buff2[97]_i_155_n_0 ;
  wire \buff2[97]_i_156_n_0 ;
  wire \buff2[97]_i_159_n_0 ;
  wire \buff2[97]_i_15_n_0 ;
  wire \buff2[97]_i_160_n_0 ;
  wire \buff2[97]_i_161_n_0 ;
  wire \buff2[97]_i_162_n_0 ;
  wire \buff2[97]_i_163_n_0 ;
  wire \buff2[97]_i_164_n_0 ;
  wire \buff2[97]_i_165_n_0 ;
  wire \buff2[97]_i_166_n_0 ;
  wire \buff2[97]_i_168_n_0 ;
  wire \buff2[97]_i_169_n_0 ;
  wire \buff2[97]_i_16_n_0 ;
  wire \buff2[97]_i_170_n_0 ;
  wire \buff2[97]_i_171_n_0 ;
  wire \buff2[97]_i_172_n_0 ;
  wire \buff2[97]_i_173_n_0 ;
  wire \buff2[97]_i_174_n_0 ;
  wire \buff2[97]_i_175_n_0 ;
  wire \buff2[97]_i_176_n_0 ;
  wire \buff2[97]_i_177_n_0 ;
  wire \buff2[97]_i_178_n_0 ;
  wire \buff2[97]_i_179_n_0 ;
  wire \buff2[97]_i_17_n_0 ;
  wire \buff2[97]_i_180_n_0 ;
  wire \buff2[97]_i_182_n_0 ;
  wire \buff2[97]_i_183_n_0 ;
  wire \buff2[97]_i_184_n_0 ;
  wire \buff2[97]_i_185_n_0 ;
  wire \buff2[97]_i_187_n_0 ;
  wire \buff2[97]_i_188_n_0 ;
  wire \buff2[97]_i_189_n_0 ;
  wire \buff2[97]_i_18_n_0 ;
  wire \buff2[97]_i_190_n_0 ;
  wire \buff2[97]_i_192_n_0 ;
  wire \buff2[97]_i_193_n_0 ;
  wire \buff2[97]_i_194_n_0 ;
  wire \buff2[97]_i_195_n_0 ;
  wire \buff2[97]_i_196_n_0 ;
  wire \buff2[97]_i_197_n_0 ;
  wire \buff2[97]_i_198_n_0 ;
  wire \buff2[97]_i_19_n_0 ;
  wire \buff2[97]_i_22_n_0 ;
  wire \buff2[97]_i_23_n_0 ;
  wire \buff2[97]_i_24_n_0 ;
  wire \buff2[97]_i_25_n_0 ;
  wire \buff2[97]_i_26_n_0 ;
  wire \buff2[97]_i_27_n_0 ;
  wire \buff2[97]_i_28_n_0 ;
  wire \buff2[97]_i_29_n_0 ;
  wire \buff2[97]_i_31_n_0 ;
  wire \buff2[97]_i_32_n_0 ;
  wire \buff2[97]_i_33_n_0 ;
  wire \buff2[97]_i_34_n_0 ;
  wire \buff2[97]_i_36_n_0 ;
  wire \buff2[97]_i_37_n_0 ;
  wire \buff2[97]_i_38_n_0 ;
  wire \buff2[97]_i_39_n_0 ;
  wire \buff2[97]_i_3_n_0 ;
  wire \buff2[97]_i_40_n_0 ;
  wire \buff2[97]_i_41_n_0 ;
  wire \buff2[97]_i_42_n_0 ;
  wire \buff2[97]_i_43_n_0 ;
  wire \buff2[97]_i_45_n_0 ;
  wire \buff2[97]_i_46_n_0 ;
  wire \buff2[97]_i_47_n_0 ;
  wire \buff2[97]_i_48_n_0 ;
  wire \buff2[97]_i_4_n_0 ;
  wire \buff2[97]_i_50_n_0 ;
  wire \buff2[97]_i_51_n_0 ;
  wire \buff2[97]_i_52_n_0 ;
  wire \buff2[97]_i_53_n_0 ;
  wire \buff2[97]_i_54_n_0 ;
  wire \buff2[97]_i_55_n_0 ;
  wire \buff2[97]_i_56_n_0 ;
  wire \buff2[97]_i_57_n_0 ;
  wire \buff2[97]_i_59_n_0 ;
  wire \buff2[97]_i_5_n_0 ;
  wire \buff2[97]_i_60_n_0 ;
  wire \buff2[97]_i_61_n_0 ;
  wire \buff2[97]_i_62_n_0 ;
  wire \buff2[97]_i_64_n_0 ;
  wire \buff2[97]_i_65_n_0 ;
  wire \buff2[97]_i_66_n_0 ;
  wire \buff2[97]_i_67_n_0 ;
  wire \buff2[97]_i_68_n_0 ;
  wire \buff2[97]_i_69_n_0 ;
  wire \buff2[97]_i_6_n_0 ;
  wire \buff2[97]_i_70_n_0 ;
  wire \buff2[97]_i_71_n_0 ;
  wire \buff2[97]_i_73_n_0 ;
  wire \buff2[97]_i_74_n_0 ;
  wire \buff2[97]_i_75_n_0 ;
  wire \buff2[97]_i_76_n_0 ;
  wire \buff2[97]_i_77_n_0 ;
  wire \buff2[97]_i_78_n_0 ;
  wire \buff2[97]_i_7_n_0 ;
  wire \buff2[97]_i_80_n_0 ;
  wire \buff2[97]_i_81_n_0 ;
  wire \buff2[97]_i_82_n_0 ;
  wire \buff2[97]_i_83_n_0 ;
  wire \buff2[97]_i_84_n_0 ;
  wire \buff2[97]_i_85_n_0 ;
  wire \buff2[97]_i_86_n_0 ;
  wire \buff2[97]_i_87_n_0 ;
  wire \buff2[97]_i_89_n_0 ;
  wire \buff2[97]_i_8_n_0 ;
  wire \buff2[97]_i_90_n_0 ;
  wire \buff2[97]_i_91_n_0 ;
  wire \buff2[97]_i_92_n_0 ;
  wire \buff2[97]_i_93_n_0 ;
  wire \buff2[97]_i_94_n_0 ;
  wire \buff2[97]_i_95_n_0 ;
  wire \buff2[97]_i_96_n_0 ;
  wire \buff2[97]_i_98_n_0 ;
  wire \buff2[97]_i_99_n_0 ;
  wire \buff2[97]_i_9_n_0 ;
  wire \buff2_reg[101]_i_1_n_0 ;
  wire \buff2_reg[101]_i_1_n_1 ;
  wire \buff2_reg[101]_i_1_n_2 ;
  wire \buff2_reg[101]_i_1_n_3 ;
  wire \buff2_reg[105]_i_1_n_0 ;
  wire \buff2_reg[105]_i_1_n_1 ;
  wire \buff2_reg[105]_i_1_n_2 ;
  wire \buff2_reg[105]_i_1_n_3 ;
  wire \buff2_reg[109]_i_1_n_0 ;
  wire \buff2_reg[109]_i_1_n_1 ;
  wire \buff2_reg[109]_i_1_n_2 ;
  wire \buff2_reg[109]_i_1_n_3 ;
  wire [15:0]\buff2_reg[111]_0 ;
  wire \buff2_reg[111]_i_1_n_3 ;
  wire \buff2_reg[111]_i_5_n_1 ;
  wire \buff2_reg[111]_i_5_n_3 ;
  wire \buff2_reg[111]_i_5_n_6 ;
  wire \buff2_reg[111]_i_5_n_7 ;
  wire \buff2_reg[97]_i_103_n_0 ;
  wire \buff2_reg[97]_i_103_n_1 ;
  wire \buff2_reg[97]_i_103_n_2 ;
  wire \buff2_reg[97]_i_103_n_3 ;
  wire \buff2_reg[97]_i_103_n_4 ;
  wire \buff2_reg[97]_i_103_n_5 ;
  wire \buff2_reg[97]_i_103_n_6 ;
  wire \buff2_reg[97]_i_103_n_7 ;
  wire \buff2_reg[97]_i_112_n_0 ;
  wire \buff2_reg[97]_i_112_n_1 ;
  wire \buff2_reg[97]_i_112_n_2 ;
  wire \buff2_reg[97]_i_112_n_3 ;
  wire \buff2_reg[97]_i_117_n_0 ;
  wire \buff2_reg[97]_i_117_n_1 ;
  wire \buff2_reg[97]_i_117_n_2 ;
  wire \buff2_reg[97]_i_117_n_3 ;
  wire \buff2_reg[97]_i_117_n_4 ;
  wire \buff2_reg[97]_i_117_n_5 ;
  wire \buff2_reg[97]_i_117_n_6 ;
  wire \buff2_reg[97]_i_117_n_7 ;
  wire \buff2_reg[97]_i_11_n_0 ;
  wire \buff2_reg[97]_i_11_n_1 ;
  wire \buff2_reg[97]_i_11_n_2 ;
  wire \buff2_reg[97]_i_11_n_3 ;
  wire \buff2_reg[97]_i_126_n_0 ;
  wire \buff2_reg[97]_i_126_n_1 ;
  wire \buff2_reg[97]_i_126_n_2 ;
  wire \buff2_reg[97]_i_126_n_3 ;
  wire \buff2_reg[97]_i_131_n_0 ;
  wire \buff2_reg[97]_i_131_n_1 ;
  wire \buff2_reg[97]_i_131_n_2 ;
  wire \buff2_reg[97]_i_131_n_3 ;
  wire \buff2_reg[97]_i_131_n_4 ;
  wire \buff2_reg[97]_i_131_n_5 ;
  wire \buff2_reg[97]_i_131_n_6 ;
  wire \buff2_reg[97]_i_131_n_7 ;
  wire \buff2_reg[97]_i_140_n_0 ;
  wire \buff2_reg[97]_i_140_n_1 ;
  wire \buff2_reg[97]_i_140_n_2 ;
  wire \buff2_reg[97]_i_140_n_3 ;
  wire \buff2_reg[97]_i_145_n_0 ;
  wire \buff2_reg[97]_i_145_n_1 ;
  wire \buff2_reg[97]_i_145_n_2 ;
  wire \buff2_reg[97]_i_145_n_3 ;
  wire \buff2_reg[97]_i_145_n_4 ;
  wire \buff2_reg[97]_i_145_n_5 ;
  wire \buff2_reg[97]_i_145_n_6 ;
  wire \buff2_reg[97]_i_145_n_7 ;
  wire \buff2_reg[97]_i_157_n_0 ;
  wire \buff2_reg[97]_i_157_n_1 ;
  wire \buff2_reg[97]_i_157_n_2 ;
  wire \buff2_reg[97]_i_157_n_3 ;
  wire \buff2_reg[97]_i_157_n_4 ;
  wire \buff2_reg[97]_i_157_n_5 ;
  wire \buff2_reg[97]_i_157_n_6 ;
  wire \buff2_reg[97]_i_158_n_0 ;
  wire \buff2_reg[97]_i_158_n_1 ;
  wire \buff2_reg[97]_i_158_n_2 ;
  wire \buff2_reg[97]_i_158_n_3 ;
  wire \buff2_reg[97]_i_158_n_4 ;
  wire \buff2_reg[97]_i_158_n_5 ;
  wire \buff2_reg[97]_i_158_n_6 ;
  wire \buff2_reg[97]_i_158_n_7 ;
  wire \buff2_reg[97]_i_167_n_0 ;
  wire \buff2_reg[97]_i_167_n_1 ;
  wire \buff2_reg[97]_i_167_n_2 ;
  wire \buff2_reg[97]_i_167_n_3 ;
  wire \buff2_reg[97]_i_181_n_0 ;
  wire \buff2_reg[97]_i_181_n_1 ;
  wire \buff2_reg[97]_i_181_n_2 ;
  wire \buff2_reg[97]_i_181_n_3 ;
  wire \buff2_reg[97]_i_186_n_0 ;
  wire \buff2_reg[97]_i_186_n_1 ;
  wire \buff2_reg[97]_i_186_n_2 ;
  wire \buff2_reg[97]_i_186_n_3 ;
  wire \buff2_reg[97]_i_191_n_0 ;
  wire \buff2_reg[97]_i_191_n_1 ;
  wire \buff2_reg[97]_i_191_n_2 ;
  wire \buff2_reg[97]_i_191_n_3 ;
  wire \buff2_reg[97]_i_1_n_0 ;
  wire \buff2_reg[97]_i_1_n_1 ;
  wire \buff2_reg[97]_i_1_n_2 ;
  wire \buff2_reg[97]_i_1_n_3 ;
  wire \buff2_reg[97]_i_20_n_0 ;
  wire \buff2_reg[97]_i_20_n_1 ;
  wire \buff2_reg[97]_i_20_n_2 ;
  wire \buff2_reg[97]_i_20_n_3 ;
  wire \buff2_reg[97]_i_20_n_4 ;
  wire \buff2_reg[97]_i_20_n_5 ;
  wire \buff2_reg[97]_i_20_n_6 ;
  wire \buff2_reg[97]_i_20_n_7 ;
  wire \buff2_reg[97]_i_21_n_0 ;
  wire \buff2_reg[97]_i_21_n_1 ;
  wire \buff2_reg[97]_i_21_n_2 ;
  wire \buff2_reg[97]_i_21_n_3 ;
  wire \buff2_reg[97]_i_2_n_0 ;
  wire \buff2_reg[97]_i_2_n_1 ;
  wire \buff2_reg[97]_i_2_n_2 ;
  wire \buff2_reg[97]_i_2_n_3 ;
  wire \buff2_reg[97]_i_30_n_0 ;
  wire \buff2_reg[97]_i_30_n_1 ;
  wire \buff2_reg[97]_i_30_n_2 ;
  wire \buff2_reg[97]_i_30_n_3 ;
  wire \buff2_reg[97]_i_30_n_4 ;
  wire \buff2_reg[97]_i_30_n_5 ;
  wire \buff2_reg[97]_i_30_n_6 ;
  wire \buff2_reg[97]_i_30_n_7 ;
  wire \buff2_reg[97]_i_35_n_0 ;
  wire \buff2_reg[97]_i_35_n_1 ;
  wire \buff2_reg[97]_i_35_n_2 ;
  wire \buff2_reg[97]_i_35_n_3 ;
  wire \buff2_reg[97]_i_44_n_0 ;
  wire \buff2_reg[97]_i_44_n_1 ;
  wire \buff2_reg[97]_i_44_n_2 ;
  wire \buff2_reg[97]_i_44_n_3 ;
  wire \buff2_reg[97]_i_44_n_4 ;
  wire \buff2_reg[97]_i_44_n_5 ;
  wire \buff2_reg[97]_i_44_n_6 ;
  wire \buff2_reg[97]_i_44_n_7 ;
  wire \buff2_reg[97]_i_49_n_0 ;
  wire \buff2_reg[97]_i_49_n_1 ;
  wire \buff2_reg[97]_i_49_n_2 ;
  wire \buff2_reg[97]_i_49_n_3 ;
  wire \buff2_reg[97]_i_58_n_0 ;
  wire \buff2_reg[97]_i_58_n_1 ;
  wire \buff2_reg[97]_i_58_n_2 ;
  wire \buff2_reg[97]_i_58_n_3 ;
  wire \buff2_reg[97]_i_58_n_4 ;
  wire \buff2_reg[97]_i_58_n_5 ;
  wire \buff2_reg[97]_i_58_n_6 ;
  wire \buff2_reg[97]_i_58_n_7 ;
  wire \buff2_reg[97]_i_63_n_0 ;
  wire \buff2_reg[97]_i_63_n_1 ;
  wire \buff2_reg[97]_i_63_n_2 ;
  wire \buff2_reg[97]_i_63_n_3 ;
  wire \buff2_reg[97]_i_72_n_0 ;
  wire \buff2_reg[97]_i_72_n_1 ;
  wire \buff2_reg[97]_i_72_n_2 ;
  wire \buff2_reg[97]_i_72_n_3 ;
  wire \buff2_reg[97]_i_72_n_4 ;
  wire \buff2_reg[97]_i_72_n_5 ;
  wire \buff2_reg[97]_i_72_n_6 ;
  wire \buff2_reg[97]_i_72_n_7 ;
  wire \buff2_reg[97]_i_79_n_0 ;
  wire \buff2_reg[97]_i_79_n_1 ;
  wire \buff2_reg[97]_i_79_n_2 ;
  wire \buff2_reg[97]_i_79_n_3 ;
  wire \buff2_reg[97]_i_88_n_0 ;
  wire \buff2_reg[97]_i_88_n_1 ;
  wire \buff2_reg[97]_i_88_n_2 ;
  wire \buff2_reg[97]_i_88_n_3 ;
  wire \buff2_reg[97]_i_88_n_4 ;
  wire \buff2_reg[97]_i_88_n_5 ;
  wire \buff2_reg[97]_i_88_n_6 ;
  wire \buff2_reg[97]_i_88_n_7 ;
  wire \buff2_reg[97]_i_97_n_0 ;
  wire \buff2_reg[97]_i_97_n_1 ;
  wire \buff2_reg[97]_i_97_n_2 ;
  wire \buff2_reg[97]_i_97_n_3 ;
  wire [63:0]p_5;
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
  wire tmp_product__3_n_106;
  wire tmp_product__3_n_107;
  wire tmp_product__3_n_108;
  wire tmp_product__3_n_109;
  wire tmp_product__3_n_110;
  wire tmp_product__3_n_111;
  wire tmp_product__3_n_112;
  wire tmp_product__3_n_113;
  wire tmp_product__3_n_114;
  wire tmp_product__3_n_115;
  wire tmp_product__3_n_116;
  wire tmp_product__3_n_117;
  wire tmp_product__3_n_118;
  wire tmp_product__3_n_119;
  wire tmp_product__3_n_120;
  wire tmp_product__3_n_121;
  wire tmp_product__3_n_122;
  wire tmp_product__3_n_123;
  wire tmp_product__3_n_124;
  wire tmp_product__3_n_125;
  wire tmp_product__3_n_126;
  wire tmp_product__3_n_127;
  wire tmp_product__3_n_128;
  wire tmp_product__3_n_129;
  wire tmp_product__3_n_130;
  wire tmp_product__3_n_131;
  wire tmp_product__3_n_132;
  wire tmp_product__3_n_133;
  wire tmp_product__3_n_134;
  wire tmp_product__3_n_135;
  wire tmp_product__3_n_136;
  wire tmp_product__3_n_137;
  wire tmp_product__3_n_138;
  wire tmp_product__3_n_139;
  wire tmp_product__3_n_140;
  wire tmp_product__3_n_141;
  wire tmp_product__3_n_142;
  wire tmp_product__3_n_143;
  wire tmp_product__3_n_144;
  wire tmp_product__3_n_145;
  wire tmp_product__3_n_146;
  wire tmp_product__3_n_147;
  wire tmp_product__3_n_148;
  wire tmp_product__3_n_149;
  wire tmp_product__3_n_150;
  wire tmp_product__3_n_151;
  wire tmp_product__3_n_152;
  wire tmp_product__3_n_153;
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
  wire [63:2]xor_ln20_fu_110_p2;
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
  wire NLW_buff1_reg__3_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg__3_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg__3_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg__3_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg__3_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg__3_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg__3_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg__3_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg__3_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg__3_PCOUT_UNCONNECTED;
  wire NLW_buff1_reg__4_CARRYCASCOUT_UNCONNECTED;
  wire NLW_buff1_reg__4_MULTSIGNOUT_UNCONNECTED;
  wire NLW_buff1_reg__4_OVERFLOW_UNCONNECTED;
  wire NLW_buff1_reg__4_PATTERNBDETECT_UNCONNECTED;
  wire NLW_buff1_reg__4_PATTERNDETECT_UNCONNECTED;
  wire NLW_buff1_reg__4_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_buff1_reg__4_ACOUT_UNCONNECTED;
  wire [17:0]NLW_buff1_reg__4_BCOUT_UNCONNECTED;
  wire [3:0]NLW_buff1_reg__4_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_buff1_reg__4_PCOUT_UNCONNECTED;
  wire [3:1]\NLW_buff2_reg[111]_i_1_CO_UNCONNECTED ;
  wire [3:2]\NLW_buff2_reg[111]_i_1_O_UNCONNECTED ;
  wire [3:1]\NLW_buff2_reg[111]_i_5_CO_UNCONNECTED ;
  wire [3:2]\NLW_buff2_reg[111]_i_5_O_UNCONNECTED ;
  wire [1:0]\NLW_buff2_reg[97]_i_1_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_11_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_112_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_126_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_140_O_UNCONNECTED ;
  wire [0:0]\NLW_buff2_reg[97]_i_157_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_167_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_181_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_186_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_191_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_2_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_21_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_35_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_49_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_63_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_79_O_UNCONNECTED ;
  wire [3:0]\NLW_buff2_reg[97]_i_97_O_UNCONNECTED ;
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
  wire NLW_tmp_product__3_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__3_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__3_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__3_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__3_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__3_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product__3_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product__3_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__3_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_tmp_product__3_P_UNCONNECTED;

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
    buff0_reg
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[63:51]}),
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
        .CEM(1'b0),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[63:51]}),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[16:10],p_5[9:8],xor_ln20_fu_110_p2[7:5],p_5[4],xor_ln20_fu_110_p2[3:2],p_5[1:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_1
       (.I0(p_5[16]),
        .O(xor_ln20_fu_110_p2[16]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_10
       (.I0(p_5[5]),
        .O(xor_ln20_fu_110_p2[5]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_11
       (.I0(p_5[3]),
        .O(xor_ln20_fu_110_p2[3]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_12
       (.I0(p_5[2]),
        .O(xor_ln20_fu_110_p2[2]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_2
       (.I0(p_5[15]),
        .O(xor_ln20_fu_110_p2[15]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_3
       (.I0(p_5[14]),
        .O(xor_ln20_fu_110_p2[14]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_4
       (.I0(p_5[13]),
        .O(xor_ln20_fu_110_p2[13]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_5
       (.I0(p_5[12]),
        .O(xor_ln20_fu_110_p2[12]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_6
       (.I0(p_5[11]),
        .O(xor_ln20_fu_110_p2[11]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_7
       (.I0(p_5[10]),
        .O(xor_ln20_fu_110_p2[10]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_8
       (.I0(p_5[7]),
        .O(xor_ln20_fu_110_p2[7]));
  LUT1 #(
    .INIT(2'h1)) 
    buff0_reg__1_i_9
       (.I0(p_5[6]),
        .O(xor_ln20_fu_110_p2[6]));
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[16:10],p_5[9:8],xor_ln20_fu_110_p2[7:5],p_5[4],xor_ln20_fu_110_p2[3:2],p_5[1:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[16:10],p_5[9:8],xor_ln20_fu_110_p2[7:5],p_5[4],xor_ln20_fu_110_p2[3:2],p_5[1:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff0_reg__3_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1}),
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
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 14x16 16}}" *) 
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
    buff1_reg
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[63:51]}),
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
        .MULTSIGNOUT(NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg_OVERFLOW_UNCONNECTED),
        .P({buff1_reg_n_58,buff1_reg_n_59,buff1_reg_n_60,buff1_reg_n_61,buff1_reg_n_62,buff1_reg_n_63,buff1_reg_n_64,buff1_reg_n_65,buff1_reg_n_66,buff1_reg_n_67,buff1_reg_n_68,buff1_reg_n_69,buff1_reg_n_70,buff1_reg_n_71,buff1_reg_n_72,buff1_reg_n_73,buff1_reg_n_74,buff1_reg_n_75,buff1_reg_n_76,buff1_reg_n_77,buff1_reg_n_78,buff1_reg_n_79,buff1_reg_n_80,buff1_reg_n_81,buff1_reg_n_82,buff1_reg_n_83,buff1_reg_n_84,buff1_reg_n_85,buff1_reg_n_86,buff1_reg_n_87,buff1_reg_n_88,buff1_reg_n_89,buff1_reg_n_90,buff1_reg_n_91,buff1_reg_n_92,buff1_reg_n_93,buff1_reg_n_94,buff1_reg_n_95,buff1_reg_n_96,buff1_reg_n_97,buff1_reg_n_98,buff1_reg_n_99,buff1_reg_n_100,buff1_reg_n_101,buff1_reg_n_102,buff1_reg_n_103,buff1_reg_n_104,buff1_reg_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
  FDRE \buff1_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_105),
        .Q(\buff1_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \buff1_reg[0]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_105),
        .Q(\buff1_reg[0]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_95),
        .Q(\buff1_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \buff1_reg[10]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_95),
        .Q(\buff1_reg[10]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_94),
        .Q(\buff1_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \buff1_reg[11]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_94),
        .Q(\buff1_reg[11]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_93),
        .Q(\buff1_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \buff1_reg[12]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_93),
        .Q(\buff1_reg[12]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_92),
        .Q(\buff1_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \buff1_reg[13]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_92),
        .Q(\buff1_reg[13]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_91),
        .Q(\buff1_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \buff1_reg[14]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_91),
        .Q(\buff1_reg[14]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_90),
        .Q(\buff1_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \buff1_reg[15]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_90),
        .Q(\buff1_reg[15]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_89),
        .Q(\buff1_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \buff1_reg[16]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_89),
        .Q(\buff1_reg[16]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_104),
        .Q(\buff1_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \buff1_reg[1]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_104),
        .Q(\buff1_reg[1]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_103),
        .Q(\buff1_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \buff1_reg[2]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_103),
        .Q(\buff1_reg[2]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_102),
        .Q(\buff1_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \buff1_reg[3]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_102),
        .Q(\buff1_reg[3]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_101),
        .Q(\buff1_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \buff1_reg[4]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_101),
        .Q(\buff1_reg[4]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_100),
        .Q(\buff1_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \buff1_reg[5]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_100),
        .Q(\buff1_reg[5]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_99),
        .Q(\buff1_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \buff1_reg[6]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_99),
        .Q(\buff1_reg[6]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_98),
        .Q(\buff1_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \buff1_reg[7]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_98),
        .Q(\buff1_reg[7]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_97),
        .Q(\buff1_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \buff1_reg[8]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_97),
        .Q(\buff1_reg[8]__0_n_0 ),
        .R(1'b0));
  FDRE \buff1_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg_n_96),
        .Q(\buff1_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \buff1_reg[9]__0 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff0_reg__0_n_96),
        .Q(\buff1_reg[9]__0_n_0 ),
        .R(1'b0));
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
    buff1_reg__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[63:51]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__0_CARRYOUT_UNCONNECTED[3:0]),
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
        .MULTSIGNOUT(NLW_buff1_reg__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg__0_OVERFLOW_UNCONNECTED),
        .P({buff1_reg__0_n_58,buff1_reg__0_n_59,buff1_reg__0_n_60,buff1_reg__0_n_61,buff1_reg__0_n_62,buff1_reg__0_n_63,buff1_reg__0_n_64,buff1_reg__0_n_65,buff1_reg__0_n_66,buff1_reg__0_n_67,buff1_reg__0_n_68,buff1_reg__0_n_69,buff1_reg__0_n_70,buff1_reg__0_n_71,buff1_reg__0_n_72,buff1_reg__0_n_73,buff1_reg__0_n_74,buff1_reg__0_n_75,buff1_reg__0_n_76,buff1_reg__0_n_77,buff1_reg__0_n_78,buff1_reg__0_n_79,buff1_reg__0_n_80,buff1_reg__0_n_81,buff1_reg__0_n_82,buff1_reg__0_n_83,buff1_reg__0_n_84,buff1_reg__0_n_85,buff1_reg__0_n_86,buff1_reg__0_n_87,buff1_reg__0_n_88,buff1_reg__0_n_89,buff1_reg__0_n_90,buff1_reg__0_n_91,buff1_reg__0_n_92,buff1_reg__0_n_93,buff1_reg__0_n_94,buff1_reg__0_n_95,buff1_reg__0_n_96,buff1_reg__0_n_97,buff1_reg__0_n_98,buff1_reg__0_n_99,buff1_reg__0_n_100,buff1_reg__0_n_101,buff1_reg__0_n_102,buff1_reg__0_n_103,buff1_reg__0_n_104,buff1_reg__0_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product_n_106,tmp_product_n_107,tmp_product_n_108,tmp_product_n_109,tmp_product_n_110,tmp_product_n_111,tmp_product_n_112,tmp_product_n_113,tmp_product_n_114,tmp_product_n_115,tmp_product_n_116,tmp_product_n_117,tmp_product_n_118,tmp_product_n_119,tmp_product_n_120,tmp_product_n_121,tmp_product_n_122,tmp_product_n_123,tmp_product_n_124,tmp_product_n_125,tmp_product_n_126,tmp_product_n_127,tmp_product_n_128,tmp_product_n_129,tmp_product_n_130,tmp_product_n_131,tmp_product_n_132,tmp_product_n_133,tmp_product_n_134,tmp_product_n_135,tmp_product_n_136,tmp_product_n_137,tmp_product_n_138,tmp_product_n_139,tmp_product_n_140,tmp_product_n_141,tmp_product_n_142,tmp_product_n_143,tmp_product_n_144,tmp_product_n_145,tmp_product_n_146,tmp_product_n_147,tmp_product_n_148,tmp_product_n_149,tmp_product_n_150,tmp_product_n_151,tmp_product_n_152,tmp_product_n_153}),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[50:34]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
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
        .PCIN({tmp_product__0_n_106,tmp_product__0_n_107,tmp_product__0_n_108,tmp_product__0_n_109,tmp_product__0_n_110,tmp_product__0_n_111,tmp_product__0_n_112,tmp_product__0_n_113,tmp_product__0_n_114,tmp_product__0_n_115,tmp_product__0_n_116,tmp_product__0_n_117,tmp_product__0_n_118,tmp_product__0_n_119,tmp_product__0_n_120,tmp_product__0_n_121,tmp_product__0_n_122,tmp_product__0_n_123,tmp_product__0_n_124,tmp_product__0_n_125,tmp_product__0_n_126,tmp_product__0_n_127,tmp_product__0_n_128,tmp_product__0_n_129,tmp_product__0_n_130,tmp_product__0_n_131,tmp_product__0_n_132,tmp_product__0_n_133,tmp_product__0_n_134,tmp_product__0_n_135,tmp_product__0_n_136,tmp_product__0_n_137,tmp_product__0_n_138,tmp_product__0_n_139,tmp_product__0_n_140,tmp_product__0_n_141,tmp_product__0_n_142,tmp_product__0_n_143,tmp_product__0_n_144,tmp_product__0_n_145,tmp_product__0_n_146,tmp_product__0_n_147,tmp_product__0_n_148,tmp_product__0_n_149,tmp_product__0_n_150,tmp_product__0_n_151,tmp_product__0_n_152,tmp_product__0_n_153}),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[50:34]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1}),
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
        .PCIN({tmp_product__1_n_106,tmp_product__1_n_107,tmp_product__1_n_108,tmp_product__1_n_109,tmp_product__1_n_110,tmp_product__1_n_111,tmp_product__1_n_112,tmp_product__1_n_113,tmp_product__1_n_114,tmp_product__1_n_115,tmp_product__1_n_116,tmp_product__1_n_117,tmp_product__1_n_118,tmp_product__1_n_119,tmp_product__1_n_120,tmp_product__1_n_121,tmp_product__1_n_122,tmp_product__1_n_123,tmp_product__1_n_124,tmp_product__1_n_125,tmp_product__1_n_126,tmp_product__1_n_127,tmp_product__1_n_128,tmp_product__1_n_129,tmp_product__1_n_130,tmp_product__1_n_131,tmp_product__1_n_132,tmp_product__1_n_133,tmp_product__1_n_134,tmp_product__1_n_135,tmp_product__1_n_136,tmp_product__1_n_137,tmp_product__1_n_138,tmp_product__1_n_139,tmp_product__1_n_140,tmp_product__1_n_141,tmp_product__1_n_142,tmp_product__1_n_143,tmp_product__1_n_144,tmp_product__1_n_145,tmp_product__1_n_146,tmp_product__1_n_147,tmp_product__1_n_148,tmp_product__1_n_149,tmp_product__1_n_150,tmp_product__1_n_151,tmp_product__1_n_152,tmp_product__1_n_153}),
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
    buff1_reg__3
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[50:34]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__3_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__3_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__3_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__3_CARRYOUT_UNCONNECTED[3:0]),
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
        .MULTSIGNOUT(NLW_buff1_reg__3_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg__3_OVERFLOW_UNCONNECTED),
        .P({buff1_reg__3_n_58,buff1_reg__3_n_59,buff1_reg__3_n_60,buff1_reg__3_n_61,buff1_reg__3_n_62,buff1_reg__3_n_63,buff1_reg__3_n_64,buff1_reg__3_n_65,buff1_reg__3_n_66,buff1_reg__3_n_67,buff1_reg__3_n_68,buff1_reg__3_n_69,buff1_reg__3_n_70,buff1_reg__3_n_71,buff1_reg__3_n_72,buff1_reg__3_n_73,buff1_reg__3_n_74,buff1_reg__3_n_75,buff1_reg__3_n_76,buff1_reg__3_n_77,buff1_reg__3_n_78,buff1_reg__3_n_79,buff1_reg__3_n_80,buff1_reg__3_n_81,buff1_reg__3_n_82,buff1_reg__3_n_83,buff1_reg__3_n_84,buff1_reg__3_n_85,buff1_reg__3_n_86,buff1_reg__3_n_87,buff1_reg__3_n_88,buff1_reg__3_n_89,buff1_reg__3_n_90,buff1_reg__3_n_91,buff1_reg__3_n_92,buff1_reg__3_n_93,buff1_reg__3_n_94,buff1_reg__3_n_95,buff1_reg__3_n_96,buff1_reg__3_n_97,buff1_reg__3_n_98,buff1_reg__3_n_99,buff1_reg__3_n_100,buff1_reg__3_n_101,buff1_reg__3_n_102,buff1_reg__3_n_103,buff1_reg__3_n_104,buff1_reg__3_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg__3_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg__3_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__2_n_106,tmp_product__2_n_107,tmp_product__2_n_108,tmp_product__2_n_109,tmp_product__2_n_110,tmp_product__2_n_111,tmp_product__2_n_112,tmp_product__2_n_113,tmp_product__2_n_114,tmp_product__2_n_115,tmp_product__2_n_116,tmp_product__2_n_117,tmp_product__2_n_118,tmp_product__2_n_119,tmp_product__2_n_120,tmp_product__2_n_121,tmp_product__2_n_122,tmp_product__2_n_123,tmp_product__2_n_124,tmp_product__2_n_125,tmp_product__2_n_126,tmp_product__2_n_127,tmp_product__2_n_128,tmp_product__2_n_129,tmp_product__2_n_130,tmp_product__2_n_131,tmp_product__2_n_132,tmp_product__2_n_133,tmp_product__2_n_134,tmp_product__2_n_135,tmp_product__2_n_136,tmp_product__2_n_137,tmp_product__2_n_138,tmp_product__2_n_139,tmp_product__2_n_140,tmp_product__2_n_141,tmp_product__2_n_142,tmp_product__2_n_143,tmp_product__2_n_144,tmp_product__2_n_145,tmp_product__2_n_146,tmp_product__2_n_147,tmp_product__2_n_148,tmp_product__2_n_149,tmp_product__2_n_150,tmp_product__2_n_151,tmp_product__2_n_152,tmp_product__2_n_153}),
        .PCOUT(NLW_buff1_reg__3_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg__3_UNDERFLOW_UNCONNECTED));
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
    buff1_reg__4
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[33:17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_buff1_reg__4_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b0,1'b1,1'b1,1'b0,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_buff1_reg__4_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_buff1_reg__4_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_buff1_reg__4_CARRYOUT_UNCONNECTED[3:0]),
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
        .MULTSIGNOUT(NLW_buff1_reg__4_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_buff1_reg__4_OVERFLOW_UNCONNECTED),
        .P({buff1_reg__4_n_58,buff1_reg__4_n_59,buff1_reg__4_n_60,buff1_reg__4_n_61,buff1_reg__4_n_62,buff1_reg__4_n_63,buff1_reg__4_n_64,buff1_reg__4_n_65,buff1_reg__4_n_66,buff1_reg__4_n_67,buff1_reg__4_n_68,buff1_reg__4_n_69,buff1_reg__4_n_70,buff1_reg__4_n_71,buff1_reg__4_n_72,buff1_reg__4_n_73,buff1_reg__4_n_74,buff1_reg__4_n_75,buff1_reg__4_n_76,buff1_reg__4_n_77,buff1_reg__4_n_78,buff1_reg__4_n_79,buff1_reg__4_n_80,buff1_reg__4_n_81,buff1_reg__4_n_82,buff1_reg__4_n_83,buff1_reg__4_n_84,buff1_reg__4_n_85,buff1_reg__4_n_86,buff1_reg__4_n_87,buff1_reg__4_n_88,buff1_reg__4_n_89,buff1_reg__4_n_90,buff1_reg__4_n_91,buff1_reg__4_n_92,buff1_reg__4_n_93,buff1_reg__4_n_94,buff1_reg__4_n_95,buff1_reg__4_n_96,buff1_reg__4_n_97,buff1_reg__4_n_98,buff1_reg__4_n_99,buff1_reg__4_n_100,buff1_reg__4_n_101,buff1_reg__4_n_102,buff1_reg__4_n_103,buff1_reg__4_n_104,buff1_reg__4_n_105}),
        .PATTERNBDETECT(NLW_buff1_reg__4_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_buff1_reg__4_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__3_n_106,tmp_product__3_n_107,tmp_product__3_n_108,tmp_product__3_n_109,tmp_product__3_n_110,tmp_product__3_n_111,tmp_product__3_n_112,tmp_product__3_n_113,tmp_product__3_n_114,tmp_product__3_n_115,tmp_product__3_n_116,tmp_product__3_n_117,tmp_product__3_n_118,tmp_product__3_n_119,tmp_product__3_n_120,tmp_product__3_n_121,tmp_product__3_n_122,tmp_product__3_n_123,tmp_product__3_n_124,tmp_product__3_n_125,tmp_product__3_n_126,tmp_product__3_n_127,tmp_product__3_n_128,tmp_product__3_n_129,tmp_product__3_n_130,tmp_product__3_n_131,tmp_product__3_n_132,tmp_product__3_n_133,tmp_product__3_n_134,tmp_product__3_n_135,tmp_product__3_n_136,tmp_product__3_n_137,tmp_product__3_n_138,tmp_product__3_n_139,tmp_product__3_n_140,tmp_product__3_n_141,tmp_product__3_n_142,tmp_product__3_n_143,tmp_product__3_n_144,tmp_product__3_n_145,tmp_product__3_n_146,tmp_product__3_n_147,tmp_product__3_n_148,tmp_product__3_n_149,tmp_product__3_n_150,tmp_product__3_n_151,tmp_product__3_n_152,tmp_product__3_n_153}),
        .PCOUT(NLW_buff1_reg__4_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_buff1_reg__4_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_1
       (.I0(p_5[63]),
        .O(xor_ln20_fu_110_p2[63]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_10
       (.I0(p_5[54]),
        .O(xor_ln20_fu_110_p2[54]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_11
       (.I0(p_5[53]),
        .O(xor_ln20_fu_110_p2[53]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_12
       (.I0(p_5[52]),
        .O(xor_ln20_fu_110_p2[52]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_13
       (.I0(p_5[51]),
        .O(xor_ln20_fu_110_p2[51]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_2
       (.I0(p_5[62]),
        .O(xor_ln20_fu_110_p2[62]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_3
       (.I0(p_5[61]),
        .O(xor_ln20_fu_110_p2[61]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_4
       (.I0(p_5[60]),
        .O(xor_ln20_fu_110_p2[60]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_5
       (.I0(p_5[59]),
        .O(xor_ln20_fu_110_p2[59]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_6
       (.I0(p_5[58]),
        .O(xor_ln20_fu_110_p2[58]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_7
       (.I0(p_5[57]),
        .O(xor_ln20_fu_110_p2[57]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_8
       (.I0(p_5[56]),
        .O(xor_ln20_fu_110_p2[56]));
  LUT1 #(
    .INIT(2'h1)) 
    buff1_reg_i_9
       (.I0(p_5[55]),
        .O(xor_ln20_fu_110_p2[55]));
  (* HLUTNM = "lutpair42" *) 
  LUT3 #(
    .INIT(8'hD4)) 
    \buff2[101]_i_2 
       (.I0(\buff2_reg[111]_i_5_n_1 ),
        .I1(buff1_reg__0_n_90),
        .I2(buff1_reg__1_n_73),
        .O(\buff2[101]_i_2_n_0 ));
  (* HLUTNM = "lutpair41" *) 
  LUT3 #(
    .INIT(8'hD4)) 
    \buff2[101]_i_3 
       (.I0(\buff2_reg[111]_i_5_n_1 ),
        .I1(buff1_reg__0_n_91),
        .I2(buff1_reg__1_n_74),
        .O(\buff2[101]_i_3_n_0 ));
  (* HLUTNM = "lutpair40" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[101]_i_4 
       (.I0(\buff2_reg[111]_i_5_n_6 ),
        .I1(buff1_reg__0_n_92),
        .I2(buff1_reg__1_n_75),
        .O(\buff2[101]_i_4_n_0 ));
  (* HLUTNM = "lutpair39" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[101]_i_5 
       (.I0(\buff2_reg[111]_i_5_n_7 ),
        .I1(buff1_reg__0_n_93),
        .I2(buff1_reg__1_n_76),
        .O(\buff2[101]_i_5_n_0 ));
  LUT4 #(
    .INIT(16'h9669)) 
    \buff2[101]_i_6 
       (.I0(\buff2[101]_i_2_n_0 ),
        .I1(buff1_reg__0_n_89),
        .I2(\buff2_reg[111]_i_5_n_1 ),
        .I3(buff1_reg__1_n_72),
        .O(\buff2[101]_i_6_n_0 ));
  (* HLUTNM = "lutpair42" *) 
  LUT4 #(
    .INIT(16'h9669)) 
    \buff2[101]_i_7 
       (.I0(\buff2_reg[111]_i_5_n_1 ),
        .I1(buff1_reg__0_n_90),
        .I2(buff1_reg__1_n_73),
        .I3(\buff2[101]_i_3_n_0 ),
        .O(\buff2[101]_i_7_n_0 ));
  (* HLUTNM = "lutpair41" *) 
  LUT4 #(
    .INIT(16'h9669)) 
    \buff2[101]_i_8 
       (.I0(\buff2_reg[111]_i_5_n_1 ),
        .I1(buff1_reg__0_n_91),
        .I2(buff1_reg__1_n_74),
        .I3(\buff2[101]_i_4_n_0 ),
        .O(\buff2[101]_i_8_n_0 ));
  (* HLUTNM = "lutpair40" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[101]_i_9 
       (.I0(\buff2_reg[111]_i_5_n_6 ),
        .I1(buff1_reg__0_n_92),
        .I2(buff1_reg__1_n_75),
        .I3(\buff2[101]_i_5_n_0 ),
        .O(\buff2[101]_i_9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'h69)) 
    \buff2[105]_i_10 
       (.I0(buff1_reg__0_n_85),
        .I1(\buff2_reg[111]_i_5_n_1 ),
        .I2(buff1_reg_n_102),
        .O(\buff2[105]_i_10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'h69)) 
    \buff2[105]_i_11 
       (.I0(buff1_reg__0_n_86),
        .I1(\buff2_reg[111]_i_5_n_1 ),
        .I2(buff1_reg_n_103),
        .O(\buff2[105]_i_11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'h69)) 
    \buff2[105]_i_12 
       (.I0(buff1_reg__0_n_87),
        .I1(\buff2_reg[111]_i_5_n_1 ),
        .I2(buff1_reg_n_104),
        .O(\buff2[105]_i_12_n_0 ));
  LUT6 #(
    .INIT(64'hBEEB2E8B2E8B2882)) 
    \buff2[105]_i_2 
       (.I0(buff1_reg__1_n_69),
        .I1(buff1_reg_n_103),
        .I2(\buff2_reg[111]_i_5_n_1 ),
        .I3(buff1_reg__0_n_86),
        .I4(buff1_reg__0_n_87),
        .I5(buff1_reg_n_104),
        .O(\buff2[105]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hBEEB2E8B2E8B2882)) 
    \buff2[105]_i_3 
       (.I0(buff1_reg__1_n_70),
        .I1(buff1_reg_n_104),
        .I2(\buff2_reg[111]_i_5_n_1 ),
        .I3(buff1_reg__0_n_87),
        .I4(buff1_reg__0_n_88),
        .I5(buff1_reg_n_105),
        .O(\buff2[105]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h7887E11E87781EE1)) 
    \buff2[105]_i_4 
       (.I0(buff1_reg__0_n_88),
        .I1(buff1_reg_n_105),
        .I2(buff1_reg__1_n_70),
        .I3(buff1_reg__0_n_87),
        .I4(\buff2_reg[111]_i_5_n_1 ),
        .I5(buff1_reg_n_104),
        .O(\buff2[105]_i_4_n_0 ));
  LUT4 #(
    .INIT(16'h9669)) 
    \buff2[105]_i_5 
       (.I0(buff1_reg_n_105),
        .I1(\buff2_reg[111]_i_5_n_1 ),
        .I2(buff1_reg__0_n_88),
        .I3(buff1_reg__1_n_71),
        .O(\buff2[105]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6969966996699696)) 
    \buff2[105]_i_6 
       (.I0(\buff2[105]_i_2_n_0 ),
        .I1(\buff2[105]_i_10_n_0 ),
        .I2(buff1_reg__1_n_68),
        .I3(\buff2_reg[111]_i_5_n_1 ),
        .I4(buff1_reg_n_103),
        .I5(buff1_reg__0_n_86),
        .O(\buff2[105]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h6969966996699696)) 
    \buff2[105]_i_7 
       (.I0(\buff2[105]_i_3_n_0 ),
        .I1(\buff2[105]_i_11_n_0 ),
        .I2(buff1_reg__1_n_69),
        .I3(\buff2_reg[111]_i_5_n_1 ),
        .I4(buff1_reg_n_104),
        .I5(buff1_reg__0_n_87),
        .O(\buff2[105]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h9969969996996696)) 
    \buff2[105]_i_8 
       (.I0(\buff2[105]_i_12_n_0 ),
        .I1(buff1_reg__1_n_70),
        .I2(buff1_reg__0_n_88),
        .I3(\buff2_reg[111]_i_5_n_1 ),
        .I4(buff1_reg_n_105),
        .I5(buff1_reg__1_n_71),
        .O(\buff2[105]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'h6996969696969669)) 
    \buff2[105]_i_9 
       (.I0(buff1_reg__1_n_71),
        .I1(buff1_reg__0_n_88),
        .I2(buff1_reg_n_105),
        .I3(buff1_reg__1_n_72),
        .I4(buff1_reg__0_n_89),
        .I5(\buff2_reg[111]_i_5_n_1 ),
        .O(\buff2[105]_i_9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'h69)) 
    \buff2[109]_i_10 
       (.I0(buff1_reg__0_n_81),
        .I1(\buff2_reg[111]_i_5_n_1 ),
        .I2(buff1_reg_n_98),
        .O(\buff2[109]_i_10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h69)) 
    \buff2[109]_i_11 
       (.I0(buff1_reg__0_n_82),
        .I1(\buff2_reg[111]_i_5_n_1 ),
        .I2(buff1_reg_n_99),
        .O(\buff2[109]_i_11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'h69)) 
    \buff2[109]_i_12 
       (.I0(buff1_reg__0_n_83),
        .I1(\buff2_reg[111]_i_5_n_1 ),
        .I2(buff1_reg_n_100),
        .O(\buff2[109]_i_12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'h69)) 
    \buff2[109]_i_13 
       (.I0(buff1_reg__0_n_84),
        .I1(\buff2_reg[111]_i_5_n_1 ),
        .I2(buff1_reg_n_101),
        .O(\buff2[109]_i_13_n_0 ));
  LUT6 #(
    .INIT(64'hBEEB2E8B2E8B2882)) 
    \buff2[109]_i_2 
       (.I0(buff1_reg__1_n_65),
        .I1(buff1_reg_n_99),
        .I2(\buff2_reg[111]_i_5_n_1 ),
        .I3(buff1_reg__0_n_82),
        .I4(buff1_reg__0_n_83),
        .I5(buff1_reg_n_100),
        .O(\buff2[109]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hBEEB2E8B2E8B2882)) 
    \buff2[109]_i_3 
       (.I0(buff1_reg__1_n_66),
        .I1(buff1_reg_n_100),
        .I2(\buff2_reg[111]_i_5_n_1 ),
        .I3(buff1_reg__0_n_83),
        .I4(buff1_reg__0_n_84),
        .I5(buff1_reg_n_101),
        .O(\buff2[109]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hBEEB2E8B2E8B2882)) 
    \buff2[109]_i_4 
       (.I0(buff1_reg__1_n_67),
        .I1(buff1_reg_n_101),
        .I2(\buff2_reg[111]_i_5_n_1 ),
        .I3(buff1_reg__0_n_84),
        .I4(buff1_reg__0_n_85),
        .I5(buff1_reg_n_102),
        .O(\buff2[109]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'hBEEB2E8B2E8B2882)) 
    \buff2[109]_i_5 
       (.I0(buff1_reg__1_n_68),
        .I1(buff1_reg_n_102),
        .I2(\buff2_reg[111]_i_5_n_1 ),
        .I3(buff1_reg__0_n_85),
        .I4(buff1_reg__0_n_86),
        .I5(buff1_reg_n_103),
        .O(\buff2[109]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6969966996699696)) 
    \buff2[109]_i_6 
       (.I0(\buff2[109]_i_2_n_0 ),
        .I1(\buff2[109]_i_10_n_0 ),
        .I2(buff1_reg__1_n_64),
        .I3(\buff2_reg[111]_i_5_n_1 ),
        .I4(buff1_reg_n_99),
        .I5(buff1_reg__0_n_82),
        .O(\buff2[109]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h6969966996699696)) 
    \buff2[109]_i_7 
       (.I0(\buff2[109]_i_3_n_0 ),
        .I1(\buff2[109]_i_11_n_0 ),
        .I2(buff1_reg__1_n_65),
        .I3(\buff2_reg[111]_i_5_n_1 ),
        .I4(buff1_reg_n_100),
        .I5(buff1_reg__0_n_83),
        .O(\buff2[109]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h6969966996699696)) 
    \buff2[109]_i_8 
       (.I0(\buff2[109]_i_4_n_0 ),
        .I1(\buff2[109]_i_12_n_0 ),
        .I2(buff1_reg__1_n_66),
        .I3(\buff2_reg[111]_i_5_n_1 ),
        .I4(buff1_reg_n_101),
        .I5(buff1_reg__0_n_84),
        .O(\buff2[109]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'h6969966996699696)) 
    \buff2[109]_i_9 
       (.I0(\buff2[109]_i_5_n_0 ),
        .I1(\buff2[109]_i_13_n_0 ),
        .I2(buff1_reg__1_n_67),
        .I3(\buff2_reg[111]_i_5_n_1 ),
        .I4(buff1_reg_n_102),
        .I5(buff1_reg__0_n_85),
        .O(\buff2[109]_i_9_n_0 ));
  LUT6 #(
    .INIT(64'hBEEB2E8B2E8B2882)) 
    \buff2[111]_i_2 
       (.I0(buff1_reg__1_n_64),
        .I1(buff1_reg_n_98),
        .I2(\buff2_reg[111]_i_5_n_1 ),
        .I3(buff1_reg__0_n_81),
        .I4(buff1_reg__0_n_82),
        .I5(buff1_reg_n_99),
        .O(\buff2[111]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h002B2BFFFFD4D400)) 
    \buff2[111]_i_3 
       (.I0(\buff2_reg[111]_i_5_n_1 ),
        .I1(buff1_reg_n_98),
        .I2(buff1_reg__0_n_81),
        .I3(\buff2[111]_i_6_n_0 ),
        .I4(buff1_reg__1_n_63),
        .I5(\buff2[111]_i_7_n_0 ),
        .O(\buff2[111]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6969966996699696)) 
    \buff2[111]_i_4 
       (.I0(\buff2[111]_i_2_n_0 ),
        .I1(\buff2[111]_i_6_n_0 ),
        .I2(buff1_reg__1_n_63),
        .I3(\buff2_reg[111]_i_5_n_1 ),
        .I4(buff1_reg_n_98),
        .I5(buff1_reg__0_n_81),
        .O(\buff2[111]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h69)) 
    \buff2[111]_i_6 
       (.I0(buff1_reg__0_n_80),
        .I1(\buff2_reg[111]_i_5_n_1 ),
        .I2(buff1_reg_n_97),
        .O(\buff2[111]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h7887E11E87781EE1)) 
    \buff2[111]_i_7 
       (.I0(buff1_reg__0_n_80),
        .I1(buff1_reg_n_97),
        .I2(buff1_reg__1_n_62),
        .I3(buff1_reg__0_n_79),
        .I4(\buff2_reg[111]_i_5_n_1 ),
        .I5(buff1_reg_n_96),
        .O(\buff2[111]_i_7_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[111]_i_8 
       (.I0(buff1_reg__2_n_59),
        .I1(buff1_reg__2_n_58),
        .O(\buff2[111]_i_8_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[111]_i_9 
       (.I0(buff1_reg__2_n_60),
        .I1(buff1_reg__2_n_59),
        .O(\buff2[111]_i_9_n_0 ));
  (* HLUTNM = "lutpair36" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_10 
       (.I0(\buff2_reg[97]_i_20_n_6 ),
        .I1(buff1_reg__0_n_96),
        .I2(buff1_reg__1_n_79),
        .I3(\buff2[97]_i_6_n_0 ),
        .O(\buff2[97]_i_10_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[97]_i_100 
       (.I0(\buff2_reg[97]_i_117_n_4 ),
        .I1(\buff1_reg_n_0_[0] ),
        .I2(buff1_reg__1_n_105),
        .O(\buff2[97]_i_100_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_101 
       (.I0(\buff1_reg[16]__0_n_0 ),
        .I1(\buff2_reg[97]_i_117_n_5 ),
        .O(\buff2[97]_i_101_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_102 
       (.I0(\buff1_reg[15]__0_n_0 ),
        .I1(\buff2_reg[97]_i_117_n_6 ),
        .O(\buff2[97]_i_102_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_104 
       (.I0(buff1_reg__2_n_82),
        .I1(buff1_reg__3_n_65),
        .I2(buff1_reg__2_n_81),
        .I3(buff1_reg__3_n_64),
        .O(\buff2[97]_i_104_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_105 
       (.I0(buff1_reg__2_n_83),
        .I1(buff1_reg__3_n_66),
        .I2(buff1_reg__2_n_82),
        .I3(buff1_reg__3_n_65),
        .O(\buff2[97]_i_105_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_106 
       (.I0(buff1_reg__2_n_84),
        .I1(buff1_reg__3_n_67),
        .I2(buff1_reg__2_n_83),
        .I3(buff1_reg__3_n_66),
        .O(\buff2[97]_i_106_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_107 
       (.I0(buff1_reg__2_n_85),
        .I1(buff1_reg__3_n_68),
        .I2(buff1_reg__2_n_84),
        .I3(buff1_reg__3_n_67),
        .O(\buff2[97]_i_107_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_108 
       (.I0(buff1_reg__3_n_65),
        .I1(buff1_reg__2_n_82),
        .I2(buff1_reg__3_n_63),
        .I3(buff1_reg__2_n_80),
        .I4(buff1_reg__3_n_64),
        .I5(buff1_reg__2_n_81),
        .O(\buff2[97]_i_108_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_109 
       (.I0(buff1_reg__3_n_66),
        .I1(buff1_reg__2_n_83),
        .I2(buff1_reg__3_n_64),
        .I3(buff1_reg__2_n_81),
        .I4(buff1_reg__3_n_65),
        .I5(buff1_reg__2_n_82),
        .O(\buff2[97]_i_109_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_110 
       (.I0(buff1_reg__3_n_67),
        .I1(buff1_reg__2_n_84),
        .I2(buff1_reg__3_n_65),
        .I3(buff1_reg__2_n_82),
        .I4(buff1_reg__3_n_66),
        .I5(buff1_reg__2_n_83),
        .O(\buff2[97]_i_110_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_111 
       (.I0(buff1_reg__3_n_68),
        .I1(buff1_reg__2_n_85),
        .I2(buff1_reg__3_n_66),
        .I3(buff1_reg__2_n_83),
        .I4(buff1_reg__3_n_67),
        .I5(buff1_reg__2_n_84),
        .O(\buff2[97]_i_111_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_113 
       (.I0(\buff1_reg[14]__0_n_0 ),
        .I1(\buff2_reg[97]_i_117_n_7 ),
        .O(\buff2[97]_i_113_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_114 
       (.I0(\buff1_reg[13]__0_n_0 ),
        .I1(\buff2_reg[97]_i_131_n_4 ),
        .O(\buff2[97]_i_114_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_115 
       (.I0(\buff1_reg[12]__0_n_0 ),
        .I1(\buff2_reg[97]_i_131_n_5 ),
        .O(\buff2[97]_i_115_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_116 
       (.I0(\buff1_reg[11]__0_n_0 ),
        .I1(\buff2_reg[97]_i_131_n_6 ),
        .O(\buff2[97]_i_116_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_118 
       (.I0(buff1_reg__2_n_86),
        .I1(buff1_reg__3_n_69),
        .I2(buff1_reg__2_n_85),
        .I3(buff1_reg__3_n_68),
        .O(\buff2[97]_i_118_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_119 
       (.I0(buff1_reg__2_n_87),
        .I1(buff1_reg__3_n_70),
        .I2(buff1_reg__2_n_86),
        .I3(buff1_reg__3_n_69),
        .O(\buff2[97]_i_119_n_0 ));
  (* HLUTNM = "lutpair34" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_12 
       (.I0(\buff2_reg[97]_i_30_n_4 ),
        .I1(buff1_reg__0_n_98),
        .I2(buff1_reg__1_n_81),
        .O(\buff2[97]_i_12_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_120 
       (.I0(buff1_reg__2_n_88),
        .I1(buff1_reg__3_n_71),
        .I2(buff1_reg__2_n_87),
        .I3(buff1_reg__3_n_70),
        .O(\buff2[97]_i_120_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_121 
       (.I0(buff1_reg__2_n_89),
        .I1(buff1_reg__3_n_72),
        .I2(buff1_reg__2_n_88),
        .I3(buff1_reg__3_n_71),
        .O(\buff2[97]_i_121_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_122 
       (.I0(buff1_reg__3_n_69),
        .I1(buff1_reg__2_n_86),
        .I2(buff1_reg__3_n_67),
        .I3(buff1_reg__2_n_84),
        .I4(buff1_reg__3_n_68),
        .I5(buff1_reg__2_n_85),
        .O(\buff2[97]_i_122_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_123 
       (.I0(buff1_reg__3_n_70),
        .I1(buff1_reg__2_n_87),
        .I2(buff1_reg__3_n_68),
        .I3(buff1_reg__2_n_85),
        .I4(buff1_reg__3_n_69),
        .I5(buff1_reg__2_n_86),
        .O(\buff2[97]_i_123_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_124 
       (.I0(buff1_reg__3_n_71),
        .I1(buff1_reg__2_n_88),
        .I2(buff1_reg__3_n_69),
        .I3(buff1_reg__2_n_86),
        .I4(buff1_reg__3_n_70),
        .I5(buff1_reg__2_n_87),
        .O(\buff2[97]_i_124_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_125 
       (.I0(buff1_reg__3_n_72),
        .I1(buff1_reg__2_n_89),
        .I2(buff1_reg__3_n_70),
        .I3(buff1_reg__2_n_87),
        .I4(buff1_reg__3_n_71),
        .I5(buff1_reg__2_n_88),
        .O(\buff2[97]_i_125_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_127 
       (.I0(\buff1_reg[10]__0_n_0 ),
        .I1(\buff2_reg[97]_i_131_n_7 ),
        .O(\buff2[97]_i_127_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_128 
       (.I0(\buff1_reg[9]__0_n_0 ),
        .I1(\buff2_reg[97]_i_145_n_4 ),
        .O(\buff2[97]_i_128_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_129 
       (.I0(\buff1_reg[8]__0_n_0 ),
        .I1(\buff2_reg[97]_i_145_n_5 ),
        .O(\buff2[97]_i_129_n_0 ));
  (* HLUTNM = "lutpair33" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_13 
       (.I0(\buff2_reg[97]_i_30_n_5 ),
        .I1(buff1_reg__0_n_99),
        .I2(buff1_reg__1_n_82),
        .O(\buff2[97]_i_13_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_130 
       (.I0(\buff1_reg[7]__0_n_0 ),
        .I1(\buff2_reg[97]_i_145_n_6 ),
        .O(\buff2[97]_i_130_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_132 
       (.I0(buff1_reg__2_n_90),
        .I1(buff1_reg__3_n_73),
        .I2(buff1_reg__2_n_89),
        .I3(buff1_reg__3_n_72),
        .O(\buff2[97]_i_132_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_133 
       (.I0(buff1_reg__2_n_91),
        .I1(buff1_reg__3_n_74),
        .I2(buff1_reg__2_n_90),
        .I3(buff1_reg__3_n_73),
        .O(\buff2[97]_i_133_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_134 
       (.I0(buff1_reg__2_n_92),
        .I1(buff1_reg__3_n_75),
        .I2(buff1_reg__2_n_91),
        .I3(buff1_reg__3_n_74),
        .O(\buff2[97]_i_134_n_0 ));
  LUT3 #(
    .INIT(8'h09)) 
    \buff2[97]_i_135 
       (.I0(buff1_reg__2_n_92),
        .I1(buff1_reg__3_n_75),
        .I2(buff1_reg__4_n_58),
        .O(\buff2[97]_i_135_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_136 
       (.I0(buff1_reg__3_n_73),
        .I1(buff1_reg__2_n_90),
        .I2(buff1_reg__3_n_71),
        .I3(buff1_reg__2_n_88),
        .I4(buff1_reg__3_n_72),
        .I5(buff1_reg__2_n_89),
        .O(\buff2[97]_i_136_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_137 
       (.I0(buff1_reg__3_n_74),
        .I1(buff1_reg__2_n_91),
        .I2(buff1_reg__3_n_72),
        .I3(buff1_reg__2_n_89),
        .I4(buff1_reg__3_n_73),
        .I5(buff1_reg__2_n_90),
        .O(\buff2[97]_i_137_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_138 
       (.I0(buff1_reg__3_n_75),
        .I1(buff1_reg__2_n_92),
        .I2(buff1_reg__3_n_73),
        .I3(buff1_reg__2_n_90),
        .I4(buff1_reg__3_n_74),
        .I5(buff1_reg__2_n_91),
        .O(\buff2[97]_i_138_n_0 ));
  LUT5 #(
    .INIT(32'h693C3C96)) 
    \buff2[97]_i_139 
       (.I0(buff1_reg__4_n_58),
        .I1(buff1_reg__3_n_74),
        .I2(buff1_reg__2_n_91),
        .I3(buff1_reg__3_n_75),
        .I4(buff1_reg__2_n_92),
        .O(\buff2[97]_i_139_n_0 ));
  (* HLUTNM = "lutpair32" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_14 
       (.I0(\buff2_reg[97]_i_30_n_6 ),
        .I1(buff1_reg__0_n_100),
        .I2(buff1_reg__1_n_83),
        .O(\buff2[97]_i_14_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_141 
       (.I0(\buff1_reg[6]__0_n_0 ),
        .I1(\buff2_reg[97]_i_145_n_7 ),
        .O(\buff2[97]_i_141_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_142 
       (.I0(\buff1_reg[5]__0_n_0 ),
        .I1(\buff2_reg[97]_i_158_n_4 ),
        .O(\buff2[97]_i_142_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_143 
       (.I0(\buff1_reg[4]__0_n_0 ),
        .I1(\buff2_reg[97]_i_158_n_5 ),
        .O(\buff2[97]_i_143_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_144 
       (.I0(\buff1_reg[3]__0_n_0 ),
        .I1(\buff2_reg[97]_i_158_n_6 ),
        .O(\buff2[97]_i_144_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[97]_i_146 
       (.I0(buff1_reg__4_n_58),
        .I1(buff1_reg__3_n_75),
        .I2(buff1_reg__2_n_92),
        .O(\buff2[97]_i_146_n_0 ));
  (* HLUTNM = "lutpair10" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_147 
       (.I0(buff1_reg__2_n_94),
        .I1(buff1_reg__3_n_77),
        .I2(buff1_reg__4_n_60),
        .O(\buff2[97]_i_147_n_0 ));
  (* HLUTNM = "lutpair9" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_148 
       (.I0(buff1_reg__2_n_95),
        .I1(buff1_reg__3_n_78),
        .I2(buff1_reg__4_n_61),
        .O(\buff2[97]_i_148_n_0 ));
  (* HLUTNM = "lutpair8" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_149 
       (.I0(buff1_reg__2_n_96),
        .I1(buff1_reg__3_n_79),
        .I2(buff1_reg__4_n_62),
        .O(\buff2[97]_i_149_n_0 ));
  (* HLUTNM = "lutpair31" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_15 
       (.I0(\buff2_reg[97]_i_30_n_7 ),
        .I1(buff1_reg__0_n_101),
        .I2(buff1_reg__1_n_84),
        .O(\buff2[97]_i_15_n_0 ));
  LUT6 #(
    .INIT(64'h6969699669969696)) 
    \buff2[97]_i_150 
       (.I0(buff1_reg__4_n_58),
        .I1(buff1_reg__3_n_75),
        .I2(buff1_reg__2_n_92),
        .I3(buff1_reg__4_n_59),
        .I4(buff1_reg__3_n_76),
        .I5(buff1_reg__2_n_93),
        .O(\buff2[97]_i_150_n_0 ));
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_151 
       (.I0(\buff2[97]_i_147_n_0 ),
        .I1(buff1_reg__3_n_76),
        .I2(buff1_reg__2_n_93),
        .I3(buff1_reg__4_n_59),
        .O(\buff2[97]_i_151_n_0 ));
  (* HLUTNM = "lutpair10" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_152 
       (.I0(buff1_reg__2_n_94),
        .I1(buff1_reg__3_n_77),
        .I2(buff1_reg__4_n_60),
        .I3(\buff2[97]_i_148_n_0 ),
        .O(\buff2[97]_i_152_n_0 ));
  (* HLUTNM = "lutpair9" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_153 
       (.I0(buff1_reg__2_n_95),
        .I1(buff1_reg__3_n_78),
        .I2(buff1_reg__4_n_61),
        .I3(\buff2[97]_i_149_n_0 ),
        .O(\buff2[97]_i_153_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_154 
       (.I0(\buff1_reg[2]__0_n_0 ),
        .I1(\buff2_reg[97]_i_158_n_7 ),
        .O(\buff2[97]_i_154_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_155 
       (.I0(\buff1_reg[1]__0_n_0 ),
        .I1(\buff2_reg[97]_i_157_n_4 ),
        .O(\buff2[97]_i_155_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_156 
       (.I0(\buff1_reg[0]__0_n_0 ),
        .I1(\buff2_reg[97]_i_157_n_5 ),
        .O(\buff2[97]_i_156_n_0 ));
  (* HLUTNM = "lutpair7" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_159 
       (.I0(buff1_reg__2_n_97),
        .I1(buff1_reg__3_n_80),
        .I2(buff1_reg__4_n_63),
        .O(\buff2[97]_i_159_n_0 ));
  (* HLUTNM = "lutpair35" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_16 
       (.I0(\buff2_reg[97]_i_20_n_7 ),
        .I1(buff1_reg__0_n_97),
        .I2(buff1_reg__1_n_80),
        .I3(\buff2[97]_i_12_n_0 ),
        .O(\buff2[97]_i_16_n_0 ));
  (* HLUTNM = "lutpair6" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_160 
       (.I0(buff1_reg__2_n_98),
        .I1(buff1_reg__3_n_81),
        .I2(buff1_reg__4_n_64),
        .O(\buff2[97]_i_160_n_0 ));
  (* HLUTNM = "lutpair5" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_161 
       (.I0(buff1_reg__2_n_99),
        .I1(buff1_reg__3_n_82),
        .I2(buff1_reg__4_n_65),
        .O(\buff2[97]_i_161_n_0 ));
  (* HLUTNM = "lutpair4" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_162 
       (.I0(buff1_reg__2_n_100),
        .I1(buff1_reg__3_n_83),
        .I2(buff1_reg__4_n_66),
        .O(\buff2[97]_i_162_n_0 ));
  (* HLUTNM = "lutpair8" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_163 
       (.I0(buff1_reg__2_n_96),
        .I1(buff1_reg__3_n_79),
        .I2(buff1_reg__4_n_62),
        .I3(\buff2[97]_i_159_n_0 ),
        .O(\buff2[97]_i_163_n_0 ));
  (* HLUTNM = "lutpair7" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_164 
       (.I0(buff1_reg__2_n_97),
        .I1(buff1_reg__3_n_80),
        .I2(buff1_reg__4_n_63),
        .I3(\buff2[97]_i_160_n_0 ),
        .O(\buff2[97]_i_164_n_0 ));
  (* HLUTNM = "lutpair6" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_165 
       (.I0(buff1_reg__2_n_98),
        .I1(buff1_reg__3_n_81),
        .I2(buff1_reg__4_n_64),
        .I3(\buff2[97]_i_161_n_0 ),
        .O(\buff2[97]_i_165_n_0 ));
  (* HLUTNM = "lutpair5" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_166 
       (.I0(buff1_reg__2_n_99),
        .I1(buff1_reg__3_n_82),
        .I2(buff1_reg__4_n_65),
        .I3(\buff2[97]_i_162_n_0 ),
        .O(\buff2[97]_i_166_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[97]_i_168 
       (.I0(buff1_reg__4_n_70),
        .I1(buff1_reg__2_n_104),
        .I2(buff1_reg__3_n_87),
        .O(\buff2[97]_i_168_n_0 ));
  (* HLUTNM = "lutpair0" *) 
  LUT5 #(
    .INIT(32'h69969696)) 
    \buff2[97]_i_169 
       (.I0(buff1_reg__2_n_104),
        .I1(buff1_reg__3_n_87),
        .I2(buff1_reg__4_n_70),
        .I3(buff1_reg__3_n_88),
        .I4(buff1_reg__2_n_105),
        .O(\buff2[97]_i_169_n_0 ));
  (* HLUTNM = "lutpair34" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_17 
       (.I0(\buff2_reg[97]_i_30_n_4 ),
        .I1(buff1_reg__0_n_98),
        .I2(buff1_reg__1_n_81),
        .I3(\buff2[97]_i_13_n_0 ),
        .O(\buff2[97]_i_17_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[97]_i_170 
       (.I0(buff1_reg__2_n_105),
        .I1(buff1_reg__3_n_88),
        .I2(buff1_reg__4_n_71),
        .O(\buff2[97]_i_170_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_171 
       (.I0(buff1_reg__4_n_72),
        .I1(buff1_reg__3_n_89),
        .O(\buff2[97]_i_171_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_172 
       (.I0(buff1_reg__4_n_73),
        .I1(buff1_reg__3_n_90),
        .O(\buff2[97]_i_172_n_0 ));
  (* HLUTNM = "lutpair3" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_173 
       (.I0(buff1_reg__2_n_101),
        .I1(buff1_reg__3_n_84),
        .I2(buff1_reg__4_n_67),
        .O(\buff2[97]_i_173_n_0 ));
  (* HLUTNM = "lutpair2" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_174 
       (.I0(buff1_reg__2_n_102),
        .I1(buff1_reg__3_n_85),
        .I2(buff1_reg__4_n_68),
        .O(\buff2[97]_i_174_n_0 ));
  (* HLUTNM = "lutpair1" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_175 
       (.I0(buff1_reg__2_n_103),
        .I1(buff1_reg__3_n_86),
        .I2(buff1_reg__4_n_69),
        .O(\buff2[97]_i_175_n_0 ));
  (* HLUTNM = "lutpair0" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_176 
       (.I0(buff1_reg__2_n_104),
        .I1(buff1_reg__3_n_87),
        .I2(buff1_reg__4_n_70),
        .O(\buff2[97]_i_176_n_0 ));
  (* HLUTNM = "lutpair4" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_177 
       (.I0(buff1_reg__2_n_100),
        .I1(buff1_reg__3_n_83),
        .I2(buff1_reg__4_n_66),
        .I3(\buff2[97]_i_173_n_0 ),
        .O(\buff2[97]_i_177_n_0 ));
  (* HLUTNM = "lutpair3" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_178 
       (.I0(buff1_reg__2_n_101),
        .I1(buff1_reg__3_n_84),
        .I2(buff1_reg__4_n_67),
        .I3(\buff2[97]_i_174_n_0 ),
        .O(\buff2[97]_i_178_n_0 ));
  (* HLUTNM = "lutpair2" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_179 
       (.I0(buff1_reg__2_n_102),
        .I1(buff1_reg__3_n_85),
        .I2(buff1_reg__4_n_68),
        .I3(\buff2[97]_i_175_n_0 ),
        .O(\buff2[97]_i_179_n_0 ));
  (* HLUTNM = "lutpair33" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_18 
       (.I0(\buff2_reg[97]_i_30_n_5 ),
        .I1(buff1_reg__0_n_99),
        .I2(buff1_reg__1_n_82),
        .I3(\buff2[97]_i_14_n_0 ),
        .O(\buff2[97]_i_18_n_0 ));
  (* HLUTNM = "lutpair1" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_180 
       (.I0(buff1_reg__2_n_103),
        .I1(buff1_reg__3_n_86),
        .I2(buff1_reg__4_n_69),
        .I3(\buff2[97]_i_176_n_0 ),
        .O(\buff2[97]_i_180_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_182 
       (.I0(buff1_reg__4_n_74),
        .I1(buff1_reg__3_n_91),
        .O(\buff2[97]_i_182_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_183 
       (.I0(buff1_reg__4_n_75),
        .I1(buff1_reg__3_n_92),
        .O(\buff2[97]_i_183_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_184 
       (.I0(buff1_reg__4_n_76),
        .I1(buff1_reg__3_n_93),
        .O(\buff2[97]_i_184_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_185 
       (.I0(buff1_reg__4_n_77),
        .I1(buff1_reg__3_n_94),
        .O(\buff2[97]_i_185_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_187 
       (.I0(buff1_reg__4_n_78),
        .I1(buff1_reg__3_n_95),
        .O(\buff2[97]_i_187_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_188 
       (.I0(buff1_reg__4_n_79),
        .I1(buff1_reg__3_n_96),
        .O(\buff2[97]_i_188_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_189 
       (.I0(buff1_reg__4_n_80),
        .I1(buff1_reg__3_n_97),
        .O(\buff2[97]_i_189_n_0 ));
  (* HLUTNM = "lutpair32" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_19 
       (.I0(\buff2_reg[97]_i_30_n_6 ),
        .I1(buff1_reg__0_n_100),
        .I2(buff1_reg__1_n_83),
        .I3(\buff2[97]_i_15_n_0 ),
        .O(\buff2[97]_i_19_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_190 
       (.I0(buff1_reg__4_n_81),
        .I1(buff1_reg__3_n_98),
        .O(\buff2[97]_i_190_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_192 
       (.I0(buff1_reg__4_n_82),
        .I1(buff1_reg__3_n_99),
        .O(\buff2[97]_i_192_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_193 
       (.I0(buff1_reg__4_n_83),
        .I1(buff1_reg__3_n_100),
        .O(\buff2[97]_i_193_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_194 
       (.I0(buff1_reg__4_n_84),
        .I1(buff1_reg__3_n_101),
        .O(\buff2[97]_i_194_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_195 
       (.I0(buff1_reg__4_n_85),
        .I1(buff1_reg__3_n_102),
        .O(\buff2[97]_i_195_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_196 
       (.I0(buff1_reg__4_n_86),
        .I1(buff1_reg__3_n_103),
        .O(\buff2[97]_i_196_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_197 
       (.I0(buff1_reg__4_n_87),
        .I1(buff1_reg__3_n_104),
        .O(\buff2[97]_i_197_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \buff2[97]_i_198 
       (.I0(buff1_reg__4_n_88),
        .I1(buff1_reg__3_n_105),
        .O(\buff2[97]_i_198_n_0 ));
  (* HLUTNM = "lutpair30" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_22 
       (.I0(\buff2_reg[97]_i_44_n_4 ),
        .I1(buff1_reg__0_n_102),
        .I2(buff1_reg__1_n_85),
        .O(\buff2[97]_i_22_n_0 ));
  (* HLUTNM = "lutpair29" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_23 
       (.I0(\buff2_reg[97]_i_44_n_5 ),
        .I1(buff1_reg__0_n_103),
        .I2(buff1_reg__1_n_86),
        .O(\buff2[97]_i_23_n_0 ));
  (* HLUTNM = "lutpair28" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_24 
       (.I0(\buff2_reg[97]_i_44_n_6 ),
        .I1(buff1_reg__0_n_104),
        .I2(buff1_reg__1_n_87),
        .O(\buff2[97]_i_24_n_0 ));
  (* HLUTNM = "lutpair27" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_25 
       (.I0(\buff2_reg[97]_i_44_n_7 ),
        .I1(buff1_reg__0_n_105),
        .I2(buff1_reg__1_n_88),
        .O(\buff2[97]_i_25_n_0 ));
  (* HLUTNM = "lutpair31" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_26 
       (.I0(\buff2_reg[97]_i_30_n_7 ),
        .I1(buff1_reg__0_n_101),
        .I2(buff1_reg__1_n_84),
        .I3(\buff2[97]_i_22_n_0 ),
        .O(\buff2[97]_i_26_n_0 ));
  (* HLUTNM = "lutpair30" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_27 
       (.I0(\buff2_reg[97]_i_44_n_4 ),
        .I1(buff1_reg__0_n_102),
        .I2(buff1_reg__1_n_85),
        .I3(\buff2[97]_i_23_n_0 ),
        .O(\buff2[97]_i_27_n_0 ));
  (* HLUTNM = "lutpair29" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_28 
       (.I0(\buff2_reg[97]_i_44_n_5 ),
        .I1(buff1_reg__0_n_103),
        .I2(buff1_reg__1_n_86),
        .I3(\buff2[97]_i_24_n_0 ),
        .O(\buff2[97]_i_28_n_0 ));
  (* HLUTNM = "lutpair28" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_29 
       (.I0(\buff2_reg[97]_i_44_n_6 ),
        .I1(buff1_reg__0_n_104),
        .I2(buff1_reg__1_n_87),
        .I3(\buff2[97]_i_25_n_0 ),
        .O(\buff2[97]_i_29_n_0 ));
  (* HLUTNM = "lutpair38" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_3 
       (.I0(\buff2_reg[97]_i_20_n_4 ),
        .I1(buff1_reg__0_n_94),
        .I2(buff1_reg__1_n_77),
        .O(\buff2[97]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_31 
       (.I0(buff1_reg__2_n_61),
        .I1(buff1_reg__2_n_60),
        .O(\buff2[97]_i_31_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_32 
       (.I0(buff1_reg__2_n_62),
        .I1(buff1_reg__2_n_61),
        .O(\buff2[97]_i_32_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_33 
       (.I0(buff1_reg__2_n_63),
        .I1(buff1_reg__2_n_62),
        .O(\buff2[97]_i_33_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_34 
       (.I0(buff1_reg__2_n_64),
        .I1(buff1_reg__2_n_63),
        .O(\buff2[97]_i_34_n_0 ));
  (* HLUTNM = "lutpair26" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_36 
       (.I0(\buff2_reg[97]_i_58_n_4 ),
        .I1(\buff1_reg_n_0_[16] ),
        .I2(buff1_reg__1_n_89),
        .O(\buff2[97]_i_36_n_0 ));
  (* HLUTNM = "lutpair25" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_37 
       (.I0(\buff2_reg[97]_i_58_n_5 ),
        .I1(\buff1_reg_n_0_[15] ),
        .I2(buff1_reg__1_n_90),
        .O(\buff2[97]_i_37_n_0 ));
  (* HLUTNM = "lutpair24" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_38 
       (.I0(\buff2_reg[97]_i_58_n_6 ),
        .I1(\buff1_reg_n_0_[14] ),
        .I2(buff1_reg__1_n_91),
        .O(\buff2[97]_i_38_n_0 ));
  (* HLUTNM = "lutpair23" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_39 
       (.I0(\buff2_reg[97]_i_58_n_7 ),
        .I1(\buff1_reg_n_0_[13] ),
        .I2(buff1_reg__1_n_92),
        .O(\buff2[97]_i_39_n_0 ));
  (* HLUTNM = "lutpair37" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_4 
       (.I0(\buff2_reg[97]_i_20_n_5 ),
        .I1(buff1_reg__0_n_95),
        .I2(buff1_reg__1_n_78),
        .O(\buff2[97]_i_4_n_0 ));
  (* HLUTNM = "lutpair27" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_40 
       (.I0(\buff2_reg[97]_i_44_n_7 ),
        .I1(buff1_reg__0_n_105),
        .I2(buff1_reg__1_n_88),
        .I3(\buff2[97]_i_36_n_0 ),
        .O(\buff2[97]_i_40_n_0 ));
  (* HLUTNM = "lutpair26" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_41 
       (.I0(\buff2_reg[97]_i_58_n_4 ),
        .I1(\buff1_reg_n_0_[16] ),
        .I2(buff1_reg__1_n_89),
        .I3(\buff2[97]_i_37_n_0 ),
        .O(\buff2[97]_i_41_n_0 ));
  (* HLUTNM = "lutpair25" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_42 
       (.I0(\buff2_reg[97]_i_58_n_5 ),
        .I1(\buff1_reg_n_0_[15] ),
        .I2(buff1_reg__1_n_90),
        .I3(\buff2[97]_i_38_n_0 ),
        .O(\buff2[97]_i_42_n_0 ));
  (* HLUTNM = "lutpair24" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_43 
       (.I0(\buff2_reg[97]_i_58_n_6 ),
        .I1(\buff1_reg_n_0_[14] ),
        .I2(buff1_reg__1_n_91),
        .I3(\buff2[97]_i_39_n_0 ),
        .O(\buff2[97]_i_43_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_45 
       (.I0(buff1_reg__2_n_65),
        .I1(buff1_reg__2_n_64),
        .O(\buff2[97]_i_45_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_46 
       (.I0(buff1_reg__2_n_66),
        .I1(buff1_reg__2_n_65),
        .O(\buff2[97]_i_46_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_47 
       (.I0(buff1_reg__2_n_67),
        .I1(buff1_reg__2_n_66),
        .O(\buff2[97]_i_47_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_48 
       (.I0(buff1_reg__2_n_68),
        .I1(buff1_reg__2_n_67),
        .O(\buff2[97]_i_48_n_0 ));
  (* HLUTNM = "lutpair36" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_5 
       (.I0(\buff2_reg[97]_i_20_n_6 ),
        .I1(buff1_reg__0_n_96),
        .I2(buff1_reg__1_n_79),
        .O(\buff2[97]_i_5_n_0 ));
  (* HLUTNM = "lutpair22" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_50 
       (.I0(\buff2_reg[97]_i_72_n_4 ),
        .I1(\buff1_reg_n_0_[12] ),
        .I2(buff1_reg__1_n_93),
        .O(\buff2[97]_i_50_n_0 ));
  (* HLUTNM = "lutpair21" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_51 
       (.I0(\buff2_reg[97]_i_72_n_5 ),
        .I1(\buff1_reg_n_0_[11] ),
        .I2(buff1_reg__1_n_94),
        .O(\buff2[97]_i_51_n_0 ));
  (* HLUTNM = "lutpair20" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_52 
       (.I0(\buff2_reg[97]_i_72_n_6 ),
        .I1(\buff1_reg_n_0_[10] ),
        .I2(buff1_reg__1_n_95),
        .O(\buff2[97]_i_52_n_0 ));
  (* HLUTNM = "lutpair19" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_53 
       (.I0(\buff2_reg[97]_i_72_n_7 ),
        .I1(\buff1_reg_n_0_[9] ),
        .I2(buff1_reg__1_n_96),
        .O(\buff2[97]_i_53_n_0 ));
  (* HLUTNM = "lutpair23" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_54 
       (.I0(\buff2_reg[97]_i_58_n_7 ),
        .I1(\buff1_reg_n_0_[13] ),
        .I2(buff1_reg__1_n_92),
        .I3(\buff2[97]_i_50_n_0 ),
        .O(\buff2[97]_i_54_n_0 ));
  (* HLUTNM = "lutpair22" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_55 
       (.I0(\buff2_reg[97]_i_72_n_4 ),
        .I1(\buff1_reg_n_0_[12] ),
        .I2(buff1_reg__1_n_93),
        .I3(\buff2[97]_i_51_n_0 ),
        .O(\buff2[97]_i_55_n_0 ));
  (* HLUTNM = "lutpair21" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_56 
       (.I0(\buff2_reg[97]_i_72_n_5 ),
        .I1(\buff1_reg_n_0_[11] ),
        .I2(buff1_reg__1_n_94),
        .I3(\buff2[97]_i_52_n_0 ),
        .O(\buff2[97]_i_56_n_0 ));
  (* HLUTNM = "lutpair20" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_57 
       (.I0(\buff2_reg[97]_i_72_n_6 ),
        .I1(\buff1_reg_n_0_[10] ),
        .I2(buff1_reg__1_n_95),
        .I3(\buff2[97]_i_53_n_0 ),
        .O(\buff2[97]_i_57_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_59 
       (.I0(buff1_reg__2_n_69),
        .I1(buff1_reg__2_n_68),
        .O(\buff2[97]_i_59_n_0 ));
  (* HLUTNM = "lutpair35" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_6 
       (.I0(\buff2_reg[97]_i_20_n_7 ),
        .I1(buff1_reg__0_n_97),
        .I2(buff1_reg__1_n_80),
        .O(\buff2[97]_i_6_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_60 
       (.I0(buff1_reg__2_n_70),
        .I1(buff1_reg__2_n_69),
        .O(\buff2[97]_i_60_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_61 
       (.I0(buff1_reg__2_n_71),
        .I1(buff1_reg__2_n_70),
        .O(\buff2[97]_i_61_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_62 
       (.I0(buff1_reg__2_n_72),
        .I1(buff1_reg__2_n_71),
        .O(\buff2[97]_i_62_n_0 ));
  (* HLUTNM = "lutpair18" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_64 
       (.I0(\buff2_reg[97]_i_88_n_4 ),
        .I1(\buff1_reg_n_0_[8] ),
        .I2(buff1_reg__1_n_97),
        .O(\buff2[97]_i_64_n_0 ));
  (* HLUTNM = "lutpair17" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_65 
       (.I0(\buff2_reg[97]_i_88_n_5 ),
        .I1(\buff1_reg_n_0_[7] ),
        .I2(buff1_reg__1_n_98),
        .O(\buff2[97]_i_65_n_0 ));
  (* HLUTNM = "lutpair16" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_66 
       (.I0(\buff2_reg[97]_i_88_n_6 ),
        .I1(\buff1_reg_n_0_[6] ),
        .I2(buff1_reg__1_n_99),
        .O(\buff2[97]_i_66_n_0 ));
  (* HLUTNM = "lutpair15" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_67 
       (.I0(\buff2_reg[97]_i_88_n_7 ),
        .I1(\buff1_reg_n_0_[5] ),
        .I2(buff1_reg__1_n_100),
        .O(\buff2[97]_i_67_n_0 ));
  (* HLUTNM = "lutpair19" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_68 
       (.I0(\buff2_reg[97]_i_72_n_7 ),
        .I1(\buff1_reg_n_0_[9] ),
        .I2(buff1_reg__1_n_96),
        .I3(\buff2[97]_i_64_n_0 ),
        .O(\buff2[97]_i_68_n_0 ));
  (* HLUTNM = "lutpair18" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_69 
       (.I0(\buff2_reg[97]_i_88_n_4 ),
        .I1(\buff1_reg_n_0_[8] ),
        .I2(buff1_reg__1_n_97),
        .I3(\buff2[97]_i_65_n_0 ),
        .O(\buff2[97]_i_69_n_0 ));
  (* HLUTNM = "lutpair39" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_7 
       (.I0(\buff2_reg[111]_i_5_n_7 ),
        .I1(buff1_reg__0_n_93),
        .I2(buff1_reg__1_n_76),
        .I3(\buff2[97]_i_3_n_0 ),
        .O(\buff2[97]_i_7_n_0 ));
  (* HLUTNM = "lutpair17" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_70 
       (.I0(\buff2_reg[97]_i_88_n_5 ),
        .I1(\buff1_reg_n_0_[7] ),
        .I2(buff1_reg__1_n_98),
        .I3(\buff2[97]_i_66_n_0 ),
        .O(\buff2[97]_i_70_n_0 ));
  (* HLUTNM = "lutpair16" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_71 
       (.I0(\buff2_reg[97]_i_88_n_6 ),
        .I1(\buff1_reg_n_0_[6] ),
        .I2(buff1_reg__1_n_99),
        .I3(\buff2[97]_i_67_n_0 ),
        .O(\buff2[97]_i_71_n_0 ));
  LUT4 #(
    .INIT(16'hDDD4)) 
    \buff2[97]_i_73 
       (.I0(buff1_reg__3_n_58),
        .I1(buff1_reg__2_n_75),
        .I2(buff1_reg__2_n_76),
        .I3(buff1_reg__3_n_59),
        .O(\buff2[97]_i_73_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_74 
       (.I0(buff1_reg__2_n_77),
        .I1(buff1_reg__3_n_60),
        .I2(buff1_reg__2_n_76),
        .I3(buff1_reg__3_n_59),
        .O(\buff2[97]_i_74_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_75 
       (.I0(buff1_reg__2_n_73),
        .I1(buff1_reg__2_n_72),
        .O(\buff2[97]_i_75_n_0 ));
  LUT2 #(
    .INIT(4'h9)) 
    \buff2[97]_i_76 
       (.I0(buff1_reg__2_n_74),
        .I1(buff1_reg__2_n_73),
        .O(\buff2[97]_i_76_n_0 ));
  LUT5 #(
    .INIT(32'hE0FE1F01)) 
    \buff2[97]_i_77 
       (.I0(buff1_reg__3_n_59),
        .I1(buff1_reg__2_n_76),
        .I2(buff1_reg__2_n_75),
        .I3(buff1_reg__3_n_58),
        .I4(buff1_reg__2_n_74),
        .O(\buff2[97]_i_77_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_78 
       (.I0(buff1_reg__3_n_60),
        .I1(buff1_reg__2_n_77),
        .I2(buff1_reg__3_n_58),
        .I3(buff1_reg__2_n_75),
        .I4(buff1_reg__3_n_59),
        .I5(buff1_reg__2_n_76),
        .O(\buff2[97]_i_78_n_0 ));
  (* HLUTNM = "lutpair38" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_8 
       (.I0(\buff2_reg[97]_i_20_n_4 ),
        .I1(buff1_reg__0_n_94),
        .I2(buff1_reg__1_n_77),
        .I3(\buff2[97]_i_4_n_0 ),
        .O(\buff2[97]_i_8_n_0 ));
  (* HLUTNM = "lutpair14" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_80 
       (.I0(\buff2_reg[97]_i_103_n_4 ),
        .I1(\buff1_reg_n_0_[4] ),
        .I2(buff1_reg__1_n_101),
        .O(\buff2[97]_i_80_n_0 ));
  (* HLUTNM = "lutpair13" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_81 
       (.I0(\buff2_reg[97]_i_103_n_5 ),
        .I1(\buff1_reg_n_0_[3] ),
        .I2(buff1_reg__1_n_102),
        .O(\buff2[97]_i_81_n_0 ));
  (* HLUTNM = "lutpair12" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_82 
       (.I0(\buff2_reg[97]_i_103_n_6 ),
        .I1(\buff1_reg_n_0_[2] ),
        .I2(buff1_reg__1_n_103),
        .O(\buff2[97]_i_82_n_0 ));
  (* HLUTNM = "lutpair11" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    \buff2[97]_i_83 
       (.I0(\buff2_reg[97]_i_103_n_7 ),
        .I1(\buff1_reg_n_0_[1] ),
        .I2(buff1_reg__1_n_104),
        .O(\buff2[97]_i_83_n_0 ));
  (* HLUTNM = "lutpair15" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_84 
       (.I0(\buff2_reg[97]_i_88_n_7 ),
        .I1(\buff1_reg_n_0_[5] ),
        .I2(buff1_reg__1_n_100),
        .I3(\buff2[97]_i_80_n_0 ),
        .O(\buff2[97]_i_84_n_0 ));
  (* HLUTNM = "lutpair14" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_85 
       (.I0(\buff2_reg[97]_i_103_n_4 ),
        .I1(\buff1_reg_n_0_[4] ),
        .I2(buff1_reg__1_n_101),
        .I3(\buff2[97]_i_81_n_0 ),
        .O(\buff2[97]_i_85_n_0 ));
  (* HLUTNM = "lutpair13" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_86 
       (.I0(\buff2_reg[97]_i_103_n_5 ),
        .I1(\buff1_reg_n_0_[3] ),
        .I2(buff1_reg__1_n_102),
        .I3(\buff2[97]_i_82_n_0 ),
        .O(\buff2[97]_i_86_n_0 ));
  (* HLUTNM = "lutpair12" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_87 
       (.I0(\buff2_reg[97]_i_103_n_6 ),
        .I1(\buff1_reg_n_0_[2] ),
        .I2(buff1_reg__1_n_103),
        .I3(\buff2[97]_i_83_n_0 ),
        .O(\buff2[97]_i_87_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_89 
       (.I0(buff1_reg__2_n_78),
        .I1(buff1_reg__3_n_61),
        .I2(buff1_reg__2_n_77),
        .I3(buff1_reg__3_n_60),
        .O(\buff2[97]_i_89_n_0 ));
  (* HLUTNM = "lutpair37" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \buff2[97]_i_9 
       (.I0(\buff2_reg[97]_i_20_n_5 ),
        .I1(buff1_reg__0_n_95),
        .I2(buff1_reg__1_n_78),
        .I3(\buff2[97]_i_5_n_0 ),
        .O(\buff2[97]_i_9_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_90 
       (.I0(buff1_reg__2_n_79),
        .I1(buff1_reg__3_n_62),
        .I2(buff1_reg__2_n_78),
        .I3(buff1_reg__3_n_61),
        .O(\buff2[97]_i_90_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_91 
       (.I0(buff1_reg__2_n_80),
        .I1(buff1_reg__3_n_63),
        .I2(buff1_reg__2_n_79),
        .I3(buff1_reg__3_n_62),
        .O(\buff2[97]_i_91_n_0 ));
  LUT4 #(
    .INIT(16'hE00E)) 
    \buff2[97]_i_92 
       (.I0(buff1_reg__2_n_81),
        .I1(buff1_reg__3_n_64),
        .I2(buff1_reg__2_n_80),
        .I3(buff1_reg__3_n_63),
        .O(\buff2[97]_i_92_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_93 
       (.I0(buff1_reg__3_n_61),
        .I1(buff1_reg__2_n_78),
        .I2(buff1_reg__3_n_59),
        .I3(buff1_reg__2_n_76),
        .I4(buff1_reg__3_n_60),
        .I5(buff1_reg__2_n_77),
        .O(\buff2[97]_i_93_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_94 
       (.I0(buff1_reg__3_n_62),
        .I1(buff1_reg__2_n_79),
        .I2(buff1_reg__3_n_60),
        .I3(buff1_reg__2_n_77),
        .I4(buff1_reg__3_n_61),
        .I5(buff1_reg__2_n_78),
        .O(\buff2[97]_i_94_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_95 
       (.I0(buff1_reg__3_n_63),
        .I1(buff1_reg__2_n_80),
        .I2(buff1_reg__3_n_61),
        .I3(buff1_reg__2_n_78),
        .I4(buff1_reg__3_n_62),
        .I5(buff1_reg__2_n_79),
        .O(\buff2[97]_i_95_n_0 ));
  LUT6 #(
    .INIT(64'hE11E0FF00FF01EE1)) 
    \buff2[97]_i_96 
       (.I0(buff1_reg__3_n_64),
        .I1(buff1_reg__2_n_81),
        .I2(buff1_reg__3_n_62),
        .I3(buff1_reg__2_n_79),
        .I4(buff1_reg__3_n_63),
        .I5(buff1_reg__2_n_80),
        .O(\buff2[97]_i_96_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \buff2[97]_i_98 
       (.I0(buff1_reg__1_n_104),
        .I1(\buff2_reg[97]_i_103_n_7 ),
        .I2(\buff1_reg_n_0_[1] ),
        .O(\buff2[97]_i_98_n_0 ));
  (* HLUTNM = "lutpair11" *) 
  LUT5 #(
    .INIT(32'h69969696)) 
    \buff2[97]_i_99 
       (.I0(\buff2_reg[97]_i_103_n_7 ),
        .I1(\buff1_reg_n_0_[1] ),
        .I2(buff1_reg__1_n_104),
        .I3(\buff1_reg_n_0_[0] ),
        .I4(\buff2_reg[97]_i_117_n_4 ),
        .O(\buff2[97]_i_99_n_0 ));
  FDRE \buff2_reg[100] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[100]),
        .Q(\buff2_reg[111]_0 [4]),
        .R(1'b0));
  FDRE \buff2_reg[101] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[101]),
        .Q(\buff2_reg[111]_0 [5]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[101]_i_1 
       (.CI(\buff2_reg[97]_i_1_n_0 ),
        .CO({\buff2_reg[101]_i_1_n_0 ,\buff2_reg[101]_i_1_n_1 ,\buff2_reg[101]_i_1_n_2 ,\buff2_reg[101]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[101]_i_2_n_0 ,\buff2[101]_i_3_n_0 ,\buff2[101]_i_4_n_0 ,\buff2[101]_i_5_n_0 }),
        .O(buff1_reg__5[101:98]),
        .S({\buff2[101]_i_6_n_0 ,\buff2[101]_i_7_n_0 ,\buff2[101]_i_8_n_0 ,\buff2[101]_i_9_n_0 }));
  FDRE \buff2_reg[102] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[102]),
        .Q(\buff2_reg[111]_0 [6]),
        .R(1'b0));
  FDRE \buff2_reg[103] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[103]),
        .Q(\buff2_reg[111]_0 [7]),
        .R(1'b0));
  FDRE \buff2_reg[104] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[104]),
        .Q(\buff2_reg[111]_0 [8]),
        .R(1'b0));
  FDRE \buff2_reg[105] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[105]),
        .Q(\buff2_reg[111]_0 [9]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[105]_i_1 
       (.CI(\buff2_reg[101]_i_1_n_0 ),
        .CO({\buff2_reg[105]_i_1_n_0 ,\buff2_reg[105]_i_1_n_1 ,\buff2_reg[105]_i_1_n_2 ,\buff2_reg[105]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[105]_i_2_n_0 ,\buff2[105]_i_3_n_0 ,\buff2[105]_i_4_n_0 ,\buff2[105]_i_5_n_0 }),
        .O(buff1_reg__5[105:102]),
        .S({\buff2[105]_i_6_n_0 ,\buff2[105]_i_7_n_0 ,\buff2[105]_i_8_n_0 ,\buff2[105]_i_9_n_0 }));
  FDRE \buff2_reg[106] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[106]),
        .Q(\buff2_reg[111]_0 [10]),
        .R(1'b0));
  FDRE \buff2_reg[107] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[107]),
        .Q(\buff2_reg[111]_0 [11]),
        .R(1'b0));
  FDRE \buff2_reg[108] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[108]),
        .Q(\buff2_reg[111]_0 [12]),
        .R(1'b0));
  FDRE \buff2_reg[109] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[109]),
        .Q(\buff2_reg[111]_0 [13]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[109]_i_1 
       (.CI(\buff2_reg[105]_i_1_n_0 ),
        .CO({\buff2_reg[109]_i_1_n_0 ,\buff2_reg[109]_i_1_n_1 ,\buff2_reg[109]_i_1_n_2 ,\buff2_reg[109]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[109]_i_2_n_0 ,\buff2[109]_i_3_n_0 ,\buff2[109]_i_4_n_0 ,\buff2[109]_i_5_n_0 }),
        .O(buff1_reg__5[109:106]),
        .S({\buff2[109]_i_6_n_0 ,\buff2[109]_i_7_n_0 ,\buff2[109]_i_8_n_0 ,\buff2[109]_i_9_n_0 }));
  FDRE \buff2_reg[110] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[110]),
        .Q(\buff2_reg[111]_0 [14]),
        .R(1'b0));
  FDRE \buff2_reg[111] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[111]),
        .Q(\buff2_reg[111]_0 [15]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[111]_i_1 
       (.CI(\buff2_reg[109]_i_1_n_0 ),
        .CO({\NLW_buff2_reg[111]_i_1_CO_UNCONNECTED [3:1],\buff2_reg[111]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\buff2[111]_i_2_n_0 }),
        .O({\NLW_buff2_reg[111]_i_1_O_UNCONNECTED [3:2],buff1_reg__5[111:110]}),
        .S({1'b0,1'b0,\buff2[111]_i_3_n_0 ,\buff2[111]_i_4_n_0 }));
  CARRY4 \buff2_reg[111]_i_5 
       (.CI(\buff2_reg[97]_i_20_n_0 ),
        .CO({\NLW_buff2_reg[111]_i_5_CO_UNCONNECTED [3],\buff2_reg[111]_i_5_n_1 ,\NLW_buff2_reg[111]_i_5_CO_UNCONNECTED [1],\buff2_reg[111]_i_5_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,buff1_reg__2_n_59,buff1_reg__2_n_60}),
        .O({\NLW_buff2_reg[111]_i_5_O_UNCONNECTED [3:2],\buff2_reg[111]_i_5_n_6 ,\buff2_reg[111]_i_5_n_7 }),
        .S({1'b0,1'b1,\buff2[111]_i_8_n_0 ,\buff2[111]_i_9_n_0 }));
  FDRE \buff2_reg[96] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[96]),
        .Q(\buff2_reg[111]_0 [0]),
        .R(1'b0));
  FDRE \buff2_reg[97] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[97]),
        .Q(\buff2_reg[111]_0 [1]),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_1 
       (.CI(\buff2_reg[97]_i_2_n_0 ),
        .CO({\buff2_reg[97]_i_1_n_0 ,\buff2_reg[97]_i_1_n_1 ,\buff2_reg[97]_i_1_n_2 ,\buff2_reg[97]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_3_n_0 ,\buff2[97]_i_4_n_0 ,\buff2[97]_i_5_n_0 ,\buff2[97]_i_6_n_0 }),
        .O({buff1_reg__5[97:96],\NLW_buff2_reg[97]_i_1_O_UNCONNECTED [1:0]}),
        .S({\buff2[97]_i_7_n_0 ,\buff2[97]_i_8_n_0 ,\buff2[97]_i_9_n_0 ,\buff2[97]_i_10_n_0 }));
  CARRY4 \buff2_reg[97]_i_103 
       (.CI(\buff2_reg[97]_i_117_n_0 ),
        .CO({\buff2_reg[97]_i_103_n_0 ,\buff2_reg[97]_i_103_n_1 ,\buff2_reg[97]_i_103_n_2 ,\buff2_reg[97]_i_103_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_118_n_0 ,\buff2[97]_i_119_n_0 ,\buff2[97]_i_120_n_0 ,\buff2[97]_i_121_n_0 }),
        .O({\buff2_reg[97]_i_103_n_4 ,\buff2_reg[97]_i_103_n_5 ,\buff2_reg[97]_i_103_n_6 ,\buff2_reg[97]_i_103_n_7 }),
        .S({\buff2[97]_i_122_n_0 ,\buff2[97]_i_123_n_0 ,\buff2[97]_i_124_n_0 ,\buff2[97]_i_125_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_11 
       (.CI(\buff2_reg[97]_i_21_n_0 ),
        .CO({\buff2_reg[97]_i_11_n_0 ,\buff2_reg[97]_i_11_n_1 ,\buff2_reg[97]_i_11_n_2 ,\buff2_reg[97]_i_11_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_22_n_0 ,\buff2[97]_i_23_n_0 ,\buff2[97]_i_24_n_0 ,\buff2[97]_i_25_n_0 }),
        .O(\NLW_buff2_reg[97]_i_11_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_26_n_0 ,\buff2[97]_i_27_n_0 ,\buff2[97]_i_28_n_0 ,\buff2[97]_i_29_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_112 
       (.CI(\buff2_reg[97]_i_126_n_0 ),
        .CO({\buff2_reg[97]_i_112_n_0 ,\buff2_reg[97]_i_112_n_1 ,\buff2_reg[97]_i_112_n_2 ,\buff2_reg[97]_i_112_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff1_reg[10]__0_n_0 ,\buff1_reg[9]__0_n_0 ,\buff1_reg[8]__0_n_0 ,\buff1_reg[7]__0_n_0 }),
        .O(\NLW_buff2_reg[97]_i_112_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_127_n_0 ,\buff2[97]_i_128_n_0 ,\buff2[97]_i_129_n_0 ,\buff2[97]_i_130_n_0 }));
  CARRY4 \buff2_reg[97]_i_117 
       (.CI(\buff2_reg[97]_i_131_n_0 ),
        .CO({\buff2_reg[97]_i_117_n_0 ,\buff2_reg[97]_i_117_n_1 ,\buff2_reg[97]_i_117_n_2 ,\buff2_reg[97]_i_117_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_132_n_0 ,\buff2[97]_i_133_n_0 ,\buff2[97]_i_134_n_0 ,\buff2[97]_i_135_n_0 }),
        .O({\buff2_reg[97]_i_117_n_4 ,\buff2_reg[97]_i_117_n_5 ,\buff2_reg[97]_i_117_n_6 ,\buff2_reg[97]_i_117_n_7 }),
        .S({\buff2[97]_i_136_n_0 ,\buff2[97]_i_137_n_0 ,\buff2[97]_i_138_n_0 ,\buff2[97]_i_139_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_126 
       (.CI(\buff2_reg[97]_i_140_n_0 ),
        .CO({\buff2_reg[97]_i_126_n_0 ,\buff2_reg[97]_i_126_n_1 ,\buff2_reg[97]_i_126_n_2 ,\buff2_reg[97]_i_126_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff1_reg[6]__0_n_0 ,\buff1_reg[5]__0_n_0 ,\buff1_reg[4]__0_n_0 ,\buff1_reg[3]__0_n_0 }),
        .O(\NLW_buff2_reg[97]_i_126_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_141_n_0 ,\buff2[97]_i_142_n_0 ,\buff2[97]_i_143_n_0 ,\buff2[97]_i_144_n_0 }));
  CARRY4 \buff2_reg[97]_i_131 
       (.CI(\buff2_reg[97]_i_145_n_0 ),
        .CO({\buff2_reg[97]_i_131_n_0 ,\buff2_reg[97]_i_131_n_1 ,\buff2_reg[97]_i_131_n_2 ,\buff2_reg[97]_i_131_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_146_n_0 ,\buff2[97]_i_147_n_0 ,\buff2[97]_i_148_n_0 ,\buff2[97]_i_149_n_0 }),
        .O({\buff2_reg[97]_i_131_n_4 ,\buff2_reg[97]_i_131_n_5 ,\buff2_reg[97]_i_131_n_6 ,\buff2_reg[97]_i_131_n_7 }),
        .S({\buff2[97]_i_150_n_0 ,\buff2[97]_i_151_n_0 ,\buff2[97]_i_152_n_0 ,\buff2[97]_i_153_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_140 
       (.CI(1'b0),
        .CO({\buff2_reg[97]_i_140_n_0 ,\buff2_reg[97]_i_140_n_1 ,\buff2_reg[97]_i_140_n_2 ,\buff2_reg[97]_i_140_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff1_reg[2]__0_n_0 ,\buff1_reg[1]__0_n_0 ,\buff1_reg[0]__0_n_0 ,1'b0}),
        .O(\NLW_buff2_reg[97]_i_140_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_154_n_0 ,\buff2[97]_i_155_n_0 ,\buff2[97]_i_156_n_0 ,\buff2_reg[97]_i_157_n_6 }));
  CARRY4 \buff2_reg[97]_i_145 
       (.CI(\buff2_reg[97]_i_158_n_0 ),
        .CO({\buff2_reg[97]_i_145_n_0 ,\buff2_reg[97]_i_145_n_1 ,\buff2_reg[97]_i_145_n_2 ,\buff2_reg[97]_i_145_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_159_n_0 ,\buff2[97]_i_160_n_0 ,\buff2[97]_i_161_n_0 ,\buff2[97]_i_162_n_0 }),
        .O({\buff2_reg[97]_i_145_n_4 ,\buff2_reg[97]_i_145_n_5 ,\buff2_reg[97]_i_145_n_6 ,\buff2_reg[97]_i_145_n_7 }),
        .S({\buff2[97]_i_163_n_0 ,\buff2[97]_i_164_n_0 ,\buff2[97]_i_165_n_0 ,\buff2[97]_i_166_n_0 }));
  CARRY4 \buff2_reg[97]_i_157 
       (.CI(\buff2_reg[97]_i_167_n_0 ),
        .CO({\buff2_reg[97]_i_157_n_0 ,\buff2_reg[97]_i_157_n_1 ,\buff2_reg[97]_i_157_n_2 ,\buff2_reg[97]_i_157_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_168_n_0 ,buff1_reg__4_n_71,buff1_reg__4_n_72,buff1_reg__4_n_73}),
        .O({\buff2_reg[97]_i_157_n_4 ,\buff2_reg[97]_i_157_n_5 ,\buff2_reg[97]_i_157_n_6 ,\NLW_buff2_reg[97]_i_157_O_UNCONNECTED [0]}),
        .S({\buff2[97]_i_169_n_0 ,\buff2[97]_i_170_n_0 ,\buff2[97]_i_171_n_0 ,\buff2[97]_i_172_n_0 }));
  CARRY4 \buff2_reg[97]_i_158 
       (.CI(\buff2_reg[97]_i_157_n_0 ),
        .CO({\buff2_reg[97]_i_158_n_0 ,\buff2_reg[97]_i_158_n_1 ,\buff2_reg[97]_i_158_n_2 ,\buff2_reg[97]_i_158_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_173_n_0 ,\buff2[97]_i_174_n_0 ,\buff2[97]_i_175_n_0 ,\buff2[97]_i_176_n_0 }),
        .O({\buff2_reg[97]_i_158_n_4 ,\buff2_reg[97]_i_158_n_5 ,\buff2_reg[97]_i_158_n_6 ,\buff2_reg[97]_i_158_n_7 }),
        .S({\buff2[97]_i_177_n_0 ,\buff2[97]_i_178_n_0 ,\buff2[97]_i_179_n_0 ,\buff2[97]_i_180_n_0 }));
  CARRY4 \buff2_reg[97]_i_167 
       (.CI(\buff2_reg[97]_i_181_n_0 ),
        .CO({\buff2_reg[97]_i_167_n_0 ,\buff2_reg[97]_i_167_n_1 ,\buff2_reg[97]_i_167_n_2 ,\buff2_reg[97]_i_167_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__4_n_74,buff1_reg__4_n_75,buff1_reg__4_n_76,buff1_reg__4_n_77}),
        .O(\NLW_buff2_reg[97]_i_167_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_182_n_0 ,\buff2[97]_i_183_n_0 ,\buff2[97]_i_184_n_0 ,\buff2[97]_i_185_n_0 }));
  CARRY4 \buff2_reg[97]_i_181 
       (.CI(\buff2_reg[97]_i_186_n_0 ),
        .CO({\buff2_reg[97]_i_181_n_0 ,\buff2_reg[97]_i_181_n_1 ,\buff2_reg[97]_i_181_n_2 ,\buff2_reg[97]_i_181_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__4_n_78,buff1_reg__4_n_79,buff1_reg__4_n_80,buff1_reg__4_n_81}),
        .O(\NLW_buff2_reg[97]_i_181_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_187_n_0 ,\buff2[97]_i_188_n_0 ,\buff2[97]_i_189_n_0 ,\buff2[97]_i_190_n_0 }));
  CARRY4 \buff2_reg[97]_i_186 
       (.CI(\buff2_reg[97]_i_191_n_0 ),
        .CO({\buff2_reg[97]_i_186_n_0 ,\buff2_reg[97]_i_186_n_1 ,\buff2_reg[97]_i_186_n_2 ,\buff2_reg[97]_i_186_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__4_n_82,buff1_reg__4_n_83,buff1_reg__4_n_84,buff1_reg__4_n_85}),
        .O(\NLW_buff2_reg[97]_i_186_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_192_n_0 ,\buff2[97]_i_193_n_0 ,\buff2[97]_i_194_n_0 ,\buff2[97]_i_195_n_0 }));
  CARRY4 \buff2_reg[97]_i_191 
       (.CI(1'b0),
        .CO({\buff2_reg[97]_i_191_n_0 ,\buff2_reg[97]_i_191_n_1 ,\buff2_reg[97]_i_191_n_2 ,\buff2_reg[97]_i_191_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__4_n_86,buff1_reg__4_n_87,buff1_reg__4_n_88,1'b0}),
        .O(\NLW_buff2_reg[97]_i_191_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_196_n_0 ,\buff2[97]_i_197_n_0 ,\buff2[97]_i_198_n_0 ,buff1_reg__4_n_89}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_2 
       (.CI(\buff2_reg[97]_i_11_n_0 ),
        .CO({\buff2_reg[97]_i_2_n_0 ,\buff2_reg[97]_i_2_n_1 ,\buff2_reg[97]_i_2_n_2 ,\buff2_reg[97]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_12_n_0 ,\buff2[97]_i_13_n_0 ,\buff2[97]_i_14_n_0 ,\buff2[97]_i_15_n_0 }),
        .O(\NLW_buff2_reg[97]_i_2_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_16_n_0 ,\buff2[97]_i_17_n_0 ,\buff2[97]_i_18_n_0 ,\buff2[97]_i_19_n_0 }));
  CARRY4 \buff2_reg[97]_i_20 
       (.CI(\buff2_reg[97]_i_30_n_0 ),
        .CO({\buff2_reg[97]_i_20_n_0 ,\buff2_reg[97]_i_20_n_1 ,\buff2_reg[97]_i_20_n_2 ,\buff2_reg[97]_i_20_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_61,buff1_reg__2_n_62,buff1_reg__2_n_63,buff1_reg__2_n_64}),
        .O({\buff2_reg[97]_i_20_n_4 ,\buff2_reg[97]_i_20_n_5 ,\buff2_reg[97]_i_20_n_6 ,\buff2_reg[97]_i_20_n_7 }),
        .S({\buff2[97]_i_31_n_0 ,\buff2[97]_i_32_n_0 ,\buff2[97]_i_33_n_0 ,\buff2[97]_i_34_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_21 
       (.CI(\buff2_reg[97]_i_35_n_0 ),
        .CO({\buff2_reg[97]_i_21_n_0 ,\buff2_reg[97]_i_21_n_1 ,\buff2_reg[97]_i_21_n_2 ,\buff2_reg[97]_i_21_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_36_n_0 ,\buff2[97]_i_37_n_0 ,\buff2[97]_i_38_n_0 ,\buff2[97]_i_39_n_0 }),
        .O(\NLW_buff2_reg[97]_i_21_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_40_n_0 ,\buff2[97]_i_41_n_0 ,\buff2[97]_i_42_n_0 ,\buff2[97]_i_43_n_0 }));
  CARRY4 \buff2_reg[97]_i_30 
       (.CI(\buff2_reg[97]_i_44_n_0 ),
        .CO({\buff2_reg[97]_i_30_n_0 ,\buff2_reg[97]_i_30_n_1 ,\buff2_reg[97]_i_30_n_2 ,\buff2_reg[97]_i_30_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_65,buff1_reg__2_n_66,buff1_reg__2_n_67,buff1_reg__2_n_68}),
        .O({\buff2_reg[97]_i_30_n_4 ,\buff2_reg[97]_i_30_n_5 ,\buff2_reg[97]_i_30_n_6 ,\buff2_reg[97]_i_30_n_7 }),
        .S({\buff2[97]_i_45_n_0 ,\buff2[97]_i_46_n_0 ,\buff2[97]_i_47_n_0 ,\buff2[97]_i_48_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_35 
       (.CI(\buff2_reg[97]_i_49_n_0 ),
        .CO({\buff2_reg[97]_i_35_n_0 ,\buff2_reg[97]_i_35_n_1 ,\buff2_reg[97]_i_35_n_2 ,\buff2_reg[97]_i_35_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_50_n_0 ,\buff2[97]_i_51_n_0 ,\buff2[97]_i_52_n_0 ,\buff2[97]_i_53_n_0 }),
        .O(\NLW_buff2_reg[97]_i_35_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_54_n_0 ,\buff2[97]_i_55_n_0 ,\buff2[97]_i_56_n_0 ,\buff2[97]_i_57_n_0 }));
  CARRY4 \buff2_reg[97]_i_44 
       (.CI(\buff2_reg[97]_i_58_n_0 ),
        .CO({\buff2_reg[97]_i_44_n_0 ,\buff2_reg[97]_i_44_n_1 ,\buff2_reg[97]_i_44_n_2 ,\buff2_reg[97]_i_44_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_69,buff1_reg__2_n_70,buff1_reg__2_n_71,buff1_reg__2_n_72}),
        .O({\buff2_reg[97]_i_44_n_4 ,\buff2_reg[97]_i_44_n_5 ,\buff2_reg[97]_i_44_n_6 ,\buff2_reg[97]_i_44_n_7 }),
        .S({\buff2[97]_i_59_n_0 ,\buff2[97]_i_60_n_0 ,\buff2[97]_i_61_n_0 ,\buff2[97]_i_62_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_49 
       (.CI(\buff2_reg[97]_i_63_n_0 ),
        .CO({\buff2_reg[97]_i_49_n_0 ,\buff2_reg[97]_i_49_n_1 ,\buff2_reg[97]_i_49_n_2 ,\buff2_reg[97]_i_49_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_64_n_0 ,\buff2[97]_i_65_n_0 ,\buff2[97]_i_66_n_0 ,\buff2[97]_i_67_n_0 }),
        .O(\NLW_buff2_reg[97]_i_49_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_68_n_0 ,\buff2[97]_i_69_n_0 ,\buff2[97]_i_70_n_0 ,\buff2[97]_i_71_n_0 }));
  CARRY4 \buff2_reg[97]_i_58 
       (.CI(\buff2_reg[97]_i_72_n_0 ),
        .CO({\buff2_reg[97]_i_58_n_0 ,\buff2_reg[97]_i_58_n_1 ,\buff2_reg[97]_i_58_n_2 ,\buff2_reg[97]_i_58_n_3 }),
        .CYINIT(1'b0),
        .DI({buff1_reg__2_n_73,buff1_reg__2_n_74,\buff2[97]_i_73_n_0 ,\buff2[97]_i_74_n_0 }),
        .O({\buff2_reg[97]_i_58_n_4 ,\buff2_reg[97]_i_58_n_5 ,\buff2_reg[97]_i_58_n_6 ,\buff2_reg[97]_i_58_n_7 }),
        .S({\buff2[97]_i_75_n_0 ,\buff2[97]_i_76_n_0 ,\buff2[97]_i_77_n_0 ,\buff2[97]_i_78_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_63 
       (.CI(\buff2_reg[97]_i_79_n_0 ),
        .CO({\buff2_reg[97]_i_63_n_0 ,\buff2_reg[97]_i_63_n_1 ,\buff2_reg[97]_i_63_n_2 ,\buff2_reg[97]_i_63_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_80_n_0 ,\buff2[97]_i_81_n_0 ,\buff2[97]_i_82_n_0 ,\buff2[97]_i_83_n_0 }),
        .O(\NLW_buff2_reg[97]_i_63_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_84_n_0 ,\buff2[97]_i_85_n_0 ,\buff2[97]_i_86_n_0 ,\buff2[97]_i_87_n_0 }));
  CARRY4 \buff2_reg[97]_i_72 
       (.CI(\buff2_reg[97]_i_88_n_0 ),
        .CO({\buff2_reg[97]_i_72_n_0 ,\buff2_reg[97]_i_72_n_1 ,\buff2_reg[97]_i_72_n_2 ,\buff2_reg[97]_i_72_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_89_n_0 ,\buff2[97]_i_90_n_0 ,\buff2[97]_i_91_n_0 ,\buff2[97]_i_92_n_0 }),
        .O({\buff2_reg[97]_i_72_n_4 ,\buff2_reg[97]_i_72_n_5 ,\buff2_reg[97]_i_72_n_6 ,\buff2_reg[97]_i_72_n_7 }),
        .S({\buff2[97]_i_93_n_0 ,\buff2[97]_i_94_n_0 ,\buff2[97]_i_95_n_0 ,\buff2[97]_i_96_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_79 
       (.CI(\buff2_reg[97]_i_97_n_0 ),
        .CO({\buff2_reg[97]_i_79_n_0 ,\buff2_reg[97]_i_79_n_1 ,\buff2_reg[97]_i_79_n_2 ,\buff2_reg[97]_i_79_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_98_n_0 ,buff1_reg__1_n_105,\buff1_reg[16]__0_n_0 ,\buff1_reg[15]__0_n_0 }),
        .O(\NLW_buff2_reg[97]_i_79_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_99_n_0 ,\buff2[97]_i_100_n_0 ,\buff2[97]_i_101_n_0 ,\buff2[97]_i_102_n_0 }));
  CARRY4 \buff2_reg[97]_i_88 
       (.CI(\buff2_reg[97]_i_103_n_0 ),
        .CO({\buff2_reg[97]_i_88_n_0 ,\buff2_reg[97]_i_88_n_1 ,\buff2_reg[97]_i_88_n_2 ,\buff2_reg[97]_i_88_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff2[97]_i_104_n_0 ,\buff2[97]_i_105_n_0 ,\buff2[97]_i_106_n_0 ,\buff2[97]_i_107_n_0 }),
        .O({\buff2_reg[97]_i_88_n_4 ,\buff2_reg[97]_i_88_n_5 ,\buff2_reg[97]_i_88_n_6 ,\buff2_reg[97]_i_88_n_7 }),
        .S({\buff2[97]_i_108_n_0 ,\buff2[97]_i_109_n_0 ,\buff2[97]_i_110_n_0 ,\buff2[97]_i_111_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \buff2_reg[97]_i_97 
       (.CI(\buff2_reg[97]_i_112_n_0 ),
        .CO({\buff2_reg[97]_i_97_n_0 ,\buff2_reg[97]_i_97_n_1 ,\buff2_reg[97]_i_97_n_2 ,\buff2_reg[97]_i_97_n_3 }),
        .CYINIT(1'b0),
        .DI({\buff1_reg[14]__0_n_0 ,\buff1_reg[13]__0_n_0 ,\buff1_reg[12]__0_n_0 ,\buff1_reg[11]__0_n_0 }),
        .O(\NLW_buff2_reg[97]_i_97_O_UNCONNECTED [3:0]),
        .S({\buff2[97]_i_113_n_0 ,\buff2[97]_i_114_n_0 ,\buff2[97]_i_115_n_0 ,\buff2[97]_i_116_n_0 }));
  FDRE \buff2_reg[98] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[98]),
        .Q(\buff2_reg[111]_0 [2]),
        .R(1'b0));
  FDRE \buff2_reg[99] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff1_reg__5[99]),
        .Q(\buff2_reg[111]_0 [3]),
        .R(1'b0));
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[50:34]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
        .PCIN({buff0_reg_n_106,buff0_reg_n_107,buff0_reg_n_108,buff0_reg_n_109,buff0_reg_n_110,buff0_reg_n_111,buff0_reg_n_112,buff0_reg_n_113,buff0_reg_n_114,buff0_reg_n_115,buff0_reg_n_116,buff0_reg_n_117,buff0_reg_n_118,buff0_reg_n_119,buff0_reg_n_120,buff0_reg_n_121,buff0_reg_n_122,buff0_reg_n_123,buff0_reg_n_124,buff0_reg_n_125,buff0_reg_n_126,buff0_reg_n_127,buff0_reg_n_128,buff0_reg_n_129,buff0_reg_n_130,buff0_reg_n_131,buff0_reg_n_132,buff0_reg_n_133,buff0_reg_n_134,buff0_reg_n_135,buff0_reg_n_136,buff0_reg_n_137,buff0_reg_n_138,buff0_reg_n_139,buff0_reg_n_140,buff0_reg_n_141,buff0_reg_n_142,buff0_reg_n_143,buff0_reg_n_144,buff0_reg_n_145,buff0_reg_n_146,buff0_reg_n_147,buff0_reg_n_148,buff0_reg_n_149,buff0_reg_n_150,buff0_reg_n_151,buff0_reg_n_152,buff0_reg_n_153}),
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
    tmp_product__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[33:17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__0_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product__0_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__0_n_106,buff0_reg__0_n_107,buff0_reg__0_n_108,buff0_reg__0_n_109,buff0_reg__0_n_110,buff0_reg__0_n_111,buff0_reg__0_n_112,buff0_reg__0_n_113,buff0_reg__0_n_114,buff0_reg__0_n_115,buff0_reg__0_n_116,buff0_reg__0_n_117,buff0_reg__0_n_118,buff0_reg__0_n_119,buff0_reg__0_n_120,buff0_reg__0_n_121,buff0_reg__0_n_122,buff0_reg__0_n_123,buff0_reg__0_n_124,buff0_reg__0_n_125,buff0_reg__0_n_126,buff0_reg__0_n_127,buff0_reg__0_n_128,buff0_reg__0_n_129,buff0_reg__0_n_130,buff0_reg__0_n_131,buff0_reg__0_n_132,buff0_reg__0_n_133,buff0_reg__0_n_134,buff0_reg__0_n_135,buff0_reg__0_n_136,buff0_reg__0_n_137,buff0_reg__0_n_138,buff0_reg__0_n_139,buff0_reg__0_n_140,buff0_reg__0_n_141,buff0_reg__0_n_142,buff0_reg__0_n_143,buff0_reg__0_n_144,buff0_reg__0_n_145,buff0_reg__0_n_146,buff0_reg__0_n_147,buff0_reg__0_n_148,buff0_reg__0_n_149,buff0_reg__0_n_150,buff0_reg__0_n_151,buff0_reg__0_n_152,buff0_reg__0_n_153}),
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
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_1
       (.I0(p_5[33]),
        .O(xor_ln20_fu_110_p2[33]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_10
       (.I0(p_5[24]),
        .O(xor_ln20_fu_110_p2[24]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_11
       (.I0(p_5[23]),
        .O(xor_ln20_fu_110_p2[23]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_12
       (.I0(p_5[22]),
        .O(xor_ln20_fu_110_p2[22]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_13
       (.I0(p_5[21]),
        .O(xor_ln20_fu_110_p2[21]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_14
       (.I0(p_5[20]),
        .O(xor_ln20_fu_110_p2[20]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_15
       (.I0(p_5[19]),
        .O(xor_ln20_fu_110_p2[19]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_16
       (.I0(p_5[18]),
        .O(xor_ln20_fu_110_p2[18]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_17
       (.I0(p_5[17]),
        .O(xor_ln20_fu_110_p2[17]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_2
       (.I0(p_5[32]),
        .O(xor_ln20_fu_110_p2[32]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_3
       (.I0(p_5[31]),
        .O(xor_ln20_fu_110_p2[31]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_4
       (.I0(p_5[30]),
        .O(xor_ln20_fu_110_p2[30]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_5
       (.I0(p_5[29]),
        .O(xor_ln20_fu_110_p2[29]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_6
       (.I0(p_5[28]),
        .O(xor_ln20_fu_110_p2[28]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_7
       (.I0(p_5[27]),
        .O(xor_ln20_fu_110_p2[27]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_8
       (.I0(p_5[26]),
        .O(xor_ln20_fu_110_p2[26]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product__0_i_9
       (.I0(p_5[25]),
        .O(xor_ln20_fu_110_p2[25]));
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[33:17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1,1'b1}),
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
        .PCIN({buff0_reg__1_n_106,buff0_reg__1_n_107,buff0_reg__1_n_108,buff0_reg__1_n_109,buff0_reg__1_n_110,buff0_reg__1_n_111,buff0_reg__1_n_112,buff0_reg__1_n_113,buff0_reg__1_n_114,buff0_reg__1_n_115,buff0_reg__1_n_116,buff0_reg__1_n_117,buff0_reg__1_n_118,buff0_reg__1_n_119,buff0_reg__1_n_120,buff0_reg__1_n_121,buff0_reg__1_n_122,buff0_reg__1_n_123,buff0_reg__1_n_124,buff0_reg__1_n_125,buff0_reg__1_n_126,buff0_reg__1_n_127,buff0_reg__1_n_128,buff0_reg__1_n_129,buff0_reg__1_n_130,buff0_reg__1_n_131,buff0_reg__1_n_132,buff0_reg__1_n_133,buff0_reg__1_n_134,buff0_reg__1_n_135,buff0_reg__1_n_136,buff0_reg__1_n_137,buff0_reg__1_n_138,buff0_reg__1_n_139,buff0_reg__1_n_140,buff0_reg__1_n_141,buff0_reg__1_n_142,buff0_reg__1_n_143,buff0_reg__1_n_144,buff0_reg__1_n_145,buff0_reg__1_n_146,buff0_reg__1_n_147,buff0_reg__1_n_148,buff0_reg__1_n_149,buff0_reg__1_n_150,buff0_reg__1_n_151,buff0_reg__1_n_152,buff0_reg__1_n_153}),
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
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[33:17]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1}),
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
        .OPMODE({1'b0,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__2_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product__2_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product__2_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__2_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__2_n_106,buff0_reg__2_n_107,buff0_reg__2_n_108,buff0_reg__2_n_109,buff0_reg__2_n_110,buff0_reg__2_n_111,buff0_reg__2_n_112,buff0_reg__2_n_113,buff0_reg__2_n_114,buff0_reg__2_n_115,buff0_reg__2_n_116,buff0_reg__2_n_117,buff0_reg__2_n_118,buff0_reg__2_n_119,buff0_reg__2_n_120,buff0_reg__2_n_121,buff0_reg__2_n_122,buff0_reg__2_n_123,buff0_reg__2_n_124,buff0_reg__2_n_125,buff0_reg__2_n_126,buff0_reg__2_n_127,buff0_reg__2_n_128,buff0_reg__2_n_129,buff0_reg__2_n_130,buff0_reg__2_n_131,buff0_reg__2_n_132,buff0_reg__2_n_133,buff0_reg__2_n_134,buff0_reg__2_n_135,buff0_reg__2_n_136,buff0_reg__2_n_137,buff0_reg__2_n_138,buff0_reg__2_n_139,buff0_reg__2_n_140,buff0_reg__2_n_141,buff0_reg__2_n_142,buff0_reg__2_n_143,buff0_reg__2_n_144,buff0_reg__2_n_145,buff0_reg__2_n_146,buff0_reg__2_n_147,buff0_reg__2_n_148,buff0_reg__2_n_149,buff0_reg__2_n_150,buff0_reg__2_n_151,buff0_reg__2_n_152,buff0_reg__2_n_153}),
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
    tmp_product__3
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,xor_ln20_fu_110_p2[16:10],p_5[9:8],xor_ln20_fu_110_p2[7:5],p_5[4],xor_ln20_fu_110_p2[3:2],p_5[1:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product__3_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,1'b1,1'b1,1'b1,1'b1,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1,1'b1}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__3_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__3_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__3_CARRYOUT_UNCONNECTED[3:0]),
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
        .MULTSIGNOUT(NLW_tmp_product__3_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__3_OVERFLOW_UNCONNECTED),
        .P(NLW_tmp_product__3_P_UNCONNECTED[47:0]),
        .PATTERNBDETECT(NLW_tmp_product__3_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__3_PATTERNDETECT_UNCONNECTED),
        .PCIN({buff0_reg__3_n_106,buff0_reg__3_n_107,buff0_reg__3_n_108,buff0_reg__3_n_109,buff0_reg__3_n_110,buff0_reg__3_n_111,buff0_reg__3_n_112,buff0_reg__3_n_113,buff0_reg__3_n_114,buff0_reg__3_n_115,buff0_reg__3_n_116,buff0_reg__3_n_117,buff0_reg__3_n_118,buff0_reg__3_n_119,buff0_reg__3_n_120,buff0_reg__3_n_121,buff0_reg__3_n_122,buff0_reg__3_n_123,buff0_reg__3_n_124,buff0_reg__3_n_125,buff0_reg__3_n_126,buff0_reg__3_n_127,buff0_reg__3_n_128,buff0_reg__3_n_129,buff0_reg__3_n_130,buff0_reg__3_n_131,buff0_reg__3_n_132,buff0_reg__3_n_133,buff0_reg__3_n_134,buff0_reg__3_n_135,buff0_reg__3_n_136,buff0_reg__3_n_137,buff0_reg__3_n_138,buff0_reg__3_n_139,buff0_reg__3_n_140,buff0_reg__3_n_141,buff0_reg__3_n_142,buff0_reg__3_n_143,buff0_reg__3_n_144,buff0_reg__3_n_145,buff0_reg__3_n_146,buff0_reg__3_n_147,buff0_reg__3_n_148,buff0_reg__3_n_149,buff0_reg__3_n_150,buff0_reg__3_n_151,buff0_reg__3_n_152,buff0_reg__3_n_153}),
        .PCOUT({tmp_product__3_n_106,tmp_product__3_n_107,tmp_product__3_n_108,tmp_product__3_n_109,tmp_product__3_n_110,tmp_product__3_n_111,tmp_product__3_n_112,tmp_product__3_n_113,tmp_product__3_n_114,tmp_product__3_n_115,tmp_product__3_n_116,tmp_product__3_n_117,tmp_product__3_n_118,tmp_product__3_n_119,tmp_product__3_n_120,tmp_product__3_n_121,tmp_product__3_n_122,tmp_product__3_n_123,tmp_product__3_n_124,tmp_product__3_n_125,tmp_product__3_n_126,tmp_product__3_n_127,tmp_product__3_n_128,tmp_product__3_n_129,tmp_product__3_n_130,tmp_product__3_n_131,tmp_product__3_n_132,tmp_product__3_n_133,tmp_product__3_n_134,tmp_product__3_n_135,tmp_product__3_n_136,tmp_product__3_n_137,tmp_product__3_n_138,tmp_product__3_n_139,tmp_product__3_n_140,tmp_product__3_n_141,tmp_product__3_n_142,tmp_product__3_n_143,tmp_product__3_n_144,tmp_product__3_n_145,tmp_product__3_n_146,tmp_product__3_n_147,tmp_product__3_n_148,tmp_product__3_n_149,tmp_product__3_n_150,tmp_product__3_n_151,tmp_product__3_n_152,tmp_product__3_n_153}),
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
        .UNDERFLOW(NLW_tmp_product__3_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_1
       (.I0(p_5[50]),
        .O(xor_ln20_fu_110_p2[50]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_10
       (.I0(p_5[41]),
        .O(xor_ln20_fu_110_p2[41]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_11
       (.I0(p_5[40]),
        .O(xor_ln20_fu_110_p2[40]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_12
       (.I0(p_5[39]),
        .O(xor_ln20_fu_110_p2[39]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_13
       (.I0(p_5[38]),
        .O(xor_ln20_fu_110_p2[38]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_14
       (.I0(p_5[37]),
        .O(xor_ln20_fu_110_p2[37]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_15
       (.I0(p_5[36]),
        .O(xor_ln20_fu_110_p2[36]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_16
       (.I0(p_5[35]),
        .O(xor_ln20_fu_110_p2[35]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_17
       (.I0(p_5[34]),
        .O(xor_ln20_fu_110_p2[34]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_2
       (.I0(p_5[49]),
        .O(xor_ln20_fu_110_p2[49]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_3
       (.I0(p_5[48]),
        .O(xor_ln20_fu_110_p2[48]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_4
       (.I0(p_5[47]),
        .O(xor_ln20_fu_110_p2[47]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_5
       (.I0(p_5[46]),
        .O(xor_ln20_fu_110_p2[46]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_6
       (.I0(p_5[45]),
        .O(xor_ln20_fu_110_p2[45]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_7
       (.I0(p_5[44]),
        .O(xor_ln20_fu_110_p2[44]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_8
       (.I0(p_5[43]),
        .O(xor_ln20_fu_110_p2[43]));
  LUT1 #(
    .INIT(2'h1)) 
    tmp_product_i_9
       (.I0(p_5[42]),
        .O(xor_ln20_fu_110_p2[42]));
endmodule

(* ORIG_REF_NAME = "fn1_srem_64ns_33ns_16_68_seq_1" *) 
module bd_0_hls_inst_0_fn1_srem_64ns_33ns_16_68_seq_1
   (r_stage_reg_r_5,
    r_stage_reg_r_26,
    \remd_reg[15] ,
    ap_clk,
    ap_rst,
    ap_start,
    Q,
    p_5);
  output r_stage_reg_r_5;
  output r_stage_reg_r_26;
  output [15:0]\remd_reg[15] ;
  input ap_clk;
  input ap_rst;
  input ap_start;
  input [0:0]Q;
  input [63:0]p_5;

  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire [63:0]p_5;
  wire r_stage_reg_r_26;
  wire r_stage_reg_r_5;
  wire [15:0]\remd_reg[15] ;

  bd_0_hls_inst_0_fn1_srem_64ns_33ns_16_68_seq_1_div fn1_srem_64ns_33ns_16_68_seq_1_div_U
       (.Q(Q),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p_5(p_5),
        .r_stage_reg_r_26(r_stage_reg_r_26),
        .r_stage_reg_r_5(r_stage_reg_r_5),
        .\remd_reg[15]_0 (\remd_reg[15] ));
endmodule

(* ORIG_REF_NAME = "fn1_srem_64ns_33ns_16_68_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_srem_64ns_33ns_16_68_seq_1_div
   (r_stage_reg_r_5,
    r_stage_reg_r_26,
    \remd_reg[15]_0 ,
    ap_clk,
    ap_rst,
    ap_start,
    Q,
    p_5);
  output r_stage_reg_r_5;
  output r_stage_reg_r_26;
  output [15:0]\remd_reg[15]_0 ;
  input ap_clk;
  input ap_rst;
  input ap_start;
  input [0:0]Q;
  input [63:0]p_5;

  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire \dividend0[12]_i_3_n_0 ;
  wire \dividend0[12]_i_4_n_0 ;
  wire \dividend0[12]_i_5_n_0 ;
  wire \dividend0[12]_i_6_n_0 ;
  wire \dividend0[16]_i_3_n_0 ;
  wire \dividend0[16]_i_4_n_0 ;
  wire \dividend0[16]_i_5_n_0 ;
  wire \dividend0[16]_i_6_n_0 ;
  wire \dividend0[20]_i_3_n_0 ;
  wire \dividend0[20]_i_4_n_0 ;
  wire \dividend0[20]_i_5_n_0 ;
  wire \dividend0[20]_i_6_n_0 ;
  wire \dividend0[24]_i_3_n_0 ;
  wire \dividend0[24]_i_4_n_0 ;
  wire \dividend0[24]_i_5_n_0 ;
  wire \dividend0[24]_i_6_n_0 ;
  wire \dividend0[28]_i_3_n_0 ;
  wire \dividend0[28]_i_4_n_0 ;
  wire \dividend0[28]_i_5_n_0 ;
  wire \dividend0[28]_i_6_n_0 ;
  wire \dividend0[32]_i_3_n_0 ;
  wire \dividend0[32]_i_4_n_0 ;
  wire \dividend0[32]_i_5_n_0 ;
  wire \dividend0[32]_i_6_n_0 ;
  wire \dividend0[36]_i_3_n_0 ;
  wire \dividend0[36]_i_4_n_0 ;
  wire \dividend0[36]_i_5_n_0 ;
  wire \dividend0[36]_i_6_n_0 ;
  wire \dividend0[40]_i_3_n_0 ;
  wire \dividend0[40]_i_4_n_0 ;
  wire \dividend0[40]_i_5_n_0 ;
  wire \dividend0[40]_i_6_n_0 ;
  wire \dividend0[44]_i_3_n_0 ;
  wire \dividend0[44]_i_4_n_0 ;
  wire \dividend0[44]_i_5_n_0 ;
  wire \dividend0[44]_i_6_n_0 ;
  wire \dividend0[48]_i_3_n_0 ;
  wire \dividend0[48]_i_4_n_0 ;
  wire \dividend0[48]_i_5_n_0 ;
  wire \dividend0[48]_i_6_n_0 ;
  wire \dividend0[4]_i_3_n_0 ;
  wire \dividend0[4]_i_4_n_0 ;
  wire \dividend0[4]_i_5_n_0 ;
  wire \dividend0[4]_i_6_n_0 ;
  wire \dividend0[4]_i_7_n_0 ;
  wire \dividend0[52]_i_3_n_0 ;
  wire \dividend0[52]_i_4_n_0 ;
  wire \dividend0[52]_i_5_n_0 ;
  wire \dividend0[52]_i_6_n_0 ;
  wire \dividend0[56]_i_3_n_0 ;
  wire \dividend0[56]_i_4_n_0 ;
  wire \dividend0[56]_i_5_n_0 ;
  wire \dividend0[56]_i_6_n_0 ;
  wire \dividend0[60]_i_3_n_0 ;
  wire \dividend0[60]_i_4_n_0 ;
  wire \dividend0[60]_i_5_n_0 ;
  wire \dividend0[60]_i_6_n_0 ;
  wire \dividend0[63]_i_3_n_0 ;
  wire \dividend0[63]_i_4_n_0 ;
  wire \dividend0[63]_i_5_n_0 ;
  wire \dividend0[8]_i_3_n_0 ;
  wire \dividend0[8]_i_4_n_0 ;
  wire \dividend0[8]_i_5_n_0 ;
  wire \dividend0[8]_i_6_n_0 ;
  wire \dividend0_reg[12]_i_2_n_0 ;
  wire \dividend0_reg[12]_i_2_n_1 ;
  wire \dividend0_reg[12]_i_2_n_2 ;
  wire \dividend0_reg[12]_i_2_n_3 ;
  wire \dividend0_reg[16]_i_2_n_0 ;
  wire \dividend0_reg[16]_i_2_n_1 ;
  wire \dividend0_reg[16]_i_2_n_2 ;
  wire \dividend0_reg[16]_i_2_n_3 ;
  wire \dividend0_reg[20]_i_2_n_0 ;
  wire \dividend0_reg[20]_i_2_n_1 ;
  wire \dividend0_reg[20]_i_2_n_2 ;
  wire \dividend0_reg[20]_i_2_n_3 ;
  wire \dividend0_reg[24]_i_2_n_0 ;
  wire \dividend0_reg[24]_i_2_n_1 ;
  wire \dividend0_reg[24]_i_2_n_2 ;
  wire \dividend0_reg[24]_i_2_n_3 ;
  wire \dividend0_reg[28]_i_2_n_0 ;
  wire \dividend0_reg[28]_i_2_n_1 ;
  wire \dividend0_reg[28]_i_2_n_2 ;
  wire \dividend0_reg[28]_i_2_n_3 ;
  wire \dividend0_reg[32]_i_2_n_0 ;
  wire \dividend0_reg[32]_i_2_n_1 ;
  wire \dividend0_reg[32]_i_2_n_2 ;
  wire \dividend0_reg[32]_i_2_n_3 ;
  wire \dividend0_reg[36]_i_2_n_0 ;
  wire \dividend0_reg[36]_i_2_n_1 ;
  wire \dividend0_reg[36]_i_2_n_2 ;
  wire \dividend0_reg[36]_i_2_n_3 ;
  wire \dividend0_reg[40]_i_2_n_0 ;
  wire \dividend0_reg[40]_i_2_n_1 ;
  wire \dividend0_reg[40]_i_2_n_2 ;
  wire \dividend0_reg[40]_i_2_n_3 ;
  wire \dividend0_reg[44]_i_2_n_0 ;
  wire \dividend0_reg[44]_i_2_n_1 ;
  wire \dividend0_reg[44]_i_2_n_2 ;
  wire \dividend0_reg[44]_i_2_n_3 ;
  wire \dividend0_reg[48]_i_2_n_0 ;
  wire \dividend0_reg[48]_i_2_n_1 ;
  wire \dividend0_reg[48]_i_2_n_2 ;
  wire \dividend0_reg[48]_i_2_n_3 ;
  wire \dividend0_reg[4]_i_2_n_0 ;
  wire \dividend0_reg[4]_i_2_n_1 ;
  wire \dividend0_reg[4]_i_2_n_2 ;
  wire \dividend0_reg[4]_i_2_n_3 ;
  wire \dividend0_reg[52]_i_2_n_0 ;
  wire \dividend0_reg[52]_i_2_n_1 ;
  wire \dividend0_reg[52]_i_2_n_2 ;
  wire \dividend0_reg[52]_i_2_n_3 ;
  wire \dividend0_reg[56]_i_2_n_0 ;
  wire \dividend0_reg[56]_i_2_n_1 ;
  wire \dividend0_reg[56]_i_2_n_2 ;
  wire \dividend0_reg[56]_i_2_n_3 ;
  wire \dividend0_reg[60]_i_2_n_0 ;
  wire \dividend0_reg[60]_i_2_n_1 ;
  wire \dividend0_reg[60]_i_2_n_2 ;
  wire \dividend0_reg[60]_i_2_n_3 ;
  wire \dividend0_reg[63]_i_2_n_2 ;
  wire \dividend0_reg[63]_i_2_n_3 ;
  wire \dividend0_reg[8]_i_2_n_0 ;
  wire \dividend0_reg[8]_i_2_n_1 ;
  wire \dividend0_reg[8]_i_2_n_2 ;
  wire \dividend0_reg[8]_i_2_n_3 ;
  wire \dividend0_reg_n_0_[0] ;
  wire \dividend0_reg_n_0_[10] ;
  wire \dividend0_reg_n_0_[11] ;
  wire \dividend0_reg_n_0_[12] ;
  wire \dividend0_reg_n_0_[13] ;
  wire \dividend0_reg_n_0_[14] ;
  wire \dividend0_reg_n_0_[15] ;
  wire \dividend0_reg_n_0_[16] ;
  wire \dividend0_reg_n_0_[17] ;
  wire \dividend0_reg_n_0_[18] ;
  wire \dividend0_reg_n_0_[19] ;
  wire \dividend0_reg_n_0_[1] ;
  wire \dividend0_reg_n_0_[20] ;
  wire \dividend0_reg_n_0_[21] ;
  wire \dividend0_reg_n_0_[22] ;
  wire \dividend0_reg_n_0_[23] ;
  wire \dividend0_reg_n_0_[24] ;
  wire \dividend0_reg_n_0_[25] ;
  wire \dividend0_reg_n_0_[26] ;
  wire \dividend0_reg_n_0_[27] ;
  wire \dividend0_reg_n_0_[28] ;
  wire \dividend0_reg_n_0_[29] ;
  wire \dividend0_reg_n_0_[2] ;
  wire \dividend0_reg_n_0_[30] ;
  wire \dividend0_reg_n_0_[31] ;
  wire \dividend0_reg_n_0_[32] ;
  wire \dividend0_reg_n_0_[33] ;
  wire \dividend0_reg_n_0_[34] ;
  wire \dividend0_reg_n_0_[35] ;
  wire \dividend0_reg_n_0_[36] ;
  wire \dividend0_reg_n_0_[37] ;
  wire \dividend0_reg_n_0_[38] ;
  wire \dividend0_reg_n_0_[39] ;
  wire \dividend0_reg_n_0_[3] ;
  wire \dividend0_reg_n_0_[40] ;
  wire \dividend0_reg_n_0_[41] ;
  wire \dividend0_reg_n_0_[42] ;
  wire \dividend0_reg_n_0_[43] ;
  wire \dividend0_reg_n_0_[44] ;
  wire \dividend0_reg_n_0_[45] ;
  wire \dividend0_reg_n_0_[46] ;
  wire \dividend0_reg_n_0_[47] ;
  wire \dividend0_reg_n_0_[48] ;
  wire \dividend0_reg_n_0_[49] ;
  wire \dividend0_reg_n_0_[4] ;
  wire \dividend0_reg_n_0_[50] ;
  wire \dividend0_reg_n_0_[51] ;
  wire \dividend0_reg_n_0_[52] ;
  wire \dividend0_reg_n_0_[53] ;
  wire \dividend0_reg_n_0_[54] ;
  wire \dividend0_reg_n_0_[55] ;
  wire \dividend0_reg_n_0_[56] ;
  wire \dividend0_reg_n_0_[57] ;
  wire \dividend0_reg_n_0_[58] ;
  wire \dividend0_reg_n_0_[59] ;
  wire \dividend0_reg_n_0_[5] ;
  wire \dividend0_reg_n_0_[60] ;
  wire \dividend0_reg_n_0_[61] ;
  wire \dividend0_reg_n_0_[62] ;
  wire \dividend0_reg_n_0_[6] ;
  wire \dividend0_reg_n_0_[7] ;
  wire \dividend0_reg_n_0_[8] ;
  wire \dividend0_reg_n_0_[9] ;
  wire [63:1]dividend_u;
  wire [63:1]dividend_u0;
  wire done0;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_10;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_11;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_12;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_13;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_14;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_15;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_16;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_17;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_18;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_3;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_4;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_5;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_6;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_7;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_8;
  wire fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_9;
  wire grp_fu_104_ap_start;
  wire p_1_in;
  wire [63:0]p_5;
  wire r_stage_reg_r_26;
  wire r_stage_reg_r_5;
  wire [15:0]\remd_reg[15]_0 ;
  wire start0;
  wire [3:2]\NLW_dividend0_reg[63]_i_2_CO_UNCONNECTED ;
  wire [3:3]\NLW_dividend0_reg[63]_i_2_O_UNCONNECTED ;

  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[10]_i_1 
       (.I0(dividend_u0[10]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[10] ),
        .O(dividend_u[10]));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[11]_i_1 
       (.I0(dividend_u0[11]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[11] ),
        .O(dividend_u[11]));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[12]_i_1 
       (.I0(dividend_u0[12]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[12] ),
        .O(dividend_u[12]));
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
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[13]_i_1 
       (.I0(dividend_u0[13]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[13] ),
        .O(dividend_u[13]));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[14]_i_1 
       (.I0(dividend_u0[14]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[14] ),
        .O(dividend_u[14]));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[15]_i_1 
       (.I0(dividend_u0[15]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[15] ),
        .O(dividend_u[15]));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[16]_i_1 
       (.I0(dividend_u0[16]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[16] ),
        .O(dividend_u[16]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[16]_i_3 
       (.I0(\dividend0_reg_n_0_[16] ),
        .O(\dividend0[16]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[16]_i_4 
       (.I0(\dividend0_reg_n_0_[15] ),
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
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[17]_i_1 
       (.I0(dividend_u0[17]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[17] ),
        .O(dividend_u[17]));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[18]_i_1 
       (.I0(dividend_u0[18]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[18] ),
        .O(dividend_u[18]));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[19]_i_1 
       (.I0(dividend_u0[19]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[19] ),
        .O(dividend_u[19]));
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[1]_i_1 
       (.I0(dividend_u0[1]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[1] ),
        .O(dividend_u[1]));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[20]_i_1 
       (.I0(dividend_u0[20]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[20] ),
        .O(dividend_u[20]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[20]_i_3 
       (.I0(\dividend0_reg_n_0_[20] ),
        .O(\dividend0[20]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[20]_i_4 
       (.I0(\dividend0_reg_n_0_[19] ),
        .O(\dividend0[20]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[20]_i_5 
       (.I0(\dividend0_reg_n_0_[18] ),
        .O(\dividend0[20]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[20]_i_6 
       (.I0(\dividend0_reg_n_0_[17] ),
        .O(\dividend0[20]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[21]_i_1 
       (.I0(dividend_u0[21]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[21] ),
        .O(dividend_u[21]));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[22]_i_1 
       (.I0(dividend_u0[22]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[22] ),
        .O(dividend_u[22]));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[23]_i_1 
       (.I0(dividend_u0[23]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[23] ),
        .O(dividend_u[23]));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[24]_i_1 
       (.I0(dividend_u0[24]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[24] ),
        .O(dividend_u[24]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[24]_i_3 
       (.I0(\dividend0_reg_n_0_[24] ),
        .O(\dividend0[24]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[24]_i_4 
       (.I0(\dividend0_reg_n_0_[23] ),
        .O(\dividend0[24]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[24]_i_5 
       (.I0(\dividend0_reg_n_0_[22] ),
        .O(\dividend0[24]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[24]_i_6 
       (.I0(\dividend0_reg_n_0_[21] ),
        .O(\dividend0[24]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[25]_i_1 
       (.I0(dividend_u0[25]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[25] ),
        .O(dividend_u[25]));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[26]_i_1 
       (.I0(dividend_u0[26]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[26] ),
        .O(dividend_u[26]));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[27]_i_1 
       (.I0(dividend_u0[27]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[27] ),
        .O(dividend_u[27]));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[28]_i_1 
       (.I0(dividend_u0[28]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[28] ),
        .O(dividend_u[28]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[28]_i_3 
       (.I0(\dividend0_reg_n_0_[28] ),
        .O(\dividend0[28]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[28]_i_4 
       (.I0(\dividend0_reg_n_0_[27] ),
        .O(\dividend0[28]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[28]_i_5 
       (.I0(\dividend0_reg_n_0_[26] ),
        .O(\dividend0[28]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[28]_i_6 
       (.I0(\dividend0_reg_n_0_[25] ),
        .O(\dividend0[28]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[29]_i_1 
       (.I0(dividend_u0[29]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[29] ),
        .O(dividend_u[29]));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[2]_i_1 
       (.I0(dividend_u0[2]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[2] ),
        .O(dividend_u[2]));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[30]_i_1 
       (.I0(dividend_u0[30]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[30] ),
        .O(dividend_u[30]));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[31]_i_1 
       (.I0(dividend_u0[31]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[31] ),
        .O(dividend_u[31]));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[32]_i_1 
       (.I0(dividend_u0[32]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[32] ),
        .O(dividend_u[32]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[32]_i_3 
       (.I0(\dividend0_reg_n_0_[32] ),
        .O(\dividend0[32]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[32]_i_4 
       (.I0(\dividend0_reg_n_0_[31] ),
        .O(\dividend0[32]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[32]_i_5 
       (.I0(\dividend0_reg_n_0_[30] ),
        .O(\dividend0[32]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[32]_i_6 
       (.I0(\dividend0_reg_n_0_[29] ),
        .O(\dividend0[32]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[33]_i_1 
       (.I0(dividend_u0[33]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[33] ),
        .O(dividend_u[33]));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[34]_i_1 
       (.I0(dividend_u0[34]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[34] ),
        .O(dividend_u[34]));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[35]_i_1 
       (.I0(dividend_u0[35]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[35] ),
        .O(dividend_u[35]));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[36]_i_1 
       (.I0(dividend_u0[36]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[36] ),
        .O(dividend_u[36]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[36]_i_3 
       (.I0(\dividend0_reg_n_0_[36] ),
        .O(\dividend0[36]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[36]_i_4 
       (.I0(\dividend0_reg_n_0_[35] ),
        .O(\dividend0[36]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[36]_i_5 
       (.I0(\dividend0_reg_n_0_[34] ),
        .O(\dividend0[36]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[36]_i_6 
       (.I0(\dividend0_reg_n_0_[33] ),
        .O(\dividend0[36]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[37]_i_1 
       (.I0(dividend_u0[37]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[37] ),
        .O(dividend_u[37]));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[38]_i_1 
       (.I0(dividend_u0[38]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[38] ),
        .O(dividend_u[38]));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[39]_i_1 
       (.I0(dividend_u0[39]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[39] ),
        .O(dividend_u[39]));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[3]_i_1 
       (.I0(dividend_u0[3]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[3] ),
        .O(dividend_u[3]));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[40]_i_1 
       (.I0(dividend_u0[40]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[40] ),
        .O(dividend_u[40]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[40]_i_3 
       (.I0(\dividend0_reg_n_0_[40] ),
        .O(\dividend0[40]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[40]_i_4 
       (.I0(\dividend0_reg_n_0_[39] ),
        .O(\dividend0[40]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[40]_i_5 
       (.I0(\dividend0_reg_n_0_[38] ),
        .O(\dividend0[40]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[40]_i_6 
       (.I0(\dividend0_reg_n_0_[37] ),
        .O(\dividend0[40]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[41]_i_1 
       (.I0(dividend_u0[41]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[41] ),
        .O(dividend_u[41]));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[42]_i_1 
       (.I0(dividend_u0[42]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[42] ),
        .O(dividend_u[42]));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[43]_i_1 
       (.I0(dividend_u0[43]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[43] ),
        .O(dividend_u[43]));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[44]_i_1 
       (.I0(dividend_u0[44]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[44] ),
        .O(dividend_u[44]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[44]_i_3 
       (.I0(\dividend0_reg_n_0_[44] ),
        .O(\dividend0[44]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[44]_i_4 
       (.I0(\dividend0_reg_n_0_[43] ),
        .O(\dividend0[44]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[44]_i_5 
       (.I0(\dividend0_reg_n_0_[42] ),
        .O(\dividend0[44]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[44]_i_6 
       (.I0(\dividend0_reg_n_0_[41] ),
        .O(\dividend0[44]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[45]_i_1 
       (.I0(dividend_u0[45]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[45] ),
        .O(dividend_u[45]));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[46]_i_1 
       (.I0(dividend_u0[46]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[46] ),
        .O(dividend_u[46]));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[47]_i_1 
       (.I0(dividend_u0[47]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[47] ),
        .O(dividend_u[47]));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[48]_i_1 
       (.I0(dividend_u0[48]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[48] ),
        .O(dividend_u[48]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[48]_i_3 
       (.I0(\dividend0_reg_n_0_[48] ),
        .O(\dividend0[48]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[48]_i_4 
       (.I0(\dividend0_reg_n_0_[47] ),
        .O(\dividend0[48]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[48]_i_5 
       (.I0(\dividend0_reg_n_0_[46] ),
        .O(\dividend0[48]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[48]_i_6 
       (.I0(\dividend0_reg_n_0_[45] ),
        .O(\dividend0[48]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[49]_i_1 
       (.I0(dividend_u0[49]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[49] ),
        .O(dividend_u[49]));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[4]_i_1 
       (.I0(dividend_u0[4]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[4] ),
        .O(dividend_u[4]));
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
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[50]_i_1 
       (.I0(dividend_u0[50]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[50] ),
        .O(dividend_u[50]));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[51]_i_1 
       (.I0(dividend_u0[51]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[51] ),
        .O(dividend_u[51]));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[52]_i_1 
       (.I0(dividend_u0[52]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[52] ),
        .O(dividend_u[52]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[52]_i_3 
       (.I0(\dividend0_reg_n_0_[52] ),
        .O(\dividend0[52]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[52]_i_4 
       (.I0(\dividend0_reg_n_0_[51] ),
        .O(\dividend0[52]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[52]_i_5 
       (.I0(\dividend0_reg_n_0_[50] ),
        .O(\dividend0[52]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[52]_i_6 
       (.I0(\dividend0_reg_n_0_[49] ),
        .O(\dividend0[52]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[53]_i_1 
       (.I0(dividend_u0[53]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[53] ),
        .O(dividend_u[53]));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[54]_i_1 
       (.I0(dividend_u0[54]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[54] ),
        .O(dividend_u[54]));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[55]_i_1 
       (.I0(dividend_u0[55]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[55] ),
        .O(dividend_u[55]));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[56]_i_1 
       (.I0(dividend_u0[56]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[56] ),
        .O(dividend_u[56]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[56]_i_3 
       (.I0(\dividend0_reg_n_0_[56] ),
        .O(\dividend0[56]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[56]_i_4 
       (.I0(\dividend0_reg_n_0_[55] ),
        .O(\dividend0[56]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[56]_i_5 
       (.I0(\dividend0_reg_n_0_[54] ),
        .O(\dividend0[56]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[56]_i_6 
       (.I0(\dividend0_reg_n_0_[53] ),
        .O(\dividend0[56]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[57]_i_1 
       (.I0(dividend_u0[57]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[57] ),
        .O(dividend_u[57]));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[58]_i_1 
       (.I0(dividend_u0[58]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[58] ),
        .O(dividend_u[58]));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[59]_i_1 
       (.I0(dividend_u0[59]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[59] ),
        .O(dividend_u[59]));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[5]_i_1 
       (.I0(dividend_u0[5]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[5] ),
        .O(dividend_u[5]));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[60]_i_1 
       (.I0(dividend_u0[60]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[60] ),
        .O(dividend_u[60]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[60]_i_3 
       (.I0(\dividend0_reg_n_0_[60] ),
        .O(\dividend0[60]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[60]_i_4 
       (.I0(\dividend0_reg_n_0_[59] ),
        .O(\dividend0[60]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[60]_i_5 
       (.I0(\dividend0_reg_n_0_[58] ),
        .O(\dividend0[60]_i_5_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[60]_i_6 
       (.I0(\dividend0_reg_n_0_[57] ),
        .O(\dividend0[60]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[61]_i_1 
       (.I0(dividend_u0[61]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[61] ),
        .O(dividend_u[61]));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[62]_i_1 
       (.I0(dividend_u0[62]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[62] ),
        .O(dividend_u[62]));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \dividend0[63]_i_1 
       (.I0(p_1_in),
        .I1(dividend_u0[63]),
        .O(dividend_u[63]));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[63]_i_3 
       (.I0(p_1_in),
        .O(\dividend0[63]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[63]_i_4 
       (.I0(\dividend0_reg_n_0_[62] ),
        .O(\dividend0[63]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \dividend0[63]_i_5 
       (.I0(\dividend0_reg_n_0_[61] ),
        .O(\dividend0[63]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[6]_i_1 
       (.I0(dividend_u0[6]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[6] ),
        .O(dividend_u[6]));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[7]_i_1 
       (.I0(dividend_u0[7]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[7] ),
        .O(dividend_u[7]));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[8]_i_1 
       (.I0(dividend_u0[8]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[8] ),
        .O(dividend_u[8]));
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
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend0[9]_i_1 
       (.I0(dividend_u0[9]),
        .I1(p_1_in),
        .I2(\dividend0_reg_n_0_[9] ),
        .O(dividend_u[9]));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[10]),
        .Q(\dividend0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[11]),
        .Q(\dividend0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[12]),
        .Q(\dividend0_reg_n_0_[12] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[12]_i_2 
       (.CI(\dividend0_reg[8]_i_2_n_0 ),
        .CO({\dividend0_reg[12]_i_2_n_0 ,\dividend0_reg[12]_i_2_n_1 ,\dividend0_reg[12]_i_2_n_2 ,\dividend0_reg[12]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[12:9]),
        .S({\dividend0[12]_i_3_n_0 ,\dividend0[12]_i_4_n_0 ,\dividend0[12]_i_5_n_0 ,\dividend0[12]_i_6_n_0 }));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[13]),
        .Q(\dividend0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[14]),
        .Q(\dividend0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \dividend0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[15]),
        .Q(\dividend0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \dividend0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[16]),
        .Q(\dividend0_reg_n_0_[16] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[16]_i_2 
       (.CI(\dividend0_reg[12]_i_2_n_0 ),
        .CO({\dividend0_reg[16]_i_2_n_0 ,\dividend0_reg[16]_i_2_n_1 ,\dividend0_reg[16]_i_2_n_2 ,\dividend0_reg[16]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[16:13]),
        .S({\dividend0[16]_i_3_n_0 ,\dividend0[16]_i_4_n_0 ,\dividend0[16]_i_5_n_0 ,\dividend0[16]_i_6_n_0 }));
  FDRE \dividend0_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[17]),
        .Q(\dividend0_reg_n_0_[17] ),
        .R(1'b0));
  FDRE \dividend0_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[18]),
        .Q(\dividend0_reg_n_0_[18] ),
        .R(1'b0));
  FDRE \dividend0_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[19]),
        .Q(\dividend0_reg_n_0_[19] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[20]),
        .Q(\dividend0_reg_n_0_[20] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[20]_i_2 
       (.CI(\dividend0_reg[16]_i_2_n_0 ),
        .CO({\dividend0_reg[20]_i_2_n_0 ,\dividend0_reg[20]_i_2_n_1 ,\dividend0_reg[20]_i_2_n_2 ,\dividend0_reg[20]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[20:17]),
        .S({\dividend0[20]_i_3_n_0 ,\dividend0[20]_i_4_n_0 ,\dividend0[20]_i_5_n_0 ,\dividend0[20]_i_6_n_0 }));
  FDRE \dividend0_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[21]),
        .Q(\dividend0_reg_n_0_[21] ),
        .R(1'b0));
  FDRE \dividend0_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[22]),
        .Q(\dividend0_reg_n_0_[22] ),
        .R(1'b0));
  FDRE \dividend0_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[23]),
        .Q(\dividend0_reg_n_0_[23] ),
        .R(1'b0));
  FDRE \dividend0_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[24]),
        .Q(\dividend0_reg_n_0_[24] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[24]_i_2 
       (.CI(\dividend0_reg[20]_i_2_n_0 ),
        .CO({\dividend0_reg[24]_i_2_n_0 ,\dividend0_reg[24]_i_2_n_1 ,\dividend0_reg[24]_i_2_n_2 ,\dividend0_reg[24]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[24:21]),
        .S({\dividend0[24]_i_3_n_0 ,\dividend0[24]_i_4_n_0 ,\dividend0[24]_i_5_n_0 ,\dividend0[24]_i_6_n_0 }));
  FDRE \dividend0_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[25]),
        .Q(\dividend0_reg_n_0_[25] ),
        .R(1'b0));
  FDRE \dividend0_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[26]),
        .Q(\dividend0_reg_n_0_[26] ),
        .R(1'b0));
  FDRE \dividend0_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[27]),
        .Q(\dividend0_reg_n_0_[27] ),
        .R(1'b0));
  FDRE \dividend0_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[28]),
        .Q(\dividend0_reg_n_0_[28] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[28]_i_2 
       (.CI(\dividend0_reg[24]_i_2_n_0 ),
        .CO({\dividend0_reg[28]_i_2_n_0 ,\dividend0_reg[28]_i_2_n_1 ,\dividend0_reg[28]_i_2_n_2 ,\dividend0_reg[28]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[28:25]),
        .S({\dividend0[28]_i_3_n_0 ,\dividend0[28]_i_4_n_0 ,\dividend0[28]_i_5_n_0 ,\dividend0[28]_i_6_n_0 }));
  FDRE \dividend0_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[29]),
        .Q(\dividend0_reg_n_0_[29] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[30]),
        .Q(\dividend0_reg_n_0_[30] ),
        .R(1'b0));
  FDRE \dividend0_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[31]),
        .Q(\dividend0_reg_n_0_[31] ),
        .R(1'b0));
  FDRE \dividend0_reg[32] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[32]),
        .Q(\dividend0_reg_n_0_[32] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[32]_i_2 
       (.CI(\dividend0_reg[28]_i_2_n_0 ),
        .CO({\dividend0_reg[32]_i_2_n_0 ,\dividend0_reg[32]_i_2_n_1 ,\dividend0_reg[32]_i_2_n_2 ,\dividend0_reg[32]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[32:29]),
        .S({\dividend0[32]_i_3_n_0 ,\dividend0[32]_i_4_n_0 ,\dividend0[32]_i_5_n_0 ,\dividend0[32]_i_6_n_0 }));
  FDRE \dividend0_reg[33] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[33]),
        .Q(\dividend0_reg_n_0_[33] ),
        .R(1'b0));
  FDRE \dividend0_reg[34] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[34]),
        .Q(\dividend0_reg_n_0_[34] ),
        .R(1'b0));
  FDRE \dividend0_reg[35] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[35]),
        .Q(\dividend0_reg_n_0_[35] ),
        .R(1'b0));
  FDRE \dividend0_reg[36] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[36]),
        .Q(\dividend0_reg_n_0_[36] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[36]_i_2 
       (.CI(\dividend0_reg[32]_i_2_n_0 ),
        .CO({\dividend0_reg[36]_i_2_n_0 ,\dividend0_reg[36]_i_2_n_1 ,\dividend0_reg[36]_i_2_n_2 ,\dividend0_reg[36]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[36:33]),
        .S({\dividend0[36]_i_3_n_0 ,\dividend0[36]_i_4_n_0 ,\dividend0[36]_i_5_n_0 ,\dividend0[36]_i_6_n_0 }));
  FDRE \dividend0_reg[37] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[37]),
        .Q(\dividend0_reg_n_0_[37] ),
        .R(1'b0));
  FDRE \dividend0_reg[38] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[38]),
        .Q(\dividend0_reg_n_0_[38] ),
        .R(1'b0));
  FDRE \dividend0_reg[39] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[39]),
        .Q(\dividend0_reg_n_0_[39] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[40] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[40]),
        .Q(\dividend0_reg_n_0_[40] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[40]_i_2 
       (.CI(\dividend0_reg[36]_i_2_n_0 ),
        .CO({\dividend0_reg[40]_i_2_n_0 ,\dividend0_reg[40]_i_2_n_1 ,\dividend0_reg[40]_i_2_n_2 ,\dividend0_reg[40]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[40:37]),
        .S({\dividend0[40]_i_3_n_0 ,\dividend0[40]_i_4_n_0 ,\dividend0[40]_i_5_n_0 ,\dividend0[40]_i_6_n_0 }));
  FDRE \dividend0_reg[41] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[41]),
        .Q(\dividend0_reg_n_0_[41] ),
        .R(1'b0));
  FDRE \dividend0_reg[42] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[42]),
        .Q(\dividend0_reg_n_0_[42] ),
        .R(1'b0));
  FDRE \dividend0_reg[43] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[43]),
        .Q(\dividend0_reg_n_0_[43] ),
        .R(1'b0));
  FDRE \dividend0_reg[44] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[44]),
        .Q(\dividend0_reg_n_0_[44] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[44]_i_2 
       (.CI(\dividend0_reg[40]_i_2_n_0 ),
        .CO({\dividend0_reg[44]_i_2_n_0 ,\dividend0_reg[44]_i_2_n_1 ,\dividend0_reg[44]_i_2_n_2 ,\dividend0_reg[44]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[44:41]),
        .S({\dividend0[44]_i_3_n_0 ,\dividend0[44]_i_4_n_0 ,\dividend0[44]_i_5_n_0 ,\dividend0[44]_i_6_n_0 }));
  FDRE \dividend0_reg[45] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[45]),
        .Q(\dividend0_reg_n_0_[45] ),
        .R(1'b0));
  FDRE \dividend0_reg[46] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[46]),
        .Q(\dividend0_reg_n_0_[46] ),
        .R(1'b0));
  FDRE \dividend0_reg[47] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[47]),
        .Q(\dividend0_reg_n_0_[47] ),
        .R(1'b0));
  FDRE \dividend0_reg[48] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[48]),
        .Q(\dividend0_reg_n_0_[48] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[48]_i_2 
       (.CI(\dividend0_reg[44]_i_2_n_0 ),
        .CO({\dividend0_reg[48]_i_2_n_0 ,\dividend0_reg[48]_i_2_n_1 ,\dividend0_reg[48]_i_2_n_2 ,\dividend0_reg[48]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[48:45]),
        .S({\dividend0[48]_i_3_n_0 ,\dividend0[48]_i_4_n_0 ,\dividend0[48]_i_5_n_0 ,\dividend0[48]_i_6_n_0 }));
  FDRE \dividend0_reg[49] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[49]),
        .Q(\dividend0_reg_n_0_[49] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[4]_i_2 
       (.CI(1'b0),
        .CO({\dividend0_reg[4]_i_2_n_0 ,\dividend0_reg[4]_i_2_n_1 ,\dividend0_reg[4]_i_2_n_2 ,\dividend0_reg[4]_i_2_n_3 }),
        .CYINIT(\dividend0[4]_i_3_n_0 ),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[4:1]),
        .S({\dividend0[4]_i_4_n_0 ,\dividend0[4]_i_5_n_0 ,\dividend0[4]_i_6_n_0 ,\dividend0[4]_i_7_n_0 }));
  FDRE \dividend0_reg[50] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[50]),
        .Q(\dividend0_reg_n_0_[50] ),
        .R(1'b0));
  FDRE \dividend0_reg[51] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[51]),
        .Q(\dividend0_reg_n_0_[51] ),
        .R(1'b0));
  FDRE \dividend0_reg[52] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[52]),
        .Q(\dividend0_reg_n_0_[52] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[52]_i_2 
       (.CI(\dividend0_reg[48]_i_2_n_0 ),
        .CO({\dividend0_reg[52]_i_2_n_0 ,\dividend0_reg[52]_i_2_n_1 ,\dividend0_reg[52]_i_2_n_2 ,\dividend0_reg[52]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[52:49]),
        .S({\dividend0[52]_i_3_n_0 ,\dividend0[52]_i_4_n_0 ,\dividend0[52]_i_5_n_0 ,\dividend0[52]_i_6_n_0 }));
  FDRE \dividend0_reg[53] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[53]),
        .Q(\dividend0_reg_n_0_[53] ),
        .R(1'b0));
  FDRE \dividend0_reg[54] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[54]),
        .Q(\dividend0_reg_n_0_[54] ),
        .R(1'b0));
  FDRE \dividend0_reg[55] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[55]),
        .Q(\dividend0_reg_n_0_[55] ),
        .R(1'b0));
  FDRE \dividend0_reg[56] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[56]),
        .Q(\dividend0_reg_n_0_[56] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[56]_i_2 
       (.CI(\dividend0_reg[52]_i_2_n_0 ),
        .CO({\dividend0_reg[56]_i_2_n_0 ,\dividend0_reg[56]_i_2_n_1 ,\dividend0_reg[56]_i_2_n_2 ,\dividend0_reg[56]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[56:53]),
        .S({\dividend0[56]_i_3_n_0 ,\dividend0[56]_i_4_n_0 ,\dividend0[56]_i_5_n_0 ,\dividend0[56]_i_6_n_0 }));
  FDRE \dividend0_reg[57] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[57]),
        .Q(\dividend0_reg_n_0_[57] ),
        .R(1'b0));
  FDRE \dividend0_reg[58] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[58]),
        .Q(\dividend0_reg_n_0_[58] ),
        .R(1'b0));
  FDRE \dividend0_reg[59] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[59]),
        .Q(\dividend0_reg_n_0_[59] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[60] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[60]),
        .Q(\dividend0_reg_n_0_[60] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[60]_i_2 
       (.CI(\dividend0_reg[56]_i_2_n_0 ),
        .CO({\dividend0_reg[60]_i_2_n_0 ,\dividend0_reg[60]_i_2_n_1 ,\dividend0_reg[60]_i_2_n_2 ,\dividend0_reg[60]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[60:57]),
        .S({\dividend0[60]_i_3_n_0 ,\dividend0[60]_i_4_n_0 ,\dividend0[60]_i_5_n_0 ,\dividend0[60]_i_6_n_0 }));
  FDRE \dividend0_reg[61] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[61]),
        .Q(\dividend0_reg_n_0_[61] ),
        .R(1'b0));
  FDRE \dividend0_reg[62] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[62]),
        .Q(\dividend0_reg_n_0_[62] ),
        .R(1'b0));
  FDRE \dividend0_reg[63] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[63]),
        .Q(p_1_in),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[63]_i_2 
       (.CI(\dividend0_reg[60]_i_2_n_0 ),
        .CO({\NLW_dividend0_reg[63]_i_2_CO_UNCONNECTED [3:2],\dividend0_reg[63]_i_2_n_2 ,\dividend0_reg[63]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_dividend0_reg[63]_i_2_O_UNCONNECTED [3],dividend_u0[63:61]}),
        .S({1'b0,\dividend0[63]_i_3_n_0 ,\dividend0[63]_i_4_n_0 ,\dividend0[63]_i_5_n_0 }));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[8]),
        .Q(\dividend0_reg_n_0_[8] ),
        .R(1'b0));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \dividend0_reg[8]_i_2 
       (.CI(\dividend0_reg[4]_i_2_n_0 ),
        .CO({\dividend0_reg[8]_i_2_n_0 ,\dividend0_reg[8]_i_2_n_1 ,\dividend0_reg[8]_i_2_n_2 ,\dividend0_reg[8]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(dividend_u0[8:5]),
        .S({\dividend0[8]_i_3_n_0 ,\dividend0[8]_i_4_n_0 ,\dividend0[8]_i_5_n_0 ,\dividend0[8]_i_6_n_0 }));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_5[9]),
        .Q(\dividend0_reg_n_0_[9] ),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_srem_64ns_33ns_16_68_seq_1_div_u fn1_srem_64ns_33ns_16_68_seq_1_div_u_0
       (.D(dividend_u),
        .E(start0),
        .O7({fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_3,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_4,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_5,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_6,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_7,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_8,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_9,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_10,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_11,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_12,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_13,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_14,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_15,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_16,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_17,fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_18}),
        .Q({p_1_in,\dividend0_reg_n_0_[0] }),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\r_stage_reg[64]_0 (done0),
        .r_stage_reg_r_26_0(r_stage_reg_r_26),
        .r_stage_reg_r_5_0(r_stage_reg_r_5));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_18),
        .Q(\remd_reg[15]_0 [0]),
        .R(1'b0));
  FDRE \remd_reg[10] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_8),
        .Q(\remd_reg[15]_0 [10]),
        .R(1'b0));
  FDRE \remd_reg[11] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_7),
        .Q(\remd_reg[15]_0 [11]),
        .R(1'b0));
  FDRE \remd_reg[12] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_6),
        .Q(\remd_reg[15]_0 [12]),
        .R(1'b0));
  FDRE \remd_reg[13] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_5),
        .Q(\remd_reg[15]_0 [13]),
        .R(1'b0));
  FDRE \remd_reg[14] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_4),
        .Q(\remd_reg[15]_0 [14]),
        .R(1'b0));
  FDRE \remd_reg[15] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_3),
        .Q(\remd_reg[15]_0 [15]),
        .R(1'b0));
  FDRE \remd_reg[1] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_17),
        .Q(\remd_reg[15]_0 [1]),
        .R(1'b0));
  FDRE \remd_reg[2] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_16),
        .Q(\remd_reg[15]_0 [2]),
        .R(1'b0));
  FDRE \remd_reg[3] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_15),
        .Q(\remd_reg[15]_0 [3]),
        .R(1'b0));
  FDRE \remd_reg[4] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_14),
        .Q(\remd_reg[15]_0 [4]),
        .R(1'b0));
  FDRE \remd_reg[5] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_13),
        .Q(\remd_reg[15]_0 [5]),
        .R(1'b0));
  FDRE \remd_reg[6] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_12),
        .Q(\remd_reg[15]_0 [6]),
        .R(1'b0));
  FDRE \remd_reg[7] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_11),
        .Q(\remd_reg[15]_0 [7]),
        .R(1'b0));
  FDRE \remd_reg[8] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_10),
        .Q(\remd_reg[15]_0 [8]),
        .R(1'b0));
  FDRE \remd_reg[9] 
       (.C(ap_clk),
        .CE(done0),
        .D(fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_n_9),
        .Q(\remd_reg[15]_0 [9]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    start0_i_1
       (.I0(ap_start),
        .I1(Q),
        .O(grp_fu_104_ap_start));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_104_ap_start),
        .Q(start0),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_srem_64ns_33ns_16_68_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_srem_64ns_33ns_16_68_seq_1_div_u
   (r_stage_reg_r_5_0,
    r_stage_reg_r_26_0,
    \r_stage_reg[64]_0 ,
    O7,
    ap_rst,
    E,
    ap_clk,
    Q,
    D);
  output r_stage_reg_r_5_0;
  output r_stage_reg_r_26_0;
  output [0:0]\r_stage_reg[64]_0 ;
  output [15:0]O7;
  input ap_rst;
  input [0:0]E;
  input ap_clk;
  input [1:0]Q;
  input [62:0]D;

  wire [62:0]D;
  wire [0:0]E;
  wire [15:0]O7;
  wire [1:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire cal_tmp_carry__0_i_3_n_0;
  wire cal_tmp_carry__0_i_4_n_0;
  wire cal_tmp_carry__0_i_5_n_0;
  wire cal_tmp_carry__0_i_6_n_0;
  wire cal_tmp_carry__0_n_0;
  wire cal_tmp_carry__0_n_1;
  wire cal_tmp_carry__0_n_2;
  wire cal_tmp_carry__0_n_3;
  wire cal_tmp_carry__0_n_4;
  wire cal_tmp_carry__0_n_5;
  wire cal_tmp_carry__0_n_6;
  wire cal_tmp_carry__0_n_7;
  wire cal_tmp_carry__10_i_1_n_0;
  wire cal_tmp_carry__10_i_2_n_0;
  wire cal_tmp_carry__10_i_3_n_0;
  wire cal_tmp_carry__10_i_4_n_0;
  wire cal_tmp_carry__10_n_0;
  wire cal_tmp_carry__10_n_1;
  wire cal_tmp_carry__10_n_2;
  wire cal_tmp_carry__10_n_3;
  wire cal_tmp_carry__10_n_4;
  wire cal_tmp_carry__10_n_5;
  wire cal_tmp_carry__10_n_6;
  wire cal_tmp_carry__10_n_7;
  wire cal_tmp_carry__11_i_1_n_0;
  wire cal_tmp_carry__11_i_2_n_0;
  wire cal_tmp_carry__11_i_3_n_0;
  wire cal_tmp_carry__11_i_4_n_0;
  wire cal_tmp_carry__11_n_0;
  wire cal_tmp_carry__11_n_1;
  wire cal_tmp_carry__11_n_2;
  wire cal_tmp_carry__11_n_3;
  wire cal_tmp_carry__11_n_4;
  wire cal_tmp_carry__11_n_5;
  wire cal_tmp_carry__11_n_6;
  wire cal_tmp_carry__11_n_7;
  wire cal_tmp_carry__12_i_1_n_0;
  wire cal_tmp_carry__12_i_2_n_0;
  wire cal_tmp_carry__12_i_3_n_0;
  wire cal_tmp_carry__12_i_4_n_0;
  wire cal_tmp_carry__12_n_0;
  wire cal_tmp_carry__12_n_1;
  wire cal_tmp_carry__12_n_2;
  wire cal_tmp_carry__12_n_3;
  wire cal_tmp_carry__12_n_4;
  wire cal_tmp_carry__12_n_5;
  wire cal_tmp_carry__12_n_6;
  wire cal_tmp_carry__12_n_7;
  wire cal_tmp_carry__13_i_1_n_0;
  wire cal_tmp_carry__13_i_2_n_0;
  wire cal_tmp_carry__13_i_3_n_0;
  wire cal_tmp_carry__13_i_4_n_0;
  wire cal_tmp_carry__13_n_0;
  wire cal_tmp_carry__13_n_1;
  wire cal_tmp_carry__13_n_2;
  wire cal_tmp_carry__13_n_3;
  wire cal_tmp_carry__13_n_4;
  wire cal_tmp_carry__13_n_5;
  wire cal_tmp_carry__13_n_6;
  wire cal_tmp_carry__13_n_7;
  wire cal_tmp_carry__14_i_1_n_0;
  wire cal_tmp_carry__14_i_2_n_0;
  wire cal_tmp_carry__14_i_3_n_0;
  wire cal_tmp_carry__14_i_4_n_0;
  wire cal_tmp_carry__14_n_1;
  wire cal_tmp_carry__14_n_2;
  wire cal_tmp_carry__14_n_3;
  wire cal_tmp_carry__14_n_5;
  wire cal_tmp_carry__14_n_6;
  wire cal_tmp_carry__14_n_7;
  wire cal_tmp_carry__1_i_3_n_0;
  wire cal_tmp_carry__1_i_4_n_0;
  wire cal_tmp_carry__1_i_5_n_0;
  wire cal_tmp_carry__1_i_6_n_0;
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
  wire cal_tmp_carry__3_i_3_n_0;
  wire cal_tmp_carry__3_i_4_n_0;
  wire cal_tmp_carry__3_i_5_n_0;
  wire cal_tmp_carry__3_i_6_n_0;
  wire cal_tmp_carry__3_n_0;
  wire cal_tmp_carry__3_n_1;
  wire cal_tmp_carry__3_n_2;
  wire cal_tmp_carry__3_n_3;
  wire cal_tmp_carry__3_n_4;
  wire cal_tmp_carry__3_n_5;
  wire cal_tmp_carry__3_n_6;
  wire cal_tmp_carry__3_n_7;
  wire cal_tmp_carry__4_i_3_n_0;
  wire cal_tmp_carry__4_i_4_n_0;
  wire cal_tmp_carry__4_i_5_n_0;
  wire cal_tmp_carry__4_i_6_n_0;
  wire cal_tmp_carry__4_n_0;
  wire cal_tmp_carry__4_n_1;
  wire cal_tmp_carry__4_n_2;
  wire cal_tmp_carry__4_n_3;
  wire cal_tmp_carry__4_n_4;
  wire cal_tmp_carry__4_n_5;
  wire cal_tmp_carry__4_n_6;
  wire cal_tmp_carry__4_n_7;
  wire cal_tmp_carry__5_i_2_n_0;
  wire cal_tmp_carry__5_i_3_n_0;
  wire cal_tmp_carry__5_i_4_n_0;
  wire cal_tmp_carry__5_i_5_n_0;
  wire cal_tmp_carry__5_n_0;
  wire cal_tmp_carry__5_n_1;
  wire cal_tmp_carry__5_n_2;
  wire cal_tmp_carry__5_n_3;
  wire cal_tmp_carry__5_n_4;
  wire cal_tmp_carry__5_n_5;
  wire cal_tmp_carry__5_n_6;
  wire cal_tmp_carry__5_n_7;
  wire cal_tmp_carry__6_i_3_n_0;
  wire cal_tmp_carry__6_i_4_n_0;
  wire cal_tmp_carry__6_i_5_n_0;
  wire cal_tmp_carry__6_i_6_n_0;
  wire cal_tmp_carry__6_n_0;
  wire cal_tmp_carry__6_n_1;
  wire cal_tmp_carry__6_n_2;
  wire cal_tmp_carry__6_n_3;
  wire cal_tmp_carry__6_n_4;
  wire cal_tmp_carry__6_n_5;
  wire cal_tmp_carry__6_n_6;
  wire cal_tmp_carry__6_n_7;
  wire cal_tmp_carry__7_i_1_n_0;
  wire cal_tmp_carry__7_i_2_n_0;
  wire cal_tmp_carry__7_i_3_n_0;
  wire cal_tmp_carry__7_i_4_n_0;
  wire cal_tmp_carry__7_n_0;
  wire cal_tmp_carry__7_n_1;
  wire cal_tmp_carry__7_n_2;
  wire cal_tmp_carry__7_n_3;
  wire cal_tmp_carry__7_n_4;
  wire cal_tmp_carry__7_n_5;
  wire cal_tmp_carry__7_n_6;
  wire cal_tmp_carry__7_n_7;
  wire cal_tmp_carry__8_i_1_n_0;
  wire cal_tmp_carry__8_i_2_n_0;
  wire cal_tmp_carry__8_i_3_n_0;
  wire cal_tmp_carry__8_i_4_n_0;
  wire cal_tmp_carry__8_n_0;
  wire cal_tmp_carry__8_n_1;
  wire cal_tmp_carry__8_n_2;
  wire cal_tmp_carry__8_n_3;
  wire cal_tmp_carry__8_n_4;
  wire cal_tmp_carry__8_n_5;
  wire cal_tmp_carry__8_n_6;
  wire cal_tmp_carry__8_n_7;
  wire cal_tmp_carry__9_i_1_n_0;
  wire cal_tmp_carry__9_i_2_n_0;
  wire cal_tmp_carry__9_i_3_n_0;
  wire cal_tmp_carry__9_i_4_n_0;
  wire cal_tmp_carry__9_n_0;
  wire cal_tmp_carry__9_n_1;
  wire cal_tmp_carry__9_n_2;
  wire cal_tmp_carry__9_n_3;
  wire cal_tmp_carry__9_n_4;
  wire cal_tmp_carry__9_n_5;
  wire cal_tmp_carry__9_n_6;
  wire cal_tmp_carry__9_n_7;
  wire cal_tmp_carry_i_3_n_0;
  wire cal_tmp_carry_i_4_n_0;
  wire cal_tmp_carry_i_5_n_0;
  wire cal_tmp_carry_i_6_n_0;
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
  wire \dividend0_reg_n_0_[16] ;
  wire \dividend0_reg_n_0_[17] ;
  wire \dividend0_reg_n_0_[18] ;
  wire \dividend0_reg_n_0_[19] ;
  wire \dividend0_reg_n_0_[1] ;
  wire \dividend0_reg_n_0_[20] ;
  wire \dividend0_reg_n_0_[21] ;
  wire \dividend0_reg_n_0_[22] ;
  wire \dividend0_reg_n_0_[23] ;
  wire \dividend0_reg_n_0_[24] ;
  wire \dividend0_reg_n_0_[25] ;
  wire \dividend0_reg_n_0_[26] ;
  wire \dividend0_reg_n_0_[27] ;
  wire \dividend0_reg_n_0_[28] ;
  wire \dividend0_reg_n_0_[29] ;
  wire \dividend0_reg_n_0_[2] ;
  wire \dividend0_reg_n_0_[30] ;
  wire \dividend0_reg_n_0_[31] ;
  wire \dividend0_reg_n_0_[32] ;
  wire \dividend0_reg_n_0_[33] ;
  wire \dividend0_reg_n_0_[34] ;
  wire \dividend0_reg_n_0_[35] ;
  wire \dividend0_reg_n_0_[36] ;
  wire \dividend0_reg_n_0_[37] ;
  wire \dividend0_reg_n_0_[38] ;
  wire \dividend0_reg_n_0_[39] ;
  wire \dividend0_reg_n_0_[3] ;
  wire \dividend0_reg_n_0_[40] ;
  wire \dividend0_reg_n_0_[41] ;
  wire \dividend0_reg_n_0_[42] ;
  wire \dividend0_reg_n_0_[43] ;
  wire \dividend0_reg_n_0_[44] ;
  wire \dividend0_reg_n_0_[45] ;
  wire \dividend0_reg_n_0_[46] ;
  wire \dividend0_reg_n_0_[47] ;
  wire \dividend0_reg_n_0_[48] ;
  wire \dividend0_reg_n_0_[49] ;
  wire \dividend0_reg_n_0_[4] ;
  wire \dividend0_reg_n_0_[50] ;
  wire \dividend0_reg_n_0_[51] ;
  wire \dividend0_reg_n_0_[52] ;
  wire \dividend0_reg_n_0_[53] ;
  wire \dividend0_reg_n_0_[54] ;
  wire \dividend0_reg_n_0_[55] ;
  wire \dividend0_reg_n_0_[56] ;
  wire \dividend0_reg_n_0_[57] ;
  wire \dividend0_reg_n_0_[58] ;
  wire \dividend0_reg_n_0_[59] ;
  wire \dividend0_reg_n_0_[5] ;
  wire \dividend0_reg_n_0_[60] ;
  wire \dividend0_reg_n_0_[61] ;
  wire \dividend0_reg_n_0_[62] ;
  wire \dividend0_reg_n_0_[63] ;
  wire \dividend0_reg_n_0_[6] ;
  wire \dividend0_reg_n_0_[7] ;
  wire \dividend0_reg_n_0_[8] ;
  wire \dividend0_reg_n_0_[9] ;
  wire [63:0]dividend_tmp;
  wire \dividend_tmp[10]_i_1_n_0 ;
  wire \dividend_tmp[11]_i_1_n_0 ;
  wire \dividend_tmp[12]_i_1_n_0 ;
  wire \dividend_tmp[13]_i_1_n_0 ;
  wire \dividend_tmp[14]_i_1_n_0 ;
  wire \dividend_tmp[15]_i_1_n_0 ;
  wire \dividend_tmp[16]_i_1_n_0 ;
  wire \dividend_tmp[17]_i_1_n_0 ;
  wire \dividend_tmp[18]_i_1_n_0 ;
  wire \dividend_tmp[19]_i_1_n_0 ;
  wire \dividend_tmp[1]_i_1_n_0 ;
  wire \dividend_tmp[20]_i_1_n_0 ;
  wire \dividend_tmp[21]_i_1_n_0 ;
  wire \dividend_tmp[22]_i_1_n_0 ;
  wire \dividend_tmp[23]_i_1_n_0 ;
  wire \dividend_tmp[24]_i_1_n_0 ;
  wire \dividend_tmp[25]_i_1_n_0 ;
  wire \dividend_tmp[26]_i_1_n_0 ;
  wire \dividend_tmp[27]_i_1_n_0 ;
  wire \dividend_tmp[28]_i_1_n_0 ;
  wire \dividend_tmp[29]_i_1_n_0 ;
  wire \dividend_tmp[2]_i_1_n_0 ;
  wire \dividend_tmp[30]_i_1_n_0 ;
  wire \dividend_tmp[31]_i_1_n_0 ;
  wire \dividend_tmp[32]_i_1_n_0 ;
  wire \dividend_tmp[33]_i_1_n_0 ;
  wire \dividend_tmp[34]_i_1_n_0 ;
  wire \dividend_tmp[35]_i_1_n_0 ;
  wire \dividend_tmp[36]_i_1_n_0 ;
  wire \dividend_tmp[37]_i_1_n_0 ;
  wire \dividend_tmp[38]_i_1_n_0 ;
  wire \dividend_tmp[39]_i_1_n_0 ;
  wire \dividend_tmp[3]_i_1_n_0 ;
  wire \dividend_tmp[40]_i_1_n_0 ;
  wire \dividend_tmp[41]_i_1_n_0 ;
  wire \dividend_tmp[42]_i_1_n_0 ;
  wire \dividend_tmp[43]_i_1_n_0 ;
  wire \dividend_tmp[44]_i_1_n_0 ;
  wire \dividend_tmp[45]_i_1_n_0 ;
  wire \dividend_tmp[46]_i_1_n_0 ;
  wire \dividend_tmp[47]_i_1_n_0 ;
  wire \dividend_tmp[48]_i_1_n_0 ;
  wire \dividend_tmp[49]_i_1_n_0 ;
  wire \dividend_tmp[4]_i_1_n_0 ;
  wire \dividend_tmp[50]_i_1_n_0 ;
  wire \dividend_tmp[51]_i_1_n_0 ;
  wire \dividend_tmp[52]_i_1_n_0 ;
  wire \dividend_tmp[53]_i_1_n_0 ;
  wire \dividend_tmp[54]_i_1_n_0 ;
  wire \dividend_tmp[55]_i_1_n_0 ;
  wire \dividend_tmp[56]_i_1_n_0 ;
  wire \dividend_tmp[57]_i_1_n_0 ;
  wire \dividend_tmp[58]_i_1_n_0 ;
  wire \dividend_tmp[59]_i_1_n_0 ;
  wire \dividend_tmp[5]_i_1_n_0 ;
  wire \dividend_tmp[60]_i_1_n_0 ;
  wire \dividend_tmp[61]_i_1_n_0 ;
  wire \dividend_tmp[62]_i_1_n_0 ;
  wire \dividend_tmp[63]_i_1_n_0 ;
  wire \dividend_tmp[6]_i_1_n_0 ;
  wire \dividend_tmp[7]_i_1_n_0 ;
  wire \dividend_tmp[8]_i_1_n_0 ;
  wire \dividend_tmp[9]_i_1_n_0 ;
  wire p_0_in;
  wire [0:0]p_2_out;
  wire \r_stage_reg[0]_rep_n_0 ;
  wire \r_stage_reg[32]_srl32___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_30_n_1 ;
  wire \r_stage_reg[62]_srl30___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_60_n_0 ;
  wire \r_stage_reg[63]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_61_n_0 ;
  wire [0:0]\r_stage_reg[64]_0 ;
  wire r_stage_reg_gate_n_0;
  wire \r_stage_reg_n_0_[0] ;
  wire r_stage_reg_r_0_n_0;
  wire r_stage_reg_r_10_n_0;
  wire r_stage_reg_r_11_n_0;
  wire r_stage_reg_r_12_n_0;
  wire r_stage_reg_r_13_n_0;
  wire r_stage_reg_r_14_n_0;
  wire r_stage_reg_r_15_n_0;
  wire r_stage_reg_r_16_n_0;
  wire r_stage_reg_r_17_n_0;
  wire r_stage_reg_r_18_n_0;
  wire r_stage_reg_r_19_n_0;
  wire r_stage_reg_r_1_n_0;
  wire r_stage_reg_r_20_n_0;
  wire r_stage_reg_r_21_n_0;
  wire r_stage_reg_r_22_n_0;
  wire r_stage_reg_r_23_n_0;
  wire r_stage_reg_r_24_n_0;
  wire r_stage_reg_r_25_n_0;
  wire r_stage_reg_r_26_0;
  wire r_stage_reg_r_27_n_0;
  wire r_stage_reg_r_28_n_0;
  wire r_stage_reg_r_29_n_0;
  wire r_stage_reg_r_2_n_0;
  wire r_stage_reg_r_30_n_0;
  wire r_stage_reg_r_31_n_0;
  wire r_stage_reg_r_32_n_0;
  wire r_stage_reg_r_33_n_0;
  wire r_stage_reg_r_34_n_0;
  wire r_stage_reg_r_35_n_0;
  wire r_stage_reg_r_36_n_0;
  wire r_stage_reg_r_37_n_0;
  wire r_stage_reg_r_38_n_0;
  wire r_stage_reg_r_39_n_0;
  wire r_stage_reg_r_3_n_0;
  wire r_stage_reg_r_40_n_0;
  wire r_stage_reg_r_41_n_0;
  wire r_stage_reg_r_42_n_0;
  wire r_stage_reg_r_43_n_0;
  wire r_stage_reg_r_44_n_0;
  wire r_stage_reg_r_45_n_0;
  wire r_stage_reg_r_46_n_0;
  wire r_stage_reg_r_47_n_0;
  wire r_stage_reg_r_48_n_0;
  wire r_stage_reg_r_49_n_0;
  wire r_stage_reg_r_4_n_0;
  wire r_stage_reg_r_50_n_0;
  wire r_stage_reg_r_51_n_0;
  wire r_stage_reg_r_52_n_0;
  wire r_stage_reg_r_53_n_0;
  wire r_stage_reg_r_54_n_0;
  wire r_stage_reg_r_55_n_0;
  wire r_stage_reg_r_56_n_0;
  wire r_stage_reg_r_57_n_0;
  wire r_stage_reg_r_58_n_0;
  wire r_stage_reg_r_59_n_0;
  wire r_stage_reg_r_5_0;
  wire r_stage_reg_r_60_n_0;
  wire r_stage_reg_r_61_n_0;
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
  wire [62:0]remd_tmp;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp[10]_i_1_n_0 ;
  wire \remd_tmp[11]_i_1_n_0 ;
  wire \remd_tmp[12]_i_1_n_0 ;
  wire \remd_tmp[13]_i_1_n_0 ;
  wire \remd_tmp[14]_i_1_n_0 ;
  wire \remd_tmp[15]_i_1_n_0 ;
  wire \remd_tmp[16]_i_1_n_0 ;
  wire \remd_tmp[17]_i_1_n_0 ;
  wire \remd_tmp[18]_i_1_n_0 ;
  wire \remd_tmp[19]_i_1_n_0 ;
  wire \remd_tmp[1]_i_1_n_0 ;
  wire \remd_tmp[20]_i_1_n_0 ;
  wire \remd_tmp[21]_i_1_n_0 ;
  wire \remd_tmp[22]_i_1_n_0 ;
  wire \remd_tmp[23]_i_1_n_0 ;
  wire \remd_tmp[24]_i_1_n_0 ;
  wire \remd_tmp[25]_i_1_n_0 ;
  wire \remd_tmp[26]_i_1_n_0 ;
  wire \remd_tmp[27]_i_1_n_0 ;
  wire \remd_tmp[28]_i_1_n_0 ;
  wire \remd_tmp[29]_i_1_n_0 ;
  wire \remd_tmp[2]_i_1_n_0 ;
  wire \remd_tmp[30]_i_1_n_0 ;
  wire \remd_tmp[31]_i_1_n_0 ;
  wire \remd_tmp[32]_i_1_n_0 ;
  wire \remd_tmp[33]_i_1_n_0 ;
  wire \remd_tmp[34]_i_1_n_0 ;
  wire \remd_tmp[35]_i_1_n_0 ;
  wire \remd_tmp[36]_i_1_n_0 ;
  wire \remd_tmp[37]_i_1_n_0 ;
  wire \remd_tmp[38]_i_1_n_0 ;
  wire \remd_tmp[39]_i_1_n_0 ;
  wire \remd_tmp[3]_i_1_n_0 ;
  wire \remd_tmp[40]_i_1_n_0 ;
  wire \remd_tmp[41]_i_1_n_0 ;
  wire \remd_tmp[42]_i_1_n_0 ;
  wire \remd_tmp[43]_i_1_n_0 ;
  wire \remd_tmp[44]_i_1_n_0 ;
  wire \remd_tmp[45]_i_1_n_0 ;
  wire \remd_tmp[46]_i_1_n_0 ;
  wire \remd_tmp[47]_i_1_n_0 ;
  wire \remd_tmp[48]_i_1_n_0 ;
  wire \remd_tmp[49]_i_1_n_0 ;
  wire \remd_tmp[4]_i_1_n_0 ;
  wire \remd_tmp[50]_i_1_n_0 ;
  wire \remd_tmp[51]_i_1_n_0 ;
  wire \remd_tmp[52]_i_1_n_0 ;
  wire \remd_tmp[53]_i_1_n_0 ;
  wire \remd_tmp[54]_i_1_n_0 ;
  wire \remd_tmp[55]_i_1_n_0 ;
  wire \remd_tmp[56]_i_1_n_0 ;
  wire \remd_tmp[57]_i_1_n_0 ;
  wire \remd_tmp[58]_i_1_n_0 ;
  wire \remd_tmp[59]_i_1_n_0 ;
  wire \remd_tmp[5]_i_1_n_0 ;
  wire \remd_tmp[60]_i_1_n_0 ;
  wire \remd_tmp[61]_i_1_n_0 ;
  wire \remd_tmp[62]_i_1_n_0 ;
  wire \remd_tmp[6]_i_1_n_0 ;
  wire \remd_tmp[7]_i_1_n_0 ;
  wire \remd_tmp[8]_i_1_n_0 ;
  wire \remd_tmp[9]_i_1_n_0 ;
  wire [30:0]remd_tmp_mux;
  wire sign0;
  wire [3:3]NLW_cal_tmp_carry__14_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__15_CO_UNCONNECTED;
  wire [3:1]NLW_cal_tmp_carry__15_O_UNCONNECTED;
  wire \NLW_r_stage_reg[32]_srl32___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_30_Q_UNCONNECTED ;
  wire \NLW_r_stage_reg[62]_srl30___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_60_Q31_UNCONNECTED ;
  wire [3:3]\NLW_remd_reg[15]_i_1_CO_UNCONNECTED ;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({remd_tmp_mux[2],1'b1,remd_tmp_mux[0],1'b1}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_3_n_0,cal_tmp_carry_i_4_n_0,cal_tmp_carry_i_5_n_0,cal_tmp_carry_i_6_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({remd_tmp_mux[6],1'b1,1'b1,remd_tmp_mux[3]}),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_3_n_0,cal_tmp_carry__0_i_4_n_0,cal_tmp_carry__0_i_5_n_0,cal_tmp_carry__0_i_6_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1
       (.I0(remd_tmp[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[6]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(remd_tmp[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[3]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(remd_tmp[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__0_i_4
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[5]),
        .O(cal_tmp_carry__0_i_4_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__0_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[4]),
        .O(cal_tmp_carry__0_i_5_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_6
       (.I0(remd_tmp[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_6_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({remd_tmp_mux[10],1'b1,1'b1,remd_tmp_mux[7]}),
        .O({cal_tmp_carry__1_n_4,cal_tmp_carry__1_n_5,cal_tmp_carry__1_n_6,cal_tmp_carry__1_n_7}),
        .S({cal_tmp_carry__1_i_3_n_0,cal_tmp_carry__1_i_4_n_0,cal_tmp_carry__1_i_5_n_0,cal_tmp_carry__1_i_6_n_0}));
  CARRY4 cal_tmp_carry__10
       (.CI(cal_tmp_carry__9_n_0),
        .CO({cal_tmp_carry__10_n_0,cal_tmp_carry__10_n_1,cal_tmp_carry__10_n_2,cal_tmp_carry__10_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__10_n_4,cal_tmp_carry__10_n_5,cal_tmp_carry__10_n_6,cal_tmp_carry__10_n_7}),
        .S({cal_tmp_carry__10_i_1_n_0,cal_tmp_carry__10_i_2_n_0,cal_tmp_carry__10_i_3_n_0,cal_tmp_carry__10_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__10_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[46]),
        .O(cal_tmp_carry__10_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__10_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[45]),
        .O(cal_tmp_carry__10_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__10_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[44]),
        .O(cal_tmp_carry__10_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__10_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[43]),
        .O(cal_tmp_carry__10_i_4_n_0));
  CARRY4 cal_tmp_carry__11
       (.CI(cal_tmp_carry__10_n_0),
        .CO({cal_tmp_carry__11_n_0,cal_tmp_carry__11_n_1,cal_tmp_carry__11_n_2,cal_tmp_carry__11_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__11_n_4,cal_tmp_carry__11_n_5,cal_tmp_carry__11_n_6,cal_tmp_carry__11_n_7}),
        .S({cal_tmp_carry__11_i_1_n_0,cal_tmp_carry__11_i_2_n_0,cal_tmp_carry__11_i_3_n_0,cal_tmp_carry__11_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__11_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[50]),
        .O(cal_tmp_carry__11_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__11_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[49]),
        .O(cal_tmp_carry__11_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__11_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[48]),
        .O(cal_tmp_carry__11_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__11_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[47]),
        .O(cal_tmp_carry__11_i_4_n_0));
  CARRY4 cal_tmp_carry__12
       (.CI(cal_tmp_carry__11_n_0),
        .CO({cal_tmp_carry__12_n_0,cal_tmp_carry__12_n_1,cal_tmp_carry__12_n_2,cal_tmp_carry__12_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__12_n_4,cal_tmp_carry__12_n_5,cal_tmp_carry__12_n_6,cal_tmp_carry__12_n_7}),
        .S({cal_tmp_carry__12_i_1_n_0,cal_tmp_carry__12_i_2_n_0,cal_tmp_carry__12_i_3_n_0,cal_tmp_carry__12_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__12_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[54]),
        .O(cal_tmp_carry__12_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__12_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[53]),
        .O(cal_tmp_carry__12_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__12_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[52]),
        .O(cal_tmp_carry__12_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__12_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[51]),
        .O(cal_tmp_carry__12_i_4_n_0));
  CARRY4 cal_tmp_carry__13
       (.CI(cal_tmp_carry__12_n_0),
        .CO({cal_tmp_carry__13_n_0,cal_tmp_carry__13_n_1,cal_tmp_carry__13_n_2,cal_tmp_carry__13_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__13_n_4,cal_tmp_carry__13_n_5,cal_tmp_carry__13_n_6,cal_tmp_carry__13_n_7}),
        .S({cal_tmp_carry__13_i_1_n_0,cal_tmp_carry__13_i_2_n_0,cal_tmp_carry__13_i_3_n_0,cal_tmp_carry__13_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__13_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[58]),
        .O(cal_tmp_carry__13_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__13_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[57]),
        .O(cal_tmp_carry__13_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__13_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[56]),
        .O(cal_tmp_carry__13_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__13_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[55]),
        .O(cal_tmp_carry__13_i_4_n_0));
  CARRY4 cal_tmp_carry__14
       (.CI(cal_tmp_carry__13_n_0),
        .CO({p_2_out,cal_tmp_carry__14_n_1,cal_tmp_carry__14_n_2,cal_tmp_carry__14_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({NLW_cal_tmp_carry__14_O_UNCONNECTED[3],cal_tmp_carry__14_n_5,cal_tmp_carry__14_n_6,cal_tmp_carry__14_n_7}),
        .S({cal_tmp_carry__14_i_1_n_0,cal_tmp_carry__14_i_2_n_0,cal_tmp_carry__14_i_3_n_0,cal_tmp_carry__14_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__14_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[62]),
        .O(cal_tmp_carry__14_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__14_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[61]),
        .O(cal_tmp_carry__14_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__14_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[60]),
        .O(cal_tmp_carry__14_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__14_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[59]),
        .O(cal_tmp_carry__14_i_4_n_0));
  CARRY4 cal_tmp_carry__15
       (.CI(p_2_out),
        .CO(NLW_cal_tmp_carry__15_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__15_O_UNCONNECTED[3:1],p_0_in}),
        .S({1'b0,1'b0,1'b0,1'b1}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_1
       (.I0(remd_tmp[10]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[10]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_2
       (.I0(remd_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[7]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_3
       (.I0(remd_tmp[10]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__1_i_4
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[9]),
        .O(cal_tmp_carry__1_i_4_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__1_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[8]),
        .O(cal_tmp_carry__1_i_5_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_6
       (.I0(remd_tmp[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_6_n_0));
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
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_5
       (.I0(remd_tmp[14]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(cal_tmp_carry__2_i_5_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_6
       (.I0(remd_tmp[13]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__2_i_6_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_7
       (.I0(remd_tmp[12]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__2_i_7_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_8
       (.I0(remd_tmp[11]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__2_i_8_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({cal_tmp_carry__3_n_0,cal_tmp_carry__3_n_1,cal_tmp_carry__3_n_2,cal_tmp_carry__3_n_3}),
        .CYINIT(1'b0),
        .DI({remd_tmp_mux[18],1'b1,1'b1,remd_tmp_mux[15]}),
        .O({cal_tmp_carry__3_n_4,cal_tmp_carry__3_n_5,cal_tmp_carry__3_n_6,cal_tmp_carry__3_n_7}),
        .S({cal_tmp_carry__3_i_3_n_0,cal_tmp_carry__3_i_4_n_0,cal_tmp_carry__3_i_5_n_0,cal_tmp_carry__3_i_6_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__3_i_1
       (.I0(remd_tmp[18]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(remd_tmp_mux[18]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__3_i_2
       (.I0(remd_tmp[15]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(remd_tmp_mux[15]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__3_i_3
       (.I0(remd_tmp[18]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(cal_tmp_carry__3_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__3_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[17]),
        .O(cal_tmp_carry__3_i_4_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__3_i_5
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[16]),
        .O(cal_tmp_carry__3_i_5_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__3_i_6
       (.I0(remd_tmp[15]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(cal_tmp_carry__3_i_6_n_0));
  CARRY4 cal_tmp_carry__4
       (.CI(cal_tmp_carry__3_n_0),
        .CO({cal_tmp_carry__4_n_0,cal_tmp_carry__4_n_1,cal_tmp_carry__4_n_2,cal_tmp_carry__4_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,remd_tmp_mux[20:19]}),
        .O({cal_tmp_carry__4_n_4,cal_tmp_carry__4_n_5,cal_tmp_carry__4_n_6,cal_tmp_carry__4_n_7}),
        .S({cal_tmp_carry__4_i_3_n_0,cal_tmp_carry__4_i_4_n_0,cal_tmp_carry__4_i_5_n_0,cal_tmp_carry__4_i_6_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__4_i_1
       (.I0(remd_tmp[20]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(remd_tmp_mux[20]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__4_i_2
       (.I0(remd_tmp[19]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(remd_tmp_mux[19]));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__4_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[22]),
        .O(cal_tmp_carry__4_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__4_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[21]),
        .O(cal_tmp_carry__4_i_4_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__4_i_5
       (.I0(remd_tmp[20]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__4_i_5_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__4_i_6
       (.I0(remd_tmp[19]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(cal_tmp_carry__4_i_6_n_0));
  CARRY4 cal_tmp_carry__5
       (.CI(cal_tmp_carry__4_n_0),
        .CO({cal_tmp_carry__5_n_0,cal_tmp_carry__5_n_1,cal_tmp_carry__5_n_2,cal_tmp_carry__5_n_3}),
        .CYINIT(1'b0),
        .DI({remd_tmp_mux[26],1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__5_n_4,cal_tmp_carry__5_n_5,cal_tmp_carry__5_n_6,cal_tmp_carry__5_n_7}),
        .S({cal_tmp_carry__5_i_2_n_0,cal_tmp_carry__5_i_3_n_0,cal_tmp_carry__5_i_4_n_0,cal_tmp_carry__5_i_5_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__5_i_1
       (.I0(remd_tmp[26]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(remd_tmp_mux[26]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__5_i_2
       (.I0(remd_tmp[26]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(cal_tmp_carry__5_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__5_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[25]),
        .O(cal_tmp_carry__5_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__5_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[24]),
        .O(cal_tmp_carry__5_i_4_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__5_i_5
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[23]),
        .O(cal_tmp_carry__5_i_5_n_0));
  CARRY4 cal_tmp_carry__6
       (.CI(cal_tmp_carry__5_n_0),
        .CO({cal_tmp_carry__6_n_0,cal_tmp_carry__6_n_1,cal_tmp_carry__6_n_2,cal_tmp_carry__6_n_3}),
        .CYINIT(1'b0),
        .DI({remd_tmp_mux[30],1'b1,remd_tmp_mux[28],1'b1}),
        .O({cal_tmp_carry__6_n_4,cal_tmp_carry__6_n_5,cal_tmp_carry__6_n_6,cal_tmp_carry__6_n_7}),
        .S({cal_tmp_carry__6_i_3_n_0,cal_tmp_carry__6_i_4_n_0,cal_tmp_carry__6_i_5_n_0,cal_tmp_carry__6_i_6_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__6_i_1
       (.I0(remd_tmp[30]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(remd_tmp_mux[30]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__6_i_2
       (.I0(remd_tmp[28]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(remd_tmp_mux[28]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__6_i_3
       (.I0(remd_tmp[30]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(cal_tmp_carry__6_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__6_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[29]),
        .O(cal_tmp_carry__6_i_4_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__6_i_5
       (.I0(remd_tmp[28]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(cal_tmp_carry__6_i_5_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__6_i_6
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[27]),
        .O(cal_tmp_carry__6_i_6_n_0));
  CARRY4 cal_tmp_carry__7
       (.CI(cal_tmp_carry__6_n_0),
        .CO({cal_tmp_carry__7_n_0,cal_tmp_carry__7_n_1,cal_tmp_carry__7_n_2,cal_tmp_carry__7_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__7_n_4,cal_tmp_carry__7_n_5,cal_tmp_carry__7_n_6,cal_tmp_carry__7_n_7}),
        .S({cal_tmp_carry__7_i_1_n_0,cal_tmp_carry__7_i_2_n_0,cal_tmp_carry__7_i_3_n_0,cal_tmp_carry__7_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__7_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[34]),
        .O(cal_tmp_carry__7_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__7_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[33]),
        .O(cal_tmp_carry__7_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__7_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[32]),
        .O(cal_tmp_carry__7_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__7_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[31]),
        .O(cal_tmp_carry__7_i_4_n_0));
  CARRY4 cal_tmp_carry__8
       (.CI(cal_tmp_carry__7_n_0),
        .CO({cal_tmp_carry__8_n_0,cal_tmp_carry__8_n_1,cal_tmp_carry__8_n_2,cal_tmp_carry__8_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__8_n_4,cal_tmp_carry__8_n_5,cal_tmp_carry__8_n_6,cal_tmp_carry__8_n_7}),
        .S({cal_tmp_carry__8_i_1_n_0,cal_tmp_carry__8_i_2_n_0,cal_tmp_carry__8_i_3_n_0,cal_tmp_carry__8_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__8_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[38]),
        .O(cal_tmp_carry__8_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__8_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[37]),
        .O(cal_tmp_carry__8_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__8_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[36]),
        .O(cal_tmp_carry__8_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__8_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[35]),
        .O(cal_tmp_carry__8_i_4_n_0));
  CARRY4 cal_tmp_carry__9
       (.CI(cal_tmp_carry__8_n_0),
        .CO({cal_tmp_carry__9_n_0,cal_tmp_carry__9_n_1,cal_tmp_carry__9_n_2,cal_tmp_carry__9_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__9_n_4,cal_tmp_carry__9_n_5,cal_tmp_carry__9_n_6,cal_tmp_carry__9_n_7}),
        .S({cal_tmp_carry__9_i_1_n_0,cal_tmp_carry__9_i_2_n_0,cal_tmp_carry__9_i_3_n_0,cal_tmp_carry__9_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__9_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[42]),
        .O(cal_tmp_carry__9_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__9_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[41]),
        .O(cal_tmp_carry__9_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__9_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[40]),
        .O(cal_tmp_carry__9_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__9_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[39]),
        .O(cal_tmp_carry__9_i_4_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1
       (.I0(remd_tmp[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[2]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(remd_tmp[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[0]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3
       (.I0(remd_tmp[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry_i_4
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[1]),
        .O(cal_tmp_carry_i_4_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_5
       (.I0(remd_tmp[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_5_n_0));
  LUT3 #(
    .INIT(8'h1B)) 
    cal_tmp_carry_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(dividend_tmp[63]),
        .I2(\dividend0_reg_n_0_[63] ),
        .O(cal_tmp_carry_i_6_n_0));
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
  FDRE \dividend0_reg[16] 
       (.C(ap_clk),
        .CE(E),
        .D(D[15]),
        .Q(\dividend0_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \dividend0_reg[17] 
       (.C(ap_clk),
        .CE(E),
        .D(D[16]),
        .Q(\dividend0_reg_n_0_[17] ),
        .R(1'b0));
  FDRE \dividend0_reg[18] 
       (.C(ap_clk),
        .CE(E),
        .D(D[17]),
        .Q(\dividend0_reg_n_0_[18] ),
        .R(1'b0));
  FDRE \dividend0_reg[19] 
       (.C(ap_clk),
        .CE(E),
        .D(D[18]),
        .Q(\dividend0_reg_n_0_[19] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(D[0]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[20] 
       (.C(ap_clk),
        .CE(E),
        .D(D[19]),
        .Q(\dividend0_reg_n_0_[20] ),
        .R(1'b0));
  FDRE \dividend0_reg[21] 
       (.C(ap_clk),
        .CE(E),
        .D(D[20]),
        .Q(\dividend0_reg_n_0_[21] ),
        .R(1'b0));
  FDRE \dividend0_reg[22] 
       (.C(ap_clk),
        .CE(E),
        .D(D[21]),
        .Q(\dividend0_reg_n_0_[22] ),
        .R(1'b0));
  FDRE \dividend0_reg[23] 
       (.C(ap_clk),
        .CE(E),
        .D(D[22]),
        .Q(\dividend0_reg_n_0_[23] ),
        .R(1'b0));
  FDRE \dividend0_reg[24] 
       (.C(ap_clk),
        .CE(E),
        .D(D[23]),
        .Q(\dividend0_reg_n_0_[24] ),
        .R(1'b0));
  FDRE \dividend0_reg[25] 
       (.C(ap_clk),
        .CE(E),
        .D(D[24]),
        .Q(\dividend0_reg_n_0_[25] ),
        .R(1'b0));
  FDRE \dividend0_reg[26] 
       (.C(ap_clk),
        .CE(E),
        .D(D[25]),
        .Q(\dividend0_reg_n_0_[26] ),
        .R(1'b0));
  FDRE \dividend0_reg[27] 
       (.C(ap_clk),
        .CE(E),
        .D(D[26]),
        .Q(\dividend0_reg_n_0_[27] ),
        .R(1'b0));
  FDRE \dividend0_reg[28] 
       (.C(ap_clk),
        .CE(E),
        .D(D[27]),
        .Q(\dividend0_reg_n_0_[28] ),
        .R(1'b0));
  FDRE \dividend0_reg[29] 
       (.C(ap_clk),
        .CE(E),
        .D(D[28]),
        .Q(\dividend0_reg_n_0_[29] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(D[1]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[30] 
       (.C(ap_clk),
        .CE(E),
        .D(D[29]),
        .Q(\dividend0_reg_n_0_[30] ),
        .R(1'b0));
  FDRE \dividend0_reg[31] 
       (.C(ap_clk),
        .CE(E),
        .D(D[30]),
        .Q(\dividend0_reg_n_0_[31] ),
        .R(1'b0));
  FDRE \dividend0_reg[32] 
       (.C(ap_clk),
        .CE(E),
        .D(D[31]),
        .Q(\dividend0_reg_n_0_[32] ),
        .R(1'b0));
  FDRE \dividend0_reg[33] 
       (.C(ap_clk),
        .CE(E),
        .D(D[32]),
        .Q(\dividend0_reg_n_0_[33] ),
        .R(1'b0));
  FDRE \dividend0_reg[34] 
       (.C(ap_clk),
        .CE(E),
        .D(D[33]),
        .Q(\dividend0_reg_n_0_[34] ),
        .R(1'b0));
  FDRE \dividend0_reg[35] 
       (.C(ap_clk),
        .CE(E),
        .D(D[34]),
        .Q(\dividend0_reg_n_0_[35] ),
        .R(1'b0));
  FDRE \dividend0_reg[36] 
       (.C(ap_clk),
        .CE(E),
        .D(D[35]),
        .Q(\dividend0_reg_n_0_[36] ),
        .R(1'b0));
  FDRE \dividend0_reg[37] 
       (.C(ap_clk),
        .CE(E),
        .D(D[36]),
        .Q(\dividend0_reg_n_0_[37] ),
        .R(1'b0));
  FDRE \dividend0_reg[38] 
       (.C(ap_clk),
        .CE(E),
        .D(D[37]),
        .Q(\dividend0_reg_n_0_[38] ),
        .R(1'b0));
  FDRE \dividend0_reg[39] 
       (.C(ap_clk),
        .CE(E),
        .D(D[38]),
        .Q(\dividend0_reg_n_0_[39] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(D[2]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[40] 
       (.C(ap_clk),
        .CE(E),
        .D(D[39]),
        .Q(\dividend0_reg_n_0_[40] ),
        .R(1'b0));
  FDRE \dividend0_reg[41] 
       (.C(ap_clk),
        .CE(E),
        .D(D[40]),
        .Q(\dividend0_reg_n_0_[41] ),
        .R(1'b0));
  FDRE \dividend0_reg[42] 
       (.C(ap_clk),
        .CE(E),
        .D(D[41]),
        .Q(\dividend0_reg_n_0_[42] ),
        .R(1'b0));
  FDRE \dividend0_reg[43] 
       (.C(ap_clk),
        .CE(E),
        .D(D[42]),
        .Q(\dividend0_reg_n_0_[43] ),
        .R(1'b0));
  FDRE \dividend0_reg[44] 
       (.C(ap_clk),
        .CE(E),
        .D(D[43]),
        .Q(\dividend0_reg_n_0_[44] ),
        .R(1'b0));
  FDRE \dividend0_reg[45] 
       (.C(ap_clk),
        .CE(E),
        .D(D[44]),
        .Q(\dividend0_reg_n_0_[45] ),
        .R(1'b0));
  FDRE \dividend0_reg[46] 
       (.C(ap_clk),
        .CE(E),
        .D(D[45]),
        .Q(\dividend0_reg_n_0_[46] ),
        .R(1'b0));
  FDRE \dividend0_reg[47] 
       (.C(ap_clk),
        .CE(E),
        .D(D[46]),
        .Q(\dividend0_reg_n_0_[47] ),
        .R(1'b0));
  FDRE \dividend0_reg[48] 
       (.C(ap_clk),
        .CE(E),
        .D(D[47]),
        .Q(\dividend0_reg_n_0_[48] ),
        .R(1'b0));
  FDRE \dividend0_reg[49] 
       (.C(ap_clk),
        .CE(E),
        .D(D[48]),
        .Q(\dividend0_reg_n_0_[49] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(D[3]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[50] 
       (.C(ap_clk),
        .CE(E),
        .D(D[49]),
        .Q(\dividend0_reg_n_0_[50] ),
        .R(1'b0));
  FDRE \dividend0_reg[51] 
       (.C(ap_clk),
        .CE(E),
        .D(D[50]),
        .Q(\dividend0_reg_n_0_[51] ),
        .R(1'b0));
  FDRE \dividend0_reg[52] 
       (.C(ap_clk),
        .CE(E),
        .D(D[51]),
        .Q(\dividend0_reg_n_0_[52] ),
        .R(1'b0));
  FDRE \dividend0_reg[53] 
       (.C(ap_clk),
        .CE(E),
        .D(D[52]),
        .Q(\dividend0_reg_n_0_[53] ),
        .R(1'b0));
  FDRE \dividend0_reg[54] 
       (.C(ap_clk),
        .CE(E),
        .D(D[53]),
        .Q(\dividend0_reg_n_0_[54] ),
        .R(1'b0));
  FDRE \dividend0_reg[55] 
       (.C(ap_clk),
        .CE(E),
        .D(D[54]),
        .Q(\dividend0_reg_n_0_[55] ),
        .R(1'b0));
  FDRE \dividend0_reg[56] 
       (.C(ap_clk),
        .CE(E),
        .D(D[55]),
        .Q(\dividend0_reg_n_0_[56] ),
        .R(1'b0));
  FDRE \dividend0_reg[57] 
       (.C(ap_clk),
        .CE(E),
        .D(D[56]),
        .Q(\dividend0_reg_n_0_[57] ),
        .R(1'b0));
  FDRE \dividend0_reg[58] 
       (.C(ap_clk),
        .CE(E),
        .D(D[57]),
        .Q(\dividend0_reg_n_0_[58] ),
        .R(1'b0));
  FDRE \dividend0_reg[59] 
       (.C(ap_clk),
        .CE(E),
        .D(D[58]),
        .Q(\dividend0_reg_n_0_[59] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(D[4]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[60] 
       (.C(ap_clk),
        .CE(E),
        .D(D[59]),
        .Q(\dividend0_reg_n_0_[60] ),
        .R(1'b0));
  FDRE \dividend0_reg[61] 
       (.C(ap_clk),
        .CE(E),
        .D(D[60]),
        .Q(\dividend0_reg_n_0_[61] ),
        .R(1'b0));
  FDRE \dividend0_reg[62] 
       (.C(ap_clk),
        .CE(E),
        .D(D[61]),
        .Q(\dividend0_reg_n_0_[62] ),
        .R(1'b0));
  FDRE \dividend0_reg[63] 
       (.C(ap_clk),
        .CE(E),
        .D(D[62]),
        .Q(\dividend0_reg_n_0_[63] ),
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
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[10]_i_1 
       (.I0(\dividend0_reg_n_0_[9] ),
        .I1(dividend_tmp[9]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[11]_i_1 
       (.I0(\dividend0_reg_n_0_[10] ),
        .I1(dividend_tmp[10]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[12]_i_1 
       (.I0(\dividend0_reg_n_0_[11] ),
        .I1(dividend_tmp[11]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[12]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[13]_i_1 
       (.I0(\dividend0_reg_n_0_[12] ),
        .I1(dividend_tmp[12]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[14]_i_1 
       (.I0(\dividend0_reg_n_0_[13] ),
        .I1(dividend_tmp[13]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[14]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[15]_i_1 
       (.I0(\dividend0_reg_n_0_[14] ),
        .I1(dividend_tmp[14]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[16]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(dividend_tmp[15]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[16]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[17]_i_1 
       (.I0(\dividend0_reg_n_0_[16] ),
        .I1(dividend_tmp[16]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[17]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[18]_i_1 
       (.I0(\dividend0_reg_n_0_[17] ),
        .I1(dividend_tmp[17]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[18]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[19]_i_1 
       (.I0(\dividend0_reg_n_0_[18] ),
        .I1(dividend_tmp[18]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[19]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[1]_i_1 
       (.I0(\dividend0_reg_n_0_[0] ),
        .I1(dividend_tmp[0]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[20]_i_1 
       (.I0(\dividend0_reg_n_0_[19] ),
        .I1(dividend_tmp[19]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[20]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[21]_i_1 
       (.I0(\dividend0_reg_n_0_[20] ),
        .I1(dividend_tmp[20]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[21]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[22]_i_1 
       (.I0(\dividend0_reg_n_0_[21] ),
        .I1(dividend_tmp[21]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[22]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[23]_i_1 
       (.I0(\dividend0_reg_n_0_[22] ),
        .I1(dividend_tmp[22]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[23]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[24]_i_1 
       (.I0(\dividend0_reg_n_0_[23] ),
        .I1(dividend_tmp[23]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[24]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[25]_i_1 
       (.I0(\dividend0_reg_n_0_[24] ),
        .I1(dividend_tmp[24]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[25]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[26]_i_1 
       (.I0(\dividend0_reg_n_0_[25] ),
        .I1(dividend_tmp[25]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[26]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[27]_i_1 
       (.I0(\dividend0_reg_n_0_[26] ),
        .I1(dividend_tmp[26]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[27]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[28]_i_1 
       (.I0(\dividend0_reg_n_0_[27] ),
        .I1(dividend_tmp[27]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[28]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[29]_i_1 
       (.I0(\dividend0_reg_n_0_[28] ),
        .I1(dividend_tmp[28]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[29]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[2]_i_1 
       (.I0(\dividend0_reg_n_0_[1] ),
        .I1(dividend_tmp[1]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[30]_i_1 
       (.I0(\dividend0_reg_n_0_[29] ),
        .I1(dividend_tmp[29]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[30]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[31]_i_1 
       (.I0(\dividend0_reg_n_0_[30] ),
        .I1(dividend_tmp[30]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[31]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[32]_i_1 
       (.I0(\dividend0_reg_n_0_[31] ),
        .I1(dividend_tmp[31]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[32]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[33]_i_1 
       (.I0(\dividend0_reg_n_0_[32] ),
        .I1(dividend_tmp[32]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[33]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[34]_i_1 
       (.I0(\dividend0_reg_n_0_[33] ),
        .I1(dividend_tmp[33]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[34]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[35]_i_1 
       (.I0(\dividend0_reg_n_0_[34] ),
        .I1(dividend_tmp[34]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[35]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[36]_i_1 
       (.I0(\dividend0_reg_n_0_[35] ),
        .I1(dividend_tmp[35]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[36]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[37]_i_1 
       (.I0(\dividend0_reg_n_0_[36] ),
        .I1(dividend_tmp[36]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[37]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[38]_i_1 
       (.I0(\dividend0_reg_n_0_[37] ),
        .I1(dividend_tmp[37]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[38]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[39]_i_1 
       (.I0(\dividend0_reg_n_0_[38] ),
        .I1(dividend_tmp[38]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[39]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[3]_i_1 
       (.I0(\dividend0_reg_n_0_[2] ),
        .I1(dividend_tmp[2]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[40]_i_1 
       (.I0(\dividend0_reg_n_0_[39] ),
        .I1(dividend_tmp[39]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[40]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[41]_i_1 
       (.I0(\dividend0_reg_n_0_[40] ),
        .I1(dividend_tmp[40]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[41]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[42]_i_1 
       (.I0(\dividend0_reg_n_0_[41] ),
        .I1(dividend_tmp[41]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[42]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[43]_i_1 
       (.I0(\dividend0_reg_n_0_[42] ),
        .I1(dividend_tmp[42]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[43]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[44]_i_1 
       (.I0(\dividend0_reg_n_0_[43] ),
        .I1(dividend_tmp[43]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[44]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[45]_i_1 
       (.I0(\dividend0_reg_n_0_[44] ),
        .I1(dividend_tmp[44]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[45]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[46]_i_1 
       (.I0(\dividend0_reg_n_0_[45] ),
        .I1(dividend_tmp[45]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[46]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[47]_i_1 
       (.I0(\dividend0_reg_n_0_[46] ),
        .I1(dividend_tmp[46]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[47]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[48]_i_1 
       (.I0(\dividend0_reg_n_0_[47] ),
        .I1(dividend_tmp[47]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[48]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[49]_i_1 
       (.I0(\dividend0_reg_n_0_[48] ),
        .I1(dividend_tmp[48]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[49]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend0_reg_n_0_[3] ),
        .I1(dividend_tmp[3]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[50]_i_1 
       (.I0(\dividend0_reg_n_0_[49] ),
        .I1(dividend_tmp[49]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[50]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[51]_i_1 
       (.I0(\dividend0_reg_n_0_[50] ),
        .I1(dividend_tmp[50]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[51]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[52]_i_1 
       (.I0(\dividend0_reg_n_0_[51] ),
        .I1(dividend_tmp[51]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[52]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[53]_i_1 
       (.I0(\dividend0_reg_n_0_[52] ),
        .I1(dividend_tmp[52]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[53]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[54]_i_1 
       (.I0(\dividend0_reg_n_0_[53] ),
        .I1(dividend_tmp[53]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[54]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[55]_i_1 
       (.I0(\dividend0_reg_n_0_[54] ),
        .I1(dividend_tmp[54]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[55]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[56]_i_1 
       (.I0(\dividend0_reg_n_0_[55] ),
        .I1(dividend_tmp[55]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[56]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[57]_i_1 
       (.I0(\dividend0_reg_n_0_[56] ),
        .I1(dividend_tmp[56]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[57]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[58]_i_1 
       (.I0(\dividend0_reg_n_0_[57] ),
        .I1(dividend_tmp[57]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[58]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[59]_i_1 
       (.I0(\dividend0_reg_n_0_[58] ),
        .I1(dividend_tmp[58]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[59]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[5]_i_1 
       (.I0(\dividend0_reg_n_0_[4] ),
        .I1(dividend_tmp[4]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[60]_i_1 
       (.I0(\dividend0_reg_n_0_[59] ),
        .I1(dividend_tmp[59]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[60]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[61]_i_1 
       (.I0(\dividend0_reg_n_0_[60] ),
        .I1(dividend_tmp[60]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[61]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[62]_i_1 
       (.I0(\dividend0_reg_n_0_[61] ),
        .I1(dividend_tmp[61]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[62]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[63]_i_1 
       (.I0(\dividend0_reg_n_0_[62] ),
        .I1(dividend_tmp[62]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[63]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[6]_i_1 
       (.I0(\dividend0_reg_n_0_[5] ),
        .I1(dividend_tmp[5]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[7]_i_1 
       (.I0(\dividend0_reg_n_0_[6] ),
        .I1(dividend_tmp[6]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[8]_i_1 
       (.I0(\dividend0_reg_n_0_[7] ),
        .I1(dividend_tmp[7]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
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
  FDRE \dividend_tmp_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[17]_i_1_n_0 ),
        .Q(dividend_tmp[17]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[18]_i_1_n_0 ),
        .Q(dividend_tmp[18]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[19]_i_1_n_0 ),
        .Q(dividend_tmp[19]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[1]_i_1_n_0 ),
        .Q(dividend_tmp[1]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[20]_i_1_n_0 ),
        .Q(dividend_tmp[20]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[21]_i_1_n_0 ),
        .Q(dividend_tmp[21]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[22]_i_1_n_0 ),
        .Q(dividend_tmp[22]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[23]_i_1_n_0 ),
        .Q(dividend_tmp[23]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[24]_i_1_n_0 ),
        .Q(dividend_tmp[24]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[25]_i_1_n_0 ),
        .Q(dividend_tmp[25]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[26]_i_1_n_0 ),
        .Q(dividend_tmp[26]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[27]_i_1_n_0 ),
        .Q(dividend_tmp[27]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[28]_i_1_n_0 ),
        .Q(dividend_tmp[28]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[29]_i_1_n_0 ),
        .Q(dividend_tmp[29]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[2]_i_1_n_0 ),
        .Q(dividend_tmp[2]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[30]_i_1_n_0 ),
        .Q(dividend_tmp[30]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[31]_i_1_n_0 ),
        .Q(dividend_tmp[31]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[32] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[32]_i_1_n_0 ),
        .Q(dividend_tmp[32]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[33] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[33]_i_1_n_0 ),
        .Q(dividend_tmp[33]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[34] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[34]_i_1_n_0 ),
        .Q(dividend_tmp[34]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[35] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[35]_i_1_n_0 ),
        .Q(dividend_tmp[35]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[36] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[36]_i_1_n_0 ),
        .Q(dividend_tmp[36]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[37] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[37]_i_1_n_0 ),
        .Q(dividend_tmp[37]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[38] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[38]_i_1_n_0 ),
        .Q(dividend_tmp[38]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[39] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[39]_i_1_n_0 ),
        .Q(dividend_tmp[39]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[3]_i_1_n_0 ),
        .Q(dividend_tmp[3]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[40] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[40]_i_1_n_0 ),
        .Q(dividend_tmp[40]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[41] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[41]_i_1_n_0 ),
        .Q(dividend_tmp[41]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[42] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[42]_i_1_n_0 ),
        .Q(dividend_tmp[42]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[43] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[43]_i_1_n_0 ),
        .Q(dividend_tmp[43]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[44] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[44]_i_1_n_0 ),
        .Q(dividend_tmp[44]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[45] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[45]_i_1_n_0 ),
        .Q(dividend_tmp[45]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[46] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[46]_i_1_n_0 ),
        .Q(dividend_tmp[46]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[47] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[47]_i_1_n_0 ),
        .Q(dividend_tmp[47]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[48] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[48]_i_1_n_0 ),
        .Q(dividend_tmp[48]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[49] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[49]_i_1_n_0 ),
        .Q(dividend_tmp[49]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[4]_i_1_n_0 ),
        .Q(dividend_tmp[4]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[50] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[50]_i_1_n_0 ),
        .Q(dividend_tmp[50]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[51] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[51]_i_1_n_0 ),
        .Q(dividend_tmp[51]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[52] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[52]_i_1_n_0 ),
        .Q(dividend_tmp[52]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[53] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[53]_i_1_n_0 ),
        .Q(dividend_tmp[53]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[54] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[54]_i_1_n_0 ),
        .Q(dividend_tmp[54]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[55] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[55]_i_1_n_0 ),
        .Q(dividend_tmp[55]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[56] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[56]_i_1_n_0 ),
        .Q(dividend_tmp[56]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[57] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[57]_i_1_n_0 ),
        .Q(dividend_tmp[57]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[58] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[58]_i_1_n_0 ),
        .Q(dividend_tmp[58]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[59] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[59]_i_1_n_0 ),
        .Q(dividend_tmp[59]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[5]_i_1_n_0 ),
        .Q(dividend_tmp[5]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[60] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[60]_i_1_n_0 ),
        .Q(dividend_tmp[60]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[61] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[61]_i_1_n_0 ),
        .Q(dividend_tmp[61]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[62] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[62]_i_1_n_0 ),
        .Q(dividend_tmp[62]),
        .R(1'b0));
  FDRE \dividend_tmp_reg[63] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[63]_i_1_n_0 ),
        .Q(dividend_tmp[63]),
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
  (* ORIG_CELL_NAME = "r_stage_reg[0]" *) 
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  (* ORIG_CELL_NAME = "r_stage_reg[0]" *) 
  FDRE \r_stage_reg[0]_rep 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg[0]_rep_n_0 ),
        .R(ap_rst));
  (* srl_bus_name = "inst/\srem_64ns_33ns_16_68_seq_1_U1/fn1_srem_64ns_33ns_16_68_seq_1_div_U/fn1_srem_64ns_33ns_16_68_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\srem_64ns_33ns_16_68_seq_1_U1/fn1_srem_64ns_33ns_16_68_seq_1_div_U/fn1_srem_64ns_33ns_16_68_seq_1_div_u_0/r_stage_reg[32]_srl32___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_30 " *) 
  SRLC32E \r_stage_reg[32]_srl32___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_30 
       (.A({1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\NLW_r_stage_reg[32]_srl32___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_30_Q_UNCONNECTED ),
        .Q31(\r_stage_reg[32]_srl32___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_30_n_1 ));
  (* srl_bus_name = "inst/\srem_64ns_33ns_16_68_seq_1_U1/fn1_srem_64ns_33ns_16_68_seq_1_div_U/fn1_srem_64ns_33ns_16_68_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\srem_64ns_33ns_16_68_seq_1_U1/fn1_srem_64ns_33ns_16_68_seq_1_div_U/fn1_srem_64ns_33ns_16_68_seq_1_div_u_0/r_stage_reg[62]_srl30___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_60 " *) 
  SRLC32E \r_stage_reg[62]_srl30___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_60 
       (.A({1'b1,1'b1,1'b1,1'b0,1'b1}),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg[32]_srl32___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_30_n_1 ),
        .Q(\r_stage_reg[62]_srl30___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_60_n_0 ),
        .Q31(\NLW_r_stage_reg[62]_srl30___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_60_Q31_UNCONNECTED ));
  FDRE \r_stage_reg[63]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_61 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[62]_srl30___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_60_n_0 ),
        .Q(\r_stage_reg[63]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_61_n_0 ),
        .R(1'b0));
  FDRE \r_stage_reg[64] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_gate_n_0),
        .Q(\r_stage_reg[64]_0 ),
        .R(ap_rst));
  LUT2 #(
    .INIT(4'h8)) 
    r_stage_reg_gate
       (.I0(\r_stage_reg[63]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_61_n_0 ),
        .I1(r_stage_reg_r_61_n_0),
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
        .Q(r_stage_reg_r_13_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_14
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_13_n_0),
        .Q(r_stage_reg_r_14_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_15
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_14_n_0),
        .Q(r_stage_reg_r_15_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_16
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_15_n_0),
        .Q(r_stage_reg_r_16_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_17
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_16_n_0),
        .Q(r_stage_reg_r_17_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_18
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_17_n_0),
        .Q(r_stage_reg_r_18_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_19
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_18_n_0),
        .Q(r_stage_reg_r_19_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_2
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_1_n_0),
        .Q(r_stage_reg_r_2_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_20
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_19_n_0),
        .Q(r_stage_reg_r_20_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_21
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_20_n_0),
        .Q(r_stage_reg_r_21_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_22
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_21_n_0),
        .Q(r_stage_reg_r_22_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_23
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_22_n_0),
        .Q(r_stage_reg_r_23_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_24
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_23_n_0),
        .Q(r_stage_reg_r_24_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_25
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_24_n_0),
        .Q(r_stage_reg_r_25_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_26
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_25_n_0),
        .Q(r_stage_reg_r_26_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_27
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_26_0),
        .Q(r_stage_reg_r_27_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_28
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_27_n_0),
        .Q(r_stage_reg_r_28_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_29
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_28_n_0),
        .Q(r_stage_reg_r_29_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_3
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_2_n_0),
        .Q(r_stage_reg_r_3_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_30
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_29_n_0),
        .Q(r_stage_reg_r_30_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_31
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_30_n_0),
        .Q(r_stage_reg_r_31_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_32
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_31_n_0),
        .Q(r_stage_reg_r_32_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_33
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_32_n_0),
        .Q(r_stage_reg_r_33_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_34
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_33_n_0),
        .Q(r_stage_reg_r_34_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_35
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_34_n_0),
        .Q(r_stage_reg_r_35_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_36
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_35_n_0),
        .Q(r_stage_reg_r_36_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_37
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_36_n_0),
        .Q(r_stage_reg_r_37_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_38
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_37_n_0),
        .Q(r_stage_reg_r_38_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_39
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_38_n_0),
        .Q(r_stage_reg_r_39_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_4
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_3_n_0),
        .Q(r_stage_reg_r_4_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_40
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_39_n_0),
        .Q(r_stage_reg_r_40_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_41
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_40_n_0),
        .Q(r_stage_reg_r_41_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_42
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_41_n_0),
        .Q(r_stage_reg_r_42_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_43
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_42_n_0),
        .Q(r_stage_reg_r_43_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_44
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_43_n_0),
        .Q(r_stage_reg_r_44_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_45
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_44_n_0),
        .Q(r_stage_reg_r_45_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_46
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_45_n_0),
        .Q(r_stage_reg_r_46_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_47
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_46_n_0),
        .Q(r_stage_reg_r_47_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_48
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_47_n_0),
        .Q(r_stage_reg_r_48_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_49
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_48_n_0),
        .Q(r_stage_reg_r_49_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_5
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_4_n_0),
        .Q(r_stage_reg_r_5_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_50
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_49_n_0),
        .Q(r_stage_reg_r_50_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_51
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_50_n_0),
        .Q(r_stage_reg_r_51_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_52
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_51_n_0),
        .Q(r_stage_reg_r_52_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_53
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_52_n_0),
        .Q(r_stage_reg_r_53_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_54
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_53_n_0),
        .Q(r_stage_reg_r_54_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_55
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_54_n_0),
        .Q(r_stage_reg_r_55_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_56
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_55_n_0),
        .Q(r_stage_reg_r_56_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_57
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_56_n_0),
        .Q(r_stage_reg_r_57_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_58
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_57_n_0),
        .Q(r_stage_reg_r_58_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_59
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_58_n_0),
        .Q(r_stage_reg_r_59_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_6
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_5_0),
        .Q(r_stage_reg_r_6_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_60
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_59_n_0),
        .Q(r_stage_reg_r_60_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_61
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_60_n_0),
        .Q(r_stage_reg_r_61_n_0),
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
       (.I0(sign0),
        .I1(remd_tmp[11]),
        .O(\remd[11]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_3 
       (.I0(sign0),
        .I1(remd_tmp[10]),
        .O(\remd[11]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_4 
       (.I0(sign0),
        .I1(remd_tmp[9]),
        .O(\remd[11]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[11]_i_5 
       (.I0(sign0),
        .I1(remd_tmp[8]),
        .O(\remd[11]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_2 
       (.I0(sign0),
        .I1(remd_tmp[15]),
        .O(\remd[15]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_3 
       (.I0(sign0),
        .I1(remd_tmp[14]),
        .O(\remd[15]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_4 
       (.I0(sign0),
        .I1(remd_tmp[13]),
        .O(\remd[15]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[15]_i_5 
       (.I0(sign0),
        .I1(remd_tmp[12]),
        .O(\remd[15]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[3]_i_2 
       (.I0(sign0),
        .I1(remd_tmp[3]),
        .O(\remd[3]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[3]_i_3 
       (.I0(sign0),
        .I1(remd_tmp[2]),
        .O(\remd[3]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[3]_i_4 
       (.I0(sign0),
        .I1(remd_tmp[1]),
        .O(\remd[3]_i_4_n_0 ));
  LUT1 #(
    .INIT(2'h2)) 
    \remd[3]_i_5 
       (.I0(remd_tmp[0]),
        .O(\remd[3]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_2 
       (.I0(sign0),
        .I1(remd_tmp[7]),
        .O(\remd[7]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_3 
       (.I0(sign0),
        .I1(remd_tmp[6]),
        .O(\remd[7]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_4 
       (.I0(sign0),
        .I1(remd_tmp[5]),
        .O(\remd[7]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \remd[7]_i_5 
       (.I0(sign0),
        .I1(remd_tmp[4]),
        .O(\remd[7]_i_5_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[11]_i_1 
       (.CI(\remd_reg[7]_i_1_n_0 ),
        .CO({\remd_reg[11]_i_1_n_0 ,\remd_reg[11]_i_1_n_1 ,\remd_reg[11]_i_1_n_2 ,\remd_reg[11]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(O7[11:8]),
        .S({\remd[11]_i_2_n_0 ,\remd[11]_i_3_n_0 ,\remd[11]_i_4_n_0 ,\remd[11]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[15]_i_1 
       (.CI(\remd_reg[11]_i_1_n_0 ),
        .CO({\NLW_remd_reg[15]_i_1_CO_UNCONNECTED [3],\remd_reg[15]_i_1_n_1 ,\remd_reg[15]_i_1_n_2 ,\remd_reg[15]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(O7[15:12]),
        .S({\remd[15]_i_2_n_0 ,\remd[15]_i_3_n_0 ,\remd[15]_i_4_n_0 ,\remd[15]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[3]_i_1 
       (.CI(1'b0),
        .CO({\remd_reg[3]_i_1_n_0 ,\remd_reg[3]_i_1_n_1 ,\remd_reg[3]_i_1_n_2 ,\remd_reg[3]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,sign0}),
        .O(O7[3:0]),
        .S({\remd[3]_i_2_n_0 ,\remd[3]_i_3_n_0 ,\remd[3]_i_4_n_0 ,\remd[3]_i_5_n_0 }));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \remd_reg[7]_i_1 
       (.CI(\remd_reg[3]_i_1_n_0 ),
        .CO({\remd_reg[7]_i_1_n_0 ,\remd_reg[7]_i_1_n_1 ,\remd_reg[7]_i_1_n_2 ,\remd_reg[7]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(O7[7:4]),
        .S({\remd[7]_i_2_n_0 ,\remd[7]_i_3_n_0 ,\remd[7]_i_4_n_0 ,\remd[7]_i_5_n_0 }));
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \remd_tmp[0]_i_1 
       (.I0(\dividend0_reg_n_0_[63] ),
        .I1(dividend_tmp[63]),
        .I2(\r_stage_reg_n_0_[0] ),
        .I3(p_0_in),
        .I4(cal_tmp_carry_n_7),
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
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_7),
        .O(\remd_tmp[12]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[13]_i_1 
       (.I0(remd_tmp[12]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_6),
        .O(\remd_tmp[13]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[14]_i_1 
       (.I0(remd_tmp[13]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_5),
        .O(\remd_tmp[14]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[15]_i_1 
       (.I0(remd_tmp[14]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_4),
        .O(\remd_tmp[15]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[16]_i_1 
       (.I0(remd_tmp[15]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__3_n_7),
        .O(\remd_tmp[16]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[17]_i_1 
       (.I0(remd_tmp[16]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__3_n_6),
        .O(\remd_tmp[17]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[18]_i_1 
       (.I0(remd_tmp[17]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__3_n_5),
        .O(\remd_tmp[18]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[19]_i_1 
       (.I0(remd_tmp[18]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__3_n_4),
        .O(\remd_tmp[19]_i_1_n_0 ));
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
    \remd_tmp[20]_i_1 
       (.I0(remd_tmp[19]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__4_n_7),
        .O(\remd_tmp[20]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[21]_i_1 
       (.I0(remd_tmp[20]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__4_n_6),
        .O(\remd_tmp[21]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[22]_i_1 
       (.I0(remd_tmp[21]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__4_n_5),
        .O(\remd_tmp[22]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[23]_i_1 
       (.I0(remd_tmp[22]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__4_n_4),
        .O(\remd_tmp[23]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[24]_i_1 
       (.I0(remd_tmp[23]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__5_n_7),
        .O(\remd_tmp[24]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[25]_i_1 
       (.I0(remd_tmp[24]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__5_n_6),
        .O(\remd_tmp[25]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[26]_i_1 
       (.I0(remd_tmp[25]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__5_n_5),
        .O(\remd_tmp[26]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[27]_i_1 
       (.I0(remd_tmp[26]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__5_n_4),
        .O(\remd_tmp[27]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[28]_i_1 
       (.I0(remd_tmp[27]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__6_n_7),
        .O(\remd_tmp[28]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[29]_i_1 
       (.I0(remd_tmp[28]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__6_n_6),
        .O(\remd_tmp[29]_i_1_n_0 ));
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
    \remd_tmp[30]_i_1 
       (.I0(remd_tmp[29]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__6_n_5),
        .O(\remd_tmp[30]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[31]_i_1 
       (.I0(remd_tmp[30]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__6_n_4),
        .O(\remd_tmp[31]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[32]_i_1 
       (.I0(remd_tmp[31]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__7_n_7),
        .O(\remd_tmp[32]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[33]_i_1 
       (.I0(remd_tmp[32]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__7_n_6),
        .O(\remd_tmp[33]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[34]_i_1 
       (.I0(remd_tmp[33]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__7_n_5),
        .O(\remd_tmp[34]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[35]_i_1 
       (.I0(remd_tmp[34]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__7_n_4),
        .O(\remd_tmp[35]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[36]_i_1 
       (.I0(remd_tmp[35]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__8_n_7),
        .O(\remd_tmp[36]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[37]_i_1 
       (.I0(remd_tmp[36]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__8_n_6),
        .O(\remd_tmp[37]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[38]_i_1 
       (.I0(remd_tmp[37]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__8_n_5),
        .O(\remd_tmp[38]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[39]_i_1 
       (.I0(remd_tmp[38]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__8_n_4),
        .O(\remd_tmp[39]_i_1_n_0 ));
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
    \remd_tmp[40]_i_1 
       (.I0(remd_tmp[39]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__9_n_7),
        .O(\remd_tmp[40]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[41]_i_1 
       (.I0(remd_tmp[40]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__9_n_6),
        .O(\remd_tmp[41]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[42]_i_1 
       (.I0(remd_tmp[41]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__9_n_5),
        .O(\remd_tmp[42]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[43]_i_1 
       (.I0(remd_tmp[42]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__9_n_4),
        .O(\remd_tmp[43]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[44]_i_1 
       (.I0(remd_tmp[43]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__10_n_7),
        .O(\remd_tmp[44]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[45]_i_1 
       (.I0(remd_tmp[44]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__10_n_6),
        .O(\remd_tmp[45]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[46]_i_1 
       (.I0(remd_tmp[45]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__10_n_5),
        .O(\remd_tmp[46]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[47]_i_1 
       (.I0(remd_tmp[46]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__10_n_4),
        .O(\remd_tmp[47]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[48]_i_1 
       (.I0(remd_tmp[47]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__11_n_7),
        .O(\remd_tmp[48]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[49]_i_1 
       (.I0(remd_tmp[48]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__11_n_6),
        .O(\remd_tmp[49]_i_1_n_0 ));
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
    \remd_tmp[50]_i_1 
       (.I0(remd_tmp[49]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__11_n_5),
        .O(\remd_tmp[50]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[51]_i_1 
       (.I0(remd_tmp[50]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__11_n_4),
        .O(\remd_tmp[51]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[52]_i_1 
       (.I0(remd_tmp[51]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__12_n_7),
        .O(\remd_tmp[52]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[53]_i_1 
       (.I0(remd_tmp[52]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__12_n_6),
        .O(\remd_tmp[53]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[54]_i_1 
       (.I0(remd_tmp[53]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__12_n_5),
        .O(\remd_tmp[54]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[55]_i_1 
       (.I0(remd_tmp[54]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__12_n_4),
        .O(\remd_tmp[55]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[56]_i_1 
       (.I0(remd_tmp[55]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__13_n_7),
        .O(\remd_tmp[56]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[57]_i_1 
       (.I0(remd_tmp[56]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__13_n_6),
        .O(\remd_tmp[57]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[58]_i_1 
       (.I0(remd_tmp[57]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__13_n_5),
        .O(\remd_tmp[58]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[59]_i_1 
       (.I0(remd_tmp[58]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__13_n_4),
        .O(\remd_tmp[59]_i_1_n_0 ));
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
    \remd_tmp[60]_i_1 
       (.I0(remd_tmp[59]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__14_n_7),
        .O(\remd_tmp[60]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[61]_i_1 
       (.I0(remd_tmp[60]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__14_n_6),
        .O(\remd_tmp[61]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[62]_i_1 
       (.I0(remd_tmp[61]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__14_n_5),
        .O(\remd_tmp[62]_i_1_n_0 ));
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
  FDRE \remd_tmp_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[16]_i_1_n_0 ),
        .Q(remd_tmp[16]),
        .R(1'b0));
  FDRE \remd_tmp_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[17]_i_1_n_0 ),
        .Q(remd_tmp[17]),
        .R(1'b0));
  FDRE \remd_tmp_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[18]_i_1_n_0 ),
        .Q(remd_tmp[18]),
        .R(1'b0));
  FDRE \remd_tmp_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[19]_i_1_n_0 ),
        .Q(remd_tmp[19]),
        .R(1'b0));
  FDRE \remd_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[1]_i_1_n_0 ),
        .Q(remd_tmp[1]),
        .R(1'b0));
  FDRE \remd_tmp_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[20]_i_1_n_0 ),
        .Q(remd_tmp[20]),
        .R(1'b0));
  FDRE \remd_tmp_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[21]_i_1_n_0 ),
        .Q(remd_tmp[21]),
        .R(1'b0));
  FDRE \remd_tmp_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[22]_i_1_n_0 ),
        .Q(remd_tmp[22]),
        .R(1'b0));
  FDRE \remd_tmp_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[23]_i_1_n_0 ),
        .Q(remd_tmp[23]),
        .R(1'b0));
  FDRE \remd_tmp_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[24]_i_1_n_0 ),
        .Q(remd_tmp[24]),
        .R(1'b0));
  FDRE \remd_tmp_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[25]_i_1_n_0 ),
        .Q(remd_tmp[25]),
        .R(1'b0));
  FDRE \remd_tmp_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[26]_i_1_n_0 ),
        .Q(remd_tmp[26]),
        .R(1'b0));
  FDRE \remd_tmp_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[27]_i_1_n_0 ),
        .Q(remd_tmp[27]),
        .R(1'b0));
  FDRE \remd_tmp_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[28]_i_1_n_0 ),
        .Q(remd_tmp[28]),
        .R(1'b0));
  FDRE \remd_tmp_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[29]_i_1_n_0 ),
        .Q(remd_tmp[29]),
        .R(1'b0));
  FDRE \remd_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[2]_i_1_n_0 ),
        .Q(remd_tmp[2]),
        .R(1'b0));
  FDRE \remd_tmp_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[30]_i_1_n_0 ),
        .Q(remd_tmp[30]),
        .R(1'b0));
  FDRE \remd_tmp_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[31]_i_1_n_0 ),
        .Q(remd_tmp[31]),
        .R(1'b0));
  FDRE \remd_tmp_reg[32] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[32]_i_1_n_0 ),
        .Q(remd_tmp[32]),
        .R(1'b0));
  FDRE \remd_tmp_reg[33] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[33]_i_1_n_0 ),
        .Q(remd_tmp[33]),
        .R(1'b0));
  FDRE \remd_tmp_reg[34] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[34]_i_1_n_0 ),
        .Q(remd_tmp[34]),
        .R(1'b0));
  FDRE \remd_tmp_reg[35] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[35]_i_1_n_0 ),
        .Q(remd_tmp[35]),
        .R(1'b0));
  FDRE \remd_tmp_reg[36] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[36]_i_1_n_0 ),
        .Q(remd_tmp[36]),
        .R(1'b0));
  FDRE \remd_tmp_reg[37] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[37]_i_1_n_0 ),
        .Q(remd_tmp[37]),
        .R(1'b0));
  FDRE \remd_tmp_reg[38] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[38]_i_1_n_0 ),
        .Q(remd_tmp[38]),
        .R(1'b0));
  FDRE \remd_tmp_reg[39] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[39]_i_1_n_0 ),
        .Q(remd_tmp[39]),
        .R(1'b0));
  FDRE \remd_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[3]_i_1_n_0 ),
        .Q(remd_tmp[3]),
        .R(1'b0));
  FDRE \remd_tmp_reg[40] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[40]_i_1_n_0 ),
        .Q(remd_tmp[40]),
        .R(1'b0));
  FDRE \remd_tmp_reg[41] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[41]_i_1_n_0 ),
        .Q(remd_tmp[41]),
        .R(1'b0));
  FDRE \remd_tmp_reg[42] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[42]_i_1_n_0 ),
        .Q(remd_tmp[42]),
        .R(1'b0));
  FDRE \remd_tmp_reg[43] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[43]_i_1_n_0 ),
        .Q(remd_tmp[43]),
        .R(1'b0));
  FDRE \remd_tmp_reg[44] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[44]_i_1_n_0 ),
        .Q(remd_tmp[44]),
        .R(1'b0));
  FDRE \remd_tmp_reg[45] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[45]_i_1_n_0 ),
        .Q(remd_tmp[45]),
        .R(1'b0));
  FDRE \remd_tmp_reg[46] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[46]_i_1_n_0 ),
        .Q(remd_tmp[46]),
        .R(1'b0));
  FDRE \remd_tmp_reg[47] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[47]_i_1_n_0 ),
        .Q(remd_tmp[47]),
        .R(1'b0));
  FDRE \remd_tmp_reg[48] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[48]_i_1_n_0 ),
        .Q(remd_tmp[48]),
        .R(1'b0));
  FDRE \remd_tmp_reg[49] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[49]_i_1_n_0 ),
        .Q(remd_tmp[49]),
        .R(1'b0));
  FDRE \remd_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[4]_i_1_n_0 ),
        .Q(remd_tmp[4]),
        .R(1'b0));
  FDRE \remd_tmp_reg[50] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[50]_i_1_n_0 ),
        .Q(remd_tmp[50]),
        .R(1'b0));
  FDRE \remd_tmp_reg[51] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[51]_i_1_n_0 ),
        .Q(remd_tmp[51]),
        .R(1'b0));
  FDRE \remd_tmp_reg[52] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[52]_i_1_n_0 ),
        .Q(remd_tmp[52]),
        .R(1'b0));
  FDRE \remd_tmp_reg[53] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[53]_i_1_n_0 ),
        .Q(remd_tmp[53]),
        .R(1'b0));
  FDRE \remd_tmp_reg[54] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[54]_i_1_n_0 ),
        .Q(remd_tmp[54]),
        .R(1'b0));
  FDRE \remd_tmp_reg[55] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[55]_i_1_n_0 ),
        .Q(remd_tmp[55]),
        .R(1'b0));
  FDRE \remd_tmp_reg[56] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[56]_i_1_n_0 ),
        .Q(remd_tmp[56]),
        .R(1'b0));
  FDRE \remd_tmp_reg[57] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[57]_i_1_n_0 ),
        .Q(remd_tmp[57]),
        .R(1'b0));
  FDRE \remd_tmp_reg[58] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[58]_i_1_n_0 ),
        .Q(remd_tmp[58]),
        .R(1'b0));
  FDRE \remd_tmp_reg[59] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[59]_i_1_n_0 ),
        .Q(remd_tmp[59]),
        .R(1'b0));
  FDRE \remd_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[5]_i_1_n_0 ),
        .Q(remd_tmp[5]),
        .R(1'b0));
  FDRE \remd_tmp_reg[60] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[60]_i_1_n_0 ),
        .Q(remd_tmp[60]),
        .R(1'b0));
  FDRE \remd_tmp_reg[61] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[61]_i_1_n_0 ),
        .Q(remd_tmp[61]),
        .R(1'b0));
  FDRE \remd_tmp_reg[62] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[62]_i_1_n_0 ),
        .Q(remd_tmp[62]),
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
  FDRE \sign0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(Q[1]),
        .Q(sign0),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_urem_29ns_30ns_28_33_seq_1" *) 
module bd_0_hls_inst_0_fn1_urem_29ns_30ns_28_33_seq_1
   (\ap_CS_fsm_reg[82] ,
    Q,
    ap_clk,
    ap_rst,
    \r_stage_reg[29] ,
    \icmp_ln15_reg_297_reg[0] );
  output \ap_CS_fsm_reg[82] ;
  input [1:0]Q;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[29] ;
  input \icmp_ln15_reg_297_reg[0] ;

  wire [1:0]Q;
  wire \ap_CS_fsm_reg[82] ;
  wire ap_clk;
  wire ap_rst;
  wire \icmp_ln15_reg_297_reg[0] ;
  wire \r_stage_reg[29] ;

  bd_0_hls_inst_0_fn1_urem_29ns_30ns_28_33_seq_1_div fn1_urem_29ns_30ns_28_33_seq_1_div_U
       (.Q(Q),
        .\ap_CS_fsm_reg[82] (\ap_CS_fsm_reg[82] ),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\icmp_ln15_reg_297_reg[0] (\icmp_ln15_reg_297_reg[0] ),
        .\r_stage_reg[29] (\r_stage_reg[29] ));
endmodule

(* ORIG_REF_NAME = "fn1_urem_29ns_30ns_28_33_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_urem_29ns_30ns_28_33_seq_1_div
   (\ap_CS_fsm_reg[82] ,
    Q,
    ap_clk,
    ap_rst,
    \r_stage_reg[29] ,
    \icmp_ln15_reg_297_reg[0] );
  output \ap_CS_fsm_reg[82] ;
  input [1:0]Q;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[29] ;
  input \icmp_ln15_reg_297_reg[0] ;

  wire [1:0]Q;
  wire \ap_CS_fsm_reg[82] ;
  wire ap_clk;
  wire ap_rst;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_1;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_10;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_11;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_12;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_13;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_14;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_15;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_16;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_17;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_18;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_19;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_2;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_20;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_21;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_22;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_23;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_24;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_25;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_26;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_27;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_28;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_3;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_4;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_5;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_6;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_7;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_8;
  wire fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_9;
  wire \icmp_ln15_reg_297[0]_i_2_n_0 ;
  wire \icmp_ln15_reg_297[0]_i_3_n_0 ;
  wire \icmp_ln15_reg_297[0]_i_4_n_0 ;
  wire \icmp_ln15_reg_297[0]_i_5_n_0 ;
  wire \icmp_ln15_reg_297[0]_i_6_n_0 ;
  wire \icmp_ln15_reg_297_reg[0] ;
  wire \r_stage_reg[29] ;
  wire \remd_reg_n_0_[0] ;
  wire \remd_reg_n_0_[10] ;
  wire \remd_reg_n_0_[11] ;
  wire \remd_reg_n_0_[12] ;
  wire \remd_reg_n_0_[13] ;
  wire \remd_reg_n_0_[14] ;
  wire \remd_reg_n_0_[15] ;
  wire \remd_reg_n_0_[16] ;
  wire \remd_reg_n_0_[17] ;
  wire \remd_reg_n_0_[18] ;
  wire \remd_reg_n_0_[19] ;
  wire \remd_reg_n_0_[1] ;
  wire \remd_reg_n_0_[20] ;
  wire \remd_reg_n_0_[21] ;
  wire \remd_reg_n_0_[22] ;
  wire \remd_reg_n_0_[23] ;
  wire \remd_reg_n_0_[24] ;
  wire \remd_reg_n_0_[25] ;
  wire \remd_reg_n_0_[26] ;
  wire \remd_reg_n_0_[27] ;
  wire \remd_reg_n_0_[2] ;
  wire \remd_reg_n_0_[3] ;
  wire \remd_reg_n_0_[4] ;
  wire \remd_reg_n_0_[5] ;
  wire \remd_reg_n_0_[6] ;
  wire \remd_reg_n_0_[7] ;
  wire \remd_reg_n_0_[8] ;
  wire \remd_reg_n_0_[9] ;
  wire start0_reg_n_0;

  bd_0_hls_inst_0_fn1_urem_29ns_30ns_28_33_seq_1_div_u fn1_urem_29ns_30ns_28_33_seq_1_div_u_0
       (.D({fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_1,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_2,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_3,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_4,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_5,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_6,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_7,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_8,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_9,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_10,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_11,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_12,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_13,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_14,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_15,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_16,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_17,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_18,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_19,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_20,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_21,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_22,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_23,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_24,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_25,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_26,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_27,fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_28}),
        .E(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\r_stage_reg[0]_0 (start0_reg_n_0),
        .\r_stage_reg[29]_0 (\r_stage_reg[29] ));
  LUT6 #(
    .INIT(64'h8000FFFF80008000)) 
    \icmp_ln15_reg_297[0]_i_1 
       (.I0(\icmp_ln15_reg_297[0]_i_2_n_0 ),
        .I1(\icmp_ln15_reg_297[0]_i_3_n_0 ),
        .I2(\icmp_ln15_reg_297[0]_i_4_n_0 ),
        .I3(\icmp_ln15_reg_297[0]_i_5_n_0 ),
        .I4(Q[1]),
        .I5(\icmp_ln15_reg_297_reg[0] ),
        .O(\ap_CS_fsm_reg[82] ));
  LUT6 #(
    .INIT(64'h0000000100000000)) 
    \icmp_ln15_reg_297[0]_i_2 
       (.I0(\remd_reg_n_0_[3] ),
        .I1(\remd_reg_n_0_[4] ),
        .I2(\remd_reg_n_0_[2] ),
        .I3(\remd_reg_n_0_[1] ),
        .I4(\remd_reg_n_0_[0] ),
        .I5(\icmp_ln15_reg_297[0]_i_6_n_0 ),
        .O(\icmp_ln15_reg_297[0]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \icmp_ln15_reg_297[0]_i_3 
       (.I0(\remd_reg_n_0_[13] ),
        .I1(\remd_reg_n_0_[14] ),
        .I2(\remd_reg_n_0_[11] ),
        .I3(\remd_reg_n_0_[12] ),
        .I4(\remd_reg_n_0_[16] ),
        .I5(\remd_reg_n_0_[15] ),
        .O(\icmp_ln15_reg_297[0]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \icmp_ln15_reg_297[0]_i_4 
       (.I0(\remd_reg_n_0_[19] ),
        .I1(\remd_reg_n_0_[20] ),
        .I2(\remd_reg_n_0_[17] ),
        .I3(\remd_reg_n_0_[18] ),
        .I4(\remd_reg_n_0_[22] ),
        .I5(\remd_reg_n_0_[21] ),
        .O(\icmp_ln15_reg_297[0]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h0000000100000000)) 
    \icmp_ln15_reg_297[0]_i_5 
       (.I0(\remd_reg_n_0_[25] ),
        .I1(\remd_reg_n_0_[26] ),
        .I2(\remd_reg_n_0_[23] ),
        .I3(\remd_reg_n_0_[24] ),
        .I4(\remd_reg_n_0_[27] ),
        .I5(Q[1]),
        .O(\icmp_ln15_reg_297[0]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \icmp_ln15_reg_297[0]_i_6 
       (.I0(\remd_reg_n_0_[7] ),
        .I1(\remd_reg_n_0_[8] ),
        .I2(\remd_reg_n_0_[5] ),
        .I3(\remd_reg_n_0_[6] ),
        .I4(\remd_reg_n_0_[10] ),
        .I5(\remd_reg_n_0_[9] ),
        .O(\icmp_ln15_reg_297[0]_i_6_n_0 ));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_28),
        .Q(\remd_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \remd_reg[10] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_18),
        .Q(\remd_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \remd_reg[11] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_17),
        .Q(\remd_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \remd_reg[12] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_16),
        .Q(\remd_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \remd_reg[13] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_15),
        .Q(\remd_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \remd_reg[14] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_14),
        .Q(\remd_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \remd_reg[15] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_13),
        .Q(\remd_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \remd_reg[16] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_12),
        .Q(\remd_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \remd_reg[17] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_11),
        .Q(\remd_reg_n_0_[17] ),
        .R(1'b0));
  FDRE \remd_reg[18] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_10),
        .Q(\remd_reg_n_0_[18] ),
        .R(1'b0));
  FDRE \remd_reg[19] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_9),
        .Q(\remd_reg_n_0_[19] ),
        .R(1'b0));
  FDRE \remd_reg[1] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_27),
        .Q(\remd_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \remd_reg[20] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_8),
        .Q(\remd_reg_n_0_[20] ),
        .R(1'b0));
  FDRE \remd_reg[21] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_7),
        .Q(\remd_reg_n_0_[21] ),
        .R(1'b0));
  FDRE \remd_reg[22] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_6),
        .Q(\remd_reg_n_0_[22] ),
        .R(1'b0));
  FDRE \remd_reg[23] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_5),
        .Q(\remd_reg_n_0_[23] ),
        .R(1'b0));
  FDRE \remd_reg[24] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_4),
        .Q(\remd_reg_n_0_[24] ),
        .R(1'b0));
  FDRE \remd_reg[25] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_3),
        .Q(\remd_reg_n_0_[25] ),
        .R(1'b0));
  FDRE \remd_reg[26] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_2),
        .Q(\remd_reg_n_0_[26] ),
        .R(1'b0));
  FDRE \remd_reg[27] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_1),
        .Q(\remd_reg_n_0_[27] ),
        .R(1'b0));
  FDRE \remd_reg[2] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_26),
        .Q(\remd_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \remd_reg[3] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_25),
        .Q(\remd_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \remd_reg[4] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_24),
        .Q(\remd_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \remd_reg[5] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_23),
        .Q(\remd_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \remd_reg[6] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_22),
        .Q(\remd_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \remd_reg[7] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_21),
        .Q(\remd_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \remd_reg[8] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_20),
        .Q(\remd_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \remd_reg[9] 
       (.C(ap_clk),
        .CE(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_0),
        .D(fn1_urem_29ns_30ns_28_33_seq_1_div_u_0_n_19),
        .Q(\remd_reg_n_0_[9] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[0]),
        .Q(start0_reg_n_0),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_urem_29ns_30ns_28_33_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_urem_29ns_30ns_28_33_seq_1_div_u
   (E,
    D,
    ap_rst,
    \r_stage_reg[0]_0 ,
    ap_clk,
    \r_stage_reg[29]_0 );
  output [0:0]E;
  output [27:0]D;
  input ap_rst;
  input \r_stage_reg[0]_0 ;
  input ap_clk;
  input \r_stage_reg[29]_0 ;

  wire [27:0]D;
  wire [0:0]E;
  wire ap_clk;
  wire ap_rst;
  wire \dividend_tmp[11]_i_1_n_0 ;
  wire \dividend_tmp[15]_i_1_n_0 ;
  wire \dividend_tmp[18]_i_1_n_0 ;
  wire \dividend_tmp[19]_i_1_n_0 ;
  wire \dividend_tmp[20]_i_1_n_0 ;
  wire \dividend_tmp[24]_i_1_n_0 ;
  wire \dividend_tmp[26]_i_1_n_0 ;
  wire \dividend_tmp[4]_i_1_n_0 ;
  wire \dividend_tmp[5]_i_1_n_0 ;
  wire \dividend_tmp[7]_i_1_n_0 ;
  wire \dividend_tmp_reg_n_0_[10] ;
  wire \dividend_tmp_reg_n_0_[11] ;
  wire \dividend_tmp_reg_n_0_[12] ;
  wire \dividend_tmp_reg_n_0_[13] ;
  wire \dividend_tmp_reg_n_0_[14] ;
  wire \dividend_tmp_reg_n_0_[15] ;
  wire \dividend_tmp_reg_n_0_[16] ;
  wire \dividend_tmp_reg_n_0_[17] ;
  wire \dividend_tmp_reg_n_0_[18] ;
  wire \dividend_tmp_reg_n_0_[19] ;
  wire \dividend_tmp_reg_n_0_[20] ;
  wire \dividend_tmp_reg_n_0_[21] ;
  wire \dividend_tmp_reg_n_0_[22] ;
  wire \dividend_tmp_reg_n_0_[23] ;
  wire \dividend_tmp_reg_n_0_[24] ;
  wire \dividend_tmp_reg_n_0_[25] ;
  wire \dividend_tmp_reg_n_0_[26] ;
  wire \dividend_tmp_reg_n_0_[27] ;
  wire \dividend_tmp_reg_n_0_[28] ;
  wire \dividend_tmp_reg_n_0_[2] ;
  wire \dividend_tmp_reg_n_0_[3] ;
  wire \dividend_tmp_reg_n_0_[4] ;
  wire \dividend_tmp_reg_n_0_[5] ;
  wire \dividend_tmp_reg_n_0_[6] ;
  wire \dividend_tmp_reg_n_0_[7] ;
  wire \dividend_tmp_reg_n_0_[8] ;
  wire \dividend_tmp_reg_n_0_[9] ;
  wire \r_stage_reg[0]_0 ;
  wire \r_stage_reg[27]_srl27___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_25_n_0 ;
  wire \r_stage_reg[28]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_26_n_0 ;
  wire \r_stage_reg[29]_0 ;
  wire r_stage_reg_gate_n_0;
  wire \r_stage_reg_n_0_[0] ;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \NLW_r_stage_reg[27]_srl27___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_25_Q31_UNCONNECTED ;

  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[11]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[10] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[15]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[14] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[18]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[17] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[18]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[19]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[18] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[19]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[20]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[19] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[20]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[24]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[23] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[24]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[26]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[25] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[26]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[3] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[5]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[4] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \dividend_tmp[7]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[6] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
  FDSE \dividend_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[9] ),
        .Q(\dividend_tmp_reg_n_0_[10] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \dividend_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[11]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[11] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[11] ),
        .Q(\dividend_tmp_reg_n_0_[12] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[12] ),
        .Q(\dividend_tmp_reg_n_0_[13] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[13] ),
        .Q(\dividend_tmp_reg_n_0_[14] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \dividend_tmp_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[15]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[15] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[15] ),
        .Q(\dividend_tmp_reg_n_0_[16] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[16] ),
        .Q(\dividend_tmp_reg_n_0_[17] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \dividend_tmp_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[18]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[18] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[19]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[19] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[20]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[20] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[20] ),
        .Q(\dividend_tmp_reg_n_0_[21] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[21] ),
        .Q(\dividend_tmp_reg_n_0_[22] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[22] ),
        .Q(\dividend_tmp_reg_n_0_[23] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \dividend_tmp_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[24]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[24] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[24] ),
        .Q(\dividend_tmp_reg_n_0_[25] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \dividend_tmp_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[26]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[26] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[26] ),
        .Q(\dividend_tmp_reg_n_0_[27] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[27] ),
        .Q(\dividend_tmp_reg_n_0_[28] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \dividend_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\dividend_tmp_reg_n_0_[2] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[2] ),
        .Q(\dividend_tmp_reg_n_0_[3] ),
        .S(\r_stage_reg_n_0_[0] ));
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
  FDSE \dividend_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[5] ),
        .Q(\dividend_tmp_reg_n_0_[6] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \dividend_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[7]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[7] ),
        .R(1'b0));
  FDSE \dividend_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[7] ),
        .Q(\dividend_tmp_reg_n_0_[8] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDSE \dividend_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp_reg_n_0_[8] ),
        .Q(\dividend_tmp_reg_n_0_[9] ),
        .S(\r_stage_reg_n_0_[0] ));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[0]_0 ),
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  (* srl_bus_name = "inst/\urem_29ns_30ns_28_33_seq_1_U3/fn1_urem_29ns_30ns_28_33_seq_1_div_U/fn1_urem_29ns_30ns_28_33_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\urem_29ns_30ns_28_33_seq_1_U3/fn1_urem_29ns_30ns_28_33_seq_1_div_U/fn1_urem_29ns_30ns_28_33_seq_1_div_u_0/r_stage_reg[27]_srl27___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_25 " *) 
  SRLC32E \r_stage_reg[27]_srl27___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_25 
       (.A({1'b1,1'b1,1'b0,1'b1,1'b0}),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\r_stage_reg[27]_srl27___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_25_n_0 ),
        .Q31(\NLW_r_stage_reg[27]_srl27___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_25_Q31_UNCONNECTED ));
  FDRE \r_stage_reg[28]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_26 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[27]_srl27___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_25_n_0 ),
        .Q(\r_stage_reg[28]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_26_n_0 ),
        .R(1'b0));
  FDRE \r_stage_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_gate_n_0),
        .Q(E),
        .R(ap_rst));
  LUT2 #(
    .INIT(4'h8)) 
    r_stage_reg_gate
       (.I0(\r_stage_reg[28]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_26_n_0 ),
        .I1(\r_stage_reg[29]_0 ),
        .O(r_stage_reg_gate_n_0));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \remd_tmp[0]_i_1 
       (.I0(\dividend_tmp_reg_n_0_[28] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(\remd_tmp[0]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1_n_0 ),
        .Q(D[0]),
        .R(1'b0));
  FDRE \remd_tmp_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[9]),
        .Q(D[10]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[10]),
        .Q(D[11]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[11]),
        .Q(D[12]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[12]),
        .Q(D[13]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[13]),
        .Q(D[14]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[14]),
        .Q(D[15]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[15]),
        .Q(D[16]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[16]),
        .Q(D[17]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[17]),
        .Q(D[18]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[18]),
        .Q(D[19]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[0]),
        .Q(D[1]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[19]),
        .Q(D[20]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[20]),
        .Q(D[21]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[21]),
        .Q(D[22]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[22]),
        .Q(D[23]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[23]),
        .Q(D[24]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[24]),
        .Q(D[25]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[25]),
        .Q(D[26]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[26]),
        .Q(D[27]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[1]),
        .Q(D[2]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[2]),
        .Q(D[3]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[3]),
        .Q(D[4]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[4]),
        .Q(D[5]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[5]),
        .Q(D[6]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[6]),
        .Q(D[7]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[7]),
        .Q(D[8]),
        .R(\r_stage_reg_n_0_[0] ));
  FDRE \remd_tmp_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D[8]),
        .Q(D[9]),
        .R(\r_stage_reg_n_0_[0] ));
endmodule

(* ORIG_REF_NAME = "fn1_urem_8ns_17ns_9_12_seq_1" *) 
module bd_0_hls_inst_0_fn1_urem_8ns_17ns_9_12_seq_1
   (D,
    Q,
    ap_clk,
    ap_rst,
    \r_stage_reg[8] ,
    p,
    \divisor0_reg[15] ,
    \add_ln19_1_reg_302_reg[1] );
  output [8:0]D;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[8] ;
  input [7:0]p;
  input [15:0]\divisor0_reg[15] ;
  input \add_ln19_1_reg_302_reg[1] ;

  wire [8:0]D;
  wire [0:0]Q;
  wire \add_ln19_1_reg_302_reg[1] ;
  wire ap_clk;
  wire ap_rst;
  wire [15:0]\divisor0_reg[15] ;
  wire [7:0]p;
  wire \r_stage_reg[8] ;

  bd_0_hls_inst_0_fn1_urem_8ns_17ns_9_12_seq_1_div fn1_urem_8ns_17ns_9_12_seq_1_div_U
       (.D(D),
        .Q(Q),
        .\add_ln19_1_reg_302_reg[1] (\add_ln19_1_reg_302_reg[1] ),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\divisor0_reg[15]_0 (\divisor0_reg[15] ),
        .p(p),
        .\r_stage_reg[8] (\r_stage_reg[8] ));
endmodule

(* ORIG_REF_NAME = "fn1_urem_8ns_17ns_9_12_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_urem_8ns_17ns_9_12_seq_1_div
   (D,
    Q,
    ap_clk,
    ap_rst,
    \r_stage_reg[8] ,
    p,
    \divisor0_reg[15]_0 ,
    \add_ln19_1_reg_302_reg[1] );
  output [8:0]D;
  input [0:0]Q;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[8] ;
  input [7:0]p;
  input [15:0]\divisor0_reg[15]_0 ;
  input \add_ln19_1_reg_302_reg[1] ;

  wire [8:0]D;
  wire [0:0]Q;
  wire \add_ln19_1_reg_302[8]_i_2_n_0 ;
  wire \add_ln19_1_reg_302_reg[1] ;
  wire ap_clk;
  wire ap_rst;
  wire \dividend0_reg_n_0_[0] ;
  wire \dividend0_reg_n_0_[1] ;
  wire \dividend0_reg_n_0_[2] ;
  wire \dividend0_reg_n_0_[3] ;
  wire \dividend0_reg_n_0_[4] ;
  wire \dividend0_reg_n_0_[5] ;
  wire \dividend0_reg_n_0_[6] ;
  wire \dividend0_reg_n_0_[7] ;
  wire \divisor0[11]_i_2_n_0 ;
  wire \divisor0[7]_i_2_n_0 ;
  wire \divisor0[7]_i_3_n_0 ;
  wire \divisor0[7]_i_4_n_0 ;
  wire \divisor0_reg[11]_i_1_n_0 ;
  wire \divisor0_reg[11]_i_1_n_1 ;
  wire \divisor0_reg[11]_i_1_n_2 ;
  wire \divisor0_reg[11]_i_1_n_3 ;
  wire [15:0]\divisor0_reg[15]_0 ;
  wire \divisor0_reg[15]_i_1_n_0 ;
  wire \divisor0_reg[15]_i_1_n_1 ;
  wire \divisor0_reg[15]_i_1_n_2 ;
  wire \divisor0_reg[15]_i_1_n_3 ;
  wire \divisor0_reg[7]_i_1_n_0 ;
  wire \divisor0_reg[7]_i_1_n_1 ;
  wire \divisor0_reg[7]_i_1_n_2 ;
  wire \divisor0_reg[7]_i_1_n_3 ;
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
  wire fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0;
  wire fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_1;
  wire fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_2;
  wire fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_3;
  wire fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_4;
  wire fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_5;
  wire fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_6;
  wire fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_7;
  wire fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_8;
  wire [16:4]grp_fu_180_p1;
  wire [7:0]p;
  wire \r_stage_reg[8] ;
  wire \remd_reg_n_0_[0] ;
  wire \remd_reg_n_0_[1] ;
  wire \remd_reg_n_0_[2] ;
  wire \remd_reg_n_0_[3] ;
  wire \remd_reg_n_0_[4] ;
  wire \remd_reg_n_0_[5] ;
  wire \remd_reg_n_0_[6] ;
  wire \remd_reg_n_0_[7] ;
  wire start0_reg_n_0;
  wire [3:1]\NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED ;
  wire [3:0]\NLW_divisor0_reg[16]_i_1_O_UNCONNECTED ;

  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \add_ln19_1_reg_302[0]_i_1 
       (.I0(\remd_reg_n_0_[0] ),
        .I1(\add_ln19_1_reg_302_reg[1] ),
        .O(D[0]));
  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \add_ln19_1_reg_302[1]_i_1 
       (.I0(\remd_reg_n_0_[0] ),
        .I1(\add_ln19_1_reg_302_reg[1] ),
        .I2(\remd_reg_n_0_[1] ),
        .O(D[1]));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \add_ln19_1_reg_302[2]_i_1 
       (.I0(\add_ln19_1_reg_302_reg[1] ),
        .I1(\remd_reg_n_0_[0] ),
        .I2(\remd_reg_n_0_[1] ),
        .I3(\remd_reg_n_0_[2] ),
        .O(D[2]));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT5 #(
    .INIT(32'h7FFF8000)) 
    \add_ln19_1_reg_302[3]_i_1 
       (.I0(\remd_reg_n_0_[1] ),
        .I1(\remd_reg_n_0_[0] ),
        .I2(\add_ln19_1_reg_302_reg[1] ),
        .I3(\remd_reg_n_0_[2] ),
        .I4(\remd_reg_n_0_[3] ),
        .O(D[3]));
  LUT6 #(
    .INIT(64'h7FFFFFFF80000000)) 
    \add_ln19_1_reg_302[4]_i_1 
       (.I0(\remd_reg_n_0_[2] ),
        .I1(\add_ln19_1_reg_302_reg[1] ),
        .I2(\remd_reg_n_0_[0] ),
        .I3(\remd_reg_n_0_[1] ),
        .I4(\remd_reg_n_0_[3] ),
        .I5(\remd_reg_n_0_[4] ),
        .O(D[4]));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \add_ln19_1_reg_302[5]_i_1 
       (.I0(\add_ln19_1_reg_302[8]_i_2_n_0 ),
        .I1(\remd_reg_n_0_[5] ),
        .O(D[5]));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \add_ln19_1_reg_302[6]_i_1 
       (.I0(\add_ln19_1_reg_302[8]_i_2_n_0 ),
        .I1(\remd_reg_n_0_[5] ),
        .I2(\remd_reg_n_0_[6] ),
        .O(D[6]));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \add_ln19_1_reg_302[7]_i_1 
       (.I0(\remd_reg_n_0_[5] ),
        .I1(\add_ln19_1_reg_302[8]_i_2_n_0 ),
        .I2(\remd_reg_n_0_[6] ),
        .I3(\remd_reg_n_0_[7] ),
        .O(D[7]));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    \add_ln19_1_reg_302[8]_i_1 
       (.I0(\remd_reg_n_0_[7] ),
        .I1(\remd_reg_n_0_[5] ),
        .I2(\add_ln19_1_reg_302[8]_i_2_n_0 ),
        .I3(\remd_reg_n_0_[6] ),
        .O(D[8]));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \add_ln19_1_reg_302[8]_i_2 
       (.I0(\remd_reg_n_0_[4] ),
        .I1(\remd_reg_n_0_[2] ),
        .I2(\add_ln19_1_reg_302_reg[1] ),
        .I3(\remd_reg_n_0_[0] ),
        .I4(\remd_reg_n_0_[1] ),
        .I5(\remd_reg_n_0_[3] ),
        .O(\add_ln19_1_reg_302[8]_i_2_n_0 ));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p[5]),
        .Q(\dividend0_reg_n_0_[5] ),
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
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[11]_i_2 
       (.I0(\divisor0_reg[15]_0 [8]),
        .O(\divisor0[11]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[7]_i_2 
       (.I0(\divisor0_reg[15]_0 [7]),
        .O(\divisor0[7]_i_2_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[7]_i_3 
       (.I0(\divisor0_reg[15]_0 [6]),
        .O(\divisor0[7]_i_3_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[7]_i_4 
       (.I0(\divisor0_reg[15]_0 [5]),
        .O(\divisor0[7]_i_4_n_0 ));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[15]_0 [0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[11]_i_1 
       (.CI(\divisor0_reg[7]_i_1_n_0 ),
        .CO({\divisor0_reg[11]_i_1_n_0 ,\divisor0_reg[11]_i_1_n_1 ,\divisor0_reg[11]_i_1_n_2 ,\divisor0_reg[11]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\divisor0_reg[15]_0 [8]}),
        .O(grp_fu_180_p1[11:8]),
        .S({\divisor0_reg[15]_0 [11:9],\divisor0[11]_i_2_n_0 }));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[15]_i_1 
       (.CI(\divisor0_reg[11]_i_1_n_0 ),
        .CO({\divisor0_reg[15]_i_1_n_0 ,\divisor0_reg[15]_i_1_n_1 ,\divisor0_reg[15]_i_1_n_2 ,\divisor0_reg[15]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(grp_fu_180_p1[15:12]),
        .S(\divisor0_reg[15]_0 [15:12]));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[16]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[16]_i_1 
       (.CI(\divisor0_reg[15]_i_1_n_0 ),
        .CO({\NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED [3:1],grp_fu_180_p1[16]}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\NLW_divisor0_reg[16]_i_1_O_UNCONNECTED [3:0]),
        .S({1'b0,1'b0,1'b0,1'b1}));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[15]_0 [1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[15]_0 [2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0_reg[15]_0 [3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  CARRY4 \divisor0_reg[7]_i_1 
       (.CI(1'b0),
        .CO({\divisor0_reg[7]_i_1_n_0 ,\divisor0_reg[7]_i_1_n_1 ,\divisor0_reg[7]_i_1_n_2 ,\divisor0_reg[7]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\divisor0_reg[15]_0 [7:5],1'b0}),
        .O(grp_fu_180_p1[7:4]),
        .S({\divisor0[7]_i_2_n_0 ,\divisor0[7]_i_3_n_0 ,\divisor0[7]_i_4_n_0 ,\divisor0_reg[15]_0 [4]}));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_180_p1[9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_urem_8ns_17ns_9_12_seq_1_div_u fn1_urem_8ns_17ns_9_12_seq_1_div_u_0
       (.E(start0_reg_n_0),
        .Q({fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_1,fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_2,fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_3,fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_4,fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_5,fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_6,fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_7,fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_8}),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\dividend0_reg[7]_0 ({\dividend0_reg_n_0_[7] ,\dividend0_reg_n_0_[6] ,\dividend0_reg_n_0_[5] ,\dividend0_reg_n_0_[4] ,\dividend0_reg_n_0_[3] ,\dividend0_reg_n_0_[2] ,\dividend0_reg_n_0_[1] ,\dividend0_reg_n_0_[0] }),
        .\divisor0_reg[16]_0 ({\divisor0_reg_n_0_[16] ,\divisor0_reg_n_0_[15] ,\divisor0_reg_n_0_[14] ,\divisor0_reg_n_0_[13] ,\divisor0_reg_n_0_[12] ,\divisor0_reg_n_0_[11] ,\divisor0_reg_n_0_[10] ,\divisor0_reg_n_0_[9] ,\divisor0_reg_n_0_[8] ,\divisor0_reg_n_0_[7] ,\divisor0_reg_n_0_[6] ,\divisor0_reg_n_0_[5] ,\divisor0_reg_n_0_[4] ,\divisor0_reg_n_0_[3] ,\divisor0_reg_n_0_[2] ,\divisor0_reg_n_0_[1] ,\divisor0_reg_n_0_[0] }),
        .\r_stage_reg[8]_0 (fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0),
        .\r_stage_reg[8]_1 (\r_stage_reg[8] ));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0),
        .D(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_8),
        .Q(\remd_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \remd_reg[1] 
       (.C(ap_clk),
        .CE(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0),
        .D(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_7),
        .Q(\remd_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \remd_reg[2] 
       (.C(ap_clk),
        .CE(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0),
        .D(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_6),
        .Q(\remd_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \remd_reg[3] 
       (.C(ap_clk),
        .CE(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0),
        .D(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_5),
        .Q(\remd_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \remd_reg[4] 
       (.C(ap_clk),
        .CE(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0),
        .D(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_4),
        .Q(\remd_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \remd_reg[5] 
       (.C(ap_clk),
        .CE(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0),
        .D(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_3),
        .Q(\remd_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \remd_reg[6] 
       (.C(ap_clk),
        .CE(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0),
        .D(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_2),
        .Q(\remd_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \remd_reg[7] 
       (.C(ap_clk),
        .CE(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_0),
        .D(fn1_urem_8ns_17ns_9_12_seq_1_div_u_0_n_1),
        .Q(\remd_reg_n_0_[7] ),
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

(* ORIG_REF_NAME = "fn1_urem_8ns_17ns_9_12_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_urem_8ns_17ns_9_12_seq_1_div_u
   (\r_stage_reg[8]_0 ,
    Q,
    ap_rst,
    E,
    ap_clk,
    \r_stage_reg[8]_1 ,
    \dividend0_reg[7]_0 ,
    \divisor0_reg[16]_0 );
  output [0:0]\r_stage_reg[8]_0 ;
  output [7:0]Q;
  input ap_rst;
  input [0:0]E;
  input ap_clk;
  input \r_stage_reg[8]_1 ;
  input [7:0]\dividend0_reg[7]_0 ;
  input [16:0]\divisor0_reg[16]_0 ;

  wire [0:0]E;
  wire [7:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire cal_tmp_carry__0_i_1_n_0;
  wire cal_tmp_carry__0_i_2_n_0;
  wire cal_tmp_carry__0_i_3_n_0;
  wire cal_tmp_carry__0_i_4_n_0;
  wire cal_tmp_carry__0_i_5__0_n_0;
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
  wire cal_tmp_carry__1_i_1_n_0;
  wire cal_tmp_carry__1_i_2_n_0;
  wire cal_tmp_carry__1_i_3_n_0;
  wire cal_tmp_carry__1_i_4__0_n_0;
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
  wire cal_tmp_carry_i_1_n_0;
  wire cal_tmp_carry_i_2_n_0;
  wire cal_tmp_carry_i_3_n_0;
  wire cal_tmp_carry_i_4_n_0;
  wire cal_tmp_carry_i_5_n_0;
  wire cal_tmp_carry_i_6__0_n_0;
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
  wire [7:0]\dividend0_reg[7]_0 ;
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
  wire \dividend_tmp_reg_n_0_[0] ;
  wire \dividend_tmp_reg_n_0_[1] ;
  wire \dividend_tmp_reg_n_0_[2] ;
  wire \dividend_tmp_reg_n_0_[3] ;
  wire \dividend_tmp_reg_n_0_[4] ;
  wire \dividend_tmp_reg_n_0_[5] ;
  wire \dividend_tmp_reg_n_0_[6] ;
  wire \dividend_tmp_reg_n_0_[7] ;
  wire [16:0]\divisor0_reg[16]_0 ;
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
  wire \r_stage_reg[6]_srl6___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_4_n_0 ;
  wire \r_stage_reg[7]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_5_n_0 ;
  wire [0:0]\r_stage_reg[8]_0 ;
  wire \r_stage_reg[8]_1 ;
  wire r_stage_reg_gate_n_0;
  wire \r_stage_reg_n_0_[0] ;
  wire \remd_tmp[0]_i_1_n_0 ;
  wire \remd_tmp[1]_i_1_n_0 ;
  wire \remd_tmp[2]_i_1_n_0 ;
  wire \remd_tmp[3]_i_1_n_0 ;
  wire \remd_tmp[4]_i_1_n_0 ;
  wire \remd_tmp[5]_i_1_n_0 ;
  wire \remd_tmp[6]_i_1_n_0 ;
  wire \remd_tmp[7]_i_1_n_0 ;
  wire [3:0]NLW_cal_tmp_carry__1_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__2_O_UNCONNECTED;
  wire [3:1]NLW_cal_tmp_carry__3_CO_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__3_O_UNCONNECTED;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({cal_tmp_carry_i_1_n_0,cal_tmp_carry_i_2_n_0,cal_tmp_carry_i_3_n_0,cal_tmp_carry_i_4_n_0}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_5_n_0,cal_tmp_carry_i_6__0_n_0,cal_tmp_carry_i_7_n_0,cal_tmp_carry_i_8_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__0_i_1_n_0,cal_tmp_carry__0_i_2_n_0,cal_tmp_carry__0_i_3_n_0,cal_tmp_carry__0_i_4_n_0}),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_5__0_n_0,cal_tmp_carry__0_i_6_n_0,cal_tmp_carry__0_i_7_n_0,cal_tmp_carry__0_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1
       (.I0(Q[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(Q[5]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(Q[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4
       (.I0(Q[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5__0
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[6]),
        .I2(\divisor0_reg_n_0_[7] ),
        .O(cal_tmp_carry__0_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[5]),
        .I2(\divisor0_reg_n_0_[6] ),
        .O(cal_tmp_carry__0_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[4]),
        .I2(\divisor0_reg_n_0_[5] ),
        .O(cal_tmp_carry__0_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_8
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[3]),
        .I2(\divisor0_reg_n_0_[4] ),
        .O(cal_tmp_carry__0_i_8_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_cal_tmp_carry__1_O_UNCONNECTED[3:0]),
        .S({cal_tmp_carry__1_i_1_n_0,cal_tmp_carry__1_i_2_n_0,cal_tmp_carry__1_i_3_n_0,cal_tmp_carry__1_i_4__0_n_0}));
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
    cal_tmp_carry__1_i_4__0
       (.I0(\divisor0_reg_n_0_[8] ),
        .O(cal_tmp_carry__1_i_4__0_n_0));
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
        .CO({NLW_cal_tmp_carry__3_CO_UNCONNECTED[3:1],p_2_out}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__3_O_UNCONNECTED[3:2],p_0_in,NLW_cal_tmp_carry__3_O_UNCONNECTED[0]}),
        .S({1'b0,1'b0,1'b1,cal_tmp_carry__3_i_1_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__3_i_1
       (.I0(\divisor0_reg_n_0_[16] ),
        .O(cal_tmp_carry__3_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_1
       (.I0(Q[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(Q[1]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_3
       (.I0(Q[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_3_n_0));
  LUT3 #(
    .INIT(8'hAC)) 
    cal_tmp_carry_i_4
       (.I0(\dividend0_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg_n_0_[7] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_4_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[2]),
        .I2(\divisor0_reg_n_0_[3] ),
        .O(cal_tmp_carry_i_5_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6__0
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[1]),
        .I2(\divisor0_reg_n_0_[2] ),
        .O(cal_tmp_carry_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_7
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[0]),
        .I2(\divisor0_reg_n_0_[1] ),
        .O(cal_tmp_carry_i_7_n_0));
  LUT4 #(
    .INIT(16'hE41B)) 
    cal_tmp_carry_i_8
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg_n_0_[7] ),
        .I2(\dividend0_reg_n_0_[7] ),
        .I3(\divisor0_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_8_n_0));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[1]_i_1 
       (.I0(\dividend0_reg_n_0_[0] ),
        .I1(\dividend_tmp_reg_n_0_[0] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[2]_i_1 
       (.I0(\dividend0_reg_n_0_[1] ),
        .I1(\dividend_tmp_reg_n_0_[1] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[3]_i_1 
       (.I0(\dividend0_reg_n_0_[2] ),
        .I1(\dividend_tmp_reg_n_0_[2] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend0_reg_n_0_[3] ),
        .I1(\dividend_tmp_reg_n_0_[3] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[5]_i_1 
       (.I0(\dividend0_reg_n_0_[4] ),
        .I1(\dividend_tmp_reg_n_0_[4] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[6]_i_1 
       (.I0(\dividend0_reg_n_0_[5] ),
        .I1(\dividend_tmp_reg_n_0_[5] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[7]_i_1 
       (.I0(\dividend0_reg_n_0_[6] ),
        .I1(\dividend_tmp_reg_n_0_[6] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
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
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [0]),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [10]),
        .Q(\divisor0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \divisor0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [11]),
        .Q(\divisor0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \divisor0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [12]),
        .Q(\divisor0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \divisor0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [13]),
        .Q(\divisor0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \divisor0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [14]),
        .Q(\divisor0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \divisor0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [15]),
        .Q(\divisor0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \divisor0_reg[16] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [16]),
        .Q(\divisor0_reg_n_0_[16] ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [1]),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [3]),
        .Q(\divisor0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [4]),
        .Q(\divisor0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [5]),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [8]),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \divisor0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[16]_0 [9]),
        .Q(\divisor0_reg_n_0_[9] ),
        .R(1'b0));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  (* srl_bus_name = "inst/\urem_8ns_17ns_9_12_seq_1_U4/fn1_urem_8ns_17ns_9_12_seq_1_div_U/fn1_urem_8ns_17ns_9_12_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\urem_8ns_17ns_9_12_seq_1_U4/fn1_urem_8ns_17ns_9_12_seq_1_div_U/fn1_urem_8ns_17ns_9_12_seq_1_div_u_0/r_stage_reg[6]_srl6___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_4 " *) 
  SRL16E \r_stage_reg[6]_srl6___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_4 
       (.A0(1'b1),
        .A1(1'b0),
        .A2(1'b1),
        .A3(1'b0),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\r_stage_reg[6]_srl6___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_4_n_0 ));
  FDRE \r_stage_reg[7]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_5 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[6]_srl6___srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_4_n_0 ),
        .Q(\r_stage_reg[7]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_5_n_0 ),
        .R(1'b0));
  FDRE \r_stage_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_gate_n_0),
        .Q(\r_stage_reg[8]_0 ),
        .R(ap_rst));
  LUT2 #(
    .INIT(4'h8)) 
    r_stage_reg_gate
       (.I0(\r_stage_reg[7]_srem_64ns_33ns_16_68_seq_1_U1_fn1_srem_64ns_33ns_16_68_seq_1_div_U_fn1_srem_64ns_33ns_16_68_seq_1_div_u_0_r_stage_reg_r_5_n_0 ),
        .I1(\r_stage_reg[8]_1 ),
        .O(r_stage_reg_gate_n_0));
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \remd_tmp[0]_i_1 
       (.I0(\dividend0_reg_n_0_[7] ),
        .I1(\dividend_tmp_reg_n_0_[7] ),
        .I2(\r_stage_reg_n_0_[0] ),
        .I3(p_0_in),
        .I4(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[1]_i_1 
       (.I0(Q[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_6),
        .O(\remd_tmp[1]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[2]_i_1 
       (.I0(Q[1]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_5),
        .O(\remd_tmp[2]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[3]_i_1 
       (.I0(Q[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry_n_4),
        .O(\remd_tmp[3]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[4]_i_1 
       (.I0(Q[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(Q[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1 
       (.I0(Q[5]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1 
       (.I0(Q[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__0_n_4),
        .O(\remd_tmp[7]_i_1_n_0 ));
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
        .Q(Q[3]),
        .R(1'b0));
  FDRE \remd_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[4]_i_1_n_0 ),
        .Q(Q[4]),
        .R(1'b0));
  FDRE \remd_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[5]_i_1_n_0 ),
        .Q(Q[5]),
        .R(1'b0));
  FDRE \remd_tmp_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[6]_i_1_n_0 ),
        .Q(Q[6]),
        .R(1'b0));
  FDRE \remd_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[7]_i_1_n_0 ),
        .Q(Q[7]),
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
