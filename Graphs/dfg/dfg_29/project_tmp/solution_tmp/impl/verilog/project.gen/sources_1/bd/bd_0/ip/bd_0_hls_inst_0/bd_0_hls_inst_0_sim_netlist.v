// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Tue Apr 13 00:13:39 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/nanwu/GNN_DFG/bb/dfg_29/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.v
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
    p_9);
  output p_ce0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [31:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_address0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_address0, LAYERED_METADATA undef" *) output [1:0]p_address0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_q0, LAYERED_METADATA undef" *) input [7:0]p_q0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_9 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_9, LAYERED_METADATA undef" *) input [63:0]p_9;

  wire \<const0> ;
  wire \<const1> ;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire [6:1]\^ap_return ;
  wire ap_rst;
  wire ap_start;
  wire p_ce0;
  wire [7:0]p_q0;
  wire [31:0]NLW_inst_ap_return_UNCONNECTED;
  wire [1:0]NLW_inst_p_address0_UNCONNECTED;

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
  assign ap_return[16] = \<const1> ;
  assign ap_return[15] = \<const1> ;
  assign ap_return[14] = \<const1> ;
  assign ap_return[13] = \<const1> ;
  assign ap_return[12] = \<const1> ;
  assign ap_return[11] = \<const1> ;
  assign ap_return[10] = \<const0> ;
  assign ap_return[9] = \<const0> ;
  assign ap_return[8] = \<const0> ;
  assign ap_return[7] = \<const0> ;
  assign ap_return[6:1] = \^ap_return [6:1];
  assign ap_return[0] = \<const0> ;
  assign p_address0[1] = \<const0> ;
  assign p_address0[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  VCC VCC
       (.P(\<const1> ));
  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "2'b01" *) 
  (* ap_ST_fsm_state2 = "2'b10" *) 
  bd_0_hls_inst_0_fn1 inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_return({NLW_inst_ap_return_UNCONNECTED[31:7],\^ap_return ,NLW_inst_ap_return_UNCONNECTED[0]}),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .p_9({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_address0(NLW_inst_p_address0_UNCONNECTED[1:0]),
        .p_ce0(p_ce0),
        .p_q0({1'b0,1'b0,p_q0[5:0]}));
endmodule

(* ORIG_REF_NAME = "fn1" *) (* ap_ST_fsm_state1 = "2'b01" *) (* ap_ST_fsm_state2 = "2'b10" *) 
(* hls_module = "yes" *) 
module bd_0_hls_inst_0_fn1
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p_address0,
    p_ce0,
    p_q0,
    p_9,
    ap_return);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [1:0]p_address0;
  output p_ce0;
  input [7:0]p_q0;
  input [63:0]p_9;
  output [31:0]ap_return;

  wire \<const0> ;
  wire \ap_CS_fsm[0]_i_1_n_0 ;
  wire \ap_CS_fsm[1]_i_1_n_0 ;
  wire \ap_CS_fsm_reg_n_0_[0] ;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire [6:1]\^ap_return ;
  wire ap_rst;
  wire ap_start;
  wire p_ce0;
  wire [7:0]p_q0;

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
  assign ap_return[6:1] = \^ap_return [6:1];
  assign ap_return[0] = \<const0> ;
  assign p_address0[1] = \<const0> ;
  assign p_address0[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hF7)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(\ap_CS_fsm_reg_n_0_[0] ),
        .I1(ap_start),
        .I2(ap_rst),
        .O(\ap_CS_fsm[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h0040)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(ap_done),
        .I1(ap_start),
        .I2(\ap_CS_fsm_reg_n_0_[0] ),
        .I3(ap_rst),
        .O(\ap_CS_fsm[1]_i_1_n_0 ));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b1)) 
    \ap_CS_fsm_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm[0]_i_1_n_0 ),
        .Q(\ap_CS_fsm_reg_n_0_[0] ),
        .R(1'b0));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm[1]_i_1_n_0 ),
        .Q(ap_done),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(\ap_CS_fsm_reg_n_0_[0] ),
        .I1(ap_start),
        .O(ap_idle));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \ap_return[1]_INST_0 
       (.I0(p_q0[1]),
        .I1(p_q0[0]),
        .O(\^ap_return [1]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hA9)) 
    \ap_return[2]_INST_0 
       (.I0(p_q0[2]),
        .I1(p_q0[1]),
        .I2(p_q0[0]),
        .O(\^ap_return [2]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h699A)) 
    \ap_return[3]_INST_0 
       (.I0(p_q0[3]),
        .I1(p_q0[2]),
        .I2(p_q0[0]),
        .I3(p_q0[1]),
        .O(\^ap_return [3]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h95555995)) 
    \ap_return[4]_INST_0 
       (.I0(p_q0[4]),
        .I1(p_q0[3]),
        .I2(p_q0[1]),
        .I3(p_q0[0]),
        .I4(p_q0[2]),
        .O(\^ap_return [4]));
  LUT6 #(
    .INIT(64'hAAAAAAAA96655555)) 
    \ap_return[5]_INST_0 
       (.I0(p_q0[5]),
        .I1(p_q0[2]),
        .I2(p_q0[0]),
        .I3(p_q0[1]),
        .I4(p_q0[3]),
        .I5(p_q0[4]),
        .O(\^ap_return [5]));
  LUT6 #(
    .INIT(64'h0000000001100000)) 
    \ap_return[6]_INST_0 
       (.I0(p_q0[5]),
        .I1(p_q0[2]),
        .I2(p_q0[0]),
        .I3(p_q0[1]),
        .I4(p_q0[3]),
        .I5(p_q0[4]),
        .O(\^ap_return [6]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT2 #(
    .INIT(4'h8)) 
    p_ce0_INST_0
       (.I0(ap_start),
        .I1(\ap_CS_fsm_reg_n_0_[0] ),
        .O(p_ce0));
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
