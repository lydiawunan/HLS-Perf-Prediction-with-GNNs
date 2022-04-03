-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Thu Apr 29 13:59:14 2021
-- Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
-- Command     : write_vhdl -force -mode funcsim
--               /home/nanwu/GNN_DFG/bb/dfg_94/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0 is
  port (
    ap_return : out STD_LOGIC_VECTOR ( 7 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    B : in STD_LOGIC_VECTOR ( 1 downto 0 );
    A : in STD_LOGIC_VECTOR ( 2 downto 0 );
    buff1_reg_0 : in STD_LOGIC_VECTOR ( 1 downto 0 );
    \tmp_product__1_0\ : in STD_LOGIC_VECTOR ( 8 downto 0 );
    \tmp_product__0_0\ : in STD_LOGIC_VECTOR ( 1 downto 0 );
    \buff1_reg__2_0\ : in STD_LOGIC_VECTOR ( 2 downto 0 );
    \buff1_reg__0_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \buff0_reg__2_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \tmp_product__1_1\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \buff0_reg__3_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \tmp_product__2_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \buff1_reg__2_1\ : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0 : entity is "fn1_mul_64ns_66ns_82_5_1_Multiplier_0";
end bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0 is
  signal \buff0_reg__0_n_100\ : STD_LOGIC;
  signal \buff0_reg__0_n_101\ : STD_LOGIC;
  signal \buff0_reg__0_n_102\ : STD_LOGIC;
  signal \buff0_reg__0_n_103\ : STD_LOGIC;
  signal \buff0_reg__0_n_104\ : STD_LOGIC;
  signal \buff0_reg__0_n_105\ : STD_LOGIC;
  signal \buff0_reg__0_n_106\ : STD_LOGIC;
  signal \buff0_reg__0_n_107\ : STD_LOGIC;
  signal \buff0_reg__0_n_108\ : STD_LOGIC;
  signal \buff0_reg__0_n_109\ : STD_LOGIC;
  signal \buff0_reg__0_n_110\ : STD_LOGIC;
  signal \buff0_reg__0_n_111\ : STD_LOGIC;
  signal \buff0_reg__0_n_112\ : STD_LOGIC;
  signal \buff0_reg__0_n_113\ : STD_LOGIC;
  signal \buff0_reg__0_n_114\ : STD_LOGIC;
  signal \buff0_reg__0_n_115\ : STD_LOGIC;
  signal \buff0_reg__0_n_116\ : STD_LOGIC;
  signal \buff0_reg__0_n_117\ : STD_LOGIC;
  signal \buff0_reg__0_n_118\ : STD_LOGIC;
  signal \buff0_reg__0_n_119\ : STD_LOGIC;
  signal \buff0_reg__0_n_120\ : STD_LOGIC;
  signal \buff0_reg__0_n_121\ : STD_LOGIC;
  signal \buff0_reg__0_n_122\ : STD_LOGIC;
  signal \buff0_reg__0_n_123\ : STD_LOGIC;
  signal \buff0_reg__0_n_124\ : STD_LOGIC;
  signal \buff0_reg__0_n_125\ : STD_LOGIC;
  signal \buff0_reg__0_n_126\ : STD_LOGIC;
  signal \buff0_reg__0_n_127\ : STD_LOGIC;
  signal \buff0_reg__0_n_128\ : STD_LOGIC;
  signal \buff0_reg__0_n_129\ : STD_LOGIC;
  signal \buff0_reg__0_n_130\ : STD_LOGIC;
  signal \buff0_reg__0_n_131\ : STD_LOGIC;
  signal \buff0_reg__0_n_132\ : STD_LOGIC;
  signal \buff0_reg__0_n_133\ : STD_LOGIC;
  signal \buff0_reg__0_n_134\ : STD_LOGIC;
  signal \buff0_reg__0_n_135\ : STD_LOGIC;
  signal \buff0_reg__0_n_136\ : STD_LOGIC;
  signal \buff0_reg__0_n_137\ : STD_LOGIC;
  signal \buff0_reg__0_n_138\ : STD_LOGIC;
  signal \buff0_reg__0_n_139\ : STD_LOGIC;
  signal \buff0_reg__0_n_140\ : STD_LOGIC;
  signal \buff0_reg__0_n_141\ : STD_LOGIC;
  signal \buff0_reg__0_n_142\ : STD_LOGIC;
  signal \buff0_reg__0_n_143\ : STD_LOGIC;
  signal \buff0_reg__0_n_144\ : STD_LOGIC;
  signal \buff0_reg__0_n_145\ : STD_LOGIC;
  signal \buff0_reg__0_n_146\ : STD_LOGIC;
  signal \buff0_reg__0_n_147\ : STD_LOGIC;
  signal \buff0_reg__0_n_148\ : STD_LOGIC;
  signal \buff0_reg__0_n_149\ : STD_LOGIC;
  signal \buff0_reg__0_n_150\ : STD_LOGIC;
  signal \buff0_reg__0_n_151\ : STD_LOGIC;
  signal \buff0_reg__0_n_152\ : STD_LOGIC;
  signal \buff0_reg__0_n_153\ : STD_LOGIC;
  signal \buff0_reg__0_n_58\ : STD_LOGIC;
  signal \buff0_reg__0_n_59\ : STD_LOGIC;
  signal \buff0_reg__0_n_60\ : STD_LOGIC;
  signal \buff0_reg__0_n_61\ : STD_LOGIC;
  signal \buff0_reg__0_n_62\ : STD_LOGIC;
  signal \buff0_reg__0_n_63\ : STD_LOGIC;
  signal \buff0_reg__0_n_64\ : STD_LOGIC;
  signal \buff0_reg__0_n_65\ : STD_LOGIC;
  signal \buff0_reg__0_n_66\ : STD_LOGIC;
  signal \buff0_reg__0_n_67\ : STD_LOGIC;
  signal \buff0_reg__0_n_68\ : STD_LOGIC;
  signal \buff0_reg__0_n_69\ : STD_LOGIC;
  signal \buff0_reg__0_n_70\ : STD_LOGIC;
  signal \buff0_reg__0_n_71\ : STD_LOGIC;
  signal \buff0_reg__0_n_72\ : STD_LOGIC;
  signal \buff0_reg__0_n_73\ : STD_LOGIC;
  signal \buff0_reg__0_n_74\ : STD_LOGIC;
  signal \buff0_reg__0_n_75\ : STD_LOGIC;
  signal \buff0_reg__0_n_76\ : STD_LOGIC;
  signal \buff0_reg__0_n_77\ : STD_LOGIC;
  signal \buff0_reg__0_n_78\ : STD_LOGIC;
  signal \buff0_reg__0_n_79\ : STD_LOGIC;
  signal \buff0_reg__0_n_80\ : STD_LOGIC;
  signal \buff0_reg__0_n_81\ : STD_LOGIC;
  signal \buff0_reg__0_n_82\ : STD_LOGIC;
  signal \buff0_reg__0_n_83\ : STD_LOGIC;
  signal \buff0_reg__0_n_84\ : STD_LOGIC;
  signal \buff0_reg__0_n_85\ : STD_LOGIC;
  signal \buff0_reg__0_n_86\ : STD_LOGIC;
  signal \buff0_reg__0_n_87\ : STD_LOGIC;
  signal \buff0_reg__0_n_88\ : STD_LOGIC;
  signal \buff0_reg__0_n_89\ : STD_LOGIC;
  signal \buff0_reg__0_n_90\ : STD_LOGIC;
  signal \buff0_reg__0_n_91\ : STD_LOGIC;
  signal \buff0_reg__0_n_92\ : STD_LOGIC;
  signal \buff0_reg__0_n_93\ : STD_LOGIC;
  signal \buff0_reg__0_n_94\ : STD_LOGIC;
  signal \buff0_reg__0_n_95\ : STD_LOGIC;
  signal \buff0_reg__0_n_96\ : STD_LOGIC;
  signal \buff0_reg__0_n_97\ : STD_LOGIC;
  signal \buff0_reg__0_n_98\ : STD_LOGIC;
  signal \buff0_reg__0_n_99\ : STD_LOGIC;
  signal \buff0_reg__1_n_106\ : STD_LOGIC;
  signal \buff0_reg__1_n_107\ : STD_LOGIC;
  signal \buff0_reg__1_n_108\ : STD_LOGIC;
  signal \buff0_reg__1_n_109\ : STD_LOGIC;
  signal \buff0_reg__1_n_110\ : STD_LOGIC;
  signal \buff0_reg__1_n_111\ : STD_LOGIC;
  signal \buff0_reg__1_n_112\ : STD_LOGIC;
  signal \buff0_reg__1_n_113\ : STD_LOGIC;
  signal \buff0_reg__1_n_114\ : STD_LOGIC;
  signal \buff0_reg__1_n_115\ : STD_LOGIC;
  signal \buff0_reg__1_n_116\ : STD_LOGIC;
  signal \buff0_reg__1_n_117\ : STD_LOGIC;
  signal \buff0_reg__1_n_118\ : STD_LOGIC;
  signal \buff0_reg__1_n_119\ : STD_LOGIC;
  signal \buff0_reg__1_n_120\ : STD_LOGIC;
  signal \buff0_reg__1_n_121\ : STD_LOGIC;
  signal \buff0_reg__1_n_122\ : STD_LOGIC;
  signal \buff0_reg__1_n_123\ : STD_LOGIC;
  signal \buff0_reg__1_n_124\ : STD_LOGIC;
  signal \buff0_reg__1_n_125\ : STD_LOGIC;
  signal \buff0_reg__1_n_126\ : STD_LOGIC;
  signal \buff0_reg__1_n_127\ : STD_LOGIC;
  signal \buff0_reg__1_n_128\ : STD_LOGIC;
  signal \buff0_reg__1_n_129\ : STD_LOGIC;
  signal \buff0_reg__1_n_130\ : STD_LOGIC;
  signal \buff0_reg__1_n_131\ : STD_LOGIC;
  signal \buff0_reg__1_n_132\ : STD_LOGIC;
  signal \buff0_reg__1_n_133\ : STD_LOGIC;
  signal \buff0_reg__1_n_134\ : STD_LOGIC;
  signal \buff0_reg__1_n_135\ : STD_LOGIC;
  signal \buff0_reg__1_n_136\ : STD_LOGIC;
  signal \buff0_reg__1_n_137\ : STD_LOGIC;
  signal \buff0_reg__1_n_138\ : STD_LOGIC;
  signal \buff0_reg__1_n_139\ : STD_LOGIC;
  signal \buff0_reg__1_n_140\ : STD_LOGIC;
  signal \buff0_reg__1_n_141\ : STD_LOGIC;
  signal \buff0_reg__1_n_142\ : STD_LOGIC;
  signal \buff0_reg__1_n_143\ : STD_LOGIC;
  signal \buff0_reg__1_n_144\ : STD_LOGIC;
  signal \buff0_reg__1_n_145\ : STD_LOGIC;
  signal \buff0_reg__1_n_146\ : STD_LOGIC;
  signal \buff0_reg__1_n_147\ : STD_LOGIC;
  signal \buff0_reg__1_n_148\ : STD_LOGIC;
  signal \buff0_reg__1_n_149\ : STD_LOGIC;
  signal \buff0_reg__1_n_150\ : STD_LOGIC;
  signal \buff0_reg__1_n_151\ : STD_LOGIC;
  signal \buff0_reg__1_n_152\ : STD_LOGIC;
  signal \buff0_reg__1_n_153\ : STD_LOGIC;
  signal \buff0_reg__2_n_106\ : STD_LOGIC;
  signal \buff0_reg__2_n_107\ : STD_LOGIC;
  signal \buff0_reg__2_n_108\ : STD_LOGIC;
  signal \buff0_reg__2_n_109\ : STD_LOGIC;
  signal \buff0_reg__2_n_110\ : STD_LOGIC;
  signal \buff0_reg__2_n_111\ : STD_LOGIC;
  signal \buff0_reg__2_n_112\ : STD_LOGIC;
  signal \buff0_reg__2_n_113\ : STD_LOGIC;
  signal \buff0_reg__2_n_114\ : STD_LOGIC;
  signal \buff0_reg__2_n_115\ : STD_LOGIC;
  signal \buff0_reg__2_n_116\ : STD_LOGIC;
  signal \buff0_reg__2_n_117\ : STD_LOGIC;
  signal \buff0_reg__2_n_118\ : STD_LOGIC;
  signal \buff0_reg__2_n_119\ : STD_LOGIC;
  signal \buff0_reg__2_n_120\ : STD_LOGIC;
  signal \buff0_reg__2_n_121\ : STD_LOGIC;
  signal \buff0_reg__2_n_122\ : STD_LOGIC;
  signal \buff0_reg__2_n_123\ : STD_LOGIC;
  signal \buff0_reg__2_n_124\ : STD_LOGIC;
  signal \buff0_reg__2_n_125\ : STD_LOGIC;
  signal \buff0_reg__2_n_126\ : STD_LOGIC;
  signal \buff0_reg__2_n_127\ : STD_LOGIC;
  signal \buff0_reg__2_n_128\ : STD_LOGIC;
  signal \buff0_reg__2_n_129\ : STD_LOGIC;
  signal \buff0_reg__2_n_130\ : STD_LOGIC;
  signal \buff0_reg__2_n_131\ : STD_LOGIC;
  signal \buff0_reg__2_n_132\ : STD_LOGIC;
  signal \buff0_reg__2_n_133\ : STD_LOGIC;
  signal \buff0_reg__2_n_134\ : STD_LOGIC;
  signal \buff0_reg__2_n_135\ : STD_LOGIC;
  signal \buff0_reg__2_n_136\ : STD_LOGIC;
  signal \buff0_reg__2_n_137\ : STD_LOGIC;
  signal \buff0_reg__2_n_138\ : STD_LOGIC;
  signal \buff0_reg__2_n_139\ : STD_LOGIC;
  signal \buff0_reg__2_n_140\ : STD_LOGIC;
  signal \buff0_reg__2_n_141\ : STD_LOGIC;
  signal \buff0_reg__2_n_142\ : STD_LOGIC;
  signal \buff0_reg__2_n_143\ : STD_LOGIC;
  signal \buff0_reg__2_n_144\ : STD_LOGIC;
  signal \buff0_reg__2_n_145\ : STD_LOGIC;
  signal \buff0_reg__2_n_146\ : STD_LOGIC;
  signal \buff0_reg__2_n_147\ : STD_LOGIC;
  signal \buff0_reg__2_n_148\ : STD_LOGIC;
  signal \buff0_reg__2_n_149\ : STD_LOGIC;
  signal \buff0_reg__2_n_150\ : STD_LOGIC;
  signal \buff0_reg__2_n_151\ : STD_LOGIC;
  signal \buff0_reg__2_n_152\ : STD_LOGIC;
  signal \buff0_reg__2_n_153\ : STD_LOGIC;
  signal \buff0_reg__3_n_100\ : STD_LOGIC;
  signal \buff0_reg__3_n_101\ : STD_LOGIC;
  signal \buff0_reg__3_n_102\ : STD_LOGIC;
  signal \buff0_reg__3_n_103\ : STD_LOGIC;
  signal \buff0_reg__3_n_104\ : STD_LOGIC;
  signal \buff0_reg__3_n_105\ : STD_LOGIC;
  signal \buff0_reg__3_n_106\ : STD_LOGIC;
  signal \buff0_reg__3_n_107\ : STD_LOGIC;
  signal \buff0_reg__3_n_108\ : STD_LOGIC;
  signal \buff0_reg__3_n_109\ : STD_LOGIC;
  signal \buff0_reg__3_n_110\ : STD_LOGIC;
  signal \buff0_reg__3_n_111\ : STD_LOGIC;
  signal \buff0_reg__3_n_112\ : STD_LOGIC;
  signal \buff0_reg__3_n_113\ : STD_LOGIC;
  signal \buff0_reg__3_n_114\ : STD_LOGIC;
  signal \buff0_reg__3_n_115\ : STD_LOGIC;
  signal \buff0_reg__3_n_116\ : STD_LOGIC;
  signal \buff0_reg__3_n_117\ : STD_LOGIC;
  signal \buff0_reg__3_n_118\ : STD_LOGIC;
  signal \buff0_reg__3_n_119\ : STD_LOGIC;
  signal \buff0_reg__3_n_120\ : STD_LOGIC;
  signal \buff0_reg__3_n_121\ : STD_LOGIC;
  signal \buff0_reg__3_n_122\ : STD_LOGIC;
  signal \buff0_reg__3_n_123\ : STD_LOGIC;
  signal \buff0_reg__3_n_124\ : STD_LOGIC;
  signal \buff0_reg__3_n_125\ : STD_LOGIC;
  signal \buff0_reg__3_n_126\ : STD_LOGIC;
  signal \buff0_reg__3_n_127\ : STD_LOGIC;
  signal \buff0_reg__3_n_128\ : STD_LOGIC;
  signal \buff0_reg__3_n_129\ : STD_LOGIC;
  signal \buff0_reg__3_n_130\ : STD_LOGIC;
  signal \buff0_reg__3_n_131\ : STD_LOGIC;
  signal \buff0_reg__3_n_132\ : STD_LOGIC;
  signal \buff0_reg__3_n_133\ : STD_LOGIC;
  signal \buff0_reg__3_n_134\ : STD_LOGIC;
  signal \buff0_reg__3_n_135\ : STD_LOGIC;
  signal \buff0_reg__3_n_136\ : STD_LOGIC;
  signal \buff0_reg__3_n_137\ : STD_LOGIC;
  signal \buff0_reg__3_n_138\ : STD_LOGIC;
  signal \buff0_reg__3_n_139\ : STD_LOGIC;
  signal \buff0_reg__3_n_140\ : STD_LOGIC;
  signal \buff0_reg__3_n_141\ : STD_LOGIC;
  signal \buff0_reg__3_n_142\ : STD_LOGIC;
  signal \buff0_reg__3_n_143\ : STD_LOGIC;
  signal \buff0_reg__3_n_144\ : STD_LOGIC;
  signal \buff0_reg__3_n_145\ : STD_LOGIC;
  signal \buff0_reg__3_n_146\ : STD_LOGIC;
  signal \buff0_reg__3_n_147\ : STD_LOGIC;
  signal \buff0_reg__3_n_148\ : STD_LOGIC;
  signal \buff0_reg__3_n_149\ : STD_LOGIC;
  signal \buff0_reg__3_n_150\ : STD_LOGIC;
  signal \buff0_reg__3_n_151\ : STD_LOGIC;
  signal \buff0_reg__3_n_152\ : STD_LOGIC;
  signal \buff0_reg__3_n_153\ : STD_LOGIC;
  signal \buff0_reg__3_n_58\ : STD_LOGIC;
  signal \buff0_reg__3_n_59\ : STD_LOGIC;
  signal \buff0_reg__3_n_60\ : STD_LOGIC;
  signal \buff0_reg__3_n_61\ : STD_LOGIC;
  signal \buff0_reg__3_n_62\ : STD_LOGIC;
  signal \buff0_reg__3_n_63\ : STD_LOGIC;
  signal \buff0_reg__3_n_64\ : STD_LOGIC;
  signal \buff0_reg__3_n_65\ : STD_LOGIC;
  signal \buff0_reg__3_n_66\ : STD_LOGIC;
  signal \buff0_reg__3_n_67\ : STD_LOGIC;
  signal \buff0_reg__3_n_68\ : STD_LOGIC;
  signal \buff0_reg__3_n_69\ : STD_LOGIC;
  signal \buff0_reg__3_n_70\ : STD_LOGIC;
  signal \buff0_reg__3_n_71\ : STD_LOGIC;
  signal \buff0_reg__3_n_72\ : STD_LOGIC;
  signal \buff0_reg__3_n_73\ : STD_LOGIC;
  signal \buff0_reg__3_n_74\ : STD_LOGIC;
  signal \buff0_reg__3_n_75\ : STD_LOGIC;
  signal \buff0_reg__3_n_76\ : STD_LOGIC;
  signal \buff0_reg__3_n_77\ : STD_LOGIC;
  signal \buff0_reg__3_n_78\ : STD_LOGIC;
  signal \buff0_reg__3_n_79\ : STD_LOGIC;
  signal \buff0_reg__3_n_80\ : STD_LOGIC;
  signal \buff0_reg__3_n_81\ : STD_LOGIC;
  signal \buff0_reg__3_n_82\ : STD_LOGIC;
  signal \buff0_reg__3_n_83\ : STD_LOGIC;
  signal \buff0_reg__3_n_84\ : STD_LOGIC;
  signal \buff0_reg__3_n_85\ : STD_LOGIC;
  signal \buff0_reg__3_n_86\ : STD_LOGIC;
  signal \buff0_reg__3_n_87\ : STD_LOGIC;
  signal \buff0_reg__3_n_88\ : STD_LOGIC;
  signal \buff0_reg__3_n_89\ : STD_LOGIC;
  signal \buff0_reg__3_n_90\ : STD_LOGIC;
  signal \buff0_reg__3_n_91\ : STD_LOGIC;
  signal \buff0_reg__3_n_92\ : STD_LOGIC;
  signal \buff0_reg__3_n_93\ : STD_LOGIC;
  signal \buff0_reg__3_n_94\ : STD_LOGIC;
  signal \buff0_reg__3_n_95\ : STD_LOGIC;
  signal \buff0_reg__3_n_96\ : STD_LOGIC;
  signal \buff0_reg__3_n_97\ : STD_LOGIC;
  signal \buff0_reg__3_n_98\ : STD_LOGIC;
  signal \buff0_reg__3_n_99\ : STD_LOGIC;
  signal buff0_reg_n_100 : STD_LOGIC;
  signal buff0_reg_n_101 : STD_LOGIC;
  signal buff0_reg_n_102 : STD_LOGIC;
  signal buff0_reg_n_103 : STD_LOGIC;
  signal buff0_reg_n_104 : STD_LOGIC;
  signal buff0_reg_n_105 : STD_LOGIC;
  signal buff0_reg_n_106 : STD_LOGIC;
  signal buff0_reg_n_107 : STD_LOGIC;
  signal buff0_reg_n_108 : STD_LOGIC;
  signal buff0_reg_n_109 : STD_LOGIC;
  signal buff0_reg_n_110 : STD_LOGIC;
  signal buff0_reg_n_111 : STD_LOGIC;
  signal buff0_reg_n_112 : STD_LOGIC;
  signal buff0_reg_n_113 : STD_LOGIC;
  signal buff0_reg_n_114 : STD_LOGIC;
  signal buff0_reg_n_115 : STD_LOGIC;
  signal buff0_reg_n_116 : STD_LOGIC;
  signal buff0_reg_n_117 : STD_LOGIC;
  signal buff0_reg_n_118 : STD_LOGIC;
  signal buff0_reg_n_119 : STD_LOGIC;
  signal buff0_reg_n_120 : STD_LOGIC;
  signal buff0_reg_n_121 : STD_LOGIC;
  signal buff0_reg_n_122 : STD_LOGIC;
  signal buff0_reg_n_123 : STD_LOGIC;
  signal buff0_reg_n_124 : STD_LOGIC;
  signal buff0_reg_n_125 : STD_LOGIC;
  signal buff0_reg_n_126 : STD_LOGIC;
  signal buff0_reg_n_127 : STD_LOGIC;
  signal buff0_reg_n_128 : STD_LOGIC;
  signal buff0_reg_n_129 : STD_LOGIC;
  signal buff0_reg_n_130 : STD_LOGIC;
  signal buff0_reg_n_131 : STD_LOGIC;
  signal buff0_reg_n_132 : STD_LOGIC;
  signal buff0_reg_n_133 : STD_LOGIC;
  signal buff0_reg_n_134 : STD_LOGIC;
  signal buff0_reg_n_135 : STD_LOGIC;
  signal buff0_reg_n_136 : STD_LOGIC;
  signal buff0_reg_n_137 : STD_LOGIC;
  signal buff0_reg_n_138 : STD_LOGIC;
  signal buff0_reg_n_139 : STD_LOGIC;
  signal buff0_reg_n_140 : STD_LOGIC;
  signal buff0_reg_n_141 : STD_LOGIC;
  signal buff0_reg_n_142 : STD_LOGIC;
  signal buff0_reg_n_143 : STD_LOGIC;
  signal buff0_reg_n_144 : STD_LOGIC;
  signal buff0_reg_n_145 : STD_LOGIC;
  signal buff0_reg_n_146 : STD_LOGIC;
  signal buff0_reg_n_147 : STD_LOGIC;
  signal buff0_reg_n_148 : STD_LOGIC;
  signal buff0_reg_n_149 : STD_LOGIC;
  signal buff0_reg_n_150 : STD_LOGIC;
  signal buff0_reg_n_151 : STD_LOGIC;
  signal buff0_reg_n_152 : STD_LOGIC;
  signal buff0_reg_n_153 : STD_LOGIC;
  signal buff0_reg_n_58 : STD_LOGIC;
  signal buff0_reg_n_59 : STD_LOGIC;
  signal buff0_reg_n_60 : STD_LOGIC;
  signal buff0_reg_n_61 : STD_LOGIC;
  signal buff0_reg_n_62 : STD_LOGIC;
  signal buff0_reg_n_63 : STD_LOGIC;
  signal buff0_reg_n_64 : STD_LOGIC;
  signal buff0_reg_n_65 : STD_LOGIC;
  signal buff0_reg_n_66 : STD_LOGIC;
  signal buff0_reg_n_67 : STD_LOGIC;
  signal buff0_reg_n_68 : STD_LOGIC;
  signal buff0_reg_n_69 : STD_LOGIC;
  signal buff0_reg_n_70 : STD_LOGIC;
  signal buff0_reg_n_71 : STD_LOGIC;
  signal buff0_reg_n_72 : STD_LOGIC;
  signal buff0_reg_n_73 : STD_LOGIC;
  signal buff0_reg_n_74 : STD_LOGIC;
  signal buff0_reg_n_75 : STD_LOGIC;
  signal buff0_reg_n_76 : STD_LOGIC;
  signal buff0_reg_n_77 : STD_LOGIC;
  signal buff0_reg_n_78 : STD_LOGIC;
  signal buff0_reg_n_79 : STD_LOGIC;
  signal buff0_reg_n_80 : STD_LOGIC;
  signal buff0_reg_n_81 : STD_LOGIC;
  signal buff0_reg_n_82 : STD_LOGIC;
  signal buff0_reg_n_83 : STD_LOGIC;
  signal buff0_reg_n_84 : STD_LOGIC;
  signal buff0_reg_n_85 : STD_LOGIC;
  signal buff0_reg_n_86 : STD_LOGIC;
  signal buff0_reg_n_87 : STD_LOGIC;
  signal buff0_reg_n_88 : STD_LOGIC;
  signal buff0_reg_n_89 : STD_LOGIC;
  signal buff0_reg_n_90 : STD_LOGIC;
  signal buff0_reg_n_91 : STD_LOGIC;
  signal buff0_reg_n_92 : STD_LOGIC;
  signal buff0_reg_n_93 : STD_LOGIC;
  signal buff0_reg_n_94 : STD_LOGIC;
  signal buff0_reg_n_95 : STD_LOGIC;
  signal buff0_reg_n_96 : STD_LOGIC;
  signal buff0_reg_n_97 : STD_LOGIC;
  signal buff0_reg_n_98 : STD_LOGIC;
  signal buff0_reg_n_99 : STD_LOGIC;
  signal \buff1_reg[0]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[10]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[11]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[12]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[13]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[14]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[15]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[16]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[1]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[2]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[3]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[4]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[5]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[6]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[7]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[8]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[9]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg__0_n_100\ : STD_LOGIC;
  signal \buff1_reg__0_n_101\ : STD_LOGIC;
  signal \buff1_reg__0_n_102\ : STD_LOGIC;
  signal \buff1_reg__0_n_103\ : STD_LOGIC;
  signal \buff1_reg__0_n_104\ : STD_LOGIC;
  signal \buff1_reg__0_n_105\ : STD_LOGIC;
  signal \buff1_reg__0_n_58\ : STD_LOGIC;
  signal \buff1_reg__0_n_59\ : STD_LOGIC;
  signal \buff1_reg__0_n_60\ : STD_LOGIC;
  signal \buff1_reg__0_n_61\ : STD_LOGIC;
  signal \buff1_reg__0_n_62\ : STD_LOGIC;
  signal \buff1_reg__0_n_63\ : STD_LOGIC;
  signal \buff1_reg__0_n_64\ : STD_LOGIC;
  signal \buff1_reg__0_n_65\ : STD_LOGIC;
  signal \buff1_reg__0_n_66\ : STD_LOGIC;
  signal \buff1_reg__0_n_67\ : STD_LOGIC;
  signal \buff1_reg__0_n_68\ : STD_LOGIC;
  signal \buff1_reg__0_n_69\ : STD_LOGIC;
  signal \buff1_reg__0_n_70\ : STD_LOGIC;
  signal \buff1_reg__0_n_71\ : STD_LOGIC;
  signal \buff1_reg__0_n_72\ : STD_LOGIC;
  signal \buff1_reg__0_n_73\ : STD_LOGIC;
  signal \buff1_reg__0_n_74\ : STD_LOGIC;
  signal \buff1_reg__0_n_75\ : STD_LOGIC;
  signal \buff1_reg__0_n_76\ : STD_LOGIC;
  signal \buff1_reg__0_n_77\ : STD_LOGIC;
  signal \buff1_reg__0_n_78\ : STD_LOGIC;
  signal \buff1_reg__0_n_79\ : STD_LOGIC;
  signal \buff1_reg__0_n_80\ : STD_LOGIC;
  signal \buff1_reg__0_n_81\ : STD_LOGIC;
  signal \buff1_reg__0_n_82\ : STD_LOGIC;
  signal \buff1_reg__0_n_83\ : STD_LOGIC;
  signal \buff1_reg__0_n_84\ : STD_LOGIC;
  signal \buff1_reg__0_n_85\ : STD_LOGIC;
  signal \buff1_reg__0_n_86\ : STD_LOGIC;
  signal \buff1_reg__0_n_87\ : STD_LOGIC;
  signal \buff1_reg__0_n_88\ : STD_LOGIC;
  signal \buff1_reg__0_n_89\ : STD_LOGIC;
  signal \buff1_reg__0_n_90\ : STD_LOGIC;
  signal \buff1_reg__0_n_91\ : STD_LOGIC;
  signal \buff1_reg__0_n_92\ : STD_LOGIC;
  signal \buff1_reg__0_n_93\ : STD_LOGIC;
  signal \buff1_reg__0_n_94\ : STD_LOGIC;
  signal \buff1_reg__0_n_95\ : STD_LOGIC;
  signal \buff1_reg__0_n_96\ : STD_LOGIC;
  signal \buff1_reg__0_n_97\ : STD_LOGIC;
  signal \buff1_reg__0_n_98\ : STD_LOGIC;
  signal \buff1_reg__0_n_99\ : STD_LOGIC;
  signal \buff1_reg__1_n_100\ : STD_LOGIC;
  signal \buff1_reg__1_n_101\ : STD_LOGIC;
  signal \buff1_reg__1_n_102\ : STD_LOGIC;
  signal \buff1_reg__1_n_103\ : STD_LOGIC;
  signal \buff1_reg__1_n_104\ : STD_LOGIC;
  signal \buff1_reg__1_n_105\ : STD_LOGIC;
  signal \buff1_reg__1_n_58\ : STD_LOGIC;
  signal \buff1_reg__1_n_59\ : STD_LOGIC;
  signal \buff1_reg__1_n_60\ : STD_LOGIC;
  signal \buff1_reg__1_n_61\ : STD_LOGIC;
  signal \buff1_reg__1_n_62\ : STD_LOGIC;
  signal \buff1_reg__1_n_63\ : STD_LOGIC;
  signal \buff1_reg__1_n_64\ : STD_LOGIC;
  signal \buff1_reg__1_n_65\ : STD_LOGIC;
  signal \buff1_reg__1_n_66\ : STD_LOGIC;
  signal \buff1_reg__1_n_67\ : STD_LOGIC;
  signal \buff1_reg__1_n_68\ : STD_LOGIC;
  signal \buff1_reg__1_n_69\ : STD_LOGIC;
  signal \buff1_reg__1_n_70\ : STD_LOGIC;
  signal \buff1_reg__1_n_71\ : STD_LOGIC;
  signal \buff1_reg__1_n_72\ : STD_LOGIC;
  signal \buff1_reg__1_n_73\ : STD_LOGIC;
  signal \buff1_reg__1_n_74\ : STD_LOGIC;
  signal \buff1_reg__1_n_75\ : STD_LOGIC;
  signal \buff1_reg__1_n_76\ : STD_LOGIC;
  signal \buff1_reg__1_n_77\ : STD_LOGIC;
  signal \buff1_reg__1_n_78\ : STD_LOGIC;
  signal \buff1_reg__1_n_79\ : STD_LOGIC;
  signal \buff1_reg__1_n_80\ : STD_LOGIC;
  signal \buff1_reg__1_n_81\ : STD_LOGIC;
  signal \buff1_reg__1_n_82\ : STD_LOGIC;
  signal \buff1_reg__1_n_83\ : STD_LOGIC;
  signal \buff1_reg__1_n_84\ : STD_LOGIC;
  signal \buff1_reg__1_n_85\ : STD_LOGIC;
  signal \buff1_reg__1_n_86\ : STD_LOGIC;
  signal \buff1_reg__1_n_87\ : STD_LOGIC;
  signal \buff1_reg__1_n_88\ : STD_LOGIC;
  signal \buff1_reg__1_n_89\ : STD_LOGIC;
  signal \buff1_reg__1_n_90\ : STD_LOGIC;
  signal \buff1_reg__1_n_91\ : STD_LOGIC;
  signal \buff1_reg__1_n_92\ : STD_LOGIC;
  signal \buff1_reg__1_n_93\ : STD_LOGIC;
  signal \buff1_reg__1_n_94\ : STD_LOGIC;
  signal \buff1_reg__1_n_95\ : STD_LOGIC;
  signal \buff1_reg__1_n_96\ : STD_LOGIC;
  signal \buff1_reg__1_n_97\ : STD_LOGIC;
  signal \buff1_reg__1_n_98\ : STD_LOGIC;
  signal \buff1_reg__1_n_99\ : STD_LOGIC;
  signal \buff1_reg__2_n_100\ : STD_LOGIC;
  signal \buff1_reg__2_n_101\ : STD_LOGIC;
  signal \buff1_reg__2_n_102\ : STD_LOGIC;
  signal \buff1_reg__2_n_103\ : STD_LOGIC;
  signal \buff1_reg__2_n_104\ : STD_LOGIC;
  signal \buff1_reg__2_n_105\ : STD_LOGIC;
  signal \buff1_reg__2_n_58\ : STD_LOGIC;
  signal \buff1_reg__2_n_59\ : STD_LOGIC;
  signal \buff1_reg__2_n_60\ : STD_LOGIC;
  signal \buff1_reg__2_n_61\ : STD_LOGIC;
  signal \buff1_reg__2_n_62\ : STD_LOGIC;
  signal \buff1_reg__2_n_63\ : STD_LOGIC;
  signal \buff1_reg__2_n_64\ : STD_LOGIC;
  signal \buff1_reg__2_n_65\ : STD_LOGIC;
  signal \buff1_reg__2_n_66\ : STD_LOGIC;
  signal \buff1_reg__2_n_67\ : STD_LOGIC;
  signal \buff1_reg__2_n_68\ : STD_LOGIC;
  signal \buff1_reg__2_n_69\ : STD_LOGIC;
  signal \buff1_reg__2_n_70\ : STD_LOGIC;
  signal \buff1_reg__2_n_71\ : STD_LOGIC;
  signal \buff1_reg__2_n_72\ : STD_LOGIC;
  signal \buff1_reg__2_n_73\ : STD_LOGIC;
  signal \buff1_reg__2_n_74\ : STD_LOGIC;
  signal \buff1_reg__2_n_75\ : STD_LOGIC;
  signal \buff1_reg__2_n_76\ : STD_LOGIC;
  signal \buff1_reg__2_n_77\ : STD_LOGIC;
  signal \buff1_reg__2_n_78\ : STD_LOGIC;
  signal \buff1_reg__2_n_79\ : STD_LOGIC;
  signal \buff1_reg__2_n_80\ : STD_LOGIC;
  signal \buff1_reg__2_n_81\ : STD_LOGIC;
  signal \buff1_reg__2_n_82\ : STD_LOGIC;
  signal \buff1_reg__2_n_83\ : STD_LOGIC;
  signal \buff1_reg__2_n_84\ : STD_LOGIC;
  signal \buff1_reg__2_n_85\ : STD_LOGIC;
  signal \buff1_reg__2_n_86\ : STD_LOGIC;
  signal \buff1_reg__2_n_87\ : STD_LOGIC;
  signal \buff1_reg__2_n_88\ : STD_LOGIC;
  signal \buff1_reg__2_n_89\ : STD_LOGIC;
  signal \buff1_reg__2_n_90\ : STD_LOGIC;
  signal \buff1_reg__2_n_91\ : STD_LOGIC;
  signal \buff1_reg__2_n_92\ : STD_LOGIC;
  signal \buff1_reg__2_n_93\ : STD_LOGIC;
  signal \buff1_reg__2_n_94\ : STD_LOGIC;
  signal \buff1_reg__2_n_95\ : STD_LOGIC;
  signal \buff1_reg__2_n_96\ : STD_LOGIC;
  signal \buff1_reg__2_n_97\ : STD_LOGIC;
  signal \buff1_reg__2_n_98\ : STD_LOGIC;
  signal \buff1_reg__2_n_99\ : STD_LOGIC;
  signal \buff1_reg__5\ : STD_LOGIC_VECTOR ( 81 downto 74 );
  signal buff1_reg_n_100 : STD_LOGIC;
  signal buff1_reg_n_101 : STD_LOGIC;
  signal buff1_reg_n_102 : STD_LOGIC;
  signal buff1_reg_n_103 : STD_LOGIC;
  signal buff1_reg_n_104 : STD_LOGIC;
  signal buff1_reg_n_105 : STD_LOGIC;
  signal buff1_reg_n_58 : STD_LOGIC;
  signal buff1_reg_n_59 : STD_LOGIC;
  signal buff1_reg_n_60 : STD_LOGIC;
  signal buff1_reg_n_61 : STD_LOGIC;
  signal buff1_reg_n_62 : STD_LOGIC;
  signal buff1_reg_n_63 : STD_LOGIC;
  signal buff1_reg_n_64 : STD_LOGIC;
  signal buff1_reg_n_65 : STD_LOGIC;
  signal buff1_reg_n_66 : STD_LOGIC;
  signal buff1_reg_n_67 : STD_LOGIC;
  signal buff1_reg_n_68 : STD_LOGIC;
  signal buff1_reg_n_69 : STD_LOGIC;
  signal buff1_reg_n_70 : STD_LOGIC;
  signal buff1_reg_n_71 : STD_LOGIC;
  signal buff1_reg_n_72 : STD_LOGIC;
  signal buff1_reg_n_73 : STD_LOGIC;
  signal buff1_reg_n_74 : STD_LOGIC;
  signal buff1_reg_n_75 : STD_LOGIC;
  signal buff1_reg_n_76 : STD_LOGIC;
  signal buff1_reg_n_77 : STD_LOGIC;
  signal buff1_reg_n_78 : STD_LOGIC;
  signal buff1_reg_n_79 : STD_LOGIC;
  signal buff1_reg_n_80 : STD_LOGIC;
  signal buff1_reg_n_81 : STD_LOGIC;
  signal buff1_reg_n_82 : STD_LOGIC;
  signal buff1_reg_n_83 : STD_LOGIC;
  signal buff1_reg_n_84 : STD_LOGIC;
  signal buff1_reg_n_85 : STD_LOGIC;
  signal buff1_reg_n_86 : STD_LOGIC;
  signal buff1_reg_n_87 : STD_LOGIC;
  signal buff1_reg_n_88 : STD_LOGIC;
  signal buff1_reg_n_89 : STD_LOGIC;
  signal buff1_reg_n_90 : STD_LOGIC;
  signal buff1_reg_n_91 : STD_LOGIC;
  signal buff1_reg_n_92 : STD_LOGIC;
  signal buff1_reg_n_93 : STD_LOGIC;
  signal buff1_reg_n_94 : STD_LOGIC;
  signal buff1_reg_n_95 : STD_LOGIC;
  signal buff1_reg_n_96 : STD_LOGIC;
  signal buff1_reg_n_97 : STD_LOGIC;
  signal buff1_reg_n_98 : STD_LOGIC;
  signal buff1_reg_n_99 : STD_LOGIC;
  signal \buff2[77]_i_100_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_101_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_102_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_103_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_104_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_106_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_107_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_108_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_109_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_10_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_111_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_112_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_113_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_114_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_116_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_117_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_118_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_119_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_120_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_121_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_122_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_12_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_13_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_14_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_15_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_16_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_17_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_18_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_19_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_22_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_23_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_24_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_25_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_26_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_28_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_29_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_30_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_31_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_32_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_33_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_34_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_35_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_37_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_38_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_39_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_3_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_40_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_42_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_43_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_44_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_45_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_46_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_47_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_48_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_49_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_4_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_51_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_52_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_53_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_54_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_56_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_57_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_58_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_59_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_5_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_60_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_61_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_62_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_63_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_65_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_66_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_67_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_68_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_6_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_70_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_71_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_72_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_73_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_74_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_75_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_76_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_77_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_78_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_79_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_7_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_80_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_83_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_84_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_85_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_86_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_87_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_88_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_89_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_8_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_90_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_92_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_93_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_94_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_95_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_96_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_97_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_98_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_99_n_0\ : STD_LOGIC;
  signal \buff2[77]_i_9_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_11_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_12_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_13_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_14_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_15_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_16_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_17_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_18_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_19_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_2_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_3_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_4_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_5_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_6_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_7_n_0\ : STD_LOGIC;
  signal \buff2[81]_i_8_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_105_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_105_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_105_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_105_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_110_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_110_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_110_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_110_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_115_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_115_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_115_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_115_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_11_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_11_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_11_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_11_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_1_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_1_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_1_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_1_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_20_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_20_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_20_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_20_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_20_n_4\ : STD_LOGIC;
  signal \buff2_reg[77]_i_20_n_5\ : STD_LOGIC;
  signal \buff2_reg[77]_i_20_n_6\ : STD_LOGIC;
  signal \buff2_reg[77]_i_20_n_7\ : STD_LOGIC;
  signal \buff2_reg[77]_i_21_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_21_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_21_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_21_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_27_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_27_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_27_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_27_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_27_n_4\ : STD_LOGIC;
  signal \buff2_reg[77]_i_27_n_5\ : STD_LOGIC;
  signal \buff2_reg[77]_i_27_n_6\ : STD_LOGIC;
  signal \buff2_reg[77]_i_27_n_7\ : STD_LOGIC;
  signal \buff2_reg[77]_i_2_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_2_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_2_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_2_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_36_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_36_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_36_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_36_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_41_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_41_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_41_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_41_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_41_n_4\ : STD_LOGIC;
  signal \buff2_reg[77]_i_41_n_5\ : STD_LOGIC;
  signal \buff2_reg[77]_i_41_n_6\ : STD_LOGIC;
  signal \buff2_reg[77]_i_41_n_7\ : STD_LOGIC;
  signal \buff2_reg[77]_i_50_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_50_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_50_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_50_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_55_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_55_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_55_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_55_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_55_n_4\ : STD_LOGIC;
  signal \buff2_reg[77]_i_55_n_5\ : STD_LOGIC;
  signal \buff2_reg[77]_i_55_n_6\ : STD_LOGIC;
  signal \buff2_reg[77]_i_55_n_7\ : STD_LOGIC;
  signal \buff2_reg[77]_i_64_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_64_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_64_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_64_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_69_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_69_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_69_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_69_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_69_n_4\ : STD_LOGIC;
  signal \buff2_reg[77]_i_69_n_5\ : STD_LOGIC;
  signal \buff2_reg[77]_i_69_n_6\ : STD_LOGIC;
  signal \buff2_reg[77]_i_69_n_7\ : STD_LOGIC;
  signal \buff2_reg[77]_i_81_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_81_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_81_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_81_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_81_n_4\ : STD_LOGIC;
  signal \buff2_reg[77]_i_81_n_5\ : STD_LOGIC;
  signal \buff2_reg[77]_i_81_n_6\ : STD_LOGIC;
  signal \buff2_reg[77]_i_82_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_82_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_82_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_82_n_3\ : STD_LOGIC;
  signal \buff2_reg[77]_i_82_n_4\ : STD_LOGIC;
  signal \buff2_reg[77]_i_82_n_5\ : STD_LOGIC;
  signal \buff2_reg[77]_i_82_n_6\ : STD_LOGIC;
  signal \buff2_reg[77]_i_82_n_7\ : STD_LOGIC;
  signal \buff2_reg[77]_i_91_n_0\ : STD_LOGIC;
  signal \buff2_reg[77]_i_91_n_1\ : STD_LOGIC;
  signal \buff2_reg[77]_i_91_n_2\ : STD_LOGIC;
  signal \buff2_reg[77]_i_91_n_3\ : STD_LOGIC;
  signal \buff2_reg[81]_i_10_n_7\ : STD_LOGIC;
  signal \buff2_reg[81]_i_1_n_1\ : STD_LOGIC;
  signal \buff2_reg[81]_i_1_n_2\ : STD_LOGIC;
  signal \buff2_reg[81]_i_1_n_3\ : STD_LOGIC;
  signal \buff2_reg[81]_i_9_n_0\ : STD_LOGIC;
  signal \buff2_reg[81]_i_9_n_1\ : STD_LOGIC;
  signal \buff2_reg[81]_i_9_n_2\ : STD_LOGIC;
  signal \buff2_reg[81]_i_9_n_3\ : STD_LOGIC;
  signal \buff2_reg[81]_i_9_n_4\ : STD_LOGIC;
  signal \buff2_reg[81]_i_9_n_5\ : STD_LOGIC;
  signal \buff2_reg[81]_i_9_n_6\ : STD_LOGIC;
  signal \buff2_reg[81]_i_9_n_7\ : STD_LOGIC;
  signal \tmp_product__0_n_106\ : STD_LOGIC;
  signal \tmp_product__0_n_107\ : STD_LOGIC;
  signal \tmp_product__0_n_108\ : STD_LOGIC;
  signal \tmp_product__0_n_109\ : STD_LOGIC;
  signal \tmp_product__0_n_110\ : STD_LOGIC;
  signal \tmp_product__0_n_111\ : STD_LOGIC;
  signal \tmp_product__0_n_112\ : STD_LOGIC;
  signal \tmp_product__0_n_113\ : STD_LOGIC;
  signal \tmp_product__0_n_114\ : STD_LOGIC;
  signal \tmp_product__0_n_115\ : STD_LOGIC;
  signal \tmp_product__0_n_116\ : STD_LOGIC;
  signal \tmp_product__0_n_117\ : STD_LOGIC;
  signal \tmp_product__0_n_118\ : STD_LOGIC;
  signal \tmp_product__0_n_119\ : STD_LOGIC;
  signal \tmp_product__0_n_120\ : STD_LOGIC;
  signal \tmp_product__0_n_121\ : STD_LOGIC;
  signal \tmp_product__0_n_122\ : STD_LOGIC;
  signal \tmp_product__0_n_123\ : STD_LOGIC;
  signal \tmp_product__0_n_124\ : STD_LOGIC;
  signal \tmp_product__0_n_125\ : STD_LOGIC;
  signal \tmp_product__0_n_126\ : STD_LOGIC;
  signal \tmp_product__0_n_127\ : STD_LOGIC;
  signal \tmp_product__0_n_128\ : STD_LOGIC;
  signal \tmp_product__0_n_129\ : STD_LOGIC;
  signal \tmp_product__0_n_130\ : STD_LOGIC;
  signal \tmp_product__0_n_131\ : STD_LOGIC;
  signal \tmp_product__0_n_132\ : STD_LOGIC;
  signal \tmp_product__0_n_133\ : STD_LOGIC;
  signal \tmp_product__0_n_134\ : STD_LOGIC;
  signal \tmp_product__0_n_135\ : STD_LOGIC;
  signal \tmp_product__0_n_136\ : STD_LOGIC;
  signal \tmp_product__0_n_137\ : STD_LOGIC;
  signal \tmp_product__0_n_138\ : STD_LOGIC;
  signal \tmp_product__0_n_139\ : STD_LOGIC;
  signal \tmp_product__0_n_140\ : STD_LOGIC;
  signal \tmp_product__0_n_141\ : STD_LOGIC;
  signal \tmp_product__0_n_142\ : STD_LOGIC;
  signal \tmp_product__0_n_143\ : STD_LOGIC;
  signal \tmp_product__0_n_144\ : STD_LOGIC;
  signal \tmp_product__0_n_145\ : STD_LOGIC;
  signal \tmp_product__0_n_146\ : STD_LOGIC;
  signal \tmp_product__0_n_147\ : STD_LOGIC;
  signal \tmp_product__0_n_148\ : STD_LOGIC;
  signal \tmp_product__0_n_149\ : STD_LOGIC;
  signal \tmp_product__0_n_150\ : STD_LOGIC;
  signal \tmp_product__0_n_151\ : STD_LOGIC;
  signal \tmp_product__0_n_152\ : STD_LOGIC;
  signal \tmp_product__0_n_153\ : STD_LOGIC;
  signal \tmp_product__1_n_106\ : STD_LOGIC;
  signal \tmp_product__1_n_107\ : STD_LOGIC;
  signal \tmp_product__1_n_108\ : STD_LOGIC;
  signal \tmp_product__1_n_109\ : STD_LOGIC;
  signal \tmp_product__1_n_110\ : STD_LOGIC;
  signal \tmp_product__1_n_111\ : STD_LOGIC;
  signal \tmp_product__1_n_112\ : STD_LOGIC;
  signal \tmp_product__1_n_113\ : STD_LOGIC;
  signal \tmp_product__1_n_114\ : STD_LOGIC;
  signal \tmp_product__1_n_115\ : STD_LOGIC;
  signal \tmp_product__1_n_116\ : STD_LOGIC;
  signal \tmp_product__1_n_117\ : STD_LOGIC;
  signal \tmp_product__1_n_118\ : STD_LOGIC;
  signal \tmp_product__1_n_119\ : STD_LOGIC;
  signal \tmp_product__1_n_120\ : STD_LOGIC;
  signal \tmp_product__1_n_121\ : STD_LOGIC;
  signal \tmp_product__1_n_122\ : STD_LOGIC;
  signal \tmp_product__1_n_123\ : STD_LOGIC;
  signal \tmp_product__1_n_124\ : STD_LOGIC;
  signal \tmp_product__1_n_125\ : STD_LOGIC;
  signal \tmp_product__1_n_126\ : STD_LOGIC;
  signal \tmp_product__1_n_127\ : STD_LOGIC;
  signal \tmp_product__1_n_128\ : STD_LOGIC;
  signal \tmp_product__1_n_129\ : STD_LOGIC;
  signal \tmp_product__1_n_130\ : STD_LOGIC;
  signal \tmp_product__1_n_131\ : STD_LOGIC;
  signal \tmp_product__1_n_132\ : STD_LOGIC;
  signal \tmp_product__1_n_133\ : STD_LOGIC;
  signal \tmp_product__1_n_134\ : STD_LOGIC;
  signal \tmp_product__1_n_135\ : STD_LOGIC;
  signal \tmp_product__1_n_136\ : STD_LOGIC;
  signal \tmp_product__1_n_137\ : STD_LOGIC;
  signal \tmp_product__1_n_138\ : STD_LOGIC;
  signal \tmp_product__1_n_139\ : STD_LOGIC;
  signal \tmp_product__1_n_140\ : STD_LOGIC;
  signal \tmp_product__1_n_141\ : STD_LOGIC;
  signal \tmp_product__1_n_142\ : STD_LOGIC;
  signal \tmp_product__1_n_143\ : STD_LOGIC;
  signal \tmp_product__1_n_144\ : STD_LOGIC;
  signal \tmp_product__1_n_145\ : STD_LOGIC;
  signal \tmp_product__1_n_146\ : STD_LOGIC;
  signal \tmp_product__1_n_147\ : STD_LOGIC;
  signal \tmp_product__1_n_148\ : STD_LOGIC;
  signal \tmp_product__1_n_149\ : STD_LOGIC;
  signal \tmp_product__1_n_150\ : STD_LOGIC;
  signal \tmp_product__1_n_151\ : STD_LOGIC;
  signal \tmp_product__1_n_152\ : STD_LOGIC;
  signal \tmp_product__1_n_153\ : STD_LOGIC;
  signal \tmp_product__2_n_106\ : STD_LOGIC;
  signal \tmp_product__2_n_107\ : STD_LOGIC;
  signal \tmp_product__2_n_108\ : STD_LOGIC;
  signal \tmp_product__2_n_109\ : STD_LOGIC;
  signal \tmp_product__2_n_110\ : STD_LOGIC;
  signal \tmp_product__2_n_111\ : STD_LOGIC;
  signal \tmp_product__2_n_112\ : STD_LOGIC;
  signal \tmp_product__2_n_113\ : STD_LOGIC;
  signal \tmp_product__2_n_114\ : STD_LOGIC;
  signal \tmp_product__2_n_115\ : STD_LOGIC;
  signal \tmp_product__2_n_116\ : STD_LOGIC;
  signal \tmp_product__2_n_117\ : STD_LOGIC;
  signal \tmp_product__2_n_118\ : STD_LOGIC;
  signal \tmp_product__2_n_119\ : STD_LOGIC;
  signal \tmp_product__2_n_120\ : STD_LOGIC;
  signal \tmp_product__2_n_121\ : STD_LOGIC;
  signal \tmp_product__2_n_122\ : STD_LOGIC;
  signal \tmp_product__2_n_123\ : STD_LOGIC;
  signal \tmp_product__2_n_124\ : STD_LOGIC;
  signal \tmp_product__2_n_125\ : STD_LOGIC;
  signal \tmp_product__2_n_126\ : STD_LOGIC;
  signal \tmp_product__2_n_127\ : STD_LOGIC;
  signal \tmp_product__2_n_128\ : STD_LOGIC;
  signal \tmp_product__2_n_129\ : STD_LOGIC;
  signal \tmp_product__2_n_130\ : STD_LOGIC;
  signal \tmp_product__2_n_131\ : STD_LOGIC;
  signal \tmp_product__2_n_132\ : STD_LOGIC;
  signal \tmp_product__2_n_133\ : STD_LOGIC;
  signal \tmp_product__2_n_134\ : STD_LOGIC;
  signal \tmp_product__2_n_135\ : STD_LOGIC;
  signal \tmp_product__2_n_136\ : STD_LOGIC;
  signal \tmp_product__2_n_137\ : STD_LOGIC;
  signal \tmp_product__2_n_138\ : STD_LOGIC;
  signal \tmp_product__2_n_139\ : STD_LOGIC;
  signal \tmp_product__2_n_140\ : STD_LOGIC;
  signal \tmp_product__2_n_141\ : STD_LOGIC;
  signal \tmp_product__2_n_142\ : STD_LOGIC;
  signal \tmp_product__2_n_143\ : STD_LOGIC;
  signal \tmp_product__2_n_144\ : STD_LOGIC;
  signal \tmp_product__2_n_145\ : STD_LOGIC;
  signal \tmp_product__2_n_146\ : STD_LOGIC;
  signal \tmp_product__2_n_147\ : STD_LOGIC;
  signal \tmp_product__2_n_148\ : STD_LOGIC;
  signal \tmp_product__2_n_149\ : STD_LOGIC;
  signal \tmp_product__2_n_150\ : STD_LOGIC;
  signal \tmp_product__2_n_151\ : STD_LOGIC;
  signal \tmp_product__2_n_152\ : STD_LOGIC;
  signal \tmp_product__2_n_153\ : STD_LOGIC;
  signal tmp_product_n_106 : STD_LOGIC;
  signal tmp_product_n_107 : STD_LOGIC;
  signal tmp_product_n_108 : STD_LOGIC;
  signal tmp_product_n_109 : STD_LOGIC;
  signal tmp_product_n_110 : STD_LOGIC;
  signal tmp_product_n_111 : STD_LOGIC;
  signal tmp_product_n_112 : STD_LOGIC;
  signal tmp_product_n_113 : STD_LOGIC;
  signal tmp_product_n_114 : STD_LOGIC;
  signal tmp_product_n_115 : STD_LOGIC;
  signal tmp_product_n_116 : STD_LOGIC;
  signal tmp_product_n_117 : STD_LOGIC;
  signal tmp_product_n_118 : STD_LOGIC;
  signal tmp_product_n_119 : STD_LOGIC;
  signal tmp_product_n_120 : STD_LOGIC;
  signal tmp_product_n_121 : STD_LOGIC;
  signal tmp_product_n_122 : STD_LOGIC;
  signal tmp_product_n_123 : STD_LOGIC;
  signal tmp_product_n_124 : STD_LOGIC;
  signal tmp_product_n_125 : STD_LOGIC;
  signal tmp_product_n_126 : STD_LOGIC;
  signal tmp_product_n_127 : STD_LOGIC;
  signal tmp_product_n_128 : STD_LOGIC;
  signal tmp_product_n_129 : STD_LOGIC;
  signal tmp_product_n_130 : STD_LOGIC;
  signal tmp_product_n_131 : STD_LOGIC;
  signal tmp_product_n_132 : STD_LOGIC;
  signal tmp_product_n_133 : STD_LOGIC;
  signal tmp_product_n_134 : STD_LOGIC;
  signal tmp_product_n_135 : STD_LOGIC;
  signal tmp_product_n_136 : STD_LOGIC;
  signal tmp_product_n_137 : STD_LOGIC;
  signal tmp_product_n_138 : STD_LOGIC;
  signal tmp_product_n_139 : STD_LOGIC;
  signal tmp_product_n_140 : STD_LOGIC;
  signal tmp_product_n_141 : STD_LOGIC;
  signal tmp_product_n_142 : STD_LOGIC;
  signal tmp_product_n_143 : STD_LOGIC;
  signal tmp_product_n_144 : STD_LOGIC;
  signal tmp_product_n_145 : STD_LOGIC;
  signal tmp_product_n_146 : STD_LOGIC;
  signal tmp_product_n_147 : STD_LOGIC;
  signal tmp_product_n_148 : STD_LOGIC;
  signal tmp_product_n_149 : STD_LOGIC;
  signal tmp_product_n_150 : STD_LOGIC;
  signal tmp_product_n_151 : STD_LOGIC;
  signal tmp_product_n_152 : STD_LOGIC;
  signal tmp_product_n_153 : STD_LOGIC;
  signal NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_buff0_reg_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_buff0_reg_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff0_reg__0_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff0_reg__0_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff0_reg__0_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff0_reg__1_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff0_reg__1_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff0_reg__1_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff0_reg__2_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff0_reg__2_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff0_reg__2_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff0_reg__2_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff0_reg__3_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff0_reg__3_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff0_reg__3_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_buff1_reg_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_buff1_reg_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_buff1_reg_PCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff1_reg__0_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff1_reg__0_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff1_reg__0_PCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff1_reg__1_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff1_reg__1_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff1_reg__1_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff1_reg__1_PCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff1_reg__2_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff1_reg__2_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff1_reg__2_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff1_reg__2_PCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff2_reg[77]_i_105_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[77]_i_11_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[77]_i_110_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[77]_i_115_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[77]_i_2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[77]_i_21_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[77]_i_36_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[77]_i_50_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[77]_i_64_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[77]_i_81_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_buff2_reg[77]_i_91_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[81]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_buff2_reg[81]_i_10_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff2_reg[81]_i_10_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal NLW_tmp_product_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_tmp_product_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_tmp_product_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_P_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_tmp_product__0_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_tmp_product__0_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_tmp_product__0_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_tmp_product__1_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_tmp_product__1_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_tmp_product__1_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_tmp_product__1_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_tmp_product__2_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_tmp_product__2_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_tmp_product__2_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_tmp_product__2_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  attribute METHODOLOGY_DRC_VIOS : string;
  attribute METHODOLOGY_DRC_VIOS of buff0_reg : label is "{SYNTH-10 {cell *THIS*} {string 14x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff0_reg__0\ : label is "{SYNTH-10 {cell *THIS*} {string 14x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff0_reg__1\ : label is "{SYNTH-10 {cell *THIS*} {string 18x16 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff0_reg__2\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff0_reg__3\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of buff1_reg : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff1_reg__0\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff1_reg__1\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff1_reg__2\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute HLUTNM : string;
  attribute HLUTNM of \buff2[77]_i_10\ : label is "lutpair38";
  attribute HLUTNM of \buff2[77]_i_100\ : label is "lutpair22";
  attribute HLUTNM of \buff2[77]_i_101\ : label is "lutpair26";
  attribute HLUTNM of \buff2[77]_i_102\ : label is "lutpair25";
  attribute HLUTNM of \buff2[77]_i_103\ : label is "lutpair24";
  attribute HLUTNM of \buff2[77]_i_104\ : label is "lutpair23";
  attribute HLUTNM of \buff2[77]_i_12\ : label is "lutpair36";
  attribute HLUTNM of \buff2[77]_i_13\ : label is "lutpair35";
  attribute HLUTNM of \buff2[77]_i_14\ : label is "lutpair34";
  attribute HLUTNM of \buff2[77]_i_15\ : label is "lutpair33";
  attribute HLUTNM of \buff2[77]_i_16\ : label is "lutpair37";
  attribute HLUTNM of \buff2[77]_i_17\ : label is "lutpair36";
  attribute HLUTNM of \buff2[77]_i_18\ : label is "lutpair35";
  attribute HLUTNM of \buff2[77]_i_19\ : label is "lutpair34";
  attribute HLUTNM of \buff2[77]_i_23\ : label is "lutpair33";
  attribute HLUTNM of \buff2[77]_i_3\ : label is "lutpair40";
  attribute HLUTNM of \buff2[77]_i_4\ : label is "lutpair39";
  attribute HLUTNM of \buff2[77]_i_5\ : label is "lutpair38";
  attribute HLUTNM of \buff2[77]_i_6\ : label is "lutpair37";
  attribute HLUTNM of \buff2[77]_i_7\ : label is "lutpair41";
  attribute HLUTNM of \buff2[77]_i_71\ : label is "lutpair32";
  attribute HLUTNM of \buff2[77]_i_72\ : label is "lutpair31";
  attribute HLUTNM of \buff2[77]_i_73\ : label is "lutpair30";
  attribute HLUTNM of \buff2[77]_i_76\ : label is "lutpair32";
  attribute HLUTNM of \buff2[77]_i_77\ : label is "lutpair31";
  attribute HLUTNM of \buff2[77]_i_8\ : label is "lutpair40";
  attribute HLUTNM of \buff2[77]_i_83\ : label is "lutpair29";
  attribute HLUTNM of \buff2[77]_i_84\ : label is "lutpair28";
  attribute HLUTNM of \buff2[77]_i_85\ : label is "lutpair27";
  attribute HLUTNM of \buff2[77]_i_86\ : label is "lutpair26";
  attribute HLUTNM of \buff2[77]_i_87\ : label is "lutpair30";
  attribute HLUTNM of \buff2[77]_i_88\ : label is "lutpair29";
  attribute HLUTNM of \buff2[77]_i_89\ : label is "lutpair28";
  attribute HLUTNM of \buff2[77]_i_9\ : label is "lutpair39";
  attribute HLUTNM of \buff2[77]_i_90\ : label is "lutpair27";
  attribute HLUTNM of \buff2[77]_i_93\ : label is "lutpair22";
  attribute HLUTNM of \buff2[77]_i_97\ : label is "lutpair25";
  attribute HLUTNM of \buff2[77]_i_98\ : label is "lutpair24";
  attribute HLUTNM of \buff2[77]_i_99\ : label is "lutpair23";
  attribute HLUTNM of \buff2[81]_i_2\ : label is "lutpair43";
  attribute HLUTNM of \buff2[81]_i_3\ : label is "lutpair42";
  attribute HLUTNM of \buff2[81]_i_4\ : label is "lutpair41";
  attribute HLUTNM of \buff2[81]_i_7\ : label is "lutpair43";
  attribute HLUTNM of \buff2[81]_i_8\ : label is "lutpair42";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_105\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_11\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_110\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_115\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_20\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_21\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_27\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_36\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_41\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_50\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_55\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_64\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_69\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_81\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_82\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[77]_i_91\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[81]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[81]_i_10\ : label is 35;
  attribute ADDER_THRESHOLD of \buff2_reg[81]_i_9\ : label is 35;
  attribute METHODOLOGY_DRC_VIOS of tmp_product : label is "{SYNTH-10 {cell *THIS*} {string 18x16 16}}";
  attribute METHODOLOGY_DRC_VIOS of \tmp_product__0\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \tmp_product__1\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \tmp_product__2\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
begin
buff0_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 0) => B"000000000000010001010110001011",
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_buff0_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 14) => B"0000",
      B(13) => B(1),
      B(12) => B(1),
      B(11) => B(1),
      B(10) => B(1),
      B(9) => B(1),
      B(8) => B(1),
      B(7) => B(1),
      B(6) => B(1),
      B(5) => B(1),
      B(4 downto 3) => B(1 downto 0),
      B(2) => B(0),
      B(1) => B(0),
      B(0) => B(0),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_buff0_reg_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_buff0_reg_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => '0',
      CEA2 => '0',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => Q(0),
      CEB2 => '1',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => NLW_buff0_reg_OVERFLOW_UNCONNECTED,
      P(47) => buff0_reg_n_58,
      P(46) => buff0_reg_n_59,
      P(45) => buff0_reg_n_60,
      P(44) => buff0_reg_n_61,
      P(43) => buff0_reg_n_62,
      P(42) => buff0_reg_n_63,
      P(41) => buff0_reg_n_64,
      P(40) => buff0_reg_n_65,
      P(39) => buff0_reg_n_66,
      P(38) => buff0_reg_n_67,
      P(37) => buff0_reg_n_68,
      P(36) => buff0_reg_n_69,
      P(35) => buff0_reg_n_70,
      P(34) => buff0_reg_n_71,
      P(33) => buff0_reg_n_72,
      P(32) => buff0_reg_n_73,
      P(31) => buff0_reg_n_74,
      P(30) => buff0_reg_n_75,
      P(29) => buff0_reg_n_76,
      P(28) => buff0_reg_n_77,
      P(27) => buff0_reg_n_78,
      P(26) => buff0_reg_n_79,
      P(25) => buff0_reg_n_80,
      P(24) => buff0_reg_n_81,
      P(23) => buff0_reg_n_82,
      P(22) => buff0_reg_n_83,
      P(21) => buff0_reg_n_84,
      P(20) => buff0_reg_n_85,
      P(19) => buff0_reg_n_86,
      P(18) => buff0_reg_n_87,
      P(17) => buff0_reg_n_88,
      P(16) => buff0_reg_n_89,
      P(15) => buff0_reg_n_90,
      P(14) => buff0_reg_n_91,
      P(13) => buff0_reg_n_92,
      P(12) => buff0_reg_n_93,
      P(11) => buff0_reg_n_94,
      P(10) => buff0_reg_n_95,
      P(9) => buff0_reg_n_96,
      P(8) => buff0_reg_n_97,
      P(7) => buff0_reg_n_98,
      P(6) => buff0_reg_n_99,
      P(5) => buff0_reg_n_100,
      P(4) => buff0_reg_n_101,
      P(3) => buff0_reg_n_102,
      P(2) => buff0_reg_n_103,
      P(1) => buff0_reg_n_104,
      P(0) => buff0_reg_n_105,
      PATTERNBDETECT => NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_buff0_reg_PATTERNDETECT_UNCONNECTED,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => buff0_reg_n_106,
      PCOUT(46) => buff0_reg_n_107,
      PCOUT(45) => buff0_reg_n_108,
      PCOUT(44) => buff0_reg_n_109,
      PCOUT(43) => buff0_reg_n_110,
      PCOUT(42) => buff0_reg_n_111,
      PCOUT(41) => buff0_reg_n_112,
      PCOUT(40) => buff0_reg_n_113,
      PCOUT(39) => buff0_reg_n_114,
      PCOUT(38) => buff0_reg_n_115,
      PCOUT(37) => buff0_reg_n_116,
      PCOUT(36) => buff0_reg_n_117,
      PCOUT(35) => buff0_reg_n_118,
      PCOUT(34) => buff0_reg_n_119,
      PCOUT(33) => buff0_reg_n_120,
      PCOUT(32) => buff0_reg_n_121,
      PCOUT(31) => buff0_reg_n_122,
      PCOUT(30) => buff0_reg_n_123,
      PCOUT(29) => buff0_reg_n_124,
      PCOUT(28) => buff0_reg_n_125,
      PCOUT(27) => buff0_reg_n_126,
      PCOUT(26) => buff0_reg_n_127,
      PCOUT(25) => buff0_reg_n_128,
      PCOUT(24) => buff0_reg_n_129,
      PCOUT(23) => buff0_reg_n_130,
      PCOUT(22) => buff0_reg_n_131,
      PCOUT(21) => buff0_reg_n_132,
      PCOUT(20) => buff0_reg_n_133,
      PCOUT(19) => buff0_reg_n_134,
      PCOUT(18) => buff0_reg_n_135,
      PCOUT(17) => buff0_reg_n_136,
      PCOUT(16) => buff0_reg_n_137,
      PCOUT(15) => buff0_reg_n_138,
      PCOUT(14) => buff0_reg_n_139,
      PCOUT(13) => buff0_reg_n_140,
      PCOUT(12) => buff0_reg_n_141,
      PCOUT(11) => buff0_reg_n_142,
      PCOUT(10) => buff0_reg_n_143,
      PCOUT(9) => buff0_reg_n_144,
      PCOUT(8) => buff0_reg_n_145,
      PCOUT(7) => buff0_reg_n_146,
      PCOUT(6) => buff0_reg_n_147,
      PCOUT(5) => buff0_reg_n_148,
      PCOUT(4) => buff0_reg_n_149,
      PCOUT(3) => buff0_reg_n_150,
      PCOUT(2) => buff0_reg_n_151,
      PCOUT(1) => buff0_reg_n_152,
      PCOUT(0) => buff0_reg_n_153,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_buff0_reg_UNDERFLOW_UNCONNECTED
    );
\buff0_reg__0\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 0,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 0) => B"000000000000011011110011001110",
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff0_reg__0_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 14) => B"0000",
      B(13) => B(0),
      B(12) => B(0),
      B(11) => B(0),
      B(10) => B(0),
      B(9) => B(0),
      B(8) => B(0),
      B(7) => A(2),
      B(6) => A(2),
      B(5) => A(2),
      B(4) => A(2),
      B(3) => A(2),
      B(2) => A(2),
      B(1) => A(2),
      B(0) => A(2),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff0_reg__0_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff0_reg__0_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff0_reg__0_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => '0',
      CEA2 => '0',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => Q(0),
      CEB2 => '1',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff0_reg__0_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_buff0_reg__0_OVERFLOW_UNCONNECTED\,
      P(47) => \buff0_reg__0_n_58\,
      P(46) => \buff0_reg__0_n_59\,
      P(45) => \buff0_reg__0_n_60\,
      P(44) => \buff0_reg__0_n_61\,
      P(43) => \buff0_reg__0_n_62\,
      P(42) => \buff0_reg__0_n_63\,
      P(41) => \buff0_reg__0_n_64\,
      P(40) => \buff0_reg__0_n_65\,
      P(39) => \buff0_reg__0_n_66\,
      P(38) => \buff0_reg__0_n_67\,
      P(37) => \buff0_reg__0_n_68\,
      P(36) => \buff0_reg__0_n_69\,
      P(35) => \buff0_reg__0_n_70\,
      P(34) => \buff0_reg__0_n_71\,
      P(33) => \buff0_reg__0_n_72\,
      P(32) => \buff0_reg__0_n_73\,
      P(31) => \buff0_reg__0_n_74\,
      P(30) => \buff0_reg__0_n_75\,
      P(29) => \buff0_reg__0_n_76\,
      P(28) => \buff0_reg__0_n_77\,
      P(27) => \buff0_reg__0_n_78\,
      P(26) => \buff0_reg__0_n_79\,
      P(25) => \buff0_reg__0_n_80\,
      P(24) => \buff0_reg__0_n_81\,
      P(23) => \buff0_reg__0_n_82\,
      P(22) => \buff0_reg__0_n_83\,
      P(21) => \buff0_reg__0_n_84\,
      P(20) => \buff0_reg__0_n_85\,
      P(19) => \buff0_reg__0_n_86\,
      P(18) => \buff0_reg__0_n_87\,
      P(17) => \buff0_reg__0_n_88\,
      P(16) => \buff0_reg__0_n_89\,
      P(15) => \buff0_reg__0_n_90\,
      P(14) => \buff0_reg__0_n_91\,
      P(13) => \buff0_reg__0_n_92\,
      P(12) => \buff0_reg__0_n_93\,
      P(11) => \buff0_reg__0_n_94\,
      P(10) => \buff0_reg__0_n_95\,
      P(9) => \buff0_reg__0_n_96\,
      P(8) => \buff0_reg__0_n_97\,
      P(7) => \buff0_reg__0_n_98\,
      P(6) => \buff0_reg__0_n_99\,
      P(5) => \buff0_reg__0_n_100\,
      P(4) => \buff0_reg__0_n_101\,
      P(3) => \buff0_reg__0_n_102\,
      P(2) => \buff0_reg__0_n_103\,
      P(1) => \buff0_reg__0_n_104\,
      P(0) => \buff0_reg__0_n_105\,
      PATTERNBDETECT => \NLW_buff0_reg__0_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff0_reg__0_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => \buff0_reg__0_n_106\,
      PCOUT(46) => \buff0_reg__0_n_107\,
      PCOUT(45) => \buff0_reg__0_n_108\,
      PCOUT(44) => \buff0_reg__0_n_109\,
      PCOUT(43) => \buff0_reg__0_n_110\,
      PCOUT(42) => \buff0_reg__0_n_111\,
      PCOUT(41) => \buff0_reg__0_n_112\,
      PCOUT(40) => \buff0_reg__0_n_113\,
      PCOUT(39) => \buff0_reg__0_n_114\,
      PCOUT(38) => \buff0_reg__0_n_115\,
      PCOUT(37) => \buff0_reg__0_n_116\,
      PCOUT(36) => \buff0_reg__0_n_117\,
      PCOUT(35) => \buff0_reg__0_n_118\,
      PCOUT(34) => \buff0_reg__0_n_119\,
      PCOUT(33) => \buff0_reg__0_n_120\,
      PCOUT(32) => \buff0_reg__0_n_121\,
      PCOUT(31) => \buff0_reg__0_n_122\,
      PCOUT(30) => \buff0_reg__0_n_123\,
      PCOUT(29) => \buff0_reg__0_n_124\,
      PCOUT(28) => \buff0_reg__0_n_125\,
      PCOUT(27) => \buff0_reg__0_n_126\,
      PCOUT(26) => \buff0_reg__0_n_127\,
      PCOUT(25) => \buff0_reg__0_n_128\,
      PCOUT(24) => \buff0_reg__0_n_129\,
      PCOUT(23) => \buff0_reg__0_n_130\,
      PCOUT(22) => \buff0_reg__0_n_131\,
      PCOUT(21) => \buff0_reg__0_n_132\,
      PCOUT(20) => \buff0_reg__0_n_133\,
      PCOUT(19) => \buff0_reg__0_n_134\,
      PCOUT(18) => \buff0_reg__0_n_135\,
      PCOUT(17) => \buff0_reg__0_n_136\,
      PCOUT(16) => \buff0_reg__0_n_137\,
      PCOUT(15) => \buff0_reg__0_n_138\,
      PCOUT(14) => \buff0_reg__0_n_139\,
      PCOUT(13) => \buff0_reg__0_n_140\,
      PCOUT(12) => \buff0_reg__0_n_141\,
      PCOUT(11) => \buff0_reg__0_n_142\,
      PCOUT(10) => \buff0_reg__0_n_143\,
      PCOUT(9) => \buff0_reg__0_n_144\,
      PCOUT(8) => \buff0_reg__0_n_145\,
      PCOUT(7) => \buff0_reg__0_n_146\,
      PCOUT(6) => \buff0_reg__0_n_147\,
      PCOUT(5) => \buff0_reg__0_n_148\,
      PCOUT(4) => \buff0_reg__0_n_149\,
      PCOUT(3) => \buff0_reg__0_n_150\,
      PCOUT(2) => \buff0_reg__0_n_151\,
      PCOUT(1) => \buff0_reg__0_n_152\,
      PCOUT(0) => \buff0_reg__0_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff0_reg__0_UNDERFLOW_UNCONNECTED\
    );
\buff0_reg__1\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 0,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16) => \tmp_product__1_0\(8),
      A(15 downto 14) => \tmp_product__1_0\(8 downto 7),
      A(13) => \tmp_product__1_0\(7),
      A(12) => \tmp_product__1_0\(7),
      A(11) => \tmp_product__1_0\(7),
      A(10) => \tmp_product__1_0\(7),
      A(9) => \tmp_product__1_0\(7),
      A(8) => \tmp_product__1_0\(7),
      A(7 downto 0) => \tmp_product__1_0\(7 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff0_reg__1_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000010111010111110",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff0_reg__1_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff0_reg__1_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff0_reg__1_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_buff0_reg__1_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_buff0_reg__1_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_buff0_reg__1_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff0_reg__1_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => \buff0_reg__1_n_106\,
      PCOUT(46) => \buff0_reg__1_n_107\,
      PCOUT(45) => \buff0_reg__1_n_108\,
      PCOUT(44) => \buff0_reg__1_n_109\,
      PCOUT(43) => \buff0_reg__1_n_110\,
      PCOUT(42) => \buff0_reg__1_n_111\,
      PCOUT(41) => \buff0_reg__1_n_112\,
      PCOUT(40) => \buff0_reg__1_n_113\,
      PCOUT(39) => \buff0_reg__1_n_114\,
      PCOUT(38) => \buff0_reg__1_n_115\,
      PCOUT(37) => \buff0_reg__1_n_116\,
      PCOUT(36) => \buff0_reg__1_n_117\,
      PCOUT(35) => \buff0_reg__1_n_118\,
      PCOUT(34) => \buff0_reg__1_n_119\,
      PCOUT(33) => \buff0_reg__1_n_120\,
      PCOUT(32) => \buff0_reg__1_n_121\,
      PCOUT(31) => \buff0_reg__1_n_122\,
      PCOUT(30) => \buff0_reg__1_n_123\,
      PCOUT(29) => \buff0_reg__1_n_124\,
      PCOUT(28) => \buff0_reg__1_n_125\,
      PCOUT(27) => \buff0_reg__1_n_126\,
      PCOUT(26) => \buff0_reg__1_n_127\,
      PCOUT(25) => \buff0_reg__1_n_128\,
      PCOUT(24) => \buff0_reg__1_n_129\,
      PCOUT(23) => \buff0_reg__1_n_130\,
      PCOUT(22) => \buff0_reg__1_n_131\,
      PCOUT(21) => \buff0_reg__1_n_132\,
      PCOUT(20) => \buff0_reg__1_n_133\,
      PCOUT(19) => \buff0_reg__1_n_134\,
      PCOUT(18) => \buff0_reg__1_n_135\,
      PCOUT(17) => \buff0_reg__1_n_136\,
      PCOUT(16) => \buff0_reg__1_n_137\,
      PCOUT(15) => \buff0_reg__1_n_138\,
      PCOUT(14) => \buff0_reg__1_n_139\,
      PCOUT(13) => \buff0_reg__1_n_140\,
      PCOUT(12) => \buff0_reg__1_n_141\,
      PCOUT(11) => \buff0_reg__1_n_142\,
      PCOUT(10) => \buff0_reg__1_n_143\,
      PCOUT(9) => \buff0_reg__1_n_144\,
      PCOUT(8) => \buff0_reg__1_n_145\,
      PCOUT(7) => \buff0_reg__1_n_146\,
      PCOUT(6) => \buff0_reg__1_n_147\,
      PCOUT(5) => \buff0_reg__1_n_148\,
      PCOUT(4) => \buff0_reg__1_n_149\,
      PCOUT(3) => \buff0_reg__1_n_150\,
      PCOUT(2) => \buff0_reg__1_n_151\,
      PCOUT(1) => \buff0_reg__1_n_152\,
      PCOUT(0) => \buff0_reg__1_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff0_reg__1_UNDERFLOW_UNCONNECTED\
    );
\buff0_reg__2\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 0,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16) => \buff0_reg__2_0\(0),
      A(15) => \buff0_reg__2_0\(0),
      A(14) => \buff0_reg__2_0\(0),
      A(13) => \buff0_reg__2_0\(0),
      A(12) => \buff0_reg__2_0\(0),
      A(11) => \buff0_reg__2_0\(0),
      A(10) => \buff0_reg__2_0\(0),
      A(9) => \buff0_reg__2_0\(0),
      A(8) => \buff0_reg__2_0\(0),
      A(7) => \buff0_reg__2_0\(0),
      A(6 downto 0) => \tmp_product__1_0\(6 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff0_reg__2_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"010100001011010100",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff0_reg__2_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff0_reg__2_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff0_reg__2_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff0_reg__2_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_buff0_reg__2_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_buff0_reg__2_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_buff0_reg__2_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff0_reg__2_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => \buff0_reg__2_n_106\,
      PCOUT(46) => \buff0_reg__2_n_107\,
      PCOUT(45) => \buff0_reg__2_n_108\,
      PCOUT(44) => \buff0_reg__2_n_109\,
      PCOUT(43) => \buff0_reg__2_n_110\,
      PCOUT(42) => \buff0_reg__2_n_111\,
      PCOUT(41) => \buff0_reg__2_n_112\,
      PCOUT(40) => \buff0_reg__2_n_113\,
      PCOUT(39) => \buff0_reg__2_n_114\,
      PCOUT(38) => \buff0_reg__2_n_115\,
      PCOUT(37) => \buff0_reg__2_n_116\,
      PCOUT(36) => \buff0_reg__2_n_117\,
      PCOUT(35) => \buff0_reg__2_n_118\,
      PCOUT(34) => \buff0_reg__2_n_119\,
      PCOUT(33) => \buff0_reg__2_n_120\,
      PCOUT(32) => \buff0_reg__2_n_121\,
      PCOUT(31) => \buff0_reg__2_n_122\,
      PCOUT(30) => \buff0_reg__2_n_123\,
      PCOUT(29) => \buff0_reg__2_n_124\,
      PCOUT(28) => \buff0_reg__2_n_125\,
      PCOUT(27) => \buff0_reg__2_n_126\,
      PCOUT(26) => \buff0_reg__2_n_127\,
      PCOUT(25) => \buff0_reg__2_n_128\,
      PCOUT(24) => \buff0_reg__2_n_129\,
      PCOUT(23) => \buff0_reg__2_n_130\,
      PCOUT(22) => \buff0_reg__2_n_131\,
      PCOUT(21) => \buff0_reg__2_n_132\,
      PCOUT(20) => \buff0_reg__2_n_133\,
      PCOUT(19) => \buff0_reg__2_n_134\,
      PCOUT(18) => \buff0_reg__2_n_135\,
      PCOUT(17) => \buff0_reg__2_n_136\,
      PCOUT(16) => \buff0_reg__2_n_137\,
      PCOUT(15) => \buff0_reg__2_n_138\,
      PCOUT(14) => \buff0_reg__2_n_139\,
      PCOUT(13) => \buff0_reg__2_n_140\,
      PCOUT(12) => \buff0_reg__2_n_141\,
      PCOUT(11) => \buff0_reg__2_n_142\,
      PCOUT(10) => \buff0_reg__2_n_143\,
      PCOUT(9) => \buff0_reg__2_n_144\,
      PCOUT(8) => \buff0_reg__2_n_145\,
      PCOUT(7) => \buff0_reg__2_n_146\,
      PCOUT(6) => \buff0_reg__2_n_147\,
      PCOUT(5) => \buff0_reg__2_n_148\,
      PCOUT(4) => \buff0_reg__2_n_149\,
      PCOUT(3) => \buff0_reg__2_n_150\,
      PCOUT(2) => \buff0_reg__2_n_151\,
      PCOUT(1) => \buff0_reg__2_n_152\,
      PCOUT(0) => \buff0_reg__2_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff0_reg__2_UNDERFLOW_UNCONNECTED\
    );
\buff0_reg__3\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 0,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16) => \buff0_reg__3_0\(0),
      A(15) => \buff0_reg__3_0\(0),
      A(14) => \buff0_reg__3_0\(0),
      A(13) => \buff0_reg__3_0\(0),
      A(12) => \buff0_reg__3_0\(0),
      A(11) => \buff0_reg__3_0\(0),
      A(10) => \buff0_reg__3_0\(0),
      A(9) => \buff0_reg__3_0\(0),
      A(8) => \buff0_reg__3_0\(0),
      A(7) => \buff0_reg__3_0\(0),
      A(6 downto 0) => \tmp_product__1_0\(6 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff0_reg__3_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"011011110011001110",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff0_reg__3_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff0_reg__3_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff0_reg__3_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff0_reg__3_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_buff0_reg__3_OVERFLOW_UNCONNECTED\,
      P(47) => \buff0_reg__3_n_58\,
      P(46) => \buff0_reg__3_n_59\,
      P(45) => \buff0_reg__3_n_60\,
      P(44) => \buff0_reg__3_n_61\,
      P(43) => \buff0_reg__3_n_62\,
      P(42) => \buff0_reg__3_n_63\,
      P(41) => \buff0_reg__3_n_64\,
      P(40) => \buff0_reg__3_n_65\,
      P(39) => \buff0_reg__3_n_66\,
      P(38) => \buff0_reg__3_n_67\,
      P(37) => \buff0_reg__3_n_68\,
      P(36) => \buff0_reg__3_n_69\,
      P(35) => \buff0_reg__3_n_70\,
      P(34) => \buff0_reg__3_n_71\,
      P(33) => \buff0_reg__3_n_72\,
      P(32) => \buff0_reg__3_n_73\,
      P(31) => \buff0_reg__3_n_74\,
      P(30) => \buff0_reg__3_n_75\,
      P(29) => \buff0_reg__3_n_76\,
      P(28) => \buff0_reg__3_n_77\,
      P(27) => \buff0_reg__3_n_78\,
      P(26) => \buff0_reg__3_n_79\,
      P(25) => \buff0_reg__3_n_80\,
      P(24) => \buff0_reg__3_n_81\,
      P(23) => \buff0_reg__3_n_82\,
      P(22) => \buff0_reg__3_n_83\,
      P(21) => \buff0_reg__3_n_84\,
      P(20) => \buff0_reg__3_n_85\,
      P(19) => \buff0_reg__3_n_86\,
      P(18) => \buff0_reg__3_n_87\,
      P(17) => \buff0_reg__3_n_88\,
      P(16) => \buff0_reg__3_n_89\,
      P(15) => \buff0_reg__3_n_90\,
      P(14) => \buff0_reg__3_n_91\,
      P(13) => \buff0_reg__3_n_92\,
      P(12) => \buff0_reg__3_n_93\,
      P(11) => \buff0_reg__3_n_94\,
      P(10) => \buff0_reg__3_n_95\,
      P(9) => \buff0_reg__3_n_96\,
      P(8) => \buff0_reg__3_n_97\,
      P(7) => \buff0_reg__3_n_98\,
      P(6) => \buff0_reg__3_n_99\,
      P(5) => \buff0_reg__3_n_100\,
      P(4) => \buff0_reg__3_n_101\,
      P(3) => \buff0_reg__3_n_102\,
      P(2) => \buff0_reg__3_n_103\,
      P(1) => \buff0_reg__3_n_104\,
      P(0) => \buff0_reg__3_n_105\,
      PATTERNBDETECT => \NLW_buff0_reg__3_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff0_reg__3_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => \buff0_reg__3_n_106\,
      PCOUT(46) => \buff0_reg__3_n_107\,
      PCOUT(45) => \buff0_reg__3_n_108\,
      PCOUT(44) => \buff0_reg__3_n_109\,
      PCOUT(43) => \buff0_reg__3_n_110\,
      PCOUT(42) => \buff0_reg__3_n_111\,
      PCOUT(41) => \buff0_reg__3_n_112\,
      PCOUT(40) => \buff0_reg__3_n_113\,
      PCOUT(39) => \buff0_reg__3_n_114\,
      PCOUT(38) => \buff0_reg__3_n_115\,
      PCOUT(37) => \buff0_reg__3_n_116\,
      PCOUT(36) => \buff0_reg__3_n_117\,
      PCOUT(35) => \buff0_reg__3_n_118\,
      PCOUT(34) => \buff0_reg__3_n_119\,
      PCOUT(33) => \buff0_reg__3_n_120\,
      PCOUT(32) => \buff0_reg__3_n_121\,
      PCOUT(31) => \buff0_reg__3_n_122\,
      PCOUT(30) => \buff0_reg__3_n_123\,
      PCOUT(29) => \buff0_reg__3_n_124\,
      PCOUT(28) => \buff0_reg__3_n_125\,
      PCOUT(27) => \buff0_reg__3_n_126\,
      PCOUT(26) => \buff0_reg__3_n_127\,
      PCOUT(25) => \buff0_reg__3_n_128\,
      PCOUT(24) => \buff0_reg__3_n_129\,
      PCOUT(23) => \buff0_reg__3_n_130\,
      PCOUT(22) => \buff0_reg__3_n_131\,
      PCOUT(21) => \buff0_reg__3_n_132\,
      PCOUT(20) => \buff0_reg__3_n_133\,
      PCOUT(19) => \buff0_reg__3_n_134\,
      PCOUT(18) => \buff0_reg__3_n_135\,
      PCOUT(17) => \buff0_reg__3_n_136\,
      PCOUT(16) => \buff0_reg__3_n_137\,
      PCOUT(15) => \buff0_reg__3_n_138\,
      PCOUT(14) => \buff0_reg__3_n_139\,
      PCOUT(13) => \buff0_reg__3_n_140\,
      PCOUT(12) => \buff0_reg__3_n_141\,
      PCOUT(11) => \buff0_reg__3_n_142\,
      PCOUT(10) => \buff0_reg__3_n_143\,
      PCOUT(9) => \buff0_reg__3_n_144\,
      PCOUT(8) => \buff0_reg__3_n_145\,
      PCOUT(7) => \buff0_reg__3_n_146\,
      PCOUT(6) => \buff0_reg__3_n_147\,
      PCOUT(5) => \buff0_reg__3_n_148\,
      PCOUT(4) => \buff0_reg__3_n_149\,
      PCOUT(3) => \buff0_reg__3_n_150\,
      PCOUT(2) => \buff0_reg__3_n_151\,
      PCOUT(1) => \buff0_reg__3_n_152\,
      PCOUT(0) => \buff0_reg__3_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff0_reg__3_UNDERFLOW_UNCONNECTED\
    );
buff1_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => A(0),
      A(16) => A(0),
      A(15) => A(0),
      A(14) => A(0),
      A(13) => buff1_reg_0(1),
      A(12) => buff1_reg_0(1),
      A(11) => buff1_reg_0(1),
      A(10) => buff1_reg_0(1),
      A(9) => buff1_reg_0(1),
      A(8) => buff1_reg_0(1),
      A(7) => buff1_reg_0(1),
      A(6) => buff1_reg_0(1),
      A(5) => buff1_reg_0(1),
      A(4 downto 3) => buff1_reg_0(1 downto 0),
      A(2) => buff1_reg_0(0),
      A(1) => buff1_reg_0(0),
      A(0) => buff1_reg_0(0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_buff1_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"010100001011010100",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_buff1_reg_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_buff1_reg_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => NLW_buff1_reg_OVERFLOW_UNCONNECTED,
      P(47) => buff1_reg_n_58,
      P(46) => buff1_reg_n_59,
      P(45) => buff1_reg_n_60,
      P(44) => buff1_reg_n_61,
      P(43) => buff1_reg_n_62,
      P(42) => buff1_reg_n_63,
      P(41) => buff1_reg_n_64,
      P(40) => buff1_reg_n_65,
      P(39) => buff1_reg_n_66,
      P(38) => buff1_reg_n_67,
      P(37) => buff1_reg_n_68,
      P(36) => buff1_reg_n_69,
      P(35) => buff1_reg_n_70,
      P(34) => buff1_reg_n_71,
      P(33) => buff1_reg_n_72,
      P(32) => buff1_reg_n_73,
      P(31) => buff1_reg_n_74,
      P(30) => buff1_reg_n_75,
      P(29) => buff1_reg_n_76,
      P(28) => buff1_reg_n_77,
      P(27) => buff1_reg_n_78,
      P(26) => buff1_reg_n_79,
      P(25) => buff1_reg_n_80,
      P(24) => buff1_reg_n_81,
      P(23) => buff1_reg_n_82,
      P(22) => buff1_reg_n_83,
      P(21) => buff1_reg_n_84,
      P(20) => buff1_reg_n_85,
      P(19) => buff1_reg_n_86,
      P(18) => buff1_reg_n_87,
      P(17) => buff1_reg_n_88,
      P(16) => buff1_reg_n_89,
      P(15) => buff1_reg_n_90,
      P(14) => buff1_reg_n_91,
      P(13) => buff1_reg_n_92,
      P(12) => buff1_reg_n_93,
      P(11) => buff1_reg_n_94,
      P(10) => buff1_reg_n_95,
      P(9) => buff1_reg_n_96,
      P(8) => buff1_reg_n_97,
      P(7) => buff1_reg_n_98,
      P(6) => buff1_reg_n_99,
      P(5) => buff1_reg_n_100,
      P(4) => buff1_reg_n_101,
      P(3) => buff1_reg_n_102,
      P(2) => buff1_reg_n_103,
      P(1) => buff1_reg_n_104,
      P(0) => buff1_reg_n_105,
      PATTERNBDETECT => NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_buff1_reg_PATTERNDETECT_UNCONNECTED,
      PCIN(47) => tmp_product_n_106,
      PCIN(46) => tmp_product_n_107,
      PCIN(45) => tmp_product_n_108,
      PCIN(44) => tmp_product_n_109,
      PCIN(43) => tmp_product_n_110,
      PCIN(42) => tmp_product_n_111,
      PCIN(41) => tmp_product_n_112,
      PCIN(40) => tmp_product_n_113,
      PCIN(39) => tmp_product_n_114,
      PCIN(38) => tmp_product_n_115,
      PCIN(37) => tmp_product_n_116,
      PCIN(36) => tmp_product_n_117,
      PCIN(35) => tmp_product_n_118,
      PCIN(34) => tmp_product_n_119,
      PCIN(33) => tmp_product_n_120,
      PCIN(32) => tmp_product_n_121,
      PCIN(31) => tmp_product_n_122,
      PCIN(30) => tmp_product_n_123,
      PCIN(29) => tmp_product_n_124,
      PCIN(28) => tmp_product_n_125,
      PCIN(27) => tmp_product_n_126,
      PCIN(26) => tmp_product_n_127,
      PCIN(25) => tmp_product_n_128,
      PCIN(24) => tmp_product_n_129,
      PCIN(23) => tmp_product_n_130,
      PCIN(22) => tmp_product_n_131,
      PCIN(21) => tmp_product_n_132,
      PCIN(20) => tmp_product_n_133,
      PCIN(19) => tmp_product_n_134,
      PCIN(18) => tmp_product_n_135,
      PCIN(17) => tmp_product_n_136,
      PCIN(16) => tmp_product_n_137,
      PCIN(15) => tmp_product_n_138,
      PCIN(14) => tmp_product_n_139,
      PCIN(13) => tmp_product_n_140,
      PCIN(12) => tmp_product_n_141,
      PCIN(11) => tmp_product_n_142,
      PCIN(10) => tmp_product_n_143,
      PCIN(9) => tmp_product_n_144,
      PCIN(8) => tmp_product_n_145,
      PCIN(7) => tmp_product_n_146,
      PCIN(6) => tmp_product_n_147,
      PCIN(5) => tmp_product_n_148,
      PCIN(4) => tmp_product_n_149,
      PCIN(3) => tmp_product_n_150,
      PCIN(2) => tmp_product_n_151,
      PCIN(1) => tmp_product_n_152,
      PCIN(0) => tmp_product_n_153,
      PCOUT(47 downto 0) => NLW_buff1_reg_PCOUT_UNCONNECTED(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_buff1_reg_UNDERFLOW_UNCONNECTED
    );
\buff1_reg[0]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_105\,
      Q => \buff1_reg[0]__0_n_0\,
      R => '0'
    );
\buff1_reg[10]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_95\,
      Q => \buff1_reg[10]__0_n_0\,
      R => '0'
    );
\buff1_reg[11]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_94\,
      Q => \buff1_reg[11]__0_n_0\,
      R => '0'
    );
\buff1_reg[12]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_93\,
      Q => \buff1_reg[12]__0_n_0\,
      R => '0'
    );
\buff1_reg[13]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_92\,
      Q => \buff1_reg[13]__0_n_0\,
      R => '0'
    );
\buff1_reg[14]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_91\,
      Q => \buff1_reg[14]__0_n_0\,
      R => '0'
    );
\buff1_reg[15]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_90\,
      Q => \buff1_reg[15]__0_n_0\,
      R => '0'
    );
\buff1_reg[16]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_89\,
      Q => \buff1_reg[16]__0_n_0\,
      R => '0'
    );
\buff1_reg[1]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_104\,
      Q => \buff1_reg[1]__0_n_0\,
      R => '0'
    );
\buff1_reg[2]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_103\,
      Q => \buff1_reg[2]__0_n_0\,
      R => '0'
    );
\buff1_reg[3]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_102\,
      Q => \buff1_reg[3]__0_n_0\,
      R => '0'
    );
\buff1_reg[4]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_101\,
      Q => \buff1_reg[4]__0_n_0\,
      R => '0'
    );
\buff1_reg[5]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_100\,
      Q => \buff1_reg[5]__0_n_0\,
      R => '0'
    );
\buff1_reg[6]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_99\,
      Q => \buff1_reg[6]__0_n_0\,
      R => '0'
    );
\buff1_reg[7]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_98\,
      Q => \buff1_reg[7]__0_n_0\,
      R => '0'
    );
\buff1_reg[8]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_97\,
      Q => \buff1_reg[8]__0_n_0\,
      R => '0'
    );
\buff1_reg[9]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_96\,
      Q => \buff1_reg[9]__0_n_0\,
      R => '0'
    );
\buff1_reg__0\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => \buff1_reg__2_0\(0),
      A(16) => \buff1_reg__2_0\(0),
      A(15) => \buff1_reg__2_0\(0),
      A(14) => \buff1_reg__2_0\(0),
      A(13) => \buff1_reg__2_0\(0),
      A(12) => \buff1_reg__2_0\(0),
      A(11) => \buff1_reg__2_0\(0),
      A(10) => \buff1_reg__2_0\(0),
      A(9) => \buff1_reg__0_0\(0),
      A(8) => \buff1_reg__0_0\(0),
      A(7) => \buff1_reg__0_0\(0),
      A(6) => \buff1_reg__0_0\(0),
      A(5) => \buff1_reg__0_0\(0),
      A(4) => \buff1_reg__0_0\(0),
      A(3) => \buff1_reg__0_0\(0),
      A(2) => \buff1_reg__0_0\(0),
      A(1) => \buff1_reg__0_0\(0),
      A(0) => \buff1_reg__0_0\(0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff1_reg__0_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"010001010110001011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff1_reg__0_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff1_reg__0_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff1_reg__0_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_buff1_reg__0_OVERFLOW_UNCONNECTED\,
      P(47) => \buff1_reg__0_n_58\,
      P(46) => \buff1_reg__0_n_59\,
      P(45) => \buff1_reg__0_n_60\,
      P(44) => \buff1_reg__0_n_61\,
      P(43) => \buff1_reg__0_n_62\,
      P(42) => \buff1_reg__0_n_63\,
      P(41) => \buff1_reg__0_n_64\,
      P(40) => \buff1_reg__0_n_65\,
      P(39) => \buff1_reg__0_n_66\,
      P(38) => \buff1_reg__0_n_67\,
      P(37) => \buff1_reg__0_n_68\,
      P(36) => \buff1_reg__0_n_69\,
      P(35) => \buff1_reg__0_n_70\,
      P(34) => \buff1_reg__0_n_71\,
      P(33) => \buff1_reg__0_n_72\,
      P(32) => \buff1_reg__0_n_73\,
      P(31) => \buff1_reg__0_n_74\,
      P(30) => \buff1_reg__0_n_75\,
      P(29) => \buff1_reg__0_n_76\,
      P(28) => \buff1_reg__0_n_77\,
      P(27) => \buff1_reg__0_n_78\,
      P(26) => \buff1_reg__0_n_79\,
      P(25) => \buff1_reg__0_n_80\,
      P(24) => \buff1_reg__0_n_81\,
      P(23) => \buff1_reg__0_n_82\,
      P(22) => \buff1_reg__0_n_83\,
      P(21) => \buff1_reg__0_n_84\,
      P(20) => \buff1_reg__0_n_85\,
      P(19) => \buff1_reg__0_n_86\,
      P(18) => \buff1_reg__0_n_87\,
      P(17) => \buff1_reg__0_n_88\,
      P(16) => \buff1_reg__0_n_89\,
      P(15) => \buff1_reg__0_n_90\,
      P(14) => \buff1_reg__0_n_91\,
      P(13) => \buff1_reg__0_n_92\,
      P(12) => \buff1_reg__0_n_93\,
      P(11) => \buff1_reg__0_n_94\,
      P(10) => \buff1_reg__0_n_95\,
      P(9) => \buff1_reg__0_n_96\,
      P(8) => \buff1_reg__0_n_97\,
      P(7) => \buff1_reg__0_n_98\,
      P(6) => \buff1_reg__0_n_99\,
      P(5) => \buff1_reg__0_n_100\,
      P(4) => \buff1_reg__0_n_101\,
      P(3) => \buff1_reg__0_n_102\,
      P(2) => \buff1_reg__0_n_103\,
      P(1) => \buff1_reg__0_n_104\,
      P(0) => \buff1_reg__0_n_105\,
      PATTERNBDETECT => \NLW_buff1_reg__0_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff1_reg__0_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \tmp_product__0_n_106\,
      PCIN(46) => \tmp_product__0_n_107\,
      PCIN(45) => \tmp_product__0_n_108\,
      PCIN(44) => \tmp_product__0_n_109\,
      PCIN(43) => \tmp_product__0_n_110\,
      PCIN(42) => \tmp_product__0_n_111\,
      PCIN(41) => \tmp_product__0_n_112\,
      PCIN(40) => \tmp_product__0_n_113\,
      PCIN(39) => \tmp_product__0_n_114\,
      PCIN(38) => \tmp_product__0_n_115\,
      PCIN(37) => \tmp_product__0_n_116\,
      PCIN(36) => \tmp_product__0_n_117\,
      PCIN(35) => \tmp_product__0_n_118\,
      PCIN(34) => \tmp_product__0_n_119\,
      PCIN(33) => \tmp_product__0_n_120\,
      PCIN(32) => \tmp_product__0_n_121\,
      PCIN(31) => \tmp_product__0_n_122\,
      PCIN(30) => \tmp_product__0_n_123\,
      PCIN(29) => \tmp_product__0_n_124\,
      PCIN(28) => \tmp_product__0_n_125\,
      PCIN(27) => \tmp_product__0_n_126\,
      PCIN(26) => \tmp_product__0_n_127\,
      PCIN(25) => \tmp_product__0_n_128\,
      PCIN(24) => \tmp_product__0_n_129\,
      PCIN(23) => \tmp_product__0_n_130\,
      PCIN(22) => \tmp_product__0_n_131\,
      PCIN(21) => \tmp_product__0_n_132\,
      PCIN(20) => \tmp_product__0_n_133\,
      PCIN(19) => \tmp_product__0_n_134\,
      PCIN(18) => \tmp_product__0_n_135\,
      PCIN(17) => \tmp_product__0_n_136\,
      PCIN(16) => \tmp_product__0_n_137\,
      PCIN(15) => \tmp_product__0_n_138\,
      PCIN(14) => \tmp_product__0_n_139\,
      PCIN(13) => \tmp_product__0_n_140\,
      PCIN(12) => \tmp_product__0_n_141\,
      PCIN(11) => \tmp_product__0_n_142\,
      PCIN(10) => \tmp_product__0_n_143\,
      PCIN(9) => \tmp_product__0_n_144\,
      PCIN(8) => \tmp_product__0_n_145\,
      PCIN(7) => \tmp_product__0_n_146\,
      PCIN(6) => \tmp_product__0_n_147\,
      PCIN(5) => \tmp_product__0_n_148\,
      PCIN(4) => \tmp_product__0_n_149\,
      PCIN(3) => \tmp_product__0_n_150\,
      PCIN(2) => \tmp_product__0_n_151\,
      PCIN(1) => \tmp_product__0_n_152\,
      PCIN(0) => \tmp_product__0_n_153\,
      PCOUT(47 downto 0) => \NLW_buff1_reg__0_PCOUT_UNCONNECTED\(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff1_reg__0_UNDERFLOW_UNCONNECTED\
    );
\buff1_reg__1\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => \buff1_reg__2_0\(2),
      A(16) => \buff1_reg__2_0\(2),
      A(15) => \buff1_reg__2_0\(2),
      A(14) => \buff1_reg__2_0\(2),
      A(13) => \buff1_reg__2_0\(2),
      A(12 downto 11) => \buff1_reg__2_0\(2 downto 1),
      A(10) => \buff1_reg__2_0\(1),
      A(9) => \buff1_reg__2_0\(1),
      A(8) => \buff1_reg__2_0\(1),
      A(7) => \buff1_reg__2_0\(1),
      A(6) => \buff1_reg__2_0\(1),
      A(5) => \buff1_reg__2_0\(1),
      A(4) => \buff1_reg__2_0\(1),
      A(3) => \buff1_reg__2_0\(1),
      A(2 downto 1) => \buff1_reg__2_0\(1 downto 0),
      A(0) => \buff1_reg__2_0\(0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff1_reg__1_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"011011110011001110",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff1_reg__1_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff1_reg__1_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff1_reg__1_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff1_reg__1_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_buff1_reg__1_OVERFLOW_UNCONNECTED\,
      P(47) => \buff1_reg__1_n_58\,
      P(46) => \buff1_reg__1_n_59\,
      P(45) => \buff1_reg__1_n_60\,
      P(44) => \buff1_reg__1_n_61\,
      P(43) => \buff1_reg__1_n_62\,
      P(42) => \buff1_reg__1_n_63\,
      P(41) => \buff1_reg__1_n_64\,
      P(40) => \buff1_reg__1_n_65\,
      P(39) => \buff1_reg__1_n_66\,
      P(38) => \buff1_reg__1_n_67\,
      P(37) => \buff1_reg__1_n_68\,
      P(36) => \buff1_reg__1_n_69\,
      P(35) => \buff1_reg__1_n_70\,
      P(34) => \buff1_reg__1_n_71\,
      P(33) => \buff1_reg__1_n_72\,
      P(32) => \buff1_reg__1_n_73\,
      P(31) => \buff1_reg__1_n_74\,
      P(30) => \buff1_reg__1_n_75\,
      P(29) => \buff1_reg__1_n_76\,
      P(28) => \buff1_reg__1_n_77\,
      P(27) => \buff1_reg__1_n_78\,
      P(26) => \buff1_reg__1_n_79\,
      P(25) => \buff1_reg__1_n_80\,
      P(24) => \buff1_reg__1_n_81\,
      P(23) => \buff1_reg__1_n_82\,
      P(22) => \buff1_reg__1_n_83\,
      P(21) => \buff1_reg__1_n_84\,
      P(20) => \buff1_reg__1_n_85\,
      P(19) => \buff1_reg__1_n_86\,
      P(18) => \buff1_reg__1_n_87\,
      P(17) => \buff1_reg__1_n_88\,
      P(16) => \buff1_reg__1_n_89\,
      P(15) => \buff1_reg__1_n_90\,
      P(14) => \buff1_reg__1_n_91\,
      P(13) => \buff1_reg__1_n_92\,
      P(12) => \buff1_reg__1_n_93\,
      P(11) => \buff1_reg__1_n_94\,
      P(10) => \buff1_reg__1_n_95\,
      P(9) => \buff1_reg__1_n_96\,
      P(8) => \buff1_reg__1_n_97\,
      P(7) => \buff1_reg__1_n_98\,
      P(6) => \buff1_reg__1_n_99\,
      P(5) => \buff1_reg__1_n_100\,
      P(4) => \buff1_reg__1_n_101\,
      P(3) => \buff1_reg__1_n_102\,
      P(2) => \buff1_reg__1_n_103\,
      P(1) => \buff1_reg__1_n_104\,
      P(0) => \buff1_reg__1_n_105\,
      PATTERNBDETECT => \NLW_buff1_reg__1_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff1_reg__1_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \tmp_product__1_n_106\,
      PCIN(46) => \tmp_product__1_n_107\,
      PCIN(45) => \tmp_product__1_n_108\,
      PCIN(44) => \tmp_product__1_n_109\,
      PCIN(43) => \tmp_product__1_n_110\,
      PCIN(42) => \tmp_product__1_n_111\,
      PCIN(41) => \tmp_product__1_n_112\,
      PCIN(40) => \tmp_product__1_n_113\,
      PCIN(39) => \tmp_product__1_n_114\,
      PCIN(38) => \tmp_product__1_n_115\,
      PCIN(37) => \tmp_product__1_n_116\,
      PCIN(36) => \tmp_product__1_n_117\,
      PCIN(35) => \tmp_product__1_n_118\,
      PCIN(34) => \tmp_product__1_n_119\,
      PCIN(33) => \tmp_product__1_n_120\,
      PCIN(32) => \tmp_product__1_n_121\,
      PCIN(31) => \tmp_product__1_n_122\,
      PCIN(30) => \tmp_product__1_n_123\,
      PCIN(29) => \tmp_product__1_n_124\,
      PCIN(28) => \tmp_product__1_n_125\,
      PCIN(27) => \tmp_product__1_n_126\,
      PCIN(26) => \tmp_product__1_n_127\,
      PCIN(25) => \tmp_product__1_n_128\,
      PCIN(24) => \tmp_product__1_n_129\,
      PCIN(23) => \tmp_product__1_n_130\,
      PCIN(22) => \tmp_product__1_n_131\,
      PCIN(21) => \tmp_product__1_n_132\,
      PCIN(20) => \tmp_product__1_n_133\,
      PCIN(19) => \tmp_product__1_n_134\,
      PCIN(18) => \tmp_product__1_n_135\,
      PCIN(17) => \tmp_product__1_n_136\,
      PCIN(16) => \tmp_product__1_n_137\,
      PCIN(15) => \tmp_product__1_n_138\,
      PCIN(14) => \tmp_product__1_n_139\,
      PCIN(13) => \tmp_product__1_n_140\,
      PCIN(12) => \tmp_product__1_n_141\,
      PCIN(11) => \tmp_product__1_n_142\,
      PCIN(10) => \tmp_product__1_n_143\,
      PCIN(9) => \tmp_product__1_n_144\,
      PCIN(8) => \tmp_product__1_n_145\,
      PCIN(7) => \tmp_product__1_n_146\,
      PCIN(6) => \tmp_product__1_n_147\,
      PCIN(5) => \tmp_product__1_n_148\,
      PCIN(4) => \tmp_product__1_n_149\,
      PCIN(3) => \tmp_product__1_n_150\,
      PCIN(2) => \tmp_product__1_n_151\,
      PCIN(1) => \tmp_product__1_n_152\,
      PCIN(0) => \tmp_product__1_n_153\,
      PCOUT(47 downto 0) => \NLW_buff1_reg__1_PCOUT_UNCONNECTED\(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff1_reg__1_UNDERFLOW_UNCONNECTED\
    );
\buff1_reg__2\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => \tmp_product__0_0\(0),
      A(16) => \tmp_product__0_0\(0),
      A(15) => \tmp_product__0_0\(0),
      A(14) => \tmp_product__0_0\(0),
      A(13) => \buff1_reg__2_1\(0),
      A(12) => \buff1_reg__2_1\(0),
      A(11) => \buff1_reg__2_1\(0),
      A(10) => \buff1_reg__2_1\(0),
      A(9) => \buff1_reg__2_1\(0),
      A(8) => \buff1_reg__2_1\(0),
      A(7) => \buff1_reg__2_1\(0),
      A(6) => \buff1_reg__2_1\(0),
      A(5) => \buff1_reg__2_1\(0),
      A(4) => \buff1_reg__2_1\(0),
      A(3) => \buff1_reg__2_0\(2),
      A(2) => \buff1_reg__2_0\(2),
      A(1) => \buff1_reg__2_0\(2),
      A(0) => \buff1_reg__2_0\(2),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff1_reg__2_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"011011110011001110",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff1_reg__2_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff1_reg__2_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff1_reg__2_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff1_reg__2_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_buff1_reg__2_OVERFLOW_UNCONNECTED\,
      P(47) => \buff1_reg__2_n_58\,
      P(46) => \buff1_reg__2_n_59\,
      P(45) => \buff1_reg__2_n_60\,
      P(44) => \buff1_reg__2_n_61\,
      P(43) => \buff1_reg__2_n_62\,
      P(42) => \buff1_reg__2_n_63\,
      P(41) => \buff1_reg__2_n_64\,
      P(40) => \buff1_reg__2_n_65\,
      P(39) => \buff1_reg__2_n_66\,
      P(38) => \buff1_reg__2_n_67\,
      P(37) => \buff1_reg__2_n_68\,
      P(36) => \buff1_reg__2_n_69\,
      P(35) => \buff1_reg__2_n_70\,
      P(34) => \buff1_reg__2_n_71\,
      P(33) => \buff1_reg__2_n_72\,
      P(32) => \buff1_reg__2_n_73\,
      P(31) => \buff1_reg__2_n_74\,
      P(30) => \buff1_reg__2_n_75\,
      P(29) => \buff1_reg__2_n_76\,
      P(28) => \buff1_reg__2_n_77\,
      P(27) => \buff1_reg__2_n_78\,
      P(26) => \buff1_reg__2_n_79\,
      P(25) => \buff1_reg__2_n_80\,
      P(24) => \buff1_reg__2_n_81\,
      P(23) => \buff1_reg__2_n_82\,
      P(22) => \buff1_reg__2_n_83\,
      P(21) => \buff1_reg__2_n_84\,
      P(20) => \buff1_reg__2_n_85\,
      P(19) => \buff1_reg__2_n_86\,
      P(18) => \buff1_reg__2_n_87\,
      P(17) => \buff1_reg__2_n_88\,
      P(16) => \buff1_reg__2_n_89\,
      P(15) => \buff1_reg__2_n_90\,
      P(14) => \buff1_reg__2_n_91\,
      P(13) => \buff1_reg__2_n_92\,
      P(12) => \buff1_reg__2_n_93\,
      P(11) => \buff1_reg__2_n_94\,
      P(10) => \buff1_reg__2_n_95\,
      P(9) => \buff1_reg__2_n_96\,
      P(8) => \buff1_reg__2_n_97\,
      P(7) => \buff1_reg__2_n_98\,
      P(6) => \buff1_reg__2_n_99\,
      P(5) => \buff1_reg__2_n_100\,
      P(4) => \buff1_reg__2_n_101\,
      P(3) => \buff1_reg__2_n_102\,
      P(2) => \buff1_reg__2_n_103\,
      P(1) => \buff1_reg__2_n_104\,
      P(0) => \buff1_reg__2_n_105\,
      PATTERNBDETECT => \NLW_buff1_reg__2_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff1_reg__2_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \tmp_product__2_n_106\,
      PCIN(46) => \tmp_product__2_n_107\,
      PCIN(45) => \tmp_product__2_n_108\,
      PCIN(44) => \tmp_product__2_n_109\,
      PCIN(43) => \tmp_product__2_n_110\,
      PCIN(42) => \tmp_product__2_n_111\,
      PCIN(41) => \tmp_product__2_n_112\,
      PCIN(40) => \tmp_product__2_n_113\,
      PCIN(39) => \tmp_product__2_n_114\,
      PCIN(38) => \tmp_product__2_n_115\,
      PCIN(37) => \tmp_product__2_n_116\,
      PCIN(36) => \tmp_product__2_n_117\,
      PCIN(35) => \tmp_product__2_n_118\,
      PCIN(34) => \tmp_product__2_n_119\,
      PCIN(33) => \tmp_product__2_n_120\,
      PCIN(32) => \tmp_product__2_n_121\,
      PCIN(31) => \tmp_product__2_n_122\,
      PCIN(30) => \tmp_product__2_n_123\,
      PCIN(29) => \tmp_product__2_n_124\,
      PCIN(28) => \tmp_product__2_n_125\,
      PCIN(27) => \tmp_product__2_n_126\,
      PCIN(26) => \tmp_product__2_n_127\,
      PCIN(25) => \tmp_product__2_n_128\,
      PCIN(24) => \tmp_product__2_n_129\,
      PCIN(23) => \tmp_product__2_n_130\,
      PCIN(22) => \tmp_product__2_n_131\,
      PCIN(21) => \tmp_product__2_n_132\,
      PCIN(20) => \tmp_product__2_n_133\,
      PCIN(19) => \tmp_product__2_n_134\,
      PCIN(18) => \tmp_product__2_n_135\,
      PCIN(17) => \tmp_product__2_n_136\,
      PCIN(16) => \tmp_product__2_n_137\,
      PCIN(15) => \tmp_product__2_n_138\,
      PCIN(14) => \tmp_product__2_n_139\,
      PCIN(13) => \tmp_product__2_n_140\,
      PCIN(12) => \tmp_product__2_n_141\,
      PCIN(11) => \tmp_product__2_n_142\,
      PCIN(10) => \tmp_product__2_n_143\,
      PCIN(9) => \tmp_product__2_n_144\,
      PCIN(8) => \tmp_product__2_n_145\,
      PCIN(7) => \tmp_product__2_n_146\,
      PCIN(6) => \tmp_product__2_n_147\,
      PCIN(5) => \tmp_product__2_n_148\,
      PCIN(4) => \tmp_product__2_n_149\,
      PCIN(3) => \tmp_product__2_n_150\,
      PCIN(2) => \tmp_product__2_n_151\,
      PCIN(1) => \tmp_product__2_n_152\,
      PCIN(0) => \tmp_product__2_n_153\,
      PCOUT(47 downto 0) => \NLW_buff1_reg__2_PCOUT_UNCONNECTED\(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff1_reg__2_UNDERFLOW_UNCONNECTED\
    );
\buff2[77]_i_10\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[77]_i_20_n_6\,
      I1 => buff0_reg_n_99,
      I2 => buff1_reg_n_99,
      I3 => \buff2[77]_i_6_n_0\,
      O => \buff2[77]_i_10_n_0\
    );
\buff2[77]_i_100\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_104\,
      I1 => \buff1_reg__1_n_87\,
      I2 => \buff1_reg__2_n_70\,
      O => \buff2[77]_i_100_n_0\
    );
\buff2[77]_i_101\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_100\,
      I1 => \buff1_reg__1_n_83\,
      I2 => \buff1_reg__2_n_66\,
      I3 => \buff2[77]_i_97_n_0\,
      O => \buff2[77]_i_101_n_0\
    );
\buff2[77]_i_102\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_101\,
      I1 => \buff1_reg__1_n_84\,
      I2 => \buff1_reg__2_n_67\,
      I3 => \buff2[77]_i_98_n_0\,
      O => \buff2[77]_i_102_n_0\
    );
\buff2[77]_i_103\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_102\,
      I1 => \buff1_reg__1_n_85\,
      I2 => \buff1_reg__2_n_68\,
      I3 => \buff2[77]_i_99_n_0\,
      O => \buff2[77]_i_103_n_0\
    );
\buff2[77]_i_104\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_103\,
      I1 => \buff1_reg__1_n_86\,
      I2 => \buff1_reg__2_n_69\,
      I3 => \buff2[77]_i_100_n_0\,
      O => \buff2[77]_i_104_n_0\
    );
\buff2[77]_i_106\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_74\,
      I1 => \buff1_reg__1_n_91\,
      O => \buff2[77]_i_106_n_0\
    );
\buff2[77]_i_107\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_75\,
      I1 => \buff1_reg__1_n_92\,
      O => \buff2[77]_i_107_n_0\
    );
\buff2[77]_i_108\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_76\,
      I1 => \buff1_reg__1_n_93\,
      O => \buff2[77]_i_108_n_0\
    );
\buff2[77]_i_109\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_77\,
      I1 => \buff1_reg__1_n_94\,
      O => \buff2[77]_i_109_n_0\
    );
\buff2[77]_i_111\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_78\,
      I1 => \buff1_reg__1_n_95\,
      O => \buff2[77]_i_111_n_0\
    );
\buff2[77]_i_112\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_79\,
      I1 => \buff1_reg__1_n_96\,
      O => \buff2[77]_i_112_n_0\
    );
\buff2[77]_i_113\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_80\,
      I1 => \buff1_reg__1_n_97\,
      O => \buff2[77]_i_113_n_0\
    );
\buff2[77]_i_114\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_81\,
      I1 => \buff1_reg__1_n_98\,
      O => \buff2[77]_i_114_n_0\
    );
\buff2[77]_i_116\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_82\,
      I1 => \buff1_reg__1_n_99\,
      O => \buff2[77]_i_116_n_0\
    );
\buff2[77]_i_117\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_83\,
      I1 => \buff1_reg__1_n_100\,
      O => \buff2[77]_i_117_n_0\
    );
\buff2[77]_i_118\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_84\,
      I1 => \buff1_reg__1_n_101\,
      O => \buff2[77]_i_118_n_0\
    );
\buff2[77]_i_119\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_85\,
      I1 => \buff1_reg__1_n_102\,
      O => \buff2[77]_i_119_n_0\
    );
\buff2[77]_i_12\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[77]_i_27_n_4\,
      I1 => buff0_reg_n_101,
      I2 => buff1_reg_n_101,
      O => \buff2[77]_i_12_n_0\
    );
\buff2[77]_i_120\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_86\,
      I1 => \buff1_reg__1_n_103\,
      O => \buff2[77]_i_120_n_0\
    );
\buff2[77]_i_121\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_87\,
      I1 => \buff1_reg__1_n_104\,
      O => \buff2[77]_i_121_n_0\
    );
\buff2[77]_i_122\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_88\,
      I1 => \buff1_reg__1_n_105\,
      O => \buff2[77]_i_122_n_0\
    );
\buff2[77]_i_13\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[77]_i_27_n_5\,
      I1 => buff0_reg_n_102,
      I2 => buff1_reg_n_102,
      O => \buff2[77]_i_13_n_0\
    );
\buff2[77]_i_14\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[77]_i_27_n_6\,
      I1 => buff0_reg_n_103,
      I2 => buff1_reg_n_103,
      O => \buff2[77]_i_14_n_0\
    );
\buff2[77]_i_15\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[77]_i_27_n_7\,
      I1 => buff0_reg_n_104,
      I2 => buff1_reg_n_104,
      O => \buff2[77]_i_15_n_0\
    );
\buff2[77]_i_16\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[77]_i_20_n_7\,
      I1 => buff0_reg_n_100,
      I2 => buff1_reg_n_100,
      I3 => \buff2[77]_i_12_n_0\,
      O => \buff2[77]_i_16_n_0\
    );
\buff2[77]_i_17\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[77]_i_27_n_4\,
      I1 => buff0_reg_n_101,
      I2 => buff1_reg_n_101,
      I3 => \buff2[77]_i_13_n_0\,
      O => \buff2[77]_i_17_n_0\
    );
\buff2[77]_i_18\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[77]_i_27_n_5\,
      I1 => buff0_reg_n_102,
      I2 => buff1_reg_n_102,
      I3 => \buff2[77]_i_14_n_0\,
      O => \buff2[77]_i_18_n_0\
    );
\buff2[77]_i_19\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[77]_i_27_n_6\,
      I1 => buff0_reg_n_103,
      I2 => buff1_reg_n_103,
      I3 => \buff2[77]_i_15_n_0\,
      O => \buff2[77]_i_19_n_0\
    );
\buff2[77]_i_22\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => buff1_reg_n_104,
      I1 => \buff2_reg[77]_i_27_n_7\,
      I2 => buff0_reg_n_104,
      O => \buff2[77]_i_22_n_0\
    );
\buff2[77]_i_23\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"69969696"
    )
        port map (
      I0 => \buff2_reg[77]_i_27_n_7\,
      I1 => buff0_reg_n_104,
      I2 => buff1_reg_n_104,
      I3 => buff0_reg_n_105,
      I4 => \buff2_reg[77]_i_41_n_4\,
      O => \buff2[77]_i_23_n_0\
    );
\buff2[77]_i_24\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => \buff2_reg[77]_i_41_n_4\,
      I1 => buff0_reg_n_105,
      I2 => buff1_reg_n_105,
      O => \buff2[77]_i_24_n_0\
    );
\buff2[77]_i_25\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[16]__0_n_0\,
      I1 => \buff2_reg[77]_i_41_n_5\,
      O => \buff2[77]_i_25_n_0\
    );
\buff2[77]_i_26\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[15]__0_n_0\,
      I1 => \buff2_reg[77]_i_41_n_6\,
      O => \buff2[77]_i_26_n_0\
    );
\buff2[77]_i_28\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_82\,
      I1 => \buff1_reg__1_n_65\,
      I2 => \buff1_reg__0_n_81\,
      I3 => \buff1_reg__1_n_64\,
      O => \buff2[77]_i_28_n_0\
    );
\buff2[77]_i_29\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_83\,
      I1 => \buff1_reg__1_n_66\,
      I2 => \buff1_reg__0_n_82\,
      I3 => \buff1_reg__1_n_65\,
      O => \buff2[77]_i_29_n_0\
    );
\buff2[77]_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[77]_i_20_n_4\,
      I1 => buff0_reg_n_97,
      I2 => buff1_reg_n_97,
      O => \buff2[77]_i_3_n_0\
    );
\buff2[77]_i_30\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_84\,
      I1 => \buff1_reg__1_n_67\,
      I2 => \buff1_reg__0_n_83\,
      I3 => \buff1_reg__1_n_66\,
      O => \buff2[77]_i_30_n_0\
    );
\buff2[77]_i_31\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_85\,
      I1 => \buff1_reg__1_n_68\,
      I2 => \buff1_reg__0_n_84\,
      I3 => \buff1_reg__1_n_67\,
      O => \buff2[77]_i_31_n_0\
    );
\buff2[77]_i_32\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_65\,
      I1 => \buff1_reg__0_n_82\,
      I2 => \buff1_reg__1_n_63\,
      I3 => \buff1_reg__0_n_80\,
      I4 => \buff1_reg__1_n_64\,
      I5 => \buff1_reg__0_n_81\,
      O => \buff2[77]_i_32_n_0\
    );
\buff2[77]_i_33\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_66\,
      I1 => \buff1_reg__0_n_83\,
      I2 => \buff1_reg__1_n_64\,
      I3 => \buff1_reg__0_n_81\,
      I4 => \buff1_reg__1_n_65\,
      I5 => \buff1_reg__0_n_82\,
      O => \buff2[77]_i_33_n_0\
    );
\buff2[77]_i_34\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_67\,
      I1 => \buff1_reg__0_n_84\,
      I2 => \buff1_reg__1_n_65\,
      I3 => \buff1_reg__0_n_82\,
      I4 => \buff1_reg__1_n_66\,
      I5 => \buff1_reg__0_n_83\,
      O => \buff2[77]_i_34_n_0\
    );
\buff2[77]_i_35\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_68\,
      I1 => \buff1_reg__0_n_85\,
      I2 => \buff1_reg__1_n_66\,
      I3 => \buff1_reg__0_n_83\,
      I4 => \buff1_reg__1_n_67\,
      I5 => \buff1_reg__0_n_84\,
      O => \buff2[77]_i_35_n_0\
    );
\buff2[77]_i_37\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[14]__0_n_0\,
      I1 => \buff2_reg[77]_i_41_n_7\,
      O => \buff2[77]_i_37_n_0\
    );
\buff2[77]_i_38\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[13]__0_n_0\,
      I1 => \buff2_reg[77]_i_55_n_4\,
      O => \buff2[77]_i_38_n_0\
    );
\buff2[77]_i_39\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[12]__0_n_0\,
      I1 => \buff2_reg[77]_i_55_n_5\,
      O => \buff2[77]_i_39_n_0\
    );
\buff2[77]_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[77]_i_20_n_5\,
      I1 => buff0_reg_n_98,
      I2 => buff1_reg_n_98,
      O => \buff2[77]_i_4_n_0\
    );
\buff2[77]_i_40\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[11]__0_n_0\,
      I1 => \buff2_reg[77]_i_55_n_6\,
      O => \buff2[77]_i_40_n_0\
    );
\buff2[77]_i_42\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_86\,
      I1 => \buff1_reg__1_n_69\,
      I2 => \buff1_reg__0_n_85\,
      I3 => \buff1_reg__1_n_68\,
      O => \buff2[77]_i_42_n_0\
    );
\buff2[77]_i_43\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_87\,
      I1 => \buff1_reg__1_n_70\,
      I2 => \buff1_reg__0_n_86\,
      I3 => \buff1_reg__1_n_69\,
      O => \buff2[77]_i_43_n_0\
    );
\buff2[77]_i_44\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_88\,
      I1 => \buff1_reg__1_n_71\,
      I2 => \buff1_reg__0_n_87\,
      I3 => \buff1_reg__1_n_70\,
      O => \buff2[77]_i_44_n_0\
    );
\buff2[77]_i_45\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_89\,
      I1 => \buff1_reg__1_n_72\,
      I2 => \buff1_reg__0_n_88\,
      I3 => \buff1_reg__1_n_71\,
      O => \buff2[77]_i_45_n_0\
    );
\buff2[77]_i_46\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_69\,
      I1 => \buff1_reg__0_n_86\,
      I2 => \buff1_reg__1_n_67\,
      I3 => \buff1_reg__0_n_84\,
      I4 => \buff1_reg__1_n_68\,
      I5 => \buff1_reg__0_n_85\,
      O => \buff2[77]_i_46_n_0\
    );
\buff2[77]_i_47\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_70\,
      I1 => \buff1_reg__0_n_87\,
      I2 => \buff1_reg__1_n_68\,
      I3 => \buff1_reg__0_n_85\,
      I4 => \buff1_reg__1_n_69\,
      I5 => \buff1_reg__0_n_86\,
      O => \buff2[77]_i_47_n_0\
    );
\buff2[77]_i_48\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_71\,
      I1 => \buff1_reg__0_n_88\,
      I2 => \buff1_reg__1_n_69\,
      I3 => \buff1_reg__0_n_86\,
      I4 => \buff1_reg__1_n_70\,
      I5 => \buff1_reg__0_n_87\,
      O => \buff2[77]_i_48_n_0\
    );
\buff2[77]_i_49\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_72\,
      I1 => \buff1_reg__0_n_89\,
      I2 => \buff1_reg__1_n_70\,
      I3 => \buff1_reg__0_n_87\,
      I4 => \buff1_reg__1_n_71\,
      I5 => \buff1_reg__0_n_88\,
      O => \buff2[77]_i_49_n_0\
    );
\buff2[77]_i_5\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[77]_i_20_n_6\,
      I1 => buff0_reg_n_99,
      I2 => buff1_reg_n_99,
      O => \buff2[77]_i_5_n_0\
    );
\buff2[77]_i_51\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[10]__0_n_0\,
      I1 => \buff2_reg[77]_i_55_n_7\,
      O => \buff2[77]_i_51_n_0\
    );
\buff2[77]_i_52\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[9]__0_n_0\,
      I1 => \buff2_reg[77]_i_69_n_4\,
      O => \buff2[77]_i_52_n_0\
    );
\buff2[77]_i_53\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[8]__0_n_0\,
      I1 => \buff2_reg[77]_i_69_n_5\,
      O => \buff2[77]_i_53_n_0\
    );
\buff2[77]_i_54\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[7]__0_n_0\,
      I1 => \buff2_reg[77]_i_69_n_6\,
      O => \buff2[77]_i_54_n_0\
    );
\buff2[77]_i_56\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_90\,
      I1 => \buff1_reg__1_n_73\,
      I2 => \buff1_reg__0_n_89\,
      I3 => \buff1_reg__1_n_72\,
      O => \buff2[77]_i_56_n_0\
    );
\buff2[77]_i_57\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_91\,
      I1 => \buff1_reg__1_n_74\,
      I2 => \buff1_reg__0_n_90\,
      I3 => \buff1_reg__1_n_73\,
      O => \buff2[77]_i_57_n_0\
    );
\buff2[77]_i_58\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_92\,
      I1 => \buff1_reg__1_n_75\,
      I2 => \buff1_reg__0_n_91\,
      I3 => \buff1_reg__1_n_74\,
      O => \buff2[77]_i_58_n_0\
    );
\buff2[77]_i_59\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"09"
    )
        port map (
      I0 => \buff1_reg__0_n_92\,
      I1 => \buff1_reg__1_n_75\,
      I2 => \buff1_reg__2_n_58\,
      O => \buff2[77]_i_59_n_0\
    );
\buff2[77]_i_6\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[77]_i_20_n_7\,
      I1 => buff0_reg_n_100,
      I2 => buff1_reg_n_100,
      O => \buff2[77]_i_6_n_0\
    );
\buff2[77]_i_60\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_73\,
      I1 => \buff1_reg__0_n_90\,
      I2 => \buff1_reg__1_n_71\,
      I3 => \buff1_reg__0_n_88\,
      I4 => \buff1_reg__1_n_72\,
      I5 => \buff1_reg__0_n_89\,
      O => \buff2[77]_i_60_n_0\
    );
\buff2[77]_i_61\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_74\,
      I1 => \buff1_reg__0_n_91\,
      I2 => \buff1_reg__1_n_72\,
      I3 => \buff1_reg__0_n_89\,
      I4 => \buff1_reg__1_n_73\,
      I5 => \buff1_reg__0_n_90\,
      O => \buff2[77]_i_61_n_0\
    );
\buff2[77]_i_62\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_75\,
      I1 => \buff1_reg__0_n_92\,
      I2 => \buff1_reg__1_n_73\,
      I3 => \buff1_reg__0_n_90\,
      I4 => \buff1_reg__1_n_74\,
      I5 => \buff1_reg__0_n_91\,
      O => \buff2[77]_i_62_n_0\
    );
\buff2[77]_i_63\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"693C3C96"
    )
        port map (
      I0 => \buff1_reg__2_n_58\,
      I1 => \buff1_reg__1_n_74\,
      I2 => \buff1_reg__0_n_91\,
      I3 => \buff1_reg__1_n_75\,
      I4 => \buff1_reg__0_n_92\,
      O => \buff2[77]_i_63_n_0\
    );
\buff2[77]_i_65\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[6]__0_n_0\,
      I1 => \buff2_reg[77]_i_69_n_7\,
      O => \buff2[77]_i_65_n_0\
    );
\buff2[77]_i_66\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[5]__0_n_0\,
      I1 => \buff2_reg[77]_i_82_n_4\,
      O => \buff2[77]_i_66_n_0\
    );
\buff2[77]_i_67\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[4]__0_n_0\,
      I1 => \buff2_reg[77]_i_82_n_5\,
      O => \buff2[77]_i_67_n_0\
    );
\buff2[77]_i_68\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[3]__0_n_0\,
      I1 => \buff2_reg[77]_i_82_n_6\,
      O => \buff2[77]_i_68_n_0\
    );
\buff2[77]_i_7\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[81]_i_9_n_7\,
      I1 => buff0_reg_n_96,
      I2 => buff1_reg_n_96,
      I3 => \buff2[77]_i_3_n_0\,
      O => \buff2[77]_i_7_n_0\
    );
\buff2[77]_i_70\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => \buff1_reg__2_n_58\,
      I1 => \buff1_reg__1_n_75\,
      I2 => \buff1_reg__0_n_92\,
      O => \buff2[77]_i_70_n_0\
    );
\buff2[77]_i_71\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_94\,
      I1 => \buff1_reg__1_n_77\,
      I2 => \buff1_reg__2_n_60\,
      O => \buff2[77]_i_71_n_0\
    );
\buff2[77]_i_72\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_95\,
      I1 => \buff1_reg__1_n_78\,
      I2 => \buff1_reg__2_n_61\,
      O => \buff2[77]_i_72_n_0\
    );
\buff2[77]_i_73\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_96\,
      I1 => \buff1_reg__1_n_79\,
      I2 => \buff1_reg__2_n_62\,
      O => \buff2[77]_i_73_n_0\
    );
\buff2[77]_i_74\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6969699669969696"
    )
        port map (
      I0 => \buff1_reg__2_n_58\,
      I1 => \buff1_reg__1_n_75\,
      I2 => \buff1_reg__0_n_92\,
      I3 => \buff1_reg__2_n_59\,
      I4 => \buff1_reg__1_n_76\,
      I5 => \buff1_reg__0_n_93\,
      O => \buff2[77]_i_74_n_0\
    );
\buff2[77]_i_75\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2[77]_i_71_n_0\,
      I1 => \buff1_reg__1_n_76\,
      I2 => \buff1_reg__0_n_93\,
      I3 => \buff1_reg__2_n_59\,
      O => \buff2[77]_i_75_n_0\
    );
\buff2[77]_i_76\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_94\,
      I1 => \buff1_reg__1_n_77\,
      I2 => \buff1_reg__2_n_60\,
      I3 => \buff2[77]_i_72_n_0\,
      O => \buff2[77]_i_76_n_0\
    );
\buff2[77]_i_77\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_95\,
      I1 => \buff1_reg__1_n_78\,
      I2 => \buff1_reg__2_n_61\,
      I3 => \buff2[77]_i_73_n_0\,
      O => \buff2[77]_i_77_n_0\
    );
\buff2[77]_i_78\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[2]__0_n_0\,
      I1 => \buff2_reg[77]_i_82_n_7\,
      O => \buff2[77]_i_78_n_0\
    );
\buff2[77]_i_79\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[1]__0_n_0\,
      I1 => \buff2_reg[77]_i_81_n_4\,
      O => \buff2[77]_i_79_n_0\
    );
\buff2[77]_i_8\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[77]_i_20_n_4\,
      I1 => buff0_reg_n_97,
      I2 => buff1_reg_n_97,
      I3 => \buff2[77]_i_4_n_0\,
      O => \buff2[77]_i_8_n_0\
    );
\buff2[77]_i_80\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[0]__0_n_0\,
      I1 => \buff2_reg[77]_i_81_n_5\,
      O => \buff2[77]_i_80_n_0\
    );
\buff2[77]_i_83\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_97\,
      I1 => \buff1_reg__1_n_80\,
      I2 => \buff1_reg__2_n_63\,
      O => \buff2[77]_i_83_n_0\
    );
\buff2[77]_i_84\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_98\,
      I1 => \buff1_reg__1_n_81\,
      I2 => \buff1_reg__2_n_64\,
      O => \buff2[77]_i_84_n_0\
    );
\buff2[77]_i_85\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_99\,
      I1 => \buff1_reg__1_n_82\,
      I2 => \buff1_reg__2_n_65\,
      O => \buff2[77]_i_85_n_0\
    );
\buff2[77]_i_86\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_100\,
      I1 => \buff1_reg__1_n_83\,
      I2 => \buff1_reg__2_n_66\,
      O => \buff2[77]_i_86_n_0\
    );
\buff2[77]_i_87\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_96\,
      I1 => \buff1_reg__1_n_79\,
      I2 => \buff1_reg__2_n_62\,
      I3 => \buff2[77]_i_83_n_0\,
      O => \buff2[77]_i_87_n_0\
    );
\buff2[77]_i_88\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_97\,
      I1 => \buff1_reg__1_n_80\,
      I2 => \buff1_reg__2_n_63\,
      I3 => \buff2[77]_i_84_n_0\,
      O => \buff2[77]_i_88_n_0\
    );
\buff2[77]_i_89\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_98\,
      I1 => \buff1_reg__1_n_81\,
      I2 => \buff1_reg__2_n_64\,
      I3 => \buff2[77]_i_85_n_0\,
      O => \buff2[77]_i_89_n_0\
    );
\buff2[77]_i_9\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[77]_i_20_n_5\,
      I1 => buff0_reg_n_98,
      I2 => buff1_reg_n_98,
      I3 => \buff2[77]_i_5_n_0\,
      O => \buff2[77]_i_9_n_0\
    );
\buff2[77]_i_90\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_99\,
      I1 => \buff1_reg__1_n_82\,
      I2 => \buff1_reg__2_n_65\,
      I3 => \buff2[77]_i_86_n_0\,
      O => \buff2[77]_i_90_n_0\
    );
\buff2[77]_i_92\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => \buff1_reg__2_n_70\,
      I1 => \buff1_reg__0_n_104\,
      I2 => \buff1_reg__1_n_87\,
      O => \buff2[77]_i_92_n_0\
    );
\buff2[77]_i_93\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"69969696"
    )
        port map (
      I0 => \buff1_reg__0_n_104\,
      I1 => \buff1_reg__1_n_87\,
      I2 => \buff1_reg__2_n_70\,
      I3 => \buff1_reg__1_n_88\,
      I4 => \buff1_reg__0_n_105\,
      O => \buff2[77]_i_93_n_0\
    );
\buff2[77]_i_94\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => \buff1_reg__0_n_105\,
      I1 => \buff1_reg__1_n_88\,
      I2 => \buff1_reg__2_n_71\,
      O => \buff2[77]_i_94_n_0\
    );
\buff2[77]_i_95\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_72\,
      I1 => \buff1_reg__1_n_89\,
      O => \buff2[77]_i_95_n_0\
    );
\buff2[77]_i_96\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_73\,
      I1 => \buff1_reg__1_n_90\,
      O => \buff2[77]_i_96_n_0\
    );
\buff2[77]_i_97\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_101\,
      I1 => \buff1_reg__1_n_84\,
      I2 => \buff1_reg__2_n_67\,
      O => \buff2[77]_i_97_n_0\
    );
\buff2[77]_i_98\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_102\,
      I1 => \buff1_reg__1_n_85\,
      I2 => \buff1_reg__2_n_68\,
      O => \buff2[77]_i_98_n_0\
    );
\buff2[77]_i_99\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_103\,
      I1 => \buff1_reg__1_n_86\,
      I2 => \buff1_reg__2_n_69\,
      O => \buff2[77]_i_99_n_0\
    );
\buff2[81]_i_11\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_78\,
      I1 => \buff1_reg__1_n_61\,
      I2 => \buff1_reg__0_n_77\,
      I3 => \buff1_reg__1_n_60\,
      O => \buff2[81]_i_11_n_0\
    );
\buff2[81]_i_12\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_79\,
      I1 => \buff1_reg__1_n_62\,
      I2 => \buff1_reg__0_n_78\,
      I3 => \buff1_reg__1_n_61\,
      O => \buff2[81]_i_12_n_0\
    );
\buff2[81]_i_13\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_80\,
      I1 => \buff1_reg__1_n_63\,
      I2 => \buff1_reg__0_n_79\,
      I3 => \buff1_reg__1_n_62\,
      O => \buff2[81]_i_13_n_0\
    );
\buff2[81]_i_14\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_81\,
      I1 => \buff1_reg__1_n_64\,
      I2 => \buff1_reg__0_n_80\,
      I3 => \buff1_reg__1_n_63\,
      O => \buff2[81]_i_14_n_0\
    );
\buff2[81]_i_15\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_61\,
      I1 => \buff1_reg__0_n_78\,
      I2 => \buff1_reg__1_n_59\,
      I3 => \buff1_reg__0_n_76\,
      I4 => \buff1_reg__1_n_60\,
      I5 => \buff1_reg__0_n_77\,
      O => \buff2[81]_i_15_n_0\
    );
\buff2[81]_i_16\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_62\,
      I1 => \buff1_reg__0_n_79\,
      I2 => \buff1_reg__1_n_60\,
      I3 => \buff1_reg__0_n_77\,
      I4 => \buff1_reg__1_n_61\,
      I5 => \buff1_reg__0_n_78\,
      O => \buff2[81]_i_16_n_0\
    );
\buff2[81]_i_17\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_63\,
      I1 => \buff1_reg__0_n_80\,
      I2 => \buff1_reg__1_n_61\,
      I3 => \buff1_reg__0_n_78\,
      I4 => \buff1_reg__1_n_62\,
      I5 => \buff1_reg__0_n_79\,
      O => \buff2[81]_i_17_n_0\
    );
\buff2[81]_i_18\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_64\,
      I1 => \buff1_reg__0_n_81\,
      I2 => \buff1_reg__1_n_62\,
      I3 => \buff1_reg__0_n_79\,
      I4 => \buff1_reg__1_n_63\,
      I5 => \buff1_reg__0_n_80\,
      O => \buff2[81]_i_18_n_0\
    );
\buff2[81]_i_19\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_60\,
      I1 => \buff1_reg__0_n_77\,
      I2 => \buff1_reg__1_n_58\,
      I3 => \buff1_reg__0_n_75\,
      I4 => \buff1_reg__1_n_59\,
      I5 => \buff1_reg__0_n_76\,
      O => \buff2[81]_i_19_n_0\
    );
\buff2[81]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[81]_i_9_n_5\,
      I1 => buff0_reg_n_94,
      I2 => buff1_reg_n_94,
      O => \buff2[81]_i_2_n_0\
    );
\buff2[81]_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[81]_i_9_n_6\,
      I1 => buff0_reg_n_95,
      I2 => buff1_reg_n_95,
      O => \buff2[81]_i_3_n_0\
    );
\buff2[81]_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff2_reg[81]_i_9_n_7\,
      I1 => buff0_reg_n_96,
      I2 => buff1_reg_n_96,
      O => \buff2[81]_i_4_n_0\
    );
\buff2[81]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => buff1_reg_n_93,
      I1 => buff0_reg_n_93,
      I2 => \buff2_reg[81]_i_9_n_4\,
      I3 => buff0_reg_n_92,
      I4 => \buff2_reg[81]_i_10_n_7\,
      I5 => buff1_reg_n_92,
      O => \buff2[81]_i_5_n_0\
    );
\buff2[81]_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2[81]_i_2_n_0\,
      I1 => buff0_reg_n_93,
      I2 => \buff2_reg[81]_i_9_n_4\,
      I3 => buff1_reg_n_93,
      O => \buff2[81]_i_6_n_0\
    );
\buff2[81]_i_7\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[81]_i_9_n_5\,
      I1 => buff0_reg_n_94,
      I2 => buff1_reg_n_94,
      I3 => \buff2[81]_i_3_n_0\,
      O => \buff2[81]_i_7_n_0\
    );
\buff2[81]_i_8\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff2_reg[81]_i_9_n_6\,
      I1 => buff0_reg_n_95,
      I2 => buff1_reg_n_95,
      I3 => \buff2[81]_i_4_n_0\,
      O => \buff2[81]_i_8_n_0\
    );
\buff2_reg[74]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg__5\(74),
      Q => ap_return(0),
      R => '0'
    );
\buff2_reg[75]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg__5\(75),
      Q => ap_return(1),
      R => '0'
    );
\buff2_reg[76]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg__5\(76),
      Q => ap_return(2),
      R => '0'
    );
\buff2_reg[77]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg__5\(77),
      Q => ap_return(3),
      R => '0'
    );
\buff2_reg[77]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_2_n_0\,
      CO(3) => \buff2_reg[77]_i_1_n_0\,
      CO(2) => \buff2_reg[77]_i_1_n_1\,
      CO(1) => \buff2_reg[77]_i_1_n_2\,
      CO(0) => \buff2_reg[77]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_3_n_0\,
      DI(2) => \buff2[77]_i_4_n_0\,
      DI(1) => \buff2[77]_i_5_n_0\,
      DI(0) => \buff2[77]_i_6_n_0\,
      O(3 downto 0) => \buff1_reg__5\(77 downto 74),
      S(3) => \buff2[77]_i_7_n_0\,
      S(2) => \buff2[77]_i_8_n_0\,
      S(1) => \buff2[77]_i_9_n_0\,
      S(0) => \buff2[77]_i_10_n_0\
    );
\buff2_reg[77]_i_105\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_110_n_0\,
      CO(3) => \buff2_reg[77]_i_105_n_0\,
      CO(2) => \buff2_reg[77]_i_105_n_1\,
      CO(1) => \buff2_reg[77]_i_105_n_2\,
      CO(0) => \buff2_reg[77]_i_105_n_3\,
      CYINIT => '0',
      DI(3) => \buff1_reg__2_n_78\,
      DI(2) => \buff1_reg__2_n_79\,
      DI(1) => \buff1_reg__2_n_80\,
      DI(0) => \buff1_reg__2_n_81\,
      O(3 downto 0) => \NLW_buff2_reg[77]_i_105_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_111_n_0\,
      S(2) => \buff2[77]_i_112_n_0\,
      S(1) => \buff2[77]_i_113_n_0\,
      S(0) => \buff2[77]_i_114_n_0\
    );
\buff2_reg[77]_i_11\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_21_n_0\,
      CO(3) => \buff2_reg[77]_i_11_n_0\,
      CO(2) => \buff2_reg[77]_i_11_n_1\,
      CO(1) => \buff2_reg[77]_i_11_n_2\,
      CO(0) => \buff2_reg[77]_i_11_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_22_n_0\,
      DI(2) => buff1_reg_n_105,
      DI(1) => \buff1_reg[16]__0_n_0\,
      DI(0) => \buff1_reg[15]__0_n_0\,
      O(3 downto 0) => \NLW_buff2_reg[77]_i_11_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_23_n_0\,
      S(2) => \buff2[77]_i_24_n_0\,
      S(1) => \buff2[77]_i_25_n_0\,
      S(0) => \buff2[77]_i_26_n_0\
    );
\buff2_reg[77]_i_110\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_115_n_0\,
      CO(3) => \buff2_reg[77]_i_110_n_0\,
      CO(2) => \buff2_reg[77]_i_110_n_1\,
      CO(1) => \buff2_reg[77]_i_110_n_2\,
      CO(0) => \buff2_reg[77]_i_110_n_3\,
      CYINIT => '0',
      DI(3) => \buff1_reg__2_n_82\,
      DI(2) => \buff1_reg__2_n_83\,
      DI(1) => \buff1_reg__2_n_84\,
      DI(0) => \buff1_reg__2_n_85\,
      O(3 downto 0) => \NLW_buff2_reg[77]_i_110_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_116_n_0\,
      S(2) => \buff2[77]_i_117_n_0\,
      S(1) => \buff2[77]_i_118_n_0\,
      S(0) => \buff2[77]_i_119_n_0\
    );
\buff2_reg[77]_i_115\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \buff2_reg[77]_i_115_n_0\,
      CO(2) => \buff2_reg[77]_i_115_n_1\,
      CO(1) => \buff2_reg[77]_i_115_n_2\,
      CO(0) => \buff2_reg[77]_i_115_n_3\,
      CYINIT => '0',
      DI(3) => \buff1_reg__2_n_86\,
      DI(2) => \buff1_reg__2_n_87\,
      DI(1) => \buff1_reg__2_n_88\,
      DI(0) => '0',
      O(3 downto 0) => \NLW_buff2_reg[77]_i_115_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_120_n_0\,
      S(2) => \buff2[77]_i_121_n_0\,
      S(1) => \buff2[77]_i_122_n_0\,
      S(0) => \buff1_reg__2_n_89\
    );
\buff2_reg[77]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_11_n_0\,
      CO(3) => \buff2_reg[77]_i_2_n_0\,
      CO(2) => \buff2_reg[77]_i_2_n_1\,
      CO(1) => \buff2_reg[77]_i_2_n_2\,
      CO(0) => \buff2_reg[77]_i_2_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_12_n_0\,
      DI(2) => \buff2[77]_i_13_n_0\,
      DI(1) => \buff2[77]_i_14_n_0\,
      DI(0) => \buff2[77]_i_15_n_0\,
      O(3 downto 0) => \NLW_buff2_reg[77]_i_2_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_16_n_0\,
      S(2) => \buff2[77]_i_17_n_0\,
      S(1) => \buff2[77]_i_18_n_0\,
      S(0) => \buff2[77]_i_19_n_0\
    );
\buff2_reg[77]_i_20\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_27_n_0\,
      CO(3) => \buff2_reg[77]_i_20_n_0\,
      CO(2) => \buff2_reg[77]_i_20_n_1\,
      CO(1) => \buff2_reg[77]_i_20_n_2\,
      CO(0) => \buff2_reg[77]_i_20_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_28_n_0\,
      DI(2) => \buff2[77]_i_29_n_0\,
      DI(1) => \buff2[77]_i_30_n_0\,
      DI(0) => \buff2[77]_i_31_n_0\,
      O(3) => \buff2_reg[77]_i_20_n_4\,
      O(2) => \buff2_reg[77]_i_20_n_5\,
      O(1) => \buff2_reg[77]_i_20_n_6\,
      O(0) => \buff2_reg[77]_i_20_n_7\,
      S(3) => \buff2[77]_i_32_n_0\,
      S(2) => \buff2[77]_i_33_n_0\,
      S(1) => \buff2[77]_i_34_n_0\,
      S(0) => \buff2[77]_i_35_n_0\
    );
\buff2_reg[77]_i_21\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_36_n_0\,
      CO(3) => \buff2_reg[77]_i_21_n_0\,
      CO(2) => \buff2_reg[77]_i_21_n_1\,
      CO(1) => \buff2_reg[77]_i_21_n_2\,
      CO(0) => \buff2_reg[77]_i_21_n_3\,
      CYINIT => '0',
      DI(3) => \buff1_reg[14]__0_n_0\,
      DI(2) => \buff1_reg[13]__0_n_0\,
      DI(1) => \buff1_reg[12]__0_n_0\,
      DI(0) => \buff1_reg[11]__0_n_0\,
      O(3 downto 0) => \NLW_buff2_reg[77]_i_21_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_37_n_0\,
      S(2) => \buff2[77]_i_38_n_0\,
      S(1) => \buff2[77]_i_39_n_0\,
      S(0) => \buff2[77]_i_40_n_0\
    );
\buff2_reg[77]_i_27\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_41_n_0\,
      CO(3) => \buff2_reg[77]_i_27_n_0\,
      CO(2) => \buff2_reg[77]_i_27_n_1\,
      CO(1) => \buff2_reg[77]_i_27_n_2\,
      CO(0) => \buff2_reg[77]_i_27_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_42_n_0\,
      DI(2) => \buff2[77]_i_43_n_0\,
      DI(1) => \buff2[77]_i_44_n_0\,
      DI(0) => \buff2[77]_i_45_n_0\,
      O(3) => \buff2_reg[77]_i_27_n_4\,
      O(2) => \buff2_reg[77]_i_27_n_5\,
      O(1) => \buff2_reg[77]_i_27_n_6\,
      O(0) => \buff2_reg[77]_i_27_n_7\,
      S(3) => \buff2[77]_i_46_n_0\,
      S(2) => \buff2[77]_i_47_n_0\,
      S(1) => \buff2[77]_i_48_n_0\,
      S(0) => \buff2[77]_i_49_n_0\
    );
\buff2_reg[77]_i_36\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_50_n_0\,
      CO(3) => \buff2_reg[77]_i_36_n_0\,
      CO(2) => \buff2_reg[77]_i_36_n_1\,
      CO(1) => \buff2_reg[77]_i_36_n_2\,
      CO(0) => \buff2_reg[77]_i_36_n_3\,
      CYINIT => '0',
      DI(3) => \buff1_reg[10]__0_n_0\,
      DI(2) => \buff1_reg[9]__0_n_0\,
      DI(1) => \buff1_reg[8]__0_n_0\,
      DI(0) => \buff1_reg[7]__0_n_0\,
      O(3 downto 0) => \NLW_buff2_reg[77]_i_36_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_51_n_0\,
      S(2) => \buff2[77]_i_52_n_0\,
      S(1) => \buff2[77]_i_53_n_0\,
      S(0) => \buff2[77]_i_54_n_0\
    );
\buff2_reg[77]_i_41\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_55_n_0\,
      CO(3) => \buff2_reg[77]_i_41_n_0\,
      CO(2) => \buff2_reg[77]_i_41_n_1\,
      CO(1) => \buff2_reg[77]_i_41_n_2\,
      CO(0) => \buff2_reg[77]_i_41_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_56_n_0\,
      DI(2) => \buff2[77]_i_57_n_0\,
      DI(1) => \buff2[77]_i_58_n_0\,
      DI(0) => \buff2[77]_i_59_n_0\,
      O(3) => \buff2_reg[77]_i_41_n_4\,
      O(2) => \buff2_reg[77]_i_41_n_5\,
      O(1) => \buff2_reg[77]_i_41_n_6\,
      O(0) => \buff2_reg[77]_i_41_n_7\,
      S(3) => \buff2[77]_i_60_n_0\,
      S(2) => \buff2[77]_i_61_n_0\,
      S(1) => \buff2[77]_i_62_n_0\,
      S(0) => \buff2[77]_i_63_n_0\
    );
\buff2_reg[77]_i_50\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_64_n_0\,
      CO(3) => \buff2_reg[77]_i_50_n_0\,
      CO(2) => \buff2_reg[77]_i_50_n_1\,
      CO(1) => \buff2_reg[77]_i_50_n_2\,
      CO(0) => \buff2_reg[77]_i_50_n_3\,
      CYINIT => '0',
      DI(3) => \buff1_reg[6]__0_n_0\,
      DI(2) => \buff1_reg[5]__0_n_0\,
      DI(1) => \buff1_reg[4]__0_n_0\,
      DI(0) => \buff1_reg[3]__0_n_0\,
      O(3 downto 0) => \NLW_buff2_reg[77]_i_50_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_65_n_0\,
      S(2) => \buff2[77]_i_66_n_0\,
      S(1) => \buff2[77]_i_67_n_0\,
      S(0) => \buff2[77]_i_68_n_0\
    );
\buff2_reg[77]_i_55\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_69_n_0\,
      CO(3) => \buff2_reg[77]_i_55_n_0\,
      CO(2) => \buff2_reg[77]_i_55_n_1\,
      CO(1) => \buff2_reg[77]_i_55_n_2\,
      CO(0) => \buff2_reg[77]_i_55_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_70_n_0\,
      DI(2) => \buff2[77]_i_71_n_0\,
      DI(1) => \buff2[77]_i_72_n_0\,
      DI(0) => \buff2[77]_i_73_n_0\,
      O(3) => \buff2_reg[77]_i_55_n_4\,
      O(2) => \buff2_reg[77]_i_55_n_5\,
      O(1) => \buff2_reg[77]_i_55_n_6\,
      O(0) => \buff2_reg[77]_i_55_n_7\,
      S(3) => \buff2[77]_i_74_n_0\,
      S(2) => \buff2[77]_i_75_n_0\,
      S(1) => \buff2[77]_i_76_n_0\,
      S(0) => \buff2[77]_i_77_n_0\
    );
\buff2_reg[77]_i_64\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \buff2_reg[77]_i_64_n_0\,
      CO(2) => \buff2_reg[77]_i_64_n_1\,
      CO(1) => \buff2_reg[77]_i_64_n_2\,
      CO(0) => \buff2_reg[77]_i_64_n_3\,
      CYINIT => '0',
      DI(3) => \buff1_reg[2]__0_n_0\,
      DI(2) => \buff1_reg[1]__0_n_0\,
      DI(1) => \buff1_reg[0]__0_n_0\,
      DI(0) => '0',
      O(3 downto 0) => \NLW_buff2_reg[77]_i_64_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_78_n_0\,
      S(2) => \buff2[77]_i_79_n_0\,
      S(1) => \buff2[77]_i_80_n_0\,
      S(0) => \buff2_reg[77]_i_81_n_6\
    );
\buff2_reg[77]_i_69\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_82_n_0\,
      CO(3) => \buff2_reg[77]_i_69_n_0\,
      CO(2) => \buff2_reg[77]_i_69_n_1\,
      CO(1) => \buff2_reg[77]_i_69_n_2\,
      CO(0) => \buff2_reg[77]_i_69_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_83_n_0\,
      DI(2) => \buff2[77]_i_84_n_0\,
      DI(1) => \buff2[77]_i_85_n_0\,
      DI(0) => \buff2[77]_i_86_n_0\,
      O(3) => \buff2_reg[77]_i_69_n_4\,
      O(2) => \buff2_reg[77]_i_69_n_5\,
      O(1) => \buff2_reg[77]_i_69_n_6\,
      O(0) => \buff2_reg[77]_i_69_n_7\,
      S(3) => \buff2[77]_i_87_n_0\,
      S(2) => \buff2[77]_i_88_n_0\,
      S(1) => \buff2[77]_i_89_n_0\,
      S(0) => \buff2[77]_i_90_n_0\
    );
\buff2_reg[77]_i_81\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_91_n_0\,
      CO(3) => \buff2_reg[77]_i_81_n_0\,
      CO(2) => \buff2_reg[77]_i_81_n_1\,
      CO(1) => \buff2_reg[77]_i_81_n_2\,
      CO(0) => \buff2_reg[77]_i_81_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_92_n_0\,
      DI(2) => \buff1_reg__2_n_71\,
      DI(1) => \buff1_reg__2_n_72\,
      DI(0) => \buff1_reg__2_n_73\,
      O(3) => \buff2_reg[77]_i_81_n_4\,
      O(2) => \buff2_reg[77]_i_81_n_5\,
      O(1) => \buff2_reg[77]_i_81_n_6\,
      O(0) => \NLW_buff2_reg[77]_i_81_O_UNCONNECTED\(0),
      S(3) => \buff2[77]_i_93_n_0\,
      S(2) => \buff2[77]_i_94_n_0\,
      S(1) => \buff2[77]_i_95_n_0\,
      S(0) => \buff2[77]_i_96_n_0\
    );
\buff2_reg[77]_i_82\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_81_n_0\,
      CO(3) => \buff2_reg[77]_i_82_n_0\,
      CO(2) => \buff2_reg[77]_i_82_n_1\,
      CO(1) => \buff2_reg[77]_i_82_n_2\,
      CO(0) => \buff2_reg[77]_i_82_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[77]_i_97_n_0\,
      DI(2) => \buff2[77]_i_98_n_0\,
      DI(1) => \buff2[77]_i_99_n_0\,
      DI(0) => \buff2[77]_i_100_n_0\,
      O(3) => \buff2_reg[77]_i_82_n_4\,
      O(2) => \buff2_reg[77]_i_82_n_5\,
      O(1) => \buff2_reg[77]_i_82_n_6\,
      O(0) => \buff2_reg[77]_i_82_n_7\,
      S(3) => \buff2[77]_i_101_n_0\,
      S(2) => \buff2[77]_i_102_n_0\,
      S(1) => \buff2[77]_i_103_n_0\,
      S(0) => \buff2[77]_i_104_n_0\
    );
\buff2_reg[77]_i_91\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_105_n_0\,
      CO(3) => \buff2_reg[77]_i_91_n_0\,
      CO(2) => \buff2_reg[77]_i_91_n_1\,
      CO(1) => \buff2_reg[77]_i_91_n_2\,
      CO(0) => \buff2_reg[77]_i_91_n_3\,
      CYINIT => '0',
      DI(3) => \buff1_reg__2_n_74\,
      DI(2) => \buff1_reg__2_n_75\,
      DI(1) => \buff1_reg__2_n_76\,
      DI(0) => \buff1_reg__2_n_77\,
      O(3 downto 0) => \NLW_buff2_reg[77]_i_91_O_UNCONNECTED\(3 downto 0),
      S(3) => \buff2[77]_i_106_n_0\,
      S(2) => \buff2[77]_i_107_n_0\,
      S(1) => \buff2[77]_i_108_n_0\,
      S(0) => \buff2[77]_i_109_n_0\
    );
\buff2_reg[78]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg__5\(78),
      Q => ap_return(4),
      R => '0'
    );
\buff2_reg[79]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg__5\(79),
      Q => ap_return(5),
      R => '0'
    );
\buff2_reg[80]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg__5\(80),
      Q => ap_return(6),
      R => '0'
    );
\buff2_reg[81]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg__5\(81),
      Q => ap_return(7),
      R => '0'
    );
\buff2_reg[81]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_1_n_0\,
      CO(3) => \NLW_buff2_reg[81]_i_1_CO_UNCONNECTED\(3),
      CO(2) => \buff2_reg[81]_i_1_n_1\,
      CO(1) => \buff2_reg[81]_i_1_n_2\,
      CO(0) => \buff2_reg[81]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2) => \buff2[81]_i_2_n_0\,
      DI(1) => \buff2[81]_i_3_n_0\,
      DI(0) => \buff2[81]_i_4_n_0\,
      O(3 downto 0) => \buff1_reg__5\(81 downto 78),
      S(3) => \buff2[81]_i_5_n_0\,
      S(2) => \buff2[81]_i_6_n_0\,
      S(1) => \buff2[81]_i_7_n_0\,
      S(0) => \buff2[81]_i_8_n_0\
    );
\buff2_reg[81]_i_10\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[81]_i_9_n_0\,
      CO(3 downto 0) => \NLW_buff2_reg[81]_i_10_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_buff2_reg[81]_i_10_O_UNCONNECTED\(3 downto 1),
      O(0) => \buff2_reg[81]_i_10_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \buff2[81]_i_19_n_0\
    );
\buff2_reg[81]_i_9\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff2_reg[77]_i_20_n_0\,
      CO(3) => \buff2_reg[81]_i_9_n_0\,
      CO(2) => \buff2_reg[81]_i_9_n_1\,
      CO(1) => \buff2_reg[81]_i_9_n_2\,
      CO(0) => \buff2_reg[81]_i_9_n_3\,
      CYINIT => '0',
      DI(3) => \buff2[81]_i_11_n_0\,
      DI(2) => \buff2[81]_i_12_n_0\,
      DI(1) => \buff2[81]_i_13_n_0\,
      DI(0) => \buff2[81]_i_14_n_0\,
      O(3) => \buff2_reg[81]_i_9_n_4\,
      O(2) => \buff2_reg[81]_i_9_n_5\,
      O(1) => \buff2_reg[81]_i_9_n_6\,
      O(0) => \buff2_reg[81]_i_9_n_7\,
      S(3) => \buff2[81]_i_15_n_0\,
      S(2) => \buff2[81]_i_16_n_0\,
      S(1) => \buff2[81]_i_17_n_0\,
      S(0) => \buff2[81]_i_18_n_0\
    );
tmp_product: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 0,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => A(2),
      A(16 downto 15) => A(2 downto 1),
      A(14) => A(1),
      A(13) => A(1),
      A(12) => A(1),
      A(11) => A(1),
      A(10) => A(1),
      A(9) => A(1),
      A(8) => A(1),
      A(7) => A(1),
      A(6 downto 5) => A(1 downto 0),
      A(4) => A(0),
      A(3) => A(0),
      A(2) => A(0),
      A(1) => A(0),
      A(0) => A(0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_tmp_product_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000010111010111110",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_tmp_product_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_tmp_product_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_tmp_product_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '0',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_tmp_product_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"1010101",
      OVERFLOW => NLW_tmp_product_OVERFLOW_UNCONNECTED,
      P(47 downto 0) => NLW_tmp_product_P_UNCONNECTED(47 downto 0),
      PATTERNBDETECT => NLW_tmp_product_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_tmp_product_PATTERNDETECT_UNCONNECTED,
      PCIN(47) => \buff0_reg__0_n_106\,
      PCIN(46) => \buff0_reg__0_n_107\,
      PCIN(45) => \buff0_reg__0_n_108\,
      PCIN(44) => \buff0_reg__0_n_109\,
      PCIN(43) => \buff0_reg__0_n_110\,
      PCIN(42) => \buff0_reg__0_n_111\,
      PCIN(41) => \buff0_reg__0_n_112\,
      PCIN(40) => \buff0_reg__0_n_113\,
      PCIN(39) => \buff0_reg__0_n_114\,
      PCIN(38) => \buff0_reg__0_n_115\,
      PCIN(37) => \buff0_reg__0_n_116\,
      PCIN(36) => \buff0_reg__0_n_117\,
      PCIN(35) => \buff0_reg__0_n_118\,
      PCIN(34) => \buff0_reg__0_n_119\,
      PCIN(33) => \buff0_reg__0_n_120\,
      PCIN(32) => \buff0_reg__0_n_121\,
      PCIN(31) => \buff0_reg__0_n_122\,
      PCIN(30) => \buff0_reg__0_n_123\,
      PCIN(29) => \buff0_reg__0_n_124\,
      PCIN(28) => \buff0_reg__0_n_125\,
      PCIN(27) => \buff0_reg__0_n_126\,
      PCIN(26) => \buff0_reg__0_n_127\,
      PCIN(25) => \buff0_reg__0_n_128\,
      PCIN(24) => \buff0_reg__0_n_129\,
      PCIN(23) => \buff0_reg__0_n_130\,
      PCIN(22) => \buff0_reg__0_n_131\,
      PCIN(21) => \buff0_reg__0_n_132\,
      PCIN(20) => \buff0_reg__0_n_133\,
      PCIN(19) => \buff0_reg__0_n_134\,
      PCIN(18) => \buff0_reg__0_n_135\,
      PCIN(17) => \buff0_reg__0_n_136\,
      PCIN(16) => \buff0_reg__0_n_137\,
      PCIN(15) => \buff0_reg__0_n_138\,
      PCIN(14) => \buff0_reg__0_n_139\,
      PCIN(13) => \buff0_reg__0_n_140\,
      PCIN(12) => \buff0_reg__0_n_141\,
      PCIN(11) => \buff0_reg__0_n_142\,
      PCIN(10) => \buff0_reg__0_n_143\,
      PCIN(9) => \buff0_reg__0_n_144\,
      PCIN(8) => \buff0_reg__0_n_145\,
      PCIN(7) => \buff0_reg__0_n_146\,
      PCIN(6) => \buff0_reg__0_n_147\,
      PCIN(5) => \buff0_reg__0_n_148\,
      PCIN(4) => \buff0_reg__0_n_149\,
      PCIN(3) => \buff0_reg__0_n_150\,
      PCIN(2) => \buff0_reg__0_n_151\,
      PCIN(1) => \buff0_reg__0_n_152\,
      PCIN(0) => \buff0_reg__0_n_153\,
      PCOUT(47) => tmp_product_n_106,
      PCOUT(46) => tmp_product_n_107,
      PCOUT(45) => tmp_product_n_108,
      PCOUT(44) => tmp_product_n_109,
      PCOUT(43) => tmp_product_n_110,
      PCOUT(42) => tmp_product_n_111,
      PCOUT(41) => tmp_product_n_112,
      PCOUT(40) => tmp_product_n_113,
      PCOUT(39) => tmp_product_n_114,
      PCOUT(38) => tmp_product_n_115,
      PCOUT(37) => tmp_product_n_116,
      PCOUT(36) => tmp_product_n_117,
      PCOUT(35) => tmp_product_n_118,
      PCOUT(34) => tmp_product_n_119,
      PCOUT(33) => tmp_product_n_120,
      PCOUT(32) => tmp_product_n_121,
      PCOUT(31) => tmp_product_n_122,
      PCOUT(30) => tmp_product_n_123,
      PCOUT(29) => tmp_product_n_124,
      PCOUT(28) => tmp_product_n_125,
      PCOUT(27) => tmp_product_n_126,
      PCOUT(26) => tmp_product_n_127,
      PCOUT(25) => tmp_product_n_128,
      PCOUT(24) => tmp_product_n_129,
      PCOUT(23) => tmp_product_n_130,
      PCOUT(22) => tmp_product_n_131,
      PCOUT(21) => tmp_product_n_132,
      PCOUT(20) => tmp_product_n_133,
      PCOUT(19) => tmp_product_n_134,
      PCOUT(18) => tmp_product_n_135,
      PCOUT(17) => tmp_product_n_136,
      PCOUT(16) => tmp_product_n_137,
      PCOUT(15) => tmp_product_n_138,
      PCOUT(14) => tmp_product_n_139,
      PCOUT(13) => tmp_product_n_140,
      PCOUT(12) => tmp_product_n_141,
      PCOUT(11) => tmp_product_n_142,
      PCOUT(10) => tmp_product_n_143,
      PCOUT(9) => tmp_product_n_144,
      PCOUT(8) => tmp_product_n_145,
      PCOUT(7) => tmp_product_n_146,
      PCOUT(6) => tmp_product_n_147,
      PCOUT(5) => tmp_product_n_148,
      PCOUT(4) => tmp_product_n_149,
      PCOUT(3) => tmp_product_n_150,
      PCOUT(2) => tmp_product_n_151,
      PCOUT(1) => tmp_product_n_152,
      PCOUT(0) => tmp_product_n_153,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_tmp_product_UNDERFLOW_UNCONNECTED
    );
\tmp_product__0\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 0,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => \tmp_product__1_0\(7),
      A(16) => \tmp_product__1_0\(7),
      A(15) => \tmp_product__0_0\(1),
      A(14) => \tmp_product__0_0\(1),
      A(13) => \tmp_product__0_0\(1),
      A(12) => \tmp_product__0_0\(1),
      A(11) => \tmp_product__0_0\(1),
      A(10) => \tmp_product__0_0\(1),
      A(9) => \tmp_product__0_0\(1),
      A(8) => \tmp_product__0_0\(1),
      A(7) => \tmp_product__0_0\(1),
      A(6 downto 5) => \tmp_product__0_0\(1 downto 0),
      A(4) => \tmp_product__0_0\(0),
      A(3) => \tmp_product__0_0\(0),
      A(2) => \tmp_product__0_0\(0),
      A(1) => \tmp_product__0_0\(0),
      A(0) => \tmp_product__0_0\(0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_tmp_product__0_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"010100001011010100",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_tmp_product__0_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_tmp_product__0_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '0',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_tmp_product__0_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_tmp_product__0_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \buff0_reg__1_n_106\,
      PCIN(46) => \buff0_reg__1_n_107\,
      PCIN(45) => \buff0_reg__1_n_108\,
      PCIN(44) => \buff0_reg__1_n_109\,
      PCIN(43) => \buff0_reg__1_n_110\,
      PCIN(42) => \buff0_reg__1_n_111\,
      PCIN(41) => \buff0_reg__1_n_112\,
      PCIN(40) => \buff0_reg__1_n_113\,
      PCIN(39) => \buff0_reg__1_n_114\,
      PCIN(38) => \buff0_reg__1_n_115\,
      PCIN(37) => \buff0_reg__1_n_116\,
      PCIN(36) => \buff0_reg__1_n_117\,
      PCIN(35) => \buff0_reg__1_n_118\,
      PCIN(34) => \buff0_reg__1_n_119\,
      PCIN(33) => \buff0_reg__1_n_120\,
      PCIN(32) => \buff0_reg__1_n_121\,
      PCIN(31) => \buff0_reg__1_n_122\,
      PCIN(30) => \buff0_reg__1_n_123\,
      PCIN(29) => \buff0_reg__1_n_124\,
      PCIN(28) => \buff0_reg__1_n_125\,
      PCIN(27) => \buff0_reg__1_n_126\,
      PCIN(26) => \buff0_reg__1_n_127\,
      PCIN(25) => \buff0_reg__1_n_128\,
      PCIN(24) => \buff0_reg__1_n_129\,
      PCIN(23) => \buff0_reg__1_n_130\,
      PCIN(22) => \buff0_reg__1_n_131\,
      PCIN(21) => \buff0_reg__1_n_132\,
      PCIN(20) => \buff0_reg__1_n_133\,
      PCIN(19) => \buff0_reg__1_n_134\,
      PCIN(18) => \buff0_reg__1_n_135\,
      PCIN(17) => \buff0_reg__1_n_136\,
      PCIN(16) => \buff0_reg__1_n_137\,
      PCIN(15) => \buff0_reg__1_n_138\,
      PCIN(14) => \buff0_reg__1_n_139\,
      PCIN(13) => \buff0_reg__1_n_140\,
      PCIN(12) => \buff0_reg__1_n_141\,
      PCIN(11) => \buff0_reg__1_n_142\,
      PCIN(10) => \buff0_reg__1_n_143\,
      PCIN(9) => \buff0_reg__1_n_144\,
      PCIN(8) => \buff0_reg__1_n_145\,
      PCIN(7) => \buff0_reg__1_n_146\,
      PCIN(6) => \buff0_reg__1_n_147\,
      PCIN(5) => \buff0_reg__1_n_148\,
      PCIN(4) => \buff0_reg__1_n_149\,
      PCIN(3) => \buff0_reg__1_n_150\,
      PCIN(2) => \buff0_reg__1_n_151\,
      PCIN(1) => \buff0_reg__1_n_152\,
      PCIN(0) => \buff0_reg__1_n_153\,
      PCOUT(47) => \tmp_product__0_n_106\,
      PCOUT(46) => \tmp_product__0_n_107\,
      PCOUT(45) => \tmp_product__0_n_108\,
      PCOUT(44) => \tmp_product__0_n_109\,
      PCOUT(43) => \tmp_product__0_n_110\,
      PCOUT(42) => \tmp_product__0_n_111\,
      PCOUT(41) => \tmp_product__0_n_112\,
      PCOUT(40) => \tmp_product__0_n_113\,
      PCOUT(39) => \tmp_product__0_n_114\,
      PCOUT(38) => \tmp_product__0_n_115\,
      PCOUT(37) => \tmp_product__0_n_116\,
      PCOUT(36) => \tmp_product__0_n_117\,
      PCOUT(35) => \tmp_product__0_n_118\,
      PCOUT(34) => \tmp_product__0_n_119\,
      PCOUT(33) => \tmp_product__0_n_120\,
      PCOUT(32) => \tmp_product__0_n_121\,
      PCOUT(31) => \tmp_product__0_n_122\,
      PCOUT(30) => \tmp_product__0_n_123\,
      PCOUT(29) => \tmp_product__0_n_124\,
      PCOUT(28) => \tmp_product__0_n_125\,
      PCOUT(27) => \tmp_product__0_n_126\,
      PCOUT(26) => \tmp_product__0_n_127\,
      PCOUT(25) => \tmp_product__0_n_128\,
      PCOUT(24) => \tmp_product__0_n_129\,
      PCOUT(23) => \tmp_product__0_n_130\,
      PCOUT(22) => \tmp_product__0_n_131\,
      PCOUT(21) => \tmp_product__0_n_132\,
      PCOUT(20) => \tmp_product__0_n_133\,
      PCOUT(19) => \tmp_product__0_n_134\,
      PCOUT(18) => \tmp_product__0_n_135\,
      PCOUT(17) => \tmp_product__0_n_136\,
      PCOUT(16) => \tmp_product__0_n_137\,
      PCOUT(15) => \tmp_product__0_n_138\,
      PCOUT(14) => \tmp_product__0_n_139\,
      PCOUT(13) => \tmp_product__0_n_140\,
      PCOUT(12) => \tmp_product__0_n_141\,
      PCOUT(11) => \tmp_product__0_n_142\,
      PCOUT(10) => \tmp_product__0_n_143\,
      PCOUT(9) => \tmp_product__0_n_144\,
      PCOUT(8) => \tmp_product__0_n_145\,
      PCOUT(7) => \tmp_product__0_n_146\,
      PCOUT(6) => \tmp_product__0_n_147\,
      PCOUT(5) => \tmp_product__0_n_148\,
      PCOUT(4) => \tmp_product__0_n_149\,
      PCOUT(3) => \tmp_product__0_n_150\,
      PCOUT(2) => \tmp_product__0_n_151\,
      PCOUT(1) => \tmp_product__0_n_152\,
      PCOUT(0) => \tmp_product__0_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_tmp_product__0_UNDERFLOW_UNCONNECTED\
    );
\tmp_product__1\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 0,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => \tmp_product__1_1\(0),
      A(16) => \tmp_product__1_1\(0),
      A(15) => \tmp_product__1_1\(0),
      A(14) => \tmp_product__1_1\(0),
      A(13) => \tmp_product__1_1\(0),
      A(12) => \tmp_product__1_1\(0),
      A(11) => \tmp_product__1_1\(0),
      A(10) => \tmp_product__1_1\(0),
      A(9) => \tmp_product__1_1\(0),
      A(8) => \tmp_product__1_1\(0),
      A(7) => \tmp_product__1_0\(8),
      A(6) => \tmp_product__1_0\(8),
      A(5) => \tmp_product__1_0\(8),
      A(4) => \tmp_product__1_0\(8),
      A(3) => \tmp_product__1_0\(8),
      A(2) => \tmp_product__1_0\(8),
      A(1) => \tmp_product__1_0\(8),
      A(0) => \tmp_product__1_0\(8),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_tmp_product__1_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"010001010110001011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_tmp_product__1_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_tmp_product__1_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_tmp_product__1_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '0',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_tmp_product__1_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_tmp_product__1_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_tmp_product__1_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_tmp_product__1_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_tmp_product__1_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \buff0_reg__2_n_106\,
      PCIN(46) => \buff0_reg__2_n_107\,
      PCIN(45) => \buff0_reg__2_n_108\,
      PCIN(44) => \buff0_reg__2_n_109\,
      PCIN(43) => \buff0_reg__2_n_110\,
      PCIN(42) => \buff0_reg__2_n_111\,
      PCIN(41) => \buff0_reg__2_n_112\,
      PCIN(40) => \buff0_reg__2_n_113\,
      PCIN(39) => \buff0_reg__2_n_114\,
      PCIN(38) => \buff0_reg__2_n_115\,
      PCIN(37) => \buff0_reg__2_n_116\,
      PCIN(36) => \buff0_reg__2_n_117\,
      PCIN(35) => \buff0_reg__2_n_118\,
      PCIN(34) => \buff0_reg__2_n_119\,
      PCIN(33) => \buff0_reg__2_n_120\,
      PCIN(32) => \buff0_reg__2_n_121\,
      PCIN(31) => \buff0_reg__2_n_122\,
      PCIN(30) => \buff0_reg__2_n_123\,
      PCIN(29) => \buff0_reg__2_n_124\,
      PCIN(28) => \buff0_reg__2_n_125\,
      PCIN(27) => \buff0_reg__2_n_126\,
      PCIN(26) => \buff0_reg__2_n_127\,
      PCIN(25) => \buff0_reg__2_n_128\,
      PCIN(24) => \buff0_reg__2_n_129\,
      PCIN(23) => \buff0_reg__2_n_130\,
      PCIN(22) => \buff0_reg__2_n_131\,
      PCIN(21) => \buff0_reg__2_n_132\,
      PCIN(20) => \buff0_reg__2_n_133\,
      PCIN(19) => \buff0_reg__2_n_134\,
      PCIN(18) => \buff0_reg__2_n_135\,
      PCIN(17) => \buff0_reg__2_n_136\,
      PCIN(16) => \buff0_reg__2_n_137\,
      PCIN(15) => \buff0_reg__2_n_138\,
      PCIN(14) => \buff0_reg__2_n_139\,
      PCIN(13) => \buff0_reg__2_n_140\,
      PCIN(12) => \buff0_reg__2_n_141\,
      PCIN(11) => \buff0_reg__2_n_142\,
      PCIN(10) => \buff0_reg__2_n_143\,
      PCIN(9) => \buff0_reg__2_n_144\,
      PCIN(8) => \buff0_reg__2_n_145\,
      PCIN(7) => \buff0_reg__2_n_146\,
      PCIN(6) => \buff0_reg__2_n_147\,
      PCIN(5) => \buff0_reg__2_n_148\,
      PCIN(4) => \buff0_reg__2_n_149\,
      PCIN(3) => \buff0_reg__2_n_150\,
      PCIN(2) => \buff0_reg__2_n_151\,
      PCIN(1) => \buff0_reg__2_n_152\,
      PCIN(0) => \buff0_reg__2_n_153\,
      PCOUT(47) => \tmp_product__1_n_106\,
      PCOUT(46) => \tmp_product__1_n_107\,
      PCOUT(45) => \tmp_product__1_n_108\,
      PCOUT(44) => \tmp_product__1_n_109\,
      PCOUT(43) => \tmp_product__1_n_110\,
      PCOUT(42) => \tmp_product__1_n_111\,
      PCOUT(41) => \tmp_product__1_n_112\,
      PCOUT(40) => \tmp_product__1_n_113\,
      PCOUT(39) => \tmp_product__1_n_114\,
      PCOUT(38) => \tmp_product__1_n_115\,
      PCOUT(37) => \tmp_product__1_n_116\,
      PCOUT(36) => \tmp_product__1_n_117\,
      PCOUT(35) => \tmp_product__1_n_118\,
      PCOUT(34) => \tmp_product__1_n_119\,
      PCOUT(33) => \tmp_product__1_n_120\,
      PCOUT(32) => \tmp_product__1_n_121\,
      PCOUT(31) => \tmp_product__1_n_122\,
      PCOUT(30) => \tmp_product__1_n_123\,
      PCOUT(29) => \tmp_product__1_n_124\,
      PCOUT(28) => \tmp_product__1_n_125\,
      PCOUT(27) => \tmp_product__1_n_126\,
      PCOUT(26) => \tmp_product__1_n_127\,
      PCOUT(25) => \tmp_product__1_n_128\,
      PCOUT(24) => \tmp_product__1_n_129\,
      PCOUT(23) => \tmp_product__1_n_130\,
      PCOUT(22) => \tmp_product__1_n_131\,
      PCOUT(21) => \tmp_product__1_n_132\,
      PCOUT(20) => \tmp_product__1_n_133\,
      PCOUT(19) => \tmp_product__1_n_134\,
      PCOUT(18) => \tmp_product__1_n_135\,
      PCOUT(17) => \tmp_product__1_n_136\,
      PCOUT(16) => \tmp_product__1_n_137\,
      PCOUT(15) => \tmp_product__1_n_138\,
      PCOUT(14) => \tmp_product__1_n_139\,
      PCOUT(13) => \tmp_product__1_n_140\,
      PCOUT(12) => \tmp_product__1_n_141\,
      PCOUT(11) => \tmp_product__1_n_142\,
      PCOUT(10) => \tmp_product__1_n_143\,
      PCOUT(9) => \tmp_product__1_n_144\,
      PCOUT(8) => \tmp_product__1_n_145\,
      PCOUT(7) => \tmp_product__1_n_146\,
      PCOUT(6) => \tmp_product__1_n_147\,
      PCOUT(5) => \tmp_product__1_n_148\,
      PCOUT(4) => \tmp_product__1_n_149\,
      PCOUT(3) => \tmp_product__1_n_150\,
      PCOUT(2) => \tmp_product__1_n_151\,
      PCOUT(1) => \tmp_product__1_n_152\,
      PCOUT(0) => \tmp_product__1_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_tmp_product__1_UNDERFLOW_UNCONNECTED\
    );
\tmp_product__2\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 0,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16) => \tmp_product__2_0\(0),
      A(15) => \tmp_product__2_0\(0),
      A(14) => \tmp_product__2_0\(0),
      A(13) => \tmp_product__2_0\(0),
      A(12) => \tmp_product__2_0\(0),
      A(11) => \tmp_product__2_0\(0),
      A(10) => \tmp_product__2_0\(0),
      A(9) => \tmp_product__2_0\(0),
      A(8) => \tmp_product__2_0\(0),
      A(7) => \tmp_product__2_0\(0),
      A(6 downto 0) => \tmp_product__1_0\(6 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_tmp_product__2_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"010001010110001011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_tmp_product__2_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_tmp_product__2_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_tmp_product__2_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '0',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_tmp_product__2_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"1010101",
      OVERFLOW => \NLW_tmp_product__2_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_tmp_product__2_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_tmp_product__2_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_tmp_product__2_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \buff0_reg__3_n_106\,
      PCIN(46) => \buff0_reg__3_n_107\,
      PCIN(45) => \buff0_reg__3_n_108\,
      PCIN(44) => \buff0_reg__3_n_109\,
      PCIN(43) => \buff0_reg__3_n_110\,
      PCIN(42) => \buff0_reg__3_n_111\,
      PCIN(41) => \buff0_reg__3_n_112\,
      PCIN(40) => \buff0_reg__3_n_113\,
      PCIN(39) => \buff0_reg__3_n_114\,
      PCIN(38) => \buff0_reg__3_n_115\,
      PCIN(37) => \buff0_reg__3_n_116\,
      PCIN(36) => \buff0_reg__3_n_117\,
      PCIN(35) => \buff0_reg__3_n_118\,
      PCIN(34) => \buff0_reg__3_n_119\,
      PCIN(33) => \buff0_reg__3_n_120\,
      PCIN(32) => \buff0_reg__3_n_121\,
      PCIN(31) => \buff0_reg__3_n_122\,
      PCIN(30) => \buff0_reg__3_n_123\,
      PCIN(29) => \buff0_reg__3_n_124\,
      PCIN(28) => \buff0_reg__3_n_125\,
      PCIN(27) => \buff0_reg__3_n_126\,
      PCIN(26) => \buff0_reg__3_n_127\,
      PCIN(25) => \buff0_reg__3_n_128\,
      PCIN(24) => \buff0_reg__3_n_129\,
      PCIN(23) => \buff0_reg__3_n_130\,
      PCIN(22) => \buff0_reg__3_n_131\,
      PCIN(21) => \buff0_reg__3_n_132\,
      PCIN(20) => \buff0_reg__3_n_133\,
      PCIN(19) => \buff0_reg__3_n_134\,
      PCIN(18) => \buff0_reg__3_n_135\,
      PCIN(17) => \buff0_reg__3_n_136\,
      PCIN(16) => \buff0_reg__3_n_137\,
      PCIN(15) => \buff0_reg__3_n_138\,
      PCIN(14) => \buff0_reg__3_n_139\,
      PCIN(13) => \buff0_reg__3_n_140\,
      PCIN(12) => \buff0_reg__3_n_141\,
      PCIN(11) => \buff0_reg__3_n_142\,
      PCIN(10) => \buff0_reg__3_n_143\,
      PCIN(9) => \buff0_reg__3_n_144\,
      PCIN(8) => \buff0_reg__3_n_145\,
      PCIN(7) => \buff0_reg__3_n_146\,
      PCIN(6) => \buff0_reg__3_n_147\,
      PCIN(5) => \buff0_reg__3_n_148\,
      PCIN(4) => \buff0_reg__3_n_149\,
      PCIN(3) => \buff0_reg__3_n_150\,
      PCIN(2) => \buff0_reg__3_n_151\,
      PCIN(1) => \buff0_reg__3_n_152\,
      PCIN(0) => \buff0_reg__3_n_153\,
      PCOUT(47) => \tmp_product__2_n_106\,
      PCOUT(46) => \tmp_product__2_n_107\,
      PCOUT(45) => \tmp_product__2_n_108\,
      PCOUT(44) => \tmp_product__2_n_109\,
      PCOUT(43) => \tmp_product__2_n_110\,
      PCOUT(42) => \tmp_product__2_n_111\,
      PCOUT(41) => \tmp_product__2_n_112\,
      PCOUT(40) => \tmp_product__2_n_113\,
      PCOUT(39) => \tmp_product__2_n_114\,
      PCOUT(38) => \tmp_product__2_n_115\,
      PCOUT(37) => \tmp_product__2_n_116\,
      PCOUT(36) => \tmp_product__2_n_117\,
      PCOUT(35) => \tmp_product__2_n_118\,
      PCOUT(34) => \tmp_product__2_n_119\,
      PCOUT(33) => \tmp_product__2_n_120\,
      PCOUT(32) => \tmp_product__2_n_121\,
      PCOUT(31) => \tmp_product__2_n_122\,
      PCOUT(30) => \tmp_product__2_n_123\,
      PCOUT(29) => \tmp_product__2_n_124\,
      PCOUT(28) => \tmp_product__2_n_125\,
      PCOUT(27) => \tmp_product__2_n_126\,
      PCOUT(26) => \tmp_product__2_n_127\,
      PCOUT(25) => \tmp_product__2_n_128\,
      PCOUT(24) => \tmp_product__2_n_129\,
      PCOUT(23) => \tmp_product__2_n_130\,
      PCOUT(22) => \tmp_product__2_n_131\,
      PCOUT(21) => \tmp_product__2_n_132\,
      PCOUT(20) => \tmp_product__2_n_133\,
      PCOUT(19) => \tmp_product__2_n_134\,
      PCOUT(18) => \tmp_product__2_n_135\,
      PCOUT(17) => \tmp_product__2_n_136\,
      PCOUT(16) => \tmp_product__2_n_137\,
      PCOUT(15) => \tmp_product__2_n_138\,
      PCOUT(14) => \tmp_product__2_n_139\,
      PCOUT(13) => \tmp_product__2_n_140\,
      PCOUT(12) => \tmp_product__2_n_141\,
      PCOUT(11) => \tmp_product__2_n_142\,
      PCOUT(10) => \tmp_product__2_n_143\,
      PCOUT(9) => \tmp_product__2_n_144\,
      PCOUT(8) => \tmp_product__2_n_145\,
      PCOUT(7) => \tmp_product__2_n_146\,
      PCOUT(6) => \tmp_product__2_n_147\,
      PCOUT(5) => \tmp_product__2_n_148\,
      PCOUT(4) => \tmp_product__2_n_149\,
      PCOUT(3) => \tmp_product__2_n_150\,
      PCOUT(2) => \tmp_product__2_n_151\,
      PCOUT(1) => \tmp_product__2_n_152\,
      PCOUT(0) => \tmp_product__2_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_tmp_product__2_UNDERFLOW_UNCONNECTED\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0_1 is
  port (
    buff0_reg_0 : out STD_LOGIC_VECTOR ( 7 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    p_9 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0_1 : entity is "fn1_mul_64ns_66ns_82_5_1_Multiplier_0";
end bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0_1 is
  signal \buff0_reg__0_n_100\ : STD_LOGIC;
  signal \buff0_reg__0_n_101\ : STD_LOGIC;
  signal \buff0_reg__0_n_102\ : STD_LOGIC;
  signal \buff0_reg__0_n_103\ : STD_LOGIC;
  signal \buff0_reg__0_n_104\ : STD_LOGIC;
  signal \buff0_reg__0_n_105\ : STD_LOGIC;
  signal \buff0_reg__0_n_106\ : STD_LOGIC;
  signal \buff0_reg__0_n_107\ : STD_LOGIC;
  signal \buff0_reg__0_n_108\ : STD_LOGIC;
  signal \buff0_reg__0_n_109\ : STD_LOGIC;
  signal \buff0_reg__0_n_110\ : STD_LOGIC;
  signal \buff0_reg__0_n_111\ : STD_LOGIC;
  signal \buff0_reg__0_n_112\ : STD_LOGIC;
  signal \buff0_reg__0_n_113\ : STD_LOGIC;
  signal \buff0_reg__0_n_114\ : STD_LOGIC;
  signal \buff0_reg__0_n_115\ : STD_LOGIC;
  signal \buff0_reg__0_n_116\ : STD_LOGIC;
  signal \buff0_reg__0_n_117\ : STD_LOGIC;
  signal \buff0_reg__0_n_118\ : STD_LOGIC;
  signal \buff0_reg__0_n_119\ : STD_LOGIC;
  signal \buff0_reg__0_n_120\ : STD_LOGIC;
  signal \buff0_reg__0_n_121\ : STD_LOGIC;
  signal \buff0_reg__0_n_122\ : STD_LOGIC;
  signal \buff0_reg__0_n_123\ : STD_LOGIC;
  signal \buff0_reg__0_n_124\ : STD_LOGIC;
  signal \buff0_reg__0_n_125\ : STD_LOGIC;
  signal \buff0_reg__0_n_126\ : STD_LOGIC;
  signal \buff0_reg__0_n_127\ : STD_LOGIC;
  signal \buff0_reg__0_n_128\ : STD_LOGIC;
  signal \buff0_reg__0_n_129\ : STD_LOGIC;
  signal \buff0_reg__0_n_130\ : STD_LOGIC;
  signal \buff0_reg__0_n_131\ : STD_LOGIC;
  signal \buff0_reg__0_n_132\ : STD_LOGIC;
  signal \buff0_reg__0_n_133\ : STD_LOGIC;
  signal \buff0_reg__0_n_134\ : STD_LOGIC;
  signal \buff0_reg__0_n_135\ : STD_LOGIC;
  signal \buff0_reg__0_n_136\ : STD_LOGIC;
  signal \buff0_reg__0_n_137\ : STD_LOGIC;
  signal \buff0_reg__0_n_138\ : STD_LOGIC;
  signal \buff0_reg__0_n_139\ : STD_LOGIC;
  signal \buff0_reg__0_n_140\ : STD_LOGIC;
  signal \buff0_reg__0_n_141\ : STD_LOGIC;
  signal \buff0_reg__0_n_142\ : STD_LOGIC;
  signal \buff0_reg__0_n_143\ : STD_LOGIC;
  signal \buff0_reg__0_n_144\ : STD_LOGIC;
  signal \buff0_reg__0_n_145\ : STD_LOGIC;
  signal \buff0_reg__0_n_146\ : STD_LOGIC;
  signal \buff0_reg__0_n_147\ : STD_LOGIC;
  signal \buff0_reg__0_n_148\ : STD_LOGIC;
  signal \buff0_reg__0_n_149\ : STD_LOGIC;
  signal \buff0_reg__0_n_150\ : STD_LOGIC;
  signal \buff0_reg__0_n_151\ : STD_LOGIC;
  signal \buff0_reg__0_n_152\ : STD_LOGIC;
  signal \buff0_reg__0_n_153\ : STD_LOGIC;
  signal \buff0_reg__0_n_58\ : STD_LOGIC;
  signal \buff0_reg__0_n_59\ : STD_LOGIC;
  signal \buff0_reg__0_n_60\ : STD_LOGIC;
  signal \buff0_reg__0_n_61\ : STD_LOGIC;
  signal \buff0_reg__0_n_62\ : STD_LOGIC;
  signal \buff0_reg__0_n_63\ : STD_LOGIC;
  signal \buff0_reg__0_n_64\ : STD_LOGIC;
  signal \buff0_reg__0_n_65\ : STD_LOGIC;
  signal \buff0_reg__0_n_66\ : STD_LOGIC;
  signal \buff0_reg__0_n_67\ : STD_LOGIC;
  signal \buff0_reg__0_n_68\ : STD_LOGIC;
  signal \buff0_reg__0_n_69\ : STD_LOGIC;
  signal \buff0_reg__0_n_70\ : STD_LOGIC;
  signal \buff0_reg__0_n_71\ : STD_LOGIC;
  signal \buff0_reg__0_n_72\ : STD_LOGIC;
  signal \buff0_reg__0_n_73\ : STD_LOGIC;
  signal \buff0_reg__0_n_74\ : STD_LOGIC;
  signal \buff0_reg__0_n_75\ : STD_LOGIC;
  signal \buff0_reg__0_n_76\ : STD_LOGIC;
  signal \buff0_reg__0_n_77\ : STD_LOGIC;
  signal \buff0_reg__0_n_78\ : STD_LOGIC;
  signal \buff0_reg__0_n_79\ : STD_LOGIC;
  signal \buff0_reg__0_n_80\ : STD_LOGIC;
  signal \buff0_reg__0_n_81\ : STD_LOGIC;
  signal \buff0_reg__0_n_82\ : STD_LOGIC;
  signal \buff0_reg__0_n_83\ : STD_LOGIC;
  signal \buff0_reg__0_n_84\ : STD_LOGIC;
  signal \buff0_reg__0_n_85\ : STD_LOGIC;
  signal \buff0_reg__0_n_86\ : STD_LOGIC;
  signal \buff0_reg__0_n_87\ : STD_LOGIC;
  signal \buff0_reg__0_n_88\ : STD_LOGIC;
  signal \buff0_reg__0_n_89\ : STD_LOGIC;
  signal \buff0_reg__0_n_90\ : STD_LOGIC;
  signal \buff0_reg__0_n_91\ : STD_LOGIC;
  signal \buff0_reg__0_n_92\ : STD_LOGIC;
  signal \buff0_reg__0_n_93\ : STD_LOGIC;
  signal \buff0_reg__0_n_94\ : STD_LOGIC;
  signal \buff0_reg__0_n_95\ : STD_LOGIC;
  signal \buff0_reg__0_n_96\ : STD_LOGIC;
  signal \buff0_reg__0_n_97\ : STD_LOGIC;
  signal \buff0_reg__0_n_98\ : STD_LOGIC;
  signal \buff0_reg__0_n_99\ : STD_LOGIC;
  signal \buff0_reg__1_i_10_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_11_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_12_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_13_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_14_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_15_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_16_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_17_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_18_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_19_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_1_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_1_n_1\ : STD_LOGIC;
  signal \buff0_reg__1_i_1_n_2\ : STD_LOGIC;
  signal \buff0_reg__1_i_1_n_3\ : STD_LOGIC;
  signal \buff0_reg__1_i_20_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_21_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_22_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_23_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_24_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_25_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_26_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_27_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_28_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_29_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_2_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_2_n_1\ : STD_LOGIC;
  signal \buff0_reg__1_i_2_n_2\ : STD_LOGIC;
  signal \buff0_reg__1_i_2_n_3\ : STD_LOGIC;
  signal \buff0_reg__1_i_30_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_31_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_32_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_33_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_34_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_3_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_3_n_1\ : STD_LOGIC;
  signal \buff0_reg__1_i_3_n_2\ : STD_LOGIC;
  signal \buff0_reg__1_i_3_n_3\ : STD_LOGIC;
  signal \buff0_reg__1_i_4_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_4_n_1\ : STD_LOGIC;
  signal \buff0_reg__1_i_4_n_2\ : STD_LOGIC;
  signal \buff0_reg__1_i_4_n_3\ : STD_LOGIC;
  signal \buff0_reg__1_i_5__0_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_6__0_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_7__0_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_8__0_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_i_9_n_0\ : STD_LOGIC;
  signal \buff0_reg__1_n_106\ : STD_LOGIC;
  signal \buff0_reg__1_n_107\ : STD_LOGIC;
  signal \buff0_reg__1_n_108\ : STD_LOGIC;
  signal \buff0_reg__1_n_109\ : STD_LOGIC;
  signal \buff0_reg__1_n_110\ : STD_LOGIC;
  signal \buff0_reg__1_n_111\ : STD_LOGIC;
  signal \buff0_reg__1_n_112\ : STD_LOGIC;
  signal \buff0_reg__1_n_113\ : STD_LOGIC;
  signal \buff0_reg__1_n_114\ : STD_LOGIC;
  signal \buff0_reg__1_n_115\ : STD_LOGIC;
  signal \buff0_reg__1_n_116\ : STD_LOGIC;
  signal \buff0_reg__1_n_117\ : STD_LOGIC;
  signal \buff0_reg__1_n_118\ : STD_LOGIC;
  signal \buff0_reg__1_n_119\ : STD_LOGIC;
  signal \buff0_reg__1_n_120\ : STD_LOGIC;
  signal \buff0_reg__1_n_121\ : STD_LOGIC;
  signal \buff0_reg__1_n_122\ : STD_LOGIC;
  signal \buff0_reg__1_n_123\ : STD_LOGIC;
  signal \buff0_reg__1_n_124\ : STD_LOGIC;
  signal \buff0_reg__1_n_125\ : STD_LOGIC;
  signal \buff0_reg__1_n_126\ : STD_LOGIC;
  signal \buff0_reg__1_n_127\ : STD_LOGIC;
  signal \buff0_reg__1_n_128\ : STD_LOGIC;
  signal \buff0_reg__1_n_129\ : STD_LOGIC;
  signal \buff0_reg__1_n_130\ : STD_LOGIC;
  signal \buff0_reg__1_n_131\ : STD_LOGIC;
  signal \buff0_reg__1_n_132\ : STD_LOGIC;
  signal \buff0_reg__1_n_133\ : STD_LOGIC;
  signal \buff0_reg__1_n_134\ : STD_LOGIC;
  signal \buff0_reg__1_n_135\ : STD_LOGIC;
  signal \buff0_reg__1_n_136\ : STD_LOGIC;
  signal \buff0_reg__1_n_137\ : STD_LOGIC;
  signal \buff0_reg__1_n_138\ : STD_LOGIC;
  signal \buff0_reg__1_n_139\ : STD_LOGIC;
  signal \buff0_reg__1_n_140\ : STD_LOGIC;
  signal \buff0_reg__1_n_141\ : STD_LOGIC;
  signal \buff0_reg__1_n_142\ : STD_LOGIC;
  signal \buff0_reg__1_n_143\ : STD_LOGIC;
  signal \buff0_reg__1_n_144\ : STD_LOGIC;
  signal \buff0_reg__1_n_145\ : STD_LOGIC;
  signal \buff0_reg__1_n_146\ : STD_LOGIC;
  signal \buff0_reg__1_n_147\ : STD_LOGIC;
  signal \buff0_reg__1_n_148\ : STD_LOGIC;
  signal \buff0_reg__1_n_149\ : STD_LOGIC;
  signal \buff0_reg__1_n_150\ : STD_LOGIC;
  signal \buff0_reg__1_n_151\ : STD_LOGIC;
  signal \buff0_reg__1_n_152\ : STD_LOGIC;
  signal \buff0_reg__1_n_153\ : STD_LOGIC;
  signal \buff0_reg__2_n_106\ : STD_LOGIC;
  signal \buff0_reg__2_n_107\ : STD_LOGIC;
  signal \buff0_reg__2_n_108\ : STD_LOGIC;
  signal \buff0_reg__2_n_109\ : STD_LOGIC;
  signal \buff0_reg__2_n_110\ : STD_LOGIC;
  signal \buff0_reg__2_n_111\ : STD_LOGIC;
  signal \buff0_reg__2_n_112\ : STD_LOGIC;
  signal \buff0_reg__2_n_113\ : STD_LOGIC;
  signal \buff0_reg__2_n_114\ : STD_LOGIC;
  signal \buff0_reg__2_n_115\ : STD_LOGIC;
  signal \buff0_reg__2_n_116\ : STD_LOGIC;
  signal \buff0_reg__2_n_117\ : STD_LOGIC;
  signal \buff0_reg__2_n_118\ : STD_LOGIC;
  signal \buff0_reg__2_n_119\ : STD_LOGIC;
  signal \buff0_reg__2_n_120\ : STD_LOGIC;
  signal \buff0_reg__2_n_121\ : STD_LOGIC;
  signal \buff0_reg__2_n_122\ : STD_LOGIC;
  signal \buff0_reg__2_n_123\ : STD_LOGIC;
  signal \buff0_reg__2_n_124\ : STD_LOGIC;
  signal \buff0_reg__2_n_125\ : STD_LOGIC;
  signal \buff0_reg__2_n_126\ : STD_LOGIC;
  signal \buff0_reg__2_n_127\ : STD_LOGIC;
  signal \buff0_reg__2_n_128\ : STD_LOGIC;
  signal \buff0_reg__2_n_129\ : STD_LOGIC;
  signal \buff0_reg__2_n_130\ : STD_LOGIC;
  signal \buff0_reg__2_n_131\ : STD_LOGIC;
  signal \buff0_reg__2_n_132\ : STD_LOGIC;
  signal \buff0_reg__2_n_133\ : STD_LOGIC;
  signal \buff0_reg__2_n_134\ : STD_LOGIC;
  signal \buff0_reg__2_n_135\ : STD_LOGIC;
  signal \buff0_reg__2_n_136\ : STD_LOGIC;
  signal \buff0_reg__2_n_137\ : STD_LOGIC;
  signal \buff0_reg__2_n_138\ : STD_LOGIC;
  signal \buff0_reg__2_n_139\ : STD_LOGIC;
  signal \buff0_reg__2_n_140\ : STD_LOGIC;
  signal \buff0_reg__2_n_141\ : STD_LOGIC;
  signal \buff0_reg__2_n_142\ : STD_LOGIC;
  signal \buff0_reg__2_n_143\ : STD_LOGIC;
  signal \buff0_reg__2_n_144\ : STD_LOGIC;
  signal \buff0_reg__2_n_145\ : STD_LOGIC;
  signal \buff0_reg__2_n_146\ : STD_LOGIC;
  signal \buff0_reg__2_n_147\ : STD_LOGIC;
  signal \buff0_reg__2_n_148\ : STD_LOGIC;
  signal \buff0_reg__2_n_149\ : STD_LOGIC;
  signal \buff0_reg__2_n_150\ : STD_LOGIC;
  signal \buff0_reg__2_n_151\ : STD_LOGIC;
  signal \buff0_reg__2_n_152\ : STD_LOGIC;
  signal \buff0_reg__2_n_153\ : STD_LOGIC;
  signal \buff0_reg__3_n_100\ : STD_LOGIC;
  signal \buff0_reg__3_n_101\ : STD_LOGIC;
  signal \buff0_reg__3_n_102\ : STD_LOGIC;
  signal \buff0_reg__3_n_103\ : STD_LOGIC;
  signal \buff0_reg__3_n_104\ : STD_LOGIC;
  signal \buff0_reg__3_n_105\ : STD_LOGIC;
  signal \buff0_reg__3_n_106\ : STD_LOGIC;
  signal \buff0_reg__3_n_107\ : STD_LOGIC;
  signal \buff0_reg__3_n_108\ : STD_LOGIC;
  signal \buff0_reg__3_n_109\ : STD_LOGIC;
  signal \buff0_reg__3_n_110\ : STD_LOGIC;
  signal \buff0_reg__3_n_111\ : STD_LOGIC;
  signal \buff0_reg__3_n_112\ : STD_LOGIC;
  signal \buff0_reg__3_n_113\ : STD_LOGIC;
  signal \buff0_reg__3_n_114\ : STD_LOGIC;
  signal \buff0_reg__3_n_115\ : STD_LOGIC;
  signal \buff0_reg__3_n_116\ : STD_LOGIC;
  signal \buff0_reg__3_n_117\ : STD_LOGIC;
  signal \buff0_reg__3_n_118\ : STD_LOGIC;
  signal \buff0_reg__3_n_119\ : STD_LOGIC;
  signal \buff0_reg__3_n_120\ : STD_LOGIC;
  signal \buff0_reg__3_n_121\ : STD_LOGIC;
  signal \buff0_reg__3_n_122\ : STD_LOGIC;
  signal \buff0_reg__3_n_123\ : STD_LOGIC;
  signal \buff0_reg__3_n_124\ : STD_LOGIC;
  signal \buff0_reg__3_n_125\ : STD_LOGIC;
  signal \buff0_reg__3_n_126\ : STD_LOGIC;
  signal \buff0_reg__3_n_127\ : STD_LOGIC;
  signal \buff0_reg__3_n_128\ : STD_LOGIC;
  signal \buff0_reg__3_n_129\ : STD_LOGIC;
  signal \buff0_reg__3_n_130\ : STD_LOGIC;
  signal \buff0_reg__3_n_131\ : STD_LOGIC;
  signal \buff0_reg__3_n_132\ : STD_LOGIC;
  signal \buff0_reg__3_n_133\ : STD_LOGIC;
  signal \buff0_reg__3_n_134\ : STD_LOGIC;
  signal \buff0_reg__3_n_135\ : STD_LOGIC;
  signal \buff0_reg__3_n_136\ : STD_LOGIC;
  signal \buff0_reg__3_n_137\ : STD_LOGIC;
  signal \buff0_reg__3_n_138\ : STD_LOGIC;
  signal \buff0_reg__3_n_139\ : STD_LOGIC;
  signal \buff0_reg__3_n_140\ : STD_LOGIC;
  signal \buff0_reg__3_n_141\ : STD_LOGIC;
  signal \buff0_reg__3_n_142\ : STD_LOGIC;
  signal \buff0_reg__3_n_143\ : STD_LOGIC;
  signal \buff0_reg__3_n_144\ : STD_LOGIC;
  signal \buff0_reg__3_n_145\ : STD_LOGIC;
  signal \buff0_reg__3_n_146\ : STD_LOGIC;
  signal \buff0_reg__3_n_147\ : STD_LOGIC;
  signal \buff0_reg__3_n_148\ : STD_LOGIC;
  signal \buff0_reg__3_n_149\ : STD_LOGIC;
  signal \buff0_reg__3_n_150\ : STD_LOGIC;
  signal \buff0_reg__3_n_151\ : STD_LOGIC;
  signal \buff0_reg__3_n_152\ : STD_LOGIC;
  signal \buff0_reg__3_n_153\ : STD_LOGIC;
  signal \buff0_reg__3_n_58\ : STD_LOGIC;
  signal \buff0_reg__3_n_59\ : STD_LOGIC;
  signal \buff0_reg__3_n_60\ : STD_LOGIC;
  signal \buff0_reg__3_n_61\ : STD_LOGIC;
  signal \buff0_reg__3_n_62\ : STD_LOGIC;
  signal \buff0_reg__3_n_63\ : STD_LOGIC;
  signal \buff0_reg__3_n_64\ : STD_LOGIC;
  signal \buff0_reg__3_n_65\ : STD_LOGIC;
  signal \buff0_reg__3_n_66\ : STD_LOGIC;
  signal \buff0_reg__3_n_67\ : STD_LOGIC;
  signal \buff0_reg__3_n_68\ : STD_LOGIC;
  signal \buff0_reg__3_n_69\ : STD_LOGIC;
  signal \buff0_reg__3_n_70\ : STD_LOGIC;
  signal \buff0_reg__3_n_71\ : STD_LOGIC;
  signal \buff0_reg__3_n_72\ : STD_LOGIC;
  signal \buff0_reg__3_n_73\ : STD_LOGIC;
  signal \buff0_reg__3_n_74\ : STD_LOGIC;
  signal \buff0_reg__3_n_75\ : STD_LOGIC;
  signal \buff0_reg__3_n_76\ : STD_LOGIC;
  signal \buff0_reg__3_n_77\ : STD_LOGIC;
  signal \buff0_reg__3_n_78\ : STD_LOGIC;
  signal \buff0_reg__3_n_79\ : STD_LOGIC;
  signal \buff0_reg__3_n_80\ : STD_LOGIC;
  signal \buff0_reg__3_n_81\ : STD_LOGIC;
  signal \buff0_reg__3_n_82\ : STD_LOGIC;
  signal \buff0_reg__3_n_83\ : STD_LOGIC;
  signal \buff0_reg__3_n_84\ : STD_LOGIC;
  signal \buff0_reg__3_n_85\ : STD_LOGIC;
  signal \buff0_reg__3_n_86\ : STD_LOGIC;
  signal \buff0_reg__3_n_87\ : STD_LOGIC;
  signal \buff0_reg__3_n_88\ : STD_LOGIC;
  signal \buff0_reg__3_n_89\ : STD_LOGIC;
  signal \buff0_reg__3_n_90\ : STD_LOGIC;
  signal \buff0_reg__3_n_91\ : STD_LOGIC;
  signal \buff0_reg__3_n_92\ : STD_LOGIC;
  signal \buff0_reg__3_n_93\ : STD_LOGIC;
  signal \buff0_reg__3_n_94\ : STD_LOGIC;
  signal \buff0_reg__3_n_95\ : STD_LOGIC;
  signal \buff0_reg__3_n_96\ : STD_LOGIC;
  signal \buff0_reg__3_n_97\ : STD_LOGIC;
  signal \buff0_reg__3_n_98\ : STD_LOGIC;
  signal \buff0_reg__3_n_99\ : STD_LOGIC;
  signal buff0_reg_i_1_n_3 : STD_LOGIC;
  signal buff0_reg_i_2_n_0 : STD_LOGIC;
  signal buff0_reg_n_100 : STD_LOGIC;
  signal buff0_reg_n_101 : STD_LOGIC;
  signal buff0_reg_n_102 : STD_LOGIC;
  signal buff0_reg_n_103 : STD_LOGIC;
  signal buff0_reg_n_104 : STD_LOGIC;
  signal buff0_reg_n_105 : STD_LOGIC;
  signal buff0_reg_n_106 : STD_LOGIC;
  signal buff0_reg_n_107 : STD_LOGIC;
  signal buff0_reg_n_108 : STD_LOGIC;
  signal buff0_reg_n_109 : STD_LOGIC;
  signal buff0_reg_n_110 : STD_LOGIC;
  signal buff0_reg_n_111 : STD_LOGIC;
  signal buff0_reg_n_112 : STD_LOGIC;
  signal buff0_reg_n_113 : STD_LOGIC;
  signal buff0_reg_n_114 : STD_LOGIC;
  signal buff0_reg_n_115 : STD_LOGIC;
  signal buff0_reg_n_116 : STD_LOGIC;
  signal buff0_reg_n_117 : STD_LOGIC;
  signal buff0_reg_n_118 : STD_LOGIC;
  signal buff0_reg_n_119 : STD_LOGIC;
  signal buff0_reg_n_120 : STD_LOGIC;
  signal buff0_reg_n_121 : STD_LOGIC;
  signal buff0_reg_n_122 : STD_LOGIC;
  signal buff0_reg_n_123 : STD_LOGIC;
  signal buff0_reg_n_124 : STD_LOGIC;
  signal buff0_reg_n_125 : STD_LOGIC;
  signal buff0_reg_n_126 : STD_LOGIC;
  signal buff0_reg_n_127 : STD_LOGIC;
  signal buff0_reg_n_128 : STD_LOGIC;
  signal buff0_reg_n_129 : STD_LOGIC;
  signal buff0_reg_n_130 : STD_LOGIC;
  signal buff0_reg_n_131 : STD_LOGIC;
  signal buff0_reg_n_132 : STD_LOGIC;
  signal buff0_reg_n_133 : STD_LOGIC;
  signal buff0_reg_n_134 : STD_LOGIC;
  signal buff0_reg_n_135 : STD_LOGIC;
  signal buff0_reg_n_136 : STD_LOGIC;
  signal buff0_reg_n_137 : STD_LOGIC;
  signal buff0_reg_n_138 : STD_LOGIC;
  signal buff0_reg_n_139 : STD_LOGIC;
  signal buff0_reg_n_140 : STD_LOGIC;
  signal buff0_reg_n_141 : STD_LOGIC;
  signal buff0_reg_n_142 : STD_LOGIC;
  signal buff0_reg_n_143 : STD_LOGIC;
  signal buff0_reg_n_144 : STD_LOGIC;
  signal buff0_reg_n_145 : STD_LOGIC;
  signal buff0_reg_n_146 : STD_LOGIC;
  signal buff0_reg_n_147 : STD_LOGIC;
  signal buff0_reg_n_148 : STD_LOGIC;
  signal buff0_reg_n_149 : STD_LOGIC;
  signal buff0_reg_n_150 : STD_LOGIC;
  signal buff0_reg_n_151 : STD_LOGIC;
  signal buff0_reg_n_152 : STD_LOGIC;
  signal buff0_reg_n_153 : STD_LOGIC;
  signal buff0_reg_n_58 : STD_LOGIC;
  signal buff0_reg_n_59 : STD_LOGIC;
  signal buff0_reg_n_60 : STD_LOGIC;
  signal buff0_reg_n_61 : STD_LOGIC;
  signal buff0_reg_n_62 : STD_LOGIC;
  signal buff0_reg_n_63 : STD_LOGIC;
  signal buff0_reg_n_64 : STD_LOGIC;
  signal buff0_reg_n_65 : STD_LOGIC;
  signal buff0_reg_n_66 : STD_LOGIC;
  signal buff0_reg_n_67 : STD_LOGIC;
  signal buff0_reg_n_68 : STD_LOGIC;
  signal buff0_reg_n_69 : STD_LOGIC;
  signal buff0_reg_n_70 : STD_LOGIC;
  signal buff0_reg_n_71 : STD_LOGIC;
  signal buff0_reg_n_72 : STD_LOGIC;
  signal buff0_reg_n_73 : STD_LOGIC;
  signal buff0_reg_n_74 : STD_LOGIC;
  signal buff0_reg_n_75 : STD_LOGIC;
  signal buff0_reg_n_76 : STD_LOGIC;
  signal buff0_reg_n_77 : STD_LOGIC;
  signal buff0_reg_n_78 : STD_LOGIC;
  signal buff0_reg_n_79 : STD_LOGIC;
  signal buff0_reg_n_80 : STD_LOGIC;
  signal buff0_reg_n_81 : STD_LOGIC;
  signal buff0_reg_n_82 : STD_LOGIC;
  signal buff0_reg_n_83 : STD_LOGIC;
  signal buff0_reg_n_84 : STD_LOGIC;
  signal buff0_reg_n_85 : STD_LOGIC;
  signal buff0_reg_n_86 : STD_LOGIC;
  signal buff0_reg_n_87 : STD_LOGIC;
  signal buff0_reg_n_88 : STD_LOGIC;
  signal buff0_reg_n_89 : STD_LOGIC;
  signal buff0_reg_n_90 : STD_LOGIC;
  signal buff0_reg_n_91 : STD_LOGIC;
  signal buff0_reg_n_92 : STD_LOGIC;
  signal buff0_reg_n_93 : STD_LOGIC;
  signal buff0_reg_n_94 : STD_LOGIC;
  signal buff0_reg_n_95 : STD_LOGIC;
  signal buff0_reg_n_96 : STD_LOGIC;
  signal buff0_reg_n_97 : STD_LOGIC;
  signal buff0_reg_n_98 : STD_LOGIC;
  signal buff0_reg_n_99 : STD_LOGIC;
  signal \buff1_reg[0]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[10]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[11]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[12]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[13]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[14]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[15]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[16]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[1]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[2]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[3]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[4]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[5]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[6]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[7]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[8]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg[9]__0_n_0\ : STD_LOGIC;
  signal \buff1_reg__0_n_100\ : STD_LOGIC;
  signal \buff1_reg__0_n_101\ : STD_LOGIC;
  signal \buff1_reg__0_n_102\ : STD_LOGIC;
  signal \buff1_reg__0_n_103\ : STD_LOGIC;
  signal \buff1_reg__0_n_104\ : STD_LOGIC;
  signal \buff1_reg__0_n_105\ : STD_LOGIC;
  signal \buff1_reg__0_n_58\ : STD_LOGIC;
  signal \buff1_reg__0_n_59\ : STD_LOGIC;
  signal \buff1_reg__0_n_60\ : STD_LOGIC;
  signal \buff1_reg__0_n_61\ : STD_LOGIC;
  signal \buff1_reg__0_n_62\ : STD_LOGIC;
  signal \buff1_reg__0_n_63\ : STD_LOGIC;
  signal \buff1_reg__0_n_64\ : STD_LOGIC;
  signal \buff1_reg__0_n_65\ : STD_LOGIC;
  signal \buff1_reg__0_n_66\ : STD_LOGIC;
  signal \buff1_reg__0_n_67\ : STD_LOGIC;
  signal \buff1_reg__0_n_68\ : STD_LOGIC;
  signal \buff1_reg__0_n_69\ : STD_LOGIC;
  signal \buff1_reg__0_n_70\ : STD_LOGIC;
  signal \buff1_reg__0_n_71\ : STD_LOGIC;
  signal \buff1_reg__0_n_72\ : STD_LOGIC;
  signal \buff1_reg__0_n_73\ : STD_LOGIC;
  signal \buff1_reg__0_n_74\ : STD_LOGIC;
  signal \buff1_reg__0_n_75\ : STD_LOGIC;
  signal \buff1_reg__0_n_76\ : STD_LOGIC;
  signal \buff1_reg__0_n_77\ : STD_LOGIC;
  signal \buff1_reg__0_n_78\ : STD_LOGIC;
  signal \buff1_reg__0_n_79\ : STD_LOGIC;
  signal \buff1_reg__0_n_80\ : STD_LOGIC;
  signal \buff1_reg__0_n_81\ : STD_LOGIC;
  signal \buff1_reg__0_n_82\ : STD_LOGIC;
  signal \buff1_reg__0_n_83\ : STD_LOGIC;
  signal \buff1_reg__0_n_84\ : STD_LOGIC;
  signal \buff1_reg__0_n_85\ : STD_LOGIC;
  signal \buff1_reg__0_n_86\ : STD_LOGIC;
  signal \buff1_reg__0_n_87\ : STD_LOGIC;
  signal \buff1_reg__0_n_88\ : STD_LOGIC;
  signal \buff1_reg__0_n_89\ : STD_LOGIC;
  signal \buff1_reg__0_n_90\ : STD_LOGIC;
  signal \buff1_reg__0_n_91\ : STD_LOGIC;
  signal \buff1_reg__0_n_92\ : STD_LOGIC;
  signal \buff1_reg__0_n_93\ : STD_LOGIC;
  signal \buff1_reg__0_n_94\ : STD_LOGIC;
  signal \buff1_reg__0_n_95\ : STD_LOGIC;
  signal \buff1_reg__0_n_96\ : STD_LOGIC;
  signal \buff1_reg__0_n_97\ : STD_LOGIC;
  signal \buff1_reg__0_n_98\ : STD_LOGIC;
  signal \buff1_reg__0_n_99\ : STD_LOGIC;
  signal \buff1_reg__1_n_100\ : STD_LOGIC;
  signal \buff1_reg__1_n_101\ : STD_LOGIC;
  signal \buff1_reg__1_n_102\ : STD_LOGIC;
  signal \buff1_reg__1_n_103\ : STD_LOGIC;
  signal \buff1_reg__1_n_104\ : STD_LOGIC;
  signal \buff1_reg__1_n_105\ : STD_LOGIC;
  signal \buff1_reg__1_n_58\ : STD_LOGIC;
  signal \buff1_reg__1_n_59\ : STD_LOGIC;
  signal \buff1_reg__1_n_60\ : STD_LOGIC;
  signal \buff1_reg__1_n_61\ : STD_LOGIC;
  signal \buff1_reg__1_n_62\ : STD_LOGIC;
  signal \buff1_reg__1_n_63\ : STD_LOGIC;
  signal \buff1_reg__1_n_64\ : STD_LOGIC;
  signal \buff1_reg__1_n_65\ : STD_LOGIC;
  signal \buff1_reg__1_n_66\ : STD_LOGIC;
  signal \buff1_reg__1_n_67\ : STD_LOGIC;
  signal \buff1_reg__1_n_68\ : STD_LOGIC;
  signal \buff1_reg__1_n_69\ : STD_LOGIC;
  signal \buff1_reg__1_n_70\ : STD_LOGIC;
  signal \buff1_reg__1_n_71\ : STD_LOGIC;
  signal \buff1_reg__1_n_72\ : STD_LOGIC;
  signal \buff1_reg__1_n_73\ : STD_LOGIC;
  signal \buff1_reg__1_n_74\ : STD_LOGIC;
  signal \buff1_reg__1_n_75\ : STD_LOGIC;
  signal \buff1_reg__1_n_76\ : STD_LOGIC;
  signal \buff1_reg__1_n_77\ : STD_LOGIC;
  signal \buff1_reg__1_n_78\ : STD_LOGIC;
  signal \buff1_reg__1_n_79\ : STD_LOGIC;
  signal \buff1_reg__1_n_80\ : STD_LOGIC;
  signal \buff1_reg__1_n_81\ : STD_LOGIC;
  signal \buff1_reg__1_n_82\ : STD_LOGIC;
  signal \buff1_reg__1_n_83\ : STD_LOGIC;
  signal \buff1_reg__1_n_84\ : STD_LOGIC;
  signal \buff1_reg__1_n_85\ : STD_LOGIC;
  signal \buff1_reg__1_n_86\ : STD_LOGIC;
  signal \buff1_reg__1_n_87\ : STD_LOGIC;
  signal \buff1_reg__1_n_88\ : STD_LOGIC;
  signal \buff1_reg__1_n_89\ : STD_LOGIC;
  signal \buff1_reg__1_n_90\ : STD_LOGIC;
  signal \buff1_reg__1_n_91\ : STD_LOGIC;
  signal \buff1_reg__1_n_92\ : STD_LOGIC;
  signal \buff1_reg__1_n_93\ : STD_LOGIC;
  signal \buff1_reg__1_n_94\ : STD_LOGIC;
  signal \buff1_reg__1_n_95\ : STD_LOGIC;
  signal \buff1_reg__1_n_96\ : STD_LOGIC;
  signal \buff1_reg__1_n_97\ : STD_LOGIC;
  signal \buff1_reg__1_n_98\ : STD_LOGIC;
  signal \buff1_reg__1_n_99\ : STD_LOGIC;
  signal \buff1_reg__2_n_100\ : STD_LOGIC;
  signal \buff1_reg__2_n_101\ : STD_LOGIC;
  signal \buff1_reg__2_n_102\ : STD_LOGIC;
  signal \buff1_reg__2_n_103\ : STD_LOGIC;
  signal \buff1_reg__2_n_104\ : STD_LOGIC;
  signal \buff1_reg__2_n_105\ : STD_LOGIC;
  signal \buff1_reg__2_n_58\ : STD_LOGIC;
  signal \buff1_reg__2_n_59\ : STD_LOGIC;
  signal \buff1_reg__2_n_60\ : STD_LOGIC;
  signal \buff1_reg__2_n_61\ : STD_LOGIC;
  signal \buff1_reg__2_n_62\ : STD_LOGIC;
  signal \buff1_reg__2_n_63\ : STD_LOGIC;
  signal \buff1_reg__2_n_64\ : STD_LOGIC;
  signal \buff1_reg__2_n_65\ : STD_LOGIC;
  signal \buff1_reg__2_n_66\ : STD_LOGIC;
  signal \buff1_reg__2_n_67\ : STD_LOGIC;
  signal \buff1_reg__2_n_68\ : STD_LOGIC;
  signal \buff1_reg__2_n_69\ : STD_LOGIC;
  signal \buff1_reg__2_n_70\ : STD_LOGIC;
  signal \buff1_reg__2_n_71\ : STD_LOGIC;
  signal \buff1_reg__2_n_72\ : STD_LOGIC;
  signal \buff1_reg__2_n_73\ : STD_LOGIC;
  signal \buff1_reg__2_n_74\ : STD_LOGIC;
  signal \buff1_reg__2_n_75\ : STD_LOGIC;
  signal \buff1_reg__2_n_76\ : STD_LOGIC;
  signal \buff1_reg__2_n_77\ : STD_LOGIC;
  signal \buff1_reg__2_n_78\ : STD_LOGIC;
  signal \buff1_reg__2_n_79\ : STD_LOGIC;
  signal \buff1_reg__2_n_80\ : STD_LOGIC;
  signal \buff1_reg__2_n_81\ : STD_LOGIC;
  signal \buff1_reg__2_n_82\ : STD_LOGIC;
  signal \buff1_reg__2_n_83\ : STD_LOGIC;
  signal \buff1_reg__2_n_84\ : STD_LOGIC;
  signal \buff1_reg__2_n_85\ : STD_LOGIC;
  signal \buff1_reg__2_n_86\ : STD_LOGIC;
  signal \buff1_reg__2_n_87\ : STD_LOGIC;
  signal \buff1_reg__2_n_88\ : STD_LOGIC;
  signal \buff1_reg__2_n_89\ : STD_LOGIC;
  signal \buff1_reg__2_n_90\ : STD_LOGIC;
  signal \buff1_reg__2_n_91\ : STD_LOGIC;
  signal \buff1_reg__2_n_92\ : STD_LOGIC;
  signal \buff1_reg__2_n_93\ : STD_LOGIC;
  signal \buff1_reg__2_n_94\ : STD_LOGIC;
  signal \buff1_reg__2_n_95\ : STD_LOGIC;
  signal \buff1_reg__2_n_96\ : STD_LOGIC;
  signal \buff1_reg__2_n_97\ : STD_LOGIC;
  signal \buff1_reg__2_n_98\ : STD_LOGIC;
  signal \buff1_reg__2_n_99\ : STD_LOGIC;
  signal buff1_reg_n_100 : STD_LOGIC;
  signal buff1_reg_n_101 : STD_LOGIC;
  signal buff1_reg_n_102 : STD_LOGIC;
  signal buff1_reg_n_103 : STD_LOGIC;
  signal buff1_reg_n_104 : STD_LOGIC;
  signal buff1_reg_n_105 : STD_LOGIC;
  signal buff1_reg_n_58 : STD_LOGIC;
  signal buff1_reg_n_59 : STD_LOGIC;
  signal buff1_reg_n_60 : STD_LOGIC;
  signal buff1_reg_n_61 : STD_LOGIC;
  signal buff1_reg_n_62 : STD_LOGIC;
  signal buff1_reg_n_63 : STD_LOGIC;
  signal buff1_reg_n_64 : STD_LOGIC;
  signal buff1_reg_n_65 : STD_LOGIC;
  signal buff1_reg_n_66 : STD_LOGIC;
  signal buff1_reg_n_67 : STD_LOGIC;
  signal buff1_reg_n_68 : STD_LOGIC;
  signal buff1_reg_n_69 : STD_LOGIC;
  signal buff1_reg_n_70 : STD_LOGIC;
  signal buff1_reg_n_71 : STD_LOGIC;
  signal buff1_reg_n_72 : STD_LOGIC;
  signal buff1_reg_n_73 : STD_LOGIC;
  signal buff1_reg_n_74 : STD_LOGIC;
  signal buff1_reg_n_75 : STD_LOGIC;
  signal buff1_reg_n_76 : STD_LOGIC;
  signal buff1_reg_n_77 : STD_LOGIC;
  signal buff1_reg_n_78 : STD_LOGIC;
  signal buff1_reg_n_79 : STD_LOGIC;
  signal buff1_reg_n_80 : STD_LOGIC;
  signal buff1_reg_n_81 : STD_LOGIC;
  signal buff1_reg_n_82 : STD_LOGIC;
  signal buff1_reg_n_83 : STD_LOGIC;
  signal buff1_reg_n_84 : STD_LOGIC;
  signal buff1_reg_n_85 : STD_LOGIC;
  signal buff1_reg_n_86 : STD_LOGIC;
  signal buff1_reg_n_87 : STD_LOGIC;
  signal buff1_reg_n_88 : STD_LOGIC;
  signal buff1_reg_n_89 : STD_LOGIC;
  signal buff1_reg_n_90 : STD_LOGIC;
  signal buff1_reg_n_91 : STD_LOGIC;
  signal buff1_reg_n_92 : STD_LOGIC;
  signal buff1_reg_n_93 : STD_LOGIC;
  signal buff1_reg_n_94 : STD_LOGIC;
  signal buff1_reg_n_95 : STD_LOGIC;
  signal buff1_reg_n_96 : STD_LOGIC;
  signal buff1_reg_n_97 : STD_LOGIC;
  signal buff1_reg_n_98 : STD_LOGIC;
  signal buff1_reg_n_99 : STD_LOGIC;
  signal sub_ln17_fu_78_p2 : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \tmp_product__0_n_106\ : STD_LOGIC;
  signal \tmp_product__0_n_107\ : STD_LOGIC;
  signal \tmp_product__0_n_108\ : STD_LOGIC;
  signal \tmp_product__0_n_109\ : STD_LOGIC;
  signal \tmp_product__0_n_110\ : STD_LOGIC;
  signal \tmp_product__0_n_111\ : STD_LOGIC;
  signal \tmp_product__0_n_112\ : STD_LOGIC;
  signal \tmp_product__0_n_113\ : STD_LOGIC;
  signal \tmp_product__0_n_114\ : STD_LOGIC;
  signal \tmp_product__0_n_115\ : STD_LOGIC;
  signal \tmp_product__0_n_116\ : STD_LOGIC;
  signal \tmp_product__0_n_117\ : STD_LOGIC;
  signal \tmp_product__0_n_118\ : STD_LOGIC;
  signal \tmp_product__0_n_119\ : STD_LOGIC;
  signal \tmp_product__0_n_120\ : STD_LOGIC;
  signal \tmp_product__0_n_121\ : STD_LOGIC;
  signal \tmp_product__0_n_122\ : STD_LOGIC;
  signal \tmp_product__0_n_123\ : STD_LOGIC;
  signal \tmp_product__0_n_124\ : STD_LOGIC;
  signal \tmp_product__0_n_125\ : STD_LOGIC;
  signal \tmp_product__0_n_126\ : STD_LOGIC;
  signal \tmp_product__0_n_127\ : STD_LOGIC;
  signal \tmp_product__0_n_128\ : STD_LOGIC;
  signal \tmp_product__0_n_129\ : STD_LOGIC;
  signal \tmp_product__0_n_130\ : STD_LOGIC;
  signal \tmp_product__0_n_131\ : STD_LOGIC;
  signal \tmp_product__0_n_132\ : STD_LOGIC;
  signal \tmp_product__0_n_133\ : STD_LOGIC;
  signal \tmp_product__0_n_134\ : STD_LOGIC;
  signal \tmp_product__0_n_135\ : STD_LOGIC;
  signal \tmp_product__0_n_136\ : STD_LOGIC;
  signal \tmp_product__0_n_137\ : STD_LOGIC;
  signal \tmp_product__0_n_138\ : STD_LOGIC;
  signal \tmp_product__0_n_139\ : STD_LOGIC;
  signal \tmp_product__0_n_140\ : STD_LOGIC;
  signal \tmp_product__0_n_141\ : STD_LOGIC;
  signal \tmp_product__0_n_142\ : STD_LOGIC;
  signal \tmp_product__0_n_143\ : STD_LOGIC;
  signal \tmp_product__0_n_144\ : STD_LOGIC;
  signal \tmp_product__0_n_145\ : STD_LOGIC;
  signal \tmp_product__0_n_146\ : STD_LOGIC;
  signal \tmp_product__0_n_147\ : STD_LOGIC;
  signal \tmp_product__0_n_148\ : STD_LOGIC;
  signal \tmp_product__0_n_149\ : STD_LOGIC;
  signal \tmp_product__0_n_150\ : STD_LOGIC;
  signal \tmp_product__0_n_151\ : STD_LOGIC;
  signal \tmp_product__0_n_152\ : STD_LOGIC;
  signal \tmp_product__0_n_153\ : STD_LOGIC;
  signal \tmp_product__1_n_106\ : STD_LOGIC;
  signal \tmp_product__1_n_107\ : STD_LOGIC;
  signal \tmp_product__1_n_108\ : STD_LOGIC;
  signal \tmp_product__1_n_109\ : STD_LOGIC;
  signal \tmp_product__1_n_110\ : STD_LOGIC;
  signal \tmp_product__1_n_111\ : STD_LOGIC;
  signal \tmp_product__1_n_112\ : STD_LOGIC;
  signal \tmp_product__1_n_113\ : STD_LOGIC;
  signal \tmp_product__1_n_114\ : STD_LOGIC;
  signal \tmp_product__1_n_115\ : STD_LOGIC;
  signal \tmp_product__1_n_116\ : STD_LOGIC;
  signal \tmp_product__1_n_117\ : STD_LOGIC;
  signal \tmp_product__1_n_118\ : STD_LOGIC;
  signal \tmp_product__1_n_119\ : STD_LOGIC;
  signal \tmp_product__1_n_120\ : STD_LOGIC;
  signal \tmp_product__1_n_121\ : STD_LOGIC;
  signal \tmp_product__1_n_122\ : STD_LOGIC;
  signal \tmp_product__1_n_123\ : STD_LOGIC;
  signal \tmp_product__1_n_124\ : STD_LOGIC;
  signal \tmp_product__1_n_125\ : STD_LOGIC;
  signal \tmp_product__1_n_126\ : STD_LOGIC;
  signal \tmp_product__1_n_127\ : STD_LOGIC;
  signal \tmp_product__1_n_128\ : STD_LOGIC;
  signal \tmp_product__1_n_129\ : STD_LOGIC;
  signal \tmp_product__1_n_130\ : STD_LOGIC;
  signal \tmp_product__1_n_131\ : STD_LOGIC;
  signal \tmp_product__1_n_132\ : STD_LOGIC;
  signal \tmp_product__1_n_133\ : STD_LOGIC;
  signal \tmp_product__1_n_134\ : STD_LOGIC;
  signal \tmp_product__1_n_135\ : STD_LOGIC;
  signal \tmp_product__1_n_136\ : STD_LOGIC;
  signal \tmp_product__1_n_137\ : STD_LOGIC;
  signal \tmp_product__1_n_138\ : STD_LOGIC;
  signal \tmp_product__1_n_139\ : STD_LOGIC;
  signal \tmp_product__1_n_140\ : STD_LOGIC;
  signal \tmp_product__1_n_141\ : STD_LOGIC;
  signal \tmp_product__1_n_142\ : STD_LOGIC;
  signal \tmp_product__1_n_143\ : STD_LOGIC;
  signal \tmp_product__1_n_144\ : STD_LOGIC;
  signal \tmp_product__1_n_145\ : STD_LOGIC;
  signal \tmp_product__1_n_146\ : STD_LOGIC;
  signal \tmp_product__1_n_147\ : STD_LOGIC;
  signal \tmp_product__1_n_148\ : STD_LOGIC;
  signal \tmp_product__1_n_149\ : STD_LOGIC;
  signal \tmp_product__1_n_150\ : STD_LOGIC;
  signal \tmp_product__1_n_151\ : STD_LOGIC;
  signal \tmp_product__1_n_152\ : STD_LOGIC;
  signal \tmp_product__1_n_153\ : STD_LOGIC;
  signal \tmp_product__2_n_106\ : STD_LOGIC;
  signal \tmp_product__2_n_107\ : STD_LOGIC;
  signal \tmp_product__2_n_108\ : STD_LOGIC;
  signal \tmp_product__2_n_109\ : STD_LOGIC;
  signal \tmp_product__2_n_110\ : STD_LOGIC;
  signal \tmp_product__2_n_111\ : STD_LOGIC;
  signal \tmp_product__2_n_112\ : STD_LOGIC;
  signal \tmp_product__2_n_113\ : STD_LOGIC;
  signal \tmp_product__2_n_114\ : STD_LOGIC;
  signal \tmp_product__2_n_115\ : STD_LOGIC;
  signal \tmp_product__2_n_116\ : STD_LOGIC;
  signal \tmp_product__2_n_117\ : STD_LOGIC;
  signal \tmp_product__2_n_118\ : STD_LOGIC;
  signal \tmp_product__2_n_119\ : STD_LOGIC;
  signal \tmp_product__2_n_120\ : STD_LOGIC;
  signal \tmp_product__2_n_121\ : STD_LOGIC;
  signal \tmp_product__2_n_122\ : STD_LOGIC;
  signal \tmp_product__2_n_123\ : STD_LOGIC;
  signal \tmp_product__2_n_124\ : STD_LOGIC;
  signal \tmp_product__2_n_125\ : STD_LOGIC;
  signal \tmp_product__2_n_126\ : STD_LOGIC;
  signal \tmp_product__2_n_127\ : STD_LOGIC;
  signal \tmp_product__2_n_128\ : STD_LOGIC;
  signal \tmp_product__2_n_129\ : STD_LOGIC;
  signal \tmp_product__2_n_130\ : STD_LOGIC;
  signal \tmp_product__2_n_131\ : STD_LOGIC;
  signal \tmp_product__2_n_132\ : STD_LOGIC;
  signal \tmp_product__2_n_133\ : STD_LOGIC;
  signal \tmp_product__2_n_134\ : STD_LOGIC;
  signal \tmp_product__2_n_135\ : STD_LOGIC;
  signal \tmp_product__2_n_136\ : STD_LOGIC;
  signal \tmp_product__2_n_137\ : STD_LOGIC;
  signal \tmp_product__2_n_138\ : STD_LOGIC;
  signal \tmp_product__2_n_139\ : STD_LOGIC;
  signal \tmp_product__2_n_140\ : STD_LOGIC;
  signal \tmp_product__2_n_141\ : STD_LOGIC;
  signal \tmp_product__2_n_142\ : STD_LOGIC;
  signal \tmp_product__2_n_143\ : STD_LOGIC;
  signal \tmp_product__2_n_144\ : STD_LOGIC;
  signal \tmp_product__2_n_145\ : STD_LOGIC;
  signal \tmp_product__2_n_146\ : STD_LOGIC;
  signal \tmp_product__2_n_147\ : STD_LOGIC;
  signal \tmp_product__2_n_148\ : STD_LOGIC;
  signal \tmp_product__2_n_149\ : STD_LOGIC;
  signal \tmp_product__2_n_150\ : STD_LOGIC;
  signal \tmp_product__2_n_151\ : STD_LOGIC;
  signal \tmp_product__2_n_152\ : STD_LOGIC;
  signal \tmp_product__2_n_153\ : STD_LOGIC;
  signal tmp_product_i_100_n_0 : STD_LOGIC;
  signal tmp_product_i_100_n_1 : STD_LOGIC;
  signal tmp_product_i_100_n_2 : STD_LOGIC;
  signal tmp_product_i_100_n_3 : STD_LOGIC;
  signal tmp_product_i_100_n_4 : STD_LOGIC;
  signal tmp_product_i_100_n_5 : STD_LOGIC;
  signal tmp_product_i_100_n_6 : STD_LOGIC;
  signal tmp_product_i_101_n_0 : STD_LOGIC;
  signal tmp_product_i_101_n_1 : STD_LOGIC;
  signal tmp_product_i_101_n_2 : STD_LOGIC;
  signal tmp_product_i_101_n_3 : STD_LOGIC;
  signal tmp_product_i_101_n_4 : STD_LOGIC;
  signal tmp_product_i_101_n_5 : STD_LOGIC;
  signal tmp_product_i_101_n_6 : STD_LOGIC;
  signal tmp_product_i_101_n_7 : STD_LOGIC;
  signal tmp_product_i_102_n_0 : STD_LOGIC;
  signal tmp_product_i_103_n_0 : STD_LOGIC;
  signal tmp_product_i_104_n_0 : STD_LOGIC;
  signal tmp_product_i_105_n_0 : STD_LOGIC;
  signal tmp_product_i_106_n_0 : STD_LOGIC;
  signal tmp_product_i_107_n_0 : STD_LOGIC;
  signal tmp_product_i_108_n_0 : STD_LOGIC;
  signal tmp_product_i_109_n_0 : STD_LOGIC;
  signal tmp_product_i_10_n_0 : STD_LOGIC;
  signal tmp_product_i_10_n_1 : STD_LOGIC;
  signal tmp_product_i_10_n_2 : STD_LOGIC;
  signal tmp_product_i_10_n_3 : STD_LOGIC;
  signal tmp_product_i_110_n_0 : STD_LOGIC;
  signal tmp_product_i_110_n_1 : STD_LOGIC;
  signal tmp_product_i_110_n_2 : STD_LOGIC;
  signal tmp_product_i_110_n_3 : STD_LOGIC;
  signal tmp_product_i_111_n_0 : STD_LOGIC;
  signal tmp_product_i_112_n_0 : STD_LOGIC;
  signal tmp_product_i_113_n_0 : STD_LOGIC;
  signal tmp_product_i_114_n_0 : STD_LOGIC;
  signal tmp_product_i_115_n_0 : STD_LOGIC;
  signal tmp_product_i_116_n_0 : STD_LOGIC;
  signal tmp_product_i_117_n_0 : STD_LOGIC;
  signal tmp_product_i_118_n_0 : STD_LOGIC;
  signal tmp_product_i_119_n_0 : STD_LOGIC;
  signal tmp_product_i_11_n_0 : STD_LOGIC;
  signal tmp_product_i_120_n_0 : STD_LOGIC;
  signal tmp_product_i_121_n_0 : STD_LOGIC;
  signal tmp_product_i_122_n_0 : STD_LOGIC;
  signal tmp_product_i_123_n_0 : STD_LOGIC;
  signal tmp_product_i_124_n_0 : STD_LOGIC;
  signal tmp_product_i_124_n_1 : STD_LOGIC;
  signal tmp_product_i_124_n_2 : STD_LOGIC;
  signal tmp_product_i_124_n_3 : STD_LOGIC;
  signal tmp_product_i_125_n_0 : STD_LOGIC;
  signal tmp_product_i_126_n_0 : STD_LOGIC;
  signal tmp_product_i_127_n_0 : STD_LOGIC;
  signal tmp_product_i_128_n_0 : STD_LOGIC;
  signal tmp_product_i_129_n_0 : STD_LOGIC;
  signal tmp_product_i_129_n_1 : STD_LOGIC;
  signal tmp_product_i_129_n_2 : STD_LOGIC;
  signal tmp_product_i_129_n_3 : STD_LOGIC;
  signal tmp_product_i_12_n_0 : STD_LOGIC;
  signal tmp_product_i_130_n_0 : STD_LOGIC;
  signal tmp_product_i_131_n_0 : STD_LOGIC;
  signal tmp_product_i_132_n_0 : STD_LOGIC;
  signal tmp_product_i_133_n_0 : STD_LOGIC;
  signal tmp_product_i_134_n_0 : STD_LOGIC;
  signal tmp_product_i_134_n_1 : STD_LOGIC;
  signal tmp_product_i_134_n_2 : STD_LOGIC;
  signal tmp_product_i_134_n_3 : STD_LOGIC;
  signal tmp_product_i_135_n_0 : STD_LOGIC;
  signal tmp_product_i_136_n_0 : STD_LOGIC;
  signal tmp_product_i_137_n_0 : STD_LOGIC;
  signal tmp_product_i_138_n_0 : STD_LOGIC;
  signal tmp_product_i_139_n_0 : STD_LOGIC;
  signal tmp_product_i_13_n_0 : STD_LOGIC;
  signal tmp_product_i_140_n_0 : STD_LOGIC;
  signal tmp_product_i_141_n_0 : STD_LOGIC;
  signal tmp_product_i_14_n_0 : STD_LOGIC;
  signal tmp_product_i_15_n_0 : STD_LOGIC;
  signal tmp_product_i_16_n_0 : STD_LOGIC;
  signal tmp_product_i_17_n_0 : STD_LOGIC;
  signal tmp_product_i_18_n_0 : STD_LOGIC;
  signal tmp_product_i_19_n_0 : STD_LOGIC;
  signal tmp_product_i_19_n_1 : STD_LOGIC;
  signal tmp_product_i_19_n_2 : STD_LOGIC;
  signal tmp_product_i_19_n_3 : STD_LOGIC;
  signal tmp_product_i_19_n_4 : STD_LOGIC;
  signal tmp_product_i_19_n_5 : STD_LOGIC;
  signal tmp_product_i_19_n_6 : STD_LOGIC;
  signal tmp_product_i_19_n_7 : STD_LOGIC;
  signal tmp_product_i_1_n_1 : STD_LOGIC;
  signal tmp_product_i_1_n_2 : STD_LOGIC;
  signal tmp_product_i_1_n_3 : STD_LOGIC;
  signal tmp_product_i_20_n_7 : STD_LOGIC;
  signal tmp_product_i_21_n_0 : STD_LOGIC;
  signal tmp_product_i_21_n_1 : STD_LOGIC;
  signal tmp_product_i_21_n_2 : STD_LOGIC;
  signal tmp_product_i_21_n_3 : STD_LOGIC;
  signal tmp_product_i_22_n_0 : STD_LOGIC;
  signal tmp_product_i_23_n_0 : STD_LOGIC;
  signal tmp_product_i_24_n_0 : STD_LOGIC;
  signal tmp_product_i_25_n_0 : STD_LOGIC;
  signal tmp_product_i_26_n_0 : STD_LOGIC;
  signal tmp_product_i_27_n_0 : STD_LOGIC;
  signal tmp_product_i_28_n_0 : STD_LOGIC;
  signal tmp_product_i_29_n_0 : STD_LOGIC;
  signal tmp_product_i_2_n_0 : STD_LOGIC;
  signal tmp_product_i_2_n_1 : STD_LOGIC;
  signal tmp_product_i_2_n_2 : STD_LOGIC;
  signal tmp_product_i_2_n_3 : STD_LOGIC;
  signal tmp_product_i_30_n_0 : STD_LOGIC;
  signal tmp_product_i_30_n_1 : STD_LOGIC;
  signal tmp_product_i_30_n_2 : STD_LOGIC;
  signal tmp_product_i_30_n_3 : STD_LOGIC;
  signal tmp_product_i_30_n_4 : STD_LOGIC;
  signal tmp_product_i_30_n_5 : STD_LOGIC;
  signal tmp_product_i_30_n_6 : STD_LOGIC;
  signal tmp_product_i_30_n_7 : STD_LOGIC;
  signal tmp_product_i_31_n_0 : STD_LOGIC;
  signal tmp_product_i_32_n_0 : STD_LOGIC;
  signal tmp_product_i_33_n_0 : STD_LOGIC;
  signal tmp_product_i_34_n_0 : STD_LOGIC;
  signal tmp_product_i_35_n_0 : STD_LOGIC;
  signal tmp_product_i_36_n_0 : STD_LOGIC;
  signal tmp_product_i_37_n_0 : STD_LOGIC;
  signal tmp_product_i_38_n_0 : STD_LOGIC;
  signal tmp_product_i_39_n_0 : STD_LOGIC;
  signal tmp_product_i_3_n_0 : STD_LOGIC;
  signal tmp_product_i_40_n_0 : STD_LOGIC;
  signal tmp_product_i_40_n_1 : STD_LOGIC;
  signal tmp_product_i_40_n_2 : STD_LOGIC;
  signal tmp_product_i_40_n_3 : STD_LOGIC;
  signal tmp_product_i_41_n_0 : STD_LOGIC;
  signal tmp_product_i_42_n_0 : STD_LOGIC;
  signal tmp_product_i_43_n_0 : STD_LOGIC;
  signal tmp_product_i_44_n_0 : STD_LOGIC;
  signal tmp_product_i_45_n_0 : STD_LOGIC;
  signal tmp_product_i_46_n_0 : STD_LOGIC;
  signal tmp_product_i_46_n_1 : STD_LOGIC;
  signal tmp_product_i_46_n_2 : STD_LOGIC;
  signal tmp_product_i_46_n_3 : STD_LOGIC;
  signal tmp_product_i_46_n_4 : STD_LOGIC;
  signal tmp_product_i_46_n_5 : STD_LOGIC;
  signal tmp_product_i_46_n_6 : STD_LOGIC;
  signal tmp_product_i_46_n_7 : STD_LOGIC;
  signal tmp_product_i_47_n_0 : STD_LOGIC;
  signal tmp_product_i_48_n_0 : STD_LOGIC;
  signal tmp_product_i_49_n_0 : STD_LOGIC;
  signal tmp_product_i_4_n_0 : STD_LOGIC;
  signal tmp_product_i_50_n_0 : STD_LOGIC;
  signal tmp_product_i_51_n_0 : STD_LOGIC;
  signal tmp_product_i_52_n_0 : STD_LOGIC;
  signal tmp_product_i_53_n_0 : STD_LOGIC;
  signal tmp_product_i_54_n_0 : STD_LOGIC;
  signal tmp_product_i_55_n_0 : STD_LOGIC;
  signal tmp_product_i_55_n_1 : STD_LOGIC;
  signal tmp_product_i_55_n_2 : STD_LOGIC;
  signal tmp_product_i_55_n_3 : STD_LOGIC;
  signal tmp_product_i_56_n_0 : STD_LOGIC;
  signal tmp_product_i_57_n_0 : STD_LOGIC;
  signal tmp_product_i_58_n_0 : STD_LOGIC;
  signal tmp_product_i_59_n_0 : STD_LOGIC;
  signal tmp_product_i_5_n_0 : STD_LOGIC;
  signal tmp_product_i_60_n_0 : STD_LOGIC;
  signal tmp_product_i_60_n_1 : STD_LOGIC;
  signal tmp_product_i_60_n_2 : STD_LOGIC;
  signal tmp_product_i_60_n_3 : STD_LOGIC;
  signal tmp_product_i_60_n_4 : STD_LOGIC;
  signal tmp_product_i_60_n_5 : STD_LOGIC;
  signal tmp_product_i_60_n_6 : STD_LOGIC;
  signal tmp_product_i_60_n_7 : STD_LOGIC;
  signal tmp_product_i_61_n_0 : STD_LOGIC;
  signal tmp_product_i_62_n_0 : STD_LOGIC;
  signal tmp_product_i_63_n_0 : STD_LOGIC;
  signal tmp_product_i_64_n_0 : STD_LOGIC;
  signal tmp_product_i_65_n_0 : STD_LOGIC;
  signal tmp_product_i_66_n_0 : STD_LOGIC;
  signal tmp_product_i_67_n_0 : STD_LOGIC;
  signal tmp_product_i_68_n_0 : STD_LOGIC;
  signal tmp_product_i_69_n_0 : STD_LOGIC;
  signal tmp_product_i_69_n_1 : STD_LOGIC;
  signal tmp_product_i_69_n_2 : STD_LOGIC;
  signal tmp_product_i_69_n_3 : STD_LOGIC;
  signal tmp_product_i_6_n_0 : STD_LOGIC;
  signal tmp_product_i_70_n_0 : STD_LOGIC;
  signal tmp_product_i_71_n_0 : STD_LOGIC;
  signal tmp_product_i_72_n_0 : STD_LOGIC;
  signal tmp_product_i_73_n_0 : STD_LOGIC;
  signal tmp_product_i_74_n_0 : STD_LOGIC;
  signal tmp_product_i_74_n_1 : STD_LOGIC;
  signal tmp_product_i_74_n_2 : STD_LOGIC;
  signal tmp_product_i_74_n_3 : STD_LOGIC;
  signal tmp_product_i_74_n_4 : STD_LOGIC;
  signal tmp_product_i_74_n_5 : STD_LOGIC;
  signal tmp_product_i_74_n_6 : STD_LOGIC;
  signal tmp_product_i_74_n_7 : STD_LOGIC;
  signal tmp_product_i_75_n_0 : STD_LOGIC;
  signal tmp_product_i_76_n_0 : STD_LOGIC;
  signal tmp_product_i_77_n_0 : STD_LOGIC;
  signal tmp_product_i_78_n_0 : STD_LOGIC;
  signal tmp_product_i_79_n_0 : STD_LOGIC;
  signal tmp_product_i_7_n_0 : STD_LOGIC;
  signal tmp_product_i_80_n_0 : STD_LOGIC;
  signal tmp_product_i_81_n_0 : STD_LOGIC;
  signal tmp_product_i_82_n_0 : STD_LOGIC;
  signal tmp_product_i_83_n_0 : STD_LOGIC;
  signal tmp_product_i_83_n_1 : STD_LOGIC;
  signal tmp_product_i_83_n_2 : STD_LOGIC;
  signal tmp_product_i_83_n_3 : STD_LOGIC;
  signal tmp_product_i_84_n_0 : STD_LOGIC;
  signal tmp_product_i_85_n_0 : STD_LOGIC;
  signal tmp_product_i_86_n_0 : STD_LOGIC;
  signal tmp_product_i_87_n_0 : STD_LOGIC;
  signal tmp_product_i_88_n_0 : STD_LOGIC;
  signal tmp_product_i_88_n_1 : STD_LOGIC;
  signal tmp_product_i_88_n_2 : STD_LOGIC;
  signal tmp_product_i_88_n_3 : STD_LOGIC;
  signal tmp_product_i_88_n_4 : STD_LOGIC;
  signal tmp_product_i_88_n_5 : STD_LOGIC;
  signal tmp_product_i_88_n_6 : STD_LOGIC;
  signal tmp_product_i_88_n_7 : STD_LOGIC;
  signal tmp_product_i_89_n_0 : STD_LOGIC;
  signal tmp_product_i_8_n_0 : STD_LOGIC;
  signal tmp_product_i_90_n_0 : STD_LOGIC;
  signal tmp_product_i_91_n_0 : STD_LOGIC;
  signal tmp_product_i_92_n_0 : STD_LOGIC;
  signal tmp_product_i_93_n_0 : STD_LOGIC;
  signal tmp_product_i_94_n_0 : STD_LOGIC;
  signal tmp_product_i_95_n_0 : STD_LOGIC;
  signal tmp_product_i_96_n_0 : STD_LOGIC;
  signal tmp_product_i_97_n_0 : STD_LOGIC;
  signal tmp_product_i_98_n_0 : STD_LOGIC;
  signal tmp_product_i_99_n_0 : STD_LOGIC;
  signal tmp_product_i_9_n_0 : STD_LOGIC;
  signal tmp_product_n_106 : STD_LOGIC;
  signal tmp_product_n_107 : STD_LOGIC;
  signal tmp_product_n_108 : STD_LOGIC;
  signal tmp_product_n_109 : STD_LOGIC;
  signal tmp_product_n_110 : STD_LOGIC;
  signal tmp_product_n_111 : STD_LOGIC;
  signal tmp_product_n_112 : STD_LOGIC;
  signal tmp_product_n_113 : STD_LOGIC;
  signal tmp_product_n_114 : STD_LOGIC;
  signal tmp_product_n_115 : STD_LOGIC;
  signal tmp_product_n_116 : STD_LOGIC;
  signal tmp_product_n_117 : STD_LOGIC;
  signal tmp_product_n_118 : STD_LOGIC;
  signal tmp_product_n_119 : STD_LOGIC;
  signal tmp_product_n_120 : STD_LOGIC;
  signal tmp_product_n_121 : STD_LOGIC;
  signal tmp_product_n_122 : STD_LOGIC;
  signal tmp_product_n_123 : STD_LOGIC;
  signal tmp_product_n_124 : STD_LOGIC;
  signal tmp_product_n_125 : STD_LOGIC;
  signal tmp_product_n_126 : STD_LOGIC;
  signal tmp_product_n_127 : STD_LOGIC;
  signal tmp_product_n_128 : STD_LOGIC;
  signal tmp_product_n_129 : STD_LOGIC;
  signal tmp_product_n_130 : STD_LOGIC;
  signal tmp_product_n_131 : STD_LOGIC;
  signal tmp_product_n_132 : STD_LOGIC;
  signal tmp_product_n_133 : STD_LOGIC;
  signal tmp_product_n_134 : STD_LOGIC;
  signal tmp_product_n_135 : STD_LOGIC;
  signal tmp_product_n_136 : STD_LOGIC;
  signal tmp_product_n_137 : STD_LOGIC;
  signal tmp_product_n_138 : STD_LOGIC;
  signal tmp_product_n_139 : STD_LOGIC;
  signal tmp_product_n_140 : STD_LOGIC;
  signal tmp_product_n_141 : STD_LOGIC;
  signal tmp_product_n_142 : STD_LOGIC;
  signal tmp_product_n_143 : STD_LOGIC;
  signal tmp_product_n_144 : STD_LOGIC;
  signal tmp_product_n_145 : STD_LOGIC;
  signal tmp_product_n_146 : STD_LOGIC;
  signal tmp_product_n_147 : STD_LOGIC;
  signal tmp_product_n_148 : STD_LOGIC;
  signal tmp_product_n_149 : STD_LOGIC;
  signal tmp_product_n_150 : STD_LOGIC;
  signal tmp_product_n_151 : STD_LOGIC;
  signal tmp_product_n_152 : STD_LOGIC;
  signal tmp_product_n_153 : STD_LOGIC;
  signal NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_buff0_reg_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_buff0_reg_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff0_reg__0_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__0_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff0_reg__0_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff0_reg__0_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__1_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff0_reg__1_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff0_reg__1_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff0_reg__1_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff0_reg__2_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__2_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff0_reg__2_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff0_reg__2_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff0_reg__2_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff0_reg__3_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff0_reg__3_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff0_reg__3_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff0_reg__3_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_buff0_reg_i_1_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal NLW_buff0_reg_i_1_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_buff1_reg_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_buff1_reg_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_buff1_reg_PCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__0_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff1_reg__0_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff1_reg__0_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff1_reg__0_PCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff1_reg__1_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__1_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff1_reg__1_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff1_reg__1_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff1_reg__1_PCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_buff1_reg__2_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_buff1_reg__2_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_buff1_reg__2_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_buff1_reg__2_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_buff1_reg__2_PCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal NLW_tmp_product_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_tmp_product_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_tmp_product_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_P_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_tmp_product__0_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_tmp_product__0_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_tmp_product__0_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_tmp_product__1_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__1_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_tmp_product__1_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_tmp_product__1_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_tmp_product__1_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal \NLW_tmp_product__2_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__2_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_tmp_product__2_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_tmp_product__2_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_tmp_product__2_P_UNCONNECTED\ : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal NLW_tmp_product_i_1_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 to 3 );
  signal NLW_tmp_product_i_10_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_100_O_UNCONNECTED : STD_LOGIC_VECTOR ( 0 to 0 );
  signal NLW_tmp_product_i_110_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_124_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_129_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_134_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_20_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_20_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal NLW_tmp_product_i_21_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_40_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_55_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_69_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_tmp_product_i_83_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  attribute METHODOLOGY_DRC_VIOS : string;
  attribute METHODOLOGY_DRC_VIOS of buff0_reg : label is "{SYNTH-10 {cell *THIS*} {string 14x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff0_reg__0\ : label is "{SYNTH-10 {cell *THIS*} {string 14x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff0_reg__1\ : label is "{SYNTH-10 {cell *THIS*} {string 18x16 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff0_reg__2\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff0_reg__3\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of buff1_reg : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff1_reg__0\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff1_reg__1\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \buff1_reg__2\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of tmp_product : label is "{SYNTH-10 {cell *THIS*} {string 18x16 16}}";
  attribute METHODOLOGY_DRC_VIOS of \tmp_product__0\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \tmp_product__1\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute METHODOLOGY_DRC_VIOS of \tmp_product__2\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 16}}";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of tmp_product_i_1 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_10 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_100 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_101 : label is 35;
  attribute HLUTNM : string;
  attribute HLUTNM of tmp_product_i_102 : label is "lutpair7";
  attribute HLUTNM of tmp_product_i_103 : label is "lutpair6";
  attribute HLUTNM of tmp_product_i_104 : label is "lutpair5";
  attribute HLUTNM of tmp_product_i_105 : label is "lutpair4";
  attribute HLUTNM of tmp_product_i_106 : label is "lutpair8";
  attribute HLUTNM of tmp_product_i_107 : label is "lutpair7";
  attribute HLUTNM of tmp_product_i_108 : label is "lutpair6";
  attribute HLUTNM of tmp_product_i_109 : label is "lutpair5";
  attribute HLUTNM of tmp_product_i_11 : label is "lutpair18";
  attribute ADDER_THRESHOLD of tmp_product_i_110 : label is 35;
  attribute HLUTNM of tmp_product_i_112 : label is "lutpair0";
  attribute HLUTNM of tmp_product_i_116 : label is "lutpair3";
  attribute HLUTNM of tmp_product_i_117 : label is "lutpair2";
  attribute HLUTNM of tmp_product_i_118 : label is "lutpair1";
  attribute HLUTNM of tmp_product_i_119 : label is "lutpair0";
  attribute HLUTNM of tmp_product_i_12 : label is "lutpair17";
  attribute HLUTNM of tmp_product_i_120 : label is "lutpair4";
  attribute HLUTNM of tmp_product_i_121 : label is "lutpair3";
  attribute HLUTNM of tmp_product_i_122 : label is "lutpair2";
  attribute HLUTNM of tmp_product_i_123 : label is "lutpair1";
  attribute ADDER_THRESHOLD of tmp_product_i_124 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_129 : label is 35;
  attribute HLUTNM of tmp_product_i_13 : label is "lutpair16";
  attribute ADDER_THRESHOLD of tmp_product_i_134 : label is 35;
  attribute HLUTNM of tmp_product_i_14 : label is "lutpair15";
  attribute HLUTNM of tmp_product_i_15 : label is "lutpair19";
  attribute HLUTNM of tmp_product_i_16 : label is "lutpair18";
  attribute HLUTNM of tmp_product_i_17 : label is "lutpair17";
  attribute HLUTNM of tmp_product_i_18 : label is "lutpair16";
  attribute ADDER_THRESHOLD of tmp_product_i_19 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_2 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_20 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_21 : label is 35;
  attribute HLUTNM of tmp_product_i_22 : label is "lutpair14";
  attribute HLUTNM of tmp_product_i_23 : label is "lutpair13";
  attribute HLUTNM of tmp_product_i_24 : label is "lutpair12";
  attribute HLUTNM of tmp_product_i_25 : label is "lutpair11";
  attribute HLUTNM of tmp_product_i_26 : label is "lutpair15";
  attribute HLUTNM of tmp_product_i_27 : label is "lutpair14";
  attribute HLUTNM of tmp_product_i_28 : label is "lutpair13";
  attribute HLUTNM of tmp_product_i_29 : label is "lutpair12";
  attribute HLUTNM of tmp_product_i_3 : label is "lutpair21";
  attribute ADDER_THRESHOLD of tmp_product_i_30 : label is 35;
  attribute HLUTNM of tmp_product_i_4 : label is "lutpair20";
  attribute ADDER_THRESHOLD of tmp_product_i_40 : label is 35;
  attribute HLUTNM of tmp_product_i_42 : label is "lutpair11";
  attribute ADDER_THRESHOLD of tmp_product_i_46 : label is 35;
  attribute HLUTNM of tmp_product_i_5 : label is "lutpair19";
  attribute ADDER_THRESHOLD of tmp_product_i_55 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_60 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_69 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_74 : label is 35;
  attribute HLUTNM of tmp_product_i_8 : label is "lutpair21";
  attribute ADDER_THRESHOLD of tmp_product_i_83 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_88 : label is 35;
  attribute HLUTNM of tmp_product_i_9 : label is "lutpair20";
  attribute HLUTNM of tmp_product_i_90 : label is "lutpair10";
  attribute HLUTNM of tmp_product_i_91 : label is "lutpair9";
  attribute HLUTNM of tmp_product_i_92 : label is "lutpair8";
  attribute HLUTNM of tmp_product_i_95 : label is "lutpair10";
  attribute HLUTNM of tmp_product_i_96 : label is "lutpair9";
begin
buff0_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 0) => B"000000000000000010000000010011",
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_buff0_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 14) => B"0000",
      B(13) => sub_ln17_fu_78_p2(17),
      B(12) => sub_ln17_fu_78_p2(17),
      B(11) => sub_ln17_fu_78_p2(17),
      B(10) => sub_ln17_fu_78_p2(17),
      B(9) => sub_ln17_fu_78_p2(17),
      B(8) => sub_ln17_fu_78_p2(17),
      B(7) => sub_ln17_fu_78_p2(17),
      B(6) => sub_ln17_fu_78_p2(17),
      B(5) => sub_ln17_fu_78_p2(17),
      B(4) => sub_ln17_fu_78_p2(17),
      B(3) => sub_ln17_fu_78_p2(17),
      B(2) => sub_ln17_fu_78_p2(17),
      B(1) => sub_ln17_fu_78_p2(17),
      B(0) => sub_ln17_fu_78_p2(17),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_buff0_reg_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_buff0_reg_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => '0',
      CEA2 => '0',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => Q(0),
      CEB2 => '1',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => NLW_buff0_reg_OVERFLOW_UNCONNECTED,
      P(47) => buff0_reg_n_58,
      P(46) => buff0_reg_n_59,
      P(45) => buff0_reg_n_60,
      P(44) => buff0_reg_n_61,
      P(43) => buff0_reg_n_62,
      P(42) => buff0_reg_n_63,
      P(41) => buff0_reg_n_64,
      P(40) => buff0_reg_n_65,
      P(39) => buff0_reg_n_66,
      P(38) => buff0_reg_n_67,
      P(37) => buff0_reg_n_68,
      P(36) => buff0_reg_n_69,
      P(35) => buff0_reg_n_70,
      P(34) => buff0_reg_n_71,
      P(33) => buff0_reg_n_72,
      P(32) => buff0_reg_n_73,
      P(31) => buff0_reg_n_74,
      P(30) => buff0_reg_n_75,
      P(29) => buff0_reg_n_76,
      P(28) => buff0_reg_n_77,
      P(27) => buff0_reg_n_78,
      P(26) => buff0_reg_n_79,
      P(25) => buff0_reg_n_80,
      P(24) => buff0_reg_n_81,
      P(23) => buff0_reg_n_82,
      P(22) => buff0_reg_n_83,
      P(21) => buff0_reg_n_84,
      P(20) => buff0_reg_n_85,
      P(19) => buff0_reg_n_86,
      P(18) => buff0_reg_n_87,
      P(17) => buff0_reg_n_88,
      P(16) => buff0_reg_n_89,
      P(15) => buff0_reg_n_90,
      P(14) => buff0_reg_n_91,
      P(13) => buff0_reg_n_92,
      P(12) => buff0_reg_n_93,
      P(11) => buff0_reg_n_94,
      P(10) => buff0_reg_n_95,
      P(9) => buff0_reg_n_96,
      P(8) => buff0_reg_n_97,
      P(7) => buff0_reg_n_98,
      P(6) => buff0_reg_n_99,
      P(5) => buff0_reg_n_100,
      P(4) => buff0_reg_n_101,
      P(3) => buff0_reg_n_102,
      P(2) => buff0_reg_n_103,
      P(1) => buff0_reg_n_104,
      P(0) => buff0_reg_n_105,
      PATTERNBDETECT => NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_buff0_reg_PATTERNDETECT_UNCONNECTED,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => buff0_reg_n_106,
      PCOUT(46) => buff0_reg_n_107,
      PCOUT(45) => buff0_reg_n_108,
      PCOUT(44) => buff0_reg_n_109,
      PCOUT(43) => buff0_reg_n_110,
      PCOUT(42) => buff0_reg_n_111,
      PCOUT(41) => buff0_reg_n_112,
      PCOUT(40) => buff0_reg_n_113,
      PCOUT(39) => buff0_reg_n_114,
      PCOUT(38) => buff0_reg_n_115,
      PCOUT(37) => buff0_reg_n_116,
      PCOUT(36) => buff0_reg_n_117,
      PCOUT(35) => buff0_reg_n_118,
      PCOUT(34) => buff0_reg_n_119,
      PCOUT(33) => buff0_reg_n_120,
      PCOUT(32) => buff0_reg_n_121,
      PCOUT(31) => buff0_reg_n_122,
      PCOUT(30) => buff0_reg_n_123,
      PCOUT(29) => buff0_reg_n_124,
      PCOUT(28) => buff0_reg_n_125,
      PCOUT(27) => buff0_reg_n_126,
      PCOUT(26) => buff0_reg_n_127,
      PCOUT(25) => buff0_reg_n_128,
      PCOUT(24) => buff0_reg_n_129,
      PCOUT(23) => buff0_reg_n_130,
      PCOUT(22) => buff0_reg_n_131,
      PCOUT(21) => buff0_reg_n_132,
      PCOUT(20) => buff0_reg_n_133,
      PCOUT(19) => buff0_reg_n_134,
      PCOUT(18) => buff0_reg_n_135,
      PCOUT(17) => buff0_reg_n_136,
      PCOUT(16) => buff0_reg_n_137,
      PCOUT(15) => buff0_reg_n_138,
      PCOUT(14) => buff0_reg_n_139,
      PCOUT(13) => buff0_reg_n_140,
      PCOUT(12) => buff0_reg_n_141,
      PCOUT(11) => buff0_reg_n_142,
      PCOUT(10) => buff0_reg_n_143,
      PCOUT(9) => buff0_reg_n_144,
      PCOUT(8) => buff0_reg_n_145,
      PCOUT(7) => buff0_reg_n_146,
      PCOUT(6) => buff0_reg_n_147,
      PCOUT(5) => buff0_reg_n_148,
      PCOUT(4) => buff0_reg_n_149,
      PCOUT(3) => buff0_reg_n_150,
      PCOUT(2) => buff0_reg_n_151,
      PCOUT(1) => buff0_reg_n_152,
      PCOUT(0) => buff0_reg_n_153,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_buff0_reg_UNDERFLOW_UNCONNECTED
    );
\buff0_reg__0\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 0,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 0) => B"000000000000000000001110010001",
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff0_reg__0_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 14) => B"0000",
      B(13) => sub_ln17_fu_78_p2(17),
      B(12) => sub_ln17_fu_78_p2(17),
      B(11) => sub_ln17_fu_78_p2(17),
      B(10) => sub_ln17_fu_78_p2(17),
      B(9) => sub_ln17_fu_78_p2(17),
      B(8) => sub_ln17_fu_78_p2(17),
      B(7) => sub_ln17_fu_78_p2(17),
      B(6) => sub_ln17_fu_78_p2(17),
      B(5) => sub_ln17_fu_78_p2(17),
      B(4) => sub_ln17_fu_78_p2(17),
      B(3) => sub_ln17_fu_78_p2(17),
      B(2) => sub_ln17_fu_78_p2(17),
      B(1) => sub_ln17_fu_78_p2(17),
      B(0) => sub_ln17_fu_78_p2(17),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff0_reg__0_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff0_reg__0_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff0_reg__0_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => '0',
      CEA2 => '0',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => Q(0),
      CEB2 => '1',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff0_reg__0_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_buff0_reg__0_OVERFLOW_UNCONNECTED\,
      P(47) => \buff0_reg__0_n_58\,
      P(46) => \buff0_reg__0_n_59\,
      P(45) => \buff0_reg__0_n_60\,
      P(44) => \buff0_reg__0_n_61\,
      P(43) => \buff0_reg__0_n_62\,
      P(42) => \buff0_reg__0_n_63\,
      P(41) => \buff0_reg__0_n_64\,
      P(40) => \buff0_reg__0_n_65\,
      P(39) => \buff0_reg__0_n_66\,
      P(38) => \buff0_reg__0_n_67\,
      P(37) => \buff0_reg__0_n_68\,
      P(36) => \buff0_reg__0_n_69\,
      P(35) => \buff0_reg__0_n_70\,
      P(34) => \buff0_reg__0_n_71\,
      P(33) => \buff0_reg__0_n_72\,
      P(32) => \buff0_reg__0_n_73\,
      P(31) => \buff0_reg__0_n_74\,
      P(30) => \buff0_reg__0_n_75\,
      P(29) => \buff0_reg__0_n_76\,
      P(28) => \buff0_reg__0_n_77\,
      P(27) => \buff0_reg__0_n_78\,
      P(26) => \buff0_reg__0_n_79\,
      P(25) => \buff0_reg__0_n_80\,
      P(24) => \buff0_reg__0_n_81\,
      P(23) => \buff0_reg__0_n_82\,
      P(22) => \buff0_reg__0_n_83\,
      P(21) => \buff0_reg__0_n_84\,
      P(20) => \buff0_reg__0_n_85\,
      P(19) => \buff0_reg__0_n_86\,
      P(18) => \buff0_reg__0_n_87\,
      P(17) => \buff0_reg__0_n_88\,
      P(16) => \buff0_reg__0_n_89\,
      P(15) => \buff0_reg__0_n_90\,
      P(14) => \buff0_reg__0_n_91\,
      P(13) => \buff0_reg__0_n_92\,
      P(12) => \buff0_reg__0_n_93\,
      P(11) => \buff0_reg__0_n_94\,
      P(10) => \buff0_reg__0_n_95\,
      P(9) => \buff0_reg__0_n_96\,
      P(8) => \buff0_reg__0_n_97\,
      P(7) => \buff0_reg__0_n_98\,
      P(6) => \buff0_reg__0_n_99\,
      P(5) => \buff0_reg__0_n_100\,
      P(4) => \buff0_reg__0_n_101\,
      P(3) => \buff0_reg__0_n_102\,
      P(2) => \buff0_reg__0_n_103\,
      P(1) => \buff0_reg__0_n_104\,
      P(0) => \buff0_reg__0_n_105\,
      PATTERNBDETECT => \NLW_buff0_reg__0_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff0_reg__0_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => \buff0_reg__0_n_106\,
      PCOUT(46) => \buff0_reg__0_n_107\,
      PCOUT(45) => \buff0_reg__0_n_108\,
      PCOUT(44) => \buff0_reg__0_n_109\,
      PCOUT(43) => \buff0_reg__0_n_110\,
      PCOUT(42) => \buff0_reg__0_n_111\,
      PCOUT(41) => \buff0_reg__0_n_112\,
      PCOUT(40) => \buff0_reg__0_n_113\,
      PCOUT(39) => \buff0_reg__0_n_114\,
      PCOUT(38) => \buff0_reg__0_n_115\,
      PCOUT(37) => \buff0_reg__0_n_116\,
      PCOUT(36) => \buff0_reg__0_n_117\,
      PCOUT(35) => \buff0_reg__0_n_118\,
      PCOUT(34) => \buff0_reg__0_n_119\,
      PCOUT(33) => \buff0_reg__0_n_120\,
      PCOUT(32) => \buff0_reg__0_n_121\,
      PCOUT(31) => \buff0_reg__0_n_122\,
      PCOUT(30) => \buff0_reg__0_n_123\,
      PCOUT(29) => \buff0_reg__0_n_124\,
      PCOUT(28) => \buff0_reg__0_n_125\,
      PCOUT(27) => \buff0_reg__0_n_126\,
      PCOUT(26) => \buff0_reg__0_n_127\,
      PCOUT(25) => \buff0_reg__0_n_128\,
      PCOUT(24) => \buff0_reg__0_n_129\,
      PCOUT(23) => \buff0_reg__0_n_130\,
      PCOUT(22) => \buff0_reg__0_n_131\,
      PCOUT(21) => \buff0_reg__0_n_132\,
      PCOUT(20) => \buff0_reg__0_n_133\,
      PCOUT(19) => \buff0_reg__0_n_134\,
      PCOUT(18) => \buff0_reg__0_n_135\,
      PCOUT(17) => \buff0_reg__0_n_136\,
      PCOUT(16) => \buff0_reg__0_n_137\,
      PCOUT(15) => \buff0_reg__0_n_138\,
      PCOUT(14) => \buff0_reg__0_n_139\,
      PCOUT(13) => \buff0_reg__0_n_140\,
      PCOUT(12) => \buff0_reg__0_n_141\,
      PCOUT(11) => \buff0_reg__0_n_142\,
      PCOUT(10) => \buff0_reg__0_n_143\,
      PCOUT(9) => \buff0_reg__0_n_144\,
      PCOUT(8) => \buff0_reg__0_n_145\,
      PCOUT(7) => \buff0_reg__0_n_146\,
      PCOUT(6) => \buff0_reg__0_n_147\,
      PCOUT(5) => \buff0_reg__0_n_148\,
      PCOUT(4) => \buff0_reg__0_n_149\,
      PCOUT(3) => \buff0_reg__0_n_150\,
      PCOUT(2) => \buff0_reg__0_n_151\,
      PCOUT(1) => \buff0_reg__0_n_152\,
      PCOUT(0) => \buff0_reg__0_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff0_reg__0_UNDERFLOW_UNCONNECTED\
    );
\buff0_reg__1\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 0,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => sub_ln17_fu_78_p2(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff0_reg__1_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000010011000000011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff0_reg__1_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff0_reg__1_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff0_reg__1_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff0_reg__1_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_buff0_reg__1_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_buff0_reg__1_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_buff0_reg__1_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff0_reg__1_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => \buff0_reg__1_n_106\,
      PCOUT(46) => \buff0_reg__1_n_107\,
      PCOUT(45) => \buff0_reg__1_n_108\,
      PCOUT(44) => \buff0_reg__1_n_109\,
      PCOUT(43) => \buff0_reg__1_n_110\,
      PCOUT(42) => \buff0_reg__1_n_111\,
      PCOUT(41) => \buff0_reg__1_n_112\,
      PCOUT(40) => \buff0_reg__1_n_113\,
      PCOUT(39) => \buff0_reg__1_n_114\,
      PCOUT(38) => \buff0_reg__1_n_115\,
      PCOUT(37) => \buff0_reg__1_n_116\,
      PCOUT(36) => \buff0_reg__1_n_117\,
      PCOUT(35) => \buff0_reg__1_n_118\,
      PCOUT(34) => \buff0_reg__1_n_119\,
      PCOUT(33) => \buff0_reg__1_n_120\,
      PCOUT(32) => \buff0_reg__1_n_121\,
      PCOUT(31) => \buff0_reg__1_n_122\,
      PCOUT(30) => \buff0_reg__1_n_123\,
      PCOUT(29) => \buff0_reg__1_n_124\,
      PCOUT(28) => \buff0_reg__1_n_125\,
      PCOUT(27) => \buff0_reg__1_n_126\,
      PCOUT(26) => \buff0_reg__1_n_127\,
      PCOUT(25) => \buff0_reg__1_n_128\,
      PCOUT(24) => \buff0_reg__1_n_129\,
      PCOUT(23) => \buff0_reg__1_n_130\,
      PCOUT(22) => \buff0_reg__1_n_131\,
      PCOUT(21) => \buff0_reg__1_n_132\,
      PCOUT(20) => \buff0_reg__1_n_133\,
      PCOUT(19) => \buff0_reg__1_n_134\,
      PCOUT(18) => \buff0_reg__1_n_135\,
      PCOUT(17) => \buff0_reg__1_n_136\,
      PCOUT(16) => \buff0_reg__1_n_137\,
      PCOUT(15) => \buff0_reg__1_n_138\,
      PCOUT(14) => \buff0_reg__1_n_139\,
      PCOUT(13) => \buff0_reg__1_n_140\,
      PCOUT(12) => \buff0_reg__1_n_141\,
      PCOUT(11) => \buff0_reg__1_n_142\,
      PCOUT(10) => \buff0_reg__1_n_143\,
      PCOUT(9) => \buff0_reg__1_n_144\,
      PCOUT(8) => \buff0_reg__1_n_145\,
      PCOUT(7) => \buff0_reg__1_n_146\,
      PCOUT(6) => \buff0_reg__1_n_147\,
      PCOUT(5) => \buff0_reg__1_n_148\,
      PCOUT(4) => \buff0_reg__1_n_149\,
      PCOUT(3) => \buff0_reg__1_n_150\,
      PCOUT(2) => \buff0_reg__1_n_151\,
      PCOUT(1) => \buff0_reg__1_n_152\,
      PCOUT(0) => \buff0_reg__1_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff0_reg__1_UNDERFLOW_UNCONNECTED\
    );
\buff0_reg__1_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff0_reg__1_i_2_n_0\,
      CO(3) => \buff0_reg__1_i_1_n_0\,
      CO(2) => \buff0_reg__1_i_1_n_1\,
      CO(1) => \buff0_reg__1_i_1_n_2\,
      CO(0) => \buff0_reg__1_i_1_n_3\,
      CYINIT => '0',
      DI(3) => \buff0_reg__1_i_5__0_n_0\,
      DI(2) => \buff0_reg__1_i_6__0_n_0\,
      DI(1) => \buff0_reg__1_i_7__0_n_0\,
      DI(0) => \buff0_reg__1_i_8__0_n_0\,
      O(3 downto 0) => sub_ln17_fu_78_p2(15 downto 12),
      S(3) => \buff0_reg__1_i_9_n_0\,
      S(2) => \buff0_reg__1_i_10_n_0\,
      S(1) => \buff0_reg__1_i_11_n_0\,
      S(0) => \buff0_reg__1_i_12_n_0\
    );
\buff0_reg__1_i_10\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(13),
      I1 => p_7(13),
      I2 => p_7(14),
      I3 => p_9(14),
      O => \buff0_reg__1_i_10_n_0\
    );
\buff0_reg__1_i_11\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(12),
      I1 => p_7(12),
      I2 => p_7(13),
      I3 => p_9(13),
      O => \buff0_reg__1_i_11_n_0\
    );
\buff0_reg__1_i_12\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(11),
      I1 => p_7(11),
      I2 => p_7(12),
      I3 => p_9(12),
      O => \buff0_reg__1_i_12_n_0\
    );
\buff0_reg__1_i_13\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(10),
      I1 => p_9(10),
      O => \buff0_reg__1_i_13_n_0\
    );
\buff0_reg__1_i_14\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(9),
      I1 => p_9(9),
      O => \buff0_reg__1_i_14_n_0\
    );
\buff0_reg__1_i_15\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(8),
      I1 => p_9(8),
      O => \buff0_reg__1_i_15_n_0\
    );
\buff0_reg__1_i_16\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(7),
      I1 => p_9(7),
      O => \buff0_reg__1_i_16_n_0\
    );
\buff0_reg__1_i_17\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(10),
      I1 => p_7(10),
      I2 => p_7(11),
      I3 => p_9(11),
      O => \buff0_reg__1_i_17_n_0\
    );
\buff0_reg__1_i_18\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(9),
      I1 => p_7(9),
      I2 => p_7(10),
      I3 => p_9(10),
      O => \buff0_reg__1_i_18_n_0\
    );
\buff0_reg__1_i_19\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(8),
      I1 => p_7(8),
      I2 => p_7(9),
      I3 => p_9(9),
      O => \buff0_reg__1_i_19_n_0\
    );
\buff0_reg__1_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff0_reg__1_i_3_n_0\,
      CO(3) => \buff0_reg__1_i_2_n_0\,
      CO(2) => \buff0_reg__1_i_2_n_1\,
      CO(1) => \buff0_reg__1_i_2_n_2\,
      CO(0) => \buff0_reg__1_i_2_n_3\,
      CYINIT => '0',
      DI(3) => \buff0_reg__1_i_13_n_0\,
      DI(2) => \buff0_reg__1_i_14_n_0\,
      DI(1) => \buff0_reg__1_i_15_n_0\,
      DI(0) => \buff0_reg__1_i_16_n_0\,
      O(3 downto 0) => sub_ln17_fu_78_p2(11 downto 8),
      S(3) => \buff0_reg__1_i_17_n_0\,
      S(2) => \buff0_reg__1_i_18_n_0\,
      S(1) => \buff0_reg__1_i_19_n_0\,
      S(0) => \buff0_reg__1_i_20_n_0\
    );
\buff0_reg__1_i_20\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(7),
      I1 => p_7(7),
      I2 => p_7(8),
      I3 => p_9(8),
      O => \buff0_reg__1_i_20_n_0\
    );
\buff0_reg__1_i_21\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(6),
      I1 => p_9(6),
      O => \buff0_reg__1_i_21_n_0\
    );
\buff0_reg__1_i_22\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(5),
      I1 => p_9(5),
      O => \buff0_reg__1_i_22_n_0\
    );
\buff0_reg__1_i_23\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(4),
      I1 => p_9(4),
      O => \buff0_reg__1_i_23_n_0\
    );
\buff0_reg__1_i_24\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(3),
      I1 => p_9(3),
      O => \buff0_reg__1_i_24_n_0\
    );
\buff0_reg__1_i_25\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(6),
      I1 => p_7(6),
      I2 => p_7(7),
      I3 => p_9(7),
      O => \buff0_reg__1_i_25_n_0\
    );
\buff0_reg__1_i_26\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(5),
      I1 => p_7(5),
      I2 => p_7(6),
      I3 => p_9(6),
      O => \buff0_reg__1_i_26_n_0\
    );
\buff0_reg__1_i_27\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(4),
      I1 => p_7(4),
      I2 => p_7(5),
      I3 => p_9(5),
      O => \buff0_reg__1_i_27_n_0\
    );
\buff0_reg__1_i_28\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(3),
      I1 => p_7(3),
      I2 => p_7(4),
      I3 => p_9(4),
      O => \buff0_reg__1_i_28_n_0\
    );
\buff0_reg__1_i_29\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(2),
      I1 => p_9(2),
      O => \buff0_reg__1_i_29_n_0\
    );
\buff0_reg__1_i_3\: unisim.vcomponents.CARRY4
     port map (
      CI => \buff0_reg__1_i_4_n_0\,
      CO(3) => \buff0_reg__1_i_3_n_0\,
      CO(2) => \buff0_reg__1_i_3_n_1\,
      CO(1) => \buff0_reg__1_i_3_n_2\,
      CO(0) => \buff0_reg__1_i_3_n_3\,
      CYINIT => '0',
      DI(3) => \buff0_reg__1_i_21_n_0\,
      DI(2) => \buff0_reg__1_i_22_n_0\,
      DI(1) => \buff0_reg__1_i_23_n_0\,
      DI(0) => \buff0_reg__1_i_24_n_0\,
      O(3 downto 0) => sub_ln17_fu_78_p2(7 downto 4),
      S(3) => \buff0_reg__1_i_25_n_0\,
      S(2) => \buff0_reg__1_i_26_n_0\,
      S(1) => \buff0_reg__1_i_27_n_0\,
      S(0) => \buff0_reg__1_i_28_n_0\
    );
\buff0_reg__1_i_30\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(1),
      O => \buff0_reg__1_i_30_n_0\
    );
\buff0_reg__1_i_31\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => p_9(2),
      I1 => p_7(2),
      I2 => p_7(3),
      I3 => p_9(3),
      O => \buff0_reg__1_i_31_n_0\
    );
\buff0_reg__1_i_32\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"69"
    )
        port map (
      I0 => p_7(1),
      I1 => p_7(2),
      I2 => p_9(2),
      O => \buff0_reg__1_i_32_n_0\
    );
\buff0_reg__1_i_33\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_7(1),
      I1 => p_9(1),
      O => \buff0_reg__1_i_33_n_0\
    );
\buff0_reg__1_i_34\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => p_9(0),
      I1 => p_7(0),
      O => \buff0_reg__1_i_34_n_0\
    );
\buff0_reg__1_i_4\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \buff0_reg__1_i_4_n_0\,
      CO(2) => \buff0_reg__1_i_4_n_1\,
      CO(1) => \buff0_reg__1_i_4_n_2\,
      CO(0) => \buff0_reg__1_i_4_n_3\,
      CYINIT => '0',
      DI(3) => \buff0_reg__1_i_29_n_0\,
      DI(2) => p_7(1),
      DI(1) => \buff0_reg__1_i_30_n_0\,
      DI(0) => p_7(0),
      O(3 downto 0) => sub_ln17_fu_78_p2(3 downto 0),
      S(3) => \buff0_reg__1_i_31_n_0\,
      S(2) => \buff0_reg__1_i_32_n_0\,
      S(1) => \buff0_reg__1_i_33_n_0\,
      S(0) => \buff0_reg__1_i_34_n_0\
    );
\buff0_reg__1_i_5__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => p_9(15),
      I1 => p_7(15),
      O => \buff0_reg__1_i_5__0_n_0\
    );
\buff0_reg__1_i_6__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(13),
      I1 => p_9(13),
      O => \buff0_reg__1_i_6__0_n_0\
    );
\buff0_reg__1_i_7__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(12),
      I1 => p_9(12),
      O => \buff0_reg__1_i_7__0_n_0\
    );
\buff0_reg__1_i_8__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_7(11),
      I1 => p_9(11),
      O => \buff0_reg__1_i_8__0_n_0\
    );
\buff0_reg__1_i_9\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"9699"
    )
        port map (
      I0 => p_7(15),
      I1 => p_9(15),
      I2 => p_9(14),
      I3 => p_7(14),
      O => \buff0_reg__1_i_9_n_0\
    );
\buff0_reg__2\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 0,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => sub_ln17_fu_78_p2(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff0_reg__2_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"010010000010101011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff0_reg__2_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff0_reg__2_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff0_reg__2_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff0_reg__2_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_buff0_reg__2_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_buff0_reg__2_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_buff0_reg__2_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff0_reg__2_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => \buff0_reg__2_n_106\,
      PCOUT(46) => \buff0_reg__2_n_107\,
      PCOUT(45) => \buff0_reg__2_n_108\,
      PCOUT(44) => \buff0_reg__2_n_109\,
      PCOUT(43) => \buff0_reg__2_n_110\,
      PCOUT(42) => \buff0_reg__2_n_111\,
      PCOUT(41) => \buff0_reg__2_n_112\,
      PCOUT(40) => \buff0_reg__2_n_113\,
      PCOUT(39) => \buff0_reg__2_n_114\,
      PCOUT(38) => \buff0_reg__2_n_115\,
      PCOUT(37) => \buff0_reg__2_n_116\,
      PCOUT(36) => \buff0_reg__2_n_117\,
      PCOUT(35) => \buff0_reg__2_n_118\,
      PCOUT(34) => \buff0_reg__2_n_119\,
      PCOUT(33) => \buff0_reg__2_n_120\,
      PCOUT(32) => \buff0_reg__2_n_121\,
      PCOUT(31) => \buff0_reg__2_n_122\,
      PCOUT(30) => \buff0_reg__2_n_123\,
      PCOUT(29) => \buff0_reg__2_n_124\,
      PCOUT(28) => \buff0_reg__2_n_125\,
      PCOUT(27) => \buff0_reg__2_n_126\,
      PCOUT(26) => \buff0_reg__2_n_127\,
      PCOUT(25) => \buff0_reg__2_n_128\,
      PCOUT(24) => \buff0_reg__2_n_129\,
      PCOUT(23) => \buff0_reg__2_n_130\,
      PCOUT(22) => \buff0_reg__2_n_131\,
      PCOUT(21) => \buff0_reg__2_n_132\,
      PCOUT(20) => \buff0_reg__2_n_133\,
      PCOUT(19) => \buff0_reg__2_n_134\,
      PCOUT(18) => \buff0_reg__2_n_135\,
      PCOUT(17) => \buff0_reg__2_n_136\,
      PCOUT(16) => \buff0_reg__2_n_137\,
      PCOUT(15) => \buff0_reg__2_n_138\,
      PCOUT(14) => \buff0_reg__2_n_139\,
      PCOUT(13) => \buff0_reg__2_n_140\,
      PCOUT(12) => \buff0_reg__2_n_141\,
      PCOUT(11) => \buff0_reg__2_n_142\,
      PCOUT(10) => \buff0_reg__2_n_143\,
      PCOUT(9) => \buff0_reg__2_n_144\,
      PCOUT(8) => \buff0_reg__2_n_145\,
      PCOUT(7) => \buff0_reg__2_n_146\,
      PCOUT(6) => \buff0_reg__2_n_147\,
      PCOUT(5) => \buff0_reg__2_n_148\,
      PCOUT(4) => \buff0_reg__2_n_149\,
      PCOUT(3) => \buff0_reg__2_n_150\,
      PCOUT(2) => \buff0_reg__2_n_151\,
      PCOUT(1) => \buff0_reg__2_n_152\,
      PCOUT(0) => \buff0_reg__2_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff0_reg__2_UNDERFLOW_UNCONNECTED\
    );
\buff0_reg__3\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 0,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => sub_ln17_fu_78_p2(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff0_reg__3_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000000001110010001",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff0_reg__3_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff0_reg__3_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff0_reg__3_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff0_reg__3_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_buff0_reg__3_OVERFLOW_UNCONNECTED\,
      P(47) => \buff0_reg__3_n_58\,
      P(46) => \buff0_reg__3_n_59\,
      P(45) => \buff0_reg__3_n_60\,
      P(44) => \buff0_reg__3_n_61\,
      P(43) => \buff0_reg__3_n_62\,
      P(42) => \buff0_reg__3_n_63\,
      P(41) => \buff0_reg__3_n_64\,
      P(40) => \buff0_reg__3_n_65\,
      P(39) => \buff0_reg__3_n_66\,
      P(38) => \buff0_reg__3_n_67\,
      P(37) => \buff0_reg__3_n_68\,
      P(36) => \buff0_reg__3_n_69\,
      P(35) => \buff0_reg__3_n_70\,
      P(34) => \buff0_reg__3_n_71\,
      P(33) => \buff0_reg__3_n_72\,
      P(32) => \buff0_reg__3_n_73\,
      P(31) => \buff0_reg__3_n_74\,
      P(30) => \buff0_reg__3_n_75\,
      P(29) => \buff0_reg__3_n_76\,
      P(28) => \buff0_reg__3_n_77\,
      P(27) => \buff0_reg__3_n_78\,
      P(26) => \buff0_reg__3_n_79\,
      P(25) => \buff0_reg__3_n_80\,
      P(24) => \buff0_reg__3_n_81\,
      P(23) => \buff0_reg__3_n_82\,
      P(22) => \buff0_reg__3_n_83\,
      P(21) => \buff0_reg__3_n_84\,
      P(20) => \buff0_reg__3_n_85\,
      P(19) => \buff0_reg__3_n_86\,
      P(18) => \buff0_reg__3_n_87\,
      P(17) => \buff0_reg__3_n_88\,
      P(16) => \buff0_reg__3_n_89\,
      P(15) => \buff0_reg__3_n_90\,
      P(14) => \buff0_reg__3_n_91\,
      P(13) => \buff0_reg__3_n_92\,
      P(12) => \buff0_reg__3_n_93\,
      P(11) => \buff0_reg__3_n_94\,
      P(10) => \buff0_reg__3_n_95\,
      P(9) => \buff0_reg__3_n_96\,
      P(8) => \buff0_reg__3_n_97\,
      P(7) => \buff0_reg__3_n_98\,
      P(6) => \buff0_reg__3_n_99\,
      P(5) => \buff0_reg__3_n_100\,
      P(4) => \buff0_reg__3_n_101\,
      P(3) => \buff0_reg__3_n_102\,
      P(2) => \buff0_reg__3_n_103\,
      P(1) => \buff0_reg__3_n_104\,
      P(0) => \buff0_reg__3_n_105\,
      PATTERNBDETECT => \NLW_buff0_reg__3_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff0_reg__3_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => \buff0_reg__3_n_106\,
      PCOUT(46) => \buff0_reg__3_n_107\,
      PCOUT(45) => \buff0_reg__3_n_108\,
      PCOUT(44) => \buff0_reg__3_n_109\,
      PCOUT(43) => \buff0_reg__3_n_110\,
      PCOUT(42) => \buff0_reg__3_n_111\,
      PCOUT(41) => \buff0_reg__3_n_112\,
      PCOUT(40) => \buff0_reg__3_n_113\,
      PCOUT(39) => \buff0_reg__3_n_114\,
      PCOUT(38) => \buff0_reg__3_n_115\,
      PCOUT(37) => \buff0_reg__3_n_116\,
      PCOUT(36) => \buff0_reg__3_n_117\,
      PCOUT(35) => \buff0_reg__3_n_118\,
      PCOUT(34) => \buff0_reg__3_n_119\,
      PCOUT(33) => \buff0_reg__3_n_120\,
      PCOUT(32) => \buff0_reg__3_n_121\,
      PCOUT(31) => \buff0_reg__3_n_122\,
      PCOUT(30) => \buff0_reg__3_n_123\,
      PCOUT(29) => \buff0_reg__3_n_124\,
      PCOUT(28) => \buff0_reg__3_n_125\,
      PCOUT(27) => \buff0_reg__3_n_126\,
      PCOUT(26) => \buff0_reg__3_n_127\,
      PCOUT(25) => \buff0_reg__3_n_128\,
      PCOUT(24) => \buff0_reg__3_n_129\,
      PCOUT(23) => \buff0_reg__3_n_130\,
      PCOUT(22) => \buff0_reg__3_n_131\,
      PCOUT(21) => \buff0_reg__3_n_132\,
      PCOUT(20) => \buff0_reg__3_n_133\,
      PCOUT(19) => \buff0_reg__3_n_134\,
      PCOUT(18) => \buff0_reg__3_n_135\,
      PCOUT(17) => \buff0_reg__3_n_136\,
      PCOUT(16) => \buff0_reg__3_n_137\,
      PCOUT(15) => \buff0_reg__3_n_138\,
      PCOUT(14) => \buff0_reg__3_n_139\,
      PCOUT(13) => \buff0_reg__3_n_140\,
      PCOUT(12) => \buff0_reg__3_n_141\,
      PCOUT(11) => \buff0_reg__3_n_142\,
      PCOUT(10) => \buff0_reg__3_n_143\,
      PCOUT(9) => \buff0_reg__3_n_144\,
      PCOUT(8) => \buff0_reg__3_n_145\,
      PCOUT(7) => \buff0_reg__3_n_146\,
      PCOUT(6) => \buff0_reg__3_n_147\,
      PCOUT(5) => \buff0_reg__3_n_148\,
      PCOUT(4) => \buff0_reg__3_n_149\,
      PCOUT(3) => \buff0_reg__3_n_150\,
      PCOUT(2) => \buff0_reg__3_n_151\,
      PCOUT(1) => \buff0_reg__3_n_152\,
      PCOUT(0) => \buff0_reg__3_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff0_reg__3_UNDERFLOW_UNCONNECTED\
    );
buff0_reg_i_1: unisim.vcomponents.CARRY4
     port map (
      CI => \buff0_reg__1_i_1_n_0\,
      CO(3 downto 1) => NLW_buff0_reg_i_1_CO_UNCONNECTED(3 downto 1),
      CO(0) => buff0_reg_i_1_n_3,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 2) => NLW_buff0_reg_i_1_O_UNCONNECTED(3 downto 2),
      O(1 downto 0) => sub_ln17_fu_78_p2(17 downto 16),
      S(3 downto 1) => B"001",
      S(0) => buff0_reg_i_2_n_0
    );
buff0_reg_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => p_9(15),
      I1 => p_7(15),
      O => buff0_reg_i_2_n_0
    );
buff1_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => sub_ln17_fu_78_p2(17),
      A(16) => sub_ln17_fu_78_p2(17),
      A(15) => sub_ln17_fu_78_p2(17),
      A(14) => sub_ln17_fu_78_p2(17),
      A(13) => sub_ln17_fu_78_p2(17),
      A(12) => sub_ln17_fu_78_p2(17),
      A(11) => sub_ln17_fu_78_p2(17),
      A(10) => sub_ln17_fu_78_p2(17),
      A(9) => sub_ln17_fu_78_p2(17),
      A(8) => sub_ln17_fu_78_p2(17),
      A(7) => sub_ln17_fu_78_p2(17),
      A(6) => sub_ln17_fu_78_p2(17),
      A(5) => sub_ln17_fu_78_p2(17),
      A(4) => sub_ln17_fu_78_p2(17),
      A(3) => sub_ln17_fu_78_p2(17),
      A(2) => sub_ln17_fu_78_p2(17),
      A(1) => sub_ln17_fu_78_p2(17),
      A(0) => sub_ln17_fu_78_p2(17),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_buff1_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"010010000010101011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_buff1_reg_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_buff1_reg_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => NLW_buff1_reg_OVERFLOW_UNCONNECTED,
      P(47) => buff1_reg_n_58,
      P(46) => buff1_reg_n_59,
      P(45) => buff1_reg_n_60,
      P(44) => buff1_reg_n_61,
      P(43) => buff1_reg_n_62,
      P(42) => buff1_reg_n_63,
      P(41) => buff1_reg_n_64,
      P(40) => buff1_reg_n_65,
      P(39) => buff1_reg_n_66,
      P(38) => buff1_reg_n_67,
      P(37) => buff1_reg_n_68,
      P(36) => buff1_reg_n_69,
      P(35) => buff1_reg_n_70,
      P(34) => buff1_reg_n_71,
      P(33) => buff1_reg_n_72,
      P(32) => buff1_reg_n_73,
      P(31) => buff1_reg_n_74,
      P(30) => buff1_reg_n_75,
      P(29) => buff1_reg_n_76,
      P(28) => buff1_reg_n_77,
      P(27) => buff1_reg_n_78,
      P(26) => buff1_reg_n_79,
      P(25) => buff1_reg_n_80,
      P(24) => buff1_reg_n_81,
      P(23) => buff1_reg_n_82,
      P(22) => buff1_reg_n_83,
      P(21) => buff1_reg_n_84,
      P(20) => buff1_reg_n_85,
      P(19) => buff1_reg_n_86,
      P(18) => buff1_reg_n_87,
      P(17) => buff1_reg_n_88,
      P(16) => buff1_reg_n_89,
      P(15) => buff1_reg_n_90,
      P(14) => buff1_reg_n_91,
      P(13) => buff1_reg_n_92,
      P(12) => buff1_reg_n_93,
      P(11) => buff1_reg_n_94,
      P(10) => buff1_reg_n_95,
      P(9) => buff1_reg_n_96,
      P(8) => buff1_reg_n_97,
      P(7) => buff1_reg_n_98,
      P(6) => buff1_reg_n_99,
      P(5) => buff1_reg_n_100,
      P(4) => buff1_reg_n_101,
      P(3) => buff1_reg_n_102,
      P(2) => buff1_reg_n_103,
      P(1) => buff1_reg_n_104,
      P(0) => buff1_reg_n_105,
      PATTERNBDETECT => NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_buff1_reg_PATTERNDETECT_UNCONNECTED,
      PCIN(47) => tmp_product_n_106,
      PCIN(46) => tmp_product_n_107,
      PCIN(45) => tmp_product_n_108,
      PCIN(44) => tmp_product_n_109,
      PCIN(43) => tmp_product_n_110,
      PCIN(42) => tmp_product_n_111,
      PCIN(41) => tmp_product_n_112,
      PCIN(40) => tmp_product_n_113,
      PCIN(39) => tmp_product_n_114,
      PCIN(38) => tmp_product_n_115,
      PCIN(37) => tmp_product_n_116,
      PCIN(36) => tmp_product_n_117,
      PCIN(35) => tmp_product_n_118,
      PCIN(34) => tmp_product_n_119,
      PCIN(33) => tmp_product_n_120,
      PCIN(32) => tmp_product_n_121,
      PCIN(31) => tmp_product_n_122,
      PCIN(30) => tmp_product_n_123,
      PCIN(29) => tmp_product_n_124,
      PCIN(28) => tmp_product_n_125,
      PCIN(27) => tmp_product_n_126,
      PCIN(26) => tmp_product_n_127,
      PCIN(25) => tmp_product_n_128,
      PCIN(24) => tmp_product_n_129,
      PCIN(23) => tmp_product_n_130,
      PCIN(22) => tmp_product_n_131,
      PCIN(21) => tmp_product_n_132,
      PCIN(20) => tmp_product_n_133,
      PCIN(19) => tmp_product_n_134,
      PCIN(18) => tmp_product_n_135,
      PCIN(17) => tmp_product_n_136,
      PCIN(16) => tmp_product_n_137,
      PCIN(15) => tmp_product_n_138,
      PCIN(14) => tmp_product_n_139,
      PCIN(13) => tmp_product_n_140,
      PCIN(12) => tmp_product_n_141,
      PCIN(11) => tmp_product_n_142,
      PCIN(10) => tmp_product_n_143,
      PCIN(9) => tmp_product_n_144,
      PCIN(8) => tmp_product_n_145,
      PCIN(7) => tmp_product_n_146,
      PCIN(6) => tmp_product_n_147,
      PCIN(5) => tmp_product_n_148,
      PCIN(4) => tmp_product_n_149,
      PCIN(3) => tmp_product_n_150,
      PCIN(2) => tmp_product_n_151,
      PCIN(1) => tmp_product_n_152,
      PCIN(0) => tmp_product_n_153,
      PCOUT(47 downto 0) => NLW_buff1_reg_PCOUT_UNCONNECTED(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_buff1_reg_UNDERFLOW_UNCONNECTED
    );
\buff1_reg[0]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_105\,
      Q => \buff1_reg[0]__0_n_0\,
      R => '0'
    );
\buff1_reg[10]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_95\,
      Q => \buff1_reg[10]__0_n_0\,
      R => '0'
    );
\buff1_reg[11]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_94\,
      Q => \buff1_reg[11]__0_n_0\,
      R => '0'
    );
\buff1_reg[12]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_93\,
      Q => \buff1_reg[12]__0_n_0\,
      R => '0'
    );
\buff1_reg[13]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_92\,
      Q => \buff1_reg[13]__0_n_0\,
      R => '0'
    );
\buff1_reg[14]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_91\,
      Q => \buff1_reg[14]__0_n_0\,
      R => '0'
    );
\buff1_reg[15]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_90\,
      Q => \buff1_reg[15]__0_n_0\,
      R => '0'
    );
\buff1_reg[16]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_89\,
      Q => \buff1_reg[16]__0_n_0\,
      R => '0'
    );
\buff1_reg[1]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_104\,
      Q => \buff1_reg[1]__0_n_0\,
      R => '0'
    );
\buff1_reg[2]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_103\,
      Q => \buff1_reg[2]__0_n_0\,
      R => '0'
    );
\buff1_reg[3]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_102\,
      Q => \buff1_reg[3]__0_n_0\,
      R => '0'
    );
\buff1_reg[4]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_101\,
      Q => \buff1_reg[4]__0_n_0\,
      R => '0'
    );
\buff1_reg[5]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_100\,
      Q => \buff1_reg[5]__0_n_0\,
      R => '0'
    );
\buff1_reg[6]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_99\,
      Q => \buff1_reg[6]__0_n_0\,
      R => '0'
    );
\buff1_reg[7]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_98\,
      Q => \buff1_reg[7]__0_n_0\,
      R => '0'
    );
\buff1_reg[8]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_97\,
      Q => \buff1_reg[8]__0_n_0\,
      R => '0'
    );
\buff1_reg[9]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff0_reg__0_n_96\,
      Q => \buff1_reg[9]__0_n_0\,
      R => '0'
    );
\buff1_reg__0\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => sub_ln17_fu_78_p2(17),
      A(16) => sub_ln17_fu_78_p2(17),
      A(15) => sub_ln17_fu_78_p2(17),
      A(14) => sub_ln17_fu_78_p2(17),
      A(13) => sub_ln17_fu_78_p2(17),
      A(12) => sub_ln17_fu_78_p2(17),
      A(11) => sub_ln17_fu_78_p2(17),
      A(10) => sub_ln17_fu_78_p2(17),
      A(9) => sub_ln17_fu_78_p2(17),
      A(8) => sub_ln17_fu_78_p2(17),
      A(7) => sub_ln17_fu_78_p2(17),
      A(6) => sub_ln17_fu_78_p2(17),
      A(5) => sub_ln17_fu_78_p2(17),
      A(4) => sub_ln17_fu_78_p2(17),
      A(3) => sub_ln17_fu_78_p2(17),
      A(2) => sub_ln17_fu_78_p2(17),
      A(1) => sub_ln17_fu_78_p2(17),
      A(0) => sub_ln17_fu_78_p2(17),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff1_reg__0_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000010000000010011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff1_reg__0_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff1_reg__0_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff1_reg__0_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff1_reg__0_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_buff1_reg__0_OVERFLOW_UNCONNECTED\,
      P(47) => \buff1_reg__0_n_58\,
      P(46) => \buff1_reg__0_n_59\,
      P(45) => \buff1_reg__0_n_60\,
      P(44) => \buff1_reg__0_n_61\,
      P(43) => \buff1_reg__0_n_62\,
      P(42) => \buff1_reg__0_n_63\,
      P(41) => \buff1_reg__0_n_64\,
      P(40) => \buff1_reg__0_n_65\,
      P(39) => \buff1_reg__0_n_66\,
      P(38) => \buff1_reg__0_n_67\,
      P(37) => \buff1_reg__0_n_68\,
      P(36) => \buff1_reg__0_n_69\,
      P(35) => \buff1_reg__0_n_70\,
      P(34) => \buff1_reg__0_n_71\,
      P(33) => \buff1_reg__0_n_72\,
      P(32) => \buff1_reg__0_n_73\,
      P(31) => \buff1_reg__0_n_74\,
      P(30) => \buff1_reg__0_n_75\,
      P(29) => \buff1_reg__0_n_76\,
      P(28) => \buff1_reg__0_n_77\,
      P(27) => \buff1_reg__0_n_78\,
      P(26) => \buff1_reg__0_n_79\,
      P(25) => \buff1_reg__0_n_80\,
      P(24) => \buff1_reg__0_n_81\,
      P(23) => \buff1_reg__0_n_82\,
      P(22) => \buff1_reg__0_n_83\,
      P(21) => \buff1_reg__0_n_84\,
      P(20) => \buff1_reg__0_n_85\,
      P(19) => \buff1_reg__0_n_86\,
      P(18) => \buff1_reg__0_n_87\,
      P(17) => \buff1_reg__0_n_88\,
      P(16) => \buff1_reg__0_n_89\,
      P(15) => \buff1_reg__0_n_90\,
      P(14) => \buff1_reg__0_n_91\,
      P(13) => \buff1_reg__0_n_92\,
      P(12) => \buff1_reg__0_n_93\,
      P(11) => \buff1_reg__0_n_94\,
      P(10) => \buff1_reg__0_n_95\,
      P(9) => \buff1_reg__0_n_96\,
      P(8) => \buff1_reg__0_n_97\,
      P(7) => \buff1_reg__0_n_98\,
      P(6) => \buff1_reg__0_n_99\,
      P(5) => \buff1_reg__0_n_100\,
      P(4) => \buff1_reg__0_n_101\,
      P(3) => \buff1_reg__0_n_102\,
      P(2) => \buff1_reg__0_n_103\,
      P(1) => \buff1_reg__0_n_104\,
      P(0) => \buff1_reg__0_n_105\,
      PATTERNBDETECT => \NLW_buff1_reg__0_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff1_reg__0_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \tmp_product__0_n_106\,
      PCIN(46) => \tmp_product__0_n_107\,
      PCIN(45) => \tmp_product__0_n_108\,
      PCIN(44) => \tmp_product__0_n_109\,
      PCIN(43) => \tmp_product__0_n_110\,
      PCIN(42) => \tmp_product__0_n_111\,
      PCIN(41) => \tmp_product__0_n_112\,
      PCIN(40) => \tmp_product__0_n_113\,
      PCIN(39) => \tmp_product__0_n_114\,
      PCIN(38) => \tmp_product__0_n_115\,
      PCIN(37) => \tmp_product__0_n_116\,
      PCIN(36) => \tmp_product__0_n_117\,
      PCIN(35) => \tmp_product__0_n_118\,
      PCIN(34) => \tmp_product__0_n_119\,
      PCIN(33) => \tmp_product__0_n_120\,
      PCIN(32) => \tmp_product__0_n_121\,
      PCIN(31) => \tmp_product__0_n_122\,
      PCIN(30) => \tmp_product__0_n_123\,
      PCIN(29) => \tmp_product__0_n_124\,
      PCIN(28) => \tmp_product__0_n_125\,
      PCIN(27) => \tmp_product__0_n_126\,
      PCIN(26) => \tmp_product__0_n_127\,
      PCIN(25) => \tmp_product__0_n_128\,
      PCIN(24) => \tmp_product__0_n_129\,
      PCIN(23) => \tmp_product__0_n_130\,
      PCIN(22) => \tmp_product__0_n_131\,
      PCIN(21) => \tmp_product__0_n_132\,
      PCIN(20) => \tmp_product__0_n_133\,
      PCIN(19) => \tmp_product__0_n_134\,
      PCIN(18) => \tmp_product__0_n_135\,
      PCIN(17) => \tmp_product__0_n_136\,
      PCIN(16) => \tmp_product__0_n_137\,
      PCIN(15) => \tmp_product__0_n_138\,
      PCIN(14) => \tmp_product__0_n_139\,
      PCIN(13) => \tmp_product__0_n_140\,
      PCIN(12) => \tmp_product__0_n_141\,
      PCIN(11) => \tmp_product__0_n_142\,
      PCIN(10) => \tmp_product__0_n_143\,
      PCIN(9) => \tmp_product__0_n_144\,
      PCIN(8) => \tmp_product__0_n_145\,
      PCIN(7) => \tmp_product__0_n_146\,
      PCIN(6) => \tmp_product__0_n_147\,
      PCIN(5) => \tmp_product__0_n_148\,
      PCIN(4) => \tmp_product__0_n_149\,
      PCIN(3) => \tmp_product__0_n_150\,
      PCIN(2) => \tmp_product__0_n_151\,
      PCIN(1) => \tmp_product__0_n_152\,
      PCIN(0) => \tmp_product__0_n_153\,
      PCOUT(47 downto 0) => \NLW_buff1_reg__0_PCOUT_UNCONNECTED\(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff1_reg__0_UNDERFLOW_UNCONNECTED\
    );
\buff1_reg__1\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 18) => B"000000000000",
      A(17) => sub_ln17_fu_78_p2(17),
      A(16) => sub_ln17_fu_78_p2(17),
      A(15) => sub_ln17_fu_78_p2(17),
      A(14) => sub_ln17_fu_78_p2(17),
      A(13) => sub_ln17_fu_78_p2(17),
      A(12) => sub_ln17_fu_78_p2(17),
      A(11) => sub_ln17_fu_78_p2(17),
      A(10) => sub_ln17_fu_78_p2(17),
      A(9) => sub_ln17_fu_78_p2(17),
      A(8) => sub_ln17_fu_78_p2(17),
      A(7) => sub_ln17_fu_78_p2(17),
      A(6) => sub_ln17_fu_78_p2(17),
      A(5) => sub_ln17_fu_78_p2(17),
      A(4) => sub_ln17_fu_78_p2(17),
      A(3) => sub_ln17_fu_78_p2(17),
      A(2) => sub_ln17_fu_78_p2(17),
      A(1) => sub_ln17_fu_78_p2(17),
      A(0) => sub_ln17_fu_78_p2(17),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff1_reg__1_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000000001110010001",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff1_reg__1_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff1_reg__1_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff1_reg__1_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff1_reg__1_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_buff1_reg__1_OVERFLOW_UNCONNECTED\,
      P(47) => \buff1_reg__1_n_58\,
      P(46) => \buff1_reg__1_n_59\,
      P(45) => \buff1_reg__1_n_60\,
      P(44) => \buff1_reg__1_n_61\,
      P(43) => \buff1_reg__1_n_62\,
      P(42) => \buff1_reg__1_n_63\,
      P(41) => \buff1_reg__1_n_64\,
      P(40) => \buff1_reg__1_n_65\,
      P(39) => \buff1_reg__1_n_66\,
      P(38) => \buff1_reg__1_n_67\,
      P(37) => \buff1_reg__1_n_68\,
      P(36) => \buff1_reg__1_n_69\,
      P(35) => \buff1_reg__1_n_70\,
      P(34) => \buff1_reg__1_n_71\,
      P(33) => \buff1_reg__1_n_72\,
      P(32) => \buff1_reg__1_n_73\,
      P(31) => \buff1_reg__1_n_74\,
      P(30) => \buff1_reg__1_n_75\,
      P(29) => \buff1_reg__1_n_76\,
      P(28) => \buff1_reg__1_n_77\,
      P(27) => \buff1_reg__1_n_78\,
      P(26) => \buff1_reg__1_n_79\,
      P(25) => \buff1_reg__1_n_80\,
      P(24) => \buff1_reg__1_n_81\,
      P(23) => \buff1_reg__1_n_82\,
      P(22) => \buff1_reg__1_n_83\,
      P(21) => \buff1_reg__1_n_84\,
      P(20) => \buff1_reg__1_n_85\,
      P(19) => \buff1_reg__1_n_86\,
      P(18) => \buff1_reg__1_n_87\,
      P(17) => \buff1_reg__1_n_88\,
      P(16) => \buff1_reg__1_n_89\,
      P(15) => \buff1_reg__1_n_90\,
      P(14) => \buff1_reg__1_n_91\,
      P(13) => \buff1_reg__1_n_92\,
      P(12) => \buff1_reg__1_n_93\,
      P(11) => \buff1_reg__1_n_94\,
      P(10) => \buff1_reg__1_n_95\,
      P(9) => \buff1_reg__1_n_96\,
      P(8) => \buff1_reg__1_n_97\,
      P(7) => \buff1_reg__1_n_98\,
      P(6) => \buff1_reg__1_n_99\,
      P(5) => \buff1_reg__1_n_100\,
      P(4) => \buff1_reg__1_n_101\,
      P(3) => \buff1_reg__1_n_102\,
      P(2) => \buff1_reg__1_n_103\,
      P(1) => \buff1_reg__1_n_104\,
      P(0) => \buff1_reg__1_n_105\,
      PATTERNBDETECT => \NLW_buff1_reg__1_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff1_reg__1_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \tmp_product__1_n_106\,
      PCIN(46) => \tmp_product__1_n_107\,
      PCIN(45) => \tmp_product__1_n_108\,
      PCIN(44) => \tmp_product__1_n_109\,
      PCIN(43) => \tmp_product__1_n_110\,
      PCIN(42) => \tmp_product__1_n_111\,
      PCIN(41) => \tmp_product__1_n_112\,
      PCIN(40) => \tmp_product__1_n_113\,
      PCIN(39) => \tmp_product__1_n_114\,
      PCIN(38) => \tmp_product__1_n_115\,
      PCIN(37) => \tmp_product__1_n_116\,
      PCIN(36) => \tmp_product__1_n_117\,
      PCIN(35) => \tmp_product__1_n_118\,
      PCIN(34) => \tmp_product__1_n_119\,
      PCIN(33) => \tmp_product__1_n_120\,
      PCIN(32) => \tmp_product__1_n_121\,
      PCIN(31) => \tmp_product__1_n_122\,
      PCIN(30) => \tmp_product__1_n_123\,
      PCIN(29) => \tmp_product__1_n_124\,
      PCIN(28) => \tmp_product__1_n_125\,
      PCIN(27) => \tmp_product__1_n_126\,
      PCIN(26) => \tmp_product__1_n_127\,
      PCIN(25) => \tmp_product__1_n_128\,
      PCIN(24) => \tmp_product__1_n_129\,
      PCIN(23) => \tmp_product__1_n_130\,
      PCIN(22) => \tmp_product__1_n_131\,
      PCIN(21) => \tmp_product__1_n_132\,
      PCIN(20) => \tmp_product__1_n_133\,
      PCIN(19) => \tmp_product__1_n_134\,
      PCIN(18) => \tmp_product__1_n_135\,
      PCIN(17) => \tmp_product__1_n_136\,
      PCIN(16) => \tmp_product__1_n_137\,
      PCIN(15) => \tmp_product__1_n_138\,
      PCIN(14) => \tmp_product__1_n_139\,
      PCIN(13) => \tmp_product__1_n_140\,
      PCIN(12) => \tmp_product__1_n_141\,
      PCIN(11) => \tmp_product__1_n_142\,
      PCIN(10) => \tmp_product__1_n_143\,
      PCIN(9) => \tmp_product__1_n_144\,
      PCIN(8) => \tmp_product__1_n_145\,
      PCIN(7) => \tmp_product__1_n_146\,
      PCIN(6) => \tmp_product__1_n_147\,
      PCIN(5) => \tmp_product__1_n_148\,
      PCIN(4) => \tmp_product__1_n_149\,
      PCIN(3) => \tmp_product__1_n_150\,
      PCIN(2) => \tmp_product__1_n_151\,
      PCIN(1) => \tmp_product__1_n_152\,
      PCIN(0) => \tmp_product__1_n_153\,
      PCOUT(47 downto 0) => \NLW_buff1_reg__1_PCOUT_UNCONNECTED\(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff1_reg__1_UNDERFLOW_UNCONNECTED\
    );
\buff1_reg__2\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16) => sub_ln17_fu_78_p2(17),
      A(15) => sub_ln17_fu_78_p2(17),
      A(14) => sub_ln17_fu_78_p2(17),
      A(13) => sub_ln17_fu_78_p2(17),
      A(12) => sub_ln17_fu_78_p2(17),
      A(11) => sub_ln17_fu_78_p2(17),
      A(10) => sub_ln17_fu_78_p2(17),
      A(9) => sub_ln17_fu_78_p2(17),
      A(8) => sub_ln17_fu_78_p2(17),
      A(7) => sub_ln17_fu_78_p2(17),
      A(6) => sub_ln17_fu_78_p2(17),
      A(5) => sub_ln17_fu_78_p2(17),
      A(4) => sub_ln17_fu_78_p2(17),
      A(3) => sub_ln17_fu_78_p2(17),
      A(2) => sub_ln17_fu_78_p2(17),
      A(1) => sub_ln17_fu_78_p2(17),
      A(0) => sub_ln17_fu_78_p2(17),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_buff1_reg__2_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000000001110010001",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_buff1_reg__2_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_buff1_reg__2_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_buff1_reg__2_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_buff1_reg__2_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_buff1_reg__2_OVERFLOW_UNCONNECTED\,
      P(47) => \buff1_reg__2_n_58\,
      P(46) => \buff1_reg__2_n_59\,
      P(45) => \buff1_reg__2_n_60\,
      P(44) => \buff1_reg__2_n_61\,
      P(43) => \buff1_reg__2_n_62\,
      P(42) => \buff1_reg__2_n_63\,
      P(41) => \buff1_reg__2_n_64\,
      P(40) => \buff1_reg__2_n_65\,
      P(39) => \buff1_reg__2_n_66\,
      P(38) => \buff1_reg__2_n_67\,
      P(37) => \buff1_reg__2_n_68\,
      P(36) => \buff1_reg__2_n_69\,
      P(35) => \buff1_reg__2_n_70\,
      P(34) => \buff1_reg__2_n_71\,
      P(33) => \buff1_reg__2_n_72\,
      P(32) => \buff1_reg__2_n_73\,
      P(31) => \buff1_reg__2_n_74\,
      P(30) => \buff1_reg__2_n_75\,
      P(29) => \buff1_reg__2_n_76\,
      P(28) => \buff1_reg__2_n_77\,
      P(27) => \buff1_reg__2_n_78\,
      P(26) => \buff1_reg__2_n_79\,
      P(25) => \buff1_reg__2_n_80\,
      P(24) => \buff1_reg__2_n_81\,
      P(23) => \buff1_reg__2_n_82\,
      P(22) => \buff1_reg__2_n_83\,
      P(21) => \buff1_reg__2_n_84\,
      P(20) => \buff1_reg__2_n_85\,
      P(19) => \buff1_reg__2_n_86\,
      P(18) => \buff1_reg__2_n_87\,
      P(17) => \buff1_reg__2_n_88\,
      P(16) => \buff1_reg__2_n_89\,
      P(15) => \buff1_reg__2_n_90\,
      P(14) => \buff1_reg__2_n_91\,
      P(13) => \buff1_reg__2_n_92\,
      P(12) => \buff1_reg__2_n_93\,
      P(11) => \buff1_reg__2_n_94\,
      P(10) => \buff1_reg__2_n_95\,
      P(9) => \buff1_reg__2_n_96\,
      P(8) => \buff1_reg__2_n_97\,
      P(7) => \buff1_reg__2_n_98\,
      P(6) => \buff1_reg__2_n_99\,
      P(5) => \buff1_reg__2_n_100\,
      P(4) => \buff1_reg__2_n_101\,
      P(3) => \buff1_reg__2_n_102\,
      P(2) => \buff1_reg__2_n_103\,
      P(1) => \buff1_reg__2_n_104\,
      P(0) => \buff1_reg__2_n_105\,
      PATTERNBDETECT => \NLW_buff1_reg__2_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_buff1_reg__2_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \tmp_product__2_n_106\,
      PCIN(46) => \tmp_product__2_n_107\,
      PCIN(45) => \tmp_product__2_n_108\,
      PCIN(44) => \tmp_product__2_n_109\,
      PCIN(43) => \tmp_product__2_n_110\,
      PCIN(42) => \tmp_product__2_n_111\,
      PCIN(41) => \tmp_product__2_n_112\,
      PCIN(40) => \tmp_product__2_n_113\,
      PCIN(39) => \tmp_product__2_n_114\,
      PCIN(38) => \tmp_product__2_n_115\,
      PCIN(37) => \tmp_product__2_n_116\,
      PCIN(36) => \tmp_product__2_n_117\,
      PCIN(35) => \tmp_product__2_n_118\,
      PCIN(34) => \tmp_product__2_n_119\,
      PCIN(33) => \tmp_product__2_n_120\,
      PCIN(32) => \tmp_product__2_n_121\,
      PCIN(31) => \tmp_product__2_n_122\,
      PCIN(30) => \tmp_product__2_n_123\,
      PCIN(29) => \tmp_product__2_n_124\,
      PCIN(28) => \tmp_product__2_n_125\,
      PCIN(27) => \tmp_product__2_n_126\,
      PCIN(26) => \tmp_product__2_n_127\,
      PCIN(25) => \tmp_product__2_n_128\,
      PCIN(24) => \tmp_product__2_n_129\,
      PCIN(23) => \tmp_product__2_n_130\,
      PCIN(22) => \tmp_product__2_n_131\,
      PCIN(21) => \tmp_product__2_n_132\,
      PCIN(20) => \tmp_product__2_n_133\,
      PCIN(19) => \tmp_product__2_n_134\,
      PCIN(18) => \tmp_product__2_n_135\,
      PCIN(17) => \tmp_product__2_n_136\,
      PCIN(16) => \tmp_product__2_n_137\,
      PCIN(15) => \tmp_product__2_n_138\,
      PCIN(14) => \tmp_product__2_n_139\,
      PCIN(13) => \tmp_product__2_n_140\,
      PCIN(12) => \tmp_product__2_n_141\,
      PCIN(11) => \tmp_product__2_n_142\,
      PCIN(10) => \tmp_product__2_n_143\,
      PCIN(9) => \tmp_product__2_n_144\,
      PCIN(8) => \tmp_product__2_n_145\,
      PCIN(7) => \tmp_product__2_n_146\,
      PCIN(6) => \tmp_product__2_n_147\,
      PCIN(5) => \tmp_product__2_n_148\,
      PCIN(4) => \tmp_product__2_n_149\,
      PCIN(3) => \tmp_product__2_n_150\,
      PCIN(2) => \tmp_product__2_n_151\,
      PCIN(1) => \tmp_product__2_n_152\,
      PCIN(0) => \tmp_product__2_n_153\,
      PCOUT(47 downto 0) => \NLW_buff1_reg__2_PCOUT_UNCONNECTED\(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_buff1_reg__2_UNDERFLOW_UNCONNECTED\
    );
tmp_product: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 0,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16) => sub_ln17_fu_78_p2(17),
      A(15) => sub_ln17_fu_78_p2(17),
      A(14) => sub_ln17_fu_78_p2(17),
      A(13) => sub_ln17_fu_78_p2(17),
      A(12) => sub_ln17_fu_78_p2(17),
      A(11) => sub_ln17_fu_78_p2(17),
      A(10) => sub_ln17_fu_78_p2(17),
      A(9) => sub_ln17_fu_78_p2(17),
      A(8) => sub_ln17_fu_78_p2(17),
      A(7) => sub_ln17_fu_78_p2(17),
      A(6) => sub_ln17_fu_78_p2(17),
      A(5) => sub_ln17_fu_78_p2(17),
      A(4) => sub_ln17_fu_78_p2(17),
      A(3) => sub_ln17_fu_78_p2(17),
      A(2) => sub_ln17_fu_78_p2(17),
      A(1) => sub_ln17_fu_78_p2(17),
      A(0) => sub_ln17_fu_78_p2(17),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_tmp_product_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000010011000000011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_tmp_product_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_tmp_product_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_tmp_product_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '0',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_tmp_product_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"1010101",
      OVERFLOW => NLW_tmp_product_OVERFLOW_UNCONNECTED,
      P(47 downto 0) => NLW_tmp_product_P_UNCONNECTED(47 downto 0),
      PATTERNBDETECT => NLW_tmp_product_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_tmp_product_PATTERNDETECT_UNCONNECTED,
      PCIN(47) => \buff0_reg__0_n_106\,
      PCIN(46) => \buff0_reg__0_n_107\,
      PCIN(45) => \buff0_reg__0_n_108\,
      PCIN(44) => \buff0_reg__0_n_109\,
      PCIN(43) => \buff0_reg__0_n_110\,
      PCIN(42) => \buff0_reg__0_n_111\,
      PCIN(41) => \buff0_reg__0_n_112\,
      PCIN(40) => \buff0_reg__0_n_113\,
      PCIN(39) => \buff0_reg__0_n_114\,
      PCIN(38) => \buff0_reg__0_n_115\,
      PCIN(37) => \buff0_reg__0_n_116\,
      PCIN(36) => \buff0_reg__0_n_117\,
      PCIN(35) => \buff0_reg__0_n_118\,
      PCIN(34) => \buff0_reg__0_n_119\,
      PCIN(33) => \buff0_reg__0_n_120\,
      PCIN(32) => \buff0_reg__0_n_121\,
      PCIN(31) => \buff0_reg__0_n_122\,
      PCIN(30) => \buff0_reg__0_n_123\,
      PCIN(29) => \buff0_reg__0_n_124\,
      PCIN(28) => \buff0_reg__0_n_125\,
      PCIN(27) => \buff0_reg__0_n_126\,
      PCIN(26) => \buff0_reg__0_n_127\,
      PCIN(25) => \buff0_reg__0_n_128\,
      PCIN(24) => \buff0_reg__0_n_129\,
      PCIN(23) => \buff0_reg__0_n_130\,
      PCIN(22) => \buff0_reg__0_n_131\,
      PCIN(21) => \buff0_reg__0_n_132\,
      PCIN(20) => \buff0_reg__0_n_133\,
      PCIN(19) => \buff0_reg__0_n_134\,
      PCIN(18) => \buff0_reg__0_n_135\,
      PCIN(17) => \buff0_reg__0_n_136\,
      PCIN(16) => \buff0_reg__0_n_137\,
      PCIN(15) => \buff0_reg__0_n_138\,
      PCIN(14) => \buff0_reg__0_n_139\,
      PCIN(13) => \buff0_reg__0_n_140\,
      PCIN(12) => \buff0_reg__0_n_141\,
      PCIN(11) => \buff0_reg__0_n_142\,
      PCIN(10) => \buff0_reg__0_n_143\,
      PCIN(9) => \buff0_reg__0_n_144\,
      PCIN(8) => \buff0_reg__0_n_145\,
      PCIN(7) => \buff0_reg__0_n_146\,
      PCIN(6) => \buff0_reg__0_n_147\,
      PCIN(5) => \buff0_reg__0_n_148\,
      PCIN(4) => \buff0_reg__0_n_149\,
      PCIN(3) => \buff0_reg__0_n_150\,
      PCIN(2) => \buff0_reg__0_n_151\,
      PCIN(1) => \buff0_reg__0_n_152\,
      PCIN(0) => \buff0_reg__0_n_153\,
      PCOUT(47) => tmp_product_n_106,
      PCOUT(46) => tmp_product_n_107,
      PCOUT(45) => tmp_product_n_108,
      PCOUT(44) => tmp_product_n_109,
      PCOUT(43) => tmp_product_n_110,
      PCOUT(42) => tmp_product_n_111,
      PCOUT(41) => tmp_product_n_112,
      PCOUT(40) => tmp_product_n_113,
      PCOUT(39) => tmp_product_n_114,
      PCOUT(38) => tmp_product_n_115,
      PCOUT(37) => tmp_product_n_116,
      PCOUT(36) => tmp_product_n_117,
      PCOUT(35) => tmp_product_n_118,
      PCOUT(34) => tmp_product_n_119,
      PCOUT(33) => tmp_product_n_120,
      PCOUT(32) => tmp_product_n_121,
      PCOUT(31) => tmp_product_n_122,
      PCOUT(30) => tmp_product_n_123,
      PCOUT(29) => tmp_product_n_124,
      PCOUT(28) => tmp_product_n_125,
      PCOUT(27) => tmp_product_n_126,
      PCOUT(26) => tmp_product_n_127,
      PCOUT(25) => tmp_product_n_128,
      PCOUT(24) => tmp_product_n_129,
      PCOUT(23) => tmp_product_n_130,
      PCOUT(22) => tmp_product_n_131,
      PCOUT(21) => tmp_product_n_132,
      PCOUT(20) => tmp_product_n_133,
      PCOUT(19) => tmp_product_n_134,
      PCOUT(18) => tmp_product_n_135,
      PCOUT(17) => tmp_product_n_136,
      PCOUT(16) => tmp_product_n_137,
      PCOUT(15) => tmp_product_n_138,
      PCOUT(14) => tmp_product_n_139,
      PCOUT(13) => tmp_product_n_140,
      PCOUT(12) => tmp_product_n_141,
      PCOUT(11) => tmp_product_n_142,
      PCOUT(10) => tmp_product_n_143,
      PCOUT(9) => tmp_product_n_144,
      PCOUT(8) => tmp_product_n_145,
      PCOUT(7) => tmp_product_n_146,
      PCOUT(6) => tmp_product_n_147,
      PCOUT(5) => tmp_product_n_148,
      PCOUT(4) => tmp_product_n_149,
      PCOUT(3) => tmp_product_n_150,
      PCOUT(2) => tmp_product_n_151,
      PCOUT(1) => tmp_product_n_152,
      PCOUT(0) => tmp_product_n_153,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_tmp_product_UNDERFLOW_UNCONNECTED
    );
\tmp_product__0\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 0,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16) => sub_ln17_fu_78_p2(17),
      A(15) => sub_ln17_fu_78_p2(17),
      A(14) => sub_ln17_fu_78_p2(17),
      A(13) => sub_ln17_fu_78_p2(17),
      A(12) => sub_ln17_fu_78_p2(17),
      A(11) => sub_ln17_fu_78_p2(17),
      A(10) => sub_ln17_fu_78_p2(17),
      A(9) => sub_ln17_fu_78_p2(17),
      A(8) => sub_ln17_fu_78_p2(17),
      A(7) => sub_ln17_fu_78_p2(17),
      A(6) => sub_ln17_fu_78_p2(17),
      A(5) => sub_ln17_fu_78_p2(17),
      A(4) => sub_ln17_fu_78_p2(17),
      A(3) => sub_ln17_fu_78_p2(17),
      A(2) => sub_ln17_fu_78_p2(17),
      A(1) => sub_ln17_fu_78_p2(17),
      A(0) => sub_ln17_fu_78_p2(17),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_tmp_product__0_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"010010000010101011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_tmp_product__0_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_tmp_product__0_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '0',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_tmp_product__0_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_tmp_product__0_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \buff0_reg__1_n_106\,
      PCIN(46) => \buff0_reg__1_n_107\,
      PCIN(45) => \buff0_reg__1_n_108\,
      PCIN(44) => \buff0_reg__1_n_109\,
      PCIN(43) => \buff0_reg__1_n_110\,
      PCIN(42) => \buff0_reg__1_n_111\,
      PCIN(41) => \buff0_reg__1_n_112\,
      PCIN(40) => \buff0_reg__1_n_113\,
      PCIN(39) => \buff0_reg__1_n_114\,
      PCIN(38) => \buff0_reg__1_n_115\,
      PCIN(37) => \buff0_reg__1_n_116\,
      PCIN(36) => \buff0_reg__1_n_117\,
      PCIN(35) => \buff0_reg__1_n_118\,
      PCIN(34) => \buff0_reg__1_n_119\,
      PCIN(33) => \buff0_reg__1_n_120\,
      PCIN(32) => \buff0_reg__1_n_121\,
      PCIN(31) => \buff0_reg__1_n_122\,
      PCIN(30) => \buff0_reg__1_n_123\,
      PCIN(29) => \buff0_reg__1_n_124\,
      PCIN(28) => \buff0_reg__1_n_125\,
      PCIN(27) => \buff0_reg__1_n_126\,
      PCIN(26) => \buff0_reg__1_n_127\,
      PCIN(25) => \buff0_reg__1_n_128\,
      PCIN(24) => \buff0_reg__1_n_129\,
      PCIN(23) => \buff0_reg__1_n_130\,
      PCIN(22) => \buff0_reg__1_n_131\,
      PCIN(21) => \buff0_reg__1_n_132\,
      PCIN(20) => \buff0_reg__1_n_133\,
      PCIN(19) => \buff0_reg__1_n_134\,
      PCIN(18) => \buff0_reg__1_n_135\,
      PCIN(17) => \buff0_reg__1_n_136\,
      PCIN(16) => \buff0_reg__1_n_137\,
      PCIN(15) => \buff0_reg__1_n_138\,
      PCIN(14) => \buff0_reg__1_n_139\,
      PCIN(13) => \buff0_reg__1_n_140\,
      PCIN(12) => \buff0_reg__1_n_141\,
      PCIN(11) => \buff0_reg__1_n_142\,
      PCIN(10) => \buff0_reg__1_n_143\,
      PCIN(9) => \buff0_reg__1_n_144\,
      PCIN(8) => \buff0_reg__1_n_145\,
      PCIN(7) => \buff0_reg__1_n_146\,
      PCIN(6) => \buff0_reg__1_n_147\,
      PCIN(5) => \buff0_reg__1_n_148\,
      PCIN(4) => \buff0_reg__1_n_149\,
      PCIN(3) => \buff0_reg__1_n_150\,
      PCIN(2) => \buff0_reg__1_n_151\,
      PCIN(1) => \buff0_reg__1_n_152\,
      PCIN(0) => \buff0_reg__1_n_153\,
      PCOUT(47) => \tmp_product__0_n_106\,
      PCOUT(46) => \tmp_product__0_n_107\,
      PCOUT(45) => \tmp_product__0_n_108\,
      PCOUT(44) => \tmp_product__0_n_109\,
      PCOUT(43) => \tmp_product__0_n_110\,
      PCOUT(42) => \tmp_product__0_n_111\,
      PCOUT(41) => \tmp_product__0_n_112\,
      PCOUT(40) => \tmp_product__0_n_113\,
      PCOUT(39) => \tmp_product__0_n_114\,
      PCOUT(38) => \tmp_product__0_n_115\,
      PCOUT(37) => \tmp_product__0_n_116\,
      PCOUT(36) => \tmp_product__0_n_117\,
      PCOUT(35) => \tmp_product__0_n_118\,
      PCOUT(34) => \tmp_product__0_n_119\,
      PCOUT(33) => \tmp_product__0_n_120\,
      PCOUT(32) => \tmp_product__0_n_121\,
      PCOUT(31) => \tmp_product__0_n_122\,
      PCOUT(30) => \tmp_product__0_n_123\,
      PCOUT(29) => \tmp_product__0_n_124\,
      PCOUT(28) => \tmp_product__0_n_125\,
      PCOUT(27) => \tmp_product__0_n_126\,
      PCOUT(26) => \tmp_product__0_n_127\,
      PCOUT(25) => \tmp_product__0_n_128\,
      PCOUT(24) => \tmp_product__0_n_129\,
      PCOUT(23) => \tmp_product__0_n_130\,
      PCOUT(22) => \tmp_product__0_n_131\,
      PCOUT(21) => \tmp_product__0_n_132\,
      PCOUT(20) => \tmp_product__0_n_133\,
      PCOUT(19) => \tmp_product__0_n_134\,
      PCOUT(18) => \tmp_product__0_n_135\,
      PCOUT(17) => \tmp_product__0_n_136\,
      PCOUT(16) => \tmp_product__0_n_137\,
      PCOUT(15) => \tmp_product__0_n_138\,
      PCOUT(14) => \tmp_product__0_n_139\,
      PCOUT(13) => \tmp_product__0_n_140\,
      PCOUT(12) => \tmp_product__0_n_141\,
      PCOUT(11) => \tmp_product__0_n_142\,
      PCOUT(10) => \tmp_product__0_n_143\,
      PCOUT(9) => \tmp_product__0_n_144\,
      PCOUT(8) => \tmp_product__0_n_145\,
      PCOUT(7) => \tmp_product__0_n_146\,
      PCOUT(6) => \tmp_product__0_n_147\,
      PCOUT(5) => \tmp_product__0_n_148\,
      PCOUT(4) => \tmp_product__0_n_149\,
      PCOUT(3) => \tmp_product__0_n_150\,
      PCOUT(2) => \tmp_product__0_n_151\,
      PCOUT(1) => \tmp_product__0_n_152\,
      PCOUT(0) => \tmp_product__0_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_tmp_product__0_UNDERFLOW_UNCONNECTED\
    );
\tmp_product__1\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 0,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16) => sub_ln17_fu_78_p2(17),
      A(15) => sub_ln17_fu_78_p2(17),
      A(14) => sub_ln17_fu_78_p2(17),
      A(13) => sub_ln17_fu_78_p2(17),
      A(12) => sub_ln17_fu_78_p2(17),
      A(11) => sub_ln17_fu_78_p2(17),
      A(10) => sub_ln17_fu_78_p2(17),
      A(9) => sub_ln17_fu_78_p2(17),
      A(8) => sub_ln17_fu_78_p2(17),
      A(7) => sub_ln17_fu_78_p2(17),
      A(6) => sub_ln17_fu_78_p2(17),
      A(5) => sub_ln17_fu_78_p2(17),
      A(4) => sub_ln17_fu_78_p2(17),
      A(3) => sub_ln17_fu_78_p2(17),
      A(2) => sub_ln17_fu_78_p2(17),
      A(1) => sub_ln17_fu_78_p2(17),
      A(0) => sub_ln17_fu_78_p2(17),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_tmp_product__1_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000010000000010011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_tmp_product__1_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_tmp_product__1_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_tmp_product__1_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '0',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_tmp_product__1_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => \NLW_tmp_product__1_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_tmp_product__1_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_tmp_product__1_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_tmp_product__1_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \buff0_reg__2_n_106\,
      PCIN(46) => \buff0_reg__2_n_107\,
      PCIN(45) => \buff0_reg__2_n_108\,
      PCIN(44) => \buff0_reg__2_n_109\,
      PCIN(43) => \buff0_reg__2_n_110\,
      PCIN(42) => \buff0_reg__2_n_111\,
      PCIN(41) => \buff0_reg__2_n_112\,
      PCIN(40) => \buff0_reg__2_n_113\,
      PCIN(39) => \buff0_reg__2_n_114\,
      PCIN(38) => \buff0_reg__2_n_115\,
      PCIN(37) => \buff0_reg__2_n_116\,
      PCIN(36) => \buff0_reg__2_n_117\,
      PCIN(35) => \buff0_reg__2_n_118\,
      PCIN(34) => \buff0_reg__2_n_119\,
      PCIN(33) => \buff0_reg__2_n_120\,
      PCIN(32) => \buff0_reg__2_n_121\,
      PCIN(31) => \buff0_reg__2_n_122\,
      PCIN(30) => \buff0_reg__2_n_123\,
      PCIN(29) => \buff0_reg__2_n_124\,
      PCIN(28) => \buff0_reg__2_n_125\,
      PCIN(27) => \buff0_reg__2_n_126\,
      PCIN(26) => \buff0_reg__2_n_127\,
      PCIN(25) => \buff0_reg__2_n_128\,
      PCIN(24) => \buff0_reg__2_n_129\,
      PCIN(23) => \buff0_reg__2_n_130\,
      PCIN(22) => \buff0_reg__2_n_131\,
      PCIN(21) => \buff0_reg__2_n_132\,
      PCIN(20) => \buff0_reg__2_n_133\,
      PCIN(19) => \buff0_reg__2_n_134\,
      PCIN(18) => \buff0_reg__2_n_135\,
      PCIN(17) => \buff0_reg__2_n_136\,
      PCIN(16) => \buff0_reg__2_n_137\,
      PCIN(15) => \buff0_reg__2_n_138\,
      PCIN(14) => \buff0_reg__2_n_139\,
      PCIN(13) => \buff0_reg__2_n_140\,
      PCIN(12) => \buff0_reg__2_n_141\,
      PCIN(11) => \buff0_reg__2_n_142\,
      PCIN(10) => \buff0_reg__2_n_143\,
      PCIN(9) => \buff0_reg__2_n_144\,
      PCIN(8) => \buff0_reg__2_n_145\,
      PCIN(7) => \buff0_reg__2_n_146\,
      PCIN(6) => \buff0_reg__2_n_147\,
      PCIN(5) => \buff0_reg__2_n_148\,
      PCIN(4) => \buff0_reg__2_n_149\,
      PCIN(3) => \buff0_reg__2_n_150\,
      PCIN(2) => \buff0_reg__2_n_151\,
      PCIN(1) => \buff0_reg__2_n_152\,
      PCIN(0) => \buff0_reg__2_n_153\,
      PCOUT(47) => \tmp_product__1_n_106\,
      PCOUT(46) => \tmp_product__1_n_107\,
      PCOUT(45) => \tmp_product__1_n_108\,
      PCOUT(44) => \tmp_product__1_n_109\,
      PCOUT(43) => \tmp_product__1_n_110\,
      PCOUT(42) => \tmp_product__1_n_111\,
      PCOUT(41) => \tmp_product__1_n_112\,
      PCOUT(40) => \tmp_product__1_n_113\,
      PCOUT(39) => \tmp_product__1_n_114\,
      PCOUT(38) => \tmp_product__1_n_115\,
      PCOUT(37) => \tmp_product__1_n_116\,
      PCOUT(36) => \tmp_product__1_n_117\,
      PCOUT(35) => \tmp_product__1_n_118\,
      PCOUT(34) => \tmp_product__1_n_119\,
      PCOUT(33) => \tmp_product__1_n_120\,
      PCOUT(32) => \tmp_product__1_n_121\,
      PCOUT(31) => \tmp_product__1_n_122\,
      PCOUT(30) => \tmp_product__1_n_123\,
      PCOUT(29) => \tmp_product__1_n_124\,
      PCOUT(28) => \tmp_product__1_n_125\,
      PCOUT(27) => \tmp_product__1_n_126\,
      PCOUT(26) => \tmp_product__1_n_127\,
      PCOUT(25) => \tmp_product__1_n_128\,
      PCOUT(24) => \tmp_product__1_n_129\,
      PCOUT(23) => \tmp_product__1_n_130\,
      PCOUT(22) => \tmp_product__1_n_131\,
      PCOUT(21) => \tmp_product__1_n_132\,
      PCOUT(20) => \tmp_product__1_n_133\,
      PCOUT(19) => \tmp_product__1_n_134\,
      PCOUT(18) => \tmp_product__1_n_135\,
      PCOUT(17) => \tmp_product__1_n_136\,
      PCOUT(16) => \tmp_product__1_n_137\,
      PCOUT(15) => \tmp_product__1_n_138\,
      PCOUT(14) => \tmp_product__1_n_139\,
      PCOUT(13) => \tmp_product__1_n_140\,
      PCOUT(12) => \tmp_product__1_n_141\,
      PCOUT(11) => \tmp_product__1_n_142\,
      PCOUT(10) => \tmp_product__1_n_143\,
      PCOUT(9) => \tmp_product__1_n_144\,
      PCOUT(8) => \tmp_product__1_n_145\,
      PCOUT(7) => \tmp_product__1_n_146\,
      PCOUT(6) => \tmp_product__1_n_147\,
      PCOUT(5) => \tmp_product__1_n_148\,
      PCOUT(4) => \tmp_product__1_n_149\,
      PCOUT(3) => \tmp_product__1_n_150\,
      PCOUT(2) => \tmp_product__1_n_151\,
      PCOUT(1) => \tmp_product__1_n_152\,
      PCOUT(0) => \tmp_product__1_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_tmp_product__1_UNDERFLOW_UNCONNECTED\
    );
\tmp_product__2\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 0,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => sub_ln17_fu_78_p2(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_tmp_product__2_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17 downto 0) => B"000010000000010011",
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_tmp_product__2_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_tmp_product__2_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_tmp_product__2_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '0',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => \NLW_tmp_product__2_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"1010101",
      OVERFLOW => \NLW_tmp_product__2_OVERFLOW_UNCONNECTED\,
      P(47 downto 0) => \NLW_tmp_product__2_P_UNCONNECTED\(47 downto 0),
      PATTERNBDETECT => \NLW_tmp_product__2_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_tmp_product__2_PATTERNDETECT_UNCONNECTED\,
      PCIN(47) => \buff0_reg__3_n_106\,
      PCIN(46) => \buff0_reg__3_n_107\,
      PCIN(45) => \buff0_reg__3_n_108\,
      PCIN(44) => \buff0_reg__3_n_109\,
      PCIN(43) => \buff0_reg__3_n_110\,
      PCIN(42) => \buff0_reg__3_n_111\,
      PCIN(41) => \buff0_reg__3_n_112\,
      PCIN(40) => \buff0_reg__3_n_113\,
      PCIN(39) => \buff0_reg__3_n_114\,
      PCIN(38) => \buff0_reg__3_n_115\,
      PCIN(37) => \buff0_reg__3_n_116\,
      PCIN(36) => \buff0_reg__3_n_117\,
      PCIN(35) => \buff0_reg__3_n_118\,
      PCIN(34) => \buff0_reg__3_n_119\,
      PCIN(33) => \buff0_reg__3_n_120\,
      PCIN(32) => \buff0_reg__3_n_121\,
      PCIN(31) => \buff0_reg__3_n_122\,
      PCIN(30) => \buff0_reg__3_n_123\,
      PCIN(29) => \buff0_reg__3_n_124\,
      PCIN(28) => \buff0_reg__3_n_125\,
      PCIN(27) => \buff0_reg__3_n_126\,
      PCIN(26) => \buff0_reg__3_n_127\,
      PCIN(25) => \buff0_reg__3_n_128\,
      PCIN(24) => \buff0_reg__3_n_129\,
      PCIN(23) => \buff0_reg__3_n_130\,
      PCIN(22) => \buff0_reg__3_n_131\,
      PCIN(21) => \buff0_reg__3_n_132\,
      PCIN(20) => \buff0_reg__3_n_133\,
      PCIN(19) => \buff0_reg__3_n_134\,
      PCIN(18) => \buff0_reg__3_n_135\,
      PCIN(17) => \buff0_reg__3_n_136\,
      PCIN(16) => \buff0_reg__3_n_137\,
      PCIN(15) => \buff0_reg__3_n_138\,
      PCIN(14) => \buff0_reg__3_n_139\,
      PCIN(13) => \buff0_reg__3_n_140\,
      PCIN(12) => \buff0_reg__3_n_141\,
      PCIN(11) => \buff0_reg__3_n_142\,
      PCIN(10) => \buff0_reg__3_n_143\,
      PCIN(9) => \buff0_reg__3_n_144\,
      PCIN(8) => \buff0_reg__3_n_145\,
      PCIN(7) => \buff0_reg__3_n_146\,
      PCIN(6) => \buff0_reg__3_n_147\,
      PCIN(5) => \buff0_reg__3_n_148\,
      PCIN(4) => \buff0_reg__3_n_149\,
      PCIN(3) => \buff0_reg__3_n_150\,
      PCIN(2) => \buff0_reg__3_n_151\,
      PCIN(1) => \buff0_reg__3_n_152\,
      PCIN(0) => \buff0_reg__3_n_153\,
      PCOUT(47) => \tmp_product__2_n_106\,
      PCOUT(46) => \tmp_product__2_n_107\,
      PCOUT(45) => \tmp_product__2_n_108\,
      PCOUT(44) => \tmp_product__2_n_109\,
      PCOUT(43) => \tmp_product__2_n_110\,
      PCOUT(42) => \tmp_product__2_n_111\,
      PCOUT(41) => \tmp_product__2_n_112\,
      PCOUT(40) => \tmp_product__2_n_113\,
      PCOUT(39) => \tmp_product__2_n_114\,
      PCOUT(38) => \tmp_product__2_n_115\,
      PCOUT(37) => \tmp_product__2_n_116\,
      PCOUT(36) => \tmp_product__2_n_117\,
      PCOUT(35) => \tmp_product__2_n_118\,
      PCOUT(34) => \tmp_product__2_n_119\,
      PCOUT(33) => \tmp_product__2_n_120\,
      PCOUT(32) => \tmp_product__2_n_121\,
      PCOUT(31) => \tmp_product__2_n_122\,
      PCOUT(30) => \tmp_product__2_n_123\,
      PCOUT(29) => \tmp_product__2_n_124\,
      PCOUT(28) => \tmp_product__2_n_125\,
      PCOUT(27) => \tmp_product__2_n_126\,
      PCOUT(26) => \tmp_product__2_n_127\,
      PCOUT(25) => \tmp_product__2_n_128\,
      PCOUT(24) => \tmp_product__2_n_129\,
      PCOUT(23) => \tmp_product__2_n_130\,
      PCOUT(22) => \tmp_product__2_n_131\,
      PCOUT(21) => \tmp_product__2_n_132\,
      PCOUT(20) => \tmp_product__2_n_133\,
      PCOUT(19) => \tmp_product__2_n_134\,
      PCOUT(18) => \tmp_product__2_n_135\,
      PCOUT(17) => \tmp_product__2_n_136\,
      PCOUT(16) => \tmp_product__2_n_137\,
      PCOUT(15) => \tmp_product__2_n_138\,
      PCOUT(14) => \tmp_product__2_n_139\,
      PCOUT(13) => \tmp_product__2_n_140\,
      PCOUT(12) => \tmp_product__2_n_141\,
      PCOUT(11) => \tmp_product__2_n_142\,
      PCOUT(10) => \tmp_product__2_n_143\,
      PCOUT(9) => \tmp_product__2_n_144\,
      PCOUT(8) => \tmp_product__2_n_145\,
      PCOUT(7) => \tmp_product__2_n_146\,
      PCOUT(6) => \tmp_product__2_n_147\,
      PCOUT(5) => \tmp_product__2_n_148\,
      PCOUT(4) => \tmp_product__2_n_149\,
      PCOUT(3) => \tmp_product__2_n_150\,
      PCOUT(2) => \tmp_product__2_n_151\,
      PCOUT(1) => \tmp_product__2_n_152\,
      PCOUT(0) => \tmp_product__2_n_153\,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => \NLW_tmp_product__2_UNDERFLOW_UNCONNECTED\
    );
tmp_product_i_1: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_2_n_0,
      CO(3) => NLW_tmp_product_i_1_CO_UNCONNECTED(3),
      CO(2) => tmp_product_i_1_n_1,
      CO(1) => tmp_product_i_1_n_2,
      CO(0) => tmp_product_i_1_n_3,
      CYINIT => '0',
      DI(3) => '0',
      DI(2) => tmp_product_i_3_n_0,
      DI(1) => tmp_product_i_4_n_0,
      DI(0) => tmp_product_i_5_n_0,
      O(3 downto 0) => buff0_reg_0(7 downto 4),
      S(3) => tmp_product_i_6_n_0,
      S(2) => tmp_product_i_7_n_0,
      S(1) => tmp_product_i_8_n_0,
      S(0) => tmp_product_i_9_n_0
    );
tmp_product_i_10: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_21_n_0,
      CO(3) => tmp_product_i_10_n_0,
      CO(2) => tmp_product_i_10_n_1,
      CO(1) => tmp_product_i_10_n_2,
      CO(0) => tmp_product_i_10_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_22_n_0,
      DI(2) => tmp_product_i_23_n_0,
      DI(1) => tmp_product_i_24_n_0,
      DI(0) => tmp_product_i_25_n_0,
      O(3 downto 0) => NLW_tmp_product_i_10_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_26_n_0,
      S(2) => tmp_product_i_27_n_0,
      S(1) => tmp_product_i_28_n_0,
      S(0) => tmp_product_i_29_n_0
    );
tmp_product_i_100: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_110_n_0,
      CO(3) => tmp_product_i_100_n_0,
      CO(2) => tmp_product_i_100_n_1,
      CO(1) => tmp_product_i_100_n_2,
      CO(0) => tmp_product_i_100_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_111_n_0,
      DI(2) => \buff1_reg__2_n_71\,
      DI(1) => \buff1_reg__2_n_72\,
      DI(0) => \buff1_reg__2_n_73\,
      O(3) => tmp_product_i_100_n_4,
      O(2) => tmp_product_i_100_n_5,
      O(1) => tmp_product_i_100_n_6,
      O(0) => NLW_tmp_product_i_100_O_UNCONNECTED(0),
      S(3) => tmp_product_i_112_n_0,
      S(2) => tmp_product_i_113_n_0,
      S(1) => tmp_product_i_114_n_0,
      S(0) => tmp_product_i_115_n_0
    );
tmp_product_i_101: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_100_n_0,
      CO(3) => tmp_product_i_101_n_0,
      CO(2) => tmp_product_i_101_n_1,
      CO(1) => tmp_product_i_101_n_2,
      CO(0) => tmp_product_i_101_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_116_n_0,
      DI(2) => tmp_product_i_117_n_0,
      DI(1) => tmp_product_i_118_n_0,
      DI(0) => tmp_product_i_119_n_0,
      O(3) => tmp_product_i_101_n_4,
      O(2) => tmp_product_i_101_n_5,
      O(1) => tmp_product_i_101_n_6,
      O(0) => tmp_product_i_101_n_7,
      S(3) => tmp_product_i_120_n_0,
      S(2) => tmp_product_i_121_n_0,
      S(1) => tmp_product_i_122_n_0,
      S(0) => tmp_product_i_123_n_0
    );
tmp_product_i_102: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_97\,
      I1 => \buff1_reg__1_n_80\,
      I2 => \buff1_reg__2_n_63\,
      O => tmp_product_i_102_n_0
    );
tmp_product_i_103: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_98\,
      I1 => \buff1_reg__1_n_81\,
      I2 => \buff1_reg__2_n_64\,
      O => tmp_product_i_103_n_0
    );
tmp_product_i_104: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_99\,
      I1 => \buff1_reg__1_n_82\,
      I2 => \buff1_reg__2_n_65\,
      O => tmp_product_i_104_n_0
    );
tmp_product_i_105: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_100\,
      I1 => \buff1_reg__1_n_83\,
      I2 => \buff1_reg__2_n_66\,
      O => tmp_product_i_105_n_0
    );
tmp_product_i_106: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_96\,
      I1 => \buff1_reg__1_n_79\,
      I2 => \buff1_reg__2_n_62\,
      I3 => tmp_product_i_102_n_0,
      O => tmp_product_i_106_n_0
    );
tmp_product_i_107: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_97\,
      I1 => \buff1_reg__1_n_80\,
      I2 => \buff1_reg__2_n_63\,
      I3 => tmp_product_i_103_n_0,
      O => tmp_product_i_107_n_0
    );
tmp_product_i_108: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_98\,
      I1 => \buff1_reg__1_n_81\,
      I2 => \buff1_reg__2_n_64\,
      I3 => tmp_product_i_104_n_0,
      O => tmp_product_i_108_n_0
    );
tmp_product_i_109: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_99\,
      I1 => \buff1_reg__1_n_82\,
      I2 => \buff1_reg__2_n_65\,
      I3 => tmp_product_i_105_n_0,
      O => tmp_product_i_109_n_0
    );
tmp_product_i_11: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_30_n_4,
      I1 => buff0_reg_n_97,
      I2 => buff1_reg_n_97,
      O => tmp_product_i_11_n_0
    );
tmp_product_i_110: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_124_n_0,
      CO(3) => tmp_product_i_110_n_0,
      CO(2) => tmp_product_i_110_n_1,
      CO(1) => tmp_product_i_110_n_2,
      CO(0) => tmp_product_i_110_n_3,
      CYINIT => '0',
      DI(3) => \buff1_reg__2_n_74\,
      DI(2) => \buff1_reg__2_n_75\,
      DI(1) => \buff1_reg__2_n_76\,
      DI(0) => \buff1_reg__2_n_77\,
      O(3 downto 0) => NLW_tmp_product_i_110_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_125_n_0,
      S(2) => tmp_product_i_126_n_0,
      S(1) => tmp_product_i_127_n_0,
      S(0) => tmp_product_i_128_n_0
    );
tmp_product_i_111: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => \buff1_reg__2_n_70\,
      I1 => \buff1_reg__0_n_104\,
      I2 => \buff1_reg__1_n_87\,
      O => tmp_product_i_111_n_0
    );
tmp_product_i_112: unisim.vcomponents.LUT5
    generic map(
      INIT => X"69969696"
    )
        port map (
      I0 => \buff1_reg__0_n_104\,
      I1 => \buff1_reg__1_n_87\,
      I2 => \buff1_reg__2_n_70\,
      I3 => \buff1_reg__1_n_88\,
      I4 => \buff1_reg__0_n_105\,
      O => tmp_product_i_112_n_0
    );
tmp_product_i_113: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => \buff1_reg__0_n_105\,
      I1 => \buff1_reg__1_n_88\,
      I2 => \buff1_reg__2_n_71\,
      O => tmp_product_i_113_n_0
    );
tmp_product_i_114: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_72\,
      I1 => \buff1_reg__1_n_89\,
      O => tmp_product_i_114_n_0
    );
tmp_product_i_115: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_73\,
      I1 => \buff1_reg__1_n_90\,
      O => tmp_product_i_115_n_0
    );
tmp_product_i_116: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_101\,
      I1 => \buff1_reg__1_n_84\,
      I2 => \buff1_reg__2_n_67\,
      O => tmp_product_i_116_n_0
    );
tmp_product_i_117: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_102\,
      I1 => \buff1_reg__1_n_85\,
      I2 => \buff1_reg__2_n_68\,
      O => tmp_product_i_117_n_0
    );
tmp_product_i_118: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_103\,
      I1 => \buff1_reg__1_n_86\,
      I2 => \buff1_reg__2_n_69\,
      O => tmp_product_i_118_n_0
    );
tmp_product_i_119: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_104\,
      I1 => \buff1_reg__1_n_87\,
      I2 => \buff1_reg__2_n_70\,
      O => tmp_product_i_119_n_0
    );
tmp_product_i_12: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_30_n_5,
      I1 => buff0_reg_n_98,
      I2 => buff1_reg_n_98,
      O => tmp_product_i_12_n_0
    );
tmp_product_i_120: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_100\,
      I1 => \buff1_reg__1_n_83\,
      I2 => \buff1_reg__2_n_66\,
      I3 => tmp_product_i_116_n_0,
      O => tmp_product_i_120_n_0
    );
tmp_product_i_121: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_101\,
      I1 => \buff1_reg__1_n_84\,
      I2 => \buff1_reg__2_n_67\,
      I3 => tmp_product_i_117_n_0,
      O => tmp_product_i_121_n_0
    );
tmp_product_i_122: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_102\,
      I1 => \buff1_reg__1_n_85\,
      I2 => \buff1_reg__2_n_68\,
      I3 => tmp_product_i_118_n_0,
      O => tmp_product_i_122_n_0
    );
tmp_product_i_123: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_103\,
      I1 => \buff1_reg__1_n_86\,
      I2 => \buff1_reg__2_n_69\,
      I3 => tmp_product_i_119_n_0,
      O => tmp_product_i_123_n_0
    );
tmp_product_i_124: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_129_n_0,
      CO(3) => tmp_product_i_124_n_0,
      CO(2) => tmp_product_i_124_n_1,
      CO(1) => tmp_product_i_124_n_2,
      CO(0) => tmp_product_i_124_n_3,
      CYINIT => '0',
      DI(3) => \buff1_reg__2_n_78\,
      DI(2) => \buff1_reg__2_n_79\,
      DI(1) => \buff1_reg__2_n_80\,
      DI(0) => \buff1_reg__2_n_81\,
      O(3 downto 0) => NLW_tmp_product_i_124_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_130_n_0,
      S(2) => tmp_product_i_131_n_0,
      S(1) => tmp_product_i_132_n_0,
      S(0) => tmp_product_i_133_n_0
    );
tmp_product_i_125: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_74\,
      I1 => \buff1_reg__1_n_91\,
      O => tmp_product_i_125_n_0
    );
tmp_product_i_126: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_75\,
      I1 => \buff1_reg__1_n_92\,
      O => tmp_product_i_126_n_0
    );
tmp_product_i_127: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_76\,
      I1 => \buff1_reg__1_n_93\,
      O => tmp_product_i_127_n_0
    );
tmp_product_i_128: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_77\,
      I1 => \buff1_reg__1_n_94\,
      O => tmp_product_i_128_n_0
    );
tmp_product_i_129: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_134_n_0,
      CO(3) => tmp_product_i_129_n_0,
      CO(2) => tmp_product_i_129_n_1,
      CO(1) => tmp_product_i_129_n_2,
      CO(0) => tmp_product_i_129_n_3,
      CYINIT => '0',
      DI(3) => \buff1_reg__2_n_82\,
      DI(2) => \buff1_reg__2_n_83\,
      DI(1) => \buff1_reg__2_n_84\,
      DI(0) => \buff1_reg__2_n_85\,
      O(3 downto 0) => NLW_tmp_product_i_129_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_135_n_0,
      S(2) => tmp_product_i_136_n_0,
      S(1) => tmp_product_i_137_n_0,
      S(0) => tmp_product_i_138_n_0
    );
tmp_product_i_13: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_30_n_6,
      I1 => buff0_reg_n_99,
      I2 => buff1_reg_n_99,
      O => tmp_product_i_13_n_0
    );
tmp_product_i_130: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_78\,
      I1 => \buff1_reg__1_n_95\,
      O => tmp_product_i_130_n_0
    );
tmp_product_i_131: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_79\,
      I1 => \buff1_reg__1_n_96\,
      O => tmp_product_i_131_n_0
    );
tmp_product_i_132: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_80\,
      I1 => \buff1_reg__1_n_97\,
      O => tmp_product_i_132_n_0
    );
tmp_product_i_133: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_81\,
      I1 => \buff1_reg__1_n_98\,
      O => tmp_product_i_133_n_0
    );
tmp_product_i_134: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => tmp_product_i_134_n_0,
      CO(2) => tmp_product_i_134_n_1,
      CO(1) => tmp_product_i_134_n_2,
      CO(0) => tmp_product_i_134_n_3,
      CYINIT => '0',
      DI(3) => \buff1_reg__2_n_86\,
      DI(2) => \buff1_reg__2_n_87\,
      DI(1) => \buff1_reg__2_n_88\,
      DI(0) => '0',
      O(3 downto 0) => NLW_tmp_product_i_134_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_139_n_0,
      S(2) => tmp_product_i_140_n_0,
      S(1) => tmp_product_i_141_n_0,
      S(0) => \buff1_reg__2_n_89\
    );
tmp_product_i_135: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_82\,
      I1 => \buff1_reg__1_n_99\,
      O => tmp_product_i_135_n_0
    );
tmp_product_i_136: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_83\,
      I1 => \buff1_reg__1_n_100\,
      O => tmp_product_i_136_n_0
    );
tmp_product_i_137: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_84\,
      I1 => \buff1_reg__1_n_101\,
      O => tmp_product_i_137_n_0
    );
tmp_product_i_138: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_85\,
      I1 => \buff1_reg__1_n_102\,
      O => tmp_product_i_138_n_0
    );
tmp_product_i_139: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_86\,
      I1 => \buff1_reg__1_n_103\,
      O => tmp_product_i_139_n_0
    );
tmp_product_i_14: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_30_n_7,
      I1 => buff0_reg_n_100,
      I2 => buff1_reg_n_100,
      O => tmp_product_i_14_n_0
    );
tmp_product_i_140: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_87\,
      I1 => \buff1_reg__1_n_104\,
      O => tmp_product_i_140_n_0
    );
tmp_product_i_141: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg__2_n_88\,
      I1 => \buff1_reg__1_n_105\,
      O => tmp_product_i_141_n_0
    );
tmp_product_i_15: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_19_n_7,
      I1 => buff0_reg_n_96,
      I2 => buff1_reg_n_96,
      I3 => tmp_product_i_11_n_0,
      O => tmp_product_i_15_n_0
    );
tmp_product_i_16: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_30_n_4,
      I1 => buff0_reg_n_97,
      I2 => buff1_reg_n_97,
      I3 => tmp_product_i_12_n_0,
      O => tmp_product_i_16_n_0
    );
tmp_product_i_17: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_30_n_5,
      I1 => buff0_reg_n_98,
      I2 => buff1_reg_n_98,
      I3 => tmp_product_i_13_n_0,
      O => tmp_product_i_17_n_0
    );
tmp_product_i_18: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_30_n_6,
      I1 => buff0_reg_n_99,
      I2 => buff1_reg_n_99,
      I3 => tmp_product_i_14_n_0,
      O => tmp_product_i_18_n_0
    );
tmp_product_i_19: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_30_n_0,
      CO(3) => tmp_product_i_19_n_0,
      CO(2) => tmp_product_i_19_n_1,
      CO(1) => tmp_product_i_19_n_2,
      CO(0) => tmp_product_i_19_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_31_n_0,
      DI(2) => tmp_product_i_32_n_0,
      DI(1) => tmp_product_i_33_n_0,
      DI(0) => tmp_product_i_34_n_0,
      O(3) => tmp_product_i_19_n_4,
      O(2) => tmp_product_i_19_n_5,
      O(1) => tmp_product_i_19_n_6,
      O(0) => tmp_product_i_19_n_7,
      S(3) => tmp_product_i_35_n_0,
      S(2) => tmp_product_i_36_n_0,
      S(1) => tmp_product_i_37_n_0,
      S(0) => tmp_product_i_38_n_0
    );
tmp_product_i_2: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_10_n_0,
      CO(3) => tmp_product_i_2_n_0,
      CO(2) => tmp_product_i_2_n_1,
      CO(1) => tmp_product_i_2_n_2,
      CO(0) => tmp_product_i_2_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_11_n_0,
      DI(2) => tmp_product_i_12_n_0,
      DI(1) => tmp_product_i_13_n_0,
      DI(0) => tmp_product_i_14_n_0,
      O(3 downto 0) => buff0_reg_0(3 downto 0),
      S(3) => tmp_product_i_15_n_0,
      S(2) => tmp_product_i_16_n_0,
      S(1) => tmp_product_i_17_n_0,
      S(0) => tmp_product_i_18_n_0
    );
tmp_product_i_20: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_19_n_0,
      CO(3 downto 0) => NLW_tmp_product_i_20_CO_UNCONNECTED(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => NLW_tmp_product_i_20_O_UNCONNECTED(3 downto 1),
      O(0) => tmp_product_i_20_n_7,
      S(3 downto 1) => B"000",
      S(0) => tmp_product_i_39_n_0
    );
tmp_product_i_21: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_40_n_0,
      CO(3) => tmp_product_i_21_n_0,
      CO(2) => tmp_product_i_21_n_1,
      CO(1) => tmp_product_i_21_n_2,
      CO(0) => tmp_product_i_21_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_41_n_0,
      DI(2) => buff1_reg_n_105,
      DI(1) => \buff1_reg[16]__0_n_0\,
      DI(0) => \buff1_reg[15]__0_n_0\,
      O(3 downto 0) => NLW_tmp_product_i_21_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_42_n_0,
      S(2) => tmp_product_i_43_n_0,
      S(1) => tmp_product_i_44_n_0,
      S(0) => tmp_product_i_45_n_0
    );
tmp_product_i_22: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_46_n_4,
      I1 => buff0_reg_n_101,
      I2 => buff1_reg_n_101,
      O => tmp_product_i_22_n_0
    );
tmp_product_i_23: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_46_n_5,
      I1 => buff0_reg_n_102,
      I2 => buff1_reg_n_102,
      O => tmp_product_i_23_n_0
    );
tmp_product_i_24: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_46_n_6,
      I1 => buff0_reg_n_103,
      I2 => buff1_reg_n_103,
      O => tmp_product_i_24_n_0
    );
tmp_product_i_25: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_46_n_7,
      I1 => buff0_reg_n_104,
      I2 => buff1_reg_n_104,
      O => tmp_product_i_25_n_0
    );
tmp_product_i_26: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_30_n_7,
      I1 => buff0_reg_n_100,
      I2 => buff1_reg_n_100,
      I3 => tmp_product_i_22_n_0,
      O => tmp_product_i_26_n_0
    );
tmp_product_i_27: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_46_n_4,
      I1 => buff0_reg_n_101,
      I2 => buff1_reg_n_101,
      I3 => tmp_product_i_23_n_0,
      O => tmp_product_i_27_n_0
    );
tmp_product_i_28: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_46_n_5,
      I1 => buff0_reg_n_102,
      I2 => buff1_reg_n_102,
      I3 => tmp_product_i_24_n_0,
      O => tmp_product_i_28_n_0
    );
tmp_product_i_29: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_46_n_6,
      I1 => buff0_reg_n_103,
      I2 => buff1_reg_n_103,
      I3 => tmp_product_i_25_n_0,
      O => tmp_product_i_29_n_0
    );
tmp_product_i_3: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_19_n_5,
      I1 => buff0_reg_n_94,
      I2 => buff1_reg_n_94,
      O => tmp_product_i_3_n_0
    );
tmp_product_i_30: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_46_n_0,
      CO(3) => tmp_product_i_30_n_0,
      CO(2) => tmp_product_i_30_n_1,
      CO(1) => tmp_product_i_30_n_2,
      CO(0) => tmp_product_i_30_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_47_n_0,
      DI(2) => tmp_product_i_48_n_0,
      DI(1) => tmp_product_i_49_n_0,
      DI(0) => tmp_product_i_50_n_0,
      O(3) => tmp_product_i_30_n_4,
      O(2) => tmp_product_i_30_n_5,
      O(1) => tmp_product_i_30_n_6,
      O(0) => tmp_product_i_30_n_7,
      S(3) => tmp_product_i_51_n_0,
      S(2) => tmp_product_i_52_n_0,
      S(1) => tmp_product_i_53_n_0,
      S(0) => tmp_product_i_54_n_0
    );
tmp_product_i_31: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_78\,
      I1 => \buff1_reg__1_n_61\,
      I2 => \buff1_reg__0_n_77\,
      I3 => \buff1_reg__1_n_60\,
      O => tmp_product_i_31_n_0
    );
tmp_product_i_32: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_79\,
      I1 => \buff1_reg__1_n_62\,
      I2 => \buff1_reg__0_n_78\,
      I3 => \buff1_reg__1_n_61\,
      O => tmp_product_i_32_n_0
    );
tmp_product_i_33: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_80\,
      I1 => \buff1_reg__1_n_63\,
      I2 => \buff1_reg__0_n_79\,
      I3 => \buff1_reg__1_n_62\,
      O => tmp_product_i_33_n_0
    );
tmp_product_i_34: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_81\,
      I1 => \buff1_reg__1_n_64\,
      I2 => \buff1_reg__0_n_80\,
      I3 => \buff1_reg__1_n_63\,
      O => tmp_product_i_34_n_0
    );
tmp_product_i_35: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_61\,
      I1 => \buff1_reg__0_n_78\,
      I2 => \buff1_reg__1_n_59\,
      I3 => \buff1_reg__0_n_76\,
      I4 => \buff1_reg__1_n_60\,
      I5 => \buff1_reg__0_n_77\,
      O => tmp_product_i_35_n_0
    );
tmp_product_i_36: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_62\,
      I1 => \buff1_reg__0_n_79\,
      I2 => \buff1_reg__1_n_60\,
      I3 => \buff1_reg__0_n_77\,
      I4 => \buff1_reg__1_n_61\,
      I5 => \buff1_reg__0_n_78\,
      O => tmp_product_i_36_n_0
    );
tmp_product_i_37: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_63\,
      I1 => \buff1_reg__0_n_80\,
      I2 => \buff1_reg__1_n_61\,
      I3 => \buff1_reg__0_n_78\,
      I4 => \buff1_reg__1_n_62\,
      I5 => \buff1_reg__0_n_79\,
      O => tmp_product_i_37_n_0
    );
tmp_product_i_38: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_64\,
      I1 => \buff1_reg__0_n_81\,
      I2 => \buff1_reg__1_n_62\,
      I3 => \buff1_reg__0_n_79\,
      I4 => \buff1_reg__1_n_63\,
      I5 => \buff1_reg__0_n_80\,
      O => tmp_product_i_38_n_0
    );
tmp_product_i_39: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_60\,
      I1 => \buff1_reg__0_n_77\,
      I2 => \buff1_reg__1_n_58\,
      I3 => \buff1_reg__0_n_75\,
      I4 => \buff1_reg__1_n_59\,
      I5 => \buff1_reg__0_n_76\,
      O => tmp_product_i_39_n_0
    );
tmp_product_i_4: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_19_n_6,
      I1 => buff0_reg_n_95,
      I2 => buff1_reg_n_95,
      O => tmp_product_i_4_n_0
    );
tmp_product_i_40: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_55_n_0,
      CO(3) => tmp_product_i_40_n_0,
      CO(2) => tmp_product_i_40_n_1,
      CO(1) => tmp_product_i_40_n_2,
      CO(0) => tmp_product_i_40_n_3,
      CYINIT => '0',
      DI(3) => \buff1_reg[14]__0_n_0\,
      DI(2) => \buff1_reg[13]__0_n_0\,
      DI(1) => \buff1_reg[12]__0_n_0\,
      DI(0) => \buff1_reg[11]__0_n_0\,
      O(3 downto 0) => NLW_tmp_product_i_40_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_56_n_0,
      S(2) => tmp_product_i_57_n_0,
      S(1) => tmp_product_i_58_n_0,
      S(0) => tmp_product_i_59_n_0
    );
tmp_product_i_41: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => buff1_reg_n_104,
      I1 => tmp_product_i_46_n_7,
      I2 => buff0_reg_n_104,
      O => tmp_product_i_41_n_0
    );
tmp_product_i_42: unisim.vcomponents.LUT5
    generic map(
      INIT => X"69969696"
    )
        port map (
      I0 => tmp_product_i_46_n_7,
      I1 => buff0_reg_n_104,
      I2 => buff1_reg_n_104,
      I3 => buff0_reg_n_105,
      I4 => tmp_product_i_60_n_4,
      O => tmp_product_i_42_n_0
    );
tmp_product_i_43: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => tmp_product_i_60_n_4,
      I1 => buff0_reg_n_105,
      I2 => buff1_reg_n_105,
      O => tmp_product_i_43_n_0
    );
tmp_product_i_44: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[16]__0_n_0\,
      I1 => tmp_product_i_60_n_5,
      O => tmp_product_i_44_n_0
    );
tmp_product_i_45: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[15]__0_n_0\,
      I1 => tmp_product_i_60_n_6,
      O => tmp_product_i_45_n_0
    );
tmp_product_i_46: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_60_n_0,
      CO(3) => tmp_product_i_46_n_0,
      CO(2) => tmp_product_i_46_n_1,
      CO(1) => tmp_product_i_46_n_2,
      CO(0) => tmp_product_i_46_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_61_n_0,
      DI(2) => tmp_product_i_62_n_0,
      DI(1) => tmp_product_i_63_n_0,
      DI(0) => tmp_product_i_64_n_0,
      O(3) => tmp_product_i_46_n_4,
      O(2) => tmp_product_i_46_n_5,
      O(1) => tmp_product_i_46_n_6,
      O(0) => tmp_product_i_46_n_7,
      S(3) => tmp_product_i_65_n_0,
      S(2) => tmp_product_i_66_n_0,
      S(1) => tmp_product_i_67_n_0,
      S(0) => tmp_product_i_68_n_0
    );
tmp_product_i_47: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_82\,
      I1 => \buff1_reg__1_n_65\,
      I2 => \buff1_reg__0_n_81\,
      I3 => \buff1_reg__1_n_64\,
      O => tmp_product_i_47_n_0
    );
tmp_product_i_48: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_83\,
      I1 => \buff1_reg__1_n_66\,
      I2 => \buff1_reg__0_n_82\,
      I3 => \buff1_reg__1_n_65\,
      O => tmp_product_i_48_n_0
    );
tmp_product_i_49: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_84\,
      I1 => \buff1_reg__1_n_67\,
      I2 => \buff1_reg__0_n_83\,
      I3 => \buff1_reg__1_n_66\,
      O => tmp_product_i_49_n_0
    );
tmp_product_i_5: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => tmp_product_i_19_n_7,
      I1 => buff0_reg_n_96,
      I2 => buff1_reg_n_96,
      O => tmp_product_i_5_n_0
    );
tmp_product_i_50: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_85\,
      I1 => \buff1_reg__1_n_68\,
      I2 => \buff1_reg__0_n_84\,
      I3 => \buff1_reg__1_n_67\,
      O => tmp_product_i_50_n_0
    );
tmp_product_i_51: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_65\,
      I1 => \buff1_reg__0_n_82\,
      I2 => \buff1_reg__1_n_63\,
      I3 => \buff1_reg__0_n_80\,
      I4 => \buff1_reg__1_n_64\,
      I5 => \buff1_reg__0_n_81\,
      O => tmp_product_i_51_n_0
    );
tmp_product_i_52: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_66\,
      I1 => \buff1_reg__0_n_83\,
      I2 => \buff1_reg__1_n_64\,
      I3 => \buff1_reg__0_n_81\,
      I4 => \buff1_reg__1_n_65\,
      I5 => \buff1_reg__0_n_82\,
      O => tmp_product_i_52_n_0
    );
tmp_product_i_53: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_67\,
      I1 => \buff1_reg__0_n_84\,
      I2 => \buff1_reg__1_n_65\,
      I3 => \buff1_reg__0_n_82\,
      I4 => \buff1_reg__1_n_66\,
      I5 => \buff1_reg__0_n_83\,
      O => tmp_product_i_53_n_0
    );
tmp_product_i_54: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_68\,
      I1 => \buff1_reg__0_n_85\,
      I2 => \buff1_reg__1_n_66\,
      I3 => \buff1_reg__0_n_83\,
      I4 => \buff1_reg__1_n_67\,
      I5 => \buff1_reg__0_n_84\,
      O => tmp_product_i_54_n_0
    );
tmp_product_i_55: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_69_n_0,
      CO(3) => tmp_product_i_55_n_0,
      CO(2) => tmp_product_i_55_n_1,
      CO(1) => tmp_product_i_55_n_2,
      CO(0) => tmp_product_i_55_n_3,
      CYINIT => '0',
      DI(3) => \buff1_reg[10]__0_n_0\,
      DI(2) => \buff1_reg[9]__0_n_0\,
      DI(1) => \buff1_reg[8]__0_n_0\,
      DI(0) => \buff1_reg[7]__0_n_0\,
      O(3 downto 0) => NLW_tmp_product_i_55_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_70_n_0,
      S(2) => tmp_product_i_71_n_0,
      S(1) => tmp_product_i_72_n_0,
      S(0) => tmp_product_i_73_n_0
    );
tmp_product_i_56: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[14]__0_n_0\,
      I1 => tmp_product_i_60_n_7,
      O => tmp_product_i_56_n_0
    );
tmp_product_i_57: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[13]__0_n_0\,
      I1 => tmp_product_i_74_n_4,
      O => tmp_product_i_57_n_0
    );
tmp_product_i_58: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[12]__0_n_0\,
      I1 => tmp_product_i_74_n_5,
      O => tmp_product_i_58_n_0
    );
tmp_product_i_59: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[11]__0_n_0\,
      I1 => tmp_product_i_74_n_6,
      O => tmp_product_i_59_n_0
    );
tmp_product_i_6: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => buff1_reg_n_93,
      I1 => buff0_reg_n_93,
      I2 => tmp_product_i_19_n_4,
      I3 => buff0_reg_n_92,
      I4 => tmp_product_i_20_n_7,
      I5 => buff1_reg_n_92,
      O => tmp_product_i_6_n_0
    );
tmp_product_i_60: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_74_n_0,
      CO(3) => tmp_product_i_60_n_0,
      CO(2) => tmp_product_i_60_n_1,
      CO(1) => tmp_product_i_60_n_2,
      CO(0) => tmp_product_i_60_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_75_n_0,
      DI(2) => tmp_product_i_76_n_0,
      DI(1) => tmp_product_i_77_n_0,
      DI(0) => tmp_product_i_78_n_0,
      O(3) => tmp_product_i_60_n_4,
      O(2) => tmp_product_i_60_n_5,
      O(1) => tmp_product_i_60_n_6,
      O(0) => tmp_product_i_60_n_7,
      S(3) => tmp_product_i_79_n_0,
      S(2) => tmp_product_i_80_n_0,
      S(1) => tmp_product_i_81_n_0,
      S(0) => tmp_product_i_82_n_0
    );
tmp_product_i_61: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_86\,
      I1 => \buff1_reg__1_n_69\,
      I2 => \buff1_reg__0_n_85\,
      I3 => \buff1_reg__1_n_68\,
      O => tmp_product_i_61_n_0
    );
tmp_product_i_62: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_87\,
      I1 => \buff1_reg__1_n_70\,
      I2 => \buff1_reg__0_n_86\,
      I3 => \buff1_reg__1_n_69\,
      O => tmp_product_i_62_n_0
    );
tmp_product_i_63: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_88\,
      I1 => \buff1_reg__1_n_71\,
      I2 => \buff1_reg__0_n_87\,
      I3 => \buff1_reg__1_n_70\,
      O => tmp_product_i_63_n_0
    );
tmp_product_i_64: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_89\,
      I1 => \buff1_reg__1_n_72\,
      I2 => \buff1_reg__0_n_88\,
      I3 => \buff1_reg__1_n_71\,
      O => tmp_product_i_64_n_0
    );
tmp_product_i_65: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_69\,
      I1 => \buff1_reg__0_n_86\,
      I2 => \buff1_reg__1_n_67\,
      I3 => \buff1_reg__0_n_84\,
      I4 => \buff1_reg__1_n_68\,
      I5 => \buff1_reg__0_n_85\,
      O => tmp_product_i_65_n_0
    );
tmp_product_i_66: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_70\,
      I1 => \buff1_reg__0_n_87\,
      I2 => \buff1_reg__1_n_68\,
      I3 => \buff1_reg__0_n_85\,
      I4 => \buff1_reg__1_n_69\,
      I5 => \buff1_reg__0_n_86\,
      O => tmp_product_i_66_n_0
    );
tmp_product_i_67: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_71\,
      I1 => \buff1_reg__0_n_88\,
      I2 => \buff1_reg__1_n_69\,
      I3 => \buff1_reg__0_n_86\,
      I4 => \buff1_reg__1_n_70\,
      I5 => \buff1_reg__0_n_87\,
      O => tmp_product_i_67_n_0
    );
tmp_product_i_68: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_72\,
      I1 => \buff1_reg__0_n_89\,
      I2 => \buff1_reg__1_n_70\,
      I3 => \buff1_reg__0_n_87\,
      I4 => \buff1_reg__1_n_71\,
      I5 => \buff1_reg__0_n_88\,
      O => tmp_product_i_68_n_0
    );
tmp_product_i_69: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_83_n_0,
      CO(3) => tmp_product_i_69_n_0,
      CO(2) => tmp_product_i_69_n_1,
      CO(1) => tmp_product_i_69_n_2,
      CO(0) => tmp_product_i_69_n_3,
      CYINIT => '0',
      DI(3) => \buff1_reg[6]__0_n_0\,
      DI(2) => \buff1_reg[5]__0_n_0\,
      DI(1) => \buff1_reg[4]__0_n_0\,
      DI(0) => \buff1_reg[3]__0_n_0\,
      O(3 downto 0) => NLW_tmp_product_i_69_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_84_n_0,
      S(2) => tmp_product_i_85_n_0,
      S(1) => tmp_product_i_86_n_0,
      S(0) => tmp_product_i_87_n_0
    );
tmp_product_i_7: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_3_n_0,
      I1 => buff0_reg_n_93,
      I2 => tmp_product_i_19_n_4,
      I3 => buff1_reg_n_93,
      O => tmp_product_i_7_n_0
    );
tmp_product_i_70: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[10]__0_n_0\,
      I1 => tmp_product_i_74_n_7,
      O => tmp_product_i_70_n_0
    );
tmp_product_i_71: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[9]__0_n_0\,
      I1 => tmp_product_i_88_n_4,
      O => tmp_product_i_71_n_0
    );
tmp_product_i_72: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[8]__0_n_0\,
      I1 => tmp_product_i_88_n_5,
      O => tmp_product_i_72_n_0
    );
tmp_product_i_73: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[7]__0_n_0\,
      I1 => tmp_product_i_88_n_6,
      O => tmp_product_i_73_n_0
    );
tmp_product_i_74: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_88_n_0,
      CO(3) => tmp_product_i_74_n_0,
      CO(2) => tmp_product_i_74_n_1,
      CO(1) => tmp_product_i_74_n_2,
      CO(0) => tmp_product_i_74_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_89_n_0,
      DI(2) => tmp_product_i_90_n_0,
      DI(1) => tmp_product_i_91_n_0,
      DI(0) => tmp_product_i_92_n_0,
      O(3) => tmp_product_i_74_n_4,
      O(2) => tmp_product_i_74_n_5,
      O(1) => tmp_product_i_74_n_6,
      O(0) => tmp_product_i_74_n_7,
      S(3) => tmp_product_i_93_n_0,
      S(2) => tmp_product_i_94_n_0,
      S(1) => tmp_product_i_95_n_0,
      S(0) => tmp_product_i_96_n_0
    );
tmp_product_i_75: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_90\,
      I1 => \buff1_reg__1_n_73\,
      I2 => \buff1_reg__0_n_89\,
      I3 => \buff1_reg__1_n_72\,
      O => tmp_product_i_75_n_0
    );
tmp_product_i_76: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_91\,
      I1 => \buff1_reg__1_n_74\,
      I2 => \buff1_reg__0_n_90\,
      I3 => \buff1_reg__1_n_73\,
      O => tmp_product_i_76_n_0
    );
tmp_product_i_77: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E00E"
    )
        port map (
      I0 => \buff1_reg__0_n_92\,
      I1 => \buff1_reg__1_n_75\,
      I2 => \buff1_reg__0_n_91\,
      I3 => \buff1_reg__1_n_74\,
      O => tmp_product_i_77_n_0
    );
tmp_product_i_78: unisim.vcomponents.LUT3
    generic map(
      INIT => X"09"
    )
        port map (
      I0 => \buff1_reg__0_n_92\,
      I1 => \buff1_reg__1_n_75\,
      I2 => \buff1_reg__2_n_58\,
      O => tmp_product_i_78_n_0
    );
tmp_product_i_79: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_73\,
      I1 => \buff1_reg__0_n_90\,
      I2 => \buff1_reg__1_n_71\,
      I3 => \buff1_reg__0_n_88\,
      I4 => \buff1_reg__1_n_72\,
      I5 => \buff1_reg__0_n_89\,
      O => tmp_product_i_79_n_0
    );
tmp_product_i_8: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_19_n_5,
      I1 => buff0_reg_n_94,
      I2 => buff1_reg_n_94,
      I3 => tmp_product_i_4_n_0,
      O => tmp_product_i_8_n_0
    );
tmp_product_i_80: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_74\,
      I1 => \buff1_reg__0_n_91\,
      I2 => \buff1_reg__1_n_72\,
      I3 => \buff1_reg__0_n_89\,
      I4 => \buff1_reg__1_n_73\,
      I5 => \buff1_reg__0_n_90\,
      O => tmp_product_i_80_n_0
    );
tmp_product_i_81: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E11E0FF00FF01EE1"
    )
        port map (
      I0 => \buff1_reg__1_n_75\,
      I1 => \buff1_reg__0_n_92\,
      I2 => \buff1_reg__1_n_73\,
      I3 => \buff1_reg__0_n_90\,
      I4 => \buff1_reg__1_n_74\,
      I5 => \buff1_reg__0_n_91\,
      O => tmp_product_i_81_n_0
    );
tmp_product_i_82: unisim.vcomponents.LUT5
    generic map(
      INIT => X"693C3C96"
    )
        port map (
      I0 => \buff1_reg__2_n_58\,
      I1 => \buff1_reg__1_n_74\,
      I2 => \buff1_reg__0_n_91\,
      I3 => \buff1_reg__1_n_75\,
      I4 => \buff1_reg__0_n_92\,
      O => tmp_product_i_82_n_0
    );
tmp_product_i_83: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => tmp_product_i_83_n_0,
      CO(2) => tmp_product_i_83_n_1,
      CO(1) => tmp_product_i_83_n_2,
      CO(0) => tmp_product_i_83_n_3,
      CYINIT => '0',
      DI(3) => \buff1_reg[2]__0_n_0\,
      DI(2) => \buff1_reg[1]__0_n_0\,
      DI(1) => \buff1_reg[0]__0_n_0\,
      DI(0) => '0',
      O(3 downto 0) => NLW_tmp_product_i_83_O_UNCONNECTED(3 downto 0),
      S(3) => tmp_product_i_97_n_0,
      S(2) => tmp_product_i_98_n_0,
      S(1) => tmp_product_i_99_n_0,
      S(0) => tmp_product_i_100_n_6
    );
tmp_product_i_84: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[6]__0_n_0\,
      I1 => tmp_product_i_88_n_7,
      O => tmp_product_i_84_n_0
    );
tmp_product_i_85: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[5]__0_n_0\,
      I1 => tmp_product_i_101_n_4,
      O => tmp_product_i_85_n_0
    );
tmp_product_i_86: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[4]__0_n_0\,
      I1 => tmp_product_i_101_n_5,
      O => tmp_product_i_86_n_0
    );
tmp_product_i_87: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[3]__0_n_0\,
      I1 => tmp_product_i_101_n_6,
      O => tmp_product_i_87_n_0
    );
tmp_product_i_88: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_101_n_0,
      CO(3) => tmp_product_i_88_n_0,
      CO(2) => tmp_product_i_88_n_1,
      CO(1) => tmp_product_i_88_n_2,
      CO(0) => tmp_product_i_88_n_3,
      CYINIT => '0',
      DI(3) => tmp_product_i_102_n_0,
      DI(2) => tmp_product_i_103_n_0,
      DI(1) => tmp_product_i_104_n_0,
      DI(0) => tmp_product_i_105_n_0,
      O(3) => tmp_product_i_88_n_4,
      O(2) => tmp_product_i_88_n_5,
      O(1) => tmp_product_i_88_n_6,
      O(0) => tmp_product_i_88_n_7,
      S(3) => tmp_product_i_106_n_0,
      S(2) => tmp_product_i_107_n_0,
      S(1) => tmp_product_i_108_n_0,
      S(0) => tmp_product_i_109_n_0
    );
tmp_product_i_89: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => \buff1_reg__2_n_58\,
      I1 => \buff1_reg__1_n_75\,
      I2 => \buff1_reg__0_n_92\,
      O => tmp_product_i_89_n_0
    );
tmp_product_i_9: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_19_n_6,
      I1 => buff0_reg_n_95,
      I2 => buff1_reg_n_95,
      I3 => tmp_product_i_5_n_0,
      O => tmp_product_i_9_n_0
    );
tmp_product_i_90: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_94\,
      I1 => \buff1_reg__1_n_77\,
      I2 => \buff1_reg__2_n_60\,
      O => tmp_product_i_90_n_0
    );
tmp_product_i_91: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_95\,
      I1 => \buff1_reg__1_n_78\,
      I2 => \buff1_reg__2_n_61\,
      O => tmp_product_i_91_n_0
    );
tmp_product_i_92: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => \buff1_reg__0_n_96\,
      I1 => \buff1_reg__1_n_79\,
      I2 => \buff1_reg__2_n_62\,
      O => tmp_product_i_92_n_0
    );
tmp_product_i_93: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6969699669969696"
    )
        port map (
      I0 => \buff1_reg__2_n_58\,
      I1 => \buff1_reg__1_n_75\,
      I2 => \buff1_reg__0_n_92\,
      I3 => \buff1_reg__2_n_59\,
      I4 => \buff1_reg__1_n_76\,
      I5 => \buff1_reg__0_n_93\,
      O => tmp_product_i_93_n_0
    );
tmp_product_i_94: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => tmp_product_i_90_n_0,
      I1 => \buff1_reg__1_n_76\,
      I2 => \buff1_reg__0_n_93\,
      I3 => \buff1_reg__2_n_59\,
      O => tmp_product_i_94_n_0
    );
tmp_product_i_95: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_94\,
      I1 => \buff1_reg__1_n_77\,
      I2 => \buff1_reg__2_n_60\,
      I3 => tmp_product_i_91_n_0,
      O => tmp_product_i_95_n_0
    );
tmp_product_i_96: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \buff1_reg__0_n_95\,
      I1 => \buff1_reg__1_n_78\,
      I2 => \buff1_reg__2_n_61\,
      I3 => tmp_product_i_92_n_0,
      O => tmp_product_i_96_n_0
    );
tmp_product_i_97: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[2]__0_n_0\,
      I1 => tmp_product_i_101_n_7,
      O => tmp_product_i_97_n_0
    );
tmp_product_i_98: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[1]__0_n_0\,
      I1 => tmp_product_i_100_n_4,
      O => tmp_product_i_98_n_0
    );
tmp_product_i_99: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \buff1_reg[0]__0_n_0\,
      I1 => tmp_product_i_100_n_5,
      O => tmp_product_i_99_n_0
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1_Multiplier_1 is
  port (
    D : out STD_LOGIC_VECTOR ( 39 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    p_reg_0 : in STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1_Multiplier_1 : entity is "fn1_mul_8s_33ns_40_2_1_Multiplier_1";
end bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1_Multiplier_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1_Multiplier_1 is
  signal p_reg_n_58 : STD_LOGIC;
  signal p_reg_n_59 : STD_LOGIC;
  signal p_reg_n_60 : STD_LOGIC;
  signal p_reg_n_61 : STD_LOGIC;
  signal p_reg_n_62 : STD_LOGIC;
  signal p_reg_n_63 : STD_LOGIC;
  signal p_reg_n_64 : STD_LOGIC;
  signal p_reg_n_65 : STD_LOGIC;
  signal p_reg_n_66 : STD_LOGIC;
  signal p_reg_n_67 : STD_LOGIC;
  signal p_reg_n_68 : STD_LOGIC;
  signal p_reg_n_69 : STD_LOGIC;
  signal p_reg_n_70 : STD_LOGIC;
  signal p_reg_n_71 : STD_LOGIC;
  signal p_reg_n_72 : STD_LOGIC;
  signal p_reg_n_73 : STD_LOGIC;
  signal p_reg_n_74 : STD_LOGIC;
  signal p_reg_n_75 : STD_LOGIC;
  signal p_reg_n_76 : STD_LOGIC;
  signal p_reg_n_77 : STD_LOGIC;
  signal p_reg_n_78 : STD_LOGIC;
  signal p_reg_n_79 : STD_LOGIC;
  signal p_reg_n_80 : STD_LOGIC;
  signal p_reg_n_81 : STD_LOGIC;
  signal p_reg_n_82 : STD_LOGIC;
  signal tmp_product_n_100 : STD_LOGIC;
  signal tmp_product_n_101 : STD_LOGIC;
  signal tmp_product_n_102 : STD_LOGIC;
  signal tmp_product_n_103 : STD_LOGIC;
  signal tmp_product_n_104 : STD_LOGIC;
  signal tmp_product_n_105 : STD_LOGIC;
  signal tmp_product_n_106 : STD_LOGIC;
  signal tmp_product_n_107 : STD_LOGIC;
  signal tmp_product_n_108 : STD_LOGIC;
  signal tmp_product_n_109 : STD_LOGIC;
  signal tmp_product_n_110 : STD_LOGIC;
  signal tmp_product_n_111 : STD_LOGIC;
  signal tmp_product_n_112 : STD_LOGIC;
  signal tmp_product_n_113 : STD_LOGIC;
  signal tmp_product_n_114 : STD_LOGIC;
  signal tmp_product_n_115 : STD_LOGIC;
  signal tmp_product_n_116 : STD_LOGIC;
  signal tmp_product_n_117 : STD_LOGIC;
  signal tmp_product_n_118 : STD_LOGIC;
  signal tmp_product_n_119 : STD_LOGIC;
  signal tmp_product_n_120 : STD_LOGIC;
  signal tmp_product_n_121 : STD_LOGIC;
  signal tmp_product_n_122 : STD_LOGIC;
  signal tmp_product_n_123 : STD_LOGIC;
  signal tmp_product_n_124 : STD_LOGIC;
  signal tmp_product_n_125 : STD_LOGIC;
  signal tmp_product_n_126 : STD_LOGIC;
  signal tmp_product_n_127 : STD_LOGIC;
  signal tmp_product_n_128 : STD_LOGIC;
  signal tmp_product_n_129 : STD_LOGIC;
  signal tmp_product_n_130 : STD_LOGIC;
  signal tmp_product_n_131 : STD_LOGIC;
  signal tmp_product_n_132 : STD_LOGIC;
  signal tmp_product_n_133 : STD_LOGIC;
  signal tmp_product_n_134 : STD_LOGIC;
  signal tmp_product_n_135 : STD_LOGIC;
  signal tmp_product_n_136 : STD_LOGIC;
  signal tmp_product_n_137 : STD_LOGIC;
  signal tmp_product_n_138 : STD_LOGIC;
  signal tmp_product_n_139 : STD_LOGIC;
  signal tmp_product_n_140 : STD_LOGIC;
  signal tmp_product_n_141 : STD_LOGIC;
  signal tmp_product_n_142 : STD_LOGIC;
  signal tmp_product_n_143 : STD_LOGIC;
  signal tmp_product_n_144 : STD_LOGIC;
  signal tmp_product_n_145 : STD_LOGIC;
  signal tmp_product_n_146 : STD_LOGIC;
  signal tmp_product_n_147 : STD_LOGIC;
  signal tmp_product_n_148 : STD_LOGIC;
  signal tmp_product_n_149 : STD_LOGIC;
  signal tmp_product_n_150 : STD_LOGIC;
  signal tmp_product_n_151 : STD_LOGIC;
  signal tmp_product_n_152 : STD_LOGIC;
  signal tmp_product_n_153 : STD_LOGIC;
  signal tmp_product_n_58 : STD_LOGIC;
  signal tmp_product_n_59 : STD_LOGIC;
  signal tmp_product_n_60 : STD_LOGIC;
  signal tmp_product_n_61 : STD_LOGIC;
  signal tmp_product_n_62 : STD_LOGIC;
  signal tmp_product_n_63 : STD_LOGIC;
  signal tmp_product_n_64 : STD_LOGIC;
  signal tmp_product_n_65 : STD_LOGIC;
  signal tmp_product_n_66 : STD_LOGIC;
  signal tmp_product_n_67 : STD_LOGIC;
  signal tmp_product_n_68 : STD_LOGIC;
  signal tmp_product_n_69 : STD_LOGIC;
  signal tmp_product_n_70 : STD_LOGIC;
  signal tmp_product_n_71 : STD_LOGIC;
  signal tmp_product_n_72 : STD_LOGIC;
  signal tmp_product_n_73 : STD_LOGIC;
  signal tmp_product_n_74 : STD_LOGIC;
  signal tmp_product_n_75 : STD_LOGIC;
  signal tmp_product_n_76 : STD_LOGIC;
  signal tmp_product_n_77 : STD_LOGIC;
  signal tmp_product_n_78 : STD_LOGIC;
  signal tmp_product_n_79 : STD_LOGIC;
  signal tmp_product_n_80 : STD_LOGIC;
  signal tmp_product_n_81 : STD_LOGIC;
  signal tmp_product_n_82 : STD_LOGIC;
  signal tmp_product_n_83 : STD_LOGIC;
  signal tmp_product_n_84 : STD_LOGIC;
  signal tmp_product_n_85 : STD_LOGIC;
  signal tmp_product_n_86 : STD_LOGIC;
  signal tmp_product_n_87 : STD_LOGIC;
  signal tmp_product_n_88 : STD_LOGIC;
  signal tmp_product_n_89 : STD_LOGIC;
  signal tmp_product_n_90 : STD_LOGIC;
  signal tmp_product_n_91 : STD_LOGIC;
  signal tmp_product_n_92 : STD_LOGIC;
  signal tmp_product_n_93 : STD_LOGIC;
  signal tmp_product_n_94 : STD_LOGIC;
  signal tmp_product_n_95 : STD_LOGIC;
  signal tmp_product_n_96 : STD_LOGIC;
  signal tmp_product_n_97 : STD_LOGIC;
  signal tmp_product_n_98 : STD_LOGIC;
  signal tmp_product_n_99 : STD_LOGIC;
  signal NLW_p_reg_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_p_reg_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_p_reg_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_p_reg_PCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal NLW_tmp_product_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_tmp_product_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_tmp_product_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  attribute METHODOLOGY_DRC_VIOS : string;
  attribute METHODOLOGY_DRC_VIOS of tmp_product : label is "{SYNTH-11 {cell *THIS*}}";
begin
p_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 0) => B"000000000000000111111111111111",
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_p_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => p_reg_0(7),
      B(16) => p_reg_0(7),
      B(15) => p_reg_0(7),
      B(14) => p_reg_0(7),
      B(13) => p_reg_0(7),
      B(12) => p_reg_0(7),
      B(11) => p_reg_0(7),
      B(10) => p_reg_0(7),
      B(9) => p_reg_0(7),
      B(8) => p_reg_0(7),
      B(7 downto 0) => p_reg_0(7 downto 0),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_p_reg_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_p_reg_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_p_reg_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => '0',
      CEA2 => '0',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '1',
      CEB2 => Q(0),
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_p_reg_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"1010101",
      OVERFLOW => NLW_p_reg_OVERFLOW_UNCONNECTED,
      P(47) => p_reg_n_58,
      P(46) => p_reg_n_59,
      P(45) => p_reg_n_60,
      P(44) => p_reg_n_61,
      P(43) => p_reg_n_62,
      P(42) => p_reg_n_63,
      P(41) => p_reg_n_64,
      P(40) => p_reg_n_65,
      P(39) => p_reg_n_66,
      P(38) => p_reg_n_67,
      P(37) => p_reg_n_68,
      P(36) => p_reg_n_69,
      P(35) => p_reg_n_70,
      P(34) => p_reg_n_71,
      P(33) => p_reg_n_72,
      P(32) => p_reg_n_73,
      P(31) => p_reg_n_74,
      P(30) => p_reg_n_75,
      P(29) => p_reg_n_76,
      P(28) => p_reg_n_77,
      P(27) => p_reg_n_78,
      P(26) => p_reg_n_79,
      P(25) => p_reg_n_80,
      P(24) => p_reg_n_81,
      P(23) => p_reg_n_82,
      P(22 downto 0) => D(39 downto 17),
      PATTERNBDETECT => NLW_p_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_p_reg_PATTERNDETECT_UNCONNECTED,
      PCIN(47) => tmp_product_n_106,
      PCIN(46) => tmp_product_n_107,
      PCIN(45) => tmp_product_n_108,
      PCIN(44) => tmp_product_n_109,
      PCIN(43) => tmp_product_n_110,
      PCIN(42) => tmp_product_n_111,
      PCIN(41) => tmp_product_n_112,
      PCIN(40) => tmp_product_n_113,
      PCIN(39) => tmp_product_n_114,
      PCIN(38) => tmp_product_n_115,
      PCIN(37) => tmp_product_n_116,
      PCIN(36) => tmp_product_n_117,
      PCIN(35) => tmp_product_n_118,
      PCIN(34) => tmp_product_n_119,
      PCIN(33) => tmp_product_n_120,
      PCIN(32) => tmp_product_n_121,
      PCIN(31) => tmp_product_n_122,
      PCIN(30) => tmp_product_n_123,
      PCIN(29) => tmp_product_n_124,
      PCIN(28) => tmp_product_n_125,
      PCIN(27) => tmp_product_n_126,
      PCIN(26) => tmp_product_n_127,
      PCIN(25) => tmp_product_n_128,
      PCIN(24) => tmp_product_n_129,
      PCIN(23) => tmp_product_n_130,
      PCIN(22) => tmp_product_n_131,
      PCIN(21) => tmp_product_n_132,
      PCIN(20) => tmp_product_n_133,
      PCIN(19) => tmp_product_n_134,
      PCIN(18) => tmp_product_n_135,
      PCIN(17) => tmp_product_n_136,
      PCIN(16) => tmp_product_n_137,
      PCIN(15) => tmp_product_n_138,
      PCIN(14) => tmp_product_n_139,
      PCIN(13) => tmp_product_n_140,
      PCIN(12) => tmp_product_n_141,
      PCIN(11) => tmp_product_n_142,
      PCIN(10) => tmp_product_n_143,
      PCIN(9) => tmp_product_n_144,
      PCIN(8) => tmp_product_n_145,
      PCIN(7) => tmp_product_n_146,
      PCIN(6) => tmp_product_n_147,
      PCIN(5) => tmp_product_n_148,
      PCIN(4) => tmp_product_n_149,
      PCIN(3) => tmp_product_n_150,
      PCIN(2) => tmp_product_n_151,
      PCIN(1) => tmp_product_n_152,
      PCIN(0) => tmp_product_n_153,
      PCOUT(47 downto 0) => NLW_p_reg_PCOUT_UNCONNECTED(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_p_reg_UNDERFLOW_UNCONNECTED
    );
\p_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_105,
      Q => D(0),
      R => '0'
    );
\p_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_95,
      Q => D(10),
      R => '0'
    );
\p_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_94,
      Q => D(11),
      R => '0'
    );
\p_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_93,
      Q => D(12),
      R => '0'
    );
\p_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_92,
      Q => D(13),
      R => '0'
    );
\p_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_91,
      Q => D(14),
      R => '0'
    );
\p_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_90,
      Q => D(15),
      R => '0'
    );
\p_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_89,
      Q => D(16),
      R => '0'
    );
\p_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_104,
      Q => D(1),
      R => '0'
    );
\p_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_103,
      Q => D(2),
      R => '0'
    );
\p_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_102,
      Q => D(3),
      R => '0'
    );
\p_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_101,
      Q => D(4),
      R => '0'
    );
\p_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_100,
      Q => D(5),
      R => '0'
    );
\p_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_99,
      Q => D(6),
      R => '0'
    );
\p_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_98,
      Q => D(7),
      R => '0'
    );
\p_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_97,
      Q => D(8),
      R => '0'
    );
\p_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => tmp_product_n_96,
      Q => D(9),
      R => '0'
    );
tmp_product: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 0,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 0) => B"000000000000010010110110100100",
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_tmp_product_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => p_reg_0(7),
      B(16) => p_reg_0(7),
      B(15) => p_reg_0(7),
      B(14) => p_reg_0(7),
      B(13) => p_reg_0(7),
      B(12) => p_reg_0(7),
      B(11) => p_reg_0(7),
      B(10) => p_reg_0(7),
      B(9) => p_reg_0(7),
      B(8) => p_reg_0(7),
      B(7 downto 0) => p_reg_0(7 downto 0),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_tmp_product_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_tmp_product_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_tmp_product_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => '0',
      CEA2 => '0',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '1',
      CEB2 => Q(0),
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '0',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_tmp_product_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => NLW_tmp_product_OVERFLOW_UNCONNECTED,
      P(47) => tmp_product_n_58,
      P(46) => tmp_product_n_59,
      P(45) => tmp_product_n_60,
      P(44) => tmp_product_n_61,
      P(43) => tmp_product_n_62,
      P(42) => tmp_product_n_63,
      P(41) => tmp_product_n_64,
      P(40) => tmp_product_n_65,
      P(39) => tmp_product_n_66,
      P(38) => tmp_product_n_67,
      P(37) => tmp_product_n_68,
      P(36) => tmp_product_n_69,
      P(35) => tmp_product_n_70,
      P(34) => tmp_product_n_71,
      P(33) => tmp_product_n_72,
      P(32) => tmp_product_n_73,
      P(31) => tmp_product_n_74,
      P(30) => tmp_product_n_75,
      P(29) => tmp_product_n_76,
      P(28) => tmp_product_n_77,
      P(27) => tmp_product_n_78,
      P(26) => tmp_product_n_79,
      P(25) => tmp_product_n_80,
      P(24) => tmp_product_n_81,
      P(23) => tmp_product_n_82,
      P(22) => tmp_product_n_83,
      P(21) => tmp_product_n_84,
      P(20) => tmp_product_n_85,
      P(19) => tmp_product_n_86,
      P(18) => tmp_product_n_87,
      P(17) => tmp_product_n_88,
      P(16) => tmp_product_n_89,
      P(15) => tmp_product_n_90,
      P(14) => tmp_product_n_91,
      P(13) => tmp_product_n_92,
      P(12) => tmp_product_n_93,
      P(11) => tmp_product_n_94,
      P(10) => tmp_product_n_95,
      P(9) => tmp_product_n_96,
      P(8) => tmp_product_n_97,
      P(7) => tmp_product_n_98,
      P(6) => tmp_product_n_99,
      P(5) => tmp_product_n_100,
      P(4) => tmp_product_n_101,
      P(3) => tmp_product_n_102,
      P(2) => tmp_product_n_103,
      P(1) => tmp_product_n_104,
      P(0) => tmp_product_n_105,
      PATTERNBDETECT => NLW_tmp_product_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_tmp_product_PATTERNDETECT_UNCONNECTED,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => tmp_product_n_106,
      PCOUT(46) => tmp_product_n_107,
      PCOUT(45) => tmp_product_n_108,
      PCOUT(44) => tmp_product_n_109,
      PCOUT(43) => tmp_product_n_110,
      PCOUT(42) => tmp_product_n_111,
      PCOUT(41) => tmp_product_n_112,
      PCOUT(40) => tmp_product_n_113,
      PCOUT(39) => tmp_product_n_114,
      PCOUT(38) => tmp_product_n_115,
      PCOUT(37) => tmp_product_n_116,
      PCOUT(36) => tmp_product_n_117,
      PCOUT(35) => tmp_product_n_118,
      PCOUT(34) => tmp_product_n_119,
      PCOUT(33) => tmp_product_n_120,
      PCOUT(32) => tmp_product_n_121,
      PCOUT(31) => tmp_product_n_122,
      PCOUT(30) => tmp_product_n_123,
      PCOUT(29) => tmp_product_n_124,
      PCOUT(28) => tmp_product_n_125,
      PCOUT(27) => tmp_product_n_126,
      PCOUT(26) => tmp_product_n_127,
      PCOUT(25) => tmp_product_n_128,
      PCOUT(24) => tmp_product_n_129,
      PCOUT(23) => tmp_product_n_130,
      PCOUT(22) => tmp_product_n_131,
      PCOUT(21) => tmp_product_n_132,
      PCOUT(20) => tmp_product_n_133,
      PCOUT(19) => tmp_product_n_134,
      PCOUT(18) => tmp_product_n_135,
      PCOUT(17) => tmp_product_n_136,
      PCOUT(16) => tmp_product_n_137,
      PCOUT(15) => tmp_product_n_138,
      PCOUT(14) => tmp_product_n_139,
      PCOUT(13) => tmp_product_n_140,
      PCOUT(12) => tmp_product_n_141,
      PCOUT(11) => tmp_product_n_142,
      PCOUT(10) => tmp_product_n_143,
      PCOUT(9) => tmp_product_n_144,
      PCOUT(8) => tmp_product_n_145,
      PCOUT(7) => tmp_product_n_146,
      PCOUT(6) => tmp_product_n_147,
      PCOUT(5) => tmp_product_n_148,
      PCOUT(4) => tmp_product_n_149,
      PCOUT(3) => tmp_product_n_150,
      PCOUT(2) => tmp_product_n_151,
      PCOUT(1) => tmp_product_n_152,
      PCOUT(0) => tmp_product_n_153,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_tmp_product_UNDERFLOW_UNCONNECTED
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div_u is
  port (
    Q : out STD_LOGIC_VECTOR ( 0 to 0 );
    D : out STD_LOGIC_VECTOR ( 5 downto 0 );
    \r_stage_reg[8]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    ap_rst : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    \divisor0_reg[39]_inv_0\ : in STD_LOGIC_VECTOR ( 39 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div_u : entity is "fn1_srem_8s_40ns_7_12_seq_1_div_u";
end bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div_u;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div_u is
  signal \^q\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \cal_tmp_carry__0_i_5_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_6_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_7_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_8_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__3_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__3_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__4_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__4_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__4_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__5_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__5_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__5_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__5_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__6_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__6_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__6_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__6_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__7_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__7_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__7_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__7_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__8_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__8_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__8_n_3\ : STD_LOGIC;
  signal cal_tmp_carry_i_5_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_6_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_7_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_8_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_1 : STD_LOGIC;
  signal cal_tmp_carry_n_2 : STD_LOGIC;
  signal cal_tmp_carry_n_3 : STD_LOGIC;
  signal cal_tmp_carry_n_4 : STD_LOGIC;
  signal cal_tmp_carry_n_5 : STD_LOGIC;
  signal cal_tmp_carry_n_6 : STD_LOGIC;
  signal cal_tmp_carry_n_7 : STD_LOGIC;
  signal dividend_tmp : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal \dividend_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[7]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[0]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[1]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[2]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[3]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[4]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal p_0_in : STD_LOGIC_VECTOR ( 39 downto 8 );
  signal p_0_in_0 : STD_LOGIC;
  signal p_1_in0 : STD_LOGIC;
  signal p_2_out : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \r_stage_reg_n_0_[0]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[1]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[2]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[3]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[4]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[5]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[6]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[7]\ : STD_LOGIC;
  signal \remd[6]_i_2_n_0\ : STD_LOGIC;
  signal remd_tmp : STD_LOGIC_VECTOR ( 6 downto 1 );
  signal \remd_tmp[0]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal remd_tmp_mux : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal \NLW_cal_tmp_carry__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_cal_tmp_carry__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__3_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__4_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__5_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__6_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__7_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__8_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__9_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__9_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \dividend_tmp[1]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \dividend_tmp[3]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \dividend_tmp[4]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \dividend_tmp[5]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \dividend_tmp[6]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \dividend_tmp[7]_i_1\ : label is "soft_lutpair5";
  attribute inverted : string;
  attribute inverted of \divisor0_reg[10]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[11]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[12]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[13]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[14]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[15]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[16]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[17]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[18]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[19]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[20]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[21]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[22]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[23]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[24]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[25]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[26]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[27]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[28]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[29]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[30]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[31]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[32]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[33]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[34]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[35]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[36]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[37]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[38]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[39]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[8]_inv\ : label is "yes";
  attribute inverted of \divisor0_reg[9]_inv\ : label is "yes";
  attribute SOFT_HLUTNM of \remd[1]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \remd[2]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \remd[3]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \remd[4]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \remd[6]_i_2\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \remd_tmp[0]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \remd_tmp[1]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \remd_tmp[2]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \remd_tmp[3]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \remd_tmp[4]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \remd_tmp[5]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \remd_tmp[6]_i_1\ : label is "soft_lutpair7";
begin
  Q(0) <= \^q\(0);
cal_tmp_carry: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => cal_tmp_carry_n_0,
      CO(2) => cal_tmp_carry_n_1,
      CO(1) => cal_tmp_carry_n_2,
      CO(0) => cal_tmp_carry_n_3,
      CYINIT => '1',
      DI(3 downto 1) => remd_tmp_mux(2 downto 0),
      DI(0) => p_1_in0,
      O(3) => cal_tmp_carry_n_4,
      O(2) => cal_tmp_carry_n_5,
      O(1) => cal_tmp_carry_n_6,
      O(0) => cal_tmp_carry_n_7,
      S(3) => cal_tmp_carry_i_5_n_0,
      S(2) => cal_tmp_carry_i_6_n_0,
      S(1) => cal_tmp_carry_i_7_n_0,
      S(0) => cal_tmp_carry_i_8_n_0
    );
\cal_tmp_carry__0\: unisim.vcomponents.CARRY4
     port map (
      CI => cal_tmp_carry_n_0,
      CO(3) => \cal_tmp_carry__0_n_0\,
      CO(2) => \cal_tmp_carry__0_n_1\,
      CO(1) => \cal_tmp_carry__0_n_2\,
      CO(0) => \cal_tmp_carry__0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => remd_tmp_mux(6 downto 3),
      O(3) => \NLW_cal_tmp_carry__0_O_UNCONNECTED\(3),
      O(2) => \cal_tmp_carry__0_n_5\,
      O(1) => \cal_tmp_carry__0_n_6\,
      O(0) => \cal_tmp_carry__0_n_7\,
      S(3) => \cal_tmp_carry__0_i_5_n_0\,
      S(2) => \cal_tmp_carry__0_i_6_n_0\,
      S(1) => \cal_tmp_carry__0_i_7_n_0\,
      S(0) => \cal_tmp_carry__0_i_8_n_0\
    );
\cal_tmp_carry__0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => remd_tmp(6),
      I1 => \r_stage_reg_n_0_[0]\,
      O => remd_tmp_mux(6)
    );
\cal_tmp_carry__0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => remd_tmp(5),
      I1 => \r_stage_reg_n_0_[0]\,
      O => remd_tmp_mux(5)
    );
\cal_tmp_carry__0_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => remd_tmp(4),
      I1 => \r_stage_reg_n_0_[0]\,
      O => remd_tmp_mux(4)
    );
\cal_tmp_carry__0_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => remd_tmp(3),
      I1 => \r_stage_reg_n_0_[0]\,
      O => remd_tmp_mux(3)
    );
\cal_tmp_carry__0_i_5\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => remd_tmp(6),
      I2 => \divisor0_reg_n_0_[7]\,
      O => \cal_tmp_carry__0_i_5_n_0\
    );
\cal_tmp_carry__0_i_6\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => remd_tmp(5),
      I2 => \divisor0_reg_n_0_[6]\,
      O => \cal_tmp_carry__0_i_6_n_0\
    );
\cal_tmp_carry__0_i_7\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => remd_tmp(4),
      I2 => \divisor0_reg_n_0_[5]\,
      O => \cal_tmp_carry__0_i_7_n_0\
    );
\cal_tmp_carry__0_i_8\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => remd_tmp(3),
      I2 => \divisor0_reg_n_0_[4]\,
      O => \cal_tmp_carry__0_i_8_n_0\
    );
\cal_tmp_carry__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__0_n_0\,
      CO(3) => \cal_tmp_carry__1_n_0\,
      CO(2) => \cal_tmp_carry__1_n_1\,
      CO(1) => \cal_tmp_carry__1_n_2\,
      CO(0) => \cal_tmp_carry__1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \NLW_cal_tmp_carry__1_O_UNCONNECTED\(3 downto 0),
      S(3 downto 0) => p_0_in(11 downto 8)
    );
\cal_tmp_carry__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__1_n_0\,
      CO(3) => \cal_tmp_carry__2_n_0\,
      CO(2) => \cal_tmp_carry__2_n_1\,
      CO(1) => \cal_tmp_carry__2_n_2\,
      CO(0) => \cal_tmp_carry__2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \NLW_cal_tmp_carry__2_O_UNCONNECTED\(3 downto 0),
      S(3 downto 0) => p_0_in(15 downto 12)
    );
\cal_tmp_carry__3\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__2_n_0\,
      CO(3) => \cal_tmp_carry__3_n_0\,
      CO(2) => \cal_tmp_carry__3_n_1\,
      CO(1) => \cal_tmp_carry__3_n_2\,
      CO(0) => \cal_tmp_carry__3_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \NLW_cal_tmp_carry__3_O_UNCONNECTED\(3 downto 0),
      S(3 downto 0) => p_0_in(19 downto 16)
    );
\cal_tmp_carry__4\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__3_n_0\,
      CO(3) => \cal_tmp_carry__4_n_0\,
      CO(2) => \cal_tmp_carry__4_n_1\,
      CO(1) => \cal_tmp_carry__4_n_2\,
      CO(0) => \cal_tmp_carry__4_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \NLW_cal_tmp_carry__4_O_UNCONNECTED\(3 downto 0),
      S(3 downto 0) => p_0_in(23 downto 20)
    );
\cal_tmp_carry__5\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__4_n_0\,
      CO(3) => \cal_tmp_carry__5_n_0\,
      CO(2) => \cal_tmp_carry__5_n_1\,
      CO(1) => \cal_tmp_carry__5_n_2\,
      CO(0) => \cal_tmp_carry__5_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \NLW_cal_tmp_carry__5_O_UNCONNECTED\(3 downto 0),
      S(3 downto 0) => p_0_in(27 downto 24)
    );
\cal_tmp_carry__6\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__5_n_0\,
      CO(3) => \cal_tmp_carry__6_n_0\,
      CO(2) => \cal_tmp_carry__6_n_1\,
      CO(1) => \cal_tmp_carry__6_n_2\,
      CO(0) => \cal_tmp_carry__6_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \NLW_cal_tmp_carry__6_O_UNCONNECTED\(3 downto 0),
      S(3 downto 0) => p_0_in(31 downto 28)
    );
\cal_tmp_carry__7\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__6_n_0\,
      CO(3) => \cal_tmp_carry__7_n_0\,
      CO(2) => \cal_tmp_carry__7_n_1\,
      CO(1) => \cal_tmp_carry__7_n_2\,
      CO(0) => \cal_tmp_carry__7_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \NLW_cal_tmp_carry__7_O_UNCONNECTED\(3 downto 0),
      S(3 downto 0) => p_0_in(35 downto 32)
    );
\cal_tmp_carry__8\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__7_n_0\,
      CO(3) => p_2_out(0),
      CO(2) => \cal_tmp_carry__8_n_1\,
      CO(1) => \cal_tmp_carry__8_n_2\,
      CO(0) => \cal_tmp_carry__8_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \NLW_cal_tmp_carry__8_O_UNCONNECTED\(3 downto 0),
      S(3 downto 0) => p_0_in(39 downto 36)
    );
\cal_tmp_carry__9\: unisim.vcomponents.CARRY4
     port map (
      CI => p_2_out(0),
      CO(3 downto 0) => \NLW_cal_tmp_carry__9_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_cal_tmp_carry__9_O_UNCONNECTED\(3 downto 1),
      O(0) => p_0_in_0,
      S(3 downto 0) => B"0001"
    );
cal_tmp_carry_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => remd_tmp(2),
      I1 => \r_stage_reg_n_0_[0]\,
      O => remd_tmp_mux(2)
    );
cal_tmp_carry_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => remd_tmp(1),
      I1 => \r_stage_reg_n_0_[0]\,
      O => remd_tmp_mux(1)
    );
cal_tmp_carry_i_3: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \^q\(0),
      I1 => \r_stage_reg_n_0_[0]\,
      O => remd_tmp_mux(0)
    );
cal_tmp_carry_i_4: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => dividend_tmp(7),
      I1 => \r_stage_reg_n_0_[0]\,
      O => p_1_in0
    );
cal_tmp_carry_i_5: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => remd_tmp(2),
      I2 => \divisor0_reg_n_0_[3]\,
      O => cal_tmp_carry_i_5_n_0
    );
cal_tmp_carry_i_6: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => remd_tmp(1),
      I2 => \divisor0_reg_n_0_[2]\,
      O => cal_tmp_carry_i_6_n_0
    );
cal_tmp_carry_i_7: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \^q\(0),
      I2 => \divisor0_reg_n_0_[1]\,
      O => cal_tmp_carry_i_7_n_0
    );
cal_tmp_carry_i_8: unisim.vcomponents.LUT3
    generic map(
      INIT => X"2D"
    )
        port map (
      I0 => dividend_tmp(7),
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => \divisor0_reg_n_0_[0]\,
      O => cal_tmp_carry_i_8_n_0
    );
\dividend_tmp[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => dividend_tmp(0),
      I1 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[1]_i_1_n_0\
    );
\dividend_tmp[2]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => dividend_tmp(1),
      I1 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[2]_i_1_n_0\
    );
\dividend_tmp[3]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => dividend_tmp(2),
      I1 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[3]_i_1_n_0\
    );
\dividend_tmp[4]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => dividend_tmp(3),
      I1 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[4]_i_1_n_0\
    );
\dividend_tmp[5]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => dividend_tmp(4),
      I1 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[5]_i_1_n_0\
    );
\dividend_tmp[6]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => dividend_tmp(5),
      I1 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[6]_i_1_n_0\
    );
\dividend_tmp[7]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => dividend_tmp(6),
      I1 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[7]_i_1_n_0\
    );
\dividend_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_2_out(0),
      Q => dividend_tmp(0),
      R => '0'
    );
\dividend_tmp_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[1]_i_1_n_0\,
      Q => dividend_tmp(1),
      R => '0'
    );
\dividend_tmp_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[2]_i_1_n_0\,
      Q => dividend_tmp(2),
      R => '0'
    );
\dividend_tmp_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[3]_i_1_n_0\,
      Q => dividend_tmp(3),
      R => '0'
    );
\dividend_tmp_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[4]_i_1_n_0\,
      Q => dividend_tmp(4),
      R => '0'
    );
\dividend_tmp_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[5]_i_1_n_0\,
      Q => dividend_tmp(5),
      R => '0'
    );
\dividend_tmp_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[6]_i_1_n_0\,
      Q => dividend_tmp(6),
      R => '0'
    );
\dividend_tmp_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[7]_i_1_n_0\,
      Q => dividend_tmp(7),
      R => '0'
    );
\divisor0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(0),
      Q => \divisor0_reg_n_0_[0]\,
      R => '0'
    );
\divisor0_reg[10]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(10),
      Q => p_0_in(10),
      R => '0'
    );
\divisor0_reg[11]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(11),
      Q => p_0_in(11),
      R => '0'
    );
\divisor0_reg[12]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(12),
      Q => p_0_in(12),
      R => '0'
    );
\divisor0_reg[13]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(13),
      Q => p_0_in(13),
      R => '0'
    );
\divisor0_reg[14]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(14),
      Q => p_0_in(14),
      R => '0'
    );
\divisor0_reg[15]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(15),
      Q => p_0_in(15),
      R => '0'
    );
\divisor0_reg[16]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(16),
      Q => p_0_in(16),
      R => '0'
    );
\divisor0_reg[17]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(17),
      Q => p_0_in(17),
      R => '0'
    );
\divisor0_reg[18]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(18),
      Q => p_0_in(18),
      R => '0'
    );
\divisor0_reg[19]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(19),
      Q => p_0_in(19),
      R => '0'
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(1),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[20]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(20),
      Q => p_0_in(20),
      R => '0'
    );
\divisor0_reg[21]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(21),
      Q => p_0_in(21),
      R => '0'
    );
\divisor0_reg[22]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(22),
      Q => p_0_in(22),
      R => '0'
    );
\divisor0_reg[23]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(23),
      Q => p_0_in(23),
      R => '0'
    );
\divisor0_reg[24]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(24),
      Q => p_0_in(24),
      R => '0'
    );
\divisor0_reg[25]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(25),
      Q => p_0_in(25),
      R => '0'
    );
\divisor0_reg[26]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(26),
      Q => p_0_in(26),
      R => '0'
    );
\divisor0_reg[27]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(27),
      Q => p_0_in(27),
      R => '0'
    );
\divisor0_reg[28]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(28),
      Q => p_0_in(28),
      R => '0'
    );
\divisor0_reg[29]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(29),
      Q => p_0_in(29),
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(2),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[30]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(30),
      Q => p_0_in(30),
      R => '0'
    );
\divisor0_reg[31]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(31),
      Q => p_0_in(31),
      R => '0'
    );
\divisor0_reg[32]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(32),
      Q => p_0_in(32),
      R => '0'
    );
\divisor0_reg[33]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(33),
      Q => p_0_in(33),
      R => '0'
    );
\divisor0_reg[34]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(34),
      Q => p_0_in(34),
      R => '0'
    );
\divisor0_reg[35]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(35),
      Q => p_0_in(35),
      R => '0'
    );
\divisor0_reg[36]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(36),
      Q => p_0_in(36),
      R => '0'
    );
\divisor0_reg[37]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(37),
      Q => p_0_in(37),
      R => '0'
    );
\divisor0_reg[38]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(38),
      Q => p_0_in(38),
      R => '0'
    );
\divisor0_reg[39]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(39),
      Q => p_0_in(39),
      R => '0'
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(3),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(4),
      Q => \divisor0_reg_n_0_[4]\,
      R => '0'
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(5),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(6),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(7),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(8),
      Q => p_0_in(8),
      R => '0'
    );
\divisor0_reg[9]_inv\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[39]_inv_0\(9),
      Q => p_0_in(9),
      R => '0'
    );
\r_stage_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => E(0),
      Q => \r_stage_reg_n_0_[0]\,
      R => ap_rst
    );
\r_stage_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg_n_0_[0]\,
      Q => \r_stage_reg_n_0_[1]\,
      R => ap_rst
    );
\r_stage_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg_n_0_[1]\,
      Q => \r_stage_reg_n_0_[2]\,
      R => ap_rst
    );
\r_stage_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg_n_0_[2]\,
      Q => \r_stage_reg_n_0_[3]\,
      R => ap_rst
    );
\r_stage_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg_n_0_[3]\,
      Q => \r_stage_reg_n_0_[4]\,
      R => ap_rst
    );
\r_stage_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg_n_0_[4]\,
      Q => \r_stage_reg_n_0_[5]\,
      R => ap_rst
    );
\r_stage_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg_n_0_[5]\,
      Q => \r_stage_reg_n_0_[6]\,
      R => ap_rst
    );
\r_stage_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg_n_0_[6]\,
      Q => \r_stage_reg_n_0_[7]\,
      R => ap_rst
    );
\r_stage_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg_n_0_[7]\,
      Q => \r_stage_reg[8]_0\(0),
      R => ap_rst
    );
\remd[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \^q\(0),
      I1 => remd_tmp(1),
      O => D(0)
    );
\remd[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"1E"
    )
        port map (
      I0 => \^q\(0),
      I1 => remd_tmp(1),
      I2 => remd_tmp(2),
      O => D(1)
    );
\remd[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"01FE"
    )
        port map (
      I0 => remd_tmp(2),
      I1 => remd_tmp(1),
      I2 => \^q\(0),
      I3 => remd_tmp(3),
      O => D(2)
    );
\remd[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0001FFFE"
    )
        port map (
      I0 => remd_tmp(3),
      I1 => \^q\(0),
      I2 => remd_tmp(1),
      I3 => remd_tmp(2),
      I4 => remd_tmp(4),
      O => D(3)
    );
\remd[5]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000001FFFFFFFE"
    )
        port map (
      I0 => remd_tmp(4),
      I1 => remd_tmp(2),
      I2 => remd_tmp(1),
      I3 => \^q\(0),
      I4 => remd_tmp(3),
      I5 => remd_tmp(5),
      O => D(4)
    );
\remd[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => remd_tmp(5),
      I1 => \remd[6]_i_2_n_0\,
      I2 => remd_tmp(6),
      O => D(5)
    );
\remd[6]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000001"
    )
        port map (
      I0 => remd_tmp(3),
      I1 => \^q\(0),
      I2 => remd_tmp(1),
      I3 => remd_tmp(2),
      I4 => remd_tmp(4),
      O => \remd[6]_i_2_n_0\
    );
\remd_tmp[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => dividend_tmp(7),
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in_0,
      I3 => cal_tmp_carry_n_7,
      O => \remd_tmp[0]_i_1_n_0\
    );
\remd_tmp[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \^q\(0),
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in_0,
      I3 => cal_tmp_carry_n_6,
      O => \remd_tmp[1]_i_1_n_0\
    );
\remd_tmp[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => remd_tmp(1),
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in_0,
      I3 => cal_tmp_carry_n_5,
      O => \remd_tmp[2]_i_1_n_0\
    );
\remd_tmp[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => remd_tmp(2),
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in_0,
      I3 => cal_tmp_carry_n_4,
      O => \remd_tmp[3]_i_1_n_0\
    );
\remd_tmp[4]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => remd_tmp(3),
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in_0,
      I3 => \cal_tmp_carry__0_n_7\,
      O => \remd_tmp[4]_i_1_n_0\
    );
\remd_tmp[5]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => remd_tmp(4),
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in_0,
      I3 => \cal_tmp_carry__0_n_6\,
      O => \remd_tmp[5]_i_1_n_0\
    );
\remd_tmp[6]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => remd_tmp(5),
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in_0,
      I3 => \cal_tmp_carry__0_n_5\,
      O => \remd_tmp[6]_i_1_n_0\
    );
\remd_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[0]_i_1_n_0\,
      Q => \^q\(0),
      R => '0'
    );
\remd_tmp_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[1]_i_1_n_0\,
      Q => remd_tmp(1),
      R => '0'
    );
\remd_tmp_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[2]_i_1_n_0\,
      Q => remd_tmp(2),
      R => '0'
    );
\remd_tmp_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[3]_i_1_n_0\,
      Q => remd_tmp(3),
      R => '0'
    );
\remd_tmp_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[4]_i_1_n_0\,
      Q => remd_tmp(4),
      R => '0'
    );
\remd_tmp_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[5]_i_1_n_0\,
      Q => remd_tmp(5),
      R => '0'
    );
\remd_tmp_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[6]_i_1_n_0\,
      Q => remd_tmp(6),
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1 is
  port (
    buff0_reg : out STD_LOGIC_VECTOR ( 7 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    p_9 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1 : entity is "fn1_mul_64ns_66ns_82_5_1";
end bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1 is
begin
fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U: entity work.bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0_1
     port map (
      Q(0) => Q(0),
      ap_clk => ap_clk,
      buff0_reg_0(7 downto 0) => buff0_reg(7 downto 0),
      p_7(15 downto 0) => p_7(15 downto 0),
      p_9(15 downto 0) => p_9(15 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_0 is
  port (
    ap_return : out STD_LOGIC_VECTOR ( 7 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    B : in STD_LOGIC_VECTOR ( 1 downto 0 );
    A : in STD_LOGIC_VECTOR ( 2 downto 0 );
    buff1_reg : in STD_LOGIC_VECTOR ( 1 downto 0 );
    \tmp_product__1\ : in STD_LOGIC_VECTOR ( 1 downto 0 );
    \buff0_reg__1\ : in STD_LOGIC_VECTOR ( 7 downto 0 );
    \tmp_product__0\ : in STD_LOGIC_VECTOR ( 1 downto 0 );
    \buff1_reg__2\ : in STD_LOGIC_VECTOR ( 2 downto 0 );
    \buff1_reg__0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \buff0_reg__2\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \buff0_reg__3\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \tmp_product__2\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \buff1_reg__2_0\ : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_0 : entity is "fn1_mul_64ns_66ns_82_5_1";
end bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_0;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_0 is
begin
fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U: entity work.bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_Multiplier_0
     port map (
      A(2 downto 0) => A(2 downto 0),
      B(1 downto 0) => B(1 downto 0),
      Q(0) => Q(0),
      ap_clk => ap_clk,
      ap_return(7 downto 0) => ap_return(7 downto 0),
      \buff0_reg__2_0\(0) => \buff0_reg__2\(0),
      \buff0_reg__3_0\(0) => \buff0_reg__3\(0),
      buff1_reg_0(1 downto 0) => buff1_reg(1 downto 0),
      \buff1_reg__0_0\(0) => \buff1_reg__0\(0),
      \buff1_reg__2_0\(2 downto 0) => \buff1_reg__2\(2 downto 0),
      \buff1_reg__2_1\(0) => \buff1_reg__2_0\(0),
      \tmp_product__0_0\(1 downto 0) => \tmp_product__0\(1 downto 0),
      \tmp_product__1_0\(8) => \tmp_product__1\(0),
      \tmp_product__1_0\(7 downto 0) => \buff0_reg__1\(7 downto 0),
      \tmp_product__1_1\(0) => \tmp_product__1\(1),
      \tmp_product__2_0\(0) => \tmp_product__2\(0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1 is
  port (
    D : out STD_LOGIC_VECTOR ( 39 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    p_reg : in STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1 : entity is "fn1_mul_8s_33ns_40_2_1";
end bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1 is
begin
fn1_mul_8s_33ns_40_2_1_Multiplier_1_U: entity work.bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1_Multiplier_1
     port map (
      D(39 downto 0) => D(39 downto 0),
      Q(0) => Q(0),
      ap_clk => ap_clk,
      p_reg_0(7 downto 0) => p_reg(7 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div is
  port (
    \remd_reg[6]_0\ : out STD_LOGIC_VECTOR ( 7 downto 0 );
    \remd_reg[6]_1\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[6]_2\ : out STD_LOGIC_VECTOR ( 2 downto 0 );
    \remd_reg[6]_3\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[6]_4\ : out STD_LOGIC_VECTOR ( 1 downto 0 );
    \remd_reg[6]_5\ : out STD_LOGIC_VECTOR ( 1 downto 0 );
    \remd_reg[6]_6\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[6]_7\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[6]_8\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    B : out STD_LOGIC_VECTOR ( 1 downto 0 );
    A : out STD_LOGIC_VECTOR ( 2 downto 0 );
    \remd_reg[6]_9\ : out STD_LOGIC_VECTOR ( 1 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    \divisor0_reg[39]_0\ : in STD_LOGIC_VECTOR ( 39 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div : entity is "fn1_srem_8s_40ns_7_12_seq_1_div";
end bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div is
  signal buff0_reg_i_3_n_0 : STD_LOGIC;
  signal \divisor0[12]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0[12]_inv_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[12]_inv_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[12]_inv_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[12]_inv_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[16]_inv_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[16]_inv_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[16]_inv_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[16]_inv_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[20]_inv_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[20]_inv_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[20]_inv_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[20]_inv_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[24]_inv_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[24]_inv_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[24]_inv_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[24]_inv_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[28]_inv_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[28]_inv_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[28]_inv_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[28]_inv_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[32]_inv_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[32]_inv_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[32]_inv_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[32]_inv_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[36]_inv_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[36]_inv_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[36]_inv_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[36]_inv_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[39]_inv_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[39]_inv_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[39]_inv_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_3__0_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_7_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[8]_inv_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[8]_inv_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[8]_inv_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[8]_inv_i_6_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[12]_inv_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_inv_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[12]_inv_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[12]_inv_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[16]_inv_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[16]_inv_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[16]_inv_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[16]_inv_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[20]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[20]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[20]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[20]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[20]_inv_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[20]_inv_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[20]_inv_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[20]_inv_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[24]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[24]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[24]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[24]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[24]_inv_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[24]_inv_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[24]_inv_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[24]_inv_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[28]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[28]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[28]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[28]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[28]_inv_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[28]_inv_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[28]_inv_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[28]_inv_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[32]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[32]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[32]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[32]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[32]_inv_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[32]_inv_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[32]_inv_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[32]_inv_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[36]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[36]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[36]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[36]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[36]_inv_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[36]_inv_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[36]_inv_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[36]_inv_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[39]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[39]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[39]_inv_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[39]_inv_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[8]_inv_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[8]_inv_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[8]_inv_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[8]_inv_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[0]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[10]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[11]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[12]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[13]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[14]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[15]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[16]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[17]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[18]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[19]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[1]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[20]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[21]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[22]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[23]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[24]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[25]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[26]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[27]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[28]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[29]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[2]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[30]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[31]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[32]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[33]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[34]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[35]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[36]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[37]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[38]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[3]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[4]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[8]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal divisor_u : STD_LOGIC_VECTOR ( 39 downto 1 );
  signal divisor_u0 : STD_LOGIC_VECTOR ( 39 downto 1 );
  signal done0 : STD_LOGIC;
  signal fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_1 : STD_LOGIC;
  signal fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_2 : STD_LOGIC;
  signal fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_3 : STD_LOGIC;
  signal fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_4 : STD_LOGIC;
  signal fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_5 : STD_LOGIC;
  signal fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_6 : STD_LOGIC;
  signal grp_fu_121_p1 : STD_LOGIC_VECTOR ( 39 downto 1 );
  signal p_0_in_0 : STD_LOGIC;
  signal remd : STD_LOGIC_VECTOR ( 6 downto 1 );
  signal \^remd_reg[6]_0\ : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal remd_tmp : STD_LOGIC_VECTOR ( 0 to 0 );
  signal start0 : STD_LOGIC;
  signal \NLW_divisor0_reg[39]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_divisor0_reg[39]_i_1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_divisor0_reg[39]_inv_i_2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_divisor0_reg[39]_inv_i_2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \divisor0[10]_inv_i_1\ : label is "soft_lutpair22";
  attribute SOFT_HLUTNM of \divisor0[11]_inv_i_1\ : label is "soft_lutpair23";
  attribute SOFT_HLUTNM of \divisor0[12]_inv_i_1\ : label is "soft_lutpair23";
  attribute SOFT_HLUTNM of \divisor0[13]_inv_i_1\ : label is "soft_lutpair22";
  attribute SOFT_HLUTNM of \divisor0[14]_inv_i_1\ : label is "soft_lutpair20";
  attribute SOFT_HLUTNM of \divisor0[15]_inv_i_1\ : label is "soft_lutpair21";
  attribute SOFT_HLUTNM of \divisor0[16]_inv_i_1\ : label is "soft_lutpair21";
  attribute SOFT_HLUTNM of \divisor0[17]_inv_i_1\ : label is "soft_lutpair20";
  attribute SOFT_HLUTNM of \divisor0[18]_inv_i_1\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \divisor0[19]_inv_i_1\ : label is "soft_lutpair19";
  attribute SOFT_HLUTNM of \divisor0[20]_inv_i_1\ : label is "soft_lutpair19";
  attribute SOFT_HLUTNM of \divisor0[21]_inv_i_1\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \divisor0[22]_inv_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \divisor0[23]_inv_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \divisor0[24]_inv_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \divisor0[25]_inv_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \divisor0[26]_inv_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \divisor0[27]_inv_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \divisor0[28]_inv_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \divisor0[29]_inv_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \divisor0[2]_i_1\ : label is "soft_lutpair27";
  attribute SOFT_HLUTNM of \divisor0[30]_inv_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \divisor0[31]_inv_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \divisor0[32]_inv_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \divisor0[33]_inv_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \divisor0[34]_inv_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \divisor0[35]_inv_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \divisor0[36]_inv_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \divisor0[37]_inv_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \divisor0[38]_inv_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \divisor0[39]_inv_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \divisor0[3]_i_1\ : label is "soft_lutpair27";
  attribute SOFT_HLUTNM of \divisor0[4]_i_1\ : label is "soft_lutpair26";
  attribute SOFT_HLUTNM of \divisor0[5]_i_1\ : label is "soft_lutpair26";
  attribute SOFT_HLUTNM of \divisor0[6]_i_1\ : label is "soft_lutpair24";
  attribute SOFT_HLUTNM of \divisor0[7]_i_1\ : label is "soft_lutpair25";
  attribute SOFT_HLUTNM of \divisor0[8]_inv_i_1\ : label is "soft_lutpair25";
  attribute SOFT_HLUTNM of \divisor0[9]_inv_i_1\ : label is "soft_lutpair24";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \divisor0_reg[12]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[12]_inv_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[16]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[16]_inv_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[20]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[20]_inv_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[24]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[24]_inv_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[28]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[28]_inv_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[32]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[32]_inv_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[36]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[36]_inv_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[39]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[39]_inv_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[4]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[4]_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[8]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[8]_inv_i_2\ : label is 35;
begin
  \remd_reg[6]_0\(7 downto 0) <= \^remd_reg[6]_0\(7 downto 0);
\buff0_reg__0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => A(2)
    );
\buff0_reg__1_i_1__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_5\(0)
    );
\buff0_reg__1_i_2__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \^remd_reg[6]_0\(7)
    );
\buff0_reg__1_i_3__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \^remd_reg[6]_0\(6)
    );
\buff0_reg__1_i_4__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000001FFFFFFFE"
    )
        port map (
      I0 => remd(4),
      I1 => remd(2),
      I2 => \^remd_reg[6]_0\(0),
      I3 => remd(1),
      I4 => remd(3),
      I5 => remd(5),
      O => \^remd_reg[6]_0\(5)
    );
\buff0_reg__1_i_5\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0001FFFE"
    )
        port map (
      I0 => remd(3),
      I1 => remd(1),
      I2 => \^remd_reg[6]_0\(0),
      I3 => remd(2),
      I4 => remd(4),
      O => \^remd_reg[6]_0\(4)
    );
\buff0_reg__1_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"01FE"
    )
        port map (
      I0 => remd(2),
      I1 => \^remd_reg[6]_0\(0),
      I2 => remd(1),
      I3 => remd(3),
      O => \^remd_reg[6]_0\(3)
    );
\buff0_reg__1_i_7\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"1E"
    )
        port map (
      I0 => remd(1),
      I1 => \^remd_reg[6]_0\(0),
      I2 => remd(2),
      O => \^remd_reg[6]_0\(2)
    );
\buff0_reg__1_i_8\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \^remd_reg[6]_0\(0),
      I1 => remd(1),
      O => \^remd_reg[6]_0\(1)
    );
\buff0_reg__2_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_6\(0)
    );
\buff0_reg__3_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_8\(0)
    );
\buff0_reg_i_1__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => B(1)
    );
\buff0_reg_i_2__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => B(0)
    );
buff0_reg_i_3: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => remd(4),
      I1 => remd(2),
      I2 => \^remd_reg[6]_0\(0),
      I3 => remd(1),
      I4 => remd(3),
      I5 => remd(5),
      O => buff0_reg_i_3_n_0
    );
\buff1_reg__0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_2\(0)
    );
\buff1_reg__0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_1\(0)
    );
\buff1_reg__1_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_2\(2)
    );
\buff1_reg__1_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_2\(1)
    );
\buff1_reg__2_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_3\(0)
    );
buff1_reg_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_9\(1)
    );
buff1_reg_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_9\(0)
    );
\divisor0[10]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(10),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[10]\,
      O => divisor_u(10)
    );
\divisor0[11]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(11),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[11]\,
      O => divisor_u(11)
    );
\divisor0[12]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg[39]_0\(9),
      O => \divisor0[12]_i_2_n_0\
    );
\divisor0[12]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(12),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[12]\,
      O => divisor_u(12)
    );
\divisor0[12]_inv_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[12]\,
      O => \divisor0[12]_inv_i_3_n_0\
    );
\divisor0[12]_inv_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[11]\,
      O => \divisor0[12]_inv_i_4_n_0\
    );
\divisor0[12]_inv_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[10]\,
      O => \divisor0[12]_inv_i_5_n_0\
    );
\divisor0[12]_inv_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[9]\,
      O => \divisor0[12]_inv_i_6_n_0\
    );
\divisor0[13]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(13),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[13]\,
      O => divisor_u(13)
    );
\divisor0[14]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(14),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[14]\,
      O => divisor_u(14)
    );
\divisor0[15]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(15),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[15]\,
      O => divisor_u(15)
    );
\divisor0[16]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(16),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[16]\,
      O => divisor_u(16)
    );
\divisor0[16]_inv_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[16]\,
      O => \divisor0[16]_inv_i_3_n_0\
    );
\divisor0[16]_inv_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[15]\,
      O => \divisor0[16]_inv_i_4_n_0\
    );
\divisor0[16]_inv_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[14]\,
      O => \divisor0[16]_inv_i_5_n_0\
    );
\divisor0[16]_inv_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[13]\,
      O => \divisor0[16]_inv_i_6_n_0\
    );
\divisor0[17]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(17),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[17]\,
      O => divisor_u(17)
    );
\divisor0[18]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(18),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[18]\,
      O => divisor_u(18)
    );
\divisor0[19]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(19),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[19]\,
      O => divisor_u(19)
    );
\divisor0[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(1),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[1]\,
      O => divisor_u(1)
    );
\divisor0[20]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(20),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[20]\,
      O => divisor_u(20)
    );
\divisor0[20]_inv_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[20]\,
      O => \divisor0[20]_inv_i_3_n_0\
    );
\divisor0[20]_inv_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[19]\,
      O => \divisor0[20]_inv_i_4_n_0\
    );
\divisor0[20]_inv_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[18]\,
      O => \divisor0[20]_inv_i_5_n_0\
    );
\divisor0[20]_inv_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[17]\,
      O => \divisor0[20]_inv_i_6_n_0\
    );
\divisor0[21]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(21),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[21]\,
      O => divisor_u(21)
    );
\divisor0[22]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(22),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[22]\,
      O => divisor_u(22)
    );
\divisor0[23]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(23),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[23]\,
      O => divisor_u(23)
    );
\divisor0[24]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(24),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[24]\,
      O => divisor_u(24)
    );
\divisor0[24]_inv_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[24]\,
      O => \divisor0[24]_inv_i_3_n_0\
    );
\divisor0[24]_inv_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[23]\,
      O => \divisor0[24]_inv_i_4_n_0\
    );
\divisor0[24]_inv_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[22]\,
      O => \divisor0[24]_inv_i_5_n_0\
    );
\divisor0[24]_inv_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[21]\,
      O => \divisor0[24]_inv_i_6_n_0\
    );
\divisor0[25]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(25),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[25]\,
      O => divisor_u(25)
    );
\divisor0[26]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(26),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[26]\,
      O => divisor_u(26)
    );
\divisor0[27]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(27),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[27]\,
      O => divisor_u(27)
    );
\divisor0[28]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(28),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[28]\,
      O => divisor_u(28)
    );
\divisor0[28]_inv_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[28]\,
      O => \divisor0[28]_inv_i_3_n_0\
    );
\divisor0[28]_inv_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[27]\,
      O => \divisor0[28]_inv_i_4_n_0\
    );
\divisor0[28]_inv_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[26]\,
      O => \divisor0[28]_inv_i_5_n_0\
    );
\divisor0[28]_inv_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[25]\,
      O => \divisor0[28]_inv_i_6_n_0\
    );
\divisor0[29]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(29),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[29]\,
      O => divisor_u(29)
    );
\divisor0[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(2),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[2]\,
      O => divisor_u(2)
    );
\divisor0[30]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(30),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[30]\,
      O => divisor_u(30)
    );
\divisor0[31]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(31),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[31]\,
      O => divisor_u(31)
    );
\divisor0[32]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(32),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[32]\,
      O => divisor_u(32)
    );
\divisor0[32]_inv_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[32]\,
      O => \divisor0[32]_inv_i_3_n_0\
    );
\divisor0[32]_inv_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \divisor0[32]_inv_i_4_n_0\
    );
\divisor0[32]_inv_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[30]\,
      O => \divisor0[32]_inv_i_5_n_0\
    );
\divisor0[32]_inv_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[29]\,
      O => \divisor0[32]_inv_i_6_n_0\
    );
\divisor0[33]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(33),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[33]\,
      O => divisor_u(33)
    );
\divisor0[34]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(34),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[34]\,
      O => divisor_u(34)
    );
\divisor0[35]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(35),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[35]\,
      O => divisor_u(35)
    );
\divisor0[36]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(36),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[36]\,
      O => divisor_u(36)
    );
\divisor0[36]_inv_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[36]\,
      O => \divisor0[36]_inv_i_3_n_0\
    );
\divisor0[36]_inv_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[35]\,
      O => \divisor0[36]_inv_i_4_n_0\
    );
\divisor0[36]_inv_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[34]\,
      O => \divisor0[36]_inv_i_5_n_0\
    );
\divisor0[36]_inv_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[33]\,
      O => \divisor0[36]_inv_i_6_n_0\
    );
\divisor0[37]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(37),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[37]\,
      O => divisor_u(37)
    );
\divisor0[38]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(38),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[38]\,
      O => divisor_u(38)
    );
\divisor0[39]_inv_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => p_0_in_0,
      I1 => divisor_u0(39),
      O => divisor_u(39)
    );
\divisor0[39]_inv_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_0_in_0,
      O => \divisor0[39]_inv_i_3_n_0\
    );
\divisor0[39]_inv_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[38]\,
      O => \divisor0[39]_inv_i_4_n_0\
    );
\divisor0[39]_inv_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[37]\,
      O => \divisor0[39]_inv_i_5_n_0\
    );
\divisor0[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(3),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[3]\,
      O => divisor_u(3)
    );
\divisor0[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(4),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[4]\,
      O => divisor_u(4)
    );
\divisor0[4]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg[39]_0\(3),
      O => \divisor0[4]_i_2_n_0\
    );
\divisor0[4]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg[39]_0\(2),
      O => \divisor0[4]_i_3_n_0\
    );
\divisor0[4]_i_3__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[0]\,
      O => \divisor0[4]_i_3__0_n_0\
    );
\divisor0[4]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[4]\,
      O => \divisor0[4]_i_4_n_0\
    );
\divisor0[4]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[3]\,
      O => \divisor0[4]_i_5_n_0\
    );
\divisor0[4]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[2]\,
      O => \divisor0[4]_i_6_n_0\
    );
\divisor0[4]_i_7\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[1]\,
      O => \divisor0[4]_i_7_n_0\
    );
\divisor0[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(5),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[5]\,
      O => divisor_u(5)
    );
\divisor0[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(6),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[6]\,
      O => divisor_u(6)
    );
\divisor0[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(7),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[7]\,
      O => divisor_u(7)
    );
\divisor0[8]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg[39]_0\(8),
      O => \divisor0[8]_i_2_n_0\
    );
\divisor0[8]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg[39]_0\(7),
      O => \divisor0[8]_i_3_n_0\
    );
\divisor0[8]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg[39]_0\(5),
      O => \divisor0[8]_i_4_n_0\
    );
\divisor0[8]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(8),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[8]\,
      O => divisor_u(8)
    );
\divisor0[8]_inv_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[8]\,
      O => \divisor0[8]_inv_i_3_n_0\
    );
\divisor0[8]_inv_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[7]\,
      O => \divisor0[8]_inv_i_4_n_0\
    );
\divisor0[8]_inv_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[6]\,
      O => \divisor0[8]_inv_i_5_n_0\
    );
\divisor0[8]_inv_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[5]\,
      O => \divisor0[8]_inv_i_6_n_0\
    );
\divisor0[9]_inv_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => divisor_u0(9),
      I1 => p_0_in_0,
      I2 => \divisor0_reg_n_0_[9]\,
      O => divisor_u(9)
    );
\divisor0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[39]_0\(0),
      Q => \divisor0_reg_n_0_[0]\,
      R => '0'
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(10),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(11),
      Q => \divisor0_reg_n_0_[11]\,
      R => '0'
    );
\divisor0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(12),
      Q => \divisor0_reg_n_0_[12]\,
      R => '0'
    );
\divisor0_reg[12]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[8]_i_1_n_0\,
      CO(3) => \divisor0_reg[12]_i_1_n_0\,
      CO(2) => \divisor0_reg[12]_i_1_n_1\,
      CO(1) => \divisor0_reg[12]_i_1_n_2\,
      CO(0) => \divisor0_reg[12]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \divisor0_reg[39]_0\(9),
      O(3 downto 0) => grp_fu_121_p1(12 downto 9),
      S(3 downto 1) => \divisor0_reg[39]_0\(12 downto 10),
      S(0) => \divisor0[12]_i_2_n_0\
    );
\divisor0_reg[12]_inv_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[8]_inv_i_2_n_0\,
      CO(3) => \divisor0_reg[12]_inv_i_2_n_0\,
      CO(2) => \divisor0_reg[12]_inv_i_2_n_1\,
      CO(1) => \divisor0_reg[12]_inv_i_2_n_2\,
      CO(0) => \divisor0_reg[12]_inv_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(12 downto 9),
      S(3) => \divisor0[12]_inv_i_3_n_0\,
      S(2) => \divisor0[12]_inv_i_4_n_0\,
      S(1) => \divisor0[12]_inv_i_5_n_0\,
      S(0) => \divisor0[12]_inv_i_6_n_0\
    );
\divisor0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(13),
      Q => \divisor0_reg_n_0_[13]\,
      R => '0'
    );
\divisor0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(14),
      Q => \divisor0_reg_n_0_[14]\,
      R => '0'
    );
\divisor0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(15),
      Q => \divisor0_reg_n_0_[15]\,
      R => '0'
    );
\divisor0_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(16),
      Q => \divisor0_reg_n_0_[16]\,
      R => '0'
    );
\divisor0_reg[16]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[12]_i_1_n_0\,
      CO(3) => \divisor0_reg[16]_i_1_n_0\,
      CO(2) => \divisor0_reg[16]_i_1_n_1\,
      CO(1) => \divisor0_reg[16]_i_1_n_2\,
      CO(0) => \divisor0_reg[16]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => grp_fu_121_p1(16 downto 13),
      S(3 downto 0) => \divisor0_reg[39]_0\(16 downto 13)
    );
\divisor0_reg[16]_inv_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[12]_inv_i_2_n_0\,
      CO(3) => \divisor0_reg[16]_inv_i_2_n_0\,
      CO(2) => \divisor0_reg[16]_inv_i_2_n_1\,
      CO(1) => \divisor0_reg[16]_inv_i_2_n_2\,
      CO(0) => \divisor0_reg[16]_inv_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(16 downto 13),
      S(3) => \divisor0[16]_inv_i_3_n_0\,
      S(2) => \divisor0[16]_inv_i_4_n_0\,
      S(1) => \divisor0[16]_inv_i_5_n_0\,
      S(0) => \divisor0[16]_inv_i_6_n_0\
    );
\divisor0_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(17),
      Q => \divisor0_reg_n_0_[17]\,
      R => '0'
    );
\divisor0_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(18),
      Q => \divisor0_reg_n_0_[18]\,
      R => '0'
    );
\divisor0_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(19),
      Q => \divisor0_reg_n_0_[19]\,
      R => '0'
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(1),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(20),
      Q => \divisor0_reg_n_0_[20]\,
      R => '0'
    );
\divisor0_reg[20]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[16]_i_1_n_0\,
      CO(3) => \divisor0_reg[20]_i_1_n_0\,
      CO(2) => \divisor0_reg[20]_i_1_n_1\,
      CO(1) => \divisor0_reg[20]_i_1_n_2\,
      CO(0) => \divisor0_reg[20]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => grp_fu_121_p1(20 downto 17),
      S(3 downto 0) => \divisor0_reg[39]_0\(20 downto 17)
    );
\divisor0_reg[20]_inv_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[16]_inv_i_2_n_0\,
      CO(3) => \divisor0_reg[20]_inv_i_2_n_0\,
      CO(2) => \divisor0_reg[20]_inv_i_2_n_1\,
      CO(1) => \divisor0_reg[20]_inv_i_2_n_2\,
      CO(0) => \divisor0_reg[20]_inv_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(20 downto 17),
      S(3) => \divisor0[20]_inv_i_3_n_0\,
      S(2) => \divisor0[20]_inv_i_4_n_0\,
      S(1) => \divisor0[20]_inv_i_5_n_0\,
      S(0) => \divisor0[20]_inv_i_6_n_0\
    );
\divisor0_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(21),
      Q => \divisor0_reg_n_0_[21]\,
      R => '0'
    );
\divisor0_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(22),
      Q => \divisor0_reg_n_0_[22]\,
      R => '0'
    );
\divisor0_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(23),
      Q => \divisor0_reg_n_0_[23]\,
      R => '0'
    );
\divisor0_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(24),
      Q => \divisor0_reg_n_0_[24]\,
      R => '0'
    );
\divisor0_reg[24]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[20]_i_1_n_0\,
      CO(3) => \divisor0_reg[24]_i_1_n_0\,
      CO(2) => \divisor0_reg[24]_i_1_n_1\,
      CO(1) => \divisor0_reg[24]_i_1_n_2\,
      CO(0) => \divisor0_reg[24]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => grp_fu_121_p1(24 downto 21),
      S(3 downto 0) => \divisor0_reg[39]_0\(24 downto 21)
    );
\divisor0_reg[24]_inv_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[20]_inv_i_2_n_0\,
      CO(3) => \divisor0_reg[24]_inv_i_2_n_0\,
      CO(2) => \divisor0_reg[24]_inv_i_2_n_1\,
      CO(1) => \divisor0_reg[24]_inv_i_2_n_2\,
      CO(0) => \divisor0_reg[24]_inv_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(24 downto 21),
      S(3) => \divisor0[24]_inv_i_3_n_0\,
      S(2) => \divisor0[24]_inv_i_4_n_0\,
      S(1) => \divisor0[24]_inv_i_5_n_0\,
      S(0) => \divisor0[24]_inv_i_6_n_0\
    );
\divisor0_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(25),
      Q => \divisor0_reg_n_0_[25]\,
      R => '0'
    );
\divisor0_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(26),
      Q => \divisor0_reg_n_0_[26]\,
      R => '0'
    );
\divisor0_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(27),
      Q => \divisor0_reg_n_0_[27]\,
      R => '0'
    );
\divisor0_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(28),
      Q => \divisor0_reg_n_0_[28]\,
      R => '0'
    );
\divisor0_reg[28]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[24]_i_1_n_0\,
      CO(3) => \divisor0_reg[28]_i_1_n_0\,
      CO(2) => \divisor0_reg[28]_i_1_n_1\,
      CO(1) => \divisor0_reg[28]_i_1_n_2\,
      CO(0) => \divisor0_reg[28]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => grp_fu_121_p1(28 downto 25),
      S(3 downto 0) => \divisor0_reg[39]_0\(28 downto 25)
    );
\divisor0_reg[28]_inv_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[24]_inv_i_2_n_0\,
      CO(3) => \divisor0_reg[28]_inv_i_2_n_0\,
      CO(2) => \divisor0_reg[28]_inv_i_2_n_1\,
      CO(1) => \divisor0_reg[28]_inv_i_2_n_2\,
      CO(0) => \divisor0_reg[28]_inv_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(28 downto 25),
      S(3) => \divisor0[28]_inv_i_3_n_0\,
      S(2) => \divisor0[28]_inv_i_4_n_0\,
      S(1) => \divisor0[28]_inv_i_5_n_0\,
      S(0) => \divisor0[28]_inv_i_6_n_0\
    );
\divisor0_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(29),
      Q => \divisor0_reg_n_0_[29]\,
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(2),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(30),
      Q => \divisor0_reg_n_0_[30]\,
      R => '0'
    );
\divisor0_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(31),
      Q => \divisor0_reg_n_0_[31]\,
      R => '0'
    );
\divisor0_reg[32]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(32),
      Q => \divisor0_reg_n_0_[32]\,
      R => '0'
    );
\divisor0_reg[32]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[28]_i_1_n_0\,
      CO(3) => \divisor0_reg[32]_i_1_n_0\,
      CO(2) => \divisor0_reg[32]_i_1_n_1\,
      CO(1) => \divisor0_reg[32]_i_1_n_2\,
      CO(0) => \divisor0_reg[32]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => grp_fu_121_p1(32 downto 29),
      S(3 downto 0) => \divisor0_reg[39]_0\(32 downto 29)
    );
\divisor0_reg[32]_inv_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[28]_inv_i_2_n_0\,
      CO(3) => \divisor0_reg[32]_inv_i_2_n_0\,
      CO(2) => \divisor0_reg[32]_inv_i_2_n_1\,
      CO(1) => \divisor0_reg[32]_inv_i_2_n_2\,
      CO(0) => \divisor0_reg[32]_inv_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(32 downto 29),
      S(3) => \divisor0[32]_inv_i_3_n_0\,
      S(2) => \divisor0[32]_inv_i_4_n_0\,
      S(1) => \divisor0[32]_inv_i_5_n_0\,
      S(0) => \divisor0[32]_inv_i_6_n_0\
    );
\divisor0_reg[33]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(33),
      Q => \divisor0_reg_n_0_[33]\,
      R => '0'
    );
\divisor0_reg[34]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(34),
      Q => \divisor0_reg_n_0_[34]\,
      R => '0'
    );
\divisor0_reg[35]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(35),
      Q => \divisor0_reg_n_0_[35]\,
      R => '0'
    );
\divisor0_reg[36]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(36),
      Q => \divisor0_reg_n_0_[36]\,
      R => '0'
    );
\divisor0_reg[36]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[32]_i_1_n_0\,
      CO(3) => \divisor0_reg[36]_i_1_n_0\,
      CO(2) => \divisor0_reg[36]_i_1_n_1\,
      CO(1) => \divisor0_reg[36]_i_1_n_2\,
      CO(0) => \divisor0_reg[36]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => grp_fu_121_p1(36 downto 33),
      S(3 downto 0) => \divisor0_reg[39]_0\(36 downto 33)
    );
\divisor0_reg[36]_inv_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[32]_inv_i_2_n_0\,
      CO(3) => \divisor0_reg[36]_inv_i_2_n_0\,
      CO(2) => \divisor0_reg[36]_inv_i_2_n_1\,
      CO(1) => \divisor0_reg[36]_inv_i_2_n_2\,
      CO(0) => \divisor0_reg[36]_inv_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(36 downto 33),
      S(3) => \divisor0[36]_inv_i_3_n_0\,
      S(2) => \divisor0[36]_inv_i_4_n_0\,
      S(1) => \divisor0[36]_inv_i_5_n_0\,
      S(0) => \divisor0[36]_inv_i_6_n_0\
    );
\divisor0_reg[37]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(37),
      Q => \divisor0_reg_n_0_[37]\,
      R => '0'
    );
\divisor0_reg[38]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(38),
      Q => \divisor0_reg_n_0_[38]\,
      R => '0'
    );
\divisor0_reg[39]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(39),
      Q => p_0_in_0,
      R => '0'
    );
\divisor0_reg[39]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[36]_i_1_n_0\,
      CO(3 downto 2) => \NLW_divisor0_reg[39]_i_1_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \divisor0_reg[39]_i_1_n_2\,
      CO(0) => \divisor0_reg[39]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \NLW_divisor0_reg[39]_i_1_O_UNCONNECTED\(3),
      O(2 downto 0) => grp_fu_121_p1(39 downto 37),
      S(3) => '0',
      S(2 downto 0) => \divisor0_reg[39]_0\(39 downto 37)
    );
\divisor0_reg[39]_inv_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[36]_inv_i_2_n_0\,
      CO(3 downto 2) => \NLW_divisor0_reg[39]_inv_i_2_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \divisor0_reg[39]_inv_i_2_n_2\,
      CO(0) => \divisor0_reg[39]_inv_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \NLW_divisor0_reg[39]_inv_i_2_O_UNCONNECTED\(3),
      O(2 downto 0) => divisor_u0(39 downto 37),
      S(3) => '0',
      S(2) => \divisor0[39]_inv_i_3_n_0\,
      S(1) => \divisor0[39]_inv_i_4_n_0\,
      S(0) => \divisor0[39]_inv_i_5_n_0\
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(3),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(4),
      Q => \divisor0_reg_n_0_[4]\,
      R => '0'
    );
\divisor0_reg[4]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \divisor0_reg[4]_i_1_n_0\,
      CO(2) => \divisor0_reg[4]_i_1_n_1\,
      CO(1) => \divisor0_reg[4]_i_1_n_2\,
      CO(0) => \divisor0_reg[4]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 1) => \divisor0_reg[39]_0\(3 downto 2),
      DI(0) => '0',
      O(3 downto 0) => grp_fu_121_p1(4 downto 1),
      S(3) => \divisor0_reg[39]_0\(4),
      S(2) => \divisor0[4]_i_2_n_0\,
      S(1) => \divisor0[4]_i_3_n_0\,
      S(0) => \divisor0_reg[39]_0\(1)
    );
\divisor0_reg[4]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \divisor0_reg[4]_i_2_n_0\,
      CO(2) => \divisor0_reg[4]_i_2_n_1\,
      CO(1) => \divisor0_reg[4]_i_2_n_2\,
      CO(0) => \divisor0_reg[4]_i_2_n_3\,
      CYINIT => \divisor0[4]_i_3__0_n_0\,
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(4 downto 1),
      S(3) => \divisor0[4]_i_4_n_0\,
      S(2) => \divisor0[4]_i_5_n_0\,
      S(1) => \divisor0[4]_i_6_n_0\,
      S(0) => \divisor0[4]_i_7_n_0\
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(5),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(6),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(7),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(8),
      Q => \divisor0_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[8]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[4]_i_1_n_0\,
      CO(3) => \divisor0_reg[8]_i_1_n_0\,
      CO(2) => \divisor0_reg[8]_i_1_n_1\,
      CO(1) => \divisor0_reg[8]_i_1_n_2\,
      CO(0) => \divisor0_reg[8]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 2) => \divisor0_reg[39]_0\(8 downto 7),
      DI(1) => '0',
      DI(0) => \divisor0_reg[39]_0\(5),
      O(3 downto 0) => grp_fu_121_p1(8 downto 5),
      S(3) => \divisor0[8]_i_2_n_0\,
      S(2) => \divisor0[8]_i_3_n_0\,
      S(1) => \divisor0_reg[39]_0\(6),
      S(0) => \divisor0[8]_i_4_n_0\
    );
\divisor0_reg[8]_inv_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[4]_i_2_n_0\,
      CO(3) => \divisor0_reg[8]_inv_i_2_n_0\,
      CO(2) => \divisor0_reg[8]_inv_i_2_n_1\,
      CO(1) => \divisor0_reg[8]_inv_i_2_n_2\,
      CO(0) => \divisor0_reg[8]_inv_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(8 downto 5),
      S(3) => \divisor0[8]_inv_i_3_n_0\,
      S(2) => \divisor0[8]_inv_i_4_n_0\,
      S(1) => \divisor0[8]_inv_i_5_n_0\,
      S(0) => \divisor0[8]_inv_i_6_n_0\
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_121_p1(9),
      Q => \divisor0_reg_n_0_[9]\,
      R => '0'
    );
fn1_srem_8s_40ns_7_12_seq_1_div_u_0: entity work.bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div_u
     port map (
      D(5) => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_1,
      D(4) => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_2,
      D(3) => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_3,
      D(2) => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_4,
      D(1) => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_5,
      D(0) => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_6,
      E(0) => start0,
      Q(0) => remd_tmp(0),
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      \divisor0_reg[39]_inv_0\(39 downto 1) => divisor_u(39 downto 1),
      \divisor0_reg[39]_inv_0\(0) => \divisor0_reg_n_0_[0]\,
      \r_stage_reg[8]_0\(0) => done0
    );
\remd_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => done0,
      D => remd_tmp(0),
      Q => \^remd_reg[6]_0\(0),
      R => '0'
    );
\remd_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => done0,
      D => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_6,
      Q => remd(1),
      R => '0'
    );
\remd_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => done0,
      D => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_5,
      Q => remd(2),
      R => '0'
    );
\remd_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => done0,
      D => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_4,
      Q => remd(3),
      R => '0'
    );
\remd_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => done0,
      D => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_3,
      Q => remd(4),
      R => '0'
    );
\remd_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => done0,
      D => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_2,
      Q => remd(5),
      R => '0'
    );
\remd_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => done0,
      D => fn1_srem_8s_40ns_7_12_seq_1_div_u_0_n_1,
      Q => remd(6),
      R => '0'
    );
start0_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => Q(0),
      Q => start0,
      R => '0'
    );
\tmp_product__0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_4\(1)
    );
\tmp_product__0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_4\(0)
    );
\tmp_product__1_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_5\(1)
    );
\tmp_product__2_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => \remd_reg[6]_7\(0)
    );
tmp_product_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => A(1)
    );
tmp_product_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => buff0_reg_i_3_n_0,
      I1 => remd(6),
      O => A(0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1 is
  port (
    \remd_reg[6]\ : out STD_LOGIC_VECTOR ( 7 downto 0 );
    \remd_reg[6]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[6]_1\ : out STD_LOGIC_VECTOR ( 2 downto 0 );
    \remd_reg[6]_2\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[6]_3\ : out STD_LOGIC_VECTOR ( 1 downto 0 );
    \remd_reg[6]_4\ : out STD_LOGIC_VECTOR ( 1 downto 0 );
    \remd_reg[6]_5\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[6]_6\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[6]_7\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    B : out STD_LOGIC_VECTOR ( 1 downto 0 );
    A : out STD_LOGIC_VECTOR ( 2 downto 0 );
    \remd_reg[6]_8\ : out STD_LOGIC_VECTOR ( 1 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    \divisor0_reg[39]\ : in STD_LOGIC_VECTOR ( 39 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1 : entity is "fn1_srem_8s_40ns_7_12_seq_1";
end bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1 is
begin
fn1_srem_8s_40ns_7_12_seq_1_div_U: entity work.bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1_div
     port map (
      A(2 downto 0) => A(2 downto 0),
      B(1 downto 0) => B(1 downto 0),
      Q(0) => Q(0),
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      \divisor0_reg[39]_0\(39 downto 0) => \divisor0_reg[39]\(39 downto 0),
      \remd_reg[6]_0\(7 downto 0) => \remd_reg[6]\(7 downto 0),
      \remd_reg[6]_1\(0) => \remd_reg[6]_0\(0),
      \remd_reg[6]_2\(2 downto 0) => \remd_reg[6]_1\(2 downto 0),
      \remd_reg[6]_3\(0) => \remd_reg[6]_2\(0),
      \remd_reg[6]_4\(1 downto 0) => \remd_reg[6]_3\(1 downto 0),
      \remd_reg[6]_5\(1 downto 0) => \remd_reg[6]_4\(1 downto 0),
      \remd_reg[6]_6\(0) => \remd_reg[6]_5\(0),
      \remd_reg[6]_7\(0) => \remd_reg[6]_6\(0),
      \remd_reg[6]_8\(0) => \remd_reg[6]_7\(0),
      \remd_reg[6]_9\(1 downto 0) => \remd_reg[6]_8\(1 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1 is
  port (
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_9 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_11 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    ap_return : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1 : entity is "fn1";
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000000000000001";
  attribute ap_ST_fsm_state10 : string;
  attribute ap_ST_fsm_state10 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000001000000000";
  attribute ap_ST_fsm_state11 : string;
  attribute ap_ST_fsm_state11 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000010000000000";
  attribute ap_ST_fsm_state12 : string;
  attribute ap_ST_fsm_state12 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000100000000000";
  attribute ap_ST_fsm_state13 : string;
  attribute ap_ST_fsm_state13 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000001000000000000";
  attribute ap_ST_fsm_state14 : string;
  attribute ap_ST_fsm_state14 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000010000000000000";
  attribute ap_ST_fsm_state15 : string;
  attribute ap_ST_fsm_state15 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000100000000000000";
  attribute ap_ST_fsm_state16 : string;
  attribute ap_ST_fsm_state16 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000001000000000000000";
  attribute ap_ST_fsm_state17 : string;
  attribute ap_ST_fsm_state17 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000010000000000000000";
  attribute ap_ST_fsm_state18 : string;
  attribute ap_ST_fsm_state18 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000100000000000000000";
  attribute ap_ST_fsm_state19 : string;
  attribute ap_ST_fsm_state19 of bd_0_hls_inst_0_fn1 : entity is "25'b0000001000000000000000000";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000000000000010";
  attribute ap_ST_fsm_state20 : string;
  attribute ap_ST_fsm_state20 of bd_0_hls_inst_0_fn1 : entity is "25'b0000010000000000000000000";
  attribute ap_ST_fsm_state21 : string;
  attribute ap_ST_fsm_state21 of bd_0_hls_inst_0_fn1 : entity is "25'b0000100000000000000000000";
  attribute ap_ST_fsm_state22 : string;
  attribute ap_ST_fsm_state22 of bd_0_hls_inst_0_fn1 : entity is "25'b0001000000000000000000000";
  attribute ap_ST_fsm_state23 : string;
  attribute ap_ST_fsm_state23 of bd_0_hls_inst_0_fn1 : entity is "25'b0010000000000000000000000";
  attribute ap_ST_fsm_state24 : string;
  attribute ap_ST_fsm_state24 of bd_0_hls_inst_0_fn1 : entity is "25'b0100000000000000000000000";
  attribute ap_ST_fsm_state25 : string;
  attribute ap_ST_fsm_state25 of bd_0_hls_inst_0_fn1 : entity is "25'b1000000000000000000000000";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000000000000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000000000001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000000000010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000000000100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000000001000000";
  attribute ap_ST_fsm_state8 : string;
  attribute ap_ST_fsm_state8 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000000010000000";
  attribute ap_ST_fsm_state9 : string;
  attribute ap_ST_fsm_state9 of bd_0_hls_inst_0_fn1 : entity is "25'b0000000000000000100000000";
  attribute hls_module : string;
  attribute hls_module of bd_0_hls_inst_0_fn1 : entity is "yes";
end bd_0_hls_inst_0_fn1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1 is
  signal \ap_CS_fsm[1]_i_2_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_3_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_4_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_5_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[10]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[11]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[12]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[13]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[14]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[15]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[16]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[17]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[18]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[1]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[20]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[21]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[22]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[23]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[2]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[3]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[4]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[6]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[9]\ : STD_LOGIC;
  signal ap_CS_fsm_state1 : STD_LOGIC;
  signal ap_CS_fsm_state20 : STD_LOGIC;
  signal ap_CS_fsm_state6 : STD_LOGIC;
  signal ap_CS_fsm_state8 : STD_LOGIC;
  signal ap_NS_fsm : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \^ap_done\ : STD_LOGIC;
  signal \fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U/buff1_reg__5\ : STD_LOGIC_VECTOR ( 81 downto 74 );
  signal \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\ : STD_LOGIC_VECTOR ( 39 downto 0 );
  signal mul_ln21_reg_184 : STD_LOGIC_VECTOR ( 39 downto 0 );
  signal remd : STD_LOGIC_VECTOR ( 0 to 0 );
  signal srem_8s_40ns_7_12_seq_1_U3_n_0 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_1 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_10 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_11 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_12 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_13 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_14 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_15 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_16 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_17 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_18 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_19 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_2 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_20 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_21 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_22 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_23 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_24 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_25 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_26 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_3 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_4 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_5 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_6 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_8 : STD_LOGIC;
  signal srem_8s_40ns_7_12_seq_1_U3_n_9 : STD_LOGIC;
  signal start : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \ap_CS_fsm[0]_i_1\ : label is "soft_lutpair28";
  attribute FSM_ENCODING : string;
  attribute FSM_ENCODING of \ap_CS_fsm_reg[0]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[10]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[11]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[12]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[13]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[14]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[15]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[16]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[17]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[18]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[19]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[1]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[20]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[21]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[22]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[23]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[24]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[2]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[3]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[4]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[5]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[6]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[7]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[8]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[9]\ : label is "none";
  attribute SOFT_HLUTNM of ap_idle_INST_0 : label is "soft_lutpair28";
begin
  ap_done <= \^ap_done\;
  ap_ready <= \^ap_done\;
\ap_CS_fsm[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"F4"
    )
        port map (
      I0 => ap_start,
      I1 => ap_CS_fsm_state1,
      I2 => \^ap_done\,
      O => ap_NS_fsm(0)
    );
\ap_CS_fsm[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8000000000000000"
    )
        port map (
      I0 => \ap_CS_fsm[1]_i_2_n_0\,
      I1 => \ap_CS_fsm[1]_i_3_n_0\,
      I2 => \ap_CS_fsm[1]_i_4_n_0\,
      I3 => \ap_CS_fsm[1]_i_5_n_0\,
      I4 => ap_start,
      I5 => ap_CS_fsm_state1,
      O => ap_NS_fsm(1)
    );
\ap_CS_fsm[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[3]\,
      I1 => \ap_CS_fsm_reg_n_0_[4]\,
      I2 => \ap_CS_fsm_reg_n_0_[1]\,
      I3 => \ap_CS_fsm_reg_n_0_[2]\,
      I4 => \ap_CS_fsm_reg_n_0_[6]\,
      I5 => ap_CS_fsm_state6,
      O => \ap_CS_fsm[1]_i_2_n_0\
    );
\ap_CS_fsm[1]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[21]\,
      I1 => \ap_CS_fsm_reg_n_0_[22]\,
      I2 => ap_CS_fsm_state20,
      I3 => \ap_CS_fsm_reg_n_0_[20]\,
      I4 => \^ap_done\,
      I5 => \ap_CS_fsm_reg_n_0_[23]\,
      O => \ap_CS_fsm[1]_i_3_n_0\
    );
\ap_CS_fsm[1]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[15]\,
      I1 => \ap_CS_fsm_reg_n_0_[16]\,
      I2 => \ap_CS_fsm_reg_n_0_[13]\,
      I3 => \ap_CS_fsm_reg_n_0_[14]\,
      I4 => \ap_CS_fsm_reg_n_0_[18]\,
      I5 => \ap_CS_fsm_reg_n_0_[17]\,
      O => \ap_CS_fsm[1]_i_4_n_0\
    );
\ap_CS_fsm[1]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[9]\,
      I1 => \ap_CS_fsm_reg_n_0_[10]\,
      I2 => ap_CS_fsm_state8,
      I3 => start,
      I4 => \ap_CS_fsm_reg_n_0_[12]\,
      I5 => \ap_CS_fsm_reg_n_0_[11]\,
      O => \ap_CS_fsm[1]_i_5_n_0\
    );
\ap_CS_fsm_reg[0]\: unisim.vcomponents.FDSE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(0),
      Q => ap_CS_fsm_state1,
      S => ap_rst
    );
\ap_CS_fsm_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[9]\,
      Q => \ap_CS_fsm_reg_n_0_[10]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[10]\,
      Q => \ap_CS_fsm_reg_n_0_[11]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[11]\,
      Q => \ap_CS_fsm_reg_n_0_[12]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[12]\,
      Q => \ap_CS_fsm_reg_n_0_[13]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[13]\,
      Q => \ap_CS_fsm_reg_n_0_[14]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[14]\,
      Q => \ap_CS_fsm_reg_n_0_[15]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[15]\,
      Q => \ap_CS_fsm_reg_n_0_[16]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[16]\,
      Q => \ap_CS_fsm_reg_n_0_[17]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[17]\,
      Q => \ap_CS_fsm_reg_n_0_[18]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[18]\,
      Q => ap_CS_fsm_state20,
      R => ap_rst
    );
\ap_CS_fsm_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(1),
      Q => \ap_CS_fsm_reg_n_0_[1]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state20,
      Q => \ap_CS_fsm_reg_n_0_[20]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[20]\,
      Q => \ap_CS_fsm_reg_n_0_[21]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[21]\,
      Q => \ap_CS_fsm_reg_n_0_[22]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[22]\,
      Q => \ap_CS_fsm_reg_n_0_[23]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[23]\,
      Q => \^ap_done\,
      R => ap_rst
    );
\ap_CS_fsm_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[1]\,
      Q => \ap_CS_fsm_reg_n_0_[2]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[2]\,
      Q => \ap_CS_fsm_reg_n_0_[3]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[3]\,
      Q => \ap_CS_fsm_reg_n_0_[4]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[4]\,
      Q => ap_CS_fsm_state6,
      R => ap_rst
    );
\ap_CS_fsm_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state6,
      Q => \ap_CS_fsm_reg_n_0_[6]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[6]\,
      Q => ap_CS_fsm_state8,
      R => ap_rst
    );
\ap_CS_fsm_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state8,
      Q => start,
      R => ap_rst
    );
\ap_CS_fsm_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => start,
      Q => \ap_CS_fsm_reg_n_0_[9]\,
      R => ap_rst
    );
ap_idle_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ap_CS_fsm_state1,
      I1 => ap_start,
      O => ap_idle
    );
mul_64ns_66ns_82_5_1_U1: entity work.bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1
     port map (
      Q(0) => ap_CS_fsm_state1,
      ap_clk => ap_clk,
      buff0_reg(7 downto 0) => \fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U/buff1_reg__5\(81 downto 74),
      p_7(15 downto 0) => p_7(15 downto 0),
      p_9(15 downto 0) => p_9(15 downto 0)
    );
mul_64ns_66ns_82_5_1_U4: entity work.bd_0_hls_inst_0_fn1_mul_64ns_66ns_82_5_1_0
     port map (
      A(2) => srem_8s_40ns_7_12_seq_1_U3_n_22,
      A(1) => srem_8s_40ns_7_12_seq_1_U3_n_23,
      A(0) => srem_8s_40ns_7_12_seq_1_U3_n_24,
      B(1) => srem_8s_40ns_7_12_seq_1_U3_n_20,
      B(0) => srem_8s_40ns_7_12_seq_1_U3_n_21,
      Q(0) => ap_CS_fsm_state20,
      ap_clk => ap_clk,
      ap_return(7 downto 0) => ap_return(7 downto 0),
      \buff0_reg__1\(7) => srem_8s_40ns_7_12_seq_1_U3_n_0,
      \buff0_reg__1\(6) => srem_8s_40ns_7_12_seq_1_U3_n_1,
      \buff0_reg__1\(5) => srem_8s_40ns_7_12_seq_1_U3_n_2,
      \buff0_reg__1\(4) => srem_8s_40ns_7_12_seq_1_U3_n_3,
      \buff0_reg__1\(3) => srem_8s_40ns_7_12_seq_1_U3_n_4,
      \buff0_reg__1\(2) => srem_8s_40ns_7_12_seq_1_U3_n_5,
      \buff0_reg__1\(1) => srem_8s_40ns_7_12_seq_1_U3_n_6,
      \buff0_reg__1\(0) => remd(0),
      \buff0_reg__2\(0) => srem_8s_40ns_7_12_seq_1_U3_n_17,
      \buff0_reg__3\(0) => srem_8s_40ns_7_12_seq_1_U3_n_19,
      buff1_reg(1) => srem_8s_40ns_7_12_seq_1_U3_n_25,
      buff1_reg(0) => srem_8s_40ns_7_12_seq_1_U3_n_26,
      \buff1_reg__0\(0) => srem_8s_40ns_7_12_seq_1_U3_n_8,
      \buff1_reg__2\(2) => srem_8s_40ns_7_12_seq_1_U3_n_9,
      \buff1_reg__2\(1) => srem_8s_40ns_7_12_seq_1_U3_n_10,
      \buff1_reg__2\(0) => srem_8s_40ns_7_12_seq_1_U3_n_11,
      \buff1_reg__2_0\(0) => srem_8s_40ns_7_12_seq_1_U3_n_12,
      \tmp_product__0\(1) => srem_8s_40ns_7_12_seq_1_U3_n_13,
      \tmp_product__0\(0) => srem_8s_40ns_7_12_seq_1_U3_n_14,
      \tmp_product__1\(1) => srem_8s_40ns_7_12_seq_1_U3_n_15,
      \tmp_product__1\(0) => srem_8s_40ns_7_12_seq_1_U3_n_16,
      \tmp_product__2\(0) => srem_8s_40ns_7_12_seq_1_U3_n_18
    );
mul_8s_33ns_40_2_1_U2: entity work.bd_0_hls_inst_0_fn1_mul_8s_33ns_40_2_1
     port map (
      D(39 downto 0) => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(39 downto 0),
      Q(0) => ap_CS_fsm_state6,
      ap_clk => ap_clk,
      p_reg(7 downto 0) => \fn1_mul_64ns_66ns_82_5_1_Multiplier_0_U/buff1_reg__5\(81 downto 74)
    );
\mul_ln21_reg_184_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(0),
      Q => mul_ln21_reg_184(0),
      R => '0'
    );
\mul_ln21_reg_184_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(10),
      Q => mul_ln21_reg_184(10),
      R => '0'
    );
\mul_ln21_reg_184_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(11),
      Q => mul_ln21_reg_184(11),
      R => '0'
    );
\mul_ln21_reg_184_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(12),
      Q => mul_ln21_reg_184(12),
      R => '0'
    );
\mul_ln21_reg_184_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(13),
      Q => mul_ln21_reg_184(13),
      R => '0'
    );
\mul_ln21_reg_184_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(14),
      Q => mul_ln21_reg_184(14),
      R => '0'
    );
\mul_ln21_reg_184_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(15),
      Q => mul_ln21_reg_184(15),
      R => '0'
    );
\mul_ln21_reg_184_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(16),
      Q => mul_ln21_reg_184(16),
      R => '0'
    );
\mul_ln21_reg_184_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(17),
      Q => mul_ln21_reg_184(17),
      R => '0'
    );
\mul_ln21_reg_184_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(18),
      Q => mul_ln21_reg_184(18),
      R => '0'
    );
\mul_ln21_reg_184_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(19),
      Q => mul_ln21_reg_184(19),
      R => '0'
    );
\mul_ln21_reg_184_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(1),
      Q => mul_ln21_reg_184(1),
      R => '0'
    );
\mul_ln21_reg_184_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(20),
      Q => mul_ln21_reg_184(20),
      R => '0'
    );
\mul_ln21_reg_184_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(21),
      Q => mul_ln21_reg_184(21),
      R => '0'
    );
\mul_ln21_reg_184_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(22),
      Q => mul_ln21_reg_184(22),
      R => '0'
    );
\mul_ln21_reg_184_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(23),
      Q => mul_ln21_reg_184(23),
      R => '0'
    );
\mul_ln21_reg_184_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(24),
      Q => mul_ln21_reg_184(24),
      R => '0'
    );
\mul_ln21_reg_184_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(25),
      Q => mul_ln21_reg_184(25),
      R => '0'
    );
\mul_ln21_reg_184_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(26),
      Q => mul_ln21_reg_184(26),
      R => '0'
    );
\mul_ln21_reg_184_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(27),
      Q => mul_ln21_reg_184(27),
      R => '0'
    );
\mul_ln21_reg_184_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(28),
      Q => mul_ln21_reg_184(28),
      R => '0'
    );
\mul_ln21_reg_184_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(29),
      Q => mul_ln21_reg_184(29),
      R => '0'
    );
\mul_ln21_reg_184_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(2),
      Q => mul_ln21_reg_184(2),
      R => '0'
    );
\mul_ln21_reg_184_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(30),
      Q => mul_ln21_reg_184(30),
      R => '0'
    );
\mul_ln21_reg_184_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(31),
      Q => mul_ln21_reg_184(31),
      R => '0'
    );
\mul_ln21_reg_184_reg[32]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(32),
      Q => mul_ln21_reg_184(32),
      R => '0'
    );
\mul_ln21_reg_184_reg[33]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(33),
      Q => mul_ln21_reg_184(33),
      R => '0'
    );
\mul_ln21_reg_184_reg[34]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(34),
      Q => mul_ln21_reg_184(34),
      R => '0'
    );
\mul_ln21_reg_184_reg[35]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(35),
      Q => mul_ln21_reg_184(35),
      R => '0'
    );
\mul_ln21_reg_184_reg[36]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(36),
      Q => mul_ln21_reg_184(36),
      R => '0'
    );
\mul_ln21_reg_184_reg[37]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(37),
      Q => mul_ln21_reg_184(37),
      R => '0'
    );
\mul_ln21_reg_184_reg[38]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(38),
      Q => mul_ln21_reg_184(38),
      R => '0'
    );
\mul_ln21_reg_184_reg[39]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(39),
      Q => mul_ln21_reg_184(39),
      R => '0'
    );
\mul_ln21_reg_184_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(3),
      Q => mul_ln21_reg_184(3),
      R => '0'
    );
\mul_ln21_reg_184_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(4),
      Q => mul_ln21_reg_184(4),
      R => '0'
    );
\mul_ln21_reg_184_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(5),
      Q => mul_ln21_reg_184(5),
      R => '0'
    );
\mul_ln21_reg_184_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(6),
      Q => mul_ln21_reg_184(6),
      R => '0'
    );
\mul_ln21_reg_184_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(7),
      Q => mul_ln21_reg_184(7),
      R => '0'
    );
\mul_ln21_reg_184_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(8),
      Q => mul_ln21_reg_184(8),
      R => '0'
    );
\mul_ln21_reg_184_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state8,
      D => \fn1_mul_8s_33ns_40_2_1_Multiplier_1_U/p_reg__0\(9),
      Q => mul_ln21_reg_184(9),
      R => '0'
    );
srem_8s_40ns_7_12_seq_1_U3: entity work.bd_0_hls_inst_0_fn1_srem_8s_40ns_7_12_seq_1
     port map (
      A(2) => srem_8s_40ns_7_12_seq_1_U3_n_22,
      A(1) => srem_8s_40ns_7_12_seq_1_U3_n_23,
      A(0) => srem_8s_40ns_7_12_seq_1_U3_n_24,
      B(1) => srem_8s_40ns_7_12_seq_1_U3_n_20,
      B(0) => srem_8s_40ns_7_12_seq_1_U3_n_21,
      Q(0) => start,
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      \divisor0_reg[39]\(39 downto 0) => mul_ln21_reg_184(39 downto 0),
      \remd_reg[6]\(7) => srem_8s_40ns_7_12_seq_1_U3_n_0,
      \remd_reg[6]\(6) => srem_8s_40ns_7_12_seq_1_U3_n_1,
      \remd_reg[6]\(5) => srem_8s_40ns_7_12_seq_1_U3_n_2,
      \remd_reg[6]\(4) => srem_8s_40ns_7_12_seq_1_U3_n_3,
      \remd_reg[6]\(3) => srem_8s_40ns_7_12_seq_1_U3_n_4,
      \remd_reg[6]\(2) => srem_8s_40ns_7_12_seq_1_U3_n_5,
      \remd_reg[6]\(1) => srem_8s_40ns_7_12_seq_1_U3_n_6,
      \remd_reg[6]\(0) => remd(0),
      \remd_reg[6]_0\(0) => srem_8s_40ns_7_12_seq_1_U3_n_8,
      \remd_reg[6]_1\(2) => srem_8s_40ns_7_12_seq_1_U3_n_9,
      \remd_reg[6]_1\(1) => srem_8s_40ns_7_12_seq_1_U3_n_10,
      \remd_reg[6]_1\(0) => srem_8s_40ns_7_12_seq_1_U3_n_11,
      \remd_reg[6]_2\(0) => srem_8s_40ns_7_12_seq_1_U3_n_12,
      \remd_reg[6]_3\(1) => srem_8s_40ns_7_12_seq_1_U3_n_13,
      \remd_reg[6]_3\(0) => srem_8s_40ns_7_12_seq_1_U3_n_14,
      \remd_reg[6]_4\(1) => srem_8s_40ns_7_12_seq_1_U3_n_15,
      \remd_reg[6]_4\(0) => srem_8s_40ns_7_12_seq_1_U3_n_16,
      \remd_reg[6]_5\(0) => srem_8s_40ns_7_12_seq_1_U3_n_17,
      \remd_reg[6]_6\(0) => srem_8s_40ns_7_12_seq_1_U3_n_18,
      \remd_reg[6]_7\(0) => srem_8s_40ns_7_12_seq_1_U3_n_19,
      \remd_reg[6]_8\(1) => srem_8s_40ns_7_12_seq_1_U3_n_25,
      \remd_reg[6]_8\(0) => srem_8s_40ns_7_12_seq_1_U3_n_26
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0 is
  port (
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    ap_return : out STD_LOGIC_VECTOR ( 7 downto 0 );
    p : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_9 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_11 : in STD_LOGIC_VECTOR ( 31 downto 0 )
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
  attribute SDX_KERNEL : string;
  attribute SDX_KERNEL of inst : label is "true";
  attribute SDX_KERNEL_SYNTH_INST : string;
  attribute SDX_KERNEL_SYNTH_INST of inst : label is "inst";
  attribute SDX_KERNEL_TYPE : string;
  attribute SDX_KERNEL_TYPE of inst : label is "hls";
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of inst : label is "25'b0000000000000000000000001";
  attribute ap_ST_fsm_state10 : string;
  attribute ap_ST_fsm_state10 of inst : label is "25'b0000000000000001000000000";
  attribute ap_ST_fsm_state11 : string;
  attribute ap_ST_fsm_state11 of inst : label is "25'b0000000000000010000000000";
  attribute ap_ST_fsm_state12 : string;
  attribute ap_ST_fsm_state12 of inst : label is "25'b0000000000000100000000000";
  attribute ap_ST_fsm_state13 : string;
  attribute ap_ST_fsm_state13 of inst : label is "25'b0000000000001000000000000";
  attribute ap_ST_fsm_state14 : string;
  attribute ap_ST_fsm_state14 of inst : label is "25'b0000000000010000000000000";
  attribute ap_ST_fsm_state15 : string;
  attribute ap_ST_fsm_state15 of inst : label is "25'b0000000000100000000000000";
  attribute ap_ST_fsm_state16 : string;
  attribute ap_ST_fsm_state16 of inst : label is "25'b0000000001000000000000000";
  attribute ap_ST_fsm_state17 : string;
  attribute ap_ST_fsm_state17 of inst : label is "25'b0000000010000000000000000";
  attribute ap_ST_fsm_state18 : string;
  attribute ap_ST_fsm_state18 of inst : label is "25'b0000000100000000000000000";
  attribute ap_ST_fsm_state19 : string;
  attribute ap_ST_fsm_state19 of inst : label is "25'b0000001000000000000000000";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of inst : label is "25'b0000000000000000000000010";
  attribute ap_ST_fsm_state20 : string;
  attribute ap_ST_fsm_state20 of inst : label is "25'b0000010000000000000000000";
  attribute ap_ST_fsm_state21 : string;
  attribute ap_ST_fsm_state21 of inst : label is "25'b0000100000000000000000000";
  attribute ap_ST_fsm_state22 : string;
  attribute ap_ST_fsm_state22 of inst : label is "25'b0001000000000000000000000";
  attribute ap_ST_fsm_state23 : string;
  attribute ap_ST_fsm_state23 of inst : label is "25'b0010000000000000000000000";
  attribute ap_ST_fsm_state24 : string;
  attribute ap_ST_fsm_state24 of inst : label is "25'b0100000000000000000000000";
  attribute ap_ST_fsm_state25 : string;
  attribute ap_ST_fsm_state25 of inst : label is "25'b1000000000000000000000000";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of inst : label is "25'b0000000000000000000000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of inst : label is "25'b0000000000000000000001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of inst : label is "25'b0000000000000000000010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of inst : label is "25'b0000000000000000000100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of inst : label is "25'b0000000000000000001000000";
  attribute ap_ST_fsm_state8 : string;
  attribute ap_ST_fsm_state8 of inst : label is "25'b0000000000000000010000000";
  attribute ap_ST_fsm_state9 : string;
  attribute ap_ST_fsm_state9 of inst : label is "25'b0000000000000000100000000";
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of ap_clk : signal is "xilinx.com:signal:clock:1.0 ap_clk CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of ap_clk : signal is "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of ap_done : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done";
  attribute X_INTERFACE_INFO of ap_idle : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle";
  attribute X_INTERFACE_INFO of ap_ready : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready";
  attribute X_INTERFACE_INFO of ap_rst : signal is "xilinx.com:signal:reset:1.0 ap_rst RST";
  attribute X_INTERFACE_PARAMETER of ap_rst : signal is "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of ap_start : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start";
  attribute X_INTERFACE_INFO of ap_return : signal is "xilinx.com:signal:data:1.0 ap_return DATA";
  attribute X_INTERFACE_PARAMETER of ap_return : signal is "XIL_INTERFACENAME ap_return, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p : signal is "xilinx.com:signal:data:1.0 p DATA";
  attribute X_INTERFACE_PARAMETER of p : signal is "XIL_INTERFACENAME p, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_11 : signal is "xilinx.com:signal:data:1.0 p_11 DATA";
  attribute X_INTERFACE_PARAMETER of p_11 : signal is "XIL_INTERFACENAME p_11, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_7 : signal is "xilinx.com:signal:data:1.0 p_7 DATA";
  attribute X_INTERFACE_PARAMETER of p_7 : signal is "XIL_INTERFACENAME p_7, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of p_9 : signal is "xilinx.com:signal:data:1.0 p_9 DATA";
  attribute X_INTERFACE_PARAMETER of p_9 : signal is "XIL_INTERFACENAME p_9, LAYERED_METADATA undef";
begin
inst: entity work.bd_0_hls_inst_0_fn1
     port map (
      ap_clk => ap_clk,
      ap_done => ap_done,
      ap_idle => ap_idle,
      ap_ready => ap_ready,
      ap_return(7 downto 0) => ap_return(7 downto 0),
      ap_rst => ap_rst,
      ap_start => ap_start,
      p(63 downto 0) => B"0000000000000000000000000000000000000000000000000000000000000000",
      p_11(31 downto 0) => B"00000000000000000000000000000000",
      p_7(15 downto 0) => p_7(15 downto 0),
      p_9(15 downto 0) => p_9(15 downto 0)
    );
end STRUCTURE;
