-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Sun May 16 13:54:10 2021
-- Host        : ece-rschsrv01.ece.gatech.edu running 64-bit Red Hat Enterprise Linux Server release 7.9 (Maipo)
-- Command     : write_vhdl -force -mode funcsim
--               /nethome/chao33/GNN-for-DFG/toy_example/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0 is
  port (
    D : out STD_LOGIC_VECTOR ( 31 downto 0 );
    p_reg_0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    b : in STD_LOGIC_VECTOR ( 31 downto 0 );
    c_i : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_reg_1 : in STD_LOGIC_VECTOR ( 31 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0 : entity is "top_dfg_mul_32s_32s_32_2_1_Multiplier_0";
end bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0;

architecture STRUCTURE of bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0 is
  signal \^d\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \p_reg[16]__0_n_0\ : STD_LOGIC;
  signal p_reg_i_10_n_0 : STD_LOGIC;
  signal p_reg_i_11_n_0 : STD_LOGIC;
  signal p_reg_i_12_n_0 : STD_LOGIC;
  signal p_reg_i_13_n_0 : STD_LOGIC;
  signal p_reg_i_14_n_0 : STD_LOGIC;
  signal p_reg_i_15_n_0 : STD_LOGIC;
  signal p_reg_i_1_n_1 : STD_LOGIC;
  signal p_reg_i_1_n_2 : STD_LOGIC;
  signal p_reg_i_1_n_3 : STD_LOGIC;
  signal p_reg_i_2_n_0 : STD_LOGIC;
  signal p_reg_i_2_n_1 : STD_LOGIC;
  signal p_reg_i_2_n_2 : STD_LOGIC;
  signal p_reg_i_2_n_3 : STD_LOGIC;
  signal p_reg_i_3_n_0 : STD_LOGIC;
  signal p_reg_i_3_n_1 : STD_LOGIC;
  signal p_reg_i_3_n_2 : STD_LOGIC;
  signal p_reg_i_3_n_3 : STD_LOGIC;
  signal p_reg_i_4_n_0 : STD_LOGIC;
  signal p_reg_i_5_n_0 : STD_LOGIC;
  signal p_reg_i_6_n_0 : STD_LOGIC;
  signal p_reg_i_7_n_0 : STD_LOGIC;
  signal p_reg_i_8_n_0 : STD_LOGIC;
  signal p_reg_i_9_n_0 : STD_LOGIC;
  signal p_reg_n_100 : STD_LOGIC;
  signal p_reg_n_101 : STD_LOGIC;
  signal p_reg_n_102 : STD_LOGIC;
  signal p_reg_n_103 : STD_LOGIC;
  signal p_reg_n_104 : STD_LOGIC;
  signal p_reg_n_105 : STD_LOGIC;
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
  signal p_reg_n_83 : STD_LOGIC;
  signal p_reg_n_84 : STD_LOGIC;
  signal p_reg_n_85 : STD_LOGIC;
  signal p_reg_n_86 : STD_LOGIC;
  signal p_reg_n_87 : STD_LOGIC;
  signal p_reg_n_88 : STD_LOGIC;
  signal p_reg_n_89 : STD_LOGIC;
  signal p_reg_n_90 : STD_LOGIC;
  signal p_reg_n_91 : STD_LOGIC;
  signal p_reg_n_92 : STD_LOGIC;
  signal p_reg_n_93 : STD_LOGIC;
  signal p_reg_n_94 : STD_LOGIC;
  signal p_reg_n_95 : STD_LOGIC;
  signal p_reg_n_96 : STD_LOGIC;
  signal p_reg_n_97 : STD_LOGIC;
  signal p_reg_n_98 : STD_LOGIC;
  signal p_reg_n_99 : STD_LOGIC;
  signal \t3_reg_117[19]_i_2_n_0\ : STD_LOGIC;
  signal \t3_reg_117[19]_i_3_n_0\ : STD_LOGIC;
  signal \t3_reg_117[19]_i_4_n_0\ : STD_LOGIC;
  signal \t3_reg_117[23]_i_2_n_0\ : STD_LOGIC;
  signal \t3_reg_117[23]_i_3_n_0\ : STD_LOGIC;
  signal \t3_reg_117[23]_i_4_n_0\ : STD_LOGIC;
  signal \t3_reg_117[23]_i_5_n_0\ : STD_LOGIC;
  signal \t3_reg_117[27]_i_2_n_0\ : STD_LOGIC;
  signal \t3_reg_117[27]_i_3_n_0\ : STD_LOGIC;
  signal \t3_reg_117[27]_i_4_n_0\ : STD_LOGIC;
  signal \t3_reg_117[27]_i_5_n_0\ : STD_LOGIC;
  signal \t3_reg_117[31]_i_2_n_0\ : STD_LOGIC;
  signal \t3_reg_117[31]_i_3_n_0\ : STD_LOGIC;
  signal \t3_reg_117[31]_i_4_n_0\ : STD_LOGIC;
  signal \t3_reg_117[31]_i_5_n_0\ : STD_LOGIC;
  signal \t3_reg_117_reg[19]_i_1_n_0\ : STD_LOGIC;
  signal \t3_reg_117_reg[19]_i_1_n_1\ : STD_LOGIC;
  signal \t3_reg_117_reg[19]_i_1_n_2\ : STD_LOGIC;
  signal \t3_reg_117_reg[19]_i_1_n_3\ : STD_LOGIC;
  signal \t3_reg_117_reg[23]_i_1_n_0\ : STD_LOGIC;
  signal \t3_reg_117_reg[23]_i_1_n_1\ : STD_LOGIC;
  signal \t3_reg_117_reg[23]_i_1_n_2\ : STD_LOGIC;
  signal \t3_reg_117_reg[23]_i_1_n_3\ : STD_LOGIC;
  signal \t3_reg_117_reg[27]_i_1_n_0\ : STD_LOGIC;
  signal \t3_reg_117_reg[27]_i_1_n_1\ : STD_LOGIC;
  signal \t3_reg_117_reg[27]_i_1_n_2\ : STD_LOGIC;
  signal \t3_reg_117_reg[27]_i_1_n_3\ : STD_LOGIC;
  signal \t3_reg_117_reg[31]_i_1_n_1\ : STD_LOGIC;
  signal \t3_reg_117_reg[31]_i_1_n_2\ : STD_LOGIC;
  signal \t3_reg_117_reg[31]_i_1_n_3\ : STD_LOGIC;
  signal \tmp_product__0_n_100\ : STD_LOGIC;
  signal \tmp_product__0_n_101\ : STD_LOGIC;
  signal \tmp_product__0_n_102\ : STD_LOGIC;
  signal \tmp_product__0_n_103\ : STD_LOGIC;
  signal \tmp_product__0_n_104\ : STD_LOGIC;
  signal \tmp_product__0_n_105\ : STD_LOGIC;
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
  signal \tmp_product__0_n_58\ : STD_LOGIC;
  signal \tmp_product__0_n_59\ : STD_LOGIC;
  signal \tmp_product__0_n_60\ : STD_LOGIC;
  signal \tmp_product__0_n_61\ : STD_LOGIC;
  signal \tmp_product__0_n_62\ : STD_LOGIC;
  signal \tmp_product__0_n_63\ : STD_LOGIC;
  signal \tmp_product__0_n_64\ : STD_LOGIC;
  signal \tmp_product__0_n_65\ : STD_LOGIC;
  signal \tmp_product__0_n_66\ : STD_LOGIC;
  signal \tmp_product__0_n_67\ : STD_LOGIC;
  signal \tmp_product__0_n_68\ : STD_LOGIC;
  signal \tmp_product__0_n_69\ : STD_LOGIC;
  signal \tmp_product__0_n_70\ : STD_LOGIC;
  signal \tmp_product__0_n_71\ : STD_LOGIC;
  signal \tmp_product__0_n_72\ : STD_LOGIC;
  signal \tmp_product__0_n_73\ : STD_LOGIC;
  signal \tmp_product__0_n_74\ : STD_LOGIC;
  signal \tmp_product__0_n_75\ : STD_LOGIC;
  signal \tmp_product__0_n_76\ : STD_LOGIC;
  signal \tmp_product__0_n_77\ : STD_LOGIC;
  signal \tmp_product__0_n_78\ : STD_LOGIC;
  signal \tmp_product__0_n_79\ : STD_LOGIC;
  signal \tmp_product__0_n_80\ : STD_LOGIC;
  signal \tmp_product__0_n_81\ : STD_LOGIC;
  signal \tmp_product__0_n_82\ : STD_LOGIC;
  signal \tmp_product__0_n_83\ : STD_LOGIC;
  signal \tmp_product__0_n_84\ : STD_LOGIC;
  signal \tmp_product__0_n_85\ : STD_LOGIC;
  signal \tmp_product__0_n_86\ : STD_LOGIC;
  signal \tmp_product__0_n_87\ : STD_LOGIC;
  signal \tmp_product__0_n_88\ : STD_LOGIC;
  signal \tmp_product__0_n_89\ : STD_LOGIC;
  signal \tmp_product__0_n_90\ : STD_LOGIC;
  signal \tmp_product__0_n_91\ : STD_LOGIC;
  signal \tmp_product__0_n_92\ : STD_LOGIC;
  signal \tmp_product__0_n_93\ : STD_LOGIC;
  signal \tmp_product__0_n_94\ : STD_LOGIC;
  signal \tmp_product__0_n_95\ : STD_LOGIC;
  signal \tmp_product__0_n_96\ : STD_LOGIC;
  signal \tmp_product__0_n_97\ : STD_LOGIC;
  signal \tmp_product__0_n_98\ : STD_LOGIC;
  signal \tmp_product__0_n_99\ : STD_LOGIC;
  signal tmp_product_i_10_n_0 : STD_LOGIC;
  signal tmp_product_i_11_n_0 : STD_LOGIC;
  signal tmp_product_i_12_n_0 : STD_LOGIC;
  signal tmp_product_i_13_n_0 : STD_LOGIC;
  signal tmp_product_i_14_n_0 : STD_LOGIC;
  signal tmp_product_i_15_n_0 : STD_LOGIC;
  signal tmp_product_i_16_n_0 : STD_LOGIC;
  signal tmp_product_i_17_n_0 : STD_LOGIC;
  signal tmp_product_i_18_n_0 : STD_LOGIC;
  signal tmp_product_i_19_n_0 : STD_LOGIC;
  signal tmp_product_i_1_n_0 : STD_LOGIC;
  signal tmp_product_i_1_n_1 : STD_LOGIC;
  signal tmp_product_i_1_n_2 : STD_LOGIC;
  signal tmp_product_i_1_n_3 : STD_LOGIC;
  signal tmp_product_i_20_n_0 : STD_LOGIC;
  signal tmp_product_i_21_n_0 : STD_LOGIC;
  signal tmp_product_i_22_n_0 : STD_LOGIC;
  signal tmp_product_i_23_n_0 : STD_LOGIC;
  signal tmp_product_i_24_n_0 : STD_LOGIC;
  signal tmp_product_i_25_n_0 : STD_LOGIC;
  signal tmp_product_i_2_n_0 : STD_LOGIC;
  signal tmp_product_i_2_n_1 : STD_LOGIC;
  signal tmp_product_i_2_n_2 : STD_LOGIC;
  signal tmp_product_i_2_n_3 : STD_LOGIC;
  signal tmp_product_i_3_n_0 : STD_LOGIC;
  signal tmp_product_i_3_n_1 : STD_LOGIC;
  signal tmp_product_i_3_n_2 : STD_LOGIC;
  signal tmp_product_i_3_n_3 : STD_LOGIC;
  signal tmp_product_i_4_n_0 : STD_LOGIC;
  signal tmp_product_i_4_n_1 : STD_LOGIC;
  signal tmp_product_i_4_n_2 : STD_LOGIC;
  signal tmp_product_i_4_n_3 : STD_LOGIC;
  signal tmp_product_i_5_n_0 : STD_LOGIC;
  signal tmp_product_i_5_n_1 : STD_LOGIC;
  signal tmp_product_i_5_n_2 : STD_LOGIC;
  signal tmp_product_i_5_n_3 : STD_LOGIC;
  signal tmp_product_i_6_n_0 : STD_LOGIC;
  signal tmp_product_i_7_n_0 : STD_LOGIC;
  signal tmp_product_i_8_n_0 : STD_LOGIC;
  signal tmp_product_i_9_n_0 : STD_LOGIC;
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
  signal NLW_p_reg_i_1_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_t3_reg_117_reg[31]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal NLW_tmp_product_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_tmp_product_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_tmp_product_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_tmp_product_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_tmp_product__0_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_tmp_product__0_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  attribute METHODOLOGY_DRC_VIOS : string;
  attribute METHODOLOGY_DRC_VIOS of p_reg : label is "{SYNTH-10 {cell *THIS*} {string 18x15 4}}";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of p_reg_i_1 : label is 35;
  attribute ADDER_THRESHOLD of p_reg_i_2 : label is 35;
  attribute ADDER_THRESHOLD of p_reg_i_3 : label is 35;
  attribute ADDER_THRESHOLD of \t3_reg_117_reg[19]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t3_reg_117_reg[23]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t3_reg_117_reg[27]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t3_reg_117_reg[31]_i_1\ : label is 35;
  attribute METHODOLOGY_DRC_VIOS of tmp_product : label is "{SYNTH-10 {cell *THIS*} {string 15x18 4}}";
  attribute METHODOLOGY_DRC_VIOS of \tmp_product__0\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 4}}";
  attribute ADDER_THRESHOLD of tmp_product_i_1 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_2 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_3 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_4 : label is 35;
  attribute ADDER_THRESHOLD of tmp_product_i_5 : label is 35;
begin
  D(31 downto 0) <= \^d\(31 downto 0);
p_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 1,
      BREG => 1,
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
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => b(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_p_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => \^d\(31),
      B(16) => \^d\(31),
      B(15) => \^d\(31),
      B(14 downto 0) => \^d\(31 downto 17),
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
      CEB1 => '0',
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
      P(22) => p_reg_n_83,
      P(21) => p_reg_n_84,
      P(20) => p_reg_n_85,
      P(19) => p_reg_n_86,
      P(18) => p_reg_n_87,
      P(17) => p_reg_n_88,
      P(16) => p_reg_n_89,
      P(15) => p_reg_n_90,
      P(14) => p_reg_n_91,
      P(13) => p_reg_n_92,
      P(12) => p_reg_n_93,
      P(11) => p_reg_n_94,
      P(10) => p_reg_n_95,
      P(9) => p_reg_n_96,
      P(8) => p_reg_n_97,
      P(7) => p_reg_n_98,
      P(6) => p_reg_n_99,
      P(5) => p_reg_n_100,
      P(4) => p_reg_n_101,
      P(3) => p_reg_n_102,
      P(2) => p_reg_n_103,
      P(1) => p_reg_n_104,
      P(0) => p_reg_n_105,
      PATTERNBDETECT => NLW_p_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_p_reg_PATTERNDETECT_UNCONNECTED,
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
\p_reg[0]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_105\,
      Q => p_reg_0(0),
      R => '0'
    );
\p_reg[10]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_95\,
      Q => p_reg_0(10),
      R => '0'
    );
\p_reg[11]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_94\,
      Q => p_reg_0(11),
      R => '0'
    );
\p_reg[12]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_93\,
      Q => p_reg_0(12),
      R => '0'
    );
\p_reg[13]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_92\,
      Q => p_reg_0(13),
      R => '0'
    );
