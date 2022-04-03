-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Mon Apr 12 10:36:49 2021
-- Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
-- Command     : write_vhdl -force -mode funcsim
--               /home/nanwu/GNN_DFG/bb/dfg_28/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div_u is
  port (
    \r_stage_reg[0]_0\ : out STD_LOGIC;
    D : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_tmp_reg[0]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_tmp_reg[5]_0\ : out STD_LOGIC_VECTOR ( 6 downto 0 );
    \r_stage_reg[9]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    Q : in STD_LOGIC_VECTOR ( 6 downto 0 );
    ap_clk : in STD_LOGIC;
    \dividend0_reg[0]_0\ : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    \divisor0_reg[16]_0\ : in STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div_u : entity is "fn1_srem_9s_18ns_8_13_seq_1_div_u";
end bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div_u;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div_u is
  signal \^d\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \cal_tmp_carry__0_i_5_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_6_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_7_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_8_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_5_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_3\ : STD_LOGIC;
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
  signal \dividend0[5]_i_2_n_0\ : STD_LOGIC;
  signal \dividend0[7]_i_2_n_0\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[0]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[1]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[2]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[3]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[4]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[5]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[6]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[7]\ : STD_LOGIC;
  signal \dividend_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[7]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[8]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[0]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[1]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[2]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[3]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[4]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[5]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[6]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[7]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[8]\ : STD_LOGIC;
  signal dividend_u : STD_LOGIC_VECTOR ( 7 downto 1 );
  signal \divisor0_reg_n_0_[10]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[11]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[12]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[13]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[14]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[15]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[16]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[1]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[2]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[3]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[4]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[8]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal p_0_in : STD_LOGIC_VECTOR ( 16 downto 9 );
  signal p_0_in_0 : STD_LOGIC;
  signal p_1_in0 : STD_LOGIC;
  signal p_2_out : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \^r_stage_reg[0]_0\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[2]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[3]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[4]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[5]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[6]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[7]\ : STD_LOGIC;
  signal \r_stage_reg_n_0_[8]\ : STD_LOGIC;
  signal \remd[7]_i_2_n_0\ : STD_LOGIC;
  signal \remd_tmp[0]_i_1__0_n_0\ : STD_LOGIC;
  signal \remd_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[7]_i_1_n_0\ : STD_LOGIC;
  signal remd_tmp_mux : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal \^remd_tmp_reg[0]_0\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \remd_tmp_reg_n_0_[1]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[2]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[3]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[4]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[5]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[6]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[7]\ : STD_LOGIC;
  signal sign0 : STD_LOGIC;
  signal \NLW_cal_tmp_carry__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__3_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_cal_tmp_carry__3_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \dividend0[1]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \dividend0[2]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \dividend0[3]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \dividend0[5]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \dividend0[6]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \dividend0[7]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \dividend_tmp[1]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \dividend_tmp[2]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \dividend_tmp[3]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \dividend_tmp[4]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \dividend_tmp[5]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \dividend_tmp[6]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \dividend_tmp[7]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \dividend_tmp[8]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \remd[1]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \remd[2]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \remd[3]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \remd[5]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \remd[6]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \remd[7]_i_1\ : label is "soft_lutpair0";
begin
  D(0) <= \^d\(0);
  \r_stage_reg[0]_0\ <= \^r_stage_reg[0]_0\;
  \remd_tmp_reg[0]_0\(0) <= \^remd_tmp_reg[0]_0\(0);
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
      O(3) => \cal_tmp_carry__0_n_4\,
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
      I0 => \remd_tmp_reg_n_0_[6]\,
      I1 => \^r_stage_reg[0]_0\,
      O => remd_tmp_mux(6)
    );
\cal_tmp_carry__0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[5]\,
      I1 => \^r_stage_reg[0]_0\,
      O => remd_tmp_mux(5)
    );
\cal_tmp_carry__0_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[4]\,
      I1 => \^r_stage_reg[0]_0\,
      O => remd_tmp_mux(4)
    );
\cal_tmp_carry__0_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[3]\,
      I1 => \^r_stage_reg[0]_0\,
      O => remd_tmp_mux(3)
    );
\cal_tmp_carry__0_i_5\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[6]\,
      I2 => \divisor0_reg_n_0_[7]\,
      O => \cal_tmp_carry__0_i_5_n_0\
    );
\cal_tmp_carry__0_i_6\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[5]\,
      I2 => \divisor0_reg_n_0_[6]\,
      O => \cal_tmp_carry__0_i_6_n_0\
    );
\cal_tmp_carry__0_i_7\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[4]\,
      I2 => \divisor0_reg_n_0_[5]\,
      O => \cal_tmp_carry__0_i_7_n_0\
    );
\cal_tmp_carry__0_i_8\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[3]\,
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
      DI(3 downto 1) => B"000",
      DI(0) => remd_tmp_mux(7),
      O(3 downto 0) => \NLW_cal_tmp_carry__1_O_UNCONNECTED\(3 downto 0),
      S(3 downto 1) => p_0_in(11 downto 9),
      S(0) => \cal_tmp_carry__1_i_5_n_0\
    );
\cal_tmp_carry__1_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[7]\,
      I1 => \^r_stage_reg[0]_0\,
      O => remd_tmp_mux(7)
    );
\cal_tmp_carry__1_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[11]\,
      O => p_0_in(11)
    );
\cal_tmp_carry__1_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[10]\,
      O => p_0_in(10)
    );
\cal_tmp_carry__1_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[9]\,
      O => p_0_in(9)
    );
\cal_tmp_carry__1_i_5\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[7]\,
      I2 => \divisor0_reg_n_0_[8]\,
      O => \cal_tmp_carry__1_i_5_n_0\
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
\cal_tmp_carry__2_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[15]\,
      O => p_0_in(15)
    );
\cal_tmp_carry__2_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[14]\,
      O => p_0_in(14)
    );
\cal_tmp_carry__2_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[13]\,
      O => p_0_in(13)
    );
\cal_tmp_carry__2_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[12]\,
      O => p_0_in(12)
    );
\cal_tmp_carry__3\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__2_n_0\,
      CO(3 downto 1) => \NLW_cal_tmp_carry__3_CO_UNCONNECTED\(3 downto 1),
      CO(0) => p_2_out(0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 2) => \NLW_cal_tmp_carry__3_O_UNCONNECTED\(3 downto 2),
      O(1) => p_0_in_0,
      O(0) => \NLW_cal_tmp_carry__3_O_UNCONNECTED\(0),
      S(3 downto 1) => B"001",
      S(0) => p_0_in(16)
    );
\cal_tmp_carry__3_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[16]\,
      O => p_0_in(16)
    );
cal_tmp_carry_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[2]\,
      I1 => \^r_stage_reg[0]_0\,
      O => remd_tmp_mux(2)
    );
cal_tmp_carry_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[1]\,
      I1 => \^r_stage_reg[0]_0\,
      O => remd_tmp_mux(1)
    );
cal_tmp_carry_i_3: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \^remd_tmp_reg[0]_0\(0),
      I1 => \^r_stage_reg[0]_0\,
      O => remd_tmp_mux(0)
    );
cal_tmp_carry_i_4: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[8]\,
      I1 => \^r_stage_reg[0]_0\,
      O => p_1_in0
    );
cal_tmp_carry_i_5: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[2]\,
      I2 => \divisor0_reg_n_0_[3]\,
      O => cal_tmp_carry_i_5_n_0
    );
cal_tmp_carry_i_6: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[1]\,
      I2 => \divisor0_reg_n_0_[2]\,
      O => cal_tmp_carry_i_6_n_0
    );
cal_tmp_carry_i_7: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \^remd_tmp_reg[0]_0\(0),
      I2 => \divisor0_reg_n_0_[1]\,
      O => cal_tmp_carry_i_7_n_0
    );
cal_tmp_carry_i_8: unisim.vcomponents.LUT3
    generic map(
      INIT => X"2D"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[8]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => \dividend0_reg_n_0_[0]\,
      O => cal_tmp_carry_i_8_n_0
    );
\dividend0[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => Q(6),
      I1 => \dividend0_reg[0]_0\,
      I2 => Q(0),
      O => dividend_u(1)
    );
\dividend0[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"57A8"
    )
        port map (
      I0 => Q(6),
      I1 => \dividend0_reg[0]_0\,
      I2 => Q(0),
      I3 => Q(1),
      O => dividend_u(2)
    );
