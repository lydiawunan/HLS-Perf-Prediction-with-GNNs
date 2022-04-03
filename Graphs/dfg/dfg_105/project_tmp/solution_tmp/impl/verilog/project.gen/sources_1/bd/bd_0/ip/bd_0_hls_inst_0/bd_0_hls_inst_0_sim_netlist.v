// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Sat May  1 02:12:06 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/nanwu/GNN_DFG/bb/dfg_105/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.v
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
    p_11);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [7:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p, LAYERED_METADATA undef" *) input [7:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_11 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_11, LAYERED_METADATA undef" *) input [15:0]p_11;

  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire [7:0]ap_return;
  wire ap_rst;
  wire ap_start;
  wire [7:0]p;
  wire [15:0]p_11;

  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000000001" *) 
  (* ap_ST_fsm_state10 = "81'b000000000000000000000000000000000000000000000000000000000000000000000001000000000" *) 
  (* ap_ST_fsm_state11 = "81'b000000000000000000000000000000000000000000000000000000000000000000000010000000000" *) 
  (* ap_ST_fsm_state12 = "81'b000000000000000000000000000000000000000000000000000000000000000000000100000000000" *) 
  (* ap_ST_fsm_state13 = "81'b000000000000000000000000000000000000000000000000000000000000000000001000000000000" *) 
  (* ap_ST_fsm_state14 = "81'b000000000000000000000000000000000000000000000000000000000000000000010000000000000" *) 
  (* ap_ST_fsm_state15 = "81'b000000000000000000000000000000000000000000000000000000000000000000100000000000000" *) 
  (* ap_ST_fsm_state16 = "81'b000000000000000000000000000000000000000000000000000000000000000001000000000000000" *) 
  (* ap_ST_fsm_state17 = "81'b000000000000000000000000000000000000000000000000000000000000000010000000000000000" *) 
  (* ap_ST_fsm_state18 = "81'b000000000000000000000000000000000000000000000000000000000000000100000000000000000" *) 
  (* ap_ST_fsm_state19 = "81'b000000000000000000000000000000000000000000000000000000000000001000000000000000000" *) 
  (* ap_ST_fsm_state2 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000000010" *) 
  (* ap_ST_fsm_state20 = "81'b000000000000000000000000000000000000000000000000000000000000010000000000000000000" *) 
  (* ap_ST_fsm_state21 = "81'b000000000000000000000000000000000000000000000000000000000000100000000000000000000" *) 
  (* ap_ST_fsm_state22 = "81'b000000000000000000000000000000000000000000000000000000000001000000000000000000000" *) 
  (* ap_ST_fsm_state23 = "81'b000000000000000000000000000000000000000000000000000000000010000000000000000000000" *) 
  (* ap_ST_fsm_state24 = "81'b000000000000000000000000000000000000000000000000000000000100000000000000000000000" *) 
  (* ap_ST_fsm_state25 = "81'b000000000000000000000000000000000000000000000000000000001000000000000000000000000" *) 
  (* ap_ST_fsm_state26 = "81'b000000000000000000000000000000000000000000000000000000010000000000000000000000000" *) 
  (* ap_ST_fsm_state27 = "81'b000000000000000000000000000000000000000000000000000000100000000000000000000000000" *) 
  (* ap_ST_fsm_state28 = "81'b000000000000000000000000000000000000000000000000000001000000000000000000000000000" *) 
  (* ap_ST_fsm_state29 = "81'b000000000000000000000000000000000000000000000000000010000000000000000000000000000" *) 
  (* ap_ST_fsm_state3 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000000100" *) 
  (* ap_ST_fsm_state30 = "81'b000000000000000000000000000000000000000000000000000100000000000000000000000000000" *) 
  (* ap_ST_fsm_state31 = "81'b000000000000000000000000000000000000000000000000001000000000000000000000000000000" *) 
  (* ap_ST_fsm_state32 = "81'b000000000000000000000000000000000000000000000000010000000000000000000000000000000" *) 
  (* ap_ST_fsm_state33 = "81'b000000000000000000000000000000000000000000000000100000000000000000000000000000000" *) 
  (* ap_ST_fsm_state34 = "81'b000000000000000000000000000000000000000000000001000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state35 = "81'b000000000000000000000000000000000000000000000010000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state36 = "81'b000000000000000000000000000000000000000000000100000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state37 = "81'b000000000000000000000000000000000000000000001000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state38 = "81'b000000000000000000000000000000000000000000010000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state39 = "81'b000000000000000000000000000000000000000000100000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state4 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000001000" *) 
  (* ap_ST_fsm_state40 = "81'b000000000000000000000000000000000000000001000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state41 = "81'b000000000000000000000000000000000000000010000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state42 = "81'b000000000000000000000000000000000000000100000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state43 = "81'b000000000000000000000000000000000000001000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state44 = "81'b000000000000000000000000000000000000010000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state45 = "81'b000000000000000000000000000000000000100000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state46 = "81'b000000000000000000000000000000000001000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state47 = "81'b000000000000000000000000000000000010000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state48 = "81'b000000000000000000000000000000000100000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state49 = "81'b000000000000000000000000000000001000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state5 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000010000" *) 
  (* ap_ST_fsm_state50 = "81'b000000000000000000000000000000010000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state51 = "81'b000000000000000000000000000000100000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state52 = "81'b000000000000000000000000000001000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state53 = "81'b000000000000000000000000000010000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state54 = "81'b000000000000000000000000000100000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state55 = "81'b000000000000000000000000001000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state56 = "81'b000000000000000000000000010000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state57 = "81'b000000000000000000000000100000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state58 = "81'b000000000000000000000001000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state59 = "81'b000000000000000000000010000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state6 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000100000" *) 
  (* ap_ST_fsm_state60 = "81'b000000000000000000000100000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state61 = "81'b000000000000000000001000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state62 = "81'b000000000000000000010000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state63 = "81'b000000000000000000100000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state64 = "81'b000000000000000001000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state65 = "81'b000000000000000010000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state66 = "81'b000000000000000100000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state67 = "81'b000000000000001000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state68 = "81'b000000000000010000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state69 = "81'b000000000000100000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state7 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000001000000" *) 
  (* ap_ST_fsm_state70 = "81'b000000000001000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state71 = "81'b000000000010000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state72 = "81'b000000000100000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state73 = "81'b000000001000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state74 = "81'b000000010000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state75 = "81'b000000100000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state76 = "81'b000001000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state77 = "81'b000010000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state78 = "81'b000100000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state79 = "81'b001000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state8 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000010000000" *) 
  (* ap_ST_fsm_state80 = "81'b010000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state81 = "81'b100000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
  (* ap_ST_fsm_state9 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000100000000" *) 
  bd_0_hls_inst_0_fn1 inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p(p),
        .p_11({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,p_11[7:0]}));
endmodule

(* ORIG_REF_NAME = "fn1" *) (* ap_ST_fsm_state1 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000000001" *) (* ap_ST_fsm_state10 = "81'b000000000000000000000000000000000000000000000000000000000000000000000001000000000" *) 
(* ap_ST_fsm_state11 = "81'b000000000000000000000000000000000000000000000000000000000000000000000010000000000" *) (* ap_ST_fsm_state12 = "81'b000000000000000000000000000000000000000000000000000000000000000000000100000000000" *) (* ap_ST_fsm_state13 = "81'b000000000000000000000000000000000000000000000000000000000000000000001000000000000" *) 
(* ap_ST_fsm_state14 = "81'b000000000000000000000000000000000000000000000000000000000000000000010000000000000" *) (* ap_ST_fsm_state15 = "81'b000000000000000000000000000000000000000000000000000000000000000000100000000000000" *) (* ap_ST_fsm_state16 = "81'b000000000000000000000000000000000000000000000000000000000000000001000000000000000" *) 
(* ap_ST_fsm_state17 = "81'b000000000000000000000000000000000000000000000000000000000000000010000000000000000" *) (* ap_ST_fsm_state18 = "81'b000000000000000000000000000000000000000000000000000000000000000100000000000000000" *) (* ap_ST_fsm_state19 = "81'b000000000000000000000000000000000000000000000000000000000000001000000000000000000" *) 
(* ap_ST_fsm_state2 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000000010" *) (* ap_ST_fsm_state20 = "81'b000000000000000000000000000000000000000000000000000000000000010000000000000000000" *) (* ap_ST_fsm_state21 = "81'b000000000000000000000000000000000000000000000000000000000000100000000000000000000" *) 
(* ap_ST_fsm_state22 = "81'b000000000000000000000000000000000000000000000000000000000001000000000000000000000" *) (* ap_ST_fsm_state23 = "81'b000000000000000000000000000000000000000000000000000000000010000000000000000000000" *) (* ap_ST_fsm_state24 = "81'b000000000000000000000000000000000000000000000000000000000100000000000000000000000" *) 
(* ap_ST_fsm_state25 = "81'b000000000000000000000000000000000000000000000000000000001000000000000000000000000" *) (* ap_ST_fsm_state26 = "81'b000000000000000000000000000000000000000000000000000000010000000000000000000000000" *) (* ap_ST_fsm_state27 = "81'b000000000000000000000000000000000000000000000000000000100000000000000000000000000" *) 
(* ap_ST_fsm_state28 = "81'b000000000000000000000000000000000000000000000000000001000000000000000000000000000" *) (* ap_ST_fsm_state29 = "81'b000000000000000000000000000000000000000000000000000010000000000000000000000000000" *) (* ap_ST_fsm_state3 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000000100" *) 
(* ap_ST_fsm_state30 = "81'b000000000000000000000000000000000000000000000000000100000000000000000000000000000" *) (* ap_ST_fsm_state31 = "81'b000000000000000000000000000000000000000000000000001000000000000000000000000000000" *) (* ap_ST_fsm_state32 = "81'b000000000000000000000000000000000000000000000000010000000000000000000000000000000" *) 
(* ap_ST_fsm_state33 = "81'b000000000000000000000000000000000000000000000000100000000000000000000000000000000" *) (* ap_ST_fsm_state34 = "81'b000000000000000000000000000000000000000000000001000000000000000000000000000000000" *) (* ap_ST_fsm_state35 = "81'b000000000000000000000000000000000000000000000010000000000000000000000000000000000" *) 
(* ap_ST_fsm_state36 = "81'b000000000000000000000000000000000000000000000100000000000000000000000000000000000" *) (* ap_ST_fsm_state37 = "81'b000000000000000000000000000000000000000000001000000000000000000000000000000000000" *) (* ap_ST_fsm_state38 = "81'b000000000000000000000000000000000000000000010000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state39 = "81'b000000000000000000000000000000000000000000100000000000000000000000000000000000000" *) (* ap_ST_fsm_state4 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000001000" *) (* ap_ST_fsm_state40 = "81'b000000000000000000000000000000000000000001000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state41 = "81'b000000000000000000000000000000000000000010000000000000000000000000000000000000000" *) (* ap_ST_fsm_state42 = "81'b000000000000000000000000000000000000000100000000000000000000000000000000000000000" *) (* ap_ST_fsm_state43 = "81'b000000000000000000000000000000000000001000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state44 = "81'b000000000000000000000000000000000000010000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state45 = "81'b000000000000000000000000000000000000100000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state46 = "81'b000000000000000000000000000000000001000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state47 = "81'b000000000000000000000000000000000010000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state48 = "81'b000000000000000000000000000000000100000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state49 = "81'b000000000000000000000000000000001000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state5 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000010000" *) (* ap_ST_fsm_state50 = "81'b000000000000000000000000000000010000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state51 = "81'b000000000000000000000000000000100000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state52 = "81'b000000000000000000000000000001000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state53 = "81'b000000000000000000000000000010000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state54 = "81'b000000000000000000000000000100000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state55 = "81'b000000000000000000000000001000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state56 = "81'b000000000000000000000000010000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state57 = "81'b000000000000000000000000100000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state58 = "81'b000000000000000000000001000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state59 = "81'b000000000000000000000010000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state6 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000000100000" *) 
(* ap_ST_fsm_state60 = "81'b000000000000000000000100000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state61 = "81'b000000000000000000001000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state62 = "81'b000000000000000000010000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state63 = "81'b000000000000000000100000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state64 = "81'b000000000000000001000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state65 = "81'b000000000000000010000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state66 = "81'b000000000000000100000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state67 = "81'b000000000000001000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state68 = "81'b000000000000010000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state69 = "81'b000000000000100000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state7 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000001000000" *) (* ap_ST_fsm_state70 = "81'b000000000001000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state71 = "81'b000000000010000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state72 = "81'b000000000100000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state73 = "81'b000000001000000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state74 = "81'b000000010000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state75 = "81'b000000100000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state76 = "81'b000001000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state77 = "81'b000010000000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state78 = "81'b000100000000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state79 = "81'b001000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state8 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000010000000" *) (* ap_ST_fsm_state80 = "81'b010000000000000000000000000000000000000000000000000000000000000000000000000000000" *) (* ap_ST_fsm_state81 = "81'b100000000000000000000000000000000000000000000000000000000000000000000000000000000" *) 
(* ap_ST_fsm_state9 = "81'b000000000000000000000000000000000000000000000000000000000000000000000000100000000" *) (* hls_module = "yes" *) 
module bd_0_hls_inst_0_fn1
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p,
    p_11,
    ap_return);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [7:0]p;
  input [15:0]p_11;
  output [7:0]ap_return;

  wire [0:0]B;
  wire \ap_CS_fsm[0]_i_2_n_0 ;
  wire \ap_CS_fsm[0]_i_3_n_0 ;
  wire \ap_CS_fsm[0]_i_4_n_0 ;
  wire \ap_CS_fsm[0]_i_5_n_0 ;
  wire \ap_CS_fsm[0]_i_6_n_0 ;
  wire \ap_CS_fsm[1]_i_10_n_0 ;
  wire \ap_CS_fsm[1]_i_11_n_0 ;
  wire \ap_CS_fsm[1]_i_12_n_0 ;
  wire \ap_CS_fsm[1]_i_13_n_0 ;
  wire \ap_CS_fsm[1]_i_14_n_0 ;
  wire \ap_CS_fsm[1]_i_15_n_0 ;
  wire \ap_CS_fsm[1]_i_16_n_0 ;
  wire \ap_CS_fsm[1]_i_17_n_0 ;
  wire \ap_CS_fsm[1]_i_18_n_0 ;
  wire \ap_CS_fsm[1]_i_19_n_0 ;
  wire \ap_CS_fsm[1]_i_20_n_0 ;
  wire \ap_CS_fsm[1]_i_21_n_0 ;
  wire \ap_CS_fsm[1]_i_22_n_0 ;
  wire \ap_CS_fsm[1]_i_23_n_0 ;
  wire \ap_CS_fsm[1]_i_24_n_0 ;
  wire \ap_CS_fsm[1]_i_2_n_0 ;
  wire \ap_CS_fsm[1]_i_3_n_0 ;
  wire \ap_CS_fsm[1]_i_4_n_0 ;
  wire \ap_CS_fsm[1]_i_5_n_0 ;
  wire \ap_CS_fsm[1]_i_6_n_0 ;
  wire \ap_CS_fsm[1]_i_7_n_0 ;
  wire \ap_CS_fsm[1]_i_8_n_0 ;
  wire \ap_CS_fsm[1]_i_9_n_0 ;
  wire \ap_CS_fsm_reg_n_0_[0] ;
  wire \ap_CS_fsm_reg_n_0_[10] ;
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
  wire \ap_CS_fsm_reg_n_0_[48] ;
  wire \ap_CS_fsm_reg_n_0_[49] ;
  wire \ap_CS_fsm_reg_n_0_[4] ;
  wire \ap_CS_fsm_reg_n_0_[50] ;
  wire \ap_CS_fsm_reg_n_0_[51] ;
  wire \ap_CS_fsm_reg_n_0_[52] ;
  wire \ap_CS_fsm_reg_n_0_[53] ;
  wire \ap_CS_fsm_reg_n_0_[54] ;
  wire \ap_CS_fsm_reg_n_0_[55] ;
  wire \ap_CS_fsm_reg_n_0_[56] ;
  wire \ap_CS_fsm_reg_n_0_[57] ;
  wire \ap_CS_fsm_reg_n_0_[58] ;
  wire \ap_CS_fsm_reg_n_0_[59] ;
  wire \ap_CS_fsm_reg_n_0_[5] ;
  wire \ap_CS_fsm_reg_n_0_[60] ;
  wire \ap_CS_fsm_reg_n_0_[61] ;
  wire \ap_CS_fsm_reg_n_0_[62] ;
  wire \ap_CS_fsm_reg_n_0_[63] ;
  wire \ap_CS_fsm_reg_n_0_[64] ;
  wire \ap_CS_fsm_reg_n_0_[65] ;
  wire \ap_CS_fsm_reg_n_0_[66] ;
  wire \ap_CS_fsm_reg_n_0_[67] ;
  wire \ap_CS_fsm_reg_n_0_[68] ;
  wire \ap_CS_fsm_reg_n_0_[69] ;
  wire \ap_CS_fsm_reg_n_0_[6] ;
  wire \ap_CS_fsm_reg_n_0_[70] ;
  wire \ap_CS_fsm_reg_n_0_[71] ;
  wire \ap_CS_fsm_reg_n_0_[72] ;
  wire \ap_CS_fsm_reg_n_0_[73] ;
  wire \ap_CS_fsm_reg_n_0_[74] ;
  wire \ap_CS_fsm_reg_n_0_[75] ;
  wire \ap_CS_fsm_reg_n_0_[76] ;
  wire \ap_CS_fsm_reg_n_0_[77] ;
  wire \ap_CS_fsm_reg_n_0_[78] ;
  wire \ap_CS_fsm_reg_n_0_[79] ;
  wire \ap_CS_fsm_reg_n_0_[7] ;
  wire \ap_CS_fsm_reg_n_0_[8] ;
  wire \ap_CS_fsm_reg_n_0_[9] ;
  wire ap_CS_fsm_state12;
  wire ap_CS_fsm_state13;
  wire [1:0]ap_NS_fsm;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire [7:0]ap_return;
  wire ap_rst;
  wire ap_start;
  wire done0;
  wire [7:0]p;
  wire [15:0]p_11;
  wire start;
  wire urem_64s_17ns_8_68_seq_1_U3_n_1;
  wire urem_8ns_9ns_9_12_seq_1_U1_n_1;
  wire urem_8ns_9ns_9_12_seq_1_U1_n_2;
  wire urem_8ns_9ns_9_12_seq_1_U1_n_3;
  wire urem_8ns_9ns_9_12_seq_1_U1_n_4;
  wire urem_8ns_9ns_9_12_seq_1_U1_n_5;
  wire urem_8ns_9ns_9_12_seq_1_U1_n_6;
  wire urem_8ns_9ns_9_12_seq_1_U1_n_7;
  wire urem_8ns_9ns_9_12_seq_1_U1_n_8;

  assign ap_ready = ap_done;
  LUT6 #(
    .INIT(64'hAAAAAAABAAAAAAAA)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(ap_idle),
        .I1(\ap_CS_fsm[1]_i_5_n_0 ),
        .I2(\ap_CS_fsm[0]_i_2_n_0 ),
        .I3(\ap_CS_fsm[0]_i_3_n_0 ),
        .I4(\ap_CS_fsm[1]_i_7_n_0 ),
        .I5(\ap_CS_fsm[1]_i_2_n_0 ),
        .O(ap_NS_fsm[0]));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[0]_i_2 
       (.I0(\ap_CS_fsm[1]_i_14_n_0 ),
        .I1(\ap_CS_fsm[0]_i_4_n_0 ),
        .I2(\ap_CS_fsm[1]_i_13_n_0 ),
        .I3(\ap_CS_fsm[0]_i_5_n_0 ),
        .O(\ap_CS_fsm[0]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \ap_CS_fsm[0]_i_3 
       (.I0(\ap_CS_fsm[0]_i_6_n_0 ),
        .I1(\ap_CS_fsm_reg_n_0_[10] ),
        .I2(\ap_CS_fsm_reg_n_0_[9] ),
        .I3(\ap_CS_fsm_reg_n_0_[72] ),
        .I4(\ap_CS_fsm_reg_n_0_[0] ),
        .I5(\ap_CS_fsm[1]_i_17_n_0 ),
        .O(\ap_CS_fsm[0]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[0]_i_4 
       (.I0(\ap_CS_fsm_reg_n_0_[77] ),
        .I1(\ap_CS_fsm_reg_n_0_[54] ),
        .I2(\ap_CS_fsm_reg_n_0_[49] ),
        .I3(\ap_CS_fsm_reg_n_0_[39] ),
        .O(\ap_CS_fsm[0]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[0]_i_5 
       (.I0(\ap_CS_fsm_reg_n_0_[79] ),
        .I1(\ap_CS_fsm_reg_n_0_[29] ),
        .I2(\ap_CS_fsm_reg_n_0_[75] ),
        .I3(\ap_CS_fsm_reg_n_0_[50] ),
        .O(\ap_CS_fsm[0]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \ap_CS_fsm[0]_i_6 
       (.I0(\ap_CS_fsm_reg_n_0_[44] ),
        .I1(\ap_CS_fsm_reg_n_0_[28] ),
        .I2(\ap_CS_fsm_reg_n_0_[20] ),
        .I3(\ap_CS_fsm_reg_n_0_[63] ),
        .I4(\ap_CS_fsm_reg_n_0_[8] ),
        .I5(\ap_CS_fsm_reg_n_0_[60] ),
        .O(\ap_CS_fsm[0]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000002)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(\ap_CS_fsm[1]_i_2_n_0 ),
        .I1(\ap_CS_fsm[1]_i_3_n_0 ),
        .I2(\ap_CS_fsm[1]_i_4_n_0 ),
        .I3(\ap_CS_fsm[1]_i_5_n_0 ),
        .I4(\ap_CS_fsm[1]_i_6_n_0 ),
        .I5(\ap_CS_fsm[1]_i_7_n_0 ),
        .O(ap_NS_fsm[1]));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_10 
       (.I0(\ap_CS_fsm_reg_n_0_[41] ),
        .I1(\ap_CS_fsm_reg_n_0_[17] ),
        .I2(\ap_CS_fsm_reg_n_0_[6] ),
        .I3(\ap_CS_fsm_reg_n_0_[5] ),
        .O(\ap_CS_fsm[1]_i_10_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_11 
       (.I0(\ap_CS_fsm_reg_n_0_[26] ),
        .I1(\ap_CS_fsm_reg_n_0_[22] ),
        .I2(\ap_CS_fsm_reg_n_0_[38] ),
        .I3(\ap_CS_fsm_reg_n_0_[25] ),
        .O(\ap_CS_fsm[1]_i_11_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_12 
       (.I0(\ap_CS_fsm_reg_n_0_[57] ),
        .I1(\ap_CS_fsm_reg_n_0_[2] ),
        .I2(\ap_CS_fsm_reg_n_0_[69] ),
        .I3(\ap_CS_fsm_reg_n_0_[1] ),
        .O(\ap_CS_fsm[1]_i_12_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_13 
       (.I0(\ap_CS_fsm_reg_n_0_[76] ),
        .I1(\ap_CS_fsm_reg_n_0_[53] ),
        .I2(\ap_CS_fsm_reg_n_0_[46] ),
        .I3(\ap_CS_fsm_reg_n_0_[33] ),
        .O(\ap_CS_fsm[1]_i_13_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_14 
       (.I0(\ap_CS_fsm_reg_n_0_[78] ),
        .I1(\ap_CS_fsm_reg_n_0_[30] ),
        .I2(\ap_CS_fsm_reg_n_0_[45] ),
        .I3(\ap_CS_fsm_reg_n_0_[34] ),
        .O(\ap_CS_fsm[1]_i_14_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_15 
       (.I0(\ap_CS_fsm_reg_n_0_[27] ),
        .I1(\ap_CS_fsm_reg_n_0_[3] ),
        .I2(\ap_CS_fsm_reg_n_0_[47] ),
        .I3(\ap_CS_fsm_reg_n_0_[31] ),
        .O(\ap_CS_fsm[1]_i_15_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_16 
       (.I0(\ap_CS_fsm_reg_n_0_[59] ),
        .I1(\ap_CS_fsm_reg_n_0_[56] ),
        .I2(\ap_CS_fsm_reg_n_0_[71] ),
        .I3(\ap_CS_fsm_reg_n_0_[68] ),
        .O(\ap_CS_fsm[1]_i_16_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_17 
       (.I0(\ap_CS_fsm_reg_n_0_[55] ),
        .I1(\ap_CS_fsm_reg_n_0_[35] ),
        .I2(ap_CS_fsm_state13),
        .I3(ap_CS_fsm_state12),
        .O(\ap_CS_fsm[1]_i_17_n_0 ));
  LUT2 #(
    .INIT(4'hE)) 
    \ap_CS_fsm[1]_i_18 
       (.I0(\ap_CS_fsm_reg_n_0_[28] ),
        .I1(\ap_CS_fsm_reg_n_0_[44] ),
        .O(\ap_CS_fsm[1]_i_18_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_19 
       (.I0(\ap_CS_fsm_reg_n_0_[63] ),
        .I1(\ap_CS_fsm_reg_n_0_[20] ),
        .I2(\ap_CS_fsm_reg_n_0_[10] ),
        .I3(\ap_CS_fsm_reg_n_0_[9] ),
        .O(\ap_CS_fsm[1]_i_19_n_0 ));
  LUT5 #(
    .INIT(32'h00000002)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(\ap_CS_fsm[1]_i_8_n_0 ),
        .I1(\ap_CS_fsm[1]_i_9_n_0 ),
        .I2(\ap_CS_fsm[1]_i_10_n_0 ),
        .I3(\ap_CS_fsm[1]_i_11_n_0 ),
        .I4(\ap_CS_fsm[1]_i_12_n_0 ),
        .O(\ap_CS_fsm[1]_i_2_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_20 
       (.I0(\ap_CS_fsm_reg_n_0_[60] ),
        .I1(\ap_CS_fsm_reg_n_0_[8] ),
        .I2(ap_done),
        .I3(\ap_CS_fsm_reg_n_0_[72] ),
        .O(\ap_CS_fsm[1]_i_20_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_21 
       (.I0(\ap_CS_fsm_reg_n_0_[15] ),
        .I1(\ap_CS_fsm_reg_n_0_[4] ),
        .I2(\ap_CS_fsm_reg_n_0_[43] ),
        .I3(\ap_CS_fsm_reg_n_0_[40] ),
        .O(\ap_CS_fsm[1]_i_21_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_22 
       (.I0(\ap_CS_fsm_reg_n_0_[24] ),
        .I1(\ap_CS_fsm_reg_n_0_[23] ),
        .I2(\ap_CS_fsm_reg_n_0_[19] ),
        .I3(\ap_CS_fsm_reg_n_0_[16] ),
        .O(\ap_CS_fsm[1]_i_22_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_23 
       (.I0(\ap_CS_fsm_reg_n_0_[51] ),
        .I1(start),
        .I2(\ap_CS_fsm_reg_n_0_[65] ),
        .I3(\ap_CS_fsm_reg_n_0_[52] ),
        .O(\ap_CS_fsm[1]_i_23_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_24 
       (.I0(\ap_CS_fsm_reg_n_0_[48] ),
        .I1(\ap_CS_fsm_reg_n_0_[14] ),
        .I2(\ap_CS_fsm_reg_n_0_[66] ),
        .I3(\ap_CS_fsm_reg_n_0_[32] ),
        .O(\ap_CS_fsm[1]_i_24_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT5 #(
    .INIT(32'hFFFFFFFE)) 
    \ap_CS_fsm[1]_i_3 
       (.I0(\ap_CS_fsm_reg_n_0_[50] ),
        .I1(\ap_CS_fsm_reg_n_0_[75] ),
        .I2(\ap_CS_fsm_reg_n_0_[29] ),
        .I3(\ap_CS_fsm_reg_n_0_[79] ),
        .I4(\ap_CS_fsm[1]_i_13_n_0 ),
        .O(\ap_CS_fsm[1]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT5 #(
    .INIT(32'hFFFFFFFE)) 
    \ap_CS_fsm[1]_i_4 
       (.I0(\ap_CS_fsm_reg_n_0_[39] ),
        .I1(\ap_CS_fsm_reg_n_0_[49] ),
        .I2(\ap_CS_fsm_reg_n_0_[54] ),
        .I3(\ap_CS_fsm_reg_n_0_[77] ),
        .I4(\ap_CS_fsm[1]_i_14_n_0 ),
        .O(\ap_CS_fsm[1]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \ap_CS_fsm[1]_i_5 
       (.I0(\ap_CS_fsm_reg_n_0_[64] ),
        .I1(\ap_CS_fsm_reg_n_0_[67] ),
        .I2(\ap_CS_fsm_reg_n_0_[7] ),
        .I3(\ap_CS_fsm_reg_n_0_[36] ),
        .I4(\ap_CS_fsm[1]_i_15_n_0 ),
        .I5(\ap_CS_fsm[1]_i_16_n_0 ),
        .O(\ap_CS_fsm[1]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFBF)) 
    \ap_CS_fsm[1]_i_6 
       (.I0(\ap_CS_fsm[1]_i_17_n_0 ),
        .I1(ap_start),
        .I2(\ap_CS_fsm_reg_n_0_[0] ),
        .I3(\ap_CS_fsm[1]_i_18_n_0 ),
        .I4(\ap_CS_fsm[1]_i_19_n_0 ),
        .I5(\ap_CS_fsm[1]_i_20_n_0 ),
        .O(\ap_CS_fsm[1]_i_6_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_7 
       (.I0(\ap_CS_fsm[1]_i_21_n_0 ),
        .I1(\ap_CS_fsm[1]_i_22_n_0 ),
        .I2(\ap_CS_fsm[1]_i_23_n_0 ),
        .I3(\ap_CS_fsm[1]_i_24_n_0 ),
        .O(\ap_CS_fsm[1]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \ap_CS_fsm[1]_i_8 
       (.I0(\ap_CS_fsm_reg_n_0_[58] ),
        .I1(\ap_CS_fsm_reg_n_0_[37] ),
        .I2(\ap_CS_fsm_reg_n_0_[42] ),
        .I3(\ap_CS_fsm_reg_n_0_[62] ),
        .I4(\ap_CS_fsm_reg_n_0_[18] ),
        .I5(\ap_CS_fsm_reg_n_0_[61] ),
        .O(\ap_CS_fsm[1]_i_8_n_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \ap_CS_fsm[1]_i_9 
       (.I0(\ap_CS_fsm_reg_n_0_[70] ),
        .I1(\ap_CS_fsm_reg_n_0_[21] ),
        .I2(\ap_CS_fsm_reg_n_0_[74] ),
        .I3(\ap_CS_fsm_reg_n_0_[73] ),
        .O(\ap_CS_fsm[1]_i_9_n_0 ));
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
        .Q(ap_CS_fsm_state12),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state12),
        .Q(ap_CS_fsm_state13),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_CS_fsm_state13),
        .Q(start),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(start),
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
        .Q(\ap_CS_fsm_reg_n_0_[48] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[49] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[48] ),
        .Q(\ap_CS_fsm_reg_n_0_[49] ),
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
        .D(\ap_CS_fsm_reg_n_0_[49] ),
        .Q(\ap_CS_fsm_reg_n_0_[50] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[51] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[50] ),
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
        .Q(\ap_CS_fsm_reg_n_0_[5] ),
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
        .Q(\ap_CS_fsm_reg_n_0_[67] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[68] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[67] ),
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
        .D(\ap_CS_fsm_reg_n_0_[5] ),
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
        .Q(\ap_CS_fsm_reg_n_0_[71] ),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[72] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_0_[71] ),
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
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(\ap_CS_fsm_reg_n_0_[0] ),
        .I1(ap_start),
        .O(ap_idle));
  bd_0_hls_inst_0_fn1_urem_64s_17ns_8_68_seq_1 urem_64s_17ns_8_68_seq_1_U3
       (.D(B),
        .Q({start,ap_CS_fsm_state13,ap_CS_fsm_state12}),
        .ap_clk(ap_clk),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .dividend0_reg({urem_8ns_9ns_9_12_seq_1_U1_n_1,urem_8ns_9ns_9_12_seq_1_U1_n_2,urem_8ns_9ns_9_12_seq_1_U1_n_3,urem_8ns_9ns_9_12_seq_1_U1_n_4,urem_8ns_9ns_9_12_seq_1_U1_n_5,urem_8ns_9ns_9_12_seq_1_U1_n_6,urem_8ns_9ns_9_12_seq_1_U1_n_7,urem_8ns_9ns_9_12_seq_1_U1_n_8}),
        .done0(done0),
        .p(p),
        .r_stage_reg_r_5(urem_64s_17ns_8_68_seq_1_U3_n_1));
  bd_0_hls_inst_0_fn1_urem_8ns_9ns_9_12_seq_1 urem_8ns_9ns_9_12_seq_1_U1
       (.D(B),
        .Q(\ap_CS_fsm_reg_n_0_[0] ),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .done0(done0),
        .p(p),
        .p_11(p_11[7:0]),
        .\r_stage_reg[8] (urem_64s_17ns_8_68_seq_1_U3_n_1),
        .\remd_tmp_reg[7] ({urem_8ns_9ns_9_12_seq_1_U1_n_1,urem_8ns_9ns_9_12_seq_1_U1_n_2,urem_8ns_9ns_9_12_seq_1_U1_n_3,urem_8ns_9ns_9_12_seq_1_U1_n_4,urem_8ns_9ns_9_12_seq_1_U1_n_5,urem_8ns_9ns_9_12_seq_1_U1_n_6,urem_8ns_9ns_9_12_seq_1_U1_n_7,urem_8ns_9ns_9_12_seq_1_U1_n_8}));
endmodule

(* ORIG_REF_NAME = "fn1_urem_64s_17ns_8_68_seq_1" *) 
module bd_0_hls_inst_0_fn1_urem_64s_17ns_8_68_seq_1
   (D,
    r_stage_reg_r_5,
    ap_return,
    Q,
    ap_clk,
    done0,
    dividend0_reg,
    ap_rst,
    p);
  output [0:0]D;
  output r_stage_reg_r_5;
  output [7:0]ap_return;
  input [2:0]Q;
  input ap_clk;
  input done0;
  input [7:0]dividend0_reg;
  input ap_rst;
  input [7:0]p;

  wire [0:0]D;
  wire [2:0]Q;
  wire ap_clk;
  wire [7:0]ap_return;
  wire ap_rst;
  wire [7:0]dividend0_reg;
  wire done0;
  wire [7:0]p;
  wire r_stage_reg_r_5;

  bd_0_hls_inst_0_fn1_urem_64s_17ns_8_68_seq_1_div fn1_urem_64s_17ns_8_68_seq_1_div_U
       (.D(D),
        .Q(Q),
        .ap_clk(ap_clk),
        .ap_return(ap_return),
        .ap_rst(ap_rst),
        .dividend0_reg_0(dividend0_reg),
        .done0(done0),
        .p(p),
        .r_stage_reg_r_5(r_stage_reg_r_5));
endmodule

(* ORIG_REF_NAME = "fn1_urem_64s_17ns_8_68_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_urem_64s_17ns_8_68_seq_1_div
   (D,
    r_stage_reg_r_5,
    ap_return,
    Q,
    ap_clk,
    done0,
    dividend0_reg_0,
    ap_rst,
    p);
  output [0:0]D;
  output r_stage_reg_r_5;
  output [7:0]ap_return;
  input [2:0]Q;
  input ap_clk;
  input done0;
  input [7:0]dividend0_reg_0;
  input ap_rst;
  input [7:0]p;

  wire [7:1]B;
  wire [0:0]D;
  wire [2:0]Q;
  wire ap_clk;
  wire [7:0]ap_return;
  wire ap_rst;
  wire [7:0]dividend0_reg_0;
  wire dividend0_reg_n_100;
  wire dividend0_reg_n_101;
  wire dividend0_reg_n_102;
  wire dividend0_reg_n_103;
  wire dividend0_reg_n_104;
  wire dividend0_reg_n_105;
  wire dividend0_reg_n_90;
  wire dividend0_reg_n_91;
  wire dividend0_reg_n_92;
  wire dividend0_reg_n_93;
  wire dividend0_reg_n_94;
  wire dividend0_reg_n_95;
  wire dividend0_reg_n_96;
  wire dividend0_reg_n_97;
  wire dividend0_reg_n_98;
  wire dividend0_reg_n_99;
  wire done0;
  wire fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1;
  wire [7:0]p;
  wire r_stage_reg_r_5;
  wire [7:0]remd_tmp;
  wire start0_reg_n_0;
  wire NLW_dividend0_reg_CARRYCASCOUT_UNCONNECTED;
  wire NLW_dividend0_reg_MULTSIGNOUT_UNCONNECTED;
  wire NLW_dividend0_reg_OVERFLOW_UNCONNECTED;
  wire NLW_dividend0_reg_PATTERNBDETECT_UNCONNECTED;
  wire NLW_dividend0_reg_PATTERNDETECT_UNCONNECTED;
  wire NLW_dividend0_reg_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_dividend0_reg_ACOUT_UNCONNECTED;
  wire [17:0]NLW_dividend0_reg_BCOUT_UNCONNECTED;
  wire [3:0]NLW_dividend0_reg_CARRYOUT_UNCONNECTED;
  wire [47:16]NLW_dividend0_reg_P_UNCONNECTED;
  wire [47:0]NLW_dividend0_reg_PCOUT_UNCONNECTED;

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
    dividend0_reg
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,dividend0_reg_0}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_dividend0_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({B[7],B[7],B[7],B[7],B[7],B[7],B[7],B[7],B[7],B[7],B,D}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_dividend0_reg_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_dividend0_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_dividend0_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(done0),
        .CEA2(Q[0]),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(Q[1]),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_dividend0_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_dividend0_reg_OVERFLOW_UNCONNECTED),
        .P({NLW_dividend0_reg_P_UNCONNECTED[47:16],dividend0_reg_n_90,dividend0_reg_n_91,dividend0_reg_n_92,dividend0_reg_n_93,dividend0_reg_n_94,dividend0_reg_n_95,dividend0_reg_n_96,dividend0_reg_n_97,dividend0_reg_n_98,dividend0_reg_n_99,dividend0_reg_n_100,dividend0_reg_n_101,dividend0_reg_n_102,dividend0_reg_n_103,dividend0_reg_n_104,dividend0_reg_n_105}),
        .PATTERNBDETECT(NLW_dividend0_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_dividend0_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_dividend0_reg_PCOUT_UNCONNECTED[47:0]),
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
        .UNDERFLOW(NLW_dividend0_reg_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    dividend0_reg_i_1
       (.I0(p[7]),
        .O(B[7]));
  LUT1 #(
    .INIT(2'h1)) 
    dividend0_reg_i_2
       (.I0(p[6]),
        .O(B[6]));
  LUT1 #(
    .INIT(2'h1)) 
    dividend0_reg_i_3
       (.I0(p[5]),
        .O(B[5]));
  LUT1 #(
    .INIT(2'h1)) 
    dividend0_reg_i_4
       (.I0(p[4]),
        .O(B[4]));
  LUT1 #(
    .INIT(2'h1)) 
    dividend0_reg_i_5
       (.I0(p[3]),
        .O(B[3]));
  LUT1 #(
    .INIT(2'h1)) 
    dividend0_reg_i_6
       (.I0(p[2]),
        .O(B[2]));
  LUT1 #(
    .INIT(2'h1)) 
    dividend0_reg_i_7
       (.I0(p[1]),
        .O(B[1]));
  LUT1 #(
    .INIT(2'h1)) 
    \divisor0[0]_i_1 
       (.I0(p[0]),
        .O(D));
  bd_0_hls_inst_0_fn1_urem_64s_17ns_8_68_seq_1_div_u fn1_urem_64s_17ns_8_68_seq_1_div_u_0
       (.D({dividend0_reg_n_90,dividend0_reg_n_91,dividend0_reg_n_92,dividend0_reg_n_93,dividend0_reg_n_94,dividend0_reg_n_95,dividend0_reg_n_96,dividend0_reg_n_97,dividend0_reg_n_98,dividend0_reg_n_99,dividend0_reg_n_100,dividend0_reg_n_101,dividend0_reg_n_102,dividend0_reg_n_103,dividend0_reg_n_104,dividend0_reg_n_105}),
        .E(start0_reg_n_0),
        .Q(remd_tmp),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\r_stage_reg[64]_0 (fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1),
        .r_stage_reg_r_5_0(r_stage_reg_r_5));
  FDRE \remd_reg[0] 
       (.C(ap_clk),
        .CE(fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1),
        .D(remd_tmp[0]),
        .Q(ap_return[0]),
        .R(1'b0));
  FDRE \remd_reg[1] 
       (.C(ap_clk),
        .CE(fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1),
        .D(remd_tmp[1]),
        .Q(ap_return[1]),
        .R(1'b0));
  FDRE \remd_reg[2] 
       (.C(ap_clk),
        .CE(fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1),
        .D(remd_tmp[2]),
        .Q(ap_return[2]),
        .R(1'b0));
  FDRE \remd_reg[3] 
       (.C(ap_clk),
        .CE(fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1),
        .D(remd_tmp[3]),
        .Q(ap_return[3]),
        .R(1'b0));
  FDRE \remd_reg[4] 
       (.C(ap_clk),
        .CE(fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1),
        .D(remd_tmp[4]),
        .Q(ap_return[4]),
        .R(1'b0));
  FDRE \remd_reg[5] 
       (.C(ap_clk),
        .CE(fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1),
        .D(remd_tmp[5]),
        .Q(ap_return[5]),
        .R(1'b0));
  FDRE \remd_reg[6] 
       (.C(ap_clk),
        .CE(fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1),
        .D(remd_tmp[6]),
        .Q(ap_return[6]),
        .R(1'b0));
  FDRE \remd_reg[7] 
       (.C(ap_clk),
        .CE(fn1_urem_64s_17ns_8_68_seq_1_div_u_0_n_1),
        .D(remd_tmp[7]),
        .Q(ap_return[7]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q[2]),
        .Q(start0_reg_n_0),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_urem_64s_17ns_8_68_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_urem_64s_17ns_8_68_seq_1_div_u
   (r_stage_reg_r_5_0,
    \r_stage_reg[64]_0 ,
    Q,
    ap_rst,
    E,
    ap_clk,
    D);
  output r_stage_reg_r_5_0;
  output [0:0]\r_stage_reg[64]_0 ;
  output [7:0]Q;
  input ap_rst;
  input [0:0]E;
  input ap_clk;
  input [15:0]D;

  wire [15:0]D;
  wire [0:0]E;
  wire [7:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire cal_tmp_carry__0_i_1_n_0;
  wire cal_tmp_carry__0_i_2_n_0;
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
  wire cal_tmp_carry__3_n_0;
  wire cal_tmp_carry__3_n_1;
  wire cal_tmp_carry__3_n_2;
  wire cal_tmp_carry__3_n_3;
  wire cal_tmp_carry__3_n_4;
  wire cal_tmp_carry__3_n_5;
  wire cal_tmp_carry__3_n_6;
  wire cal_tmp_carry__3_n_7;
  wire cal_tmp_carry__4_i_1_n_0;
  wire cal_tmp_carry__4_i_2_n_0;
  wire cal_tmp_carry__4_i_3_n_0;
  wire cal_tmp_carry__4_i_4_n_0;
  wire cal_tmp_carry__4_n_0;
  wire cal_tmp_carry__4_n_1;
  wire cal_tmp_carry__4_n_2;
  wire cal_tmp_carry__4_n_3;
  wire cal_tmp_carry__4_n_4;
  wire cal_tmp_carry__4_n_5;
  wire cal_tmp_carry__4_n_6;
  wire cal_tmp_carry__4_n_7;
  wire cal_tmp_carry__5_i_1_n_0;
  wire cal_tmp_carry__5_i_2_n_0;
  wire cal_tmp_carry__5_i_3_n_0;
  wire cal_tmp_carry__5_i_4_n_0;
  wire cal_tmp_carry__5_n_0;
  wire cal_tmp_carry__5_n_1;
  wire cal_tmp_carry__5_n_2;
  wire cal_tmp_carry__5_n_3;
  wire cal_tmp_carry__5_n_4;
  wire cal_tmp_carry__5_n_5;
  wire cal_tmp_carry__5_n_6;
  wire cal_tmp_carry__5_n_7;
  wire cal_tmp_carry__6_i_1_n_0;
  wire cal_tmp_carry__6_i_2_n_0;
  wire cal_tmp_carry__6_i_3_n_0;
  wire cal_tmp_carry__6_i_4_n_0;
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
  wire \dividend_tmp_reg_n_0_[0] ;
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
  wire \dividend_tmp_reg_n_0_[1] ;
  wire \dividend_tmp_reg_n_0_[20] ;
  wire \dividend_tmp_reg_n_0_[21] ;
  wire \dividend_tmp_reg_n_0_[22] ;
  wire \dividend_tmp_reg_n_0_[23] ;
  wire \dividend_tmp_reg_n_0_[24] ;
  wire \dividend_tmp_reg_n_0_[25] ;
  wire \dividend_tmp_reg_n_0_[26] ;
  wire \dividend_tmp_reg_n_0_[27] ;
  wire \dividend_tmp_reg_n_0_[28] ;
  wire \dividend_tmp_reg_n_0_[29] ;
  wire \dividend_tmp_reg_n_0_[2] ;
  wire \dividend_tmp_reg_n_0_[30] ;
  wire \dividend_tmp_reg_n_0_[31] ;
  wire \dividend_tmp_reg_n_0_[32] ;
  wire \dividend_tmp_reg_n_0_[33] ;
  wire \dividend_tmp_reg_n_0_[34] ;
  wire \dividend_tmp_reg_n_0_[35] ;
  wire \dividend_tmp_reg_n_0_[36] ;
  wire \dividend_tmp_reg_n_0_[37] ;
  wire \dividend_tmp_reg_n_0_[38] ;
  wire \dividend_tmp_reg_n_0_[39] ;
  wire \dividend_tmp_reg_n_0_[3] ;
  wire \dividend_tmp_reg_n_0_[40] ;
  wire \dividend_tmp_reg_n_0_[41] ;
  wire \dividend_tmp_reg_n_0_[42] ;
  wire \dividend_tmp_reg_n_0_[43] ;
  wire \dividend_tmp_reg_n_0_[44] ;
  wire \dividend_tmp_reg_n_0_[45] ;
  wire \dividend_tmp_reg_n_0_[46] ;
  wire \dividend_tmp_reg_n_0_[47] ;
  wire \dividend_tmp_reg_n_0_[48] ;
  wire \dividend_tmp_reg_n_0_[49] ;
  wire \dividend_tmp_reg_n_0_[4] ;
  wire \dividend_tmp_reg_n_0_[50] ;
  wire \dividend_tmp_reg_n_0_[51] ;
  wire \dividend_tmp_reg_n_0_[52] ;
  wire \dividend_tmp_reg_n_0_[53] ;
  wire \dividend_tmp_reg_n_0_[54] ;
  wire \dividend_tmp_reg_n_0_[55] ;
  wire \dividend_tmp_reg_n_0_[56] ;
  wire \dividend_tmp_reg_n_0_[57] ;
  wire \dividend_tmp_reg_n_0_[58] ;
  wire \dividend_tmp_reg_n_0_[59] ;
  wire \dividend_tmp_reg_n_0_[5] ;
  wire \dividend_tmp_reg_n_0_[60] ;
  wire \dividend_tmp_reg_n_0_[61] ;
  wire \dividend_tmp_reg_n_0_[62] ;
  wire \dividend_tmp_reg_n_0_[63] ;
  wire \dividend_tmp_reg_n_0_[6] ;
  wire \dividend_tmp_reg_n_0_[7] ;
  wire \dividend_tmp_reg_n_0_[8] ;
  wire \dividend_tmp_reg_n_0_[9] ;
  wire p_0_in;
  wire [0:0]p_2_out;
  wire \r_stage_reg[0]_rep_n_0 ;
  wire \r_stage_reg[32]_srl32___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_30_n_1 ;
  wire \r_stage_reg[62]_srl30___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_60_n_0 ;
  wire \r_stage_reg[63]_urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_61_n_0 ;
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
  wire r_stage_reg_r_26_n_0;
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
  wire [62:8]remd_tmp;
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
  wire [3:3]NLW_cal_tmp_carry__14_O_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__15_CO_UNCONNECTED;
  wire [3:1]NLW_cal_tmp_carry__15_O_UNCONNECTED;
  wire \NLW_r_stage_reg[32]_srl32___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_30_Q_UNCONNECTED ;
  wire \NLW_r_stage_reg[62]_srl30___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_60_Q31_UNCONNECTED ;

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
        .DI({cal_tmp_carry__0_i_1_n_0,1'b1,1'b1,cal_tmp_carry__0_i_2_n_0}),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_3_n_0,cal_tmp_carry__0_i_4_n_0,cal_tmp_carry__0_i_5_n_0,cal_tmp_carry__0_i_6_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1
       (.I0(Q[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(Q[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(Q[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__0_i_4
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[5]),
        .O(cal_tmp_carry__0_i_4_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__0_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[4]),
        .O(cal_tmp_carry__0_i_5_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_6
       (.I0(Q[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__0_i_6_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({cal_tmp_carry__1_n_0,cal_tmp_carry__1_n_1,cal_tmp_carry__1_n_2,cal_tmp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__1_i_1_n_0,cal_tmp_carry__1_i_2_n_0,cal_tmp_carry__1_i_3_n_0,cal_tmp_carry__1_i_4_n_0}),
        .O({cal_tmp_carry__1_n_4,cal_tmp_carry__1_n_5,cal_tmp_carry__1_n_6,cal_tmp_carry__1_n_7}),
        .S({cal_tmp_carry__1_i_5_n_0,cal_tmp_carry__1_i_6_n_0,cal_tmp_carry__1_i_7_n_0,cal_tmp_carry__1_i_8_n_0}));
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
        .O(cal_tmp_carry__1_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_2
       (.I0(remd_tmp[9]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_3
       (.I0(remd_tmp[8]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_4
       (.I0(Q[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_4_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_5
       (.I0(remd_tmp[10]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_5_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_6
       (.I0(remd_tmp[9]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_6_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_7
       (.I0(remd_tmp[8]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_7_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__1_i_8
       (.I0(Q[7]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__1_i_8_n_0));
  CARRY4 cal_tmp_carry__2
       (.CI(cal_tmp_carry__1_n_0),
        .CO({cal_tmp_carry__2_n_0,cal_tmp_carry__2_n_1,cal_tmp_carry__2_n_2,cal_tmp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({cal_tmp_carry__2_i_1_n_0,cal_tmp_carry__2_i_2_n_0,1'b1,1'b1}),
        .O({cal_tmp_carry__2_n_4,cal_tmp_carry__2_n_5,cal_tmp_carry__2_n_6,cal_tmp_carry__2_n_7}),
        .S({cal_tmp_carry__2_i_3_n_0,cal_tmp_carry__2_i_4_n_0,cal_tmp_carry__2_i_5_n_0,cal_tmp_carry__2_i_6_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_1
       (.I0(remd_tmp[14]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__2_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_2
       (.I0(remd_tmp[13]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__2_i_2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_3
       (.I0(remd_tmp[14]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .O(cal_tmp_carry__2_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__2_i_4
       (.I0(remd_tmp[13]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry__2_i_4_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__2_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[12]),
        .O(cal_tmp_carry__2_i_5_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__2_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[11]),
        .O(cal_tmp_carry__2_i_6_n_0));
  CARRY4 cal_tmp_carry__3
       (.CI(cal_tmp_carry__2_n_0),
        .CO({cal_tmp_carry__3_n_0,cal_tmp_carry__3_n_1,cal_tmp_carry__3_n_2,cal_tmp_carry__3_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__3_n_4,cal_tmp_carry__3_n_5,cal_tmp_carry__3_n_6,cal_tmp_carry__3_n_7}),
        .S({cal_tmp_carry__3_i_1_n_0,cal_tmp_carry__3_i_2_n_0,cal_tmp_carry__3_i_3_n_0,cal_tmp_carry__3_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__3_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[18]),
        .O(cal_tmp_carry__3_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__3_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[17]),
        .O(cal_tmp_carry__3_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__3_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[16]),
        .O(cal_tmp_carry__3_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__3_i_4
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(remd_tmp[15]),
        .O(cal_tmp_carry__3_i_4_n_0));
  CARRY4 cal_tmp_carry__4
       (.CI(cal_tmp_carry__3_n_0),
        .CO({cal_tmp_carry__4_n_0,cal_tmp_carry__4_n_1,cal_tmp_carry__4_n_2,cal_tmp_carry__4_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__4_n_4,cal_tmp_carry__4_n_5,cal_tmp_carry__4_n_6,cal_tmp_carry__4_n_7}),
        .S({cal_tmp_carry__4_i_1_n_0,cal_tmp_carry__4_i_2_n_0,cal_tmp_carry__4_i_3_n_0,cal_tmp_carry__4_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__4_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[22]),
        .O(cal_tmp_carry__4_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__4_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[21]),
        .O(cal_tmp_carry__4_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__4_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[20]),
        .O(cal_tmp_carry__4_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__4_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[19]),
        .O(cal_tmp_carry__4_i_4_n_0));
  CARRY4 cal_tmp_carry__5
       (.CI(cal_tmp_carry__4_n_0),
        .CO({cal_tmp_carry__5_n_0,cal_tmp_carry__5_n_1,cal_tmp_carry__5_n_2,cal_tmp_carry__5_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__5_n_4,cal_tmp_carry__5_n_5,cal_tmp_carry__5_n_6,cal_tmp_carry__5_n_7}),
        .S({cal_tmp_carry__5_i_1_n_0,cal_tmp_carry__5_i_2_n_0,cal_tmp_carry__5_i_3_n_0,cal_tmp_carry__5_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__5_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[26]),
        .O(cal_tmp_carry__5_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__5_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[25]),
        .O(cal_tmp_carry__5_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__5_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[24]),
        .O(cal_tmp_carry__5_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__5_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[23]),
        .O(cal_tmp_carry__5_i_4_n_0));
  CARRY4 cal_tmp_carry__6
       (.CI(cal_tmp_carry__5_n_0),
        .CO({cal_tmp_carry__6_n_0,cal_tmp_carry__6_n_1,cal_tmp_carry__6_n_2,cal_tmp_carry__6_n_3}),
        .CYINIT(1'b0),
        .DI({1'b1,1'b1,1'b1,1'b1}),
        .O({cal_tmp_carry__6_n_4,cal_tmp_carry__6_n_5,cal_tmp_carry__6_n_6,cal_tmp_carry__6_n_7}),
        .S({cal_tmp_carry__6_i_1_n_0,cal_tmp_carry__6_i_2_n_0,cal_tmp_carry__6_i_3_n_0,cal_tmp_carry__6_i_4_n_0}));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__6_i_1
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[30]),
        .O(cal_tmp_carry__6_i_1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__6_i_2
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[29]),
        .O(cal_tmp_carry__6_i_2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__6_i_3
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[28]),
        .O(cal_tmp_carry__6_i_3_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry__6_i_4
       (.I0(\r_stage_reg[0]_rep_n_0 ),
        .I1(remd_tmp[27]),
        .O(cal_tmp_carry__6_i_4_n_0));
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
       (.I0(Q[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_2
       (.I0(Q[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_2_n_0));
  LUT3 #(
    .INIT(8'hB8)) 
    cal_tmp_carry_i_3
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[63] ),
        .O(cal_tmp_carry_i_3_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_4
       (.I0(Q[2]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_4_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    cal_tmp_carry_i_5
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[1]),
        .O(cal_tmp_carry_i_5_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry_i_6
       (.I0(Q[0]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(cal_tmp_carry_i_6_n_0));
  LUT3 #(
    .INIT(8'hB8)) 
    cal_tmp_carry_i_7
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[63] ),
        .O(cal_tmp_carry_i_7_n_0));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(D[0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(D[10]),
        .Q(\dividend0_reg_n_0_[10] ),
        .R(1'b0));
  FDRE \dividend0_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(D[11]),
        .Q(\dividend0_reg_n_0_[11] ),
        .R(1'b0));
  FDRE \dividend0_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(D[12]),
        .Q(\dividend0_reg_n_0_[12] ),
        .R(1'b0));
  FDRE \dividend0_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(D[13]),
        .Q(\dividend0_reg_n_0_[13] ),
        .R(1'b0));
  FDRE \dividend0_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(D[14]),
        .Q(\dividend0_reg_n_0_[14] ),
        .R(1'b0));
  FDRE \dividend0_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(D[15]),
        .Q(\dividend0_reg_n_0_[15] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(D[1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(D[2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(D[3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(D[4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(D[5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(D[6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(D[7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \dividend0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(D[8]),
        .Q(\dividend0_reg_n_0_[8] ),
        .R(1'b0));
  FDRE \dividend0_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(D[9]),
        .Q(\dividend0_reg_n_0_[9] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[10]_i_1 
       (.I0(\dividend0_reg_n_0_[9] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[9] ),
        .O(\dividend_tmp[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[11]_i_1 
       (.I0(\dividend0_reg_n_0_[10] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[10] ),
        .O(\dividend_tmp[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[12]_i_1 
       (.I0(\dividend0_reg_n_0_[11] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[11] ),
        .O(\dividend_tmp[12]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[13]_i_1 
       (.I0(\dividend0_reg_n_0_[12] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[12] ),
        .O(\dividend_tmp[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[14]_i_1 
       (.I0(\dividend0_reg_n_0_[13] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[13] ),
        .O(\dividend_tmp[14]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[15]_i_1 
       (.I0(\dividend0_reg_n_0_[14] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[14] ),
        .O(\dividend_tmp[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[16]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[15] ),
        .O(\dividend_tmp[16]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[17]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[16] ),
        .O(\dividend_tmp[17]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[18]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[17] ),
        .O(\dividend_tmp[18]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[19]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[18] ),
        .O(\dividend_tmp[19]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[1]_i_1 
       (.I0(\dividend0_reg_n_0_[0] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[0] ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[20]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[19] ),
        .O(\dividend_tmp[20]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[21]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[20] ),
        .O(\dividend_tmp[21]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[22]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[21] ),
        .O(\dividend_tmp[22]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[23]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[22] ),
        .O(\dividend_tmp[23]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[24]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[23] ),
        .O(\dividend_tmp[24]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[25]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[24] ),
        .O(\dividend_tmp[25]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[26]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[25] ),
        .O(\dividend_tmp[26]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[27]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[26] ),
        .O(\dividend_tmp[27]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[28]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[27] ),
        .O(\dividend_tmp[28]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[29]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[28] ),
        .O(\dividend_tmp[29]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[2]_i_1 
       (.I0(\dividend0_reg_n_0_[1] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[1] ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[30]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[29] ),
        .O(\dividend_tmp[30]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[31]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[30] ),
        .O(\dividend_tmp[31]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[32]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[31] ),
        .O(\dividend_tmp[32]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[33]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[32] ),
        .O(\dividend_tmp[33]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[34]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[33] ),
        .O(\dividend_tmp[34]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[35]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[34] ),
        .O(\dividend_tmp[35]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[36]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[35] ),
        .O(\dividend_tmp[36]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[37]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[36] ),
        .O(\dividend_tmp[37]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[38]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[37] ),
        .O(\dividend_tmp[38]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[39]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[38] ),
        .O(\dividend_tmp[39]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[3]_i_1 
       (.I0(\dividend0_reg_n_0_[2] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[2] ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[40]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[39] ),
        .O(\dividend_tmp[40]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[41]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[40] ),
        .O(\dividend_tmp[41]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[42]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[41] ),
        .O(\dividend_tmp[42]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[43]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[42] ),
        .O(\dividend_tmp[43]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[44]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[43] ),
        .O(\dividend_tmp[44]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[45]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[44] ),
        .O(\dividend_tmp[45]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[46]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[45] ),
        .O(\dividend_tmp[46]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[47]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[46] ),
        .O(\dividend_tmp[47]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[48]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[47] ),
        .O(\dividend_tmp[48]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[49]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[48] ),
        .O(\dividend_tmp[49]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[4]_i_1 
       (.I0(\dividend0_reg_n_0_[3] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[3] ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[50]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[49] ),
        .O(\dividend_tmp[50]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[51]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[50] ),
        .O(\dividend_tmp[51]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[52]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[51] ),
        .O(\dividend_tmp[52]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[53]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[52] ),
        .O(\dividend_tmp[53]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[54]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[53] ),
        .O(\dividend_tmp[54]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[55]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[54] ),
        .O(\dividend_tmp[55]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[56]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[55] ),
        .O(\dividend_tmp[56]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[57]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[56] ),
        .O(\dividend_tmp[57]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[58]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[57] ),
        .O(\dividend_tmp[58]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[59]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[58] ),
        .O(\dividend_tmp[59]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[5]_i_1 
       (.I0(\dividend0_reg_n_0_[4] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[4] ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[60]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[59] ),
        .O(\dividend_tmp[60]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[61]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[60] ),
        .O(\dividend_tmp[61]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[62]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[61] ),
        .O(\dividend_tmp[62]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[63]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[62] ),
        .O(\dividend_tmp[63]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[6]_i_1 
       (.I0(\dividend0_reg_n_0_[5] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[5] ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[7]_i_1 
       (.I0(\dividend0_reg_n_0_[6] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[6] ),
        .O(\dividend_tmp[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[8]_i_1 
       (.I0(\dividend0_reg_n_0_[7] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[7] ),
        .O(\dividend_tmp[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \dividend_tmp[9]_i_1 
       (.I0(\dividend0_reg_n_0_[8] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[8] ),
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
  FDRE \dividend_tmp_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[17]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[17] ),
        .R(1'b0));
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
  FDRE \dividend_tmp_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[1]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[20]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[20] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[21]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[21] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[22]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[22] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[23]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[23] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[24]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[24] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[25]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[25] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[26]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[26] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[27]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[27] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[28]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[28] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[29]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[29] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[2]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[30]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[30] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[31]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[31] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[32] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[32]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[32] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[33] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[33]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[33] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[34] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[34]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[34] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[35] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[35]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[35] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[36] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[36]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[36] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[37] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[37]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[37] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[38] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[38]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[38] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[39] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[39]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[39] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[3]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[40] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[40]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[40] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[41] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[41]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[41] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[42] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[42]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[42] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[43] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[43]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[43] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[44] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[44]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[44] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[45] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[45]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[45] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[46] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[46]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[46] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[47] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[47]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[47] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[48] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[48]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[48] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[49] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[49]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[49] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[4]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[50] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[50]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[50] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[51] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[51]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[51] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[52] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[52]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[52] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[53] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[53]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[53] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[54] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[54]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[54] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[55] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[55]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[55] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[56] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[56]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[56] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[57] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[57]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[57] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[58] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[58]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[58] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[59] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[59]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[59] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[5]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[60] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[60]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[60] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[61] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[61]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[61] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[62] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[62]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[62] ),
        .R(1'b0));
  FDRE \dividend_tmp_reg[63] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\dividend_tmp[63]_i_1_n_0 ),
        .Q(\dividend_tmp_reg_n_0_[63] ),
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
  (* srl_bus_name = "inst/\urem_64s_17ns_8_68_seq_1_U3/fn1_urem_64s_17ns_8_68_seq_1_div_U/fn1_urem_64s_17ns_8_68_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\urem_64s_17ns_8_68_seq_1_U3/fn1_urem_64s_17ns_8_68_seq_1_div_U/fn1_urem_64s_17ns_8_68_seq_1_div_u_0/r_stage_reg[32]_srl32___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_30 " *) 
  SRLC32E \r_stage_reg[32]_srl32___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_30 
       (.A({1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\NLW_r_stage_reg[32]_srl32___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_30_Q_UNCONNECTED ),
        .Q31(\r_stage_reg[32]_srl32___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_30_n_1 ));
  (* srl_bus_name = "inst/\urem_64s_17ns_8_68_seq_1_U3/fn1_urem_64s_17ns_8_68_seq_1_div_U/fn1_urem_64s_17ns_8_68_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\urem_64s_17ns_8_68_seq_1_U3/fn1_urem_64s_17ns_8_68_seq_1_div_U/fn1_urem_64s_17ns_8_68_seq_1_div_u_0/r_stage_reg[62]_srl30___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_60 " *) 
  SRLC32E \r_stage_reg[62]_srl30___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_60 
       (.A({1'b1,1'b1,1'b1,1'b0,1'b1}),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg[32]_srl32___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_30_n_1 ),
        .Q(\r_stage_reg[62]_srl30___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_60_n_0 ),
        .Q31(\NLW_r_stage_reg[62]_srl30___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_60_Q31_UNCONNECTED ));
  FDRE \r_stage_reg[63]_urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_61 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[62]_srl30___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_60_n_0 ),
        .Q(\r_stage_reg[63]_urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_61_n_0 ),
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
       (.I0(\r_stage_reg[63]_urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_61_n_0 ),
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
        .Q(r_stage_reg_r_26_n_0),
        .R(ap_rst));
  FDRE r_stage_reg_r_27
       (.C(ap_clk),
        .CE(1'b1),
        .D(r_stage_reg_r_26_n_0),
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
  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \remd_tmp[0]_i_1 
       (.I0(\dividend0_reg_n_0_[15] ),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(\dividend_tmp_reg_n_0_[63] ),
        .I3(p_0_in),
        .I4(cal_tmp_carry_n_7),
        .O(\remd_tmp[0]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[10]_i_1 
       (.I0(remd_tmp[9]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_5),
        .O(\remd_tmp[10]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[11]_i_1 
       (.I0(remd_tmp[10]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
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
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__2_n_4),
        .O(\remd_tmp[15]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[16]_i_1 
       (.I0(remd_tmp[15]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__3_n_7),
        .O(\remd_tmp[16]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[17]_i_1 
       (.I0(remd_tmp[16]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__3_n_6),
        .O(\remd_tmp[17]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[18]_i_1 
       (.I0(remd_tmp[17]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
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
       (.I0(Q[0]),
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
       (.I0(Q[1]),
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
       (.I0(Q[2]),
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
       (.I0(Q[3]),
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
       (.I0(Q[4]),
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
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[8]_i_1 
       (.I0(Q[7]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_7),
        .O(\remd_tmp[8]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[9]_i_1 
       (.I0(remd_tmp[8]),
        .I1(\r_stage_reg[0]_rep_n_0 ),
        .I2(p_0_in),
        .I3(cal_tmp_carry__1_n_6),
        .O(\remd_tmp[9]_i_1_n_0 ));
  FDRE \remd_tmp_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[0]_i_1_n_0 ),
        .Q(Q[0]),
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
        .Q(Q[1]),
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
        .Q(Q[2]),
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
        .Q(Q[3]),
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
        .Q(Q[4]),
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
        .Q(Q[5]),
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
        .Q(Q[6]),
        .R(1'b0));
  FDRE \remd_tmp_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\remd_tmp[7]_i_1_n_0 ),
        .Q(Q[7]),
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

(* ORIG_REF_NAME = "fn1_urem_8ns_9ns_9_12_seq_1" *) 
module bd_0_hls_inst_0_fn1_urem_8ns_9ns_9_12_seq_1
   (done0,
    \remd_tmp_reg[7] ,
    ap_clk,
    ap_rst,
    \r_stage_reg[8] ,
    ap_start,
    Q,
    p,
    p_11,
    D);
  output done0;
  output [7:0]\remd_tmp_reg[7] ;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[8] ;
  input ap_start;
  input [0:0]Q;
  input [7:0]p;
  input [7:0]p_11;
  input [0:0]D;

  wire [0:0]D;
  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire done0;
  wire [7:0]p;
  wire [7:0]p_11;
  wire \r_stage_reg[8] ;
  wire [7:0]\remd_tmp_reg[7] ;

  bd_0_hls_inst_0_fn1_urem_8ns_9ns_9_12_seq_1_div fn1_urem_8ns_9ns_9_12_seq_1_div_U
       (.D(D),
        .Q(Q),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .done0(done0),
        .p(p),
        .p_11(p_11),
        .\r_stage_reg[8] (\r_stage_reg[8] ),
        .\remd_tmp_reg[7] (\remd_tmp_reg[7] ));
endmodule

(* ORIG_REF_NAME = "fn1_urem_8ns_9ns_9_12_seq_1_div" *) 
module bd_0_hls_inst_0_fn1_urem_8ns_9ns_9_12_seq_1_div
   (done0,
    \remd_tmp_reg[7] ,
    ap_clk,
    ap_rst,
    \r_stage_reg[8] ,
    ap_start,
    Q,
    p,
    p_11,
    D);
  output done0;
  output [7:0]\remd_tmp_reg[7] ;
  input ap_clk;
  input ap_rst;
  input \r_stage_reg[8] ;
  input ap_start;
  input [0:0]Q;
  input [7:0]p;
  input [7:0]p_11;
  input [0:0]D;

  wire [0:0]D;
  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst;
  wire ap_start;
  wire \dividend0_reg_n_0_[0] ;
  wire \dividend0_reg_n_0_[1] ;
  wire \dividend0_reg_n_0_[2] ;
  wire \dividend0_reg_n_0_[3] ;
  wire \dividend0_reg_n_0_[4] ;
  wire \dividend0_reg_n_0_[5] ;
  wire \dividend0_reg_n_0_[6] ;
  wire \dividend0_reg_n_0_[7] ;
  wire \divisor0[1]_i_1_n_0 ;
  wire \divisor0[4]_i_1_n_0 ;
  wire \divisor0[5]_i_1_n_0 ;
  wire \divisor0[8]_i_1_n_0 ;
  wire \divisor0[8]_i_2_n_0 ;
  wire \divisor0_reg_n_0_[0] ;
  wire \divisor0_reg_n_0_[1] ;
  wire \divisor0_reg_n_0_[2] ;
  wire \divisor0_reg_n_0_[3] ;
  wire \divisor0_reg_n_0_[4] ;
  wire \divisor0_reg_n_0_[5] ;
  wire \divisor0_reg_n_0_[6] ;
  wire \divisor0_reg_n_0_[7] ;
  wire \divisor0_reg_n_0_[8] ;
  wire done0;
  wire grp_fu_60_ap_start;
  wire [7:2]grp_fu_60_p1;
  wire [7:0]p;
  wire [7:0]p_11;
  wire \r_stage_reg[8] ;
  wire [7:0]\remd_tmp_reg[7] ;
  wire start0;

  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_11[0]),
        .Q(\dividend0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_11[1]),
        .Q(\dividend0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_11[2]),
        .Q(\dividend0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_11[3]),
        .Q(\dividend0_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_11[4]),
        .Q(\dividend0_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_11[5]),
        .Q(\dividend0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_11[6]),
        .Q(\dividend0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(p_11[7]),
        .Q(\dividend0_reg_n_0_[7] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \divisor0[1]_i_1 
       (.I0(p[0]),
        .I1(p[1]),
        .O(\divisor0[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'h1E)) 
    \divisor0[2]_i_1 
       (.I0(p[1]),
        .I1(p[0]),
        .I2(p[2]),
        .O(grp_fu_60_p1[2]));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT4 #(
    .INIT(16'h1FE0)) 
    \divisor0[3]_i_1 
       (.I0(p[0]),
        .I1(p[1]),
        .I2(p[2]),
        .I3(p[3]),
        .O(grp_fu_60_p1[3]));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT5 #(
    .INIT(32'hA80057FF)) 
    \divisor0[4]_i_1 
       (.I0(p[2]),
        .I1(p[1]),
        .I2(p[0]),
        .I3(p[3]),
        .I4(p[4]),
        .O(\divisor0[4]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hEEEAAAAA11155555)) 
    \divisor0[5]_i_1 
       (.I0(p[4]),
        .I1(p[3]),
        .I2(p[0]),
        .I3(p[1]),
        .I4(p[2]),
        .I5(p[5]),
        .O(\divisor0[5]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \divisor0[6]_i_1 
       (.I0(\divisor0[8]_i_2_n_0 ),
        .I1(p[6]),
        .O(grp_fu_60_p1[6]));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \divisor0[7]_i_1 
       (.I0(\divisor0[8]_i_2_n_0 ),
        .I1(p[6]),
        .I2(p[7]),
        .O(grp_fu_60_p1[7]));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'h8F)) 
    \divisor0[8]_i_1 
       (.I0(\divisor0[8]_i_2_n_0 ),
        .I1(p[6]),
        .I2(p[7]),
        .O(\divisor0[8]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFEEEAAAAA)) 
    \divisor0[8]_i_2 
       (.I0(p[4]),
        .I1(p[3]),
        .I2(p[0]),
        .I3(p[1]),
        .I4(p[2]),
        .I5(p[5]),
        .O(\divisor0[8]_i_2_n_0 ));
  FDRE \divisor0_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(D),
        .Q(\divisor0_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0[1]_i_1_n_0 ),
        .Q(\divisor0_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_60_p1[2]),
        .Q(\divisor0_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_60_p1[3]),
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
        .D(\divisor0[5]_i_1_n_0 ),
        .Q(\divisor0_reg_n_0_[5] ),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_60_p1[6]),
        .Q(\divisor0_reg_n_0_[6] ),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_60_p1[7]),
        .Q(\divisor0_reg_n_0_[7] ),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\divisor0[8]_i_1_n_0 ),
        .Q(\divisor0_reg_n_0_[8] ),
        .R(1'b0));
  bd_0_hls_inst_0_fn1_urem_8ns_9ns_9_12_seq_1_div_u fn1_urem_8ns_9ns_9_12_seq_1_div_u_0
       (.E(start0),
        .Q(\remd_tmp_reg[7] ),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .\dividend0_reg[7]_0 ({\dividend0_reg_n_0_[7] ,\dividend0_reg_n_0_[6] ,\dividend0_reg_n_0_[5] ,\dividend0_reg_n_0_[4] ,\dividend0_reg_n_0_[3] ,\dividend0_reg_n_0_[2] ,\dividend0_reg_n_0_[1] ,\dividend0_reg_n_0_[0] }),
        .\divisor0_reg[8]_0 ({\divisor0_reg_n_0_[8] ,\divisor0_reg_n_0_[7] ,\divisor0_reg_n_0_[6] ,\divisor0_reg_n_0_[5] ,\divisor0_reg_n_0_[4] ,\divisor0_reg_n_0_[3] ,\divisor0_reg_n_0_[2] ,\divisor0_reg_n_0_[1] ,\divisor0_reg_n_0_[0] }),
        .done0(done0),
        .\r_stage_reg[8]_0 (\r_stage_reg[8] ));
  LUT2 #(
    .INIT(4'h8)) 
    start0_i_1
       (.I0(ap_start),
        .I1(Q),
        .O(grp_fu_60_ap_start));
  FDRE #(
    .INIT(1'b0)) 
    start0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fu_60_ap_start),
        .Q(start0),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "fn1_urem_8ns_9ns_9_12_seq_1_div_u" *) 
module bd_0_hls_inst_0_fn1_urem_8ns_9ns_9_12_seq_1_div_u
   (done0,
    Q,
    ap_rst,
    E,
    ap_clk,
    \r_stage_reg[8]_0 ,
    \dividend0_reg[7]_0 ,
    \divisor0_reg[8]_0 );
  output done0;
  output [7:0]Q;
  input ap_rst;
  input [0:0]E;
  input ap_clk;
  input \r_stage_reg[8]_0 ;
  input [7:0]\dividend0_reg[7]_0 ;
  input [8:0]\divisor0_reg[8]_0 ;

  wire [0:0]E;
  wire [7:0]Q;
  wire ap_clk;
  wire ap_rst;
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
  wire cal_tmp_carry_i_5__0_n_0;
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
  wire [7:0]dividend0;
  wire [7:0]\dividend0_reg[7]_0 ;
  wire [7:0]dividend_tmp;
  wire \dividend_tmp[1]_i_1_n_0 ;
  wire \dividend_tmp[2]_i_1_n_0 ;
  wire \dividend_tmp[3]_i_1_n_0 ;
  wire \dividend_tmp[4]_i_1_n_0 ;
  wire \dividend_tmp[5]_i_1_n_0 ;
  wire \dividend_tmp[6]_i_1_n_0 ;
  wire \dividend_tmp[7]_i_1_n_0 ;
  wire [8:0]divisor0;
  wire [8:0]\divisor0_reg[8]_0 ;
  wire done0;
  wire [8:8]p_0_in;
  wire p_0_in_0;
  wire p_1_in0;
  wire [0:0]p_2_out;
  wire \r_stage_reg[6]_srl6___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_4_n_0 ;
  wire \r_stage_reg[7]_urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_5_n_0 ;
  wire \r_stage_reg[8]_0 ;
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
  wire [6:0]remd_tmp_mux;
  wire [3:1]NLW_cal_tmp_carry__1_CO_UNCONNECTED;
  wire [3:0]NLW_cal_tmp_carry__1_O_UNCONNECTED;

  CARRY4 cal_tmp_carry
       (.CI(1'b0),
        .CO({cal_tmp_carry_n_0,cal_tmp_carry_n_1,cal_tmp_carry_n_2,cal_tmp_carry_n_3}),
        .CYINIT(1'b1),
        .DI({remd_tmp_mux[2:0],p_1_in0}),
        .O({cal_tmp_carry_n_4,cal_tmp_carry_n_5,cal_tmp_carry_n_6,cal_tmp_carry_n_7}),
        .S({cal_tmp_carry_i_5__0_n_0,cal_tmp_carry_i_6_n_0,cal_tmp_carry_i_7_n_0,cal_tmp_carry_i_8_n_0}));
  CARRY4 cal_tmp_carry__0
       (.CI(cal_tmp_carry_n_0),
        .CO({cal_tmp_carry__0_n_0,cal_tmp_carry__0_n_1,cal_tmp_carry__0_n_2,cal_tmp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI(remd_tmp_mux[6:3]),
        .O({cal_tmp_carry__0_n_4,cal_tmp_carry__0_n_5,cal_tmp_carry__0_n_6,cal_tmp_carry__0_n_7}),
        .S({cal_tmp_carry__0_i_5__0_n_0,cal_tmp_carry__0_i_6_n_0,cal_tmp_carry__0_i_7_n_0,cal_tmp_carry__0_i_8_n_0}));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_1
       (.I0(Q[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[6]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_2
       (.I0(Q[5]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[5]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_3
       (.I0(Q[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[4]));
  LUT2 #(
    .INIT(4'h2)) 
    cal_tmp_carry__0_i_4
       (.I0(Q[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .O(remd_tmp_mux[3]));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_5__0
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[6]),
        .I2(divisor0[7]),
        .O(cal_tmp_carry__0_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[5]),
        .I2(divisor0[6]),
        .O(cal_tmp_carry__0_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_7
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[4]),
        .I2(divisor0[5]),
        .O(cal_tmp_carry__0_i_7_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry__0_i_8
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[3]),
        .I2(divisor0[4]),
        .O(cal_tmp_carry__0_i_8_n_0));
  CARRY4 cal_tmp_carry__1
       (.CI(cal_tmp_carry__0_n_0),
        .CO({NLW_cal_tmp_carry__1_CO_UNCONNECTED[3:1],p_2_out}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_cal_tmp_carry__1_O_UNCONNECTED[3:2],p_0_in_0,NLW_cal_tmp_carry__1_O_UNCONNECTED[0]}),
        .S({1'b0,1'b0,1'b1,p_0_in}));
  LUT1 #(
    .INIT(2'h1)) 
    cal_tmp_carry__1_i_1
       (.I0(divisor0[8]),
        .O(p_0_in));
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
    .INIT(8'hAC)) 
    cal_tmp_carry_i_4
       (.I0(dividend0[7]),
        .I1(dividend_tmp[7]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(p_1_in0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_5__0
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[2]),
        .I2(divisor0[3]),
        .O(cal_tmp_carry_i_5__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_6
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[1]),
        .I2(divisor0[2]),
        .O(cal_tmp_carry_i_6_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    cal_tmp_carry_i_7
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(Q[0]),
        .I2(divisor0[1]),
        .O(cal_tmp_carry_i_7_n_0));
  LUT4 #(
    .INIT(16'hE41B)) 
    cal_tmp_carry_i_8
       (.I0(\r_stage_reg_n_0_[0] ),
        .I1(dividend_tmp[7]),
        .I2(dividend0[7]),
        .I3(divisor0[0]),
        .O(cal_tmp_carry_i_8_n_0));
  FDRE \dividend0_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [0]),
        .Q(dividend0[0]),
        .R(1'b0));
  FDRE \dividend0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [1]),
        .Q(dividend0[1]),
        .R(1'b0));
  FDRE \dividend0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [2]),
        .Q(dividend0[2]),
        .R(1'b0));
  FDRE \dividend0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [3]),
        .Q(dividend0[3]),
        .R(1'b0));
  FDRE \dividend0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [4]),
        .Q(dividend0[4]),
        .R(1'b0));
  FDRE \dividend0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [5]),
        .Q(dividend0[5]),
        .R(1'b0));
  FDRE \dividend0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [6]),
        .Q(dividend0[6]),
        .R(1'b0));
  FDRE \dividend0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\dividend0_reg[7]_0 [7]),
        .Q(dividend0[7]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[1]_i_1 
       (.I0(dividend0[0]),
        .I1(dividend_tmp[0]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[2]_i_1 
       (.I0(dividend0[1]),
        .I1(dividend_tmp[1]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[3]_i_1 
       (.I0(dividend0[2]),
        .I1(dividend_tmp[2]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[4]_i_1 
       (.I0(dividend0[3]),
        .I1(dividend_tmp[3]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[5]_i_1 
       (.I0(dividend0[4]),
        .I1(dividend_tmp[4]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[6]_i_1 
       (.I0(dividend0[5]),
        .I1(dividend_tmp[5]),
        .I2(\r_stage_reg_n_0_[0] ),
        .O(\dividend_tmp[6]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hAC)) 
    \dividend_tmp[7]_i_1 
       (.I0(dividend0[6]),
        .I1(dividend_tmp[6]),
        .I2(\r_stage_reg_n_0_[0] ),
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
        .D(\divisor0_reg[8]_0 [0]),
        .Q(divisor0[0]),
        .R(1'b0));
  FDRE \divisor0_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[8]_0 [1]),
        .Q(divisor0[1]),
        .R(1'b0));
  FDRE \divisor0_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[8]_0 [2]),
        .Q(divisor0[2]),
        .R(1'b0));
  FDRE \divisor0_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[8]_0 [3]),
        .Q(divisor0[3]),
        .R(1'b0));
  FDRE \divisor0_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[8]_0 [4]),
        .Q(divisor0[4]),
        .R(1'b0));
  FDRE \divisor0_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[8]_0 [5]),
        .Q(divisor0[5]),
        .R(1'b0));
  FDRE \divisor0_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[8]_0 [6]),
        .Q(divisor0[6]),
        .R(1'b0));
  FDRE \divisor0_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[8]_0 [7]),
        .Q(divisor0[7]),
        .R(1'b0));
  FDRE \divisor0_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(\divisor0_reg[8]_0 [8]),
        .Q(divisor0[8]),
        .R(1'b0));
  FDRE \r_stage_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(E),
        .Q(\r_stage_reg_n_0_[0] ),
        .R(ap_rst));
  (* srl_bus_name = "inst/\urem_8ns_9ns_9_12_seq_1_U1/fn1_urem_8ns_9ns_9_12_seq_1_div_U/fn1_urem_8ns_9ns_9_12_seq_1_div_u_0/r_stage_reg " *) 
  (* srl_name = "inst/\urem_8ns_9ns_9_12_seq_1_U1/fn1_urem_8ns_9ns_9_12_seq_1_div_U/fn1_urem_8ns_9ns_9_12_seq_1_div_u_0/r_stage_reg[6]_srl6___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_4 " *) 
  SRL16E \r_stage_reg[6]_srl6___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_4 
       (.A0(1'b1),
        .A1(1'b0),
        .A2(1'b1),
        .A3(1'b0),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(\r_stage_reg_n_0_[0] ),
        .Q(\r_stage_reg[6]_srl6___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_4_n_0 ));
  FDRE \r_stage_reg[7]_urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_5 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\r_stage_reg[6]_srl6___urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_4_n_0 ),
        .Q(\r_stage_reg[7]_urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_5_n_0 ),
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
       (.I0(\r_stage_reg[7]_urem_64s_17ns_8_68_seq_1_U3_fn1_urem_64s_17ns_8_68_seq_1_div_U_fn1_urem_64s_17ns_8_68_seq_1_div_u_0_r_stage_reg_r_5_n_0 ),
        .I1(\r_stage_reg[8]_0 ),
        .O(r_stage_reg_gate_n_0));
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \remd_tmp[0]_i_1 
       (.I0(dividend0[7]),
        .I1(dividend_tmp[7]),
        .I2(\r_stage_reg_n_0_[0] ),
        .I3(p_0_in_0),
        .I4(cal_tmp_carry_n_7),
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
       (.I0(Q[3]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_7),
        .O(\remd_tmp[4]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[5]_i_1 
       (.I0(Q[4]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_6),
        .O(\remd_tmp[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[6]_i_1 
       (.I0(Q[5]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
        .I3(cal_tmp_carry__0_n_5),
        .O(\remd_tmp[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \remd_tmp[7]_i_1 
       (.I0(Q[6]),
        .I1(\r_stage_reg_n_0_[0] ),
        .I2(p_0_in_0),
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