\p_reg[14]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_91\,
      Q => p_reg_0(14),
      R => '0'
    );
\p_reg[15]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_90\,
      Q => p_reg_0(15),
      R => '0'
    );
\p_reg[16]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_89\,
      Q => \p_reg[16]__0_n_0\,
      R => '0'
    );
\p_reg[1]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_104\,
      Q => p_reg_0(1),
      R => '0'
    );
\p_reg[2]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_103\,
      Q => p_reg_0(2),
      R => '0'
    );
\p_reg[3]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_102\,
      Q => p_reg_0(3),
      R => '0'
    );
\p_reg[4]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_101\,
      Q => p_reg_0(4),
      R => '0'
    );
\p_reg[5]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_100\,
      Q => p_reg_0(5),
      R => '0'
    );
\p_reg[6]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_99\,
      Q => p_reg_0(6),
      R => '0'
    );
\p_reg[7]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_98\,
      Q => p_reg_0(7),
      R => '0'
    );
\p_reg[8]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_97\,
      Q => p_reg_0(8),
      R => '0'
    );
\p_reg[9]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_96\,
      Q => p_reg_0(9),
      R => '0'
    );
p_reg_i_1: unisim.vcomponents.CARRY4
     port map (
      CI => p_reg_i_2_n_0,
      CO(3) => NLW_p_reg_i_1_CO_UNCONNECTED(3),
      CO(2) => p_reg_i_1_n_1,
      CO(1) => p_reg_i_1_n_2,
      CO(0) => p_reg_i_1_n_3,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => c_i(30 downto 28),
      O(3 downto 0) => \^d\(31 downto 28),
      S(3) => p_reg_i_4_n_0,
      S(2) => p_reg_i_5_n_0,
      S(1) => p_reg_i_6_n_0,
      S(0) => p_reg_i_7_n_0
    );
p_reg_i_10: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(25),
      I1 => p_reg_1(25),
      O => p_reg_i_10_n_0
    );
p_reg_i_11: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(24),
      I1 => p_reg_1(24),
      O => p_reg_i_11_n_0
    );
p_reg_i_12: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(23),
      I1 => p_reg_1(23),
      O => p_reg_i_12_n_0
    );
p_reg_i_13: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(22),
      I1 => p_reg_1(22),
      O => p_reg_i_13_n_0
    );
p_reg_i_14: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(21),
      I1 => p_reg_1(21),
      O => p_reg_i_14_n_0
    );
p_reg_i_15: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(20),
      I1 => p_reg_1(20),
      O => p_reg_i_15_n_0
    );
p_reg_i_2: unisim.vcomponents.CARRY4
     port map (
      CI => p_reg_i_3_n_0,
      CO(3) => p_reg_i_2_n_0,
      CO(2) => p_reg_i_2_n_1,
      CO(1) => p_reg_i_2_n_2,
      CO(0) => p_reg_i_2_n_3,
      CYINIT => '0',
      DI(3 downto 0) => c_i(27 downto 24),
      O(3 downto 0) => \^d\(27 downto 24),
      S(3) => p_reg_i_8_n_0,
      S(2) => p_reg_i_9_n_0,
      S(1) => p_reg_i_10_n_0,
      S(0) => p_reg_i_11_n_0
    );
p_reg_i_3: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_1_n_0,
      CO(3) => p_reg_i_3_n_0,
      CO(2) => p_reg_i_3_n_1,
      CO(1) => p_reg_i_3_n_2,
      CO(0) => p_reg_i_3_n_3,
      CYINIT => '0',
      DI(3 downto 0) => c_i(23 downto 20),
      O(3 downto 0) => \^d\(23 downto 20),
      S(3) => p_reg_i_12_n_0,
      S(2) => p_reg_i_13_n_0,
      S(1) => p_reg_i_14_n_0,
      S(0) => p_reg_i_15_n_0
    );
p_reg_i_4: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(31),
      I1 => p_reg_1(31),
      O => p_reg_i_4_n_0
    );
p_reg_i_5: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(30),
      I1 => p_reg_1(30),
      O => p_reg_i_5_n_0
    );
p_reg_i_6: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(29),
      I1 => p_reg_1(29),
      O => p_reg_i_6_n_0
    );
p_reg_i_7: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(28),
      I1 => p_reg_1(28),
      O => p_reg_i_7_n_0
    );
p_reg_i_8: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(27),
      I1 => p_reg_1(27),
      O => p_reg_i_8_n_0
    );
p_reg_i_9: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(26),
      I1 => p_reg_1(26),
      O => p_reg_i_9_n_0
    );
\t3_reg_117[19]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_103,
      I1 => tmp_product_n_103,
      O => \t3_reg_117[19]_i_2_n_0\
    );
\t3_reg_117[19]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_104,
      I1 => tmp_product_n_104,
      O => \t3_reg_117[19]_i_3_n_0\
    );
\t3_reg_117[19]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_105,
      I1 => tmp_product_n_105,
      O => \t3_reg_117[19]_i_4_n_0\
    );
\t3_reg_117[23]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_99,
      I1 => tmp_product_n_99,
      O => \t3_reg_117[23]_i_2_n_0\
    );
\t3_reg_117[23]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_100,
      I1 => tmp_product_n_100,
      O => \t3_reg_117[23]_i_3_n_0\
    );
\t3_reg_117[23]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_101,
      I1 => tmp_product_n_101,
      O => \t3_reg_117[23]_i_4_n_0\
    );
\t3_reg_117[23]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_102,
      I1 => tmp_product_n_102,
      O => \t3_reg_117[23]_i_5_n_0\
    );
\t3_reg_117[27]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_95,
      I1 => tmp_product_n_95,
      O => \t3_reg_117[27]_i_2_n_0\
    );
\t3_reg_117[27]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_96,
      I1 => tmp_product_n_96,
      O => \t3_reg_117[27]_i_3_n_0\
    );
\t3_reg_117[27]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_97,
      I1 => tmp_product_n_97,
      O => \t3_reg_117[27]_i_4_n_0\
    );
\t3_reg_117[27]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_98,
      I1 => tmp_product_n_98,
      O => \t3_reg_117[27]_i_5_n_0\
    );
\t3_reg_117[31]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_91,
      I1 => tmp_product_n_91,
      O => \t3_reg_117[31]_i_2_n_0\
    );
\t3_reg_117[31]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_92,
      I1 => tmp_product_n_92,
      O => \t3_reg_117[31]_i_3_n_0\
    );
\t3_reg_117[31]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_93,
      I1 => tmp_product_n_93,
      O => \t3_reg_117[31]_i_4_n_0\
    );
\t3_reg_117[31]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_94,
      I1 => tmp_product_n_94,
      O => \t3_reg_117[31]_i_5_n_0\
    );
\t3_reg_117_reg[19]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \t3_reg_117_reg[19]_i_1_n_0\,
      CO(2) => \t3_reg_117_reg[19]_i_1_n_1\,
      CO(1) => \t3_reg_117_reg[19]_i_1_n_2\,
      CO(0) => \t3_reg_117_reg[19]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => p_reg_n_103,
      DI(2) => p_reg_n_104,
      DI(1) => p_reg_n_105,
      DI(0) => '0',
      O(3 downto 0) => p_reg_0(19 downto 16),
      S(3) => \t3_reg_117[19]_i_2_n_0\,
      S(2) => \t3_reg_117[19]_i_3_n_0\,
      S(1) => \t3_reg_117[19]_i_4_n_0\,
      S(0) => \p_reg[16]__0_n_0\
    );
\t3_reg_117_reg[23]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t3_reg_117_reg[19]_i_1_n_0\,
      CO(3) => \t3_reg_117_reg[23]_i_1_n_0\,
      CO(2) => \t3_reg_117_reg[23]_i_1_n_1\,
      CO(1) => \t3_reg_117_reg[23]_i_1_n_2\,
      CO(0) => \t3_reg_117_reg[23]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => p_reg_n_99,
      DI(2) => p_reg_n_100,
      DI(1) => p_reg_n_101,
      DI(0) => p_reg_n_102,
      O(3 downto 0) => p_reg_0(23 downto 20),
      S(3) => \t3_reg_117[23]_i_2_n_0\,
      S(2) => \t3_reg_117[23]_i_3_n_0\,
      S(1) => \t3_reg_117[23]_i_4_n_0\,
      S(0) => \t3_reg_117[23]_i_5_n_0\
    );
\t3_reg_117_reg[27]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t3_reg_117_reg[23]_i_1_n_0\,
      CO(3) => \t3_reg_117_reg[27]_i_1_n_0\,
      CO(2) => \t3_reg_117_reg[27]_i_1_n_1\,
      CO(1) => \t3_reg_117_reg[27]_i_1_n_2\,
      CO(0) => \t3_reg_117_reg[27]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => p_reg_n_95,
      DI(2) => p_reg_n_96,
      DI(1) => p_reg_n_97,
      DI(0) => p_reg_n_98,
      O(3 downto 0) => p_reg_0(27 downto 24),
      S(3) => \t3_reg_117[27]_i_2_n_0\,
      S(2) => \t3_reg_117[27]_i_3_n_0\,
      S(1) => \t3_reg_117[27]_i_4_n_0\,
      S(0) => \t3_reg_117[27]_i_5_n_0\
    );
\t3_reg_117_reg[31]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t3_reg_117_reg[27]_i_1_n_0\,
      CO(3) => \NLW_t3_reg_117_reg[31]_i_1_CO_UNCONNECTED\(3),
      CO(2) => \t3_reg_117_reg[31]_i_1_n_1\,
      CO(1) => \t3_reg_117_reg[31]_i_1_n_2\,
      CO(0) => \t3_reg_117_reg[31]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2) => p_reg_n_92,
      DI(1) => p_reg_n_93,
      DI(0) => p_reg_n_94,
      O(3 downto 0) => p_reg_0(31 downto 28),
      S(3) => \t3_reg_117[31]_i_2_n_0\,
      S(2) => \t3_reg_117[31]_i_3_n_0\,
      S(1) => \t3_reg_117[31]_i_4_n_0\,
      S(0) => \t3_reg_117[31]_i_5_n_0\
    );
tmp_product: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 1,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 1,
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
      A(16 downto 0) => \^d\(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_tmp_product_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => b(31),
      B(16) => b(31),
      B(15) => b(31),
      B(14 downto 0) => b(31 downto 17),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_tmp_product_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_tmp_product_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_tmp_product_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => '0',
      CEA2 => Q(0),
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
\tmp_product__0\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 1,
      BREG => 1,
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
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => b(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_tmp_product__0_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => '0',
      B(16 downto 0) => \^d\(16 downto 0),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_tmp_product__0_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_tmp_product__0_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => '0',
      CEA2 => '0',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
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
      MULTSIGNOUT => \NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_tmp_product__0_OVERFLOW_UNCONNECTED\,
      P(47) => \tmp_product__0_n_58\,
      P(46) => \tmp_product__0_n_59\,
      P(45) => \tmp_product__0_n_60\,
      P(44) => \tmp_product__0_n_61\,
      P(43) => \tmp_product__0_n_62\,
      P(42) => \tmp_product__0_n_63\,
      P(41) => \tmp_product__0_n_64\,
      P(40) => \tmp_product__0_n_65\,
      P(39) => \tmp_product__0_n_66\,
      P(38) => \tmp_product__0_n_67\,
      P(37) => \tmp_product__0_n_68\,
      P(36) => \tmp_product__0_n_69\,
      P(35) => \tmp_product__0_n_70\,
      P(34) => \tmp_product__0_n_71\,
      P(33) => \tmp_product__0_n_72\,
      P(32) => \tmp_product__0_n_73\,
      P(31) => \tmp_product__0_n_74\,
      P(30) => \tmp_product__0_n_75\,
      P(29) => \tmp_product__0_n_76\,
      P(28) => \tmp_product__0_n_77\,
      P(27) => \tmp_product__0_n_78\,
      P(26) => \tmp_product__0_n_79\,
      P(25) => \tmp_product__0_n_80\,
      P(24) => \tmp_product__0_n_81\,
      P(23) => \tmp_product__0_n_82\,
      P(22) => \tmp_product__0_n_83\,
      P(21) => \tmp_product__0_n_84\,
      P(20) => \tmp_product__0_n_85\,
      P(19) => \tmp_product__0_n_86\,
      P(18) => \tmp_product__0_n_87\,
      P(17) => \tmp_product__0_n_88\,
      P(16) => \tmp_product__0_n_89\,
      P(15) => \tmp_product__0_n_90\,
      P(14) => \tmp_product__0_n_91\,
      P(13) => \tmp_product__0_n_92\,
      P(12) => \tmp_product__0_n_93\,
      P(11) => \tmp_product__0_n_94\,
      P(10) => \tmp_product__0_n_95\,
      P(9) => \tmp_product__0_n_96\,
      P(8) => \tmp_product__0_n_97\,
      P(7) => \tmp_product__0_n_98\,
      P(6) => \tmp_product__0_n_99\,
      P(5) => \tmp_product__0_n_100\,
      P(4) => \tmp_product__0_n_101\,
      P(3) => \tmp_product__0_n_102\,
      P(2) => \tmp_product__0_n_103\,
      P(1) => \tmp_product__0_n_104\,
      P(0) => \tmp_product__0_n_105\,
      PATTERNBDETECT => \NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
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
tmp_product_i_1: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_2_n_0,
      CO(3) => tmp_product_i_1_n_0,
      CO(2) => tmp_product_i_1_n_1,
      CO(1) => tmp_product_i_1_n_2,
      CO(0) => tmp_product_i_1_n_3,
      CYINIT => '0',
      DI(3 downto 0) => c_i(19 downto 16),
      O(3 downto 0) => \^d\(19 downto 16),
      S(3) => tmp_product_i_6_n_0,
      S(2) => tmp_product_i_7_n_0,
      S(1) => tmp_product_i_8_n_0,
      S(0) => tmp_product_i_9_n_0
    );
tmp_product_i_10: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(15),
      I1 => p_reg_1(15),
      O => tmp_product_i_10_n_0
    );
tmp_product_i_11: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(14),
      I1 => p_reg_1(14),
      O => tmp_product_i_11_n_0
    );
tmp_product_i_12: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(13),
      I1 => p_reg_1(13),
      O => tmp_product_i_12_n_0
    );
tmp_product_i_13: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(12),
      I1 => p_reg_1(12),
      O => tmp_product_i_13_n_0
    );
tmp_product_i_14: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(11),
      I1 => p_reg_1(11),
      O => tmp_product_i_14_n_0
    );
tmp_product_i_15: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(10),
      I1 => p_reg_1(10),
      O => tmp_product_i_15_n_0
    );
tmp_product_i_16: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(9),
      I1 => p_reg_1(9),
      O => tmp_product_i_16_n_0
    );
tmp_product_i_17: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(8),
      I1 => p_reg_1(8),
      O => tmp_product_i_17_n_0
    );
tmp_product_i_18: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(7),
      I1 => p_reg_1(7),
      O => tmp_product_i_18_n_0
    );
tmp_product_i_19: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(6),
      I1 => p_reg_1(6),
      O => tmp_product_i_19_n_0
    );
tmp_product_i_2: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_3_n_0,
      CO(3) => tmp_product_i_2_n_0,
      CO(2) => tmp_product_i_2_n_1,
      CO(1) => tmp_product_i_2_n_2,
      CO(0) => tmp_product_i_2_n_3,
      CYINIT => '0',
      DI(3 downto 0) => c_i(15 downto 12),
      O(3 downto 0) => \^d\(15 downto 12),
      S(3) => tmp_product_i_10_n_0,
      S(2) => tmp_product_i_11_n_0,
      S(1) => tmp_product_i_12_n_0,
      S(0) => tmp_product_i_13_n_0
    );