\dividend0[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"5557AAA8"
    )
        port map (
      I0 => Q(6),
      I1 => Q(0),
      I2 => \dividend0_reg[0]_0\,
      I3 => Q(1),
      I4 => Q(2),
      O => dividend_u(3)
    );
\dividend0[4]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"55555557AAAAAAA8"
    )
        port map (
      I0 => Q(6),
      I1 => Q(1),
      I2 => \dividend0_reg[0]_0\,
      I3 => Q(0),
      I4 => Q(2),
      I5 => Q(3),
      O => dividend_u(4)
    );
\dividend0[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => Q(6),
      I1 => \dividend0[5]_i_2_n_0\,
      I2 => Q(4),
      O => dividend_u(5)
    );
\dividend0[5]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFFFFE"
    )
        port map (
      I0 => Q(2),
      I1 => Q(0),
      I2 => \dividend0_reg[0]_0\,
      I3 => Q(1),
      I4 => Q(3),
      O => \dividend0[5]_i_2_n_0\
    );
\dividend0[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => Q(6),
      I1 => \dividend0[7]_i_2_n_0\,
      I2 => Q(5),
      O => dividend_u(6)
    );
\dividend0[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"04"
    )
        port map (
      I0 => Q(5),
      I1 => Q(6),
      I2 => \dividend0[7]_i_2_n_0\,
      O => dividend_u(7)
    );
\dividend0[7]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => Q(3),
      I1 => Q(1),
      I2 => \dividend0_reg[0]_0\,
      I3 => Q(0),
      I4 => Q(2),
      I5 => Q(4),
      O => \dividend0[7]_i_2_n_0\
    );
\dividend0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[0]_0\,
      Q => \dividend0_reg_n_0_[0]\,
      R => '0'
    );
\dividend0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => dividend_u(1),
      Q => \dividend0_reg_n_0_[1]\,
      R => '0'
    );
\dividend0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => dividend_u(2),
      Q => \dividend0_reg_n_0_[2]\,
      R => '0'
    );
\dividend0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => dividend_u(3),
      Q => \dividend0_reg_n_0_[3]\,
      R => '0'
    );
\dividend0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => dividend_u(4),
      Q => \dividend0_reg_n_0_[4]\,
      R => '0'
    );
\dividend0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => dividend_u(5),
      Q => \dividend0_reg_n_0_[5]\,
      R => '0'
    );
\dividend0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => dividend_u(6),
      Q => \dividend0_reg_n_0_[6]\,
      R => '0'
    );
\dividend0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => dividend_u(7),
      Q => \dividend0_reg_n_0_[7]\,
      R => '0'
    );
\dividend_tmp[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[0]\,
      I1 => \dividend_tmp_reg_n_0_[0]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[1]_i_1_n_0\
    );
\dividend_tmp[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[1]\,
      I1 => \dividend_tmp_reg_n_0_[1]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[2]_i_1_n_0\
    );
\dividend_tmp[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[2]\,
      I1 => \dividend_tmp_reg_n_0_[2]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[3]_i_1_n_0\
    );
\dividend_tmp[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[3]\,
      I1 => \dividend_tmp_reg_n_0_[3]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[4]_i_1_n_0\
    );
\dividend_tmp[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[4]\,
      I1 => \dividend_tmp_reg_n_0_[4]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[5]_i_1_n_0\
    );
\dividend_tmp[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[5]\,
      I1 => \dividend_tmp_reg_n_0_[5]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[6]_i_1_n_0\
    );
\dividend_tmp[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[6]\,
      I1 => \dividend_tmp_reg_n_0_[6]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[7]_i_1_n_0\
    );
\dividend_tmp[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[7]\,
      I1 => \dividend_tmp_reg_n_0_[7]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[8]_i_1_n_0\
    );
\dividend_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_2_out(0),
      Q => \dividend_tmp_reg_n_0_[0]\,
      R => '0'
    );
\dividend_tmp_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[1]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[1]\,
      R => '0'
    );
\dividend_tmp_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[2]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[2]\,
      R => '0'
    );
\dividend_tmp_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[3]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[3]\,
      R => '0'
    );
\dividend_tmp_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[4]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[4]\,
      R => '0'
    );
\dividend_tmp_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[5]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[5]\,
      R => '0'
    );
\dividend_tmp_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[6]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[6]\,
      R => '0'
    );
\dividend_tmp_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[7]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[7]\,
      R => '0'
    );
\dividend_tmp_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[8]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(9),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(10),
      Q => \divisor0_reg_n_0_[11]\,
      R => '0'
    );
\divisor0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(11),
      Q => \divisor0_reg_n_0_[12]\,
      R => '0'
    );
\divisor0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(12),
      Q => \divisor0_reg_n_0_[13]\,
      R => '0'
    );
\divisor0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(13),
      Q => \divisor0_reg_n_0_[14]\,
      R => '0'
    );
\divisor0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(14),
      Q => \divisor0_reg_n_0_[15]\,
      R => '0'
    );
\divisor0_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(15),
      Q => \divisor0_reg_n_0_[16]\,
      R => '0'
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(0),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(1),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(2),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(3),
      Q => \divisor0_reg_n_0_[4]\,
      R => '0'
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(4),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(5),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(6),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(7),
      Q => \divisor0_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[16]_0\(8),
      Q => \divisor0_reg_n_0_[9]\,
      R => '0'
    );
\r_stage_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => E(0),
      Q => \^r_stage_reg[0]_0\,
      R => ap_rst
    );
\r_stage_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \^r_stage_reg[0]_0\,
      Q => \^d\(0),
      R => ap_rst
    );
\r_stage_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \^d\(0),
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
      Q => \r_stage_reg_n_0_[8]\,
      R => ap_rst
    );
\r_stage_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg_n_0_[8]\,
      Q => \r_stage_reg[9]_0\(0),
      R => ap_rst
    );
\remd[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"6C"
    )
        port map (
      I0 => \^remd_tmp_reg[0]_0\(0),
      I1 => \remd_tmp_reg_n_0_[1]\,
      I2 => sign0,
      O => \remd_tmp_reg[5]_0\(0)
    );
\remd[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1EF0"
    )
        port map (
      I0 => \^remd_tmp_reg[0]_0\(0),
      I1 => \remd_tmp_reg_n_0_[1]\,
      I2 => \remd_tmp_reg_n_0_[2]\,
      I3 => sign0,
      O => \remd_tmp_reg[5]_0\(1)
    );
\remd[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"01FEFF00"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[1]\,
      I1 => \^remd_tmp_reg[0]_0\(0),
      I2 => \remd_tmp_reg_n_0_[2]\,
      I3 => \remd_tmp_reg_n_0_[3]\,
      I4 => sign0,
      O => \remd_tmp_reg[5]_0\(2)
    );
\remd[4]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0001FFFEFFFF0000"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[2]\,
      I1 => \^remd_tmp_reg[0]_0\(0),
      I2 => \remd_tmp_reg_n_0_[1]\,
      I3 => \remd_tmp_reg_n_0_[3]\,
      I4 => \remd_tmp_reg_n_0_[4]\,
      I5 => sign0,
      O => \remd_tmp_reg[5]_0\(3)
    );
\remd[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => \remd[7]_i_2_n_0\,
      I1 => \remd_tmp_reg_n_0_[5]\,
      I2 => sign0,
      O => \remd_tmp_reg[5]_0\(4)
    );
\remd[6]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2D78"
    )
        port map (
      I0 => \remd[7]_i_2_n_0\,
      I1 => \remd_tmp_reg_n_0_[5]\,
      I2 => \remd_tmp_reg_n_0_[6]\,
      I3 => sign0,
      O => \remd_tmp_reg[5]_0\(5)
    );
\remd[7]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"04FB7F80"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[5]\,
      I1 => \remd[7]_i_2_n_0\,
      I2 => \remd_tmp_reg_n_0_[6]\,
      I3 => \remd_tmp_reg_n_0_[7]\,
      I4 => sign0,
      O => \remd_tmp_reg[5]_0\(6)
    );
\remd[7]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000100"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[4]\,
      I1 => \remd_tmp_reg_n_0_[2]\,
      I2 => \^remd_tmp_reg[0]_0\(0),
      I3 => sign0,
      I4 => \remd_tmp_reg_n_0_[1]\,
      I5 => \remd_tmp_reg_n_0_[3]\,
      O => \remd[7]_i_2_n_0\
    );
\remd_tmp[0]_i_1__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[8]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in_0,
      I3 => cal_tmp_carry_n_7,
      O => \remd_tmp[0]_i_1__0_n_0\
    );
