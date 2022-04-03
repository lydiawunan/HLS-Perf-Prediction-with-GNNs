-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Tue Apr 13 00:18:49 2021
-- Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
-- Command     : write_vhdl -force -mode funcsim
--               /home/nanwu/GNN_DFG/bb/dfg_32/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.vhdl
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
    p : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    ap_return : out STD_LOGIC_VECTOR ( 31 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1 : entity is "fn1";
  attribute hls_module : string;
  attribute hls_module of bd_0_hls_inst_0_fn1 : entity is "yes";
end bd_0_hls_inst_0_fn1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1 is
  signal \<const0>\ : STD_LOGIC;
  signal \^ap_return\ : STD_LOGIC_VECTOR ( 7 downto 1 );
  signal \ap_return[1]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \ap_return[1]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \ap_return[1]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \ap_return[1]_INST_0_n_0\ : STD_LOGIC;
  signal \ap_return[1]_INST_0_n_1\ : STD_LOGIC;
  signal \ap_return[1]_INST_0_n_2\ : STD_LOGIC;
  signal \ap_return[1]_INST_0_n_3\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_n_1\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_n_2\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_n_3\ : STD_LOGIC;
  signal \^ap_start\ : STD_LOGIC;
  signal \NLW_ap_return[1]_INST_0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_ap_return[4]_INST_0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \ap_return[1]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \ap_return[4]_INST_0\ : label is 35;
begin
  \^ap_start\ <= ap_start;
  ap_done <= \^ap_start\;
  ap_idle <= \<const0>\;
  ap_ready <= \^ap_start\;
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
  ap_return(7 downto 1) <= \^ap_return\(7 downto 1);
  ap_return(0) <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
\ap_return[1]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \ap_return[1]_INST_0_n_0\,
      CO(2) => \ap_return[1]_INST_0_n_1\,
      CO(1) => \ap_return[1]_INST_0_n_2\,
      CO(0) => \ap_return[1]_INST_0_n_3\,
      CYINIT => '1',
      DI(3 downto 0) => p_7(3 downto 0),
      O(3 downto 1) => \^ap_return\(3 downto 1),
      O(0) => \NLW_ap_return[1]_INST_0_O_UNCONNECTED\(0),
      S(3) => \ap_return[1]_INST_0_i_1_n_0\,
      S(2) => \ap_return[1]_INST_0_i_2_n_0\,
      S(1) => \ap_return[1]_INST_0_i_3_n_0\,
      S(0) => '0'
    );
\ap_return[1]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FE"
    )
        port map (
      I0 => p_7(0),
      I1 => p_7(1),
      I2 => p_7(2),
      O => \ap_return[1]_INST_0_i_1_n_0\
    );
\ap_return[1]_INST_0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => p_7(1),
      I1 => p_7(0),
      O => \ap_return[1]_INST_0_i_2_n_0\
    );
\ap_return[1]_INST_0_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(0),
      O => \ap_return[1]_INST_0_i_3_n_0\
    );
\ap_return[4]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \ap_return[1]_INST_0_n_0\,
      CO(3) => \NLW_ap_return[4]_INST_0_CO_UNCONNECTED\(3),
      CO(2) => \ap_return[4]_INST_0_n_1\,
      CO(1) => \ap_return[4]_INST_0_n_2\,
      CO(0) => \ap_return[4]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => p_7(6 downto 4),
      O(3 downto 0) => \^ap_return\(7 downto 4),
      S(3) => \ap_return[4]_INST_0_i_1_n_0\,
      S(2) => \ap_return[4]_INST_0_i_2_n_0\,
      S(1) => \ap_return[4]_INST_0_i_3_n_0\,
      S(0) => \ap_return[4]_INST_0_i_4_n_0\
    );
\ap_return[4]_INST_0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \ap_return[4]_INST_0_i_5_n_0\,
      I1 => p_7(6),
      O => \ap_return[4]_INST_0_i_1_n_0\
    );
\ap_return[4]_INST_0_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \ap_return[4]_INST_0_i_5_n_0\,
      O => \ap_return[4]_INST_0_i_2_n_0\
    );
\ap_return[4]_INST_0_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFE0000"
    )
        port map (
      I0 => p_7(3),
      I1 => p_7(0),
      I2 => p_7(1),
      I3 => p_7(2),
      I4 => p_7(4),
      O => \ap_return[4]_INST_0_i_3_n_0\
    );
\ap_return[4]_INST_0_i_4\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0001"
    )
        port map (
      I0 => p_7(2),
      I1 => p_7(1),
      I2 => p_7(0),
      I3 => p_7(3),
      O => \ap_return[4]_INST_0_i_4_n_0\
    );
\ap_return[4]_INST_0_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000055555557"
    )
        port map (
      I0 => p_7(4),
      I1 => p_7(2),
      I2 => p_7(1),
      I3 => p_7(0),
      I4 => p_7(3),
      I5 => p_7(5),
      O => \ap_return[4]_INST_0_i_5_n_0\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0 is
  port (
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    ap_return : out STD_LOGIC_VECTOR ( 31 downto 0 );
    p : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 63 downto 0 )
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
  signal \^ap_return\ : STD_LOGIC_VECTOR ( 7 downto 1 );
  signal NLW_inst_ap_idle_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_ap_return_UNCONNECTED : STD_LOGIC_VECTOR ( 31 downto 0 );
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
  attribute X_INTERFACE_INFO of p_7 : signal is "xilinx.com:signal:data:1.0 p_7 DATA";
  attribute X_INTERFACE_PARAMETER of p_7 : signal is "XIL_INTERFACENAME p_7, LAYERED_METADATA undef";
begin
  ap_idle <= \<const1>\;
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
  ap_return(7 downto 1) <= \^ap_return\(7 downto 1);
  ap_return(0) <= \<const1>\;
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
      ap_return(31 downto 8) => NLW_inst_ap_return_UNCONNECTED(31 downto 8),
      ap_return(7 downto 1) => \^ap_return\(7 downto 1),
      ap_return(0) => NLW_inst_ap_return_UNCONNECTED(0),
      ap_start => ap_start,
      p(63 downto 0) => B"0000000000000000000000000000000000000000000000000000000000000000",
      p_7(63 downto 7) => B"000000000000000000000000000000000000000000000000000000000",
      p_7(6 downto 0) => p_7(6 downto 0)
    );
end STRUCTURE;