tmp_product_i_20: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(5),
      I1 => p_reg_1(5),
      O => tmp_product_i_20_n_0
    );
tmp_product_i_21: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(4),
      I1 => p_reg_1(4),
      O => tmp_product_i_21_n_0
    );
tmp_product_i_22: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(3),
      I1 => p_reg_1(3),
      O => tmp_product_i_22_n_0
    );
tmp_product_i_23: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(2),
      I1 => p_reg_1(2),
      O => tmp_product_i_23_n_0
    );
tmp_product_i_24: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(1),
      I1 => p_reg_1(1),
      O => tmp_product_i_24_n_0
    );
tmp_product_i_25: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(0),
      I1 => p_reg_1(0),
      O => tmp_product_i_25_n_0
    );
tmp_product_i_3: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_4_n_0,
      CO(3) => tmp_product_i_3_n_0,
      CO(2) => tmp_product_i_3_n_1,
      CO(1) => tmp_product_i_3_n_2,
      CO(0) => tmp_product_i_3_n_3,
      CYINIT => '0',
      DI(3 downto 0) => c_i(11 downto 8),
      O(3 downto 0) => \^d\(11 downto 8),
      S(3) => tmp_product_i_14_n_0,
      S(2) => tmp_product_i_15_n_0,
      S(1) => tmp_product_i_16_n_0,
      S(0) => tmp_product_i_17_n_0
    );
tmp_product_i_4: unisim.vcomponents.CARRY4
     port map (
      CI => tmp_product_i_5_n_0,
      CO(3) => tmp_product_i_4_n_0,
      CO(2) => tmp_product_i_4_n_1,
      CO(1) => tmp_product_i_4_n_2,
      CO(0) => tmp_product_i_4_n_3,
      CYINIT => '0',
      DI(3 downto 0) => c_i(7 downto 4),
      O(3 downto 0) => \^d\(7 downto 4),
      S(3) => tmp_product_i_18_n_0,
      S(2) => tmp_product_i_19_n_0,
      S(1) => tmp_product_i_20_n_0,
      S(0) => tmp_product_i_21_n_0
    );
tmp_product_i_5: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => tmp_product_i_5_n_0,
      CO(2) => tmp_product_i_5_n_1,
      CO(1) => tmp_product_i_5_n_2,
      CO(0) => tmp_product_i_5_n_3,
      CYINIT => '0',
      DI(3 downto 0) => c_i(3 downto 0),
      O(3 downto 0) => \^d\(3 downto 0),
      S(3) => tmp_product_i_22_n_0,
      S(2) => tmp_product_i_23_n_0,
      S(1) => tmp_product_i_24_n_0,
      S(0) => tmp_product_i_25_n_0
    );
tmp_product_i_6: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(19),
      I1 => p_reg_1(19),
      O => tmp_product_i_6_n_0
    );
tmp_product_i_7: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(18),
      I1 => p_reg_1(18),
      O => tmp_product_i_7_n_0
    );
tmp_product_i_8: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(17),
      I1 => p_reg_1(17),
      O => tmp_product_i_8_n_0
    );
tmp_product_i_9: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => c_i(16),
      I1 => p_reg_1(16),
      O => tmp_product_i_9_n_0
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0_1 is
  port (
    a : out STD_LOGIC_VECTOR ( 31 downto 0 );
    D : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    b : in STD_LOGIC_VECTOR ( 31 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0_1 : entity is "top_dfg_mul_32s_32s_32_2_1_Multiplier_0";
end bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0_1;

architecture STRUCTURE of bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0_1 is
  signal \^a\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \a[0]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \a[0]_INST_0_n_0\ : STD_LOGIC;
  signal \a[0]_INST_0_n_1\ : STD_LOGIC;
  signal \a[0]_INST_0_n_2\ : STD_LOGIC;
  signal \a[0]_INST_0_n_3\ : STD_LOGIC;
  signal \a[12]_INST_0_n_0\ : STD_LOGIC;
  signal \a[12]_INST_0_n_1\ : STD_LOGIC;
  signal \a[12]_INST_0_n_2\ : STD_LOGIC;
  signal \a[12]_INST_0_n_3\ : STD_LOGIC;
  signal \a[16]_INST_0_n_0\ : STD_LOGIC;
  signal \a[16]_INST_0_n_1\ : STD_LOGIC;
  signal \a[16]_INST_0_n_2\ : STD_LOGIC;
  signal \a[16]_INST_0_n_3\ : STD_LOGIC;
  signal \a[20]_INST_0_n_0\ : STD_LOGIC;
  signal \a[20]_INST_0_n_1\ : STD_LOGIC;
  signal \a[20]_INST_0_n_2\ : STD_LOGIC;
  signal \a[20]_INST_0_n_3\ : STD_LOGIC;
  signal \a[24]_INST_0_n_0\ : STD_LOGIC;
  signal \a[24]_INST_0_n_1\ : STD_LOGIC;
  signal \a[24]_INST_0_n_2\ : STD_LOGIC;
  signal \a[24]_INST_0_n_3\ : STD_LOGIC;
  signal \a[28]_INST_0_n_1\ : STD_LOGIC;
  signal \a[28]_INST_0_n_2\ : STD_LOGIC;
  signal \a[28]_INST_0_n_3\ : STD_LOGIC;
  signal \a[4]_INST_0_n_0\ : STD_LOGIC;
  signal \a[4]_INST_0_n_1\ : STD_LOGIC;
  signal \a[4]_INST_0_n_2\ : STD_LOGIC;
  signal \a[4]_INST_0_n_3\ : STD_LOGIC;
  signal \a[8]_INST_0_n_0\ : STD_LOGIC;
  signal \a[8]_INST_0_n_1\ : STD_LOGIC;
  signal \a[8]_INST_0_n_2\ : STD_LOGIC;
  signal \a[8]_INST_0_n_3\ : STD_LOGIC;
  signal \mul_ln7_reg_101[19]_i_2_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[19]_i_3_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[19]_i_4_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[23]_i_2_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[23]_i_3_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[23]_i_4_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[23]_i_5_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[27]_i_2_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[27]_i_3_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[27]_i_4_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[27]_i_5_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[31]_i_2_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[31]_i_3_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[31]_i_4_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101[31]_i_5_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[19]_i_1_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[19]_i_1_n_1\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[19]_i_1_n_2\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[19]_i_1_n_3\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[23]_i_1_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[23]_i_1_n_1\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[23]_i_1_n_2\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[23]_i_1_n_3\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[27]_i_1_n_0\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[27]_i_1_n_1\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[27]_i_1_n_2\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[27]_i_1_n_3\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[31]_i_1_n_1\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[31]_i_1_n_2\ : STD_LOGIC;
  signal \mul_ln7_reg_101_reg[31]_i_1_n_3\ : STD_LOGIC;
  signal \p_reg[16]__0_n_0\ : STD_LOGIC;
  signal p_reg_n_100 : STD_LOGIC;
  signal p_reg_n_101 : STD_LOGIC;
  signal p_reg_n_102 : STD_LOGIC;
  signal p_reg_n_103 : STD_LOGIC;
  signal p_reg_n_104 : STD_LOGIC;
  signal p_reg_n_105 : STD_LOGIC;
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
  signal p_reg_n_83 : STD_LOGIC;
  signal p_reg_n_84 : STD_LOGIC;
  signal p_reg_n_85 : STD_LOGIC;
  signal p_reg_n_86 : STD_LOGIC;
  signal p_reg_n_87 : STD_LOGIC;
  signal p_reg_n_88 : STD_LOGIC;
  signal p_reg_n_89 : STD_LOGIC;
  signal p_reg_n_90 : STD_LOGIC;
  signal p_reg_n_91 : STD_LOGIC;
  signal p_reg_n_92 : STD_LOGIC;
  signal p_reg_n_93 : STD_LOGIC;
  signal p_reg_n_94 : STD_LOGIC;
  signal p_reg_n_95 : STD_LOGIC;
  signal p_reg_n_96 : STD_LOGIC;
  signal p_reg_n_97 : STD_LOGIC;
  signal p_reg_n_98 : STD_LOGIC;
  signal p_reg_n_99 : STD_LOGIC;
  signal \tmp_product__0_n_100\ : STD_LOGIC;
  signal \tmp_product__0_n_101\ : STD_LOGIC;
  signal \tmp_product__0_n_102\ : STD_LOGIC;
  signal \tmp_product__0_n_103\ : STD_LOGIC;
  signal \tmp_product__0_n_104\ : STD_LOGIC;
  signal \tmp_product__0_n_105\ : STD_LOGIC;
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
  signal \tmp_product__0_n_58\ : STD_LOGIC;
  signal \tmp_product__0_n_59\ : STD_LOGIC;
  signal \tmp_product__0_n_60\ : STD_LOGIC;
  signal \tmp_product__0_n_61\ : STD_LOGIC;
  signal \tmp_product__0_n_62\ : STD_LOGIC;
  signal \tmp_product__0_n_63\ : STD_LOGIC;
  signal \tmp_product__0_n_64\ : STD_LOGIC;
  signal \tmp_product__0_n_65\ : STD_LOGIC;
  signal \tmp_product__0_n_66\ : STD_LOGIC;
  signal \tmp_product__0_n_67\ : STD_LOGIC;
  signal \tmp_product__0_n_68\ : STD_LOGIC;
  signal \tmp_product__0_n_69\ : STD_LOGIC;
  signal \tmp_product__0_n_70\ : STD_LOGIC;
  signal \tmp_product__0_n_71\ : STD_LOGIC;
  signal \tmp_product__0_n_72\ : STD_LOGIC;
  signal \tmp_product__0_n_73\ : STD_LOGIC;
  signal \tmp_product__0_n_74\ : STD_LOGIC;
  signal \tmp_product__0_n_75\ : STD_LOGIC;
  signal \tmp_product__0_n_76\ : STD_LOGIC;
  signal \tmp_product__0_n_77\ : STD_LOGIC;
  signal \tmp_product__0_n_78\ : STD_LOGIC;
  signal \tmp_product__0_n_79\ : STD_LOGIC;
  signal \tmp_product__0_n_80\ : STD_LOGIC;
  signal \tmp_product__0_n_81\ : STD_LOGIC;
  signal \tmp_product__0_n_82\ : STD_LOGIC;
  signal \tmp_product__0_n_83\ : STD_LOGIC;
  signal \tmp_product__0_n_84\ : STD_LOGIC;
  signal \tmp_product__0_n_85\ : STD_LOGIC;
  signal \tmp_product__0_n_86\ : STD_LOGIC;
  signal \tmp_product__0_n_87\ : STD_LOGIC;
  signal \tmp_product__0_n_88\ : STD_LOGIC;
  signal \tmp_product__0_n_89\ : STD_LOGIC;
  signal \tmp_product__0_n_90\ : STD_LOGIC;
  signal \tmp_product__0_n_91\ : STD_LOGIC;
  signal \tmp_product__0_n_92\ : STD_LOGIC;
  signal \tmp_product__0_n_93\ : STD_LOGIC;
  signal \tmp_product__0_n_94\ : STD_LOGIC;
  signal \tmp_product__0_n_95\ : STD_LOGIC;
  signal \tmp_product__0_n_96\ : STD_LOGIC;
  signal \tmp_product__0_n_97\ : STD_LOGIC;
  signal \tmp_product__0_n_98\ : STD_LOGIC;
  signal \tmp_product__0_n_99\ : STD_LOGIC;
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
  signal \NLW_a[28]_INST_0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_mul_ln7_reg_101_reg[31]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
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
  signal \NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_OVERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_UNDERFLOW_UNCONNECTED\ : STD_LOGIC;
  signal \NLW_tmp_product__0_ACOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal \NLW_tmp_product__0_BCOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal \NLW_tmp_product__0_CARRYOUT_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \a[0]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \a[12]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \a[16]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \a[20]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \a[24]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \a[28]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \a[4]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \a[8]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \mul_ln7_reg_101_reg[19]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \mul_ln7_reg_101_reg[23]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \mul_ln7_reg_101_reg[27]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \mul_ln7_reg_101_reg[31]_i_1\ : label is 35;
  attribute METHODOLOGY_DRC_VIOS : string;
  attribute METHODOLOGY_DRC_VIOS of p_reg : label is "{SYNTH-10 {cell *THIS*} {string 18x15 4}}";
  attribute METHODOLOGY_DRC_VIOS of tmp_product : label is "{SYNTH-10 {cell *THIS*} {string 15x18 4}}";
  attribute METHODOLOGY_DRC_VIOS of \tmp_product__0\ : label is "{SYNTH-10 {cell *THIS*} {string 18x18 4}}";
begin
  a(31 downto 0) <= \^a\(31 downto 0);
\a[0]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \a[0]_INST_0_n_0\,
      CO(2) => \a[0]_INST_0_n_1\,
      CO(1) => \a[0]_INST_0_n_2\,
      CO(0) => \a[0]_INST_0_n_3\,
      CYINIT => '0',
      DI(3 downto 2) => B"00",
      DI(1) => b(1),
      DI(0) => '0',
      O(3 downto 0) => \^a\(3 downto 0),
      S(3 downto 2) => b(3 downto 2),
      S(1) => \a[0]_INST_0_i_1_n_0\,
      S(0) => b(0)
    );
\a[0]_INST_0_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => b(1),
      O => \a[0]_INST_0_i_1_n_0\
    );
\a[12]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \a[8]_INST_0_n_0\,
      CO(3) => \a[12]_INST_0_n_0\,
      CO(2) => \a[12]_INST_0_n_1\,
      CO(1) => \a[12]_INST_0_n_2\,
      CO(0) => \a[12]_INST_0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \^a\(15 downto 12),
      S(3 downto 0) => b(15 downto 12)
    );
\a[16]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \a[12]_INST_0_n_0\,
      CO(3) => \a[16]_INST_0_n_0\,
      CO(2) => \a[16]_INST_0_n_1\,
      CO(1) => \a[16]_INST_0_n_2\,
      CO(0) => \a[16]_INST_0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \^a\(19 downto 16),
      S(3 downto 0) => b(19 downto 16)
    );
\a[20]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \a[16]_INST_0_n_0\,
      CO(3) => \a[20]_INST_0_n_0\,
      CO(2) => \a[20]_INST_0_n_1\,
      CO(1) => \a[20]_INST_0_n_2\,
      CO(0) => \a[20]_INST_0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \^a\(23 downto 20),
      S(3 downto 0) => b(23 downto 20)
    );
\a[24]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \a[20]_INST_0_n_0\,
      CO(3) => \a[24]_INST_0_n_0\,
      CO(2) => \a[24]_INST_0_n_1\,
      CO(1) => \a[24]_INST_0_n_2\,
      CO(0) => \a[24]_INST_0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \^a\(27 downto 24),
      S(3 downto 0) => b(27 downto 24)
    );
\a[28]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \a[24]_INST_0_n_0\,
      CO(3) => \NLW_a[28]_INST_0_CO_UNCONNECTED\(3),
      CO(2) => \a[28]_INST_0_n_1\,
      CO(1) => \a[28]_INST_0_n_2\,
      CO(0) => \a[28]_INST_0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \^a\(31 downto 28),
      S(3 downto 0) => b(31 downto 28)
    );
