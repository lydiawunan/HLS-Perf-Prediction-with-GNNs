-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Wed Apr 28 23:38:34 2021
-- Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
-- Command     : write_vhdl -force -mode funcsim
--               /home/nanwu/GNN_DFG/bb/dfg_93/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1 is
  port (
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_9 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    p_13_address0 : out STD_LOGIC_VECTOR ( 1 downto 0 );
    p_13_ce0 : out STD_LOGIC;
    p_13_we0 : out STD_LOGIC;
    p_13_d0 : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_13_q0 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_13_address1 : out STD_LOGIC_VECTOR ( 1 downto 0 );
    p_13_ce1 : out STD_LOGIC;
    p_13_we1 : out STD_LOGIC;
    p_13_d1 : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_13_q1 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    ap_return : out STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1 : entity is "fn1";
end bd_0_hls_inst_0_fn1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1 is
  signal \<const0>\ : STD_LOGIC;
  signal \^ap_start\ : STD_LOGIC;
begin
  \^ap_start\ <= ap_start;
  ap_done <= \^ap_start\;
  ap_idle <= \<const0>\;
  ap_ready <= \^ap_start\;
  ap_return(15) <= \<const0>\;
  ap_return(14) <= \<const0>\;
  ap_return(13) <= \<const0>\;
  ap_return(12) <= \<const0>\;
  ap_return(11) <= \<const0>\;
  ap_return(10) <= \<const0>\;
  ap_return(9) <= \<const0>\;
  ap_return(8) <= \<const0>\;
  ap_return(7) <= \<const0>\;
  ap_return(6) <= \<const0>\;
  ap_return(5) <= \<const0>\;
  ap_return(4) <= \<const0>\;
  ap_return(3) <= \<const0>\;
  ap_return(2) <= \<const0>\;
  ap_return(1) <= \<const0>\;
  ap_return(0) <= \<const0>\;
  p_13_address0(1) <= \<const0>\;
  p_13_address0(0) <= \<const0>\;
  p_13_address1(1) <= \<const0>\;
  p_13_address1(0) <= \<const0>\;
  p_13_ce0 <= \<const0>\;
  p_13_ce1 <= \<const0>\;
  p_13_d0(63) <= \<const0>\;
  p_13_d0(62) <= \<const0>\;
  p_13_d0(61) <= \<const0>\;
  p_13_d0(60) <= \<const0>\;
  p_13_d0(59) <= \<const0>\;
  p_13_d0(58) <= \<const0>\;
  p_13_d0(57) <= \<const0>\;
  p_13_d0(56) <= \<const0>\;
  p_13_d0(55) <= \<const0>\;
  p_13_d0(54) <= \<const0>\;
  p_13_d0(53) <= \<const0>\;
  p_13_d0(52) <= \<const0>\;
  p_13_d0(51) <= \<const0>\;
  p_13_d0(50) <= \<const0>\;
  p_13_d0(49) <= \<const0>\;
  p_13_d0(48) <= \<const0>\;
  p_13_d0(47) <= \<const0>\;
  p_13_d0(46) <= \<const0>\;
  p_13_d0(45) <= \<const0>\;
  p_13_d0(44) <= \<const0>\;
  p_13_d0(43) <= \<const0>\;
  p_13_d0(42) <= \<const0>\;
  p_13_d0(41) <= \<const0>\;
  p_13_d0(40) <= \<const0>\;
  p_13_d0(39) <= \<const0>\;
  p_13_d0(38) <= \<const0>\;
  p_13_d0(37) <= \<const0>\;
  p_13_d0(36) <= \<const0>\;
  p_13_d0(35) <= \<const0>\;
  p_13_d0(34) <= \<const0>\;
  p_13_d0(33) <= \<const0>\;
  p_13_d0(32) <= \<const0>\;
  p_13_d0(31) <= \<const0>\;
  p_13_d0(30) <= \<const0>\;
  p_13_d0(29) <= \<const0>\;
  p_13_d0(28) <= \<const0>\;
  p_13_d0(27) <= \<const0>\;
  p_13_d0(26) <= \<const0>\;
  p_13_d0(25) <= \<const0>\;
  p_13_d0(24) <= \<const0>\;
  p_13_d0(23) <= \<const0>\;
  p_13_d0(22) <= \<const0>\;
  p_13_d0(21) <= \<const0>\;
  p_13_d0(20) <= \<const0>\;
  p_13_d0(19) <= \<const0>\;
  p_13_d0(18) <= \<const0>\;
  p_13_d0(17) <= \<const0>\;
  p_13_d0(16) <= \<const0>\;
  p_13_d0(15) <= \<const0>\;
  p_13_d0(14) <= \<const0>\;
  p_13_d0(13) <= \<const0>\;
  p_13_d0(12) <= \<const0>\;
  p_13_d0(11) <= \<const0>\;
  p_13_d0(10) <= \<const0>\;
  p_13_d0(9) <= \<const0>\;
  p_13_d0(8) <= \<const0>\;
  p_13_d0(7) <= \<const0>\;
  p_13_d0(6) <= \<const0>\;
  p_13_d0(5) <= \<const0>\;
  p_13_d0(4) <= \<const0>\;
  p_13_d0(3) <= \<const0>\;
  p_13_d0(2) <= \<const0>\;
  p_13_d0(1) <= \<const0>\;
  p_13_d0(0) <= \<const0>\;
  p_13_d1(63) <= \<const0>\;
  p_13_d1(62) <= \<const0>\;
  p_13_d1(61) <= \<const0>\;
  p_13_d1(60) <= \<const0>\;
  p_13_d1(59) <= \<const0>\;
  p_13_d1(58) <= \<const0>\;
  p_13_d1(57) <= \<const0>\;
  p_13_d1(56) <= \<const0>\;
  p_13_d1(55) <= \<const0>\;
  p_13_d1(54) <= \<const0>\;
  p_13_d1(53) <= \<const0>\;
  p_13_d1(52) <= \<const0>\;
  p_13_d1(51) <= \<const0>\;
  p_13_d1(50) <= \<const0>\;
  p_13_d1(49) <= \<const0>\;
  p_13_d1(48) <= \<const0>\;
  p_13_d1(47) <= \<const0>\;
  p_13_d1(46) <= \<const0>\;
  p_13_d1(45) <= \<const0>\;
  p_13_d1(44) <= \<const0>\;
  p_13_d1(43) <= \<const0>\;
  p_13_d1(42) <= \<const0>\;
  p_13_d1(41) <= \<const0>\;
  p_13_d1(40) <= \<const0>\;
  p_13_d1(39) <= \<const0>\;
  p_13_d1(38) <= \<const0>\;
  p_13_d1(37) <= \<const0>\;
  p_13_d1(36) <= \<const0>\;
  p_13_d1(35) <= \<const0>\;
  p_13_d1(34) <= \<const0>\;
  p_13_d1(33) <= \<const0>\;
  p_13_d1(32) <= \<const0>\;
  p_13_d1(31) <= \<const0>\;
  p_13_d1(30) <= \<const0>\;
  p_13_d1(29) <= \<const0>\;
  p_13_d1(28) <= \<const0>\;
  p_13_d1(27) <= \<const0>\;
  p_13_d1(26) <= \<const0>\;
  p_13_d1(25) <= \<const0>\;
  p_13_d1(24) <= \<const0>\;
  p_13_d1(23) <= \<const0>\;
  p_13_d1(22) <= \<const0>\;
  p_13_d1(21) <= \<const0>\;
  p_13_d1(20) <= \<const0>\;
  p_13_d1(19) <= \<const0>\;
  p_13_d1(18) <= \<const0>\;
  p_13_d1(17) <= \<const0>\;
  p_13_d1(16) <= \<const0>\;
  p_13_d1(15) <= \<const0>\;
  p_13_d1(14) <= \<const0>\;
  p_13_d1(13) <= \<const0>\;
  p_13_d1(12) <= \<const0>\;
  p_13_d1(11) <= \<const0>\;
  p_13_d1(10) <= \<const0>\;
  p_13_d1(9) <= \<const0>\;
  p_13_d1(8) <= \<const0>\;
  p_13_d1(7) <= \<const0>\;
  p_13_d1(6) <= \<const0>\;
  p_13_d1(5) <= \<const0>\;
  p_13_d1(4) <= \<const0>\;
  p_13_d1(3) <= \<const0>\;
  p_13_d1(2) <= \<const0>\;
  p_13_d1(1) <= \<const0>\;
  p_13_d1(0) <= \<const0>\;
  p_13_we0 <= \<const0>\;
  p_13_we1 <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0 is
  port (
    p_13_ce0 : out STD_LOGIC;
    p_13_we0 : out STD_LOGIC;
    p_13_ce1 : out STD_LOGIC;
    p_13_we1 : out STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    ap_return : out STD_LOGIC_VECTOR ( 15 downto 0 );
    p : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_9 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    p_13_address0 : out STD_LOGIC_VECTOR ( 1 downto 0 );
    p_13_d0 : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_13_q0 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_13_address1 : out STD_LOGIC_VECTOR ( 1 downto 0 );
    p_13_d1 : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_13_q1 : in STD_LOGIC_VECTOR ( 63 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of bd_0_hls_inst_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of bd_0_hls_inst_0 : entity is "bd_0_hls_inst_0,fn1,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of bd_0_hls_inst_0 : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of bd_0_hls_inst_0 : entity is "HLS";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of bd_0_hls_inst_0 : entity is "fn1,Vivado 2020.2";
  attribute hls_module : string;
  attribute hls_module of bd_0_hls_inst_0 : entity is "yes";
end bd_0_hls_inst_0;

architecture STRUCTURE of bd_0_hls_inst_0 is
  signal \<const0>\ : STD_LOGIC;
  signal \<const1>\ : STD_LOGIC;
  signal NLW_inst_ap_idle_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_p_13_ce0_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_p_13_ce1_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_p_13_we0_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_p_13_we1_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_ap_return_UNCONNECTED : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal NLW_inst_p_13_address0_UNCONNECTED : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal NLW_inst_p_13_address1_UNCONNECTED : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal NLW_inst_p_13_d0_UNCONNECTED : STD_LOGIC_VECTOR ( 63 downto 0 );
  signal NLW_inst_p_13_d1_UNCONNECTED : STD_LOGIC_VECTOR ( 63 downto 0 );
  attribute SDX_KERNEL : string;
  attribute SDX_KERNEL of inst : label is "true";
  attribute SDX_KERNEL_SYNTH_INST : string;
  attribute SDX_KERNEL_SYNTH_INST of inst : label is "inst";
  attribute SDX_KERNEL_TYPE : string;
  attribute SDX_KERNEL_TYPE of inst : label is "hls";
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of ap_done : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done";
  attribute X_INTERFACE_INFO of ap_idle : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle";
  attribute X_INTERFACE_INFO of ap_ready : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready";
  attribute X_INTERFACE_INFO of ap_start : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start";
  attribute X_INTERFACE_INFO of ap_return : signal is "xilinx.com:signal:data:1.0 ap_return DATA";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of ap_return : signal is "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p : signal is "xilinx.com:signal:data:1.0 p DATA";
  attribute X_INTERFACE_PARAMETER of p : signal is "XIL_INTERFACENAME p, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_13_address0 : signal is "xilinx.com:signal:data:1.0 p_13_address0 DATA";
  attribute X_INTERFACE_PARAMETER of p_13_address0 : signal is "XIL_INTERFACENAME p_13_address0, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_13_address1 : signal is "xilinx.com:signal:data:1.0 p_13_address1 DATA";
  attribute X_INTERFACE_PARAMETER of p_13_address1 : signal is "XIL_INTERFACENAME p_13_address1, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_13_d0 : signal is "xilinx.com:signal:data:1.0 p_13_d0 DATA";
  attribute X_INTERFACE_PARAMETER of p_13_d0 : signal is "XIL_INTERFACENAME p_13_d0, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_13_d1 : signal is "xilinx.com:signal:data:1.0 p_13_d1 DATA";
  attribute X_INTERFACE_PARAMETER of p_13_d1 : signal is "XIL_INTERFACENAME p_13_d1, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_13_q0 : signal is "xilinx.com:signal:data:1.0 p_13_q0 DATA";
  attribute X_INTERFACE_PARAMETER of p_13_q0 : signal is "XIL_INTERFACENAME p_13_q0, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_13_q1 : signal is "xilinx.com:signal:data:1.0 p_13_q1 DATA";
  attribute X_INTERFACE_PARAMETER of p_13_q1 : signal is "XIL_INTERFACENAME p_13_q1, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_9 : signal is "xilinx.com:signal:data:1.0 p_9 DATA";
  attribute X_INTERFACE_PARAMETER of p_9 : signal is "XIL_INTERFACENAME p_9, LAYERED_METADATA undef";
begin
  ap_idle <= \<const1>\;
  ap_return(15) <= \<const1>\;
  ap_return(14) <= \<const1>\;
  ap_return(13) <= \<const1>\;
  ap_return(12) <= \<const1>\;
  ap_return(11) <= \<const1>\;
  ap_return(10) <= \<const1>\;
  ap_return(9) <= \<const1>\;
  ap_return(8) <= \<const1>\;
  ap_return(7) <= \<const1>\;
  ap_return(6) <= \<const1>\;
  ap_return(5) <= \<const0>\;
  ap_return(4) <= \<const1>\;
  ap_return(3) <= \<const0>\;
  ap_return(2) <= \<const1>\;
  ap_return(1) <= \<const1>\;
  ap_return(0) <= \<const1>\;
  p_13_address0(1) <= \<const0>\;
  p_13_address0(0) <= \<const0>\;
  p_13_address1(1) <= \<const0>\;
  p_13_address1(0) <= \<const0>\;
  p_13_ce0 <= \<const0>\;
  p_13_ce1 <= \<const0>\;
  p_13_d0(63) <= \<const0>\;
  p_13_d0(62) <= \<const0>\;
  p_13_d0(61) <= \<const0>\;
  p_13_d0(60) <= \<const0>\;
  p_13_d0(59) <= \<const0>\;
  p_13_d0(58) <= \<const0>\;
  p_13_d0(57) <= \<const0>\;
  p_13_d0(56) <= \<const0>\;
  p_13_d0(55) <= \<const0>\;
  p_13_d0(54) <= \<const0>\;
  p_13_d0(53) <= \<const0>\;
  p_13_d0(52) <= \<const0>\;
  p_13_d0(51) <= \<const0>\;
  p_13_d0(50) <= \<const0>\;
  p_13_d0(49) <= \<const0>\;
  p_13_d0(48) <= \<const0>\;
  p_13_d0(47) <= \<const0>\;
  p_13_d0(46) <= \<const0>\;
  p_13_d0(45) <= \<const0>\;
  p_13_d0(44) <= \<const0>\;
  p_13_d0(43) <= \<const0>\;
  p_13_d0(42) <= \<const0>\;
  p_13_d0(41) <= \<const0>\;
  p_13_d0(40) <= \<const0>\;
  p_13_d0(39) <= \<const0>\;
  p_13_d0(38) <= \<const0>\;
  p_13_d0(37) <= \<const0>\;
  p_13_d0(36) <= \<const0>\;
  p_13_d0(35) <= \<const0>\;
  p_13_d0(34) <= \<const0>\;
  p_13_d0(33) <= \<const0>\;
  p_13_d0(32) <= \<const0>\;
  p_13_d0(31) <= \<const0>\;
  p_13_d0(30) <= \<const0>\;
  p_13_d0(29) <= \<const0>\;
  p_13_d0(28) <= \<const0>\;
  p_13_d0(27) <= \<const0>\;
  p_13_d0(26) <= \<const0>\;
  p_13_d0(25) <= \<const0>\;
  p_13_d0(24) <= \<const0>\;
  p_13_d0(23) <= \<const0>\;
  p_13_d0(22) <= \<const0>\;
  p_13_d0(21) <= \<const0>\;
  p_13_d0(20) <= \<const0>\;
  p_13_d0(19) <= \<const0>\;
  p_13_d0(18) <= \<const0>\;
  p_13_d0(17) <= \<const0>\;
  p_13_d0(16) <= \<const0>\;
  p_13_d0(15) <= \<const0>\;
  p_13_d0(14) <= \<const0>\;
  p_13_d0(13) <= \<const0>\;
  p_13_d0(12) <= \<const0>\;
  p_13_d0(11) <= \<const0>\;
  p_13_d0(10) <= \<const0>\;
  p_13_d0(9) <= \<const0>\;
  p_13_d0(8) <= \<const0>\;
  p_13_d0(7) <= \<const0>\;
  p_13_d0(6) <= \<const0>\;
  p_13_d0(5) <= \<const0>\;
  p_13_d0(4) <= \<const0>\;
  p_13_d0(3) <= \<const0>\;
  p_13_d0(2) <= \<const0>\;
  p_13_d0(1) <= \<const0>\;
  p_13_d0(0) <= \<const0>\;
  p_13_d1(63) <= \<const0>\;
  p_13_d1(62) <= \<const0>\;
  p_13_d1(61) <= \<const0>\;
  p_13_d1(60) <= \<const0>\;
  p_13_d1(59) <= \<const0>\;
  p_13_d1(58) <= \<const0>\;
  p_13_d1(57) <= \<const0>\;
  p_13_d1(56) <= \<const0>\;
  p_13_d1(55) <= \<const0>\;
  p_13_d1(54) <= \<const0>\;
  p_13_d1(53) <= \<const0>\;
  p_13_d1(52) <= \<const0>\;
  p_13_d1(51) <= \<const0>\;
  p_13_d1(50) <= \<const0>\;
  p_13_d1(49) <= \<const0>\;
  p_13_d1(48) <= \<const0>\;
  p_13_d1(47) <= \<const0>\;
  p_13_d1(46) <= \<const0>\;
  p_13_d1(45) <= \<const0>\;
  p_13_d1(44) <= \<const0>\;
  p_13_d1(43) <= \<const0>\;
  p_13_d1(42) <= \<const0>\;
  p_13_d1(41) <= \<const0>\;
  p_13_d1(40) <= \<const0>\;
  p_13_d1(39) <= \<const0>\;
  p_13_d1(38) <= \<const0>\;
  p_13_d1(37) <= \<const0>\;
  p_13_d1(36) <= \<const0>\;
  p_13_d1(35) <= \<const0>\;
  p_13_d1(34) <= \<const0>\;
  p_13_d1(33) <= \<const0>\;
  p_13_d1(32) <= \<const0>\;
  p_13_d1(31) <= \<const0>\;
  p_13_d1(30) <= \<const0>\;
  p_13_d1(29) <= \<const0>\;
  p_13_d1(28) <= \<const0>\;
  p_13_d1(27) <= \<const0>\;
  p_13_d1(26) <= \<const0>\;
  p_13_d1(25) <= \<const0>\;
  p_13_d1(24) <= \<const0>\;
  p_13_d1(23) <= \<const0>\;
  p_13_d1(22) <= \<const0>\;
  p_13_d1(21) <= \<const0>\;
  p_13_d1(20) <= \<const0>\;
  p_13_d1(19) <= \<const0>\;
  p_13_d1(18) <= \<const0>\;
  p_13_d1(17) <= \<const0>\;
  p_13_d1(16) <= \<const0>\;
  p_13_d1(15) <= \<const0>\;
  p_13_d1(14) <= \<const0>\;
  p_13_d1(13) <= \<const0>\;
  p_13_d1(12) <= \<const0>\;
  p_13_d1(11) <= \<const0>\;
  p_13_d1(10) <= \<const0>\;
  p_13_d1(9) <= \<const0>\;
  p_13_d1(8) <= \<const0>\;
  p_13_d1(7) <= \<const0>\;
  p_13_d1(6) <= \<const0>\;
  p_13_d1(5) <= \<const0>\;
  p_13_d1(4) <= \<const0>\;
  p_13_d1(3) <= \<const0>\;
  p_13_d1(2) <= \<const0>\;
  p_13_d1(1) <= \<const0>\;
  p_13_d1(0) <= \<const0>\;
  p_13_we0 <= \<const0>\;
  p_13_we1 <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
VCC: unisim.vcomponents.VCC
     port map (
      P => \<const1>\
    );
inst: entity work.bd_0_hls_inst_0_fn1
     port map (
      ap_done => ap_done,
      ap_idle => NLW_inst_ap_idle_UNCONNECTED,
      ap_ready => ap_ready,
      ap_return(15 downto 0) => NLW_inst_ap_return_UNCONNECTED(15 downto 0),
      ap_start => ap_start,
      p(15 downto 0) => B"0000000000000000",
      p_13_address0(1 downto 0) => NLW_inst_p_13_address0_UNCONNECTED(1 downto 0),
      p_13_address1(1 downto 0) => NLW_inst_p_13_address1_UNCONNECTED(1 downto 0),
      p_13_ce0 => NLW_inst_p_13_ce0_UNCONNECTED,
      p_13_ce1 => NLW_inst_p_13_ce1_UNCONNECTED,
      p_13_d0(63 downto 0) => NLW_inst_p_13_d0_UNCONNECTED(63 downto 0),
      p_13_d1(63 downto 0) => NLW_inst_p_13_d1_UNCONNECTED(63 downto 0),
      p_13_q0(63 downto 0) => B"0000000000000000000000000000000000000000000000000000000000000000",
      p_13_q1(63 downto 0) => B"0000000000000000000000000000000000000000000000000000000000000000",
      p_13_we0 => NLW_inst_p_13_we0_UNCONNECTED,
      p_13_we1 => NLW_inst_p_13_we1_UNCONNECTED,
      p_9(7 downto 0) => B"00000000"
    );
end STRUCTURE;
