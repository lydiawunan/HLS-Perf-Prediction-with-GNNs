-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Sun Apr 11 17:42:57 2021
-- Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
-- Command     : write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_0_hls_inst_0_sim_netlist.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1 is
  port (
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    p_address0 : out STD_LOGIC_VECTOR ( 2 downto 0 );
    p_ce0 : out STD_LOGIC;
    p_we0 : out STD_LOGIC;
    p_d0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    p_q0 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_address1 : out STD_LOGIC_VECTOR ( 2 downto 0 );
    p_ce1 : out STD_LOGIC;
    p_we1 : out STD_LOGIC;
    p_d1 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    p_q1 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_9 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    ap_return : out STD_LOGIC_VECTOR ( 63 downto 0 )
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1 is
  signal \<const0>\ : STD_LOGIC;
  signal \^ap_start\ : STD_LOGIC;
begin
  \^ap_start\ <= ap_start;
  ap_done <= \^ap_start\;
  ap_idle <= \<const0>\;
  ap_ready <= \^ap_start\;
  ap_return(63) <= \<const0>\;
  ap_return(62) <= \<const0>\;
  ap_return(61) <= \<const0>\;
  ap_return(60) <= \<const0>\;
  ap_return(59) <= \<const0>\;
  ap_return(58) <= \<const0>\;
  ap_return(57) <= \<const0>\;
  ap_return(56) <= \<const0>\;
  ap_return(55) <= \<const0>\;
  ap_return(54) <= \<const0>\;
  ap_return(53) <= \<const0>\;
  ap_return(52) <= \<const0>\;
  ap_return(51) <= \<const0>\;
  ap_return(50) <= \<const0>\;
  ap_return(49) <= \<const0>\;
  ap_return(48) <= \<const0>\;
  ap_return(47) <= \<const0>\;
  ap_return(46) <= \<const0>\;
  ap_return(45) <= \<const0>\;
  ap_return(44) <= \<const0>\;
  ap_return(43) <= \<const0>\;
  ap_return(42) <= \<const0>\;
  ap_return(41) <= \<const0>\;
  ap_return(40) <= \<const0>\;
  ap_return(39) <= \<const0>\;
  ap_return(38) <= \<const0>\;
  ap_return(37) <= \<const0>\;
  ap_return(36) <= \<const0>\;
  ap_return(35) <= \<const0>\;
  ap_return(34) <= \<const0>\;
  ap_return(33) <= \<const0>\;
  ap_return(32) <= \<const0>\;
  ap_return(31) <= \<const0>\;
  ap_return(30) <= \<const0>\;
  ap_return(29) <= \<const0>\;
  ap_return(28) <= \<const0>\;
  ap_return(27) <= \<const0>\;
  ap_return(26) <= \<const0>\;
  ap_return(25) <= \<const0>\;
  ap_return(24) <= \<const0>\;
  ap_return(23) <= \<const0>\;
  ap_return(22) <= \<const0>\;
  ap_return(21) <= \<const0>\;
  ap_return(20) <= \<const0>\;
  ap_return(19) <= \<const0>\;
  ap_return(18) <= \<const0>\;
  ap_return(17) <= \<const0>\;
  ap_return(16) <= \<const0>\;
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
  p_address0(2) <= \<const0>\;
  p_address0(1) <= \<const0>\;
  p_address0(0) <= \<const0>\;
  p_address1(2) <= \<const0>\;
  p_address1(1) <= \<const0>\;
  p_address1(0) <= \<const0>\;
  p_ce0 <= \<const0>\;
  p_ce1 <= \<const0>\;
  p_d0(31) <= \<const0>\;
  p_d0(30) <= \<const0>\;
  p_d0(29) <= \<const0>\;
  p_d0(28) <= \<const0>\;
  p_d0(27) <= \<const0>\;
  p_d0(26) <= \<const0>\;
  p_d0(25) <= \<const0>\;
  p_d0(24) <= \<const0>\;
  p_d0(23) <= \<const0>\;
  p_d0(22) <= \<const0>\;
  p_d0(21) <= \<const0>\;
  p_d0(20) <= \<const0>\;
  p_d0(19) <= \<const0>\;
  p_d0(18) <= \<const0>\;
  p_d0(17) <= \<const0>\;
  p_d0(16) <= \<const0>\;
  p_d0(15) <= \<const0>\;
  p_d0(14) <= \<const0>\;
  p_d0(13) <= \<const0>\;
  p_d0(12) <= \<const0>\;
  p_d0(11) <= \<const0>\;
  p_d0(10) <= \<const0>\;
  p_d0(9) <= \<const0>\;
  p_d0(8) <= \<const0>\;
  p_d0(7) <= \<const0>\;
  p_d0(6) <= \<const0>\;
  p_d0(5) <= \<const0>\;
  p_d0(4) <= \<const0>\;
  p_d0(3) <= \<const0>\;
  p_d0(2) <= \<const0>\;
  p_d0(1) <= \<const0>\;
  p_d0(0) <= \<const0>\;
  p_d1(31) <= \<const0>\;
  p_d1(30) <= \<const0>\;
  p_d1(29) <= \<const0>\;
  p_d1(28) <= \<const0>\;
  p_d1(27) <= \<const0>\;
  p_d1(26) <= \<const0>\;
  p_d1(25) <= \<const0>\;
  p_d1(24) <= \<const0>\;
  p_d1(23) <= \<const0>\;
  p_d1(22) <= \<const0>\;
  p_d1(21) <= \<const0>\;
  p_d1(20) <= \<const0>\;
  p_d1(19) <= \<const0>\;
  p_d1(18) <= \<const0>\;
  p_d1(17) <= \<const0>\;
  p_d1(16) <= \<const0>\;
  p_d1(15) <= \<const0>\;
  p_d1(14) <= \<const0>\;
  p_d1(13) <= \<const0>\;
  p_d1(12) <= \<const0>\;
  p_d1(11) <= \<const0>\;
  p_d1(10) <= \<const0>\;
  p_d1(9) <= \<const0>\;
  p_d1(8) <= \<const0>\;
  p_d1(7) <= \<const0>\;
  p_d1(6) <= \<const0>\;
  p_d1(5) <= \<const0>\;
  p_d1(4) <= \<const0>\;
  p_d1(3) <= \<const0>\;
  p_d1(2) <= \<const0>\;
  p_d1(1) <= \<const0>\;
  p_d1(0) <= \<const0>\;
  p_we0 <= \<const0>\;
  p_we1 <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
    p_ce0 : out STD_LOGIC;
    p_we0 : out STD_LOGIC;
    p_ce1 : out STD_LOGIC;
    p_we1 : out STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    ap_return : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_address0 : out STD_LOGIC_VECTOR ( 2 downto 0 );
    p_d0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    p_q0 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_address1 : out STD_LOGIC_VECTOR ( 2 downto 0 );
    p_d1 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    p_q1 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_9 : in STD_LOGIC_VECTOR ( 63 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "bd_0_hls_inst_0,fn1,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "HLS";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "fn1,Vivado 2020.2";
  attribute hls_module : string;
  attribute hls_module of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  signal \<const0>\ : STD_LOGIC;
  signal \<const1>\ : STD_LOGIC;
  signal NLW_inst_ap_idle_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_p_ce0_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_p_ce1_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_p_we0_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_p_we1_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_ap_return_UNCONNECTED : STD_LOGIC_VECTOR ( 63 downto 0 );
  signal NLW_inst_p_address0_UNCONNECTED : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal NLW_inst_p_address1_UNCONNECTED : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal NLW_inst_p_d0_UNCONNECTED : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal NLW_inst_p_d1_UNCONNECTED : STD_LOGIC_VECTOR ( 31 downto 0 );
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
  attribute X_INTERFACE_INFO of p_9 : signal is "xilinx.com:signal:data:1.0 p_9 DATA";
  attribute X_INTERFACE_PARAMETER of p_9 : signal is "XIL_INTERFACENAME p_9, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_address0 : signal is "xilinx.com:signal:data:1.0 p_address0 DATA";
  attribute X_INTERFACE_PARAMETER of p_address0 : signal is "XIL_INTERFACENAME p_address0, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_address1 : signal is "xilinx.com:signal:data:1.0 p_address1 DATA";
  attribute X_INTERFACE_PARAMETER of p_address1 : signal is "XIL_INTERFACENAME p_address1, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_d0 : signal is "xilinx.com:signal:data:1.0 p_d0 DATA";
  attribute X_INTERFACE_PARAMETER of p_d0 : signal is "XIL_INTERFACENAME p_d0, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_d1 : signal is "xilinx.com:signal:data:1.0 p_d1 DATA";
  attribute X_INTERFACE_PARAMETER of p_d1 : signal is "XIL_INTERFACENAME p_d1, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_q0 : signal is "xilinx.com:signal:data:1.0 p_q0 DATA";
  attribute X_INTERFACE_PARAMETER of p_q0 : signal is "XIL_INTERFACENAME p_q0, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_q1 : signal is "xilinx.com:signal:data:1.0 p_q1 DATA";
  attribute X_INTERFACE_PARAMETER of p_q1 : signal is "XIL_INTERFACENAME p_q1, LAYERED_METADATA undef";
begin
  ap_idle <= \<const1>\;
  ap_return(63) <= \<const0>\;
  ap_return(62) <= \<const0>\;
  ap_return(61) <= \<const0>\;
  ap_return(60) <= \<const0>\;
  ap_return(59) <= \<const0>\;
  ap_return(58) <= \<const0>\;
  ap_return(57) <= \<const0>\;
  ap_return(56) <= \<const0>\;
  ap_return(55) <= \<const0>\;
  ap_return(54) <= \<const0>\;
  ap_return(53) <= \<const0>\;
  ap_return(52) <= \<const0>\;
  ap_return(51) <= \<const0>\;
  ap_return(50) <= \<const0>\;
  ap_return(49) <= \<const0>\;
  ap_return(48) <= \<const0>\;
  ap_return(47) <= \<const0>\;
  ap_return(46) <= \<const0>\;
  ap_return(45) <= \<const0>\;
  ap_return(44) <= \<const0>\;
  ap_return(43) <= \<const0>\;
  ap_return(42) <= \<const0>\;
  ap_return(41) <= \<const0>\;
  ap_return(40) <= \<const0>\;
  ap_return(39) <= \<const0>\;
  ap_return(38) <= \<const0>\;
  ap_return(37) <= \<const0>\;
  ap_return(36) <= \<const0>\;
  ap_return(35) <= \<const0>\;
  ap_return(34) <= \<const0>\;
  ap_return(33) <= \<const0>\;
  ap_return(32) <= \<const0>\;
  ap_return(31) <= \<const0>\;
  ap_return(30) <= \<const0>\;
  ap_return(29) <= \<const0>\;
  ap_return(28) <= \<const0>\;
  ap_return(27) <= \<const0>\;
  ap_return(26) <= \<const0>\;
  ap_return(25) <= \<const0>\;
  ap_return(24) <= \<const0>\;
  ap_return(23) <= \<const0>\;
  ap_return(22) <= \<const0>\;
  ap_return(21) <= \<const0>\;
  ap_return(20) <= \<const0>\;
  ap_return(19) <= \<const0>\;
  ap_return(18) <= \<const0>\;
  ap_return(17) <= \<const0>\;
  ap_return(16) <= \<const0>\;
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
  p_address0(2) <= \<const0>\;
  p_address0(1) <= \<const0>\;
  p_address0(0) <= \<const0>\;
  p_address1(2) <= \<const0>\;
  p_address1(1) <= \<const0>\;
  p_address1(0) <= \<const0>\;
  p_ce0 <= \<const0>\;
  p_ce1 <= \<const0>\;
  p_d0(31) <= \<const0>\;
  p_d0(30) <= \<const0>\;
  p_d0(29) <= \<const0>\;
  p_d0(28) <= \<const0>\;
  p_d0(27) <= \<const0>\;
  p_d0(26) <= \<const0>\;
  p_d0(25) <= \<const0>\;
  p_d0(24) <= \<const0>\;
  p_d0(23) <= \<const0>\;
  p_d0(22) <= \<const0>\;
  p_d0(21) <= \<const0>\;
  p_d0(20) <= \<const0>\;
  p_d0(19) <= \<const0>\;
  p_d0(18) <= \<const0>\;
  p_d0(17) <= \<const0>\;
  p_d0(16) <= \<const0>\;
  p_d0(15) <= \<const0>\;
  p_d0(14) <= \<const0>\;
  p_d0(13) <= \<const0>\;
  p_d0(12) <= \<const0>\;
  p_d0(11) <= \<const0>\;
  p_d0(10) <= \<const0>\;
  p_d0(9) <= \<const0>\;
  p_d0(8) <= \<const0>\;
  p_d0(7) <= \<const0>\;
  p_d0(6) <= \<const0>\;
  p_d0(5) <= \<const0>\;
  p_d0(4) <= \<const0>\;
  p_d0(3) <= \<const0>\;
  p_d0(2) <= \<const0>\;
  p_d0(1) <= \<const0>\;
  p_d0(0) <= \<const0>\;
  p_d1(31) <= \<const0>\;
  p_d1(30) <= \<const0>\;
  p_d1(29) <= \<const0>\;
  p_d1(28) <= \<const0>\;
  p_d1(27) <= \<const0>\;
  p_d1(26) <= \<const0>\;
  p_d1(25) <= \<const0>\;
  p_d1(24) <= \<const0>\;
  p_d1(23) <= \<const0>\;
  p_d1(22) <= \<const0>\;
  p_d1(21) <= \<const0>\;
  p_d1(20) <= \<const0>\;
  p_d1(19) <= \<const0>\;
  p_d1(18) <= \<const0>\;
  p_d1(17) <= \<const0>\;
  p_d1(16) <= \<const0>\;
  p_d1(15) <= \<const0>\;
  p_d1(14) <= \<const0>\;
  p_d1(13) <= \<const0>\;
  p_d1(12) <= \<const0>\;
  p_d1(11) <= \<const0>\;
  p_d1(10) <= \<const0>\;
  p_d1(9) <= \<const0>\;
  p_d1(8) <= \<const0>\;
  p_d1(7) <= \<const0>\;
  p_d1(6) <= \<const0>\;
  p_d1(5) <= \<const0>\;
  p_d1(4) <= \<const0>\;
  p_d1(3) <= \<const0>\;
  p_d1(2) <= \<const0>\;
  p_d1(1) <= \<const0>\;
  p_d1(0) <= \<const0>\;
  p_we0 <= \<const0>\;
  p_we1 <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
VCC: unisim.vcomponents.VCC
     port map (
      P => \<const1>\
    );
inst: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1
     port map (
      ap_done => ap_done,
      ap_idle => NLW_inst_ap_idle_UNCONNECTED,
      ap_ready => ap_ready,
      ap_return(63 downto 0) => NLW_inst_ap_return_UNCONNECTED(63 downto 0),
      ap_start => ap_start,
      p_9(63 downto 0) => B"0000000000000000000000000000000000000000000000000000000000000000",
      p_address0(2 downto 0) => NLW_inst_p_address0_UNCONNECTED(2 downto 0),
      p_address1(2 downto 0) => NLW_inst_p_address1_UNCONNECTED(2 downto 0),
      p_ce0 => NLW_inst_p_ce0_UNCONNECTED,
      p_ce1 => NLW_inst_p_ce1_UNCONNECTED,
      p_d0(31 downto 0) => NLW_inst_p_d0_UNCONNECTED(31 downto 0),
      p_d1(31 downto 0) => NLW_inst_p_d1_UNCONNECTED(31 downto 0),
      p_q0(31 downto 0) => B"00000000000000000000000000000000",
      p_q1(31 downto 0) => B"00000000000000000000000000000000",
      p_we0 => NLW_inst_p_we0_UNCONNECTED,
      p_we1 => NLW_inst_p_we1_UNCONNECTED
    );
end STRUCTURE;