\a[4]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \a[0]_INST_0_n_0\,
      CO(3) => \a[4]_INST_0_n_0\,
      CO(2) => \a[4]_INST_0_n_1\,
      CO(1) => \a[4]_INST_0_n_2\,
      CO(0) => \a[4]_INST_0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \^a\(7 downto 4),
      S(3 downto 0) => b(7 downto 4)
    );
\a[8]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \a[4]_INST_0_n_0\,
      CO(3) => \a[8]_INST_0_n_0\,
      CO(2) => \a[8]_INST_0_n_1\,
      CO(1) => \a[8]_INST_0_n_2\,
      CO(0) => \a[8]_INST_0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \^a\(11 downto 8),
      S(3 downto 0) => b(11 downto 8)
    );
\mul_ln7_reg_101[19]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_103,
      I1 => tmp_product_n_103,
      O => \mul_ln7_reg_101[19]_i_2_n_0\
    );
\mul_ln7_reg_101[19]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_104,
      I1 => tmp_product_n_104,
      O => \mul_ln7_reg_101[19]_i_3_n_0\
    );
\mul_ln7_reg_101[19]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_105,
      I1 => tmp_product_n_105,
      O => \mul_ln7_reg_101[19]_i_4_n_0\
    );
\mul_ln7_reg_101[23]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_99,
      I1 => tmp_product_n_99,
      O => \mul_ln7_reg_101[23]_i_2_n_0\
    );
\mul_ln7_reg_101[23]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_100,
      I1 => tmp_product_n_100,
      O => \mul_ln7_reg_101[23]_i_3_n_0\
    );
\mul_ln7_reg_101[23]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_101,
      I1 => tmp_product_n_101,
      O => \mul_ln7_reg_101[23]_i_4_n_0\
    );
\mul_ln7_reg_101[23]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_102,
      I1 => tmp_product_n_102,
      O => \mul_ln7_reg_101[23]_i_5_n_0\
    );
\mul_ln7_reg_101[27]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_95,
      I1 => tmp_product_n_95,
      O => \mul_ln7_reg_101[27]_i_2_n_0\
    );
\mul_ln7_reg_101[27]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_96,
      I1 => tmp_product_n_96,
      O => \mul_ln7_reg_101[27]_i_3_n_0\
    );
\mul_ln7_reg_101[27]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_97,
      I1 => tmp_product_n_97,
      O => \mul_ln7_reg_101[27]_i_4_n_0\
    );
\mul_ln7_reg_101[27]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_98,
      I1 => tmp_product_n_98,
      O => \mul_ln7_reg_101[27]_i_5_n_0\
    );
\mul_ln7_reg_101[31]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_91,
      I1 => tmp_product_n_91,
      O => \mul_ln7_reg_101[31]_i_2_n_0\
    );
\mul_ln7_reg_101[31]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_92,
      I1 => tmp_product_n_92,
      O => \mul_ln7_reg_101[31]_i_3_n_0\
    );
\mul_ln7_reg_101[31]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_93,
      I1 => tmp_product_n_93,
      O => \mul_ln7_reg_101[31]_i_4_n_0\
    );
\mul_ln7_reg_101[31]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_reg_n_94,
      I1 => tmp_product_n_94,
      O => \mul_ln7_reg_101[31]_i_5_n_0\
    );
\mul_ln7_reg_101_reg[19]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \mul_ln7_reg_101_reg[19]_i_1_n_0\,
      CO(2) => \mul_ln7_reg_101_reg[19]_i_1_n_1\,
      CO(1) => \mul_ln7_reg_101_reg[19]_i_1_n_2\,
      CO(0) => \mul_ln7_reg_101_reg[19]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => p_reg_n_103,
      DI(2) => p_reg_n_104,
      DI(1) => p_reg_n_105,
      DI(0) => '0',
      O(3 downto 0) => D(19 downto 16),
      S(3) => \mul_ln7_reg_101[19]_i_2_n_0\,
      S(2) => \mul_ln7_reg_101[19]_i_3_n_0\,
      S(1) => \mul_ln7_reg_101[19]_i_4_n_0\,
      S(0) => \p_reg[16]__0_n_0\
    );
\mul_ln7_reg_101_reg[23]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \mul_ln7_reg_101_reg[19]_i_1_n_0\,
      CO(3) => \mul_ln7_reg_101_reg[23]_i_1_n_0\,
      CO(2) => \mul_ln7_reg_101_reg[23]_i_1_n_1\,
      CO(1) => \mul_ln7_reg_101_reg[23]_i_1_n_2\,
      CO(0) => \mul_ln7_reg_101_reg[23]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => p_reg_n_99,
      DI(2) => p_reg_n_100,
      DI(1) => p_reg_n_101,
      DI(0) => p_reg_n_102,
      O(3 downto 0) => D(23 downto 20),
      S(3) => \mul_ln7_reg_101[23]_i_2_n_0\,
      S(2) => \mul_ln7_reg_101[23]_i_3_n_0\,
      S(1) => \mul_ln7_reg_101[23]_i_4_n_0\,
      S(0) => \mul_ln7_reg_101[23]_i_5_n_0\
    );
\mul_ln7_reg_101_reg[27]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \mul_ln7_reg_101_reg[23]_i_1_n_0\,
      CO(3) => \mul_ln7_reg_101_reg[27]_i_1_n_0\,
      CO(2) => \mul_ln7_reg_101_reg[27]_i_1_n_1\,
      CO(1) => \mul_ln7_reg_101_reg[27]_i_1_n_2\,
      CO(0) => \mul_ln7_reg_101_reg[27]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => p_reg_n_95,
      DI(2) => p_reg_n_96,
      DI(1) => p_reg_n_97,
      DI(0) => p_reg_n_98,
      O(3 downto 0) => D(27 downto 24),
      S(3) => \mul_ln7_reg_101[27]_i_2_n_0\,
      S(2) => \mul_ln7_reg_101[27]_i_3_n_0\,
      S(1) => \mul_ln7_reg_101[27]_i_4_n_0\,
      S(0) => \mul_ln7_reg_101[27]_i_5_n_0\
    );
\mul_ln7_reg_101_reg[31]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \mul_ln7_reg_101_reg[27]_i_1_n_0\,
      CO(3) => \NLW_mul_ln7_reg_101_reg[31]_i_1_CO_UNCONNECTED\(3),
      CO(2) => \mul_ln7_reg_101_reg[31]_i_1_n_1\,
      CO(1) => \mul_ln7_reg_101_reg[31]_i_1_n_2\,
      CO(0) => \mul_ln7_reg_101_reg[31]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2) => p_reg_n_92,
      DI(1) => p_reg_n_93,
      DI(0) => p_reg_n_94,
      O(3 downto 0) => D(31 downto 28),
      S(3) => \mul_ln7_reg_101[31]_i_2_n_0\,
      S(2) => \mul_ln7_reg_101[31]_i_3_n_0\,
      S(1) => \mul_ln7_reg_101[31]_i_4_n_0\,
      S(0) => \mul_ln7_reg_101[31]_i_5_n_0\
    );
p_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 1,
      BREG => 1,
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
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => b(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_p_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => \^a\(31),
      B(16) => \^a\(31),
      B(15) => \^a\(31),
      B(14 downto 0) => \^a\(31 downto 17),
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
      CEB1 => '0',
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
      P(22) => p_reg_n_83,
      P(21) => p_reg_n_84,
      P(20) => p_reg_n_85,
      P(19) => p_reg_n_86,
      P(18) => p_reg_n_87,
      P(17) => p_reg_n_88,
      P(16) => p_reg_n_89,
      P(15) => p_reg_n_90,
      P(14) => p_reg_n_91,
      P(13) => p_reg_n_92,
      P(12) => p_reg_n_93,
      P(11) => p_reg_n_94,
      P(10) => p_reg_n_95,
      P(9) => p_reg_n_96,
      P(8) => p_reg_n_97,
      P(7) => p_reg_n_98,
      P(6) => p_reg_n_99,
      P(5) => p_reg_n_100,
      P(4) => p_reg_n_101,
      P(3) => p_reg_n_102,
      P(2) => p_reg_n_103,
      P(1) => p_reg_n_104,
      P(0) => p_reg_n_105,
      PATTERNBDETECT => NLW_p_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_p_reg_PATTERNDETECT_UNCONNECTED,
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
\p_reg[0]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_105\,
      Q => D(0),
      R => '0'
    );
\p_reg[10]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_95\,
      Q => D(10),
      R => '0'
    );
\p_reg[11]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_94\,
      Q => D(11),
      R => '0'
    );
\p_reg[12]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_93\,
      Q => D(12),
      R => '0'
    );
\p_reg[13]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_92\,
      Q => D(13),
      R => '0'
    );
\p_reg[14]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_91\,
      Q => D(14),
      R => '0'
    );
\p_reg[15]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_90\,
      Q => D(15),
      R => '0'
    );
\p_reg[16]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_89\,
      Q => \p_reg[16]__0_n_0\,
      R => '0'
    );
\p_reg[1]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_104\,
      Q => D(1),
      R => '0'
    );
\p_reg[2]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_103\,
      Q => D(2),
      R => '0'
    );
\p_reg[3]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_102\,
      Q => D(3),
      R => '0'
    );
\p_reg[4]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_101\,
      Q => D(4),
      R => '0'
    );
\p_reg[5]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_100\,
      Q => D(5),
      R => '0'
    );
\p_reg[6]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_99\,
      Q => D(6),
      R => '0'
    );
\p_reg[7]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_98\,
      Q => D(7),
      R => '0'
    );
\p_reg[8]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_97\,
      Q => D(8),
      R => '0'
    );
\p_reg[9]__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_product__0_n_96\,
      Q => D(9),
      R => '0'
    );