\remd_tmp[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \^remd_tmp_reg[0]_0\(0),
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in_0,
      I3 => cal_tmp_carry_n_6,
      O => \remd_tmp[1]_i_1_n_0\
    );
\remd_tmp[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[1]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in_0,
      I3 => cal_tmp_carry_n_5,
      O => \remd_tmp[2]_i_1_n_0\
    );
\remd_tmp[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[2]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in_0,
      I3 => cal_tmp_carry_n_4,
      O => \remd_tmp[3]_i_1_n_0\
    );
\remd_tmp[4]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[3]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in_0,
      I3 => \cal_tmp_carry__0_n_7\,
      O => \remd_tmp[4]_i_1_n_0\
    );
\remd_tmp[5]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[4]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in_0,
      I3 => \cal_tmp_carry__0_n_6\,
      O => \remd_tmp[5]_i_1_n_0\
    );
\remd_tmp[6]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[5]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in_0,
      I3 => \cal_tmp_carry__0_n_5\,
      O => \remd_tmp[6]_i_1_n_0\
    );
\remd_tmp[7]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[6]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in_0,
      I3 => \cal_tmp_carry__0_n_4\,
      O => \remd_tmp[7]_i_1_n_0\
    );
\remd_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[0]_i_1__0_n_0\,
      Q => \^remd_tmp_reg[0]_0\(0),
      R => '0'
    );
\remd_tmp_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[1]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[1]\,
      R => '0'
    );
\remd_tmp_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[2]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[2]\,
      R => '0'
    );
\remd_tmp_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[3]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[3]\,
      R => '0'
    );
\remd_tmp_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[4]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[4]\,
      R => '0'
    );
\remd_tmp_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[5]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[5]\,
      R => '0'
    );
\remd_tmp_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[6]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[6]\,
      R => '0'
    );
\remd_tmp_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[7]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[7]\,
      R => '0'
    );
\sign0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(6),
      Q => sign0,
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div_u is
  port (
    \remd_tmp_reg[0]_0\ : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    \dividend0_reg[0]_0\ : in STD_LOGIC;
    \remd_tmp_reg[0]_1\ : in STD_LOGIC;
    D : in STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[0]\ : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 17 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div_u : entity is "fn1_urem_1ns_33ns_1_5_seq_1_div_u";
end bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div_u;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div_u is
  signal \cal_tmp_carry__0_i_1__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_2__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_3__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_4__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_1__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_2__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_3__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_4__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_1__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_2__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_3__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_4__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_1__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__3_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__3_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__4_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__4_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__4_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__4_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__4_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__4_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__4_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__5_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__5_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__5_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__5_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__5_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__5_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__5_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__5_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__6_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__6_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__6_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__6_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__6_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__6_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__6_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__6_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__7_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__7_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__7_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry_i_1__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry_i_2__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry_i_3__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry_i_4__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry_i_5__0_n_0\ : STD_LOGIC;
  signal cal_tmp_carry_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_1 : STD_LOGIC;
  signal cal_tmp_carry_n_2 : STD_LOGIC;
  signal cal_tmp_carry_n_3 : STD_LOGIC;
  signal cal_tmp_carry_n_7 : STD_LOGIC;
  signal \dividend0_reg_n_0_[0]\ : STD_LOGIC;
  signal dividend_tmp : STD_LOGIC;
  signal \divisor0_reg_n_0_[0]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[10]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[11]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[12]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[13]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[14]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[15]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[1]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[2]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[31]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[32]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[3]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[4]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[8]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal remd_tmp : STD_LOGIC;
  signal \remd_tmp[0]_i_1_n_0\ : STD_LOGIC;
  signal NLW_cal_tmp_carry_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_cal_tmp_carry__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__3_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__4_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__5_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__6_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__7_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_cal_tmp_carry__7_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
begin
cal_tmp_carry: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => cal_tmp_carry_n_0,
      CO(2) => cal_tmp_carry_n_1,
      CO(1) => cal_tmp_carry_n_2,
      CO(0) => cal_tmp_carry_n_3,
      CYINIT => '0',
      DI(3 downto 2) => B"00",
      DI(1) => \cal_tmp_carry_i_1__0_n_0\,
      DI(0) => '0',
      O(3 downto 1) => NLW_cal_tmp_carry_O_UNCONNECTED(3 downto 1),
      O(0) => cal_tmp_carry_n_7,
      S(3) => \cal_tmp_carry_i_2__0_n_0\,
      S(2) => \cal_tmp_carry_i_3__0_n_0\,
      S(1) => \cal_tmp_carry_i_4__0_n_0\,
      S(0) => \cal_tmp_carry_i_5__0_n_0\
    );
\cal_tmp_carry__0\: unisim.vcomponents.CARRY4
     port map (
      CI => cal_tmp_carry_n_0,
      CO(3) => \cal_tmp_carry__0_n_0\,
      CO(2) => \cal_tmp_carry__0_n_1\,
      CO(1) => \cal_tmp_carry__0_n_2\,
      CO(0) => \cal_tmp_carry__0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => \NLW_cal_tmp_carry__0_O_UNCONNECTED\(3 downto 0),
      S(3) => \cal_tmp_carry__0_i_1__0_n_0\,
      S(2) => \cal_tmp_carry__0_i_2__0_n_0\,
      S(1) => \cal_tmp_carry__0_i_3__0_n_0\,
      S(0) => \cal_tmp_carry__0_i_4__0_n_0\
    );
\cal_tmp_carry__0_i_1__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[7]\,
      O => \cal_tmp_carry__0_i_1__0_n_0\
    );
\cal_tmp_carry__0_i_2__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[6]\,
      O => \cal_tmp_carry__0_i_2__0_n_0\
    );
\cal_tmp_carry__0_i_3__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[5]\,
      O => \cal_tmp_carry__0_i_3__0_n_0\
    );
\cal_tmp_carry__0_i_4__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[4]\,
      O => \cal_tmp_carry__0_i_4__0_n_0\
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
      S(3) => \cal_tmp_carry__1_i_1__0_n_0\,
      S(2) => \cal_tmp_carry__1_i_2__0_n_0\,
      S(1) => \cal_tmp_carry__1_i_3__0_n_0\,
      S(0) => \cal_tmp_carry__1_i_4__0_n_0\
    );
\cal_tmp_carry__1_i_1__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[11]\,
      O => \cal_tmp_carry__1_i_1__0_n_0\
    );
\cal_tmp_carry__1_i_2__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[10]\,
      O => \cal_tmp_carry__1_i_2__0_n_0\
    );
\cal_tmp_carry__1_i_3__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[9]\,
      O => \cal_tmp_carry__1_i_3__0_n_0\
    );
\cal_tmp_carry__1_i_4__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[8]\,
      O => \cal_tmp_carry__1_i_4__0_n_0\
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
      S(3) => \cal_tmp_carry__2_i_1__0_n_0\,
      S(2) => \cal_tmp_carry__2_i_2__0_n_0\,
      S(1) => \cal_tmp_carry__2_i_3__0_n_0\,
      S(0) => \cal_tmp_carry__2_i_4__0_n_0\
    );
\cal_tmp_carry__2_i_1__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[15]\,
      O => \cal_tmp_carry__2_i_1__0_n_0\
    );
\cal_tmp_carry__2_i_2__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[14]\,
      O => \cal_tmp_carry__2_i_2__0_n_0\
    );
\cal_tmp_carry__2_i_3__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[13]\,
      O => \cal_tmp_carry__2_i_3__0_n_0\
    );
\cal_tmp_carry__2_i_4__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[12]\,
      O => \cal_tmp_carry__2_i_4__0_n_0\
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
      S(3) => \cal_tmp_carry__3_i_1__0_n_0\,
      S(2) => \cal_tmp_carry__3_i_2_n_0\,
      S(1) => \cal_tmp_carry__3_i_3_n_0\,
      S(0) => \cal_tmp_carry__3_i_4_n_0\
    );
\cal_tmp_carry__3_i_1__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__3_i_1__0_n_0\
    );
\cal_tmp_carry__3_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__3_i_2_n_0\
    );
\cal_tmp_carry__3_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__3_i_3_n_0\
    );
\cal_tmp_carry__3_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__3_i_4_n_0\
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
      S(3) => \cal_tmp_carry__4_i_1_n_0\,
      S(2) => \cal_tmp_carry__4_i_2_n_0\,
      S(1) => \cal_tmp_carry__4_i_3_n_0\,
      S(0) => \cal_tmp_carry__4_i_4_n_0\
    );
