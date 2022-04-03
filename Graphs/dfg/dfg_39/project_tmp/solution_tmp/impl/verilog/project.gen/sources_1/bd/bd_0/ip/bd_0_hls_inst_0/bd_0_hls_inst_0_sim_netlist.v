// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
// Date        : Wed Apr 14 14:39:54 2021
// Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/nanwu/GNN_DFG/bb/dfg_39/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.v
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
   (ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    ap_return,
    p,
    p_11,
    p_13,
    p_15,
    p_19);
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 ap_return DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef" *) output [15:0]ap_return;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p, LAYERED_METADATA undef" *) input [31:0]p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_11 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_11, LAYERED_METADATA undef" *) input [15:0]p_11;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_13 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_13, LAYERED_METADATA undef" *) input [31:0]p_13;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_15 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_15, LAYERED_METADATA undef" *) input [31:0]p_15;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 p_19 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME p_19, LAYERED_METADATA undef" *) input [15:0]p_19;

  wire \<const1> ;
  wire ap_done;
  wire ap_ready;
  wire [15:0]\^ap_return ;
  wire ap_start;
  wire [31:0]p;
  wire NLW_inst_ap_idle_UNCONNECTED;
  wire [14:1]NLW_inst_ap_return_UNCONNECTED;

  assign ap_idle = \<const1> ;
  assign ap_return[15] = \^ap_return [15];
  assign ap_return[14] = \<const1> ;
  assign ap_return[13] = \^ap_return [13];
  assign ap_return[12] = \<const1> ;
  assign ap_return[11] = \<const1> ;
  assign ap_return[10] = \<const1> ;
  assign ap_return[9:7] = \^ap_return [9:7];
  assign ap_return[6] = \<const1> ;
  assign ap_return[5] = \<const1> ;
  assign ap_return[4] = \<const1> ;
  assign ap_return[3] = \<const1> ;
  assign ap_return[2] = \<const1> ;
  assign ap_return[1] = \<const1> ;
  assign ap_return[0] = \^ap_return [0];
  VCC VCC
       (.P(\<const1> ));
  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  bd_0_hls_inst_0_fn1 inst
       (.ap_done(ap_done),
        .ap_idle(NLW_inst_ap_idle_UNCONNECTED),
        .ap_ready(ap_ready),
        .ap_return(\^ap_return ),
        .ap_start(ap_start),
        .p(p),
        .p_11({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_13({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_15({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .p_19({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}));
endmodule

(* ORIG_REF_NAME = "fn1" *) (* hls_module = "yes" *) 
module bd_0_hls_inst_0_fn1
   (ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    p,
    p_11,
    p_13,
    p_15,
    p_19,
    ap_return);
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [31:0]p;
  input [15:0]p_11;
  input [31:0]p_13;
  input [31:0]p_15;
  input [15:0]p_19;
  output [15:0]ap_return;

  wire \<const0> ;
  wire [15:0]\^ap_return ;
  wire \ap_return[0]_INST_0_i_1_n_0 ;
  wire \ap_return[0]_INST_0_i_2_n_0 ;
  wire \ap_return[0]_INST_0_i_3_n_0 ;
  wire \ap_return[0]_INST_0_i_4_n_0 ;
  wire \ap_return[0]_INST_0_i_5_n_0 ;
  wire \ap_return[0]_INST_0_i_6_n_0 ;
  wire ap_start;
  wire [31:0]p;

  assign ap_done = ap_start;
  assign ap_idle = \<const0> ;
  assign ap_ready = ap_start;
  assign ap_return[15] = \^ap_return [15];
  assign ap_return[14] = \<const0> ;
  assign ap_return[13] = \^ap_return [13];
  assign ap_return[12] = \<const0> ;
  assign ap_return[11] = \<const0> ;
  assign ap_return[10] = \<const0> ;
  assign ap_return[9:7] = \^ap_return [9:7];
  assign ap_return[6] = \<const0> ;
  assign ap_return[5] = \<const0> ;
  assign ap_return[4] = \<const0> ;
  assign ap_return[3] = \<const0> ;
  assign ap_return[2] = \<const0> ;
  assign ap_return[1] = \<const0> ;
  assign ap_return[0] = \^ap_return [0];
  GND GND
       (.G(\<const0> ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \ap_return[0]_INST_0 
       (.I0(\ap_return[0]_INST_0_i_1_n_0 ),
        .I1(\ap_return[0]_INST_0_i_2_n_0 ),
        .I2(\ap_return[0]_INST_0_i_3_n_0 ),
        .I3(\ap_return[0]_INST_0_i_4_n_0 ),
        .I4(\ap_return[0]_INST_0_i_5_n_0 ),
        .I5(\ap_return[0]_INST_0_i_6_n_0 ),
        .O(\^ap_return [0]));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \ap_return[0]_INST_0_i_1 
       (.I0(p[12]),
        .I1(p[13]),
        .I2(p[10]),
        .I3(p[11]),
        .I4(p[9]),
        .I5(p[8]),
        .O(\ap_return[0]_INST_0_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \ap_return[0]_INST_0_i_2 
       (.I0(p[18]),
        .I1(p[19]),
        .I2(p[16]),
        .I3(p[17]),
        .I4(p[15]),
        .I5(p[14]),
        .O(\ap_return[0]_INST_0_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \ap_return[0]_INST_0_i_3 
       (.I0(p[30]),
        .I1(p[31]),
        .I2(p[28]),
        .I3(p[29]),
        .I4(p[27]),
        .I5(p[26]),
        .O(\ap_return[0]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \ap_return[0]_INST_0_i_4 
       (.I0(p[24]),
        .I1(p[25]),
        .I2(p[22]),
        .I3(p[23]),
        .I4(p[21]),
        .I5(p[20]),
        .O(\ap_return[0]_INST_0_i_4_n_0 ));
  LUT2 #(
    .INIT(4'hE)) 
    \ap_return[0]_INST_0_i_5 
       (.I0(p[0]),
        .I1(p[1]),
        .O(\ap_return[0]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \ap_return[0]_INST_0_i_6 
       (.I0(p[6]),
        .I1(p[7]),
        .I2(p[4]),
        .I3(p[5]),
        .I4(p[3]),
        .I5(p[2]),
        .O(\ap_return[0]_INST_0_i_6_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[13]_INST_0 
       (.I0(p[13]),
        .O(\^ap_return [13]));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[15]_INST_0 
       (.I0(p[15]),
        .O(\^ap_return [15]));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[7]_INST_0 
       (.I0(p[7]),
        .O(\^ap_return [7]));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[8]_INST_0 
       (.I0(p[8]),
        .O(\^ap_return [8]));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_return[9]_INST_0 
       (.I0(p[9]),
        .O(\^ap_return [9]));
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