tmp_product: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 1,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 1,
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
      A(16 downto 0) => \^a\(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_tmp_product_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => b(31),
      B(16) => b(31),
      B(15) => b(31),
      B(14 downto 0) => b(31 downto 17),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_tmp_product_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_tmp_product_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_tmp_product_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => '0',
      CEA2 => Q(0),
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
\tmp_product__0\: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 1,
      BREG => 1,
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
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => b(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => \NLW_tmp_product__0_ACOUT_UNCONNECTED\(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => '0',
      B(16 downto 0) => \^a\(16 downto 0),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => \NLW_tmp_product__0_BCOUT_UNCONNECTED\(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => \NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED\,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => \NLW_tmp_product__0_CARRYOUT_UNCONNECTED\(3 downto 0),
      CEA1 => '0',
      CEA2 => '0',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
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
      MULTSIGNOUT => \NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED\,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => \NLW_tmp_product__0_OVERFLOW_UNCONNECTED\,
      P(47) => \tmp_product__0_n_58\,
      P(46) => \tmp_product__0_n_59\,
      P(45) => \tmp_product__0_n_60\,
      P(44) => \tmp_product__0_n_61\,
      P(43) => \tmp_product__0_n_62\,
      P(42) => \tmp_product__0_n_63\,
      P(41) => \tmp_product__0_n_64\,
      P(40) => \tmp_product__0_n_65\,
      P(39) => \tmp_product__0_n_66\,
      P(38) => \tmp_product__0_n_67\,
      P(37) => \tmp_product__0_n_68\,
      P(36) => \tmp_product__0_n_69\,
      P(35) => \tmp_product__0_n_70\,
      P(34) => \tmp_product__0_n_71\,
      P(33) => \tmp_product__0_n_72\,
      P(32) => \tmp_product__0_n_73\,
      P(31) => \tmp_product__0_n_74\,
      P(30) => \tmp_product__0_n_75\,
      P(29) => \tmp_product__0_n_76\,
      P(28) => \tmp_product__0_n_77\,
      P(27) => \tmp_product__0_n_78\,
      P(26) => \tmp_product__0_n_79\,
      P(25) => \tmp_product__0_n_80\,
      P(24) => \tmp_product__0_n_81\,
      P(23) => \tmp_product__0_n_82\,
      P(22) => \tmp_product__0_n_83\,
      P(21) => \tmp_product__0_n_84\,
      P(20) => \tmp_product__0_n_85\,
      P(19) => \tmp_product__0_n_86\,
      P(18) => \tmp_product__0_n_87\,
      P(17) => \tmp_product__0_n_88\,
      P(16) => \tmp_product__0_n_89\,
      P(15) => \tmp_product__0_n_90\,
      P(14) => \tmp_product__0_n_91\,
      P(13) => \tmp_product__0_n_92\,
      P(12) => \tmp_product__0_n_93\,
      P(11) => \tmp_product__0_n_94\,
      P(10) => \tmp_product__0_n_95\,
      P(9) => \tmp_product__0_n_96\,
      P(8) => \tmp_product__0_n_97\,
      P(7) => \tmp_product__0_n_98\,
      P(6) => \tmp_product__0_n_99\,
      P(5) => \tmp_product__0_n_100\,
      P(4) => \tmp_product__0_n_101\,
      P(3) => \tmp_product__0_n_102\,
      P(2) => \tmp_product__0_n_103\,
      P(1) => \tmp_product__0_n_104\,
      P(0) => \tmp_product__0_n_105\,
      PATTERNBDETECT => \NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED\,
      PATTERNDETECT => \NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED\,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
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
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1 is
  port (
    a : out STD_LOGIC_VECTOR ( 31 downto 0 );
    D : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    b : in STD_LOGIC_VECTOR ( 31 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1 : entity is "top_dfg_mul_32s_32s_32_2_1";
end bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1;

architecture STRUCTURE of bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1 is
begin
top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U: entity work.bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0_1
     port map (
      D(31 downto 0) => D(31 downto 0),
      Q(0) => Q(0),
      a(31 downto 0) => a(31 downto 0),
      ap_clk => ap_clk,
      b(31 downto 0) => b(31 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_0 is
  port (
    D : out STD_LOGIC_VECTOR ( 31 downto 0 );
    p_reg : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    b : in STD_LOGIC_VECTOR ( 31 downto 0 );
    c_i : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_reg_0 : in STD_LOGIC_VECTOR ( 31 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_0 : entity is "top_dfg_mul_32s_32s_32_2_1";
end bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_0;

architecture STRUCTURE of bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_0 is
begin
top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U: entity work.bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_Multiplier_0
     port map (
      D(31 downto 0) => D(31 downto 0),
      Q(0) => Q(0),
      ap_clk => ap_clk,
      b(31 downto 0) => b(31 downto 0),
      c_i(31 downto 0) => c_i(31 downto 0),
      p_reg_0(31 downto 0) => p_reg(31 downto 0),
      p_reg_1(31 downto 0) => p_reg_0(31 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_top_dfg is
  port (
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    a : out STD_LOGIC_VECTOR ( 31 downto 0 );
    a_ap_vld : out STD_LOGIC;
    b : in STD_LOGIC_VECTOR ( 31 downto 0 );
    c_i : in STD_LOGIC_VECTOR ( 31 downto 0 );
    c_o : out STD_LOGIC_VECTOR ( 31 downto 0 );
    c_o_ap_vld : out STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_top_dfg : entity is "top_dfg";
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of bd_0_hls_inst_0_top_dfg : entity is "7'b0000001";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of bd_0_hls_inst_0_top_dfg : entity is "7'b0000010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of bd_0_hls_inst_0_top_dfg : entity is "7'b0000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of bd_0_hls_inst_0_top_dfg : entity is "7'b0001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of bd_0_hls_inst_0_top_dfg : entity is "7'b0010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of bd_0_hls_inst_0_top_dfg : entity is "7'b0100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of bd_0_hls_inst_0_top_dfg : entity is "7'b1000000";
  attribute hls_module : string;
  attribute hls_module of bd_0_hls_inst_0_top_dfg : entity is "yes";
end bd_0_hls_inst_0_top_dfg;

architecture STRUCTURE of bd_0_hls_inst_0_top_dfg is
  signal \ap_CS_fsm[1]_i_2_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[1]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[4]\ : STD_LOGIC;
  signal ap_CS_fsm_state1 : STD_LOGIC;
  signal ap_CS_fsm_state3 : STD_LOGIC;
  signal ap_CS_fsm_state4 : STD_LOGIC;
  signal ap_CS_fsm_state6 : STD_LOGIC;
  signal ap_NS_fsm : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \^ap_done\ : STD_LOGIC;
  signal \c_o[0]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \c_o[0]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \c_o[0]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \c_o[0]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \c_o[0]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \c_o[0]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \c_o[0]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \c_o[0]_INST_0_n_0\ : STD_LOGIC;
  signal \c_o[0]_INST_0_n_1\ : STD_LOGIC;
  signal \c_o[0]_INST_0_n_2\ : STD_LOGIC;
  signal \c_o[0]_INST_0_n_3\ : STD_LOGIC;
  signal \c_o[12]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \c_o[12]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \c_o[12]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \c_o[12]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \c_o[12]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \c_o[12]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \c_o[12]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \c_o[12]_INST_0_i_8_n_0\ : STD_LOGIC;
  signal \c_o[12]_INST_0_n_0\ : STD_LOGIC;
  signal \c_o[12]_INST_0_n_1\ : STD_LOGIC;
  signal \c_o[12]_INST_0_n_2\ : STD_LOGIC;
  signal \c_o[12]_INST_0_n_3\ : STD_LOGIC;
  signal \c_o[16]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \c_o[16]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \c_o[16]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \c_o[16]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \c_o[16]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \c_o[16]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \c_o[16]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \c_o[16]_INST_0_i_8_n_0\ : STD_LOGIC;
  signal \c_o[16]_INST_0_n_0\ : STD_LOGIC;
  signal \c_o[16]_INST_0_n_1\ : STD_LOGIC;
  signal \c_o[16]_INST_0_n_2\ : STD_LOGIC;
  signal \c_o[16]_INST_0_n_3\ : STD_LOGIC;
  signal \c_o[20]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \c_o[20]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \c_o[20]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \c_o[20]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \c_o[20]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \c_o[20]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \c_o[20]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \c_o[20]_INST_0_i_8_n_0\ : STD_LOGIC;
  signal \c_o[20]_INST_0_n_0\ : STD_LOGIC;
  signal \c_o[20]_INST_0_n_1\ : STD_LOGIC;
  signal \c_o[20]_INST_0_n_2\ : STD_LOGIC;
  signal \c_o[20]_INST_0_n_3\ : STD_LOGIC;
  signal \c_o[24]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \c_o[24]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \c_o[24]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \c_o[24]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \c_o[24]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \c_o[24]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \c_o[24]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \c_o[24]_INST_0_i_8_n_0\ : STD_LOGIC;
  signal \c_o[24]_INST_0_n_0\ : STD_LOGIC;
  signal \c_o[24]_INST_0_n_1\ : STD_LOGIC;
  signal \c_o[24]_INST_0_n_2\ : STD_LOGIC;
  signal \c_o[24]_INST_0_n_3\ : STD_LOGIC;
  signal \c_o[28]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \c_o[28]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \c_o[28]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \c_o[28]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \c_o[28]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \c_o[28]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \c_o[28]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \c_o[28]_INST_0_n_1\ : STD_LOGIC;
  signal \c_o[28]_INST_0_n_2\ : STD_LOGIC;
  signal \c_o[28]_INST_0_n_3\ : STD_LOGIC;
  signal \c_o[4]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \c_o[4]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \c_o[4]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \c_o[4]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \c_o[4]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \c_o[4]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \c_o[4]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \c_o[4]_INST_0_i_8_n_0\ : STD_LOGIC;
  signal \c_o[4]_INST_0_n_0\ : STD_LOGIC;
  signal \c_o[4]_INST_0_n_1\ : STD_LOGIC;
  signal \c_o[4]_INST_0_n_2\ : STD_LOGIC;
  signal \c_o[4]_INST_0_n_3\ : STD_LOGIC;
  signal \c_o[8]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \c_o[8]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \c_o[8]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \c_o[8]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \c_o[8]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \c_o[8]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \c_o[8]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \c_o[8]_INST_0_i_8_n_0\ : STD_LOGIC;
  signal \c_o[8]_INST_0_n_0\ : STD_LOGIC;
  signal \c_o[8]_INST_0_n_1\ : STD_LOGIC;
  signal \c_o[8]_INST_0_n_2\ : STD_LOGIC;
  signal \c_o[8]_INST_0_n_3\ : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_48 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_49 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_50 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_51 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_52 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_53 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_54 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_55 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_56 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_57 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_58 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_59 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_60 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_61 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_62 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U1_n_63 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_48 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_49 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_50 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_51 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_52 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_53 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_54 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_55 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_56 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_57 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_58 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_59 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_60 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_61 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_62 : STD_LOGIC;
  signal mul_32s_32s_32_2_1_U2_n_63 : STD_LOGIC;
  signal mul_ln7_reg_101 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal t1_fu_65_p2 : STD_LOGIC_VECTOR ( 31 downto 1 );
  signal t1_reg_106 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \t1_reg_106[4]_i_2_n_0\ : STD_LOGIC;
  signal \t1_reg_106_reg[12]_i_1_n_0\ : STD_LOGIC;
  signal \t1_reg_106_reg[12]_i_1_n_1\ : STD_LOGIC;
  signal \t1_reg_106_reg[12]_i_1_n_2\ : STD_LOGIC;
  signal \t1_reg_106_reg[12]_i_1_n_3\ : STD_LOGIC;
  signal \t1_reg_106_reg[16]_i_1_n_0\ : STD_LOGIC;
  signal \t1_reg_106_reg[16]_i_1_n_1\ : STD_LOGIC;
  signal \t1_reg_106_reg[16]_i_1_n_2\ : STD_LOGIC;
  signal \t1_reg_106_reg[16]_i_1_n_3\ : STD_LOGIC;
  signal \t1_reg_106_reg[20]_i_1_n_0\ : STD_LOGIC;
  signal \t1_reg_106_reg[20]_i_1_n_1\ : STD_LOGIC;
  signal \t1_reg_106_reg[20]_i_1_n_2\ : STD_LOGIC;
  signal \t1_reg_106_reg[20]_i_1_n_3\ : STD_LOGIC;
  signal \t1_reg_106_reg[24]_i_1_n_0\ : STD_LOGIC;
  signal \t1_reg_106_reg[24]_i_1_n_1\ : STD_LOGIC;
  signal \t1_reg_106_reg[24]_i_1_n_2\ : STD_LOGIC;
  signal \t1_reg_106_reg[24]_i_1_n_3\ : STD_LOGIC;
  signal \t1_reg_106_reg[28]_i_1_n_0\ : STD_LOGIC;
  signal \t1_reg_106_reg[28]_i_1_n_1\ : STD_LOGIC;
  signal \t1_reg_106_reg[28]_i_1_n_2\ : STD_LOGIC;
  signal \t1_reg_106_reg[28]_i_1_n_3\ : STD_LOGIC;
  signal \t1_reg_106_reg[31]_i_1_n_2\ : STD_LOGIC;
  signal \t1_reg_106_reg[31]_i_1_n_3\ : STD_LOGIC;
  signal \t1_reg_106_reg[4]_i_1_n_0\ : STD_LOGIC;
  signal \t1_reg_106_reg[4]_i_1_n_1\ : STD_LOGIC;
  signal \t1_reg_106_reg[4]_i_1_n_2\ : STD_LOGIC;
  signal \t1_reg_106_reg[4]_i_1_n_3\ : STD_LOGIC;
  signal \t1_reg_106_reg[8]_i_1_n_0\ : STD_LOGIC;
  signal \t1_reg_106_reg[8]_i_1_n_1\ : STD_LOGIC;
  signal \t1_reg_106_reg[8]_i_1_n_2\ : STD_LOGIC;
  signal \t1_reg_106_reg[8]_i_1_n_3\ : STD_LOGIC;
  signal t2_fu_70_p2 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal t2_reg_111 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal t3_reg_117 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\ : STD_LOGIC_VECTOR ( 31 downto 16 );
  signal \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\ : STD_LOGIC_VECTOR ( 31 downto 16 );
  signal \NLW_c_o[28]_INST_0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_t1_reg_106_reg[31]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_t1_reg_106_reg[31]_i_1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of a_ap_vld_INST_0 : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \ap_CS_fsm[0]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \ap_CS_fsm[1]_i_1\ : label is "soft_lutpair0";
  attribute FSM_ENCODING : string;
  attribute FSM_ENCODING of \ap_CS_fsm_reg[0]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[1]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[2]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[3]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[4]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[5]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[6]\ : label is "none";
  attribute SOFT_HLUTNM of ap_idle_INST_0 : label is "soft_lutpair1";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \c_o[0]_INST_0\ : label is 35;
  attribute HLUTNM : string;
  attribute HLUTNM of \c_o[0]_INST_0_i_1\ : label is "lutpair2";
  attribute HLUTNM of \c_o[0]_INST_0_i_2\ : label is "lutpair1";
  attribute HLUTNM of \c_o[0]_INST_0_i_3\ : label is "lutpair0";
  attribute HLUTNM of \c_o[0]_INST_0_i_4\ : label is "lutpair3";
  attribute HLUTNM of \c_o[0]_INST_0_i_5\ : label is "lutpair2";
  attribute HLUTNM of \c_o[0]_INST_0_i_6\ : label is "lutpair1";
  attribute HLUTNM of \c_o[0]_INST_0_i_7\ : label is "lutpair0";
  attribute ADDER_THRESHOLD of \c_o[12]_INST_0\ : label is 35;
  attribute HLUTNM of \c_o[12]_INST_0_i_1\ : label is "lutpair14";
  attribute HLUTNM of \c_o[12]_INST_0_i_2\ : label is "lutpair13";
  attribute HLUTNM of \c_o[12]_INST_0_i_3\ : label is "lutpair12";
  attribute HLUTNM of \c_o[12]_INST_0_i_4\ : label is "lutpair11";
  attribute HLUTNM of \c_o[12]_INST_0_i_5\ : label is "lutpair15";
  attribute HLUTNM of \c_o[12]_INST_0_i_6\ : label is "lutpair14";
  attribute HLUTNM of \c_o[12]_INST_0_i_7\ : label is "lutpair13";
  attribute HLUTNM of \c_o[12]_INST_0_i_8\ : label is "lutpair12";
  attribute ADDER_THRESHOLD of \c_o[16]_INST_0\ : label is 35;
  attribute HLUTNM of \c_o[16]_INST_0_i_1\ : label is "lutpair18";
  attribute HLUTNM of \c_o[16]_INST_0_i_2\ : label is "lutpair17";
  attribute HLUTNM of \c_o[16]_INST_0_i_3\ : label is "lutpair16";
  attribute HLUTNM of \c_o[16]_INST_0_i_4\ : label is "lutpair15";
  attribute HLUTNM of \c_o[16]_INST_0_i_5\ : label is "lutpair19";
  attribute HLUTNM of \c_o[16]_INST_0_i_6\ : label is "lutpair18";
  attribute HLUTNM of \c_o[16]_INST_0_i_7\ : label is "lutpair17";
  attribute HLUTNM of \c_o[16]_INST_0_i_8\ : label is "lutpair16";
  attribute ADDER_THRESHOLD of \c_o[20]_INST_0\ : label is 35;
  attribute HLUTNM of \c_o[20]_INST_0_i_1\ : label is "lutpair22";
  attribute HLUTNM of \c_o[20]_INST_0_i_2\ : label is "lutpair21";
  attribute HLUTNM of \c_o[20]_INST_0_i_3\ : label is "lutpair20";
  attribute HLUTNM of \c_o[20]_INST_0_i_4\ : label is "lutpair19";
  attribute HLUTNM of \c_o[20]_INST_0_i_5\ : label is "lutpair23";
  attribute HLUTNM of \c_o[20]_INST_0_i_6\ : label is "lutpair22";
  attribute HLUTNM of \c_o[20]_INST_0_i_7\ : label is "lutpair21";
  attribute HLUTNM of \c_o[20]_INST_0_i_8\ : label is "lutpair20";
  attribute ADDER_THRESHOLD of \c_o[24]_INST_0\ : label is 35;
  attribute HLUTNM of \c_o[24]_INST_0_i_1\ : label is "lutpair26";
  attribute HLUTNM of \c_o[24]_INST_0_i_2\ : label is "lutpair25";
  attribute HLUTNM of \c_o[24]_INST_0_i_3\ : label is "lutpair24";
  attribute HLUTNM of \c_o[24]_INST_0_i_4\ : label is "lutpair23";
  attribute HLUTNM of \c_o[24]_INST_0_i_5\ : label is "lutpair27";
  attribute HLUTNM of \c_o[24]_INST_0_i_6\ : label is "lutpair26";
  attribute HLUTNM of \c_o[24]_INST_0_i_7\ : label is "lutpair25";
  attribute HLUTNM of \c_o[24]_INST_0_i_8\ : label is "lutpair24";
  attribute ADDER_THRESHOLD of \c_o[28]_INST_0\ : label is 35;
  attribute HLUTNM of \c_o[28]_INST_0_i_1\ : label is "lutpair29";
  attribute HLUTNM of \c_o[28]_INST_0_i_2\ : label is "lutpair28";
  attribute HLUTNM of \c_o[28]_INST_0_i_3\ : label is "lutpair27";
  attribute HLUTNM of \c_o[28]_INST_0_i_6\ : label is "lutpair29";
  attribute HLUTNM of \c_o[28]_INST_0_i_7\ : label is "lutpair28";
  attribute ADDER_THRESHOLD of \c_o[4]_INST_0\ : label is 35;
  attribute HLUTNM of \c_o[4]_INST_0_i_1\ : label is "lutpair6";
  attribute HLUTNM of \c_o[4]_INST_0_i_2\ : label is "lutpair5";
  attribute HLUTNM of \c_o[4]_INST_0_i_3\ : label is "lutpair4";
  attribute HLUTNM of \c_o[4]_INST_0_i_4\ : label is "lutpair3";
  attribute HLUTNM of \c_o[4]_INST_0_i_5\ : label is "lutpair7";
  attribute HLUTNM of \c_o[4]_INST_0_i_6\ : label is "lutpair6";
  attribute HLUTNM of \c_o[4]_INST_0_i_7\ : label is "lutpair5";
  attribute HLUTNM of \c_o[4]_INST_0_i_8\ : label is "lutpair4";
  attribute ADDER_THRESHOLD of \c_o[8]_INST_0\ : label is 35;
  attribute HLUTNM of \c_o[8]_INST_0_i_1\ : label is "lutpair10";
  attribute HLUTNM of \c_o[8]_INST_0_i_2\ : label is "lutpair9";
  attribute HLUTNM of \c_o[8]_INST_0_i_3\ : label is "lutpair8";
  attribute HLUTNM of \c_o[8]_INST_0_i_4\ : label is "lutpair7";
  attribute HLUTNM of \c_o[8]_INST_0_i_5\ : label is "lutpair11";
  attribute HLUTNM of \c_o[8]_INST_0_i_6\ : label is "lutpair10";
  attribute HLUTNM of \c_o[8]_INST_0_i_7\ : label is "lutpair9";
  attribute HLUTNM of \c_o[8]_INST_0_i_8\ : label is "lutpair8";
  attribute ADDER_THRESHOLD of \t1_reg_106_reg[12]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t1_reg_106_reg[16]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t1_reg_106_reg[20]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t1_reg_106_reg[24]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t1_reg_106_reg[28]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t1_reg_106_reg[31]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t1_reg_106_reg[4]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \t1_reg_106_reg[8]_i_1\ : label is 35;
begin
  ap_done <= \^ap_done\;
  ap_ready <= \^ap_done\;
  c_o_ap_vld <= \^ap_done\;
a_ap_vld_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => ap_CS_fsm_state1,
      I1 => ap_start,
      O => a_ap_vld
    );
\ap_CS_fsm[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AE"
    )
        port map (
      I0 => \^ap_done\,
      I1 => ap_CS_fsm_state1,
      I2 => ap_start,
      O => ap_NS_fsm(0)
    );
\ap_CS_fsm[1]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00001000"
    )
        port map (
      I0 => \^ap_done\,
      I1 => \ap_CS_fsm_reg_n_0_[1]\,
      I2 => ap_CS_fsm_state1,
      I3 => ap_start,
      I4 => \ap_CS_fsm[1]_i_2_n_0\,
      O => ap_NS_fsm(1)
    );
\ap_CS_fsm[1]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[4]\,
      I1 => ap_CS_fsm_state6,
      I2 => ap_CS_fsm_state3,
      I3 => ap_CS_fsm_state4,
      O => \ap_CS_fsm[1]_i_2_n_0\
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
\ap_CS_fsm_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[1]\,
      Q => ap_CS_fsm_state3,
      R => ap_rst
    );
\ap_CS_fsm_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state3,
      Q => ap_CS_fsm_state4,
      R => ap_rst
    );
\ap_CS_fsm_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state4,
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
      Q => \^ap_done\,
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
\c_o[0]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \c_o[0]_INST_0_n_0\,
      CO(2) => \c_o[0]_INST_0_n_1\,
      CO(1) => \c_o[0]_INST_0_n_2\,
      CO(0) => \c_o[0]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => \c_o[0]_INST_0_i_1_n_0\,
      DI(2) => \c_o[0]_INST_0_i_2_n_0\,
      DI(1) => \c_o[0]_INST_0_i_3_n_0\,
      DI(0) => '0',
      O(3 downto 0) => c_o(3 downto 0),
      S(3) => \c_o[0]_INST_0_i_4_n_0\,
      S(2) => \c_o[0]_INST_0_i_5_n_0\,
      S(1) => \c_o[0]_INST_0_i_6_n_0\,
      S(0) => \c_o[0]_INST_0_i_7_n_0\
    );
\c_o[0]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(2),
      I1 => t2_reg_111(2),
      I2 => t1_reg_106(2),
      O => \c_o[0]_INST_0_i_1_n_0\
    );
\c_o[0]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(1),
      I1 => t2_reg_111(1),
      I2 => t1_reg_106(1),
      O => \c_o[0]_INST_0_i_2_n_0\
    );
\c_o[0]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(0),
      I1 => t2_reg_111(0),
      I2 => t1_reg_106(0),
      O => \c_o[0]_INST_0_i_3_n_0\
    );
\c_o[0]_INST_0_i_4\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(3),
      I1 => t2_reg_111(3),
      I2 => t1_reg_106(3),
      I3 => \c_o[0]_INST_0_i_1_n_0\,
      O => \c_o[0]_INST_0_i_4_n_0\
    );
\c_o[0]_INST_0_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(2),
      I1 => t2_reg_111(2),
      I2 => t1_reg_106(2),
      I3 => \c_o[0]_INST_0_i_2_n_0\,
      O => \c_o[0]_INST_0_i_5_n_0\
    );
\c_o[0]_INST_0_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(1),
      I1 => t2_reg_111(1),
      I2 => t1_reg_106(1),
      I3 => \c_o[0]_INST_0_i_3_n_0\,
      O => \c_o[0]_INST_0_i_6_n_0\
    );
\c_o[0]_INST_0_i_7\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => t3_reg_117(0),
      I1 => t2_reg_111(0),
      I2 => t1_reg_106(0),
      O => \c_o[0]_INST_0_i_7_n_0\
    );
\c_o[12]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \c_o[8]_INST_0_n_0\,
      CO(3) => \c_o[12]_INST_0_n_0\,
      CO(2) => \c_o[12]_INST_0_n_1\,
      CO(1) => \c_o[12]_INST_0_n_2\,
      CO(0) => \c_o[12]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => \c_o[12]_INST_0_i_1_n_0\,
      DI(2) => \c_o[12]_INST_0_i_2_n_0\,
      DI(1) => \c_o[12]_INST_0_i_3_n_0\,
      DI(0) => \c_o[12]_INST_0_i_4_n_0\,
      O(3 downto 0) => c_o(15 downto 12),
      S(3) => \c_o[12]_INST_0_i_5_n_0\,
      S(2) => \c_o[12]_INST_0_i_6_n_0\,
      S(1) => \c_o[12]_INST_0_i_7_n_0\,
      S(0) => \c_o[12]_INST_0_i_8_n_0\
    );