\cal_tmp_carry__4_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__4_i_1_n_0\
    );
\cal_tmp_carry__4_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__4_i_2_n_0\
    );
\cal_tmp_carry__4_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__4_i_3_n_0\
    );
\cal_tmp_carry__4_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__4_i_4_n_0\
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
      S(3) => \cal_tmp_carry__5_i_1_n_0\,
      S(2) => \cal_tmp_carry__5_i_2_n_0\,
      S(1) => \cal_tmp_carry__5_i_3_n_0\,
      S(0) => \cal_tmp_carry__5_i_4_n_0\
    );
\cal_tmp_carry__5_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__5_i_1_n_0\
    );
\cal_tmp_carry__5_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__5_i_2_n_0\
    );
\cal_tmp_carry__5_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__5_i_3_n_0\
    );
\cal_tmp_carry__5_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__5_i_4_n_0\
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
      S(3) => \cal_tmp_carry__6_i_1_n_0\,
      S(2) => \cal_tmp_carry__6_i_2_n_0\,
      S(1) => \cal_tmp_carry__6_i_3_n_0\,
      S(0) => \cal_tmp_carry__6_i_4_n_0\
    );
\cal_tmp_carry__6_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__6_i_1_n_0\
    );
\cal_tmp_carry__6_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__6_i_2_n_0\
    );
\cal_tmp_carry__6_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__6_i_3_n_0\
    );
\cal_tmp_carry__6_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[31]\,
      O => \cal_tmp_carry__6_i_4_n_0\
    );
\cal_tmp_carry__7\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__6_n_0\,
      CO(3 downto 1) => \NLW_cal_tmp_carry__7_CO_UNCONNECTED\(3 downto 1),
      CO(0) => \cal_tmp_carry__7_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 2) => \NLW_cal_tmp_carry__7_O_UNCONNECTED\(3 downto 2),
      O(1) => \cal_tmp_carry__7_n_6\,
      O(0) => \NLW_cal_tmp_carry__7_O_UNCONNECTED\(0),
      S(3 downto 1) => B"001",
      S(0) => \cal_tmp_carry__7_i_1_n_0\
    );
\cal_tmp_carry__7_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[32]\,
      O => \cal_tmp_carry__7_i_1_n_0\
    );
\cal_tmp_carry_i_1__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E4FF"
    )
        port map (
      I0 => \remd_tmp_reg[0]_1\,
      I1 => dividend_tmp,
      I2 => \dividend0_reg_n_0_[0]\,
      I3 => \divisor0_reg_n_0_[0]\,
      O => \cal_tmp_carry_i_1__0_n_0\
    );
\cal_tmp_carry_i_2__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[3]\,
      O => \cal_tmp_carry_i_2__0_n_0\
    );
\cal_tmp_carry_i_3__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[2]\,
      O => \cal_tmp_carry_i_3__0_n_0\
    );
\cal_tmp_carry_i_4__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"DDF5220A"
    )
        port map (
      I0 => \divisor0_reg_n_0_[0]\,
      I1 => \dividend0_reg_n_0_[0]\,
      I2 => dividend_tmp,
      I3 => \remd_tmp_reg[0]_1\,
      I4 => \divisor0_reg_n_0_[1]\,
      O => \cal_tmp_carry_i_4__0_n_0\
    );
\cal_tmp_carry_i_5__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1BE4"
    )
        port map (
      I0 => \remd_tmp_reg[0]_1\,
      I1 => dividend_tmp,
      I2 => \dividend0_reg_n_0_[0]\,
      I3 => \divisor0_reg_n_0_[0]\,
      O => \cal_tmp_carry_i_5__0_n_0\
    );
\dividend0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[0]_0\,
      Q => \dividend0_reg_n_0_[0]\,
      R => '0'
    );
\dividend_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \cal_tmp_carry__7_n_3\,
      Q => dividend_tmp,
      R => '0'
    );
\divisor0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(0),
      Q => \divisor0_reg_n_0_[0]\,
      R => '0'
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(10),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(11),
      Q => \divisor0_reg_n_0_[11]\,
      R => '0'
    );
\divisor0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(12),
      Q => \divisor0_reg_n_0_[12]\,
      R => '0'
    );
\divisor0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(13),
      Q => \divisor0_reg_n_0_[13]\,
      R => '0'
    );
\divisor0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(14),
      Q => \divisor0_reg_n_0_[14]\,
      R => '0'
    );
\divisor0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(15),
      Q => \divisor0_reg_n_0_[15]\,
      R => '0'
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(1),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(2),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(16),
      Q => \divisor0_reg_n_0_[31]\,
      R => '0'
    );
\divisor0_reg[32]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(17),
      Q => \divisor0_reg_n_0_[32]\,
      R => '0'
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(3),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(4),
      Q => \divisor0_reg_n_0_[4]\,
      R => '0'
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(5),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(6),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(7),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(8),
      Q => \divisor0_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(9),
      Q => \divisor0_reg_n_0_[9]\,
      R => '0'
    );
\remd[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => remd_tmp,
      I1 => D(0),
      I2 => \remd_reg[0]\,
      O => \remd_tmp_reg[0]_0\
    );
\remd_tmp[0]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"ACFFAC00"
    )
        port map (
      I0 => \dividend0_reg_n_0_[0]\,
      I1 => dividend_tmp,
      I2 => \remd_tmp_reg[0]_1\,
      I3 => \cal_tmp_carry__7_n_6\,
      I4 => cal_tmp_carry_n_7,
      O => \remd_tmp[0]_i_1_n_0\
    );
\remd_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[0]_i_1_n_0\,
      Q => remd_tmp,
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div is
  port (
    \r_stage_reg[0]\ : out STD_LOGIC;
    D : out STD_LOGIC_VECTOR ( 0 to 0 );
    ap_return : out STD_LOGIC_VECTOR ( 14 downto 0 );
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    ap_rst : in STD_LOGIC;
    v_9_reg_155 : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 7 downto 0 );
    DI : in STD_LOGIC_VECTOR ( 1 downto 0 );
    \ap_return[14]\ : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div : entity is "fn1_srem_9s_18ns_8_13_seq_1_div";
end bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div is
  signal \ap_return[0]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_n_0\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_n_1\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_n_2\ : STD_LOGIC;
  signal \ap_return[0]_INST_0_n_3\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_n_0\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_n_1\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_n_2\ : STD_LOGIC;
  signal \ap_return[4]_INST_0_n_3\ : STD_LOGIC;
  signal \ap_return[8]_INST_0_n_0\ : STD_LOGIC;
  signal \ap_return[8]_INST_0_n_1\ : STD_LOGIC;
  signal \ap_return[8]_INST_0_n_2\ : STD_LOGIC;
  signal \ap_return[8]_INST_0_n_3\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[0]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[1]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[2]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[3]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[4]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[5]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0[4]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_3__0_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_3__0_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_4\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_5\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_6\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_7\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_5\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_6\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_7\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_4\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_5\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_6\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1_n_7\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_4\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_5\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_6\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1_n_7\ : STD_LOGIC;
  signal divisor_u : STD_LOGIC_VECTOR ( 16 downto 1 );
  signal fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10 : STD_LOGIC;
  signal fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_2 : STD_LOGIC;
  signal fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_3 : STD_LOGIC;
  signal fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_4 : STD_LOGIC;
  signal fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_5 : STD_LOGIC;
  signal fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_6 : STD_LOGIC;
  signal fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_7 : STD_LOGIC;
  signal fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_8 : STD_LOGIC;
  signal fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_9 : STD_LOGIC;
  signal grp_fu_94_p2 : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal p_1_in : STD_LOGIC;
  signal sext_ln21_1_fu_112_p1 : STD_LOGIC_VECTOR ( 7 downto 3 );
  signal \NLW_ap_return[12]_INST_0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_ap_return[12]_INST_0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 2 to 2 );
  signal \NLW_divisor0_reg[16]_i_1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
begin
\ap_return[0]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \ap_return[0]_INST_0_n_0\,
      CO(2) => \ap_return[0]_INST_0_n_1\,
      CO(1) => \ap_return[0]_INST_0_n_2\,
      CO(0) => \ap_return[0]_INST_0_n_3\,
      CYINIT => '1',
      DI(3 downto 1) => B"011",
      DI(0) => v_9_reg_155,
      O(3 downto 0) => ap_return(3 downto 0),
      S(3) => sext_ln21_1_fu_112_p1(3),
      S(2) => \ap_return[0]_INST_0_i_2_n_0\,
      S(1) => \ap_return[0]_INST_0_i_3_n_0\,
      S(0) => \ap_return[0]_INST_0_i_4_n_0\
    );
