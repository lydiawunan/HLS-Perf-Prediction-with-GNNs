-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Wed Apr 14 14:39:53 2021
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
    p : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_11 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_13 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_15 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_19 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    ap_return : out STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute hls_module : string;
  attribute hls_module of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1 : entity is "yes";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1 is
  signal \<const0>\ : STD_LOGIC;
  signal \^ap_return\ : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal \ap_return[0]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \^ap_start\ : STD_LOGIC;
begin
  \^ap_start\ <= ap_start;
  ap_done <= \^ap_start\;
  ap_idle <= \<const0>\;
  ap_ready <= \^ap_start\;
  ap_return(15) <= \^ap_return\(15);
  ap_return(14) <= \<const0>\;
  ap_return(13) <= \^ap_return\(13);
  ap_return(12) <= \<const0>\;
  ap_return(11) <= \<const0>\;
  ap_return(10) <= \<const0>\;
  ap_return(9 downto 7) <= \^ap_return\(9 downto 7);
  ap_return(6) <= \<const0>\;
  ap_return(5) <= \<const0>\;
  ap_return(4) <= \<const0>\;
  ap_return(3) <= \<const0>\;
  ap_return(2) <= \<const0>\;
  ap_return(1) <= \<const0>\;
  ap_return(0) <= \^ap_return\(0);
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
\ap_return[0]_INST_0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => \ap_return[0]_INST_0_i_1_n_0\,
      I1 => \ap_return[0]_INST_0_i_2_n_0\,
      I2 => \ap_return[0]_INST_0_i_3_n_0\,
      I3 => \ap_return[0]_INST_0_i_4_n_0\,
      I4 => \ap_return[0]_INST_0_i_5_n_0\,
      I5 => \ap_return[0]_INST_0_i_6_n_0\,
      O => \^ap_return\(0)
    );
\ap_return[0]_INST_0_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => p(12),
      I1 => p(13),
      I2 => p(10),
      I3 => p(11),
      I4 => p(9),
      I5 => p(8),
      O => \ap_return[0]_INST_0_i_1_n_0\
    );
\ap_return[0]_INST_0_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => p(18),
      I1 => p(19),
      I2 => p(16),
      I3 => p(17),
      I4 => p(15),
      I5 => p(14),
      O => \ap_return[0]_INST_0_i_2_n_0\
    );
\ap_return[0]_INST_0_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => p(30),
      I1 => p(31),
      I2 => p(28),
      I3 => p(29),
      I4 => p(27),
      I5 => p(26),
      O => \ap_return[0]_INST_0_i_3_n_0\
    );
\ap_return[0]_INST_0_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => p(24),
      I1 => p(25),
      I2 => p(22),
      I3 => p(23),
      I4 => p(21),
      I5 => p(20),
      O => \ap_return[0]_INST_0_i_4_n_0\
    );
\ap_return[0]_INST_0_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => p(0),
      I1 => p(1),
      O => \ap_return[0]_INST_0_i_5_n_0\
    );
\ap_return[0]_INST_0_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => p(6),
      I1 => p(7),
      I2 => p(4),
      I3 => p(5),
      I4 => p(3),
      I5 => p(2),
      O => \ap_return[0]_INST_0_i_6_n_0\
    );
\ap_return[13]_INST_0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(13),
      O => \^ap_return\(13)
    );
\ap_return[15]_INST_0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(15),
      O => \^ap_return\(15)
    );
\ap_return[7]_INST_0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(7),
      O => \^ap_return\(7)
    );
\ap_return[8]_INST_0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(8),
      O => \^ap_return\(8)
    );
\ap_return[9]_INST_0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(9),
      O => \^ap_return\(9)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    ap_return : out STD_LOGIC_VECTOR ( 15 downto 0 );
    p : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_11 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_13 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_15 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_19 : in STD_LOGIC_VECTOR ( 15 downto 0 )
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
  signal \<const1>\ : STD_LOGIC;
  signal \^ap_return\ : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal NLW_inst_ap_idle_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_ap_return_UNCONNECTED : STD_LOGIC_VECTOR ( 14 downto 1 );
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
  attribute X_INTERFACE_INFO of p_11 : signal is "xilinx.com:signal:data:1.0 p_11 DATA";
  attribute X_INTERFACE_PARAMETER of p_11 : signal is "XIL_INTERFACENAME p_11, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_13 : signal is "xilinx.com:signal:data:1.0 p_13 DATA";
  attribute X_INTERFACE_PARAMETER of p_13 : signal is "XIL_INTERFACENAME p_13, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_15 : signal is "xilinx.com:signal:data:1.0 p_15 DATA";
  attribute X_INTERFACE_PARAMETER of p_15 : signal is "XIL_INTERFACENAME p_15, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_19 : signal is "xilinx.com:signal:data:1.0 p_19 DATA";
  attribute X_INTERFACE_PARAMETER of p_19 : signal is "XIL_INTERFACENAME p_19, LAYERED_METADATA undef";
begin
  ap_idle <= \<const1>\;
  ap_return(15) <= \^ap_return\(15);
  ap_return(14) <= \<const1>\;
  ap_return(13) <= \^ap_return\(13);
  ap_return(12) <= \<const1>\;
  ap_return(11) <= \<const1>\;
  ap_return(10) <= \<const1>\;
  ap_return(9 downto 7) <= \^ap_return\(9 downto 7);
  ap_return(6) <= \<const1>\;
  ap_return(5) <= \<const1>\;
  ap_return(4) <= \<const1>\;
  ap_return(3) <= \<const1>\;
  ap_return(2) <= \<const1>\;
  ap_return(1) <= \<const1>\;
  ap_return(0) <= \^ap_return\(0);
VCC: unisim.vcomponents.VCC
     port map (
      P => \<const1>\
    );
inst: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fn1
     port map (
      ap_done => ap_done,
      ap_idle => NLW_inst_ap_idle_UNCONNECTED,
      ap_ready => ap_ready,
      ap_return(15) => \^ap_return\(15),
      ap_return(14) => NLW_inst_ap_return_UNCONNECTED(14),
      ap_return(13) => \^ap_return\(13),
      ap_return(12 downto 10) => NLW_inst_ap_return_UNCONNECTED(12 downto 10),
      ap_return(9 downto 7) => \^ap_return\(9 downto 7),
      ap_return(6 downto 1) => NLW_inst_ap_return_UNCONNECTED(6 downto 1),
      ap_return(0) => \^ap_return\(0),
      ap_start => ap_start,
      p(31 downto 0) => p(31 downto 0),
      p_11(15 downto 0) => B"0000000000000000",
      p_13(31 downto 0) => B"00000000000000000000000000000000",
      p_15(31 downto 0) => B"00000000000000000000000000000000",
      p_19(15 downto 0) => B"0000000000000000"
    );
end STRUCTURE;