\c_o[12]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(14),
      I1 => t2_reg_111(14),
      I2 => t1_reg_106(14),
      O => \c_o[12]_INST_0_i_1_n_0\
    );
\c_o[12]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(13),
      I1 => t2_reg_111(13),
      I2 => t1_reg_106(13),
      O => \c_o[12]_INST_0_i_2_n_0\
    );
\c_o[12]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(12),
      I1 => t2_reg_111(12),
      I2 => t1_reg_106(12),
      O => \c_o[12]_INST_0_i_3_n_0\
    );
\c_o[12]_INST_0_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(11),
      I1 => t2_reg_111(11),
      I2 => t1_reg_106(11),
      O => \c_o[12]_INST_0_i_4_n_0\
    );
\c_o[12]_INST_0_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(15),
      I1 => t2_reg_111(15),
      I2 => t1_reg_106(15),
      I3 => \c_o[12]_INST_0_i_1_n_0\,
      O => \c_o[12]_INST_0_i_5_n_0\
    );
\c_o[12]_INST_0_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(14),
      I1 => t2_reg_111(14),
      I2 => t1_reg_106(14),
      I3 => \c_o[12]_INST_0_i_2_n_0\,
      O => \c_o[12]_INST_0_i_6_n_0\
    );
\c_o[12]_INST_0_i_7\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(13),
      I1 => t2_reg_111(13),
      I2 => t1_reg_106(13),
      I3 => \c_o[12]_INST_0_i_3_n_0\,
      O => \c_o[12]_INST_0_i_7_n_0\
    );
\c_o[12]_INST_0_i_8\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(12),
      I1 => t2_reg_111(12),
      I2 => t1_reg_106(12),
      I3 => \c_o[12]_INST_0_i_4_n_0\,
      O => \c_o[12]_INST_0_i_8_n_0\
    );
\c_o[16]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \c_o[12]_INST_0_n_0\,
      CO(3) => \c_o[16]_INST_0_n_0\,
      CO(2) => \c_o[16]_INST_0_n_1\,
      CO(1) => \c_o[16]_INST_0_n_2\,
      CO(0) => \c_o[16]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => \c_o[16]_INST_0_i_1_n_0\,
      DI(2) => \c_o[16]_INST_0_i_2_n_0\,
      DI(1) => \c_o[16]_INST_0_i_3_n_0\,
      DI(0) => \c_o[16]_INST_0_i_4_n_0\,
      O(3 downto 0) => c_o(19 downto 16),
      S(3) => \c_o[16]_INST_0_i_5_n_0\,
      S(2) => \c_o[16]_INST_0_i_6_n_0\,
      S(1) => \c_o[16]_INST_0_i_7_n_0\,
      S(0) => \c_o[16]_INST_0_i_8_n_0\
    );
\c_o[16]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(18),
      I1 => t2_reg_111(18),
      I2 => t1_reg_106(18),
      O => \c_o[16]_INST_0_i_1_n_0\
    );
\c_o[16]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(17),
      I1 => t2_reg_111(17),
      I2 => t1_reg_106(17),
      O => \c_o[16]_INST_0_i_2_n_0\
    );
\c_o[16]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(16),
      I1 => t2_reg_111(16),
      I2 => t1_reg_106(16),
      O => \c_o[16]_INST_0_i_3_n_0\
    );
\c_o[16]_INST_0_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(15),
      I1 => t2_reg_111(15),
      I2 => t1_reg_106(15),
      O => \c_o[16]_INST_0_i_4_n_0\
    );
\c_o[16]_INST_0_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(19),
      I1 => t2_reg_111(19),
      I2 => t1_reg_106(19),
      I3 => \c_o[16]_INST_0_i_1_n_0\,
      O => \c_o[16]_INST_0_i_5_n_0\
    );
\c_o[16]_INST_0_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(18),
      I1 => t2_reg_111(18),
      I2 => t1_reg_106(18),
      I3 => \c_o[16]_INST_0_i_2_n_0\,
      O => \c_o[16]_INST_0_i_6_n_0\
    );
\c_o[16]_INST_0_i_7\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(17),
      I1 => t2_reg_111(17),
      I2 => t1_reg_106(17),
      I3 => \c_o[16]_INST_0_i_3_n_0\,
      O => \c_o[16]_INST_0_i_7_n_0\
    );
\c_o[16]_INST_0_i_8\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(16),
      I1 => t2_reg_111(16),
      I2 => t1_reg_106(16),
      I3 => \c_o[16]_INST_0_i_4_n_0\,
      O => \c_o[16]_INST_0_i_8_n_0\
    );
\c_o[20]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \c_o[16]_INST_0_n_0\,
      CO(3) => \c_o[20]_INST_0_n_0\,
      CO(2) => \c_o[20]_INST_0_n_1\,
      CO(1) => \c_o[20]_INST_0_n_2\,
      CO(0) => \c_o[20]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => \c_o[20]_INST_0_i_1_n_0\,
      DI(2) => \c_o[20]_INST_0_i_2_n_0\,
      DI(1) => \c_o[20]_INST_0_i_3_n_0\,
      DI(0) => \c_o[20]_INST_0_i_4_n_0\,
      O(3 downto 0) => c_o(23 downto 20),
      S(3) => \c_o[20]_INST_0_i_5_n_0\,
      S(2) => \c_o[20]_INST_0_i_6_n_0\,
      S(1) => \c_o[20]_INST_0_i_7_n_0\,
      S(0) => \c_o[20]_INST_0_i_8_n_0\
    );
\c_o[20]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(22),
      I1 => t2_reg_111(22),
      I2 => t1_reg_106(22),
      O => \c_o[20]_INST_0_i_1_n_0\
    );
\c_o[20]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(21),
      I1 => t2_reg_111(21),
      I2 => t1_reg_106(21),
      O => \c_o[20]_INST_0_i_2_n_0\
    );
\c_o[20]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(20),
      I1 => t2_reg_111(20),
      I2 => t1_reg_106(20),
      O => \c_o[20]_INST_0_i_3_n_0\
    );
\c_o[20]_INST_0_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(19),
      I1 => t2_reg_111(19),
      I2 => t1_reg_106(19),
      O => \c_o[20]_INST_0_i_4_n_0\
    );
\c_o[20]_INST_0_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(23),
      I1 => t2_reg_111(23),
      I2 => t1_reg_106(23),
      I3 => \c_o[20]_INST_0_i_1_n_0\,
      O => \c_o[20]_INST_0_i_5_n_0\
    );
\c_o[20]_INST_0_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(22),
      I1 => t2_reg_111(22),
      I2 => t1_reg_106(22),
      I3 => \c_o[20]_INST_0_i_2_n_0\,
      O => \c_o[20]_INST_0_i_6_n_0\
    );
\c_o[20]_INST_0_i_7\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(21),
      I1 => t2_reg_111(21),
      I2 => t1_reg_106(21),
      I3 => \c_o[20]_INST_0_i_3_n_0\,
      O => \c_o[20]_INST_0_i_7_n_0\
    );
\c_o[20]_INST_0_i_8\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(20),
      I1 => t2_reg_111(20),
      I2 => t1_reg_106(20),
      I3 => \c_o[20]_INST_0_i_4_n_0\,
      O => \c_o[20]_INST_0_i_8_n_0\
    );
\c_o[24]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \c_o[20]_INST_0_n_0\,
      CO(3) => \c_o[24]_INST_0_n_0\,
      CO(2) => \c_o[24]_INST_0_n_1\,
      CO(1) => \c_o[24]_INST_0_n_2\,
      CO(0) => \c_o[24]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => \c_o[24]_INST_0_i_1_n_0\,
      DI(2) => \c_o[24]_INST_0_i_2_n_0\,
      DI(1) => \c_o[24]_INST_0_i_3_n_0\,
      DI(0) => \c_o[24]_INST_0_i_4_n_0\,
      O(3 downto 0) => c_o(27 downto 24),
      S(3) => \c_o[24]_INST_0_i_5_n_0\,
      S(2) => \c_o[24]_INST_0_i_6_n_0\,
      S(1) => \c_o[24]_INST_0_i_7_n_0\,
      S(0) => \c_o[24]_INST_0_i_8_n_0\
    );
\c_o[24]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(26),
      I1 => t2_reg_111(26),
      I2 => t1_reg_106(26),
      O => \c_o[24]_INST_0_i_1_n_0\
    );
\c_o[24]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(25),
      I1 => t2_reg_111(25),
      I2 => t1_reg_106(25),
      O => \c_o[24]_INST_0_i_2_n_0\
    );
\c_o[24]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(24),
      I1 => t2_reg_111(24),
      I2 => t1_reg_106(24),
      O => \c_o[24]_INST_0_i_3_n_0\
    );
\c_o[24]_INST_0_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(23),
      I1 => t2_reg_111(23),
      I2 => t1_reg_106(23),
      O => \c_o[24]_INST_0_i_4_n_0\
    );
\c_o[24]_INST_0_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(27),
      I1 => t2_reg_111(27),
      I2 => t1_reg_106(27),
      I3 => \c_o[24]_INST_0_i_1_n_0\,
      O => \c_o[24]_INST_0_i_5_n_0\
    );
\c_o[24]_INST_0_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(26),
      I1 => t2_reg_111(26),
      I2 => t1_reg_106(26),
      I3 => \c_o[24]_INST_0_i_2_n_0\,
      O => \c_o[24]_INST_0_i_6_n_0\
    );
\c_o[24]_INST_0_i_7\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(25),
      I1 => t2_reg_111(25),
      I2 => t1_reg_106(25),
      I3 => \c_o[24]_INST_0_i_3_n_0\,
      O => \c_o[24]_INST_0_i_7_n_0\
    );
\c_o[24]_INST_0_i_8\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(24),
      I1 => t2_reg_111(24),
      I2 => t1_reg_106(24),
      I3 => \c_o[24]_INST_0_i_4_n_0\,
      O => \c_o[24]_INST_0_i_8_n_0\
    );
\c_o[28]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \c_o[24]_INST_0_n_0\,
      CO(3) => \NLW_c_o[28]_INST_0_CO_UNCONNECTED\(3),
      CO(2) => \c_o[28]_INST_0_n_1\,
      CO(1) => \c_o[28]_INST_0_n_2\,
      CO(0) => \c_o[28]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2) => \c_o[28]_INST_0_i_1_n_0\,
      DI(1) => \c_o[28]_INST_0_i_2_n_0\,
      DI(0) => \c_o[28]_INST_0_i_3_n_0\,
      O(3 downto 0) => c_o(31 downto 28),
      S(3) => \c_o[28]_INST_0_i_4_n_0\,
      S(2) => \c_o[28]_INST_0_i_5_n_0\,
      S(1) => \c_o[28]_INST_0_i_6_n_0\,
      S(0) => \c_o[28]_INST_0_i_7_n_0\
    );