\ap_return[0]_INST_0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => grp_fu_94_p2(3),
      I1 => p(3),
      O => sext_ln21_1_fu_112_p1(3)
    );
\ap_return[0]_INST_0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => grp_fu_94_p2(2),
      I1 => p(2),
      O => \ap_return[0]_INST_0_i_2_n_0\
    );
\ap_return[0]_INST_0_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => grp_fu_94_p2(1),
      I1 => p(1),
      O => \ap_return[0]_INST_0_i_3_n_0\
    );
\ap_return[0]_INST_0_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"1E"
    )
        port map (
      I0 => p(0),
      I1 => grp_fu_94_p2(0),
      I2 => v_9_reg_155,
      O => \ap_return[0]_INST_0_i_4_n_0\
    );
\ap_return[12]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \ap_return[8]_INST_0_n_0\,
      CO(3 downto 1) => \NLW_ap_return[12]_INST_0_CO_UNCONNECTED\(3 downto 1),
      CO(0) => ap_return(14),
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \ap_return[14]\(0),
      O(3 downto 2) => \NLW_ap_return[12]_INST_0_O_UNCONNECTED\(3 downto 2),
      O(1 downto 0) => ap_return(13 downto 12),
      S(3 downto 1) => B"001",
      S(0) => v_9_reg_155
    );
\ap_return[4]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \ap_return[0]_INST_0_n_0\,
      CO(3) => \ap_return[4]_INST_0_n_0\,
      CO(2) => \ap_return[4]_INST_0_n_1\,
      CO(1) => \ap_return[4]_INST_0_n_2\,
      CO(0) => \ap_return[4]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => '1',
      DI(2) => \ap_return[4]_INST_0_i_1_n_0\,
      DI(1) => \ap_return[4]_INST_0_i_2_n_0\,
      DI(0) => '1',
      O(3 downto 0) => ap_return(7 downto 4),
      S(3) => sext_ln21_1_fu_112_p1(7),
      S(2) => \ap_return[4]_INST_0_i_4_n_0\,
      S(1) => \ap_return[4]_INST_0_i_5_n_0\,
      S(0) => sext_ln21_1_fu_112_p1(4)
    );
\ap_return[4]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"EF"
    )
        port map (
      I0 => p(5),
      I1 => grp_fu_94_p2(5),
      I2 => v_9_reg_155,
      O => \ap_return[4]_INST_0_i_1_n_0\
    );
\ap_return[4]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"56"
    )
        port map (
      I0 => v_9_reg_155,
      I1 => grp_fu_94_p2(5),
      I2 => p(5),
      O => \ap_return[4]_INST_0_i_2_n_0\
    );
\ap_return[4]_INST_0_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => grp_fu_94_p2(7),
      I1 => p(7),
      O => sext_ln21_1_fu_112_p1(7)
    );
\ap_return[4]_INST_0_i_4\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"020202FD"
    )
        port map (
      I0 => v_9_reg_155,
      I1 => grp_fu_94_p2(5),
      I2 => p(5),
      I3 => p(6),
      I4 => grp_fu_94_p2(6),
      O => \ap_return[4]_INST_0_i_4_n_0\
    );
\ap_return[4]_INST_0_i_5\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"A9A9A956"
    )
        port map (
      I0 => v_9_reg_155,
      I1 => grp_fu_94_p2(5),
      I2 => p(5),
      I3 => p(4),
      I4 => grp_fu_94_p2(4),
      O => \ap_return[4]_INST_0_i_5_n_0\
    );
\ap_return[4]_INST_0_i_6\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => grp_fu_94_p2(4),
      I1 => p(4),
      O => sext_ln21_1_fu_112_p1(4)
    );
\ap_return[8]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \ap_return[4]_INST_0_n_0\,
      CO(3) => \ap_return[8]_INST_0_n_0\,
      CO(2) => \ap_return[8]_INST_0_n_1\,
      CO(1) => \ap_return[8]_INST_0_n_2\,
      CO(0) => \ap_return[8]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2) => DI(1),
      DI(1) => '0',
      DI(0) => DI(0),
      O(3 downto 0) => ap_return(11 downto 8),
      S(3) => '1',
      S(2) => v_9_reg_155,
      S(1) => '1',
      S(0) => v_9_reg_155
    );
\dividend0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_7(0),
      Q => \dividend0_reg_n_0_[0]\,
      R => '0'
    );
\dividend0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_7(1),
      Q => \dividend0_reg_n_0_[1]\,
      R => '0'
    );
\dividend0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_7(2),
      Q => \dividend0_reg_n_0_[2]\,
      R => '0'
    );
\dividend0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_7(3),
      Q => \dividend0_reg_n_0_[3]\,
      R => '0'
    );
\dividend0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_7(4),
      Q => \dividend0_reg_n_0_[4]\,
      R => '0'
    );
\dividend0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_7(5),
      Q => \dividend0_reg_n_0_[5]\,
      R => '0'
    );
\dividend0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_7(6),
      Q => \dividend0_reg_n_0_[6]\,
      R => '0'
    );
\dividend0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_7(7),
      Q => p_1_in,
      R => '0'
    );
\divisor0[4]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(4),
      O => \divisor0[4]_i_2_n_0\
    );
\divisor0[4]_i_3__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(2),
      O => \divisor0[4]_i_3__0_n_0\
    );
\divisor0[8]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(7),
      O => \divisor0[8]_i_2_n_0\
    );
\divisor0[8]_i_3__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(5),
      O => \divisor0[8]_i_3__0_n_0\
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[12]_i_1_n_6\,
      Q => divisor_u(10),
      R => '0'
    );
\divisor0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[12]_i_1_n_5\,
      Q => divisor_u(11),
      R => '0'
    );
\divisor0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[12]_i_1_n_4\,
      Q => divisor_u(12),
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
      DI(3 downto 0) => B"0000",
      O(3) => \divisor0_reg[12]_i_1_n_4\,
      O(2) => \divisor0_reg[12]_i_1_n_5\,
      O(1) => \divisor0_reg[12]_i_1_n_6\,
      O(0) => \divisor0_reg[12]_i_1_n_7\,
      S(3 downto 0) => p_7(12 downto 9)
    );
\divisor0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[16]_i_1_n_7\,
      Q => divisor_u(13),
      R => '0'
    );
\divisor0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[16]_i_1_n_6\,
      Q => divisor_u(14),
      R => '0'
    );
\divisor0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[16]_i_1_n_5\,
      Q => divisor_u(15),
      R => '0'
    );
\divisor0_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[16]_i_1_n_0\,
      Q => divisor_u(16),
      R => '0'
    );
\divisor0_reg[16]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[12]_i_1_n_0\,
      CO(3) => \divisor0_reg[16]_i_1_n_0\,
      CO(2) => \NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED\(2),
      CO(1) => \divisor0_reg[16]_i_1_n_2\,
      CO(0) => \divisor0_reg[16]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \NLW_divisor0_reg[16]_i_1_O_UNCONNECTED\(3),
      O(2) => \divisor0_reg[16]_i_1_n_5\,
      O(1) => \divisor0_reg[16]_i_1_n_6\,
      O(0) => \divisor0_reg[16]_i_1_n_7\,
      S(3) => '1',
      S(2 downto 0) => p_7(15 downto 13)
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[4]_i_1_n_7\,
      Q => divisor_u(1),
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[4]_i_1_n_6\,
      Q => divisor_u(2),
      R => '0'
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[4]_i_1_n_5\,
      Q => divisor_u(3),
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[4]_i_1_n_4\,
      Q => divisor_u(4),
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
      DI(3) => p_7(4),
      DI(2) => '0',
      DI(1) => p_7(2),
      DI(0) => '0',
      O(3) => \divisor0_reg[4]_i_1_n_4\,
      O(2) => \divisor0_reg[4]_i_1_n_5\,
      O(1) => \divisor0_reg[4]_i_1_n_6\,
      O(0) => \divisor0_reg[4]_i_1_n_7\,
      S(3) => \divisor0[4]_i_2_n_0\,
      S(2) => p_7(3),
      S(1) => \divisor0[4]_i_3__0_n_0\,
      S(0) => p_7(1)
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[8]_i_1_n_7\,
      Q => divisor_u(5),
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[8]_i_1_n_6\,
      Q => divisor_u(6),
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[8]_i_1_n_5\,
      Q => divisor_u(7),
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[8]_i_1_n_4\,
      Q => divisor_u(8),
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
      DI(3) => '0',
      DI(2) => p_7(7),
      DI(1) => '0',
      DI(0) => p_7(5),
      O(3) => \divisor0_reg[8]_i_1_n_4\,
      O(2) => \divisor0_reg[8]_i_1_n_5\,
      O(1) => \divisor0_reg[8]_i_1_n_6\,
      O(0) => \divisor0_reg[8]_i_1_n_7\,
      S(3) => p_7(8),
      S(2) => \divisor0[8]_i_2_n_0\,
      S(1) => p_7(6),
      S(0) => \divisor0[8]_i_3__0_n_0\
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[12]_i_1_n_7\,
      Q => divisor_u(9),
      R => '0'
    );