\c_o[28]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(29),
      I1 => t2_reg_111(29),
      I2 => t1_reg_106(29),
      O => \c_o[28]_INST_0_i_1_n_0\
    );
\c_o[28]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(28),
      I1 => t2_reg_111(28),
      I2 => t1_reg_106(28),
      O => \c_o[28]_INST_0_i_2_n_0\
    );
\c_o[28]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(27),
      I1 => t2_reg_111(27),
      I2 => t1_reg_106(27),
      O => \c_o[28]_INST_0_i_3_n_0\
    );
\c_o[28]_INST_0_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => t1_reg_106(30),
      I1 => t2_reg_111(30),
      I2 => t3_reg_117(30),
      I3 => t2_reg_111(31),
      I4 => t3_reg_117(31),
      I5 => t1_reg_106(31),
      O => \c_o[28]_INST_0_i_4_n_0\
    );
\c_o[28]_INST_0_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => \c_o[28]_INST_0_i_1_n_0\,
      I1 => t2_reg_111(30),
      I2 => t3_reg_117(30),
      I3 => t1_reg_106(30),
      O => \c_o[28]_INST_0_i_5_n_0\
    );
\c_o[28]_INST_0_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(29),
      I1 => t2_reg_111(29),
      I2 => t1_reg_106(29),
      I3 => \c_o[28]_INST_0_i_2_n_0\,
      O => \c_o[28]_INST_0_i_6_n_0\
    );
\c_o[28]_INST_0_i_7\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(28),
      I1 => t2_reg_111(28),
      I2 => t1_reg_106(28),
      I3 => \c_o[28]_INST_0_i_3_n_0\,
      O => \c_o[28]_INST_0_i_7_n_0\
    );
\c_o[4]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \c_o[0]_INST_0_n_0\,
      CO(3) => \c_o[4]_INST_0_n_0\,
      CO(2) => \c_o[4]_INST_0_n_1\,
      CO(1) => \c_o[4]_INST_0_n_2\,
      CO(0) => \c_o[4]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => \c_o[4]_INST_0_i_1_n_0\,
      DI(2) => \c_o[4]_INST_0_i_2_n_0\,
      DI(1) => \c_o[4]_INST_0_i_3_n_0\,
      DI(0) => \c_o[4]_INST_0_i_4_n_0\,
      O(3 downto 0) => c_o(7 downto 4),
      S(3) => \c_o[4]_INST_0_i_5_n_0\,
      S(2) => \c_o[4]_INST_0_i_6_n_0\,
      S(1) => \c_o[4]_INST_0_i_7_n_0\,
      S(0) => \c_o[4]_INST_0_i_8_n_0\
    );
\c_o[4]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(6),
      I1 => t2_reg_111(6),
      I2 => t1_reg_106(6),
      O => \c_o[4]_INST_0_i_1_n_0\
    );
\c_o[4]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(5),
      I1 => t2_reg_111(5),
      I2 => t1_reg_106(5),
      O => \c_o[4]_INST_0_i_2_n_0\
    );
\c_o[4]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(4),
      I1 => t2_reg_111(4),
      I2 => t1_reg_106(4),
      O => \c_o[4]_INST_0_i_3_n_0\
    );
\c_o[4]_INST_0_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(3),
      I1 => t2_reg_111(3),
      I2 => t1_reg_106(3),
      O => \c_o[4]_INST_0_i_4_n_0\
    );
\c_o[4]_INST_0_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(7),
      I1 => t2_reg_111(7),
      I2 => t1_reg_106(7),
      I3 => \c_o[4]_INST_0_i_1_n_0\,
      O => \c_o[4]_INST_0_i_5_n_0\
    );
\c_o[4]_INST_0_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(6),
      I1 => t2_reg_111(6),
      I2 => t1_reg_106(6),
      I3 => \c_o[4]_INST_0_i_2_n_0\,
      O => \c_o[4]_INST_0_i_6_n_0\
    );
\c_o[4]_INST_0_i_7\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(5),
      I1 => t2_reg_111(5),
      I2 => t1_reg_106(5),
      I3 => \c_o[4]_INST_0_i_3_n_0\,
      O => \c_o[4]_INST_0_i_7_n_0\
    );
\c_o[4]_INST_0_i_8\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(4),
      I1 => t2_reg_111(4),
      I2 => t1_reg_106(4),
      I3 => \c_o[4]_INST_0_i_4_n_0\,
      O => \c_o[4]_INST_0_i_8_n_0\
    );
\c_o[8]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \c_o[4]_INST_0_n_0\,
      CO(3) => \c_o[8]_INST_0_n_0\,
      CO(2) => \c_o[8]_INST_0_n_1\,
      CO(1) => \c_o[8]_INST_0_n_2\,
      CO(0) => \c_o[8]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => \c_o[8]_INST_0_i_1_n_0\,
      DI(2) => \c_o[8]_INST_0_i_2_n_0\,
      DI(1) => \c_o[8]_INST_0_i_3_n_0\,
      DI(0) => \c_o[8]_INST_0_i_4_n_0\,
      O(3 downto 0) => c_o(11 downto 8),
      S(3) => \c_o[8]_INST_0_i_5_n_0\,
      S(2) => \c_o[8]_INST_0_i_6_n_0\,
      S(1) => \c_o[8]_INST_0_i_7_n_0\,
      S(0) => \c_o[8]_INST_0_i_8_n_0\
    );
\c_o[8]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(10),
      I1 => t2_reg_111(10),
      I2 => t1_reg_106(10),
      O => \c_o[8]_INST_0_i_1_n_0\
    );
\c_o[8]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(9),
      I1 => t2_reg_111(9),
      I2 => t1_reg_106(9),
      O => \c_o[8]_INST_0_i_2_n_0\
    );
\c_o[8]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(8),
      I1 => t2_reg_111(8),
      I2 => t1_reg_106(8),
      O => \c_o[8]_INST_0_i_3_n_0\
    );
\c_o[8]_INST_0_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => t3_reg_117(7),
      I1 => t2_reg_111(7),
      I2 => t1_reg_106(7),
      O => \c_o[8]_INST_0_i_4_n_0\
    );
\c_o[8]_INST_0_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(11),
      I1 => t2_reg_111(11),
      I2 => t1_reg_106(11),
      I3 => \c_o[8]_INST_0_i_1_n_0\,
      O => \c_o[8]_INST_0_i_5_n_0\
    );
\c_o[8]_INST_0_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(10),
      I1 => t2_reg_111(10),
      I2 => t1_reg_106(10),
      I3 => \c_o[8]_INST_0_i_2_n_0\,
      O => \c_o[8]_INST_0_i_6_n_0\
    );
\c_o[8]_INST_0_i_7\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(9),
      I1 => t2_reg_111(9),
      I2 => t1_reg_106(9),
      I3 => \c_o[8]_INST_0_i_3_n_0\,
      O => \c_o[8]_INST_0_i_7_n_0\
    );
\c_o[8]_INST_0_i_8\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => t3_reg_117(8),
      I1 => t2_reg_111(8),
      I2 => t1_reg_106(8),
      I3 => \c_o[8]_INST_0_i_4_n_0\,
      O => \c_o[8]_INST_0_i_8_n_0\
    );
mul_32s_32s_32_2_1_U1: entity work.bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1
     port map (
      D(31 downto 16) => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(31 downto 16),
      D(15) => mul_32s_32s_32_2_1_U1_n_48,
      D(14) => mul_32s_32s_32_2_1_U1_n_49,
      D(13) => mul_32s_32s_32_2_1_U1_n_50,
      D(12) => mul_32s_32s_32_2_1_U1_n_51,
      D(11) => mul_32s_32s_32_2_1_U1_n_52,
      D(10) => mul_32s_32s_32_2_1_U1_n_53,
      D(9) => mul_32s_32s_32_2_1_U1_n_54,
      D(8) => mul_32s_32s_32_2_1_U1_n_55,
      D(7) => mul_32s_32s_32_2_1_U1_n_56,
      D(6) => mul_32s_32s_32_2_1_U1_n_57,
      D(5) => mul_32s_32s_32_2_1_U1_n_58,
      D(4) => mul_32s_32s_32_2_1_U1_n_59,
      D(3) => mul_32s_32s_32_2_1_U1_n_60,
      D(2) => mul_32s_32s_32_2_1_U1_n_61,
      D(1) => mul_32s_32s_32_2_1_U1_n_62,
      D(0) => mul_32s_32s_32_2_1_U1_n_63,
      Q(0) => ap_CS_fsm_state1,
      a(31 downto 0) => a(31 downto 0),
      ap_clk => ap_clk,
      b(31 downto 0) => b(31 downto 0)
    );
mul_32s_32s_32_2_1_U2: entity work.bd_0_hls_inst_0_top_dfg_mul_32s_32s_32_2_1_0
     port map (
      D(31 downto 0) => t2_fu_70_p2(31 downto 0),
      Q(0) => ap_CS_fsm_state4,
      ap_clk => ap_clk,
      b(31 downto 0) => b(31 downto 0),
      c_i(31 downto 0) => c_i(31 downto 0),
      p_reg(31 downto 16) => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(31 downto 16),
      p_reg(15) => mul_32s_32s_32_2_1_U2_n_48,
      p_reg(14) => mul_32s_32s_32_2_1_U2_n_49,
      p_reg(13) => mul_32s_32s_32_2_1_U2_n_50,
      p_reg(12) => mul_32s_32s_32_2_1_U2_n_51,
      p_reg(11) => mul_32s_32s_32_2_1_U2_n_52,
      p_reg(10) => mul_32s_32s_32_2_1_U2_n_53,
      p_reg(9) => mul_32s_32s_32_2_1_U2_n_54,
      p_reg(8) => mul_32s_32s_32_2_1_U2_n_55,
      p_reg(7) => mul_32s_32s_32_2_1_U2_n_56,
      p_reg(6) => mul_32s_32s_32_2_1_U2_n_57,
      p_reg(5) => mul_32s_32s_32_2_1_U2_n_58,
      p_reg(4) => mul_32s_32s_32_2_1_U2_n_59,
      p_reg(3) => mul_32s_32s_32_2_1_U2_n_60,
      p_reg(2) => mul_32s_32s_32_2_1_U2_n_61,
      p_reg(1) => mul_32s_32s_32_2_1_U2_n_62,
      p_reg(0) => mul_32s_32s_32_2_1_U2_n_63,
      p_reg_0(31 downto 1) => t1_fu_65_p2(31 downto 1),
      p_reg_0(0) => mul_ln7_reg_101(0)
    );
\mul_ln7_reg_101_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_63,
      Q => mul_ln7_reg_101(0),
      R => '0'
    );
\mul_ln7_reg_101_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_53,
      Q => mul_ln7_reg_101(10),
      R => '0'
    );
\mul_ln7_reg_101_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_52,
      Q => mul_ln7_reg_101(11),
      R => '0'
    );
\mul_ln7_reg_101_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_51,
      Q => mul_ln7_reg_101(12),
      R => '0'
    );
\mul_ln7_reg_101_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_50,
      Q => mul_ln7_reg_101(13),
      R => '0'
    );
\mul_ln7_reg_101_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_49,
      Q => mul_ln7_reg_101(14),
      R => '0'
    );
\mul_ln7_reg_101_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_48,
      Q => mul_ln7_reg_101(15),
      R => '0'
    );
\mul_ln7_reg_101_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(16),
      Q => mul_ln7_reg_101(16),
      R => '0'
    );
\mul_ln7_reg_101_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(17),
      Q => mul_ln7_reg_101(17),
      R => '0'
    );
\mul_ln7_reg_101_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(18),
      Q => mul_ln7_reg_101(18),
      R => '0'
    );
\mul_ln7_reg_101_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(19),
      Q => mul_ln7_reg_101(19),
      R => '0'
    );
\mul_ln7_reg_101_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_62,
      Q => mul_ln7_reg_101(1),
      R => '0'
    );
\mul_ln7_reg_101_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(20),
      Q => mul_ln7_reg_101(20),
      R => '0'
    );
\mul_ln7_reg_101_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(21),
      Q => mul_ln7_reg_101(21),
      R => '0'
    );
\mul_ln7_reg_101_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(22),
      Q => mul_ln7_reg_101(22),
      R => '0'
    );
\mul_ln7_reg_101_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(23),
      Q => mul_ln7_reg_101(23),
      R => '0'
    );
\mul_ln7_reg_101_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(24),
      Q => mul_ln7_reg_101(24),
      R => '0'
    );
\mul_ln7_reg_101_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(25),
      Q => mul_ln7_reg_101(25),
      R => '0'
    );
\mul_ln7_reg_101_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(26),
      Q => mul_ln7_reg_101(26),
      R => '0'
    );
\mul_ln7_reg_101_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(27),
      Q => mul_ln7_reg_101(27),
      R => '0'
    );
\mul_ln7_reg_101_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(28),
      Q => mul_ln7_reg_101(28),
      R => '0'
    );
\mul_ln7_reg_101_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(29),
      Q => mul_ln7_reg_101(29),
      R => '0'
    );
\mul_ln7_reg_101_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_61,
      Q => mul_ln7_reg_101(2),
      R => '0'
    );
\mul_ln7_reg_101_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(30),
      Q => mul_ln7_reg_101(30),
      R => '0'
    );
\mul_ln7_reg_101_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1\(31),
      Q => mul_ln7_reg_101(31),
      R => '0'
    );
\mul_ln7_reg_101_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_60,
      Q => mul_ln7_reg_101(3),
      R => '0'
    );
\mul_ln7_reg_101_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_59,
      Q => mul_ln7_reg_101(4),
      R => '0'
    );
\mul_ln7_reg_101_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_58,
      Q => mul_ln7_reg_101(5),
      R => '0'
    );
\mul_ln7_reg_101_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_57,
      Q => mul_ln7_reg_101(6),
      R => '0'
    );
\mul_ln7_reg_101_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_56,
      Q => mul_ln7_reg_101(7),
      R => '0'
    );
\mul_ln7_reg_101_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_55,
      Q => mul_ln7_reg_101(8),
      R => '0'
    );
\mul_ln7_reg_101_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => mul_32s_32s_32_2_1_U1_n_54,
      Q => mul_ln7_reg_101(9),
      R => '0'
    );
\t1_reg_106[4]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => mul_ln7_reg_101(2),
      O => \t1_reg_106[4]_i_2_n_0\
    );
\t1_reg_106_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => mul_ln7_reg_101(0),
      Q => t1_reg_106(0),
      R => '0'
    );
\t1_reg_106_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(10),
      Q => t1_reg_106(10),
      R => '0'
    );
\t1_reg_106_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(11),
      Q => t1_reg_106(11),
      R => '0'
    );
\t1_reg_106_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(12),
      Q => t1_reg_106(12),
      R => '0'
    );
\t1_reg_106_reg[12]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t1_reg_106_reg[8]_i_1_n_0\,
      CO(3) => \t1_reg_106_reg[12]_i_1_n_0\,
      CO(2) => \t1_reg_106_reg[12]_i_1_n_1\,
      CO(1) => \t1_reg_106_reg[12]_i_1_n_2\,
      CO(0) => \t1_reg_106_reg[12]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => t1_fu_65_p2(12 downto 9),
      S(3 downto 0) => mul_ln7_reg_101(12 downto 9)
    );
\t1_reg_106_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(13),
      Q => t1_reg_106(13),
      R => '0'
    );
\t1_reg_106_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(14),
      Q => t1_reg_106(14),
      R => '0'
    );
\t1_reg_106_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(15),
      Q => t1_reg_106(15),
      R => '0'
    );
\t1_reg_106_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(16),
      Q => t1_reg_106(16),
      R => '0'
    );
\t1_reg_106_reg[16]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t1_reg_106_reg[12]_i_1_n_0\,
      CO(3) => \t1_reg_106_reg[16]_i_1_n_0\,
      CO(2) => \t1_reg_106_reg[16]_i_1_n_1\,
      CO(1) => \t1_reg_106_reg[16]_i_1_n_2\,
      CO(0) => \t1_reg_106_reg[16]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => t1_fu_65_p2(16 downto 13),
      S(3 downto 0) => mul_ln7_reg_101(16 downto 13)
    );
\t1_reg_106_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(17),
      Q => t1_reg_106(17),
      R => '0'
    );
\t1_reg_106_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(18),
      Q => t1_reg_106(18),
      R => '0'
    );
\t1_reg_106_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(19),
      Q => t1_reg_106(19),
      R => '0'
    );
\t1_reg_106_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(1),
      Q => t1_reg_106(1),
      R => '0'
    );
\t1_reg_106_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(20),
      Q => t1_reg_106(20),
      R => '0'
    );
\t1_reg_106_reg[20]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t1_reg_106_reg[16]_i_1_n_0\,
      CO(3) => \t1_reg_106_reg[20]_i_1_n_0\,
      CO(2) => \t1_reg_106_reg[20]_i_1_n_1\,
      CO(1) => \t1_reg_106_reg[20]_i_1_n_2\,
      CO(0) => \t1_reg_106_reg[20]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => t1_fu_65_p2(20 downto 17),
      S(3 downto 0) => mul_ln7_reg_101(20 downto 17)
    );
\t1_reg_106_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(21),
      Q => t1_reg_106(21),
      R => '0'
    );
\t1_reg_106_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(22),
      Q => t1_reg_106(22),
      R => '0'
    );
\t1_reg_106_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(23),
      Q => t1_reg_106(23),
      R => '0'
    );
\t1_reg_106_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(24),
      Q => t1_reg_106(24),
      R => '0'
    );
\t1_reg_106_reg[24]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t1_reg_106_reg[20]_i_1_n_0\,
      CO(3) => \t1_reg_106_reg[24]_i_1_n_0\,
      CO(2) => \t1_reg_106_reg[24]_i_1_n_1\,
      CO(1) => \t1_reg_106_reg[24]_i_1_n_2\,
      CO(0) => \t1_reg_106_reg[24]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => t1_fu_65_p2(24 downto 21),
      S(3 downto 0) => mul_ln7_reg_101(24 downto 21)
    );
\t1_reg_106_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(25),
      Q => t1_reg_106(25),
      R => '0'
    );
\t1_reg_106_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(26),
      Q => t1_reg_106(26),
      R => '0'
    );
\t1_reg_106_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(27),
      Q => t1_reg_106(27),
      R => '0'
    );
\t1_reg_106_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(28),
      Q => t1_reg_106(28),
      R => '0'
    );
\t1_reg_106_reg[28]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t1_reg_106_reg[24]_i_1_n_0\,
      CO(3) => \t1_reg_106_reg[28]_i_1_n_0\,
      CO(2) => \t1_reg_106_reg[28]_i_1_n_1\,
      CO(1) => \t1_reg_106_reg[28]_i_1_n_2\,
      CO(0) => \t1_reg_106_reg[28]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => t1_fu_65_p2(28 downto 25),
      S(3 downto 0) => mul_ln7_reg_101(28 downto 25)
    );
\t1_reg_106_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(29),
      Q => t1_reg_106(29),
      R => '0'
    );
\t1_reg_106_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(2),
      Q => t1_reg_106(2),
      R => '0'
    );
\t1_reg_106_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(30),
      Q => t1_reg_106(30),
      R => '0'
    );
\t1_reg_106_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(31),
      Q => t1_reg_106(31),
      R => '0'
    );
\t1_reg_106_reg[31]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t1_reg_106_reg[28]_i_1_n_0\,
      CO(3 downto 2) => \NLW_t1_reg_106_reg[31]_i_1_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \t1_reg_106_reg[31]_i_1_n_2\,
      CO(0) => \t1_reg_106_reg[31]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \NLW_t1_reg_106_reg[31]_i_1_O_UNCONNECTED\(3),
      O(2 downto 0) => t1_fu_65_p2(31 downto 29),
      S(3) => '0',
      S(2 downto 0) => mul_ln7_reg_101(31 downto 29)
    );
\t1_reg_106_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(3),
      Q => t1_reg_106(3),
      R => '0'
    );
\t1_reg_106_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(4),
      Q => t1_reg_106(4),
      R => '0'
    );
\t1_reg_106_reg[4]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \t1_reg_106_reg[4]_i_1_n_0\,
      CO(2) => \t1_reg_106_reg[4]_i_1_n_1\,
      CO(1) => \t1_reg_106_reg[4]_i_1_n_2\,
      CO(0) => \t1_reg_106_reg[4]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 2) => B"00",
      DI(1) => mul_ln7_reg_101(2),
      DI(0) => '0',
      O(3 downto 0) => t1_fu_65_p2(4 downto 1),
      S(3 downto 2) => mul_ln7_reg_101(4 downto 3),
      S(1) => \t1_reg_106[4]_i_2_n_0\,
      S(0) => mul_ln7_reg_101(1)
    );
\t1_reg_106_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(5),
      Q => t1_reg_106(5),
      R => '0'
    );
\t1_reg_106_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(6),
      Q => t1_reg_106(6),
      R => '0'
    );
\t1_reg_106_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(7),
      Q => t1_reg_106(7),
      R => '0'
    );
\t1_reg_106_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(8),
      Q => t1_reg_106(8),
      R => '0'
    );
\t1_reg_106_reg[8]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \t1_reg_106_reg[4]_i_1_n_0\,
      CO(3) => \t1_reg_106_reg[8]_i_1_n_0\,
      CO(2) => \t1_reg_106_reg[8]_i_1_n_1\,
      CO(1) => \t1_reg_106_reg[8]_i_1_n_2\,
      CO(0) => \t1_reg_106_reg[8]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => t1_fu_65_p2(8 downto 5),
      S(3 downto 0) => mul_ln7_reg_101(8 downto 5)
    );
\t1_reg_106_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t1_fu_65_p2(9),
      Q => t1_reg_106(9),
      R => '0'
    );
\t2_reg_111_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(0),
      Q => t2_reg_111(0),
      R => '0'
    );
\t2_reg_111_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(10),
      Q => t2_reg_111(10),
      R => '0'
    );
\t2_reg_111_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(11),
      Q => t2_reg_111(11),
      R => '0'
    );
\t2_reg_111_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(12),
      Q => t2_reg_111(12),
      R => '0'
    );
\t2_reg_111_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(13),
      Q => t2_reg_111(13),
      R => '0'
    );
\t2_reg_111_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(14),
      Q => t2_reg_111(14),
      R => '0'
    );
\t2_reg_111_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(15),
      Q => t2_reg_111(15),
      R => '0'
    );
\t2_reg_111_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(16),
      Q => t2_reg_111(16),
      R => '0'
    );
\t2_reg_111_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(17),
      Q => t2_reg_111(17),
      R => '0'
    );
\t2_reg_111_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(18),
      Q => t2_reg_111(18),
      R => '0'
    );
\t2_reg_111_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(19),
      Q => t2_reg_111(19),
      R => '0'
    );
\t2_reg_111_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(1),
      Q => t2_reg_111(1),
      R => '0'
    );
\t2_reg_111_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(20),
      Q => t2_reg_111(20),
      R => '0'
    );
\t2_reg_111_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(21),
      Q => t2_reg_111(21),
      R => '0'
    );
\t2_reg_111_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(22),
      Q => t2_reg_111(22),
      R => '0'
    );
\t2_reg_111_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(23),
      Q => t2_reg_111(23),
      R => '0'
    );
\t2_reg_111_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(24),
      Q => t2_reg_111(24),
      R => '0'
    );
\t2_reg_111_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(25),
      Q => t2_reg_111(25),
      R => '0'
    );
\t2_reg_111_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(26),
      Q => t2_reg_111(26),
      R => '0'
    );
\t2_reg_111_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(27),
      Q => t2_reg_111(27),
      R => '0'
    );
\t2_reg_111_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(28),
      Q => t2_reg_111(28),
      R => '0'
    );
\t2_reg_111_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(29),
      Q => t2_reg_111(29),
      R => '0'
    );
\t2_reg_111_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(2),
      Q => t2_reg_111(2),
      R => '0'
    );
\t2_reg_111_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(30),
      Q => t2_reg_111(30),
      R => '0'
    );
\t2_reg_111_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(31),
      Q => t2_reg_111(31),
      R => '0'
    );
\t2_reg_111_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(3),
      Q => t2_reg_111(3),
      R => '0'
    );
\t2_reg_111_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(4),
      Q => t2_reg_111(4),
      R => '0'
    );
\t2_reg_111_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(5),
      Q => t2_reg_111(5),
      R => '0'
    );
\t2_reg_111_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(6),
      Q => t2_reg_111(6),
      R => '0'
    );
\t2_reg_111_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(7),
      Q => t2_reg_111(7),
      R => '0'
    );
\t2_reg_111_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(8),
      Q => t2_reg_111(8),
      R => '0'
    );
\t2_reg_111_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state4,
      D => t2_fu_70_p2(9),
      Q => t2_reg_111(9),
      R => '0'
    );
\t3_reg_117_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_63,
      Q => t3_reg_117(0),
      R => '0'
    );
\t3_reg_117_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_53,
      Q => t3_reg_117(10),
      R => '0'
    );
\t3_reg_117_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_52,
      Q => t3_reg_117(11),
      R => '0'
    );
\t3_reg_117_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_51,
      Q => t3_reg_117(12),
      R => '0'
    );
\t3_reg_117_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_50,
      Q => t3_reg_117(13),
      R => '0'
    );
\t3_reg_117_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_49,
      Q => t3_reg_117(14),
      R => '0'
    );
\t3_reg_117_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_48,
      Q => t3_reg_117(15),
      R => '0'
    );
\t3_reg_117_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(16),
      Q => t3_reg_117(16),
      R => '0'
    );
\t3_reg_117_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(17),
      Q => t3_reg_117(17),
      R => '0'
    );
\t3_reg_117_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(18),
      Q => t3_reg_117(18),
      R => '0'
    );
\t3_reg_117_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(19),
      Q => t3_reg_117(19),
      R => '0'
    );
\t3_reg_117_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_62,
      Q => t3_reg_117(1),
      R => '0'
    );
\t3_reg_117_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(20),
      Q => t3_reg_117(20),
      R => '0'
    );
\t3_reg_117_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(21),
      Q => t3_reg_117(21),
      R => '0'
    );
\t3_reg_117_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(22),
      Q => t3_reg_117(22),
      R => '0'
    );
\t3_reg_117_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(23),
      Q => t3_reg_117(23),
      R => '0'
    );
\t3_reg_117_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(24),
      Q => t3_reg_117(24),
      R => '0'
    );
\t3_reg_117_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(25),
      Q => t3_reg_117(25),
      R => '0'
    );
\t3_reg_117_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(26),
      Q => t3_reg_117(26),
      R => '0'
    );
\t3_reg_117_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(27),
      Q => t3_reg_117(27),
      R => '0'
    );
\t3_reg_117_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(28),
      Q => t3_reg_117(28),
      R => '0'
    );
\t3_reg_117_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(29),
      Q => t3_reg_117(29),
      R => '0'
    );
\t3_reg_117_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_61,
      Q => t3_reg_117(2),
      R => '0'
    );
\t3_reg_117_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(30),
      Q => t3_reg_117(30),
      R => '0'
    );
\t3_reg_117_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \top_dfg_mul_32s_32s_32_2_1_Multiplier_0_U/p_reg__1_0\(31),
      Q => t3_reg_117(31),
      R => '0'
    );
\t3_reg_117_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_60,
      Q => t3_reg_117(3),
      R => '0'
    );
\t3_reg_117_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_59,
      Q => t3_reg_117(4),
      R => '0'
    );
\t3_reg_117_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_58,
      Q => t3_reg_117(5),
      R => '0'
    );
\t3_reg_117_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_57,
      Q => t3_reg_117(6),
      R => '0'
    );
\t3_reg_117_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_56,
      Q => t3_reg_117(7),
      R => '0'
    );
\t3_reg_117_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_55,
      Q => t3_reg_117(8),
      R => '0'
    );
\t3_reg_117_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => mul_32s_32s_32_2_1_U2_n_54,
      Q => t3_reg_117(9),
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0 is
  port (
    a_ap_vld : out STD_LOGIC;
    c_o_ap_vld : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    a : out STD_LOGIC_VECTOR ( 31 downto 0 );
    b : in STD_LOGIC_VECTOR ( 31 downto 0 );
    c_i : in STD_LOGIC_VECTOR ( 31 downto 0 );
    c_o : out STD_LOGIC_VECTOR ( 31 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of bd_0_hls_inst_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of bd_0_hls_inst_0 : entity is "bd_0_hls_inst_0,top_dfg,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of bd_0_hls_inst_0 : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of bd_0_hls_inst_0 : entity is "HLS";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of bd_0_hls_inst_0 : entity is "top_dfg,Vivado 2020.2";
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
  attribute ap_ST_fsm_state1 of inst : label is "7'b0000001";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of inst : label is "7'b0000010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of inst : label is "7'b0000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of inst : label is "7'b0001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of inst : label is "7'b0010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of inst : label is "7'b0100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of inst : label is "7'b1000000";
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
  attribute X_INTERFACE_INFO of a : signal is "xilinx.com:signal:data:1.0 a DATA";
  attribute X_INTERFACE_PARAMETER of a : signal is "XIL_INTERFACENAME a, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of b : signal is "xilinx.com:signal:data:1.0 b DATA";
  attribute X_INTERFACE_PARAMETER of b : signal is "XIL_INTERFACENAME b, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of c_i : signal is "xilinx.com:signal:data:1.0 c_i DATA";
  attribute X_INTERFACE_PARAMETER of c_i : signal is "XIL_INTERFACENAME c_i, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of c_o : signal is "xilinx.com:signal:data:1.0 c_o DATA";
  attribute X_INTERFACE_PARAMETER of c_o : signal is "XIL_INTERFACENAME c_o, LAYERED_METADATA undef";
begin
inst: entity work.bd_0_hls_inst_0_top_dfg
     port map (
      a(31 downto 0) => a(31 downto 0),
      a_ap_vld => a_ap_vld,
      ap_clk => ap_clk,
      ap_done => ap_done,
      ap_idle => ap_idle,
      ap_ready => ap_ready,
      ap_rst => ap_rst,
      ap_start => ap_start,
      b(31 downto 0) => b(31 downto 0),
      c_i(31 downto 0) => c_i(31 downto 0),
      c_o(31 downto 0) => c_o(31 downto 0),
      c_o_ap_vld => c_o_ap_vld
    );
end STRUCTURE;