fn1_srem_9s_18ns_8_13_seq_1_div_u_0: entity work.bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div_u
     port map (
      D(0) => D(0),
      E(0) => E(0),
      Q(6) => p_1_in,
      Q(5) => \dividend0_reg_n_0_[6]\,
      Q(4) => \dividend0_reg_n_0_[5]\,
      Q(3) => \dividend0_reg_n_0_[4]\,
      Q(2) => \dividend0_reg_n_0_[3]\,
      Q(1) => \dividend0_reg_n_0_[2]\,
      Q(0) => \dividend0_reg_n_0_[1]\,
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      \dividend0_reg[0]_0\ => \dividend0_reg_n_0_[0]\,
      \divisor0_reg[16]_0\(15 downto 0) => divisor_u(16 downto 1),
      \r_stage_reg[0]_0\ => \r_stage_reg[0]\,
      \r_stage_reg[9]_0\(0) => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10,
      \remd_tmp_reg[0]_0\(0) => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_2,
      \remd_tmp_reg[5]_0\(6) => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_3,
      \remd_tmp_reg[5]_0\(5) => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_4,
      \remd_tmp_reg[5]_0\(4) => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_5,
      \remd_tmp_reg[5]_0\(3) => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_6,
      \remd_tmp_reg[5]_0\(2) => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_7,
      \remd_tmp_reg[5]_0\(1) => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_8,
      \remd_tmp_reg[5]_0\(0) => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_9
    );
\remd_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10,
      D => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_2,
      Q => grp_fu_94_p2(0),
      R => '0'
    );
\remd_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10,
      D => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_9,
      Q => grp_fu_94_p2(1),
      R => '0'
    );
\remd_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10,
      D => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_8,
      Q => grp_fu_94_p2(2),
      R => '0'
    );
\remd_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10,
      D => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_7,
      Q => grp_fu_94_p2(3),
      R => '0'
    );
\remd_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10,
      D => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_6,
      Q => grp_fu_94_p2(4),
      R => '0'
    );
\remd_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10,
      D => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_5,
      Q => grp_fu_94_p2(5),
      R => '0'
    );
\remd_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10,
      D => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_4,
      Q => grp_fu_94_p2(6),
      R => '0'
    );
\remd_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_10,
      D => fn1_srem_9s_18ns_8_13_seq_1_div_u_0_n_3,
      Q => grp_fu_94_p2(7),
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div is
  port (
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[0]_0\ : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    \remd_tmp_reg[0]\ : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    ap_start : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 7 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    D : in STD_LOGIC_VECTOR ( 0 to 0 );
    v_9_reg_155 : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div : entity is "fn1_urem_1ns_33ns_1_5_seq_1_div";
end bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div is
  signal \^e\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \dividend0[0]_i_2_n_0\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[0]\ : STD_LOGIC;
  signal \divisor0[12]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0[12]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[32]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0[32]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[32]_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_2__0_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_2__0_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_4_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1__0_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1__0_n_1\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1__0_n_2\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1__0_n_3\ : STD_LOGIC;
  signal \divisor0_reg[32]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[32]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1__0_n_0\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1__0_n_1\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1__0_n_2\ : STD_LOGIC;
  signal \divisor0_reg[4]_i_1__0_n_3\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1__0_n_0\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1__0_n_1\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1__0_n_2\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_1__0_n_3\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[0]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[10]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[11]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[12]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[13]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[14]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[15]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[1]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[2]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[31]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[32]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[3]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[4]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[8]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal fn1_urem_1ns_33ns_1_5_seq_1_div_u_0_n_0 : STD_LOGIC;
  signal grp_fu_70_ap_start : STD_LOGIC;
  signal grp_fu_70_p1 : STD_LOGIC_VECTOR ( 32 downto 0 );
  signal icmp_ln18_fu_50_p2 : STD_LOGIC;
  signal \remd_reg_n_0_[0]\ : STD_LOGIC;
  signal \NLW_divisor0_reg[32]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
begin
  E(0) <= \^e\(0);
\dividend0[0]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000001"
    )
        port map (
      I0 => p(5),
      I1 => p(4),
      I2 => p(6),
      I3 => p(7),
      I4 => \dividend0[0]_i_2_n_0\,
      O => icmp_ln18_fu_50_p2
    );
\dividend0[0]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => p(2),
      I1 => p(3),
      I2 => p(0),
      I3 => p(1),
      O => \dividend0[0]_i_2_n_0\
    );
\dividend0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => icmp_ln18_fu_50_p2,
      Q => \dividend0_reg_n_0_[0]\,
      R => '0'
    );
\divisor0[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(0),
      O => grp_fu_70_p1(0)
    );
\divisor0[12]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(11),
      O => \divisor0[12]_i_2_n_0\
    );
\divisor0[12]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(9),
      O => \divisor0[12]_i_3_n_0\
    );
\divisor0[32]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(15),
      O => \divisor0[32]_i_2_n_0\
    );
\divisor0[32]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(14),
      O => \divisor0[32]_i_3_n_0\
    );
\divisor0[32]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(13),
      O => \divisor0[32]_i_4_n_0\
    );
\divisor0[4]_i_2__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(3),
      O => \divisor0[4]_i_2__0_n_0\
    );
\divisor0[4]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(2),
      O => \divisor0[4]_i_3_n_0\
    );
\divisor0[4]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(1),
      O => \divisor0[4]_i_4_n_0\
    );
\divisor0[8]_i_2__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(8),
      O => \divisor0[8]_i_2__0_n_0\
    );
\divisor0[8]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(6),
      O => \divisor0[8]_i_3_n_0\
    );
\divisor0[8]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_7(5),
      O => \divisor0[8]_i_4_n_0\
    );
\divisor0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(0),
      Q => \divisor0_reg_n_0_[0]\,
      R => '0'
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(10),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(11),
      Q => \divisor0_reg_n_0_[11]\,
      R => '0'
    );
\divisor0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(12),
      Q => \divisor0_reg_n_0_[12]\,
      R => '0'
    );
\divisor0_reg[12]_i_1__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[8]_i_1__0_n_0\,
      CO(3) => \divisor0_reg[12]_i_1__0_n_0\,
      CO(2) => \divisor0_reg[12]_i_1__0_n_1\,
      CO(1) => \divisor0_reg[12]_i_1__0_n_2\,
      CO(0) => \divisor0_reg[12]_i_1__0_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2) => p_7(11),
      DI(1) => '0',
      DI(0) => p_7(9),
      O(3 downto 0) => grp_fu_70_p1(12 downto 9),
      S(3) => p_7(12),
      S(2) => \divisor0[12]_i_2_n_0\,
      S(1) => p_7(10),
      S(0) => \divisor0[12]_i_3_n_0\
    );
\divisor0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(13),
      Q => \divisor0_reg_n_0_[13]\,
      R => '0'
    );
\divisor0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(14),
      Q => \divisor0_reg_n_0_[14]\,
      R => '0'
    );
\divisor0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(15),
      Q => \divisor0_reg_n_0_[15]\,
      R => '0'
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(1),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(2),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(31),
      Q => \divisor0_reg_n_0_[31]\,
      R => '0'
    );
\divisor0_reg[32]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(32),
      Q => \divisor0_reg_n_0_[32]\,
      R => '0'
    );
\divisor0_reg[32]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[12]_i_1__0_n_0\,
      CO(3) => \NLW_divisor0_reg[32]_i_1_CO_UNCONNECTED\(3),
      CO(2) => grp_fu_70_p1(32),
      CO(1) => \divisor0_reg[32]_i_1_n_2\,
      CO(0) => \divisor0_reg[32]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => p_7(15 downto 13),
      O(3) => grp_fu_70_p1(31),
      O(2 downto 0) => grp_fu_70_p1(15 downto 13),
      S(3) => '1',
      S(2) => \divisor0[32]_i_2_n_0\,
      S(1) => \divisor0[32]_i_3_n_0\,
      S(0) => \divisor0[32]_i_4_n_0\
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(3),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(4),
      Q => \divisor0_reg_n_0_[4]\,
      R => '0'
    );
\divisor0_reg[4]_i_1__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \divisor0_reg[4]_i_1__0_n_0\,
      CO(2) => \divisor0_reg[4]_i_1__0_n_1\,
      CO(1) => \divisor0_reg[4]_i_1__0_n_2\,
      CO(0) => \divisor0_reg[4]_i_1__0_n_3\,
      CYINIT => p_7(0),
      DI(3) => '0',
      DI(2 downto 0) => p_7(3 downto 1),
      O(3 downto 0) => grp_fu_70_p1(4 downto 1),
      S(3) => p_7(4),
      S(2) => \divisor0[4]_i_2__0_n_0\,
      S(1) => \divisor0[4]_i_3_n_0\,
      S(0) => \divisor0[4]_i_4_n_0\
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(5),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(6),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(7),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(8),
      Q => \divisor0_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[8]_i_1__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[4]_i_1__0_n_0\,
      CO(3) => \divisor0_reg[8]_i_1__0_n_0\,
      CO(2) => \divisor0_reg[8]_i_1__0_n_1\,
      CO(1) => \divisor0_reg[8]_i_1__0_n_2\,
      CO(0) => \divisor0_reg[8]_i_1__0_n_3\,
      CYINIT => '0',
      DI(3) => p_7(8),
      DI(2) => '0',
      DI(1 downto 0) => p_7(6 downto 5),
      O(3 downto 0) => grp_fu_70_p1(8 downto 5),
      S(3) => \divisor0[8]_i_2__0_n_0\,
      S(2) => p_7(7),
      S(1) => \divisor0[8]_i_3_n_0\,
      S(0) => \divisor0[8]_i_4_n_0\
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_p1(9),
      Q => \divisor0_reg_n_0_[9]\,
      R => '0'
    );
fn1_urem_1ns_33ns_1_5_seq_1_div_u_0: entity work.bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div_u
     port map (
      D(0) => D(0),
      E(0) => \^e\(0),
      Q(17) => \divisor0_reg_n_0_[32]\,
      Q(16) => \divisor0_reg_n_0_[31]\,
      Q(15) => \divisor0_reg_n_0_[15]\,
      Q(14) => \divisor0_reg_n_0_[14]\,
      Q(13) => \divisor0_reg_n_0_[13]\,
      Q(12) => \divisor0_reg_n_0_[12]\,
      Q(11) => \divisor0_reg_n_0_[11]\,
      Q(10) => \divisor0_reg_n_0_[10]\,
      Q(9) => \divisor0_reg_n_0_[9]\,
      Q(8) => \divisor0_reg_n_0_[8]\,
      Q(7) => \divisor0_reg_n_0_[7]\,
      Q(6) => \divisor0_reg_n_0_[6]\,
      Q(5) => \divisor0_reg_n_0_[5]\,
      Q(4) => \divisor0_reg_n_0_[4]\,
      Q(3) => \divisor0_reg_n_0_[3]\,
      Q(2) => \divisor0_reg_n_0_[2]\,
      Q(1) => \divisor0_reg_n_0_[1]\,
      Q(0) => \divisor0_reg_n_0_[0]\,
      ap_clk => ap_clk,
      \dividend0_reg[0]_0\ => \dividend0_reg_n_0_[0]\,
      \remd_reg[0]\ => \remd_reg_n_0_[0]\,
      \remd_tmp_reg[0]_0\ => fn1_urem_1ns_33ns_1_5_seq_1_div_u_0_n_0,
      \remd_tmp_reg[0]_1\ => \remd_tmp_reg[0]\
    );
\remd_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => fn1_urem_1ns_33ns_1_5_seq_1_div_u_0_n_0,
      Q => \remd_reg_n_0_[0]\,
      R => '0'
    );
start0_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => Q(0),
      I1 => ap_start,
      O => grp_fu_70_ap_start
    );
start0_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_70_ap_start,
      Q => \^e\(0),
      R => '0'
    );
\v_9_reg_155[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \remd_reg_n_0_[0]\,
      I1 => Q(1),
      I2 => v_9_reg_155,
      O => \remd_reg[0]_0\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1 is
  port (
    \r_stage_reg[0]\ : out STD_LOGIC;
    D : out STD_LOGIC_VECTOR ( 0 to 0 );
    ap_return : out STD_LOGIC_VECTOR ( 14 downto 0 );
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    ap_rst : in STD_LOGIC;
    v_9_reg_155 : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 7 downto 0 );
    DI : in STD_LOGIC_VECTOR ( 1 downto 0 );
    \ap_return[14]\ : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1 : entity is "fn1_srem_9s_18ns_8_13_seq_1";
end bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1 is
begin
fn1_srem_9s_18ns_8_13_seq_1_div_U: entity work.bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1_div
     port map (
      D(0) => D(0),
      DI(1 downto 0) => DI(1 downto 0),
      E(0) => E(0),
      ap_clk => ap_clk,
      ap_return(14 downto 0) => ap_return(14 downto 0),
      \ap_return[14]\(0) => \ap_return[14]\(0),
      ap_rst => ap_rst,
      p(7 downto 0) => p(7 downto 0),
      p_7(15 downto 0) => p_7(15 downto 0),
      \r_stage_reg[0]\ => \r_stage_reg[0]\,
      v_9_reg_155 => v_9_reg_155
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1 is
  port (
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[0]\ : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    \remd_tmp_reg[0]\ : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    ap_start : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 7 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    D : in STD_LOGIC_VECTOR ( 0 to 0 );
    v_9_reg_155 : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1 : entity is "fn1_urem_1ns_33ns_1_5_seq_1";
end bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1 is
begin
fn1_urem_1ns_33ns_1_5_seq_1_div_U: entity work.bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1_div
     port map (
      D(0) => D(0),
      E(0) => E(0),
      Q(1 downto 0) => Q(1 downto 0),
      ap_clk => ap_clk,
      ap_start => ap_start,
      p(7 downto 0) => p(7 downto 0),
      p_7(15 downto 0) => p_7(15 downto 0),
      \remd_reg[0]_0\ => \remd_reg[0]\,
      \remd_tmp_reg[0]\ => \remd_tmp_reg[0]\,
      v_9_reg_155 => v_9_reg_155
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
    p : in STD_LOGIC_VECTOR ( 7 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    ap_return : out STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1 : entity is "fn1";
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of bd_0_hls_inst_0_fn1 : entity is "13'b0000000000001";
  attribute ap_ST_fsm_state10 : string;
  attribute ap_ST_fsm_state10 of bd_0_hls_inst_0_fn1 : entity is "13'b0001000000000";
  attribute ap_ST_fsm_state11 : string;
  attribute ap_ST_fsm_state11 of bd_0_hls_inst_0_fn1 : entity is "13'b0010000000000";
  attribute ap_ST_fsm_state12 : string;
  attribute ap_ST_fsm_state12 of bd_0_hls_inst_0_fn1 : entity is "13'b0100000000000";
  attribute ap_ST_fsm_state13 : string;
  attribute ap_ST_fsm_state13 of bd_0_hls_inst_0_fn1 : entity is "13'b1000000000000";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of bd_0_hls_inst_0_fn1 : entity is "13'b0000000000010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of bd_0_hls_inst_0_fn1 : entity is "13'b0000000000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of bd_0_hls_inst_0_fn1 : entity is "13'b0000000001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of bd_0_hls_inst_0_fn1 : entity is "13'b0000000010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of bd_0_hls_inst_0_fn1 : entity is "13'b0000000100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of bd_0_hls_inst_0_fn1 : entity is "13'b0000001000000";
  attribute ap_ST_fsm_state8 : string;
  attribute ap_ST_fsm_state8 of bd_0_hls_inst_0_fn1 : entity is "13'b0000010000000";
  attribute ap_ST_fsm_state9 : string;
  attribute ap_ST_fsm_state9 of bd_0_hls_inst_0_fn1 : entity is "13'b0000100000000";
  attribute hls_module : string;
  attribute hls_module of bd_0_hls_inst_0_fn1 : entity is "yes";
end bd_0_hls_inst_0_fn1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1 is
  signal \ap_CS_fsm[1]_i_2_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_3_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[0]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[10]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[11]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[1]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[2]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[3]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[5]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[6]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[7]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[8]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[9]\ : STD_LOGIC;
  signal ap_CS_fsm_state5 : STD_LOGIC;
  signal ap_NS_fsm : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \^ap_done\ : STD_LOGIC;
  signal \ap_return[12]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \ap_return[8]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \ap_return[8]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal srem_9s_18ns_8_13_seq_1_U2_n_0 : STD_LOGIC;
  signal srem_9s_18ns_8_13_seq_1_U2_n_1 : STD_LOGIC;
  signal start0 : STD_LOGIC;
  signal urem_1ns_33ns_1_5_seq_1_U1_n_1 : STD_LOGIC;
  signal v_9_reg_155 : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \ap_CS_fsm[0]_i_1\ : label is "soft_lutpair10";
  attribute FSM_ENCODING : string;
  attribute FSM_ENCODING of \ap_CS_fsm_reg[0]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[10]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[11]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[12]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[1]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[2]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[3]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[4]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[5]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[6]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[7]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[8]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[9]\ : label is "none";
  attribute SOFT_HLUTNM of ap_idle_INST_0 : label is "soft_lutpair10";
begin
  ap_done <= \^ap_done\;
  ap_ready <= \^ap_done\;
\ap_CS_fsm[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AE"
    )
        port map (
      I0 => \^ap_done\,
      I1 => \ap_CS_fsm_reg_n_0_[0]\,
      I2 => ap_start,
      O => ap_NS_fsm(0)
    );
\ap_CS_fsm[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000004"
    )
        port map (
      I0 => \ap_CS_fsm[1]_i_2_n_0\,
      I1 => \ap_CS_fsm[1]_i_3_n_0\,
      I2 => \ap_CS_fsm_reg_n_0_[8]\,
      I3 => \ap_CS_fsm_reg_n_0_[9]\,
      I4 => \ap_CS_fsm_reg_n_0_[6]\,
      I5 => \ap_CS_fsm_reg_n_0_[7]\,
      O => ap_NS_fsm(1)
    );
\ap_CS_fsm[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFF7"
    )
        port map (
      I0 => ap_start,
      I1 => \ap_CS_fsm_reg_n_0_[0]\,
      I2 => \ap_CS_fsm_reg_n_0_[11]\,
      I3 => \ap_CS_fsm_reg_n_0_[10]\,
      I4 => \^ap_done\,
      I5 => \ap_CS_fsm_reg_n_0_[1]\,
      O => \ap_CS_fsm[1]_i_2_n_0\
    );
\ap_CS_fsm[1]_i_3\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0001"
    )
        port map (
      I0 => ap_CS_fsm_state5,
      I1 => \ap_CS_fsm_reg_n_0_[5]\,
      I2 => \ap_CS_fsm_reg_n_0_[2]\,
      I3 => \ap_CS_fsm_reg_n_0_[3]\,
      O => \ap_CS_fsm[1]_i_3_n_0\
    );
\ap_CS_fsm_reg[0]\: unisim.vcomponents.FDSE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(0),
      Q => \ap_CS_fsm_reg_n_0_[0]\,
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
      Q => \^ap_done\,
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
      Q => ap_CS_fsm_state5,
      R => ap_rst
    );
\ap_CS_fsm_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state5,
      Q => \ap_CS_fsm_reg_n_0_[5]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[5]\,
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
      Q => \ap_CS_fsm_reg_n_0_[7]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[7]\,
      Q => \ap_CS_fsm_reg_n_0_[8]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[8]\,
      Q => \ap_CS_fsm_reg_n_0_[9]\,
      R => ap_rst
    );
ap_idle_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[0]\,
      I1 => ap_start,
      O => ap_idle
    );
\ap_return[12]_INST_0_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => v_9_reg_155,
      O => \ap_return[12]_INST_0_i_1_n_0\
    );
\ap_return[15]_INST_0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => v_9_reg_155,
      O => ap_return(15)
    );
\ap_return[8]_INST_0_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => v_9_reg_155,
      O => \ap_return[8]_INST_0_i_1_n_0\
    );
\ap_return[8]_INST_0_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => v_9_reg_155,
      O => \ap_return[8]_INST_0_i_2_n_0\
    );
srem_9s_18ns_8_13_seq_1_U2: entity work.bd_0_hls_inst_0_fn1_srem_9s_18ns_8_13_seq_1
     port map (
      D(0) => srem_9s_18ns_8_13_seq_1_U2_n_1,
      DI(1) => \ap_return[8]_INST_0_i_1_n_0\,
      DI(0) => \ap_return[8]_INST_0_i_2_n_0\,
      E(0) => start0,
      ap_clk => ap_clk,
      ap_return(14 downto 0) => ap_return(14 downto 0),
      \ap_return[14]\(0) => \ap_return[12]_INST_0_i_1_n_0\,
      ap_rst => ap_rst,
      p(7 downto 0) => p(7 downto 0),
      p_7(15 downto 0) => p_7(15 downto 0),
      \r_stage_reg[0]\ => srem_9s_18ns_8_13_seq_1_U2_n_0,
      v_9_reg_155 => v_9_reg_155
    );
urem_1ns_33ns_1_5_seq_1_U1: entity work.bd_0_hls_inst_0_fn1_urem_1ns_33ns_1_5_seq_1
     port map (
      D(0) => srem_9s_18ns_8_13_seq_1_U2_n_1,
      E(0) => start0,
      Q(1) => ap_CS_fsm_state5,
      Q(0) => \ap_CS_fsm_reg_n_0_[0]\,
      ap_clk => ap_clk,
      ap_start => ap_start,
      p(7 downto 0) => p(7 downto 0),
      p_7(15 downto 0) => p_7(15 downto 0),
      \remd_reg[0]\ => urem_1ns_33ns_1_5_seq_1_U1_n_1,
      \remd_tmp_reg[0]\ => srem_9s_18ns_8_13_seq_1_U2_n_0,
      v_9_reg_155 => v_9_reg_155
    );
\v_9_reg_155_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => urem_1ns_33ns_1_5_seq_1_U1_n_1,
      Q => v_9_reg_155,
      R => '0'
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
    ap_return : out STD_LOGIC_VECTOR ( 15 downto 0 );
    p : in STD_LOGIC_VECTOR ( 7 downto 0 );
    p_7 : in STD_LOGIC_VECTOR ( 15 downto 0 )
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
  attribute ap_ST_fsm_state1 of inst : label is "13'b0000000000001";
  attribute ap_ST_fsm_state10 : string;
  attribute ap_ST_fsm_state10 of inst : label is "13'b0001000000000";
  attribute ap_ST_fsm_state11 : string;
  attribute ap_ST_fsm_state11 of inst : label is "13'b0010000000000";
  attribute ap_ST_fsm_state12 : string;
  attribute ap_ST_fsm_state12 of inst : label is "13'b0100000000000";
  attribute ap_ST_fsm_state13 : string;
  attribute ap_ST_fsm_state13 of inst : label is "13'b1000000000000";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of inst : label is "13'b0000000000010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of inst : label is "13'b0000000000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of inst : label is "13'b0000000001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of inst : label is "13'b0000000010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of inst : label is "13'b0000000100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of inst : label is "13'b0000001000000";
  attribute ap_ST_fsm_state8 : string;
  attribute ap_ST_fsm_state8 of inst : label is "13'b0000010000000";
  attribute ap_ST_fsm_state9 : string;
  attribute ap_ST_fsm_state9 of inst : label is "13'b0000100000000";
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
  attribute X_INTERFACE_INFO of p_7 : signal is "xilinx.com:signal:data:1.0 p_7 DATA";
  attribute X_INTERFACE_PARAMETER of p_7 : signal is "XIL_INTERFACENAME p_7, LAYERED_METADATA undef";
begin
inst: entity work.bd_0_hls_inst_0_fn1
     port map (
      ap_clk => ap_clk,
      ap_done => ap_done,
      ap_idle => ap_idle,
      ap_ready => ap_ready,
      ap_return(15 downto 0) => ap_return(15 downto 0),
      ap_rst => ap_rst,
      ap_start => ap_start,
      p(7 downto 0) => p(7 downto 0),
      p_7(15 downto 0) => p_7(15 downto 0)
    );
end STRUCTURE;
