-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Mon Apr 12 04:40:11 2021
-- Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
-- Command     : write_vhdl -force -mode funcsim
--               /home/nanwu/GNN_DFG/bb/dfg_17/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div_u is
  port (
    \0\ : out STD_LOGIC;
    \dividend_tmp_reg[0]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \dividend_tmp_reg[2]_0\ : out STD_LOGIC;
    \dividend_tmp_reg[1]_0\ : out STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    \dividend_tmp_reg[15]_0\ : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    D : in STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div_u : entity is "fn1_sdiv_17s_17ns_3_21_seq_1_div_u";
end bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div_u;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div_u is
  signal \cal_tmp_carry__0_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_5__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_6__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_7__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_8__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_5_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_6_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_7_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_8_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_5_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_6_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_7_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_8_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_2__0_n_0\ : STD_LOGIC;
  signal cal_tmp_carry_i_1_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_2_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_3_n_0 : STD_LOGIC;
  signal \cal_tmp_carry_i_4__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry_i_5__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry_i_6__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry_i_7__0_n_0\ : STD_LOGIC;
  signal cal_tmp_carry_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_1 : STD_LOGIC;
  signal cal_tmp_carry_n_2 : STD_LOGIC;
  signal cal_tmp_carry_n_3 : STD_LOGIC;
  signal cal_tmp_carry_n_4 : STD_LOGIC;
  signal cal_tmp_carry_n_5 : STD_LOGIC;
  signal cal_tmp_carry_n_6 : STD_LOGIC;
  signal cal_tmp_carry_n_7 : STD_LOGIC;
  signal \dividend_tmp[10]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[14]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[16]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[9]_i_1_n_0\ : STD_LOGIC;
  signal dividend_tmp_mux_n_0 : STD_LOGIC;
  signal \^dividend_tmp_reg[0]_0\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \^dividend_tmp_reg[1]_0\ : STD_LOGIC;
  signal \^dividend_tmp_reg[2]_0\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[10]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[11]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[12]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[13]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[14]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[15]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[16]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[3]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[4]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[5]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[6]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[7]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[8]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[9]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[0]\ : STD_LOGIC;
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
  signal p_0_in : STD_LOGIC;
  signal p_2_out : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \remd_tmp[0]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[10]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[11]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[12]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[13]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[14]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[15]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[7]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[8]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[9]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[0]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[10]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[11]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[12]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[13]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[14]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[15]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[1]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[2]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[3]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[4]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[5]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[6]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[7]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[8]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[9]\ : STD_LOGIC;
  signal sign_i : STD_LOGIC_VECTOR ( 1 to 1 );
  signal \NLW_cal_tmp_carry__3_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_cal_tmp_carry__3_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \dividend_tmp[10]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \dividend_tmp[14]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \dividend_tmp[16]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \dividend_tmp[4]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \dividend_tmp[6]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \dividend_tmp[9]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \remd_tmp[0]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \remd_tmp[1]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \remd_tmp[2]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \remd_tmp[3]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \remd_tmp[4]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \remd_tmp[5]_i_1\ : label is "soft_lutpair5";
begin
  \dividend_tmp_reg[0]_0\(0) <= \^dividend_tmp_reg[0]_0\(0);
  \dividend_tmp_reg[1]_0\ <= \^dividend_tmp_reg[1]_0\;
  \dividend_tmp_reg[2]_0\ <= \^dividend_tmp_reg[2]_0\;
cal_tmp_carry: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => cal_tmp_carry_n_0,
      CO(2) => cal_tmp_carry_n_1,
      CO(1) => cal_tmp_carry_n_2,
      CO(0) => cal_tmp_carry_n_3,
      CYINIT => '1',
      DI(3) => cal_tmp_carry_i_1_n_0,
      DI(2) => cal_tmp_carry_i_2_n_0,
      DI(1) => cal_tmp_carry_i_3_n_0,
      DI(0) => dividend_tmp_mux_n_0,
      O(3) => cal_tmp_carry_n_4,
      O(2) => cal_tmp_carry_n_5,
      O(1) => cal_tmp_carry_n_6,
      O(0) => cal_tmp_carry_n_7,
      S(3) => \cal_tmp_carry_i_4__0_n_0\,
      S(2) => \cal_tmp_carry_i_5__1_n_0\,
      S(1) => \cal_tmp_carry_i_6__0_n_0\,
      S(0) => \cal_tmp_carry_i_7__0_n_0\
    );
\cal_tmp_carry__0\: unisim.vcomponents.CARRY4
     port map (
      CI => cal_tmp_carry_n_0,
      CO(3) => \cal_tmp_carry__0_n_0\,
      CO(2) => \cal_tmp_carry__0_n_1\,
      CO(1) => \cal_tmp_carry__0_n_2\,
      CO(0) => \cal_tmp_carry__0_n_3\,
      CYINIT => '0',
      DI(3) => \cal_tmp_carry__0_i_1_n_0\,
      DI(2) => \cal_tmp_carry__0_i_2_n_0\,
      DI(1) => \cal_tmp_carry__0_i_3_n_0\,
      DI(0) => \cal_tmp_carry__0_i_4_n_0\,
      O(3) => \cal_tmp_carry__0_n_4\,
      O(2) => \cal_tmp_carry__0_n_5\,
      O(1) => \cal_tmp_carry__0_n_6\,
      O(0) => \cal_tmp_carry__0_n_7\,
      S(3) => \cal_tmp_carry__0_i_5__0_n_0\,
      S(2) => \cal_tmp_carry__0_i_6__0_n_0\,
      S(1) => \cal_tmp_carry__0_i_7__0_n_0\,
      S(0) => \cal_tmp_carry__0_i_8__0_n_0\
    );
\cal_tmp_carry__0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[6]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__0_i_1_n_0\
    );
\cal_tmp_carry__0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[5]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__0_i_2_n_0\
    );
\cal_tmp_carry__0_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[4]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__0_i_3_n_0\
    );
\cal_tmp_carry__0_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[3]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__0_i_4_n_0\
    );
\cal_tmp_carry__0_i_5__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[6]\,
      I2 => \divisor0_reg_n_0_[7]\,
      O => \cal_tmp_carry__0_i_5__0_n_0\
    );
\cal_tmp_carry__0_i_6__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[5]\,
      I2 => \divisor0_reg_n_0_[6]\,
      O => \cal_tmp_carry__0_i_6__0_n_0\
    );
\cal_tmp_carry__0_i_7__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[4]\,
      I2 => \divisor0_reg_n_0_[5]\,
      O => \cal_tmp_carry__0_i_7__0_n_0\
    );
\cal_tmp_carry__0_i_8__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[3]\,
      I2 => \divisor0_reg_n_0_[4]\,
      O => \cal_tmp_carry__0_i_8__0_n_0\
    );
\cal_tmp_carry__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__0_n_0\,
      CO(3) => \cal_tmp_carry__1_n_0\,
      CO(2) => \cal_tmp_carry__1_n_1\,
      CO(1) => \cal_tmp_carry__1_n_2\,
      CO(0) => \cal_tmp_carry__1_n_3\,
      CYINIT => '0',
      DI(3) => \cal_tmp_carry__1_i_1_n_0\,
      DI(2) => \cal_tmp_carry__1_i_2_n_0\,
      DI(1) => \cal_tmp_carry__1_i_3_n_0\,
      DI(0) => \cal_tmp_carry__1_i_4_n_0\,
      O(3) => \cal_tmp_carry__1_n_4\,
      O(2) => \cal_tmp_carry__1_n_5\,
      O(1) => \cal_tmp_carry__1_n_6\,
      O(0) => \cal_tmp_carry__1_n_7\,
      S(3) => \cal_tmp_carry__1_i_5_n_0\,
      S(2) => \cal_tmp_carry__1_i_6_n_0\,
      S(1) => \cal_tmp_carry__1_i_7_n_0\,
      S(0) => \cal_tmp_carry__1_i_8_n_0\
    );
\cal_tmp_carry__1_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[10]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__1_i_1_n_0\
    );
\cal_tmp_carry__1_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[9]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__1_i_2_n_0\
    );
\cal_tmp_carry__1_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[8]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__1_i_3_n_0\
    );
\cal_tmp_carry__1_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[7]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__1_i_4_n_0\
    );
\cal_tmp_carry__1_i_5\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[10]\,
      I2 => \divisor0_reg_n_0_[11]\,
      O => \cal_tmp_carry__1_i_5_n_0\
    );
\cal_tmp_carry__1_i_6\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[9]\,
      I2 => \divisor0_reg_n_0_[10]\,
      O => \cal_tmp_carry__1_i_6_n_0\
    );
\cal_tmp_carry__1_i_7\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[8]\,
      I2 => \divisor0_reg_n_0_[9]\,
      O => \cal_tmp_carry__1_i_7_n_0\
    );
\cal_tmp_carry__1_i_8\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[7]\,
      I2 => \divisor0_reg_n_0_[8]\,
      O => \cal_tmp_carry__1_i_8_n_0\
    );
\cal_tmp_carry__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__1_n_0\,
      CO(3) => \cal_tmp_carry__2_n_0\,
      CO(2) => \cal_tmp_carry__2_n_1\,
      CO(1) => \cal_tmp_carry__2_n_2\,
      CO(0) => \cal_tmp_carry__2_n_3\,
      CYINIT => '0',
      DI(3) => \cal_tmp_carry__2_i_1_n_0\,
      DI(2) => \cal_tmp_carry__2_i_2_n_0\,
      DI(1) => \cal_tmp_carry__2_i_3_n_0\,
      DI(0) => \cal_tmp_carry__2_i_4_n_0\,
      O(3) => \cal_tmp_carry__2_n_4\,
      O(2) => \cal_tmp_carry__2_n_5\,
      O(1) => \cal_tmp_carry__2_n_6\,
      O(0) => \cal_tmp_carry__2_n_7\,
      S(3) => \cal_tmp_carry__2_i_5_n_0\,
      S(2) => \cal_tmp_carry__2_i_6_n_0\,
      S(1) => \cal_tmp_carry__2_i_7_n_0\,
      S(0) => \cal_tmp_carry__2_i_8_n_0\
    );
\cal_tmp_carry__2_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[14]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__2_i_1_n_0\
    );
\cal_tmp_carry__2_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[13]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__2_i_2_n_0\
    );
\cal_tmp_carry__2_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[12]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__2_i_3_n_0\
    );
\cal_tmp_carry__2_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[11]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__2_i_4_n_0\
    );
\cal_tmp_carry__2_i_5\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[14]\,
      I2 => \divisor0_reg_n_0_[15]\,
      O => \cal_tmp_carry__2_i_5_n_0\
    );
\cal_tmp_carry__2_i_6\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[13]\,
      I2 => \divisor0_reg_n_0_[14]\,
      O => \cal_tmp_carry__2_i_6_n_0\
    );
\cal_tmp_carry__2_i_7\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[12]\,
      I2 => \divisor0_reg_n_0_[13]\,
      O => \cal_tmp_carry__2_i_7_n_0\
    );
\cal_tmp_carry__2_i_8\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[11]\,
      I2 => \divisor0_reg_n_0_[12]\,
      O => \cal_tmp_carry__2_i_8_n_0\
    );
\cal_tmp_carry__3\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__2_n_0\,
      CO(3 downto 1) => \NLW_cal_tmp_carry__3_CO_UNCONNECTED\(3 downto 1),
      CO(0) => p_2_out(0),
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \cal_tmp_carry__3_i_1_n_0\,
      O(3 downto 2) => \NLW_cal_tmp_carry__3_O_UNCONNECTED\(3 downto 2),
      O(1) => p_0_in,
      O(0) => \NLW_cal_tmp_carry__3_O_UNCONNECTED\(0),
      S(3 downto 1) => B"001",
      S(0) => \cal_tmp_carry__3_i_2__0_n_0\
    );
\cal_tmp_carry__3_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[15]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \cal_tmp_carry__3_i_1_n_0\
    );
\cal_tmp_carry__3_i_2__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[15]\,
      I2 => \divisor0_reg_n_0_[16]\,
      O => \cal_tmp_carry__3_i_2__0_n_0\
    );
cal_tmp_carry_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[2]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => cal_tmp_carry_i_1_n_0
    );
cal_tmp_carry_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[1]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => cal_tmp_carry_i_2_n_0
    );
cal_tmp_carry_i_3: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[0]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => cal_tmp_carry_i_3_n_0
    );
\cal_tmp_carry_i_4__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[2]\,
      I2 => \divisor0_reg_n_0_[3]\,
      O => \cal_tmp_carry_i_4__0_n_0\
    );
\cal_tmp_carry_i_5__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[1]\,
      I2 => \divisor0_reg_n_0_[2]\,
      O => \cal_tmp_carry_i_5__1_n_0\
    );
\cal_tmp_carry_i_6__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \dividend_tmp_reg[15]_0\,
      I1 => \remd_tmp_reg_n_0_[0]\,
      I2 => \divisor0_reg_n_0_[1]\,
      O => \cal_tmp_carry_i_6__0_n_0\
    );
\cal_tmp_carry_i_7__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"2D"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[16]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => \divisor0_reg_n_0_[0]\,
      O => \cal_tmp_carry_i_7__0_n_0\
    );
\dividend_tmp[10]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[9]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \dividend_tmp[10]_i_1_n_0\
    );
\dividend_tmp[14]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[13]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \dividend_tmp[14]_i_1_n_0\
    );
\dividend_tmp[16]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[15]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \dividend_tmp[16]_i_1_n_0\
    );
\dividend_tmp[4]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[3]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \dividend_tmp[4]_i_1_n_0\
    );
\dividend_tmp[6]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[5]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \dividend_tmp[6]_i_1_n_0\
    );
\dividend_tmp[9]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[8]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => \dividend_tmp[9]_i_1_n_0\
    );
dividend_tmp_mux: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[16]\,
      I1 => \dividend_tmp_reg[15]_0\,
      O => dividend_tmp_mux_n_0
    );
\dividend_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_2_out(0),
      Q => \^dividend_tmp_reg[0]_0\(0),
      R => '0'
    );
\dividend_tmp_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[10]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[10]\,
      R => '0'
    );
\dividend_tmp_reg[11]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp_reg_n_0_[10]\,
      Q => \dividend_tmp_reg_n_0_[11]\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[12]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp_reg_n_0_[11]\,
      Q => \dividend_tmp_reg_n_0_[12]\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[13]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp_reg_n_0_[12]\,
      Q => \dividend_tmp_reg_n_0_[13]\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[14]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[14]\,
      R => '0'
    );
\dividend_tmp_reg[15]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp_reg_n_0_[14]\,
      Q => \dividend_tmp_reg_n_0_[15]\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[16]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[16]\,
      R => '0'
    );
\dividend_tmp_reg[1]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \^dividend_tmp_reg[0]_0\(0),
      Q => \^dividend_tmp_reg[1]_0\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[2]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \^dividend_tmp_reg[1]_0\,
      Q => \^dividend_tmp_reg[2]_0\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[3]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \^dividend_tmp_reg[2]_0\,
      Q => \dividend_tmp_reg_n_0_[3]\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[4]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[4]\,
      R => '0'
    );
\dividend_tmp_reg[5]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp_reg_n_0_[4]\,
      Q => \dividend_tmp_reg_n_0_[5]\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[6]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[6]\,
      R => '0'
    );
\dividend_tmp_reg[7]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp_reg_n_0_[6]\,
      Q => \dividend_tmp_reg_n_0_[7]\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[8]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp_reg_n_0_[7]\,
      Q => \dividend_tmp_reg_n_0_[8]\,
      S => \dividend_tmp_reg[15]_0\
    );
\dividend_tmp_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[9]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[9]\,
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
      D => D(9),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(10),
      Q => \divisor0_reg_n_0_[11]\,
      R => '0'
    );
\divisor0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(11),
      Q => \divisor0_reg_n_0_[12]\,
      R => '0'
    );
\divisor0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(12),
      Q => \divisor0_reg_n_0_[13]\,
      R => '0'
    );
\divisor0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(13),
      Q => \divisor0_reg_n_0_[14]\,
      R => '0'
    );
\divisor0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(14),
      Q => \divisor0_reg_n_0_[15]\,
      R => '0'
    );
\divisor0_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(15),
      Q => \divisor0_reg_n_0_[16]\,
      R => '0'
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(0),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(1),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(2),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(3),
      Q => \divisor0_reg_n_0_[4]\,
      R => '0'
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(4),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(5),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(6),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(7),
      Q => \divisor0_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(8),
      Q => \divisor0_reg_n_0_[9]\,
      R => '0'
    );
\remd_tmp[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \dividend_tmp_reg_n_0_[16]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => cal_tmp_carry_n_7,
      O => \remd_tmp[0]_i_1_n_0\
    );
\remd_tmp[10]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[9]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_5\,
      O => \remd_tmp[10]_i_1_n_0\
    );
\remd_tmp[11]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[10]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_4\,
      O => \remd_tmp[11]_i_1_n_0\
    );
\remd_tmp[12]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[11]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_7\,
      O => \remd_tmp[12]_i_1_n_0\
    );
\remd_tmp[13]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[12]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_6\,
      O => \remd_tmp[13]_i_1_n_0\
    );
\remd_tmp[14]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[13]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_5\,
      O => \remd_tmp[14]_i_1_n_0\
    );
\remd_tmp[15]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[14]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_4\,
      O => \remd_tmp[15]_i_1_n_0\
    );
\remd_tmp[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[0]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => cal_tmp_carry_n_6,
      O => \remd_tmp[1]_i_1_n_0\
    );
\remd_tmp[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[1]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => cal_tmp_carry_n_5,
      O => \remd_tmp[2]_i_1_n_0\
    );
\remd_tmp[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[2]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => cal_tmp_carry_n_4,
      O => \remd_tmp[3]_i_1_n_0\
    );
\remd_tmp[4]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[3]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__0_n_7\,
      O => \remd_tmp[4]_i_1_n_0\
    );
\remd_tmp[5]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[4]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__0_n_6\,
      O => \remd_tmp[5]_i_1_n_0\
    );
\remd_tmp[6]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[5]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__0_n_5\,
      O => \remd_tmp[6]_i_1_n_0\
    );
\remd_tmp[7]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[6]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__0_n_4\,
      O => \remd_tmp[7]_i_1_n_0\
    );
\remd_tmp[8]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[7]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_7\,
      O => \remd_tmp[8]_i_1_n_0\
    );
\remd_tmp[9]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[8]\,
      I1 => \dividend_tmp_reg[15]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_6\,
      O => \remd_tmp[9]_i_1_n_0\
    );
\remd_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[0]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[0]\,
      R => '0'
    );
\remd_tmp_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[10]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[10]\,
      R => '0'
    );
\remd_tmp_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[11]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[11]\,
      R => '0'
    );
\remd_tmp_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[12]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[12]\,
      R => '0'
    );
\remd_tmp_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[13]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[13]\,
      R => '0'
    );
\remd_tmp_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[14]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[14]\,
      R => '0'
    );
\remd_tmp_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[15]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[15]\,
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
\remd_tmp_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[8]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[8]\,
      R => '0'
    );
\remd_tmp_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[9]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[9]\,
      R => '0'
    );
\sign0[1]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => Q(1),
      O => sign_i(1)
    );
\sign0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => sign_i(1),
      Q => \0\,
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div_u is
  port (
    \r_stage_reg[16]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    O19 : out STD_LOGIC_VECTOR ( 15 downto 0 );
    ap_rst : in STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    \r_stage_reg[16]_1\ : in STD_LOGIC;
    D : in STD_LOGIC_VECTOR ( 14 downto 0 );
    \divisor0_reg[9]_0\ : in STD_LOGIC_VECTOR ( 4 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div_u : entity is "fn1_srem_16ns_11ns_16_20_seq_1_div_u";
end bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div_u;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div_u is
  signal \cal_tmp_carry__0_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_5__2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_6__2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_7__2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_8_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_3__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_5__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_6__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_7\ : STD_LOGIC;
  signal cal_tmp_carry_i_1_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_2_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_3_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_4_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_5_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_6_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_7_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_1 : STD_LOGIC;
  signal cal_tmp_carry_n_2 : STD_LOGIC;
  signal cal_tmp_carry_n_3 : STD_LOGIC;
  signal cal_tmp_carry_n_4 : STD_LOGIC;
  signal cal_tmp_carry_n_5 : STD_LOGIC;
  signal cal_tmp_carry_n_6 : STD_LOGIC;
  signal cal_tmp_carry_n_7 : STD_LOGIC;
  signal \dividend0_reg_n_0_[0]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[10]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[11]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[12]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[13]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[14]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[15]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[1]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[2]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[3]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[4]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[5]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[6]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[7]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[8]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[9]\ : STD_LOGIC;
  signal \dividend_tmp[10]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[11]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[12]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[13]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[14]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[15]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[7]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[8]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[9]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[0]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[10]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[11]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[12]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[13]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[14]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[15]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[1]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[2]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[3]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[4]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[5]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[6]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[7]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[8]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[9]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[8]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal p_0_in : STD_LOGIC;
  signal p_2_out : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12_n_0\ : STD_LOGIC;
  signal \r_stage_reg[15]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0\ : STD_LOGIC;
  signal r_stage_reg_gate_n_0 : STD_LOGIC;
  signal \r_stage_reg_n_0_[0]\ : STD_LOGIC;
  signal \remd[11]_i_2__0_n_0\ : STD_LOGIC;
  signal \remd[11]_i_3__0_n_0\ : STD_LOGIC;
  signal \remd[11]_i_4__0_n_0\ : STD_LOGIC;
  signal \remd[11]_i_5__0_n_0\ : STD_LOGIC;
  signal \remd[15]_i_2__0_n_0\ : STD_LOGIC;
  signal \remd[15]_i_3__0_n_0\ : STD_LOGIC;
  signal \remd[15]_i_4__0_n_0\ : STD_LOGIC;
  signal \remd[15]_i_5__0_n_0\ : STD_LOGIC;
  signal \remd[3]_i_2__0_n_0\ : STD_LOGIC;
  signal \remd[3]_i_3__0_n_0\ : STD_LOGIC;
  signal \remd[3]_i_4__0_n_0\ : STD_LOGIC;
  signal \remd[3]_i_5__0_n_0\ : STD_LOGIC;
  signal \remd[7]_i_2__0_n_0\ : STD_LOGIC;
  signal \remd[7]_i_3__0_n_0\ : STD_LOGIC;
  signal \remd[7]_i_4__0_n_0\ : STD_LOGIC;
  signal \remd[7]_i_5__0_n_0\ : STD_LOGIC;
  signal \remd_reg[11]_i_1__0_n_0\ : STD_LOGIC;
  signal \remd_reg[11]_i_1__0_n_1\ : STD_LOGIC;
  signal \remd_reg[11]_i_1__0_n_2\ : STD_LOGIC;
  signal \remd_reg[11]_i_1__0_n_3\ : STD_LOGIC;
  signal \remd_reg[15]_i_1__0_n_1\ : STD_LOGIC;
  signal \remd_reg[15]_i_1__0_n_2\ : STD_LOGIC;
  signal \remd_reg[15]_i_1__0_n_3\ : STD_LOGIC;
  signal \remd_reg[3]_i_1__0_n_0\ : STD_LOGIC;
  signal \remd_reg[3]_i_1__0_n_1\ : STD_LOGIC;
  signal \remd_reg[3]_i_1__0_n_2\ : STD_LOGIC;
  signal \remd_reg[3]_i_1__0_n_3\ : STD_LOGIC;
  signal \remd_reg[7]_i_1__0_n_0\ : STD_LOGIC;
  signal \remd_reg[7]_i_1__0_n_1\ : STD_LOGIC;
  signal \remd_reg[7]_i_1__0_n_2\ : STD_LOGIC;
  signal \remd_reg[7]_i_1__0_n_3\ : STD_LOGIC;
  signal \remd_tmp[0]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[10]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[11]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[12]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[13]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[14]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[15]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[7]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[8]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[9]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[0]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[10]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[11]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[12]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[13]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[14]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[15]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[1]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[2]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[3]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[4]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[5]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[6]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[7]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[8]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[9]\ : STD_LOGIC;
  signal \sign0_reg_n_0_[0]\ : STD_LOGIC;
  signal \NLW_cal_tmp_carry__3_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__3_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_remd_reg[15]_i_1__0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \dividend_tmp[10]_i_1\ : label is "soft_lutpair20";
  attribute SOFT_HLUTNM of \dividend_tmp[11]_i_1\ : label is "soft_lutpair21";
  attribute SOFT_HLUTNM of \dividend_tmp[12]_i_1\ : label is "soft_lutpair21";
  attribute SOFT_HLUTNM of \dividend_tmp[13]_i_1\ : label is "soft_lutpair22";
  attribute SOFT_HLUTNM of \dividend_tmp[14]_i_1\ : label is "soft_lutpair22";
  attribute SOFT_HLUTNM of \dividend_tmp[1]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \dividend_tmp[2]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \dividend_tmp[3]_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \dividend_tmp[4]_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \dividend_tmp[5]_i_1\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \dividend_tmp[6]_i_1\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \dividend_tmp[7]_i_1\ : label is "soft_lutpair19";
  attribute SOFT_HLUTNM of \dividend_tmp[8]_i_1\ : label is "soft_lutpair19";
  attribute SOFT_HLUTNM of \dividend_tmp[9]_i_1\ : label is "soft_lutpair20";
  attribute srl_bus_name : string;
  attribute srl_bus_name of \r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12\ : label is "inst/\srem_16ns_11ns_16_20_seq_1_U4/fn1_srem_16ns_11ns_16_20_seq_1_div_U/fn1_srem_16ns_11ns_16_20_seq_1_div_u_0/r_stage_reg ";
  attribute srl_name : string;
  attribute srl_name of \r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12\ : label is "inst/\srem_16ns_11ns_16_20_seq_1_U4/fn1_srem_16ns_11ns_16_20_seq_1_div_U/fn1_srem_16ns_11ns_16_20_seq_1_div_u_0/r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12 ";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \remd_reg[11]_i_1__0\ : label is 35;
  attribute ADDER_THRESHOLD of \remd_reg[15]_i_1__0\ : label is 35;
  attribute ADDER_THRESHOLD of \remd_reg[3]_i_1__0\ : label is 35;
  attribute ADDER_THRESHOLD of \remd_reg[7]_i_1__0\ : label is 35;
begin
cal_tmp_carry: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => cal_tmp_carry_n_0,
      CO(2) => cal_tmp_carry_n_1,
      CO(1) => cal_tmp_carry_n_2,
      CO(0) => cal_tmp_carry_n_3,
      CYINIT => '1',
      DI(3) => cal_tmp_carry_i_1_n_0,
      DI(2) => '1',
      DI(1) => cal_tmp_carry_i_2_n_0,
      DI(0) => cal_tmp_carry_i_3_n_0,
      O(3) => cal_tmp_carry_n_4,
      O(2) => cal_tmp_carry_n_5,
      O(1) => cal_tmp_carry_n_6,
      O(0) => cal_tmp_carry_n_7,
      S(3) => cal_tmp_carry_i_4_n_0,
      S(2) => cal_tmp_carry_i_5_n_0,
      S(1) => cal_tmp_carry_i_6_n_0,
      S(0) => cal_tmp_carry_i_7_n_0
    );
\cal_tmp_carry__0\: unisim.vcomponents.CARRY4
     port map (
      CI => cal_tmp_carry_n_0,
      CO(3) => \cal_tmp_carry__0_n_0\,
      CO(2) => \cal_tmp_carry__0_n_1\,
      CO(1) => \cal_tmp_carry__0_n_2\,
      CO(0) => \cal_tmp_carry__0_n_3\,
      CYINIT => '0',
      DI(3) => \cal_tmp_carry__0_i_1_n_0\,
      DI(2) => \cal_tmp_carry__0_i_2_n_0\,
      DI(1) => \cal_tmp_carry__0_i_3_n_0\,
      DI(0) => \cal_tmp_carry__0_i_4_n_0\,
      O(3) => \cal_tmp_carry__0_n_4\,
      O(2) => \cal_tmp_carry__0_n_5\,
      O(1) => \cal_tmp_carry__0_n_6\,
      O(0) => \cal_tmp_carry__0_n_7\,
      S(3) => \cal_tmp_carry__0_i_5__2_n_0\,
      S(2) => \cal_tmp_carry__0_i_6__2_n_0\,
      S(1) => \cal_tmp_carry__0_i_7__2_n_0\,
      S(0) => \cal_tmp_carry__0_i_8_n_0\
    );
\cal_tmp_carry__0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[6]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => \cal_tmp_carry__0_i_1_n_0\
    );
\cal_tmp_carry__0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[5]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => \cal_tmp_carry__0_i_2_n_0\
    );
\cal_tmp_carry__0_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[4]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => \cal_tmp_carry__0_i_3_n_0\
    );
\cal_tmp_carry__0_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[3]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => \cal_tmp_carry__0_i_4_n_0\
    );
\cal_tmp_carry__0_i_5__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[6]\,
      I2 => \divisor0_reg_n_0_[7]\,
      O => \cal_tmp_carry__0_i_5__2_n_0\
    );
\cal_tmp_carry__0_i_6__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[5]\,
      I2 => \divisor0_reg_n_0_[6]\,
      O => \cal_tmp_carry__0_i_6__2_n_0\
    );
\cal_tmp_carry__0_i_7__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[4]\,
      I2 => \divisor0_reg_n_0_[5]\,
      O => \cal_tmp_carry__0_i_7__2_n_0\
    );
\cal_tmp_carry__0_i_8\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[3]\,
      I1 => \r_stage_reg_n_0_[0]\,
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
      DI(3 downto 2) => B"11",
      DI(1) => \cal_tmp_carry__1_i_1_n_0\,
      DI(0) => \cal_tmp_carry__1_i_2_n_0\,
      O(3) => \cal_tmp_carry__1_n_4\,
      O(2) => \cal_tmp_carry__1_n_5\,
      O(1) => \cal_tmp_carry__1_n_6\,
      O(0) => \cal_tmp_carry__1_n_7\,
      S(3) => \cal_tmp_carry__1_i_3__0_n_0\,
      S(2) => \cal_tmp_carry__1_i_4_n_0\,
      S(1) => \cal_tmp_carry__1_i_5__1_n_0\,
      S(0) => \cal_tmp_carry__1_i_6__1_n_0\
    );
\cal_tmp_carry__1_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[8]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => \cal_tmp_carry__1_i_1_n_0\
    );
\cal_tmp_carry__1_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[7]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => \cal_tmp_carry__1_i_2_n_0\
    );
\cal_tmp_carry__1_i_3__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[10]\,
      O => \cal_tmp_carry__1_i_3__0_n_0\
    );
\cal_tmp_carry__1_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[9]\,
      O => \cal_tmp_carry__1_i_4_n_0\
    );
\cal_tmp_carry__1_i_5__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[8]\,
      I2 => \divisor0_reg_n_0_[9]\,
      O => \cal_tmp_carry__1_i_5__1_n_0\
    );
\cal_tmp_carry__1_i_6__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[7]\,
      I2 => \divisor0_reg_n_0_[8]\,
      O => \cal_tmp_carry__1_i_6__1_n_0\
    );
\cal_tmp_carry__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__1_n_0\,
      CO(3) => p_2_out(0),
      CO(2) => \cal_tmp_carry__2_n_1\,
      CO(1) => \cal_tmp_carry__2_n_2\,
      CO(0) => \cal_tmp_carry__2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"1111",
      O(3) => \cal_tmp_carry__2_n_4\,
      O(2) => \cal_tmp_carry__2_n_5\,
      O(1) => \cal_tmp_carry__2_n_6\,
      O(0) => \cal_tmp_carry__2_n_7\,
      S(3) => \cal_tmp_carry__2_i_1_n_0\,
      S(2) => \cal_tmp_carry__2_i_2_n_0\,
      S(1) => \cal_tmp_carry__2_i_3_n_0\,
      S(0) => \cal_tmp_carry__2_i_4_n_0\
    );
\cal_tmp_carry__2_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[14]\,
      O => \cal_tmp_carry__2_i_1_n_0\
    );
\cal_tmp_carry__2_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[13]\,
      O => \cal_tmp_carry__2_i_2_n_0\
    );
\cal_tmp_carry__2_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[12]\,
      O => \cal_tmp_carry__2_i_3_n_0\
    );
\cal_tmp_carry__2_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[11]\,
      O => \cal_tmp_carry__2_i_4_n_0\
    );
\cal_tmp_carry__3\: unisim.vcomponents.CARRY4
     port map (
      CI => p_2_out(0),
      CO(3 downto 0) => \NLW_cal_tmp_carry__3_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_cal_tmp_carry__3_O_UNCONNECTED\(3 downto 1),
      O(0) => p_0_in,
      S(3 downto 0) => B"0001"
    );
cal_tmp_carry_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[2]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => cal_tmp_carry_i_1_n_0
    );
cal_tmp_carry_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[0]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => cal_tmp_carry_i_2_n_0
    );
cal_tmp_carry_i_3: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[15]\,
      I1 => \dividend_tmp_reg_n_0_[15]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => cal_tmp_carry_i_3_n_0
    );
cal_tmp_carry_i_4: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[2]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => cal_tmp_carry_i_4_n_0
    );
cal_tmp_carry_i_5: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[1]\,
      O => cal_tmp_carry_i_5_n_0
    );
cal_tmp_carry_i_6: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[0]\,
      I1 => \r_stage_reg_n_0_[0]\,
      O => cal_tmp_carry_i_6_n_0
    );
cal_tmp_carry_i_7: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[15]\,
      I1 => \dividend_tmp_reg_n_0_[15]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => cal_tmp_carry_i_7_n_0
    );
\dividend0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(0),
      Q => \dividend0_reg_n_0_[0]\,
      R => '0'
    );
\dividend0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(9),
      Q => \dividend0_reg_n_0_[10]\,
      R => '0'
    );
\dividend0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(10),
      Q => \dividend0_reg_n_0_[11]\,
      R => '0'
    );
\dividend0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(11),
      Q => \dividend0_reg_n_0_[12]\,
      R => '0'
    );
\dividend0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(12),
      Q => \dividend0_reg_n_0_[13]\,
      R => '0'
    );
\dividend0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(13),
      Q => \dividend0_reg_n_0_[14]\,
      R => '0'
    );
\dividend0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(14),
      Q => \dividend0_reg_n_0_[15]\,
      R => '0'
    );
\dividend0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(0),
      Q => \dividend0_reg_n_0_[1]\,
      R => '0'
    );
\dividend0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(1),
      Q => \dividend0_reg_n_0_[2]\,
      R => '0'
    );
\dividend0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(2),
      Q => \dividend0_reg_n_0_[3]\,
      R => '0'
    );
\dividend0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(3),
      Q => \dividend0_reg_n_0_[4]\,
      R => '0'
    );
\dividend0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(4),
      Q => \dividend0_reg_n_0_[5]\,
      R => '0'
    );
\dividend0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(5),
      Q => \dividend0_reg_n_0_[6]\,
      R => '0'
    );
\dividend0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(6),
      Q => \dividend0_reg_n_0_[7]\,
      R => '0'
    );
\dividend0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(7),
      Q => \dividend0_reg_n_0_[8]\,
      R => '0'
    );
\dividend0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(8),
      Q => \dividend0_reg_n_0_[9]\,
      R => '0'
    );
\dividend_tmp[10]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[9]\,
      I1 => \dividend_tmp_reg_n_0_[9]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[10]_i_1_n_0\
    );
\dividend_tmp[11]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[10]\,
      I1 => \dividend_tmp_reg_n_0_[10]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[11]_i_1_n_0\
    );
\dividend_tmp[12]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[11]\,
      I1 => \dividend_tmp_reg_n_0_[11]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[12]_i_1_n_0\
    );
\dividend_tmp[13]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[12]\,
      I1 => \dividend_tmp_reg_n_0_[12]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[13]_i_1_n_0\
    );
\dividend_tmp[14]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[13]\,
      I1 => \dividend_tmp_reg_n_0_[13]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[14]_i_1_n_0\
    );
\dividend_tmp[15]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[14]\,
      I1 => \dividend_tmp_reg_n_0_[14]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[15]_i_1_n_0\
    );
\dividend_tmp[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[0]\,
      I1 => \dividend_tmp_reg_n_0_[0]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[1]_i_1_n_0\
    );
\dividend_tmp[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[1]\,
      I1 => \dividend_tmp_reg_n_0_[1]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[2]_i_1_n_0\
    );
\dividend_tmp[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[2]\,
      I1 => \dividend_tmp_reg_n_0_[2]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[3]_i_1_n_0\
    );
\dividend_tmp[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[3]\,
      I1 => \dividend_tmp_reg_n_0_[3]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[4]_i_1_n_0\
    );
\dividend_tmp[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[4]\,
      I1 => \dividend_tmp_reg_n_0_[4]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[5]_i_1_n_0\
    );
\dividend_tmp[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[5]\,
      I1 => \dividend_tmp_reg_n_0_[5]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[6]_i_1_n_0\
    );
\dividend_tmp[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[6]\,
      I1 => \dividend_tmp_reg_n_0_[6]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[7]_i_1_n_0\
    );
\dividend_tmp[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[7]\,
      I1 => \dividend_tmp_reg_n_0_[7]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[8]_i_1_n_0\
    );
\dividend_tmp[9]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[8]\,
      I1 => \dividend_tmp_reg_n_0_[8]\,
      I2 => \r_stage_reg_n_0_[0]\,
      O => \dividend_tmp[9]_i_1_n_0\
    );
\dividend_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_2_out(0),
      Q => \dividend_tmp_reg_n_0_[0]\,
      R => '0'
    );
\dividend_tmp_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[10]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[10]\,
      R => '0'
    );
\dividend_tmp_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[11]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[11]\,
      R => '0'
    );
\dividend_tmp_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[12]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[12]\,
      R => '0'
    );
\dividend_tmp_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[13]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[13]\,
      R => '0'
    );
\dividend_tmp_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[14]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[14]\,
      R => '0'
    );
\dividend_tmp_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[15]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[15]\,
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
\dividend_tmp_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[9]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[9]\,
      R => '0'
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[9]_0\(0),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[9]_0\(1),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[9]_0\(2),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[9]_0\(3),
      Q => \divisor0_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[9]_0\(4),
      Q => \divisor0_reg_n_0_[9]\,
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
\r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12\: unisim.vcomponents.SRL16E
     port map (
      A0 => '1',
      A1 => '0',
      A2 => '1',
      A3 => '1',
      CE => '1',
      CLK => ap_clk,
      D => \r_stage_reg_n_0_[0]\,
      Q => \r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12_n_0\
    );
\r_stage_reg[15]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg[14]_srl14___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_12_n_0\,
      Q => \r_stage_reg[15]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0\,
      R => '0'
    );
\r_stage_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_gate_n_0,
      Q => \r_stage_reg[16]_0\(0),
      R => ap_rst
    );
r_stage_reg_gate: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \r_stage_reg[15]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0\,
      I1 => \r_stage_reg[16]_1\,
      O => r_stage_reg_gate_n_0
    );
\remd[11]_i_2__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[11]\,
      O => \remd[11]_i_2__0_n_0\
    );
\remd[11]_i_3__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[10]\,
      O => \remd[11]_i_3__0_n_0\
    );
\remd[11]_i_4__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[9]\,
      O => \remd[11]_i_4__0_n_0\
    );
\remd[11]_i_5__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[8]\,
      O => \remd[11]_i_5__0_n_0\
    );
\remd[15]_i_2__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[15]\,
      O => \remd[15]_i_2__0_n_0\
    );
\remd[15]_i_3__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[14]\,
      O => \remd[15]_i_3__0_n_0\
    );
\remd[15]_i_4__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[13]\,
      O => \remd[15]_i_4__0_n_0\
    );
\remd[15]_i_5__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[12]\,
      O => \remd[15]_i_5__0_n_0\
    );
\remd[3]_i_2__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[3]\,
      O => \remd[3]_i_2__0_n_0\
    );
\remd[3]_i_3__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[2]\,
      O => \remd[3]_i_3__0_n_0\
    );
\remd[3]_i_4__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[1]\,
      O => \remd[3]_i_4__0_n_0\
    );
\remd[3]_i_5__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[0]\,
      O => \remd[3]_i_5__0_n_0\
    );
\remd[7]_i_2__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[7]\,
      O => \remd[7]_i_2__0_n_0\
    );
\remd[7]_i_3__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[6]\,
      O => \remd[7]_i_3__0_n_0\
    );
\remd[7]_i_4__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[5]\,
      O => \remd[7]_i_4__0_n_0\
    );
\remd[7]_i_5__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[4]\,
      O => \remd[7]_i_5__0_n_0\
    );
\remd_reg[11]_i_1__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \remd_reg[7]_i_1__0_n_0\,
      CO(3) => \remd_reg[11]_i_1__0_n_0\,
      CO(2) => \remd_reg[11]_i_1__0_n_1\,
      CO(1) => \remd_reg[11]_i_1__0_n_2\,
      CO(0) => \remd_reg[11]_i_1__0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => O19(11 downto 8),
      S(3) => \remd[11]_i_2__0_n_0\,
      S(2) => \remd[11]_i_3__0_n_0\,
      S(1) => \remd[11]_i_4__0_n_0\,
      S(0) => \remd[11]_i_5__0_n_0\
    );
\remd_reg[15]_i_1__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \remd_reg[11]_i_1__0_n_0\,
      CO(3) => \NLW_remd_reg[15]_i_1__0_CO_UNCONNECTED\(3),
      CO(2) => \remd_reg[15]_i_1__0_n_1\,
      CO(1) => \remd_reg[15]_i_1__0_n_2\,
      CO(0) => \remd_reg[15]_i_1__0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => O19(15 downto 12),
      S(3) => \remd[15]_i_2__0_n_0\,
      S(2) => \remd[15]_i_3__0_n_0\,
      S(1) => \remd[15]_i_4__0_n_0\,
      S(0) => \remd[15]_i_5__0_n_0\
    );
\remd_reg[3]_i_1__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \remd_reg[3]_i_1__0_n_0\,
      CO(2) => \remd_reg[3]_i_1__0_n_1\,
      CO(1) => \remd_reg[3]_i_1__0_n_2\,
      CO(0) => \remd_reg[3]_i_1__0_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \sign0_reg_n_0_[0]\,
      O(3 downto 0) => O19(3 downto 0),
      S(3) => \remd[3]_i_2__0_n_0\,
      S(2) => \remd[3]_i_3__0_n_0\,
      S(1) => \remd[3]_i_4__0_n_0\,
      S(0) => \remd[3]_i_5__0_n_0\
    );
\remd_reg[7]_i_1__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \remd_reg[3]_i_1__0_n_0\,
      CO(3) => \remd_reg[7]_i_1__0_n_0\,
      CO(2) => \remd_reg[7]_i_1__0_n_1\,
      CO(1) => \remd_reg[7]_i_1__0_n_2\,
      CO(0) => \remd_reg[7]_i_1__0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => O19(7 downto 4),
      S(3) => \remd[7]_i_2__0_n_0\,
      S(2) => \remd[7]_i_3__0_n_0\,
      S(1) => \remd[7]_i_4__0_n_0\,
      S(0) => \remd[7]_i_5__0_n_0\
    );
\remd_tmp[0]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"ACFFAC00"
    )
        port map (
      I0 => \dividend0_reg_n_0_[15]\,
      I1 => \dividend_tmp_reg_n_0_[15]\,
      I2 => \r_stage_reg_n_0_[0]\,
      I3 => p_0_in,
      I4 => cal_tmp_carry_n_7,
      O => \remd_tmp[0]_i_1_n_0\
    );
\remd_tmp[10]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[9]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_5\,
      O => \remd_tmp[10]_i_1_n_0\
    );
\remd_tmp[11]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[10]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_4\,
      O => \remd_tmp[11]_i_1_n_0\
    );
\remd_tmp[12]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[11]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_7\,
      O => \remd_tmp[12]_i_1_n_0\
    );
\remd_tmp[13]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[12]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_6\,
      O => \remd_tmp[13]_i_1_n_0\
    );
\remd_tmp[14]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[13]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_5\,
      O => \remd_tmp[14]_i_1_n_0\
    );
\remd_tmp[15]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[14]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_4\,
      O => \remd_tmp[15]_i_1_n_0\
    );
\remd_tmp[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[0]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => cal_tmp_carry_n_6,
      O => \remd_tmp[1]_i_1_n_0\
    );
\remd_tmp[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[1]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => cal_tmp_carry_n_5,
      O => \remd_tmp[2]_i_1_n_0\
    );
\remd_tmp[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[2]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => cal_tmp_carry_n_4,
      O => \remd_tmp[3]_i_1_n_0\
    );
\remd_tmp[4]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[3]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__0_n_7\,
      O => \remd_tmp[4]_i_1_n_0\
    );
\remd_tmp[5]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[4]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__0_n_6\,
      O => \remd_tmp[5]_i_1_n_0\
    );
\remd_tmp[6]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[5]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__0_n_5\,
      O => \remd_tmp[6]_i_1_n_0\
    );
\remd_tmp[7]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[6]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__0_n_4\,
      O => \remd_tmp[7]_i_1_n_0\
    );
\remd_tmp[8]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[7]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_7\,
      O => \remd_tmp[8]_i_1_n_0\
    );
\remd_tmp[9]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[8]\,
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_6\,
      O => \remd_tmp[9]_i_1_n_0\
    );
\remd_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[0]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[0]\,
      R => '0'
    );
\remd_tmp_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[10]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[10]\,
      R => '0'
    );
\remd_tmp_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[11]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[11]\,
      R => '0'
    );
\remd_tmp_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[12]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[12]\,
      R => '0'
    );
\remd_tmp_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[13]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[13]\,
      R => '0'
    );
\remd_tmp_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[14]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[14]\,
      R => '0'
    );
\remd_tmp_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[15]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[15]\,
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
\remd_tmp_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[8]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[8]\,
      R => '0'
    );
\remd_tmp_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[9]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[9]\,
      R => '0'
    );
\sign0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(1),
      Q => \sign0_reg_n_0_[0]\,
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div_u is
  port (
    \r_stage_reg[0]_0\ : out STD_LOGIC;
    r_stage_reg_r_5_0 : out STD_LOGIC;
    r_stage_reg_r_13_0 : out STD_LOGIC;
    \r_stage_reg[17]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    D : out STD_LOGIC_VECTOR ( 15 downto 0 );
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    \dividend0_reg[16]_0\ : in STD_LOGIC_VECTOR ( 16 downto 0 );
    \divisor0_reg[30]_0\ : in STD_LOGIC_VECTOR ( 29 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div_u : entity is "fn1_srem_17s_32ns_16_21_seq_1_div_u";
end bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div_u;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div_u is
  signal \cal_tmp_carry__0_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_5__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_6__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_7__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_i_8__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__0_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_5__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_6__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_7__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_i_8__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_5__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_6__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_7__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_i_8__0_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_1\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_3\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_4\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_5\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_6\ : STD_LOGIC;
  signal \cal_tmp_carry__2_n_7\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_4_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__3_i_5_n_0\ : STD_LOGIC;
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
  signal \cal_tmp_carry__6_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__6_n_3\ : STD_LOGIC;
  signal cal_tmp_carry_i_1_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_2_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_3_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_4_n_0 : STD_LOGIC;
  signal \cal_tmp_carry_i_5__2_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry_i_6__1_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry_i_7__1_n_0\ : STD_LOGIC;
  signal cal_tmp_carry_i_8_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_1 : STD_LOGIC;
  signal cal_tmp_carry_n_2 : STD_LOGIC;
  signal cal_tmp_carry_n_3 : STD_LOGIC;
  signal cal_tmp_carry_n_4 : STD_LOGIC;
  signal cal_tmp_carry_n_5 : STD_LOGIC;
  signal cal_tmp_carry_n_6 : STD_LOGIC;
  signal cal_tmp_carry_n_7 : STD_LOGIC;
  signal \dividend0_reg_n_0_[0]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[10]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[11]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[12]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[13]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[14]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[15]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[16]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[1]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[2]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[3]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[4]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[5]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[6]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[7]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[8]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[9]\ : STD_LOGIC;
  signal \dividend_tmp[10]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[11]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[12]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[13]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[14]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[15]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[16]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[7]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[8]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp[9]_i_1_n_0\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[0]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[10]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[11]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[12]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[13]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[14]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[15]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[16]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[1]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[2]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[3]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[4]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[5]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[6]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[7]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[8]\ : STD_LOGIC;
  signal \dividend_tmp_reg_n_0_[9]\ : STD_LOGIC;
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
  signal \divisor0_reg_n_0_[3]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[4]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[8]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal p_0_in : STD_LOGIC;
  signal p_2_out : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \^r_stage_reg[0]_0\ : STD_LOGIC;
  signal \r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0\ : STD_LOGIC;
  signal \r_stage_reg[16]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_14_n_0\ : STD_LOGIC;
  signal r_stage_reg_gate_n_0 : STD_LOGIC;
  signal r_stage_reg_r_0_n_0 : STD_LOGIC;
  signal r_stage_reg_r_10_n_0 : STD_LOGIC;
  signal r_stage_reg_r_11_n_0 : STD_LOGIC;
  signal r_stage_reg_r_12_n_0 : STD_LOGIC;
  signal \^r_stage_reg_r_13_0\ : STD_LOGIC;
  signal r_stage_reg_r_14_n_0 : STD_LOGIC;
  signal r_stage_reg_r_1_n_0 : STD_LOGIC;
  signal r_stage_reg_r_2_n_0 : STD_LOGIC;
  signal r_stage_reg_r_3_n_0 : STD_LOGIC;
  signal r_stage_reg_r_4_n_0 : STD_LOGIC;
  signal \^r_stage_reg_r_5_0\ : STD_LOGIC;
  signal r_stage_reg_r_6_n_0 : STD_LOGIC;
  signal r_stage_reg_r_7_n_0 : STD_LOGIC;
  signal r_stage_reg_r_8_n_0 : STD_LOGIC;
  signal r_stage_reg_r_9_n_0 : STD_LOGIC;
  signal r_stage_reg_r_n_0 : STD_LOGIC;
  signal \remd[11]_i_2_n_0\ : STD_LOGIC;
  signal \remd[11]_i_3_n_0\ : STD_LOGIC;
  signal \remd[11]_i_4_n_0\ : STD_LOGIC;
  signal \remd[11]_i_5_n_0\ : STD_LOGIC;
  signal \remd[15]_i_2_n_0\ : STD_LOGIC;
  signal \remd[15]_i_3_n_0\ : STD_LOGIC;
  signal \remd[15]_i_4_n_0\ : STD_LOGIC;
  signal \remd[15]_i_5_n_0\ : STD_LOGIC;
  signal \remd[3]_i_2_n_0\ : STD_LOGIC;
  signal \remd[3]_i_3_n_0\ : STD_LOGIC;
  signal \remd[3]_i_4_n_0\ : STD_LOGIC;
  signal \remd[3]_i_5_n_0\ : STD_LOGIC;
  signal \remd[7]_i_2_n_0\ : STD_LOGIC;
  signal \remd[7]_i_3_n_0\ : STD_LOGIC;
  signal \remd[7]_i_4_n_0\ : STD_LOGIC;
  signal \remd[7]_i_5_n_0\ : STD_LOGIC;
  signal \remd_reg[11]_i_1_n_0\ : STD_LOGIC;
  signal \remd_reg[11]_i_1_n_1\ : STD_LOGIC;
  signal \remd_reg[11]_i_1_n_2\ : STD_LOGIC;
  signal \remd_reg[11]_i_1_n_3\ : STD_LOGIC;
  signal \remd_reg[15]_i_1_n_1\ : STD_LOGIC;
  signal \remd_reg[15]_i_1_n_2\ : STD_LOGIC;
  signal \remd_reg[15]_i_1_n_3\ : STD_LOGIC;
  signal \remd_reg[3]_i_1_n_0\ : STD_LOGIC;
  signal \remd_reg[3]_i_1_n_1\ : STD_LOGIC;
  signal \remd_reg[3]_i_1_n_2\ : STD_LOGIC;
  signal \remd_reg[3]_i_1_n_3\ : STD_LOGIC;
  signal \remd_reg[7]_i_1_n_0\ : STD_LOGIC;
  signal \remd_reg[7]_i_1_n_1\ : STD_LOGIC;
  signal \remd_reg[7]_i_1_n_2\ : STD_LOGIC;
  signal \remd_reg[7]_i_1_n_3\ : STD_LOGIC;
  signal \remd_tmp[0]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[10]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[11]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[12]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[13]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[14]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[15]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[7]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[8]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[9]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[0]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[10]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[11]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[12]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[13]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[14]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[15]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[1]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[2]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[3]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[4]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[5]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[6]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[7]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[8]\ : STD_LOGIC;
  signal \remd_tmp_reg_n_0_[9]\ : STD_LOGIC;
  signal \sign0_reg_n_0_[0]\ : STD_LOGIC;
  signal \NLW_cal_tmp_carry__3_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__4_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__5_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_cal_tmp_carry__6_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_cal_tmp_carry__6_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal \NLW_remd_reg[15]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \dividend_tmp[10]_i_1\ : label is "soft_lutpair36";
  attribute SOFT_HLUTNM of \dividend_tmp[11]_i_1\ : label is "soft_lutpair37";
  attribute SOFT_HLUTNM of \dividend_tmp[12]_i_1\ : label is "soft_lutpair37";
  attribute SOFT_HLUTNM of \dividend_tmp[13]_i_1\ : label is "soft_lutpair38";
  attribute SOFT_HLUTNM of \dividend_tmp[14]_i_1\ : label is "soft_lutpair38";
  attribute SOFT_HLUTNM of \dividend_tmp[15]_i_1\ : label is "soft_lutpair39";
  attribute SOFT_HLUTNM of \dividend_tmp[16]_i_1\ : label is "soft_lutpair39";
  attribute SOFT_HLUTNM of \dividend_tmp[1]_i_1\ : label is "soft_lutpair32";
  attribute SOFT_HLUTNM of \dividend_tmp[2]_i_1\ : label is "soft_lutpair32";
  attribute SOFT_HLUTNM of \dividend_tmp[3]_i_1\ : label is "soft_lutpair33";
  attribute SOFT_HLUTNM of \dividend_tmp[4]_i_1\ : label is "soft_lutpair33";
  attribute SOFT_HLUTNM of \dividend_tmp[5]_i_1\ : label is "soft_lutpair34";
  attribute SOFT_HLUTNM of \dividend_tmp[6]_i_1\ : label is "soft_lutpair34";
  attribute SOFT_HLUTNM of \dividend_tmp[7]_i_1\ : label is "soft_lutpair35";
  attribute SOFT_HLUTNM of \dividend_tmp[8]_i_1\ : label is "soft_lutpair35";
  attribute SOFT_HLUTNM of \dividend_tmp[9]_i_1\ : label is "soft_lutpair36";
  attribute srl_bus_name : string;
  attribute srl_bus_name of \r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13\ : label is "inst/\srem_17s_32ns_16_21_seq_1_U3/fn1_srem_17s_32ns_16_21_seq_1_div_U/fn1_srem_17s_32ns_16_21_seq_1_div_u_0/r_stage_reg ";
  attribute srl_name : string;
  attribute srl_name of \r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13\ : label is "inst/\srem_17s_32ns_16_21_seq_1_U3/fn1_srem_17s_32ns_16_21_seq_1_div_U/fn1_srem_17s_32ns_16_21_seq_1_div_u_0/r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13 ";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \remd_reg[11]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \remd_reg[15]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \remd_reg[3]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \remd_reg[7]_i_1\ : label is 35;
begin
  \r_stage_reg[0]_0\ <= \^r_stage_reg[0]_0\;
  r_stage_reg_r_13_0 <= \^r_stage_reg_r_13_0\;
  r_stage_reg_r_5_0 <= \^r_stage_reg_r_5_0\;
cal_tmp_carry: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => cal_tmp_carry_n_0,
      CO(2) => cal_tmp_carry_n_1,
      CO(1) => cal_tmp_carry_n_2,
      CO(0) => cal_tmp_carry_n_3,
      CYINIT => '1',
      DI(3) => cal_tmp_carry_i_1_n_0,
      DI(2) => cal_tmp_carry_i_2_n_0,
      DI(1) => cal_tmp_carry_i_3_n_0,
      DI(0) => cal_tmp_carry_i_4_n_0,
      O(3) => cal_tmp_carry_n_4,
      O(2) => cal_tmp_carry_n_5,
      O(1) => cal_tmp_carry_n_6,
      O(0) => cal_tmp_carry_n_7,
      S(3) => \cal_tmp_carry_i_5__2_n_0\,
      S(2) => \cal_tmp_carry_i_6__1_n_0\,
      S(1) => \cal_tmp_carry_i_7__1_n_0\,
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
      DI(3) => \cal_tmp_carry__0_i_1_n_0\,
      DI(2) => \cal_tmp_carry__0_i_2_n_0\,
      DI(1) => \cal_tmp_carry__0_i_3_n_0\,
      DI(0) => \cal_tmp_carry__0_i_4_n_0\,
      O(3) => \cal_tmp_carry__0_n_4\,
      O(2) => \cal_tmp_carry__0_n_5\,
      O(1) => \cal_tmp_carry__0_n_6\,
      O(0) => \cal_tmp_carry__0_n_7\,
      S(3) => \cal_tmp_carry__0_i_5__1_n_0\,
      S(2) => \cal_tmp_carry__0_i_6__1_n_0\,
      S(1) => \cal_tmp_carry__0_i_7__1_n_0\,
      S(0) => \cal_tmp_carry__0_i_8__1_n_0\
    );
\cal_tmp_carry__0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[6]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__0_i_1_n_0\
    );
\cal_tmp_carry__0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[5]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__0_i_2_n_0\
    );
\cal_tmp_carry__0_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[4]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__0_i_3_n_0\
    );
\cal_tmp_carry__0_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[3]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__0_i_4_n_0\
    );
\cal_tmp_carry__0_i_5__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[6]\,
      I2 => \divisor0_reg_n_0_[7]\,
      O => \cal_tmp_carry__0_i_5__1_n_0\
    );
\cal_tmp_carry__0_i_6__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[5]\,
      I2 => \divisor0_reg_n_0_[6]\,
      O => \cal_tmp_carry__0_i_6__1_n_0\
    );
\cal_tmp_carry__0_i_7__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[4]\,
      I2 => \divisor0_reg_n_0_[5]\,
      O => \cal_tmp_carry__0_i_7__1_n_0\
    );
\cal_tmp_carry__0_i_8__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[3]\,
      I2 => \divisor0_reg_n_0_[4]\,
      O => \cal_tmp_carry__0_i_8__1_n_0\
    );
\cal_tmp_carry__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__0_n_0\,
      CO(3) => \cal_tmp_carry__1_n_0\,
      CO(2) => \cal_tmp_carry__1_n_1\,
      CO(1) => \cal_tmp_carry__1_n_2\,
      CO(0) => \cal_tmp_carry__1_n_3\,
      CYINIT => '0',
      DI(3) => \cal_tmp_carry__1_i_1_n_0\,
      DI(2) => \cal_tmp_carry__1_i_2_n_0\,
      DI(1) => \cal_tmp_carry__1_i_3_n_0\,
      DI(0) => \cal_tmp_carry__1_i_4_n_0\,
      O(3) => \cal_tmp_carry__1_n_4\,
      O(2) => \cal_tmp_carry__1_n_5\,
      O(1) => \cal_tmp_carry__1_n_6\,
      O(0) => \cal_tmp_carry__1_n_7\,
      S(3) => \cal_tmp_carry__1_i_5__0_n_0\,
      S(2) => \cal_tmp_carry__1_i_6__0_n_0\,
      S(1) => \cal_tmp_carry__1_i_7__0_n_0\,
      S(0) => \cal_tmp_carry__1_i_8__0_n_0\
    );
\cal_tmp_carry__1_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[10]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__1_i_1_n_0\
    );
\cal_tmp_carry__1_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[9]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__1_i_2_n_0\
    );
\cal_tmp_carry__1_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[8]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__1_i_3_n_0\
    );
\cal_tmp_carry__1_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[7]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__1_i_4_n_0\
    );
\cal_tmp_carry__1_i_5__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[10]\,
      I2 => \divisor0_reg_n_0_[11]\,
      O => \cal_tmp_carry__1_i_5__0_n_0\
    );
\cal_tmp_carry__1_i_6__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[9]\,
      I2 => \divisor0_reg_n_0_[10]\,
      O => \cal_tmp_carry__1_i_6__0_n_0\
    );
\cal_tmp_carry__1_i_7__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[8]\,
      I2 => \divisor0_reg_n_0_[9]\,
      O => \cal_tmp_carry__1_i_7__0_n_0\
    );
\cal_tmp_carry__1_i_8__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[7]\,
      I2 => \divisor0_reg_n_0_[8]\,
      O => \cal_tmp_carry__1_i_8__0_n_0\
    );
\cal_tmp_carry__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__1_n_0\,
      CO(3) => \cal_tmp_carry__2_n_0\,
      CO(2) => \cal_tmp_carry__2_n_1\,
      CO(1) => \cal_tmp_carry__2_n_2\,
      CO(0) => \cal_tmp_carry__2_n_3\,
      CYINIT => '0',
      DI(3) => \cal_tmp_carry__2_i_1_n_0\,
      DI(2) => \cal_tmp_carry__2_i_2_n_0\,
      DI(1) => \cal_tmp_carry__2_i_3_n_0\,
      DI(0) => \cal_tmp_carry__2_i_4_n_0\,
      O(3) => \cal_tmp_carry__2_n_4\,
      O(2) => \cal_tmp_carry__2_n_5\,
      O(1) => \cal_tmp_carry__2_n_6\,
      O(0) => \cal_tmp_carry__2_n_7\,
      S(3) => \cal_tmp_carry__2_i_5__0_n_0\,
      S(2) => \cal_tmp_carry__2_i_6__0_n_0\,
      S(1) => \cal_tmp_carry__2_i_7__0_n_0\,
      S(0) => \cal_tmp_carry__2_i_8__0_n_0\
    );
\cal_tmp_carry__2_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[14]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__2_i_1_n_0\
    );
\cal_tmp_carry__2_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[13]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__2_i_2_n_0\
    );
\cal_tmp_carry__2_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[12]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__2_i_3_n_0\
    );
\cal_tmp_carry__2_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[11]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__2_i_4_n_0\
    );
\cal_tmp_carry__2_i_5__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[14]\,
      I2 => \divisor0_reg_n_0_[15]\,
      O => \cal_tmp_carry__2_i_5__0_n_0\
    );
\cal_tmp_carry__2_i_6__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[13]\,
      I2 => \divisor0_reg_n_0_[14]\,
      O => \cal_tmp_carry__2_i_6__0_n_0\
    );
\cal_tmp_carry__2_i_7__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[12]\,
      I2 => \divisor0_reg_n_0_[13]\,
      O => \cal_tmp_carry__2_i_7__0_n_0\
    );
\cal_tmp_carry__2_i_8__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[11]\,
      I2 => \divisor0_reg_n_0_[12]\,
      O => \cal_tmp_carry__2_i_8__0_n_0\
    );
\cal_tmp_carry__3\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__2_n_0\,
      CO(3) => \cal_tmp_carry__3_n_0\,
      CO(2) => \cal_tmp_carry__3_n_1\,
      CO(1) => \cal_tmp_carry__3_n_2\,
      CO(0) => \cal_tmp_carry__3_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \cal_tmp_carry__3_i_1_n_0\,
      O(3 downto 0) => \NLW_cal_tmp_carry__3_O_UNCONNECTED\(3 downto 0),
      S(3) => \cal_tmp_carry__3_i_2_n_0\,
      S(2) => \cal_tmp_carry__3_i_3_n_0\,
      S(1) => \cal_tmp_carry__3_i_4_n_0\,
      S(0) => \cal_tmp_carry__3_i_5_n_0\
    );
\cal_tmp_carry__3_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[15]\,
      I1 => \^r_stage_reg[0]_0\,
      O => \cal_tmp_carry__3_i_1_n_0\
    );
\cal_tmp_carry__3_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[19]\,
      O => \cal_tmp_carry__3_i_2_n_0\
    );
\cal_tmp_carry__3_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[18]\,
      O => \cal_tmp_carry__3_i_3_n_0\
    );
\cal_tmp_carry__3_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[17]\,
      O => \cal_tmp_carry__3_i_4_n_0\
    );
\cal_tmp_carry__3_i_5\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[15]\,
      I2 => \divisor0_reg_n_0_[16]\,
      O => \cal_tmp_carry__3_i_5_n_0\
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
      I0 => \divisor0_reg_n_0_[23]\,
      O => \cal_tmp_carry__4_i_1_n_0\
    );
\cal_tmp_carry__4_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[22]\,
      O => \cal_tmp_carry__4_i_2_n_0\
    );
\cal_tmp_carry__4_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[21]\,
      O => \cal_tmp_carry__4_i_3_n_0\
    );
\cal_tmp_carry__4_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[20]\,
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
      I0 => \divisor0_reg_n_0_[27]\,
      O => \cal_tmp_carry__5_i_1_n_0\
    );
\cal_tmp_carry__5_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[26]\,
      O => \cal_tmp_carry__5_i_2_n_0\
    );
\cal_tmp_carry__5_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[25]\,
      O => \cal_tmp_carry__5_i_3_n_0\
    );
\cal_tmp_carry__5_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[24]\,
      O => \cal_tmp_carry__5_i_4_n_0\
    );
\cal_tmp_carry__6\: unisim.vcomponents.CARRY4
     port map (
      CI => \cal_tmp_carry__5_n_0\,
      CO(3) => \NLW_cal_tmp_carry__6_CO_UNCONNECTED\(3),
      CO(2) => p_2_out(0),
      CO(1) => \cal_tmp_carry__6_n_2\,
      CO(0) => \cal_tmp_carry__6_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => p_0_in,
      O(2 downto 0) => \NLW_cal_tmp_carry__6_O_UNCONNECTED\(2 downto 0),
      S(3) => '1',
      S(2) => \cal_tmp_carry__6_i_1_n_0\,
      S(1) => \cal_tmp_carry__6_i_2_n_0\,
      S(0) => \cal_tmp_carry__6_i_3_n_0\
    );
\cal_tmp_carry__6_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[30]\,
      O => \cal_tmp_carry__6_i_1_n_0\
    );
\cal_tmp_carry__6_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[29]\,
      O => \cal_tmp_carry__6_i_2_n_0\
    );
\cal_tmp_carry__6_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[28]\,
      O => \cal_tmp_carry__6_i_3_n_0\
    );
cal_tmp_carry_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[2]\,
      I1 => \^r_stage_reg[0]_0\,
      O => cal_tmp_carry_i_1_n_0
    );
cal_tmp_carry_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[1]\,
      I1 => \^r_stage_reg[0]_0\,
      O => cal_tmp_carry_i_2_n_0
    );
cal_tmp_carry_i_3: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[0]\,
      I1 => \^r_stage_reg[0]_0\,
      O => cal_tmp_carry_i_3_n_0
    );
cal_tmp_carry_i_4: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[16]\,
      I1 => \dividend_tmp_reg_n_0_[16]\,
      I2 => \^r_stage_reg[0]_0\,
      O => cal_tmp_carry_i_4_n_0
    );
\cal_tmp_carry_i_5__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[2]\,
      I2 => \divisor0_reg_n_0_[3]\,
      O => \cal_tmp_carry_i_5__2_n_0\
    );
\cal_tmp_carry_i_6__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[1]\,
      I2 => \divisor0_reg_n_0_[2]\,
      O => \cal_tmp_carry_i_6__1_n_0\
    );
\cal_tmp_carry_i_7__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \^r_stage_reg[0]_0\,
      I1 => \remd_tmp_reg_n_0_[0]\,
      I2 => \divisor0_reg_n_0_[1]\,
      O => \cal_tmp_carry_i_7__1_n_0\
    );
cal_tmp_carry_i_8: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[16]\,
      I1 => \dividend_tmp_reg_n_0_[16]\,
      I2 => \^r_stage_reg[0]_0\,
      O => cal_tmp_carry_i_8_n_0
    );
\dividend0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(0),
      Q => \dividend0_reg_n_0_[0]\,
      R => '0'
    );
\dividend0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(10),
      Q => \dividend0_reg_n_0_[10]\,
      R => '0'
    );
\dividend0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(11),
      Q => \dividend0_reg_n_0_[11]\,
      R => '0'
    );
\dividend0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(12),
      Q => \dividend0_reg_n_0_[12]\,
      R => '0'
    );
\dividend0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(13),
      Q => \dividend0_reg_n_0_[13]\,
      R => '0'
    );
\dividend0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(14),
      Q => \dividend0_reg_n_0_[14]\,
      R => '0'
    );
\dividend0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(15),
      Q => \dividend0_reg_n_0_[15]\,
      R => '0'
    );
\dividend0_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(16),
      Q => \dividend0_reg_n_0_[16]\,
      R => '0'
    );
\dividend0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(1),
      Q => \dividend0_reg_n_0_[1]\,
      R => '0'
    );
\dividend0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(2),
      Q => \dividend0_reg_n_0_[2]\,
      R => '0'
    );
\dividend0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(3),
      Q => \dividend0_reg_n_0_[3]\,
      R => '0'
    );
\dividend0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(4),
      Q => \dividend0_reg_n_0_[4]\,
      R => '0'
    );
\dividend0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(5),
      Q => \dividend0_reg_n_0_[5]\,
      R => '0'
    );
\dividend0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(6),
      Q => \dividend0_reg_n_0_[6]\,
      R => '0'
    );
\dividend0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(7),
      Q => \dividend0_reg_n_0_[7]\,
      R => '0'
    );
\dividend0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(8),
      Q => \dividend0_reg_n_0_[8]\,
      R => '0'
    );
\dividend0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \dividend0_reg[16]_0\(9),
      Q => \dividend0_reg_n_0_[9]\,
      R => '0'
    );
\dividend_tmp[10]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[9]\,
      I1 => \dividend_tmp_reg_n_0_[9]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[10]_i_1_n_0\
    );
\dividend_tmp[11]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[10]\,
      I1 => \dividend_tmp_reg_n_0_[10]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[11]_i_1_n_0\
    );
\dividend_tmp[12]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[11]\,
      I1 => \dividend_tmp_reg_n_0_[11]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[12]_i_1_n_0\
    );
\dividend_tmp[13]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[12]\,
      I1 => \dividend_tmp_reg_n_0_[12]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[13]_i_1_n_0\
    );
\dividend_tmp[14]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[13]\,
      I1 => \dividend_tmp_reg_n_0_[13]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[14]_i_1_n_0\
    );
\dividend_tmp[15]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[14]\,
      I1 => \dividend_tmp_reg_n_0_[14]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[15]_i_1_n_0\
    );
\dividend_tmp[16]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[15]\,
      I1 => \dividend_tmp_reg_n_0_[15]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[16]_i_1_n_0\
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
\dividend_tmp[9]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => \dividend0_reg_n_0_[8]\,
      I1 => \dividend_tmp_reg_n_0_[8]\,
      I2 => \^r_stage_reg[0]_0\,
      O => \dividend_tmp[9]_i_1_n_0\
    );
\dividend_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_2_out(0),
      Q => \dividend_tmp_reg_n_0_[0]\,
      R => '0'
    );
\dividend_tmp_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[10]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[10]\,
      R => '0'
    );
\dividend_tmp_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[11]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[11]\,
      R => '0'
    );
\dividend_tmp_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[12]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[12]\,
      R => '0'
    );
\dividend_tmp_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[13]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[13]\,
      R => '0'
    );
\dividend_tmp_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[14]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[14]\,
      R => '0'
    );
\dividend_tmp_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[15]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[15]\,
      R => '0'
    );
\dividend_tmp_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[16]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[16]\,
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
\dividend_tmp_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[9]_i_1_n_0\,
      Q => \dividend_tmp_reg_n_0_[9]\,
      R => '0'
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(9),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(10),
      Q => \divisor0_reg_n_0_[11]\,
      R => '0'
    );
\divisor0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(11),
      Q => \divisor0_reg_n_0_[12]\,
      R => '0'
    );
\divisor0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(12),
      Q => \divisor0_reg_n_0_[13]\,
      R => '0'
    );
\divisor0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(13),
      Q => \divisor0_reg_n_0_[14]\,
      R => '0'
    );
\divisor0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(14),
      Q => \divisor0_reg_n_0_[15]\,
      R => '0'
    );
\divisor0_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(15),
      Q => \divisor0_reg_n_0_[16]\,
      R => '0'
    );
\divisor0_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(16),
      Q => \divisor0_reg_n_0_[17]\,
      R => '0'
    );
\divisor0_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(17),
      Q => \divisor0_reg_n_0_[18]\,
      R => '0'
    );
\divisor0_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(18),
      Q => \divisor0_reg_n_0_[19]\,
      R => '0'
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(0),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(19),
      Q => \divisor0_reg_n_0_[20]\,
      R => '0'
    );
\divisor0_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(20),
      Q => \divisor0_reg_n_0_[21]\,
      R => '0'
    );
\divisor0_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(21),
      Q => \divisor0_reg_n_0_[22]\,
      R => '0'
    );
\divisor0_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(22),
      Q => \divisor0_reg_n_0_[23]\,
      R => '0'
    );
\divisor0_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(23),
      Q => \divisor0_reg_n_0_[24]\,
      R => '0'
    );
\divisor0_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(24),
      Q => \divisor0_reg_n_0_[25]\,
      R => '0'
    );
\divisor0_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(25),
      Q => \divisor0_reg_n_0_[26]\,
      R => '0'
    );
\divisor0_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(26),
      Q => \divisor0_reg_n_0_[27]\,
      R => '0'
    );
\divisor0_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(27),
      Q => \divisor0_reg_n_0_[28]\,
      R => '0'
    );
\divisor0_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(28),
      Q => \divisor0_reg_n_0_[29]\,
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(1),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(29),
      Q => \divisor0_reg_n_0_[30]\,
      R => '0'
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(2),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(3),
      Q => \divisor0_reg_n_0_[4]\,
      R => '0'
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(4),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(5),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(6),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(7),
      Q => \divisor0_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => \divisor0_reg[30]_0\(8),
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
\r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13\: unisim.vcomponents.SRL16E
     port map (
      A0 => '0',
      A1 => '1',
      A2 => '1',
      A3 => '1',
      CE => '1',
      CLK => ap_clk,
      D => \^r_stage_reg[0]_0\,
      Q => \r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0\
    );
\r_stage_reg[16]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_14\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg[15]_srl15___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_13_n_0\,
      Q => \r_stage_reg[16]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_14_n_0\,
      R => '0'
    );
\r_stage_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_gate_n_0,
      Q => \r_stage_reg[17]_0\(0),
      R => ap_rst
    );
r_stage_reg_gate: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \r_stage_reg[16]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_14_n_0\,
      I1 => r_stage_reg_r_14_n_0,
      O => r_stage_reg_gate_n_0
    );
r_stage_reg_r: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => '1',
      Q => r_stage_reg_r_n_0,
      R => ap_rst
    );
r_stage_reg_r_0: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_n_0,
      Q => r_stage_reg_r_0_n_0,
      R => ap_rst
    );
r_stage_reg_r_1: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_0_n_0,
      Q => r_stage_reg_r_1_n_0,
      R => ap_rst
    );
r_stage_reg_r_10: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_9_n_0,
      Q => r_stage_reg_r_10_n_0,
      R => ap_rst
    );
r_stage_reg_r_11: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_10_n_0,
      Q => r_stage_reg_r_11_n_0,
      R => ap_rst
    );
r_stage_reg_r_12: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_11_n_0,
      Q => r_stage_reg_r_12_n_0,
      R => ap_rst
    );
r_stage_reg_r_13: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_12_n_0,
      Q => \^r_stage_reg_r_13_0\,
      R => ap_rst
    );
r_stage_reg_r_14: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \^r_stage_reg_r_13_0\,
      Q => r_stage_reg_r_14_n_0,
      R => ap_rst
    );
r_stage_reg_r_2: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_1_n_0,
      Q => r_stage_reg_r_2_n_0,
      R => ap_rst
    );
r_stage_reg_r_3: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_2_n_0,
      Q => r_stage_reg_r_3_n_0,
      R => ap_rst
    );
r_stage_reg_r_4: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_3_n_0,
      Q => r_stage_reg_r_4_n_0,
      R => ap_rst
    );
r_stage_reg_r_5: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_4_n_0,
      Q => \^r_stage_reg_r_5_0\,
      R => ap_rst
    );
r_stage_reg_r_6: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \^r_stage_reg_r_5_0\,
      Q => r_stage_reg_r_6_n_0,
      R => ap_rst
    );
r_stage_reg_r_7: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_6_n_0,
      Q => r_stage_reg_r_7_n_0,
      R => ap_rst
    );
r_stage_reg_r_8: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_7_n_0,
      Q => r_stage_reg_r_8_n_0,
      R => ap_rst
    );
r_stage_reg_r_9: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_r_8_n_0,
      Q => r_stage_reg_r_9_n_0,
      R => ap_rst
    );
\remd[11]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[11]\,
      O => \remd[11]_i_2_n_0\
    );
\remd[11]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[10]\,
      O => \remd[11]_i_3_n_0\
    );
\remd[11]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[9]\,
      O => \remd[11]_i_4_n_0\
    );
\remd[11]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[8]\,
      O => \remd[11]_i_5_n_0\
    );
\remd[15]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[15]\,
      O => \remd[15]_i_2_n_0\
    );
\remd[15]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[14]\,
      O => \remd[15]_i_3_n_0\
    );
\remd[15]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[13]\,
      O => \remd[15]_i_4_n_0\
    );
\remd[15]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[12]\,
      O => \remd[15]_i_5_n_0\
    );
\remd[3]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[3]\,
      O => \remd[3]_i_2_n_0\
    );
\remd[3]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[2]\,
      O => \remd[3]_i_3_n_0\
    );
\remd[3]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[1]\,
      O => \remd[3]_i_4_n_0\
    );
\remd[3]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[0]\,
      O => \remd[3]_i_5_n_0\
    );
\remd[7]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[7]\,
      O => \remd[7]_i_2_n_0\
    );
\remd[7]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[6]\,
      O => \remd[7]_i_3_n_0\
    );
\remd[7]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[5]\,
      O => \remd[7]_i_4_n_0\
    );
\remd[7]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \sign0_reg_n_0_[0]\,
      I1 => \remd_tmp_reg_n_0_[4]\,
      O => \remd[7]_i_5_n_0\
    );
\remd_reg[11]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \remd_reg[7]_i_1_n_0\,
      CO(3) => \remd_reg[11]_i_1_n_0\,
      CO(2) => \remd_reg[11]_i_1_n_1\,
      CO(1) => \remd_reg[11]_i_1_n_2\,
      CO(0) => \remd_reg[11]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => D(11 downto 8),
      S(3) => \remd[11]_i_2_n_0\,
      S(2) => \remd[11]_i_3_n_0\,
      S(1) => \remd[11]_i_4_n_0\,
      S(0) => \remd[11]_i_5_n_0\
    );
\remd_reg[15]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \remd_reg[11]_i_1_n_0\,
      CO(3) => \NLW_remd_reg[15]_i_1_CO_UNCONNECTED\(3),
      CO(2) => \remd_reg[15]_i_1_n_1\,
      CO(1) => \remd_reg[15]_i_1_n_2\,
      CO(0) => \remd_reg[15]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => D(15 downto 12),
      S(3) => \remd[15]_i_2_n_0\,
      S(2) => \remd[15]_i_3_n_0\,
      S(1) => \remd[15]_i_4_n_0\,
      S(0) => \remd[15]_i_5_n_0\
    );
\remd_reg[3]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \remd_reg[3]_i_1_n_0\,
      CO(2) => \remd_reg[3]_i_1_n_1\,
      CO(1) => \remd_reg[3]_i_1_n_2\,
      CO(0) => \remd_reg[3]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \sign0_reg_n_0_[0]\,
      O(3 downto 0) => D(3 downto 0),
      S(3) => \remd[3]_i_2_n_0\,
      S(2) => \remd[3]_i_3_n_0\,
      S(1) => \remd[3]_i_4_n_0\,
      S(0) => \remd[3]_i_5_n_0\
    );
\remd_reg[7]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \remd_reg[3]_i_1_n_0\,
      CO(3) => \remd_reg[7]_i_1_n_0\,
      CO(2) => \remd_reg[7]_i_1_n_1\,
      CO(1) => \remd_reg[7]_i_1_n_2\,
      CO(0) => \remd_reg[7]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => D(7 downto 4),
      S(3) => \remd[7]_i_2_n_0\,
      S(2) => \remd[7]_i_3_n_0\,
      S(1) => \remd[7]_i_4_n_0\,
      S(0) => \remd[7]_i_5_n_0\
    );
\remd_tmp[0]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"ACFFAC00"
    )
        port map (
      I0 => \dividend0_reg_n_0_[16]\,
      I1 => \dividend_tmp_reg_n_0_[16]\,
      I2 => \^r_stage_reg[0]_0\,
      I3 => p_0_in,
      I4 => cal_tmp_carry_n_7,
      O => \remd_tmp[0]_i_1_n_0\
    );
\remd_tmp[10]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[9]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_5\,
      O => \remd_tmp[10]_i_1_n_0\
    );
\remd_tmp[11]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[10]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_4\,
      O => \remd_tmp[11]_i_1_n_0\
    );
\remd_tmp[12]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[11]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_7\,
      O => \remd_tmp[12]_i_1_n_0\
    );
\remd_tmp[13]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[12]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_6\,
      O => \remd_tmp[13]_i_1_n_0\
    );
\remd_tmp[14]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[13]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_5\,
      O => \remd_tmp[14]_i_1_n_0\
    );
\remd_tmp[15]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[14]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__2_n_4\,
      O => \remd_tmp[15]_i_1_n_0\
    );
\remd_tmp[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[0]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in,
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
      I2 => p_0_in,
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
      I2 => p_0_in,
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
      I2 => p_0_in,
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
      I2 => p_0_in,
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
      I2 => p_0_in,
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
      I2 => p_0_in,
      I3 => \cal_tmp_carry__0_n_4\,
      O => \remd_tmp[7]_i_1_n_0\
    );
\remd_tmp[8]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[7]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_7\,
      O => \remd_tmp[8]_i_1_n_0\
    );
\remd_tmp[9]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2F20"
    )
        port map (
      I0 => \remd_tmp_reg_n_0_[8]\,
      I1 => \^r_stage_reg[0]_0\,
      I2 => p_0_in,
      I3 => \cal_tmp_carry__1_n_6\,
      O => \remd_tmp[9]_i_1_n_0\
    );
\remd_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[0]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[0]\,
      R => '0'
    );
\remd_tmp_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[10]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[10]\,
      R => '0'
    );
\remd_tmp_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[11]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[11]\,
      R => '0'
    );
\remd_tmp_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[12]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[12]\,
      R => '0'
    );
\remd_tmp_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[13]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[13]\,
      R => '0'
    );
\remd_tmp_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[14]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[14]\,
      R => '0'
    );
\remd_tmp_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[15]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[15]\,
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
\remd_tmp_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[8]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[8]\,
      R => '0'
    );
\remd_tmp_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[9]_i_1_n_0\,
      Q => \remd_tmp_reg_n_0_[9]\,
      R => '0'
    );
\sign0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => Q(0),
      Q => \sign0_reg_n_0_[0]\,
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div_u is
  port (
    done0 : out STD_LOGIC;
    Q : out STD_LOGIC_VECTOR ( 2 downto 0 );
    ap_rst : in STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    \r_stage_reg[8]_0\ : in STD_LOGIC;
    D : in STD_LOGIC_VECTOR ( 9 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div_u : entity is "fn1_urem_8ns_11ns_3_12_seq_1_div_u";
end bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div_u;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div_u is
  signal \^q\ : STD_LOGIC_VECTOR ( 2 downto 0 );
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
  signal \cal_tmp_carry__1_i_3_n_0\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_2\ : STD_LOGIC;
  signal \cal_tmp_carry__1_n_3\ : STD_LOGIC;
  signal cal_tmp_carry_i_4_n_0 : STD_LOGIC;
  signal \cal_tmp_carry_i_5__0_n_0\ : STD_LOGIC;
  signal cal_tmp_carry_i_6_n_0 : STD_LOGIC;
  signal cal_tmp_carry_i_7_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_0 : STD_LOGIC;
  signal cal_tmp_carry_n_1 : STD_LOGIC;
  signal cal_tmp_carry_n_2 : STD_LOGIC;
  signal cal_tmp_carry_n_3 : STD_LOGIC;
  signal cal_tmp_carry_n_4 : STD_LOGIC;
  signal cal_tmp_carry_n_5 : STD_LOGIC;
  signal cal_tmp_carry_n_6 : STD_LOGIC;
  signal cal_tmp_carry_n_7 : STD_LOGIC;
  signal dividend_tmp : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal \dividend_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[0]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[10]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[1]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[2]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[3]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[4]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal p_0_in : STD_LOGIC_VECTOR ( 10 downto 9 );
  signal p_0_in_0 : STD_LOGIC;
  signal p_1_in0 : STD_LOGIC;
  signal p_2_out : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4_n_0\ : STD_LOGIC;
  signal \r_stage_reg[7]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_5_n_0\ : STD_LOGIC;
  signal r_stage_reg_gate_n_0 : STD_LOGIC;
  signal \r_stage_reg_n_0_[0]\ : STD_LOGIC;
  signal remd_tmp : STD_LOGIC_VECTOR ( 6 downto 3 );
  signal \remd_tmp[0]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[1]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[2]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[3]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[4]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[5]_i_1_n_0\ : STD_LOGIC;
  signal \remd_tmp[6]_i_1_n_0\ : STD_LOGIC;
  signal remd_tmp_mux : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal \NLW_cal_tmp_carry__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_cal_tmp_carry__1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_cal_tmp_carry__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 2 downto 0 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \dividend_tmp[5]_i_1\ : label is "soft_lutpair48";
  attribute srl_bus_name : string;
  attribute srl_bus_name of \r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4\ : label is "inst/\urem_8ns_11ns_3_12_seq_1_U1/fn1_urem_8ns_11ns_3_12_seq_1_div_U/fn1_urem_8ns_11ns_3_12_seq_1_div_u_0/r_stage_reg ";
  attribute srl_name : string;
  attribute srl_name of \r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4\ : label is "inst/\urem_8ns_11ns_3_12_seq_1_U1/fn1_urem_8ns_11ns_3_12_seq_1_div_U/fn1_urem_8ns_11ns_3_12_seq_1_div_u_0/r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4 ";
  attribute SOFT_HLUTNM of \remd_tmp[0]_i_1\ : label is "soft_lutpair48";
begin
  Q(2 downto 0) <= \^q\(2 downto 0);
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
      S(3) => cal_tmp_carry_i_4_n_0,
      S(2) => \cal_tmp_carry_i_5__0_n_0\,
      S(1) => cal_tmp_carry_i_6_n_0,
      S(0) => cal_tmp_carry_i_7_n_0
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
      CO(3) => \NLW_cal_tmp_carry__1_CO_UNCONNECTED\(3),
      CO(2) => p_2_out(0),
      CO(1) => \cal_tmp_carry__1_n_2\,
      CO(0) => \cal_tmp_carry__1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => p_0_in_0,
      O(2 downto 0) => \NLW_cal_tmp_carry__1_O_UNCONNECTED\(2 downto 0),
      S(3) => '1',
      S(2 downto 1) => p_0_in(10 downto 9),
      S(0) => \cal_tmp_carry__1_i_3_n_0\
    );
\cal_tmp_carry__1_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[10]\,
      O => p_0_in(10)
    );
\cal_tmp_carry__1_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[9]\,
      O => p_0_in(9)
    );
\cal_tmp_carry__1_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[9]\,
      O => \cal_tmp_carry__1_i_3_n_0\
    );
cal_tmp_carry_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \^q\(2),
      I1 => \r_stage_reg_n_0_[0]\,
      O => remd_tmp_mux(2)
    );
cal_tmp_carry_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \^q\(1),
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
cal_tmp_carry_i_4: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \^q\(2),
      I2 => \divisor0_reg_n_0_[3]\,
      O => cal_tmp_carry_i_4_n_0
    );
\cal_tmp_carry_i_5__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \^q\(1),
      I2 => \divisor0_reg_n_0_[2]\,
      O => \cal_tmp_carry_i_5__0_n_0\
    );
cal_tmp_carry_i_6: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => \r_stage_reg_n_0_[0]\,
      I1 => \^q\(0),
      I2 => \divisor0_reg_n_0_[1]\,
      O => cal_tmp_carry_i_6_n_0
    );
cal_tmp_carry_i_7: unisim.vcomponents.LUT3
    generic map(
      INIT => X"2D"
    )
        port map (
      I0 => dividend_tmp(7),
      I1 => \r_stage_reg_n_0_[0]\,
      I2 => \divisor0_reg_n_0_[0]\,
      O => cal_tmp_carry_i_7_n_0
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
dividend_tmp_mux: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => dividend_tmp(7),
      I1 => \r_stage_reg_n_0_[0]\,
      O => p_1_in0
    );
\dividend_tmp_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p_2_out(0),
      Q => dividend_tmp(0),
      R => '0'
    );
\dividend_tmp_reg[1]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => dividend_tmp(0),
      Q => dividend_tmp(1),
      S => \r_stage_reg_n_0_[0]\
    );
\dividend_tmp_reg[2]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => dividend_tmp(1),
      Q => dividend_tmp(2),
      S => \r_stage_reg_n_0_[0]\
    );
\dividend_tmp_reg[3]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => dividend_tmp(2),
      Q => dividend_tmp(3),
      S => \r_stage_reg_n_0_[0]\
    );
\dividend_tmp_reg[4]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => dividend_tmp(3),
      Q => dividend_tmp(4),
      S => \r_stage_reg_n_0_[0]\
    );
\dividend_tmp_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \dividend_tmp[5]_i_1_n_0\,
      Q => dividend_tmp(5),
      R => '0'
    );
\dividend_tmp_reg[6]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => dividend_tmp(5),
      Q => dividend_tmp(6),
      S => \r_stage_reg_n_0_[0]\
    );
\dividend_tmp_reg[7]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => '1',
      D => dividend_tmp(6),
      Q => dividend_tmp(7),
      S => \r_stage_reg_n_0_[0]\
    );
\divisor0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(0),
      Q => \divisor0_reg_n_0_[0]\,
      R => '0'
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(9),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(1),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(2),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(3),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(4),
      Q => \divisor0_reg_n_0_[4]\,
      R => '0'
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(5),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(6),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(7),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => E(0),
      D => D(8),
      Q => \divisor0_reg_n_0_[9]\,
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
\r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4\: unisim.vcomponents.SRL16E
     port map (
      A0 => '1',
      A1 => '0',
      A2 => '1',
      A3 => '0',
      CE => '1',
      CLK => ap_clk,
      D => \r_stage_reg_n_0_[0]\,
      Q => \r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4_n_0\
    );
\r_stage_reg[7]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_5\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \r_stage_reg[6]_srl6___srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_4_n_0\,
      Q => \r_stage_reg[7]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_5_n_0\,
      R => '0'
    );
\r_stage_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => r_stage_reg_gate_n_0,
      Q => done0,
      R => ap_rst
    );
r_stage_reg_gate: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \r_stage_reg[7]_srem_17s_32ns_16_21_seq_1_U3_fn1_srem_17s_32ns_16_21_seq_1_div_U_fn1_srem_17s_32ns_16_21_seq_1_div_u_0_r_stage_reg_r_5_n_0\,
      I1 => \r_stage_reg[8]_0\,
      O => r_stage_reg_gate_n_0
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
      I0 => \^q\(1),
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
      I0 => \^q\(2),
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
      Q => \^q\(1),
      R => '0'
    );
\remd_tmp_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd_tmp[2]_i_1_n_0\,
      Q => \^q\(2),
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
entity bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div is
  port (
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    D : out STD_LOGIC_VECTOR ( 2 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    \dividend_tmp_reg[15]\ : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 15 downto 0 );
    urem_ln20_reg_207 : in STD_LOGIC_VECTOR ( 2 downto 0 );
    \quot_reg[0]_0\ : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div : entity is "fn1_sdiv_17s_17ns_3_21_seq_1_div";
end bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div is
  signal \0\ : STD_LOGIC;
  signal \^e\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \divisor0[12]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[12]_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[12]_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[12]_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[16]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[16]_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[16]_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[16]_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_3__0_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_4__0_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_6_n_0\ : STD_LOGIC;
  signal \divisor0[4]_i_7_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_3__0_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_3_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_4_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_5_n_0\ : STD_LOGIC;
  signal \divisor0[8]_i_6_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_1\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[12]_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_2\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_1_n_3\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[16]_i_2_n_3\ : STD_LOGIC;
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
  signal \divisor0_reg[8]_i_2_n_0\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_2_n_1\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_2_n_2\ : STD_LOGIC;
  signal \divisor0_reg[8]_i_2_n_3\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[0]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[10]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[11]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[12]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[13]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[14]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[15]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[1]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[2]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[3]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[4]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[8]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal divisor_u : STD_LOGIC_VECTOR ( 16 downto 1 );
  signal divisor_u0 : STD_LOGIC_VECTOR ( 16 downto 1 );
  signal fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1 : STD_LOGIC;
  signal fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_2 : STD_LOGIC;
  signal fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_3 : STD_LOGIC;
  signal grp_fu_99_p1 : STD_LOGIC_VECTOR ( 16 downto 0 );
  signal p_0_in : STD_LOGIC;
  signal quot : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal \quot[1]_i_1_n_0\ : STD_LOGIC;
  signal \quot[2]_i_1_n_0\ : STD_LOGIC;
  signal \NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 2 to 2 );
  signal \NLW_divisor0_reg[16]_i_1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_divisor0_reg[16]_i_2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \divisor0[10]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \divisor0[11]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \divisor0[12]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \divisor0[13]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \divisor0[14]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \divisor0[15]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \divisor0[16]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \divisor0[1]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \divisor0[2]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \divisor0[3]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \divisor0[4]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \divisor0[5]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \divisor0[6]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \divisor0[7]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \divisor0[8]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \divisor0[9]_i_1\ : label is "soft_lutpair11";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \divisor0_reg[12]_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[16]_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[4]_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \divisor0_reg[8]_i_2\ : label is 35;
  attribute SOFT_HLUTNM of \quot[1]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \quot[2]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \sub_ln19_reg_212[0]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \sub_ln19_reg_212[1]_i_1\ : label is "soft_lutpair7";
begin
  E(0) <= \^e\(0);
\divisor0[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(0),
      O => grp_fu_99_p1(0)
    );
\divisor0[10]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(10),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[10]\,
      O => divisor_u(10)
    );
\divisor0[11]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(11),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[11]\,
      O => divisor_u(11)
    );
\divisor0[12]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(12),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[12]\,
      O => divisor_u(12)
    );
\divisor0[12]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[12]\,
      O => \divisor0[12]_i_3_n_0\
    );
\divisor0[12]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[11]\,
      O => \divisor0[12]_i_4_n_0\
    );
\divisor0[12]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[10]\,
      O => \divisor0[12]_i_5_n_0\
    );
\divisor0[12]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[9]\,
      O => \divisor0[12]_i_6_n_0\
    );
\divisor0[13]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(13),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[13]\,
      O => divisor_u(13)
    );
\divisor0[14]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(14),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[14]\,
      O => divisor_u(14)
    );
\divisor0[15]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(15),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[15]\,
      O => divisor_u(15)
    );
\divisor0[16]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => p_0_in,
      I1 => divisor_u0(16),
      O => divisor_u(16)
    );
\divisor0[16]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_0_in,
      O => \divisor0[16]_i_3_n_0\
    );
\divisor0[16]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[15]\,
      O => \divisor0[16]_i_4_n_0\
    );
\divisor0[16]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[14]\,
      O => \divisor0[16]_i_5_n_0\
    );
\divisor0[16]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[13]\,
      O => \divisor0[16]_i_6_n_0\
    );
\divisor0[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(1),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[1]\,
      O => divisor_u(1)
    );
\divisor0[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(2),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[2]\,
      O => divisor_u(2)
    );
\divisor0[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(3),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[3]\,
      O => divisor_u(3)
    );
\divisor0[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(4),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[4]\,
      O => divisor_u(4)
    );
\divisor0[4]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(4),
      O => \divisor0[4]_i_2_n_0\
    );
\divisor0[4]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(3),
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
      I0 => p(1),
      O => \divisor0[4]_i_4_n_0\
    );
\divisor0[4]_i_4__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[4]\,
      O => \divisor0[4]_i_4__0_n_0\
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
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[5]\,
      O => divisor_u(5)
    );
\divisor0[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(6),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[6]\,
      O => divisor_u(6)
    );
\divisor0[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(7),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[7]\,
      O => divisor_u(7)
    );
\divisor0[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(8),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[8]\,
      O => divisor_u(8)
    );
\divisor0[8]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(8),
      O => \divisor0[8]_i_2_n_0\
    );
\divisor0[8]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(5),
      O => \divisor0[8]_i_3_n_0\
    );
\divisor0[8]_i_3__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[8]\,
      O => \divisor0[8]_i_3__0_n_0\
    );
\divisor0[8]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[7]\,
      O => \divisor0[8]_i_4_n_0\
    );
\divisor0[8]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[6]\,
      O => \divisor0[8]_i_5_n_0\
    );
\divisor0[8]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \divisor0_reg_n_0_[5]\,
      O => \divisor0[8]_i_6_n_0\
    );
\divisor0[9]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => divisor_u0(9),
      I1 => p_0_in,
      I2 => \divisor0_reg_n_0_[9]\,
      O => divisor_u(9)
    );
\divisor0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(0),
      Q => \divisor0_reg_n_0_[0]\,
      R => '0'
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(10),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(11),
      Q => \divisor0_reg_n_0_[11]\,
      R => '0'
    );
\divisor0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(12),
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
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => grp_fu_99_p1(12 downto 9),
      S(3 downto 0) => p(12 downto 9)
    );
\divisor0_reg[12]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[8]_i_2_n_0\,
      CO(3) => \divisor0_reg[12]_i_2_n_0\,
      CO(2) => \divisor0_reg[12]_i_2_n_1\,
      CO(1) => \divisor0_reg[12]_i_2_n_2\,
      CO(0) => \divisor0_reg[12]_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(12 downto 9),
      S(3) => \divisor0[12]_i_3_n_0\,
      S(2) => \divisor0[12]_i_4_n_0\,
      S(1) => \divisor0[12]_i_5_n_0\,
      S(0) => \divisor0[12]_i_6_n_0\
    );
\divisor0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(13),
      Q => \divisor0_reg_n_0_[13]\,
      R => '0'
    );
\divisor0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(14),
      Q => \divisor0_reg_n_0_[14]\,
      R => '0'
    );
\divisor0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(15),
      Q => \divisor0_reg_n_0_[15]\,
      R => '0'
    );
\divisor0_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(16),
      Q => p_0_in,
      R => '0'
    );
\divisor0_reg[16]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[12]_i_1_n_0\,
      CO(3) => grp_fu_99_p1(16),
      CO(2) => \NLW_divisor0_reg[16]_i_1_CO_UNCONNECTED\(2),
      CO(1) => \divisor0_reg[16]_i_1_n_2\,
      CO(0) => \divisor0_reg[16]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \NLW_divisor0_reg[16]_i_1_O_UNCONNECTED\(3),
      O(2 downto 0) => grp_fu_99_p1(15 downto 13),
      S(3) => '1',
      S(2 downto 0) => p(15 downto 13)
    );
\divisor0_reg[16]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[12]_i_2_n_0\,
      CO(3) => \NLW_divisor0_reg[16]_i_2_CO_UNCONNECTED\(3),
      CO(2) => \divisor0_reg[16]_i_2_n_1\,
      CO(1) => \divisor0_reg[16]_i_2_n_2\,
      CO(0) => \divisor0_reg[16]_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(16 downto 13),
      S(3) => \divisor0[16]_i_3_n_0\,
      S(2) => \divisor0[16]_i_4_n_0\,
      S(1) => \divisor0[16]_i_5_n_0\,
      S(0) => \divisor0[16]_i_6_n_0\
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(1),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(2),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(3),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(4),
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
      CYINIT => p(0),
      DI(3 downto 2) => p(4 downto 3),
      DI(1) => '0',
      DI(0) => p(1),
      O(3 downto 0) => grp_fu_99_p1(4 downto 1),
      S(3) => \divisor0[4]_i_2_n_0\,
      S(2) => \divisor0[4]_i_3_n_0\,
      S(1) => p(2),
      S(0) => \divisor0[4]_i_4_n_0\
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
      S(3) => \divisor0[4]_i_4__0_n_0\,
      S(2) => \divisor0[4]_i_5_n_0\,
      S(1) => \divisor0[4]_i_6_n_0\,
      S(0) => \divisor0[4]_i_7_n_0\
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(5),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(6),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(7),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(8),
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
      DI(3) => p(8),
      DI(2 downto 1) => B"00",
      DI(0) => p(5),
      O(3 downto 0) => grp_fu_99_p1(8 downto 5),
      S(3) => \divisor0[8]_i_2_n_0\,
      S(2 downto 1) => p(7 downto 6),
      S(0) => \divisor0[8]_i_3_n_0\
    );
\divisor0_reg[8]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \divisor0_reg[4]_i_2_n_0\,
      CO(3) => \divisor0_reg[8]_i_2_n_0\,
      CO(2) => \divisor0_reg[8]_i_2_n_1\,
      CO(1) => \divisor0_reg[8]_i_2_n_2\,
      CO(0) => \divisor0_reg[8]_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => divisor_u0(8 downto 5),
      S(3) => \divisor0[8]_i_3__0_n_0\,
      S(2) => \divisor0[8]_i_4_n_0\,
      S(1) => \divisor0[8]_i_5_n_0\,
      S(0) => \divisor0[8]_i_6_n_0\
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_99_p1(9),
      Q => \divisor0_reg_n_0_[9]\,
      R => '0'
    );
fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0: entity work.bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div_u
     port map (
      \0\ => \0\,
      D(15 downto 0) => divisor_u(16 downto 1),
      E(0) => \^e\(0),
      Q(1) => p_0_in,
      Q(0) => \divisor0_reg_n_0_[0]\,
      ap_clk => ap_clk,
      \dividend_tmp_reg[0]_0\(0) => fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1,
      \dividend_tmp_reg[15]_0\ => \dividend_tmp_reg[15]\,
      \dividend_tmp_reg[1]_0\ => fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_3,
      \dividend_tmp_reg[2]_0\ => fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_2
    );
\quot[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"6C"
    )
        port map (
      I0 => fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1,
      I1 => fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_3,
      I2 => \0\,
      O => \quot[1]_i_1_n_0\
    );
\quot[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1EF0"
    )
        port map (
      I0 => fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1,
      I1 => fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_3,
      I2 => fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_2,
      I3 => \0\,
      O => \quot[2]_i_1_n_0\
    );
\quot_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \quot_reg[0]_0\(0),
      D => fn1_sdiv_17s_17ns_3_21_seq_1_div_u_0_n_1,
      Q => quot(0),
      R => '0'
    );
\quot_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \quot_reg[0]_0\(0),
      D => \quot[1]_i_1_n_0\,
      Q => quot(1),
      R => '0'
    );
\quot_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \quot_reg[0]_0\(0),
      D => \quot[2]_i_1_n_0\,
      Q => quot(2),
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
      Q => \^e\(0),
      R => '0'
    );
\sub_ln19_reg_212[0]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => quot(0),
      I1 => urem_ln20_reg_207(0),
      O => D(0)
    );
\sub_ln19_reg_212[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7887"
    )
        port map (
      I0 => urem_ln20_reg_207(0),
      I1 => quot(0),
      I2 => urem_ln20_reg_207(1),
      I3 => quot(1),
      O => D(1)
    );
\sub_ln19_reg_212[2]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"077FF880F880077F"
    )
        port map (
      I0 => quot(0),
      I1 => urem_ln20_reg_207(0),
      I2 => quot(1),
      I3 => urem_ln20_reg_207(1),
      I4 => urem_ln20_reg_207(2),
      I5 => quot(2),
      O => D(2)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div is
  port (
    ap_return : out STD_LOGIC_VECTOR ( 15 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    \r_stage_reg[16]\ : in STD_LOGIC;
    \divisor0_reg[7]_0\ : in STD_LOGIC_VECTOR ( 2 downto 0 );
    \dividend0_reg[15]_0\ : in STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div : entity is "fn1_srem_16ns_11ns_16_20_seq_1_div";
end bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div is
  signal \dividend0[10]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[11]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_3_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_4_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_5_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_6_n_0\ : STD_LOGIC;
  signal \dividend0[13]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[14]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[15]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[15]_i_3_n_0\ : STD_LOGIC;
  signal \dividend0[15]_i_4_n_0\ : STD_LOGIC;
  signal \dividend0[15]_i_5_n_0\ : STD_LOGIC;
  signal \dividend0[1]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[2]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[3]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_3_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_4_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_5_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_6_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_7_n_0\ : STD_LOGIC;
  signal \dividend0[5]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[6]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[7]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_3_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_4_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_5_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_6_n_0\ : STD_LOGIC;
  signal \dividend0[9]_i_1__0_n_0\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2__0_n_0\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2__0_n_1\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2__0_n_2\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2__0_n_3\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2__0_n_4\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2__0_n_5\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2__0_n_6\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2__0_n_7\ : STD_LOGIC;
  signal \dividend0_reg[15]_i_2_n_2\ : STD_LOGIC;
  signal \dividend0_reg[15]_i_2_n_3\ : STD_LOGIC;
  signal \dividend0_reg[15]_i_2_n_5\ : STD_LOGIC;
  signal \dividend0_reg[15]_i_2_n_6\ : STD_LOGIC;
  signal \dividend0_reg[15]_i_2_n_7\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2__0_n_0\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2__0_n_1\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2__0_n_2\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2__0_n_3\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2__0_n_4\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2__0_n_5\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2__0_n_6\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2__0_n_7\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2__0_n_0\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2__0_n_1\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2__0_n_2\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2__0_n_3\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2__0_n_4\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2__0_n_5\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2__0_n_6\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2__0_n_7\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[0]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[10]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[11]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[12]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[13]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[14]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[1]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[2]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[3]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[4]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[5]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[6]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[7]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[8]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[9]\ : STD_LOGIC;
  signal \divisor0[6]_i_1__0_n_0\ : STD_LOGIC;
  signal \divisor0[7]_i_1__0_n_0\ : STD_LOGIC;
  signal \divisor0[9]_i_1__0_n_0\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[8]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_1 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_10 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_11 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_12 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_13 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_14 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_15 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_16 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_2 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_3 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_4 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_5 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_6 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_7 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_8 : STD_LOGIC;
  signal fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_9 : STD_LOGIC;
  signal grp_fu_166_p0 : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal p_1_in : STD_LOGIC;
  signal start0_reg_n_0 : STD_LOGIC;
  signal sub_ln25_fu_156_p2 : STD_LOGIC_VECTOR ( 8 to 8 );
  signal \NLW_dividend0_reg[15]_i_2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_dividend0_reg[15]_i_2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \dividend0[10]_i_1__0\ : label is "soft_lutpair24";
  attribute SOFT_HLUTNM of \dividend0[11]_i_1__0\ : label is "soft_lutpair25";
  attribute SOFT_HLUTNM of \dividend0[12]_i_1__0\ : label is "soft_lutpair25";
  attribute SOFT_HLUTNM of \dividend0[13]_i_1__0\ : label is "soft_lutpair24";
  attribute SOFT_HLUTNM of \dividend0[14]_i_1__0\ : label is "soft_lutpair23";
  attribute SOFT_HLUTNM of \dividend0[15]_i_1__0\ : label is "soft_lutpair23";
  attribute SOFT_HLUTNM of \dividend0[2]_i_1__0\ : label is "soft_lutpair29";
  attribute SOFT_HLUTNM of \dividend0[3]_i_1__0\ : label is "soft_lutpair29";
  attribute SOFT_HLUTNM of \dividend0[4]_i_1__0\ : label is "soft_lutpair28";
  attribute SOFT_HLUTNM of \dividend0[5]_i_1__0\ : label is "soft_lutpair28";
  attribute SOFT_HLUTNM of \dividend0[6]_i_1__0\ : label is "soft_lutpair26";
  attribute SOFT_HLUTNM of \dividend0[7]_i_1__0\ : label is "soft_lutpair27";
  attribute SOFT_HLUTNM of \dividend0[8]_i_1__0\ : label is "soft_lutpair27";
  attribute SOFT_HLUTNM of \dividend0[9]_i_1__0\ : label is "soft_lutpair26";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \dividend0_reg[12]_i_2__0\ : label is 35;
  attribute ADDER_THRESHOLD of \dividend0_reg[15]_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \dividend0_reg[4]_i_2__0\ : label is 35;
  attribute ADDER_THRESHOLD of \dividend0_reg[8]_i_2__0\ : label is 35;
  attribute SOFT_HLUTNM of \divisor0[6]_i_1__0\ : label is "soft_lutpair31";
  attribute SOFT_HLUTNM of \divisor0[7]_i_1__0\ : label is "soft_lutpair31";
  attribute SOFT_HLUTNM of \divisor0[8]_i_1\ : label is "soft_lutpair30";
  attribute SOFT_HLUTNM of \divisor0[9]_i_1__0\ : label is "soft_lutpair30";
begin
\dividend0[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(0),
      O => grp_fu_166_p0(0)
    );
\dividend0[10]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(10),
      O => grp_fu_166_p0(10)
    );
\dividend0[10]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[12]_i_2__0_n_6\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[10]\,
      O => \dividend0[10]_i_1__0_n_0\
    );
\dividend0[11]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(11),
      O => grp_fu_166_p0(11)
    );
\dividend0[11]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[12]_i_2__0_n_5\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[11]\,
      O => \dividend0[11]_i_1__0_n_0\
    );
\dividend0[12]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(12),
      O => grp_fu_166_p0(12)
    );
\dividend0[12]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[12]_i_2__0_n_4\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[12]\,
      O => \dividend0[12]_i_1__0_n_0\
    );
\dividend0[12]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[12]\,
      O => \dividend0[12]_i_3_n_0\
    );
\dividend0[12]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[11]\,
      O => \dividend0[12]_i_4_n_0\
    );
\dividend0[12]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[10]\,
      O => \dividend0[12]_i_5_n_0\
    );
\dividend0[12]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[9]\,
      O => \dividend0[12]_i_6_n_0\
    );
\dividend0[13]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(13),
      O => grp_fu_166_p0(13)
    );
\dividend0[13]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[15]_i_2_n_7\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[13]\,
      O => \dividend0[13]_i_1__0_n_0\
    );
\dividend0[14]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(14),
      O => grp_fu_166_p0(14)
    );
\dividend0[14]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[15]_i_2_n_6\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[14]\,
      O => \dividend0[14]_i_1__0_n_0\
    );
\dividend0[15]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(15),
      O => grp_fu_166_p0(15)
    );
\dividend0[15]_i_1__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => p_1_in,
      I1 => \dividend0_reg[15]_i_2_n_5\,
      O => \dividend0[15]_i_1__0_n_0\
    );
\dividend0[15]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_1_in,
      O => \dividend0[15]_i_3_n_0\
    );
\dividend0[15]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[14]\,
      O => \dividend0[15]_i_4_n_0\
    );
\dividend0[15]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[13]\,
      O => \dividend0[15]_i_5_n_0\
    );
\dividend0[1]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(1),
      O => grp_fu_166_p0(1)
    );
\dividend0[1]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[4]_i_2__0_n_7\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[1]\,
      O => \dividend0[1]_i_1__0_n_0\
    );
\dividend0[2]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(2),
      O => grp_fu_166_p0(2)
    );
\dividend0[2]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[4]_i_2__0_n_6\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[2]\,
      O => \dividend0[2]_i_1__0_n_0\
    );
\dividend0[3]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(3),
      O => grp_fu_166_p0(3)
    );
\dividend0[3]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[4]_i_2__0_n_5\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[3]\,
      O => \dividend0[3]_i_1__0_n_0\
    );
\dividend0[4]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(4),
      O => grp_fu_166_p0(4)
    );
\dividend0[4]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[4]_i_2__0_n_4\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[4]\,
      O => \dividend0[4]_i_1__0_n_0\
    );
\dividend0[4]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[0]\,
      O => \dividend0[4]_i_3_n_0\
    );
\dividend0[4]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[4]\,
      O => \dividend0[4]_i_4_n_0\
    );
\dividend0[4]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[3]\,
      O => \dividend0[4]_i_5_n_0\
    );
\dividend0[4]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[2]\,
      O => \dividend0[4]_i_6_n_0\
    );
\dividend0[4]_i_7\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[1]\,
      O => \dividend0[4]_i_7_n_0\
    );
\dividend0[5]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(5),
      O => grp_fu_166_p0(5)
    );
\dividend0[5]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[8]_i_2__0_n_7\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[5]\,
      O => \dividend0[5]_i_1__0_n_0\
    );
\dividend0[6]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(6),
      O => grp_fu_166_p0(6)
    );
\dividend0[6]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[8]_i_2__0_n_6\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[6]\,
      O => \dividend0[6]_i_1__0_n_0\
    );
\dividend0[7]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(7),
      O => grp_fu_166_p0(7)
    );
\dividend0[7]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[8]_i_2__0_n_5\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[7]\,
      O => \dividend0[7]_i_1__0_n_0\
    );
\dividend0[8]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(8),
      O => grp_fu_166_p0(8)
    );
\dividend0[8]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[8]_i_2__0_n_4\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[8]\,
      O => \dividend0[8]_i_1__0_n_0\
    );
\dividend0[8]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[8]\,
      O => \dividend0[8]_i_3_n_0\
    );
\dividend0[8]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[7]\,
      O => \dividend0[8]_i_4_n_0\
    );
\dividend0[8]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[6]\,
      O => \dividend0[8]_i_5_n_0\
    );
\dividend0[8]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[5]\,
      O => \dividend0[8]_i_6_n_0\
    );
\dividend0[9]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg[15]_0\(9),
      O => grp_fu_166_p0(9)
    );
\dividend0[9]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[12]_i_2__0_n_7\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[9]\,
      O => \dividend0[9]_i_1__0_n_0\
    );
\dividend0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(0),
      Q => \dividend0_reg_n_0_[0]\,
      R => '0'
    );
\dividend0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(10),
      Q => \dividend0_reg_n_0_[10]\,
      R => '0'
    );
\dividend0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(11),
      Q => \dividend0_reg_n_0_[11]\,
      R => '0'
    );
\dividend0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(12),
      Q => \dividend0_reg_n_0_[12]\,
      R => '0'
    );
\dividend0_reg[12]_i_2__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \dividend0_reg[8]_i_2__0_n_0\,
      CO(3) => \dividend0_reg[12]_i_2__0_n_0\,
      CO(2) => \dividend0_reg[12]_i_2__0_n_1\,
      CO(1) => \dividend0_reg[12]_i_2__0_n_2\,
      CO(0) => \dividend0_reg[12]_i_2__0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \dividend0_reg[12]_i_2__0_n_4\,
      O(2) => \dividend0_reg[12]_i_2__0_n_5\,
      O(1) => \dividend0_reg[12]_i_2__0_n_6\,
      O(0) => \dividend0_reg[12]_i_2__0_n_7\,
      S(3) => \dividend0[12]_i_3_n_0\,
      S(2) => \dividend0[12]_i_4_n_0\,
      S(1) => \dividend0[12]_i_5_n_0\,
      S(0) => \dividend0[12]_i_6_n_0\
    );
\dividend0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(13),
      Q => \dividend0_reg_n_0_[13]\,
      R => '0'
    );
\dividend0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(14),
      Q => \dividend0_reg_n_0_[14]\,
      R => '0'
    );
\dividend0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(15),
      Q => p_1_in,
      R => '0'
    );
\dividend0_reg[15]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \dividend0_reg[12]_i_2__0_n_0\,
      CO(3 downto 2) => \NLW_dividend0_reg[15]_i_2_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \dividend0_reg[15]_i_2_n_2\,
      CO(0) => \dividend0_reg[15]_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \NLW_dividend0_reg[15]_i_2_O_UNCONNECTED\(3),
      O(2) => \dividend0_reg[15]_i_2_n_5\,
      O(1) => \dividend0_reg[15]_i_2_n_6\,
      O(0) => \dividend0_reg[15]_i_2_n_7\,
      S(3) => '0',
      S(2) => \dividend0[15]_i_3_n_0\,
      S(1) => \dividend0[15]_i_4_n_0\,
      S(0) => \dividend0[15]_i_5_n_0\
    );
\dividend0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(1),
      Q => \dividend0_reg_n_0_[1]\,
      R => '0'
    );
\dividend0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(2),
      Q => \dividend0_reg_n_0_[2]\,
      R => '0'
    );
\dividend0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(3),
      Q => \dividend0_reg_n_0_[3]\,
      R => '0'
    );
\dividend0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(4),
      Q => \dividend0_reg_n_0_[4]\,
      R => '0'
    );
\dividend0_reg[4]_i_2__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \dividend0_reg[4]_i_2__0_n_0\,
      CO(2) => \dividend0_reg[4]_i_2__0_n_1\,
      CO(1) => \dividend0_reg[4]_i_2__0_n_2\,
      CO(0) => \dividend0_reg[4]_i_2__0_n_3\,
      CYINIT => \dividend0[4]_i_3_n_0\,
      DI(3 downto 0) => B"0000",
      O(3) => \dividend0_reg[4]_i_2__0_n_4\,
      O(2) => \dividend0_reg[4]_i_2__0_n_5\,
      O(1) => \dividend0_reg[4]_i_2__0_n_6\,
      O(0) => \dividend0_reg[4]_i_2__0_n_7\,
      S(3) => \dividend0[4]_i_4_n_0\,
      S(2) => \dividend0[4]_i_5_n_0\,
      S(1) => \dividend0[4]_i_6_n_0\,
      S(0) => \dividend0[4]_i_7_n_0\
    );
\dividend0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(5),
      Q => \dividend0_reg_n_0_[5]\,
      R => '0'
    );
\dividend0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(6),
      Q => \dividend0_reg_n_0_[6]\,
      R => '0'
    );
\dividend0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(7),
      Q => \dividend0_reg_n_0_[7]\,
      R => '0'
    );
\dividend0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(8),
      Q => \dividend0_reg_n_0_[8]\,
      R => '0'
    );
\dividend0_reg[8]_i_2__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \dividend0_reg[4]_i_2__0_n_0\,
      CO(3) => \dividend0_reg[8]_i_2__0_n_0\,
      CO(2) => \dividend0_reg[8]_i_2__0_n_1\,
      CO(1) => \dividend0_reg[8]_i_2__0_n_2\,
      CO(0) => \dividend0_reg[8]_i_2__0_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \dividend0_reg[8]_i_2__0_n_4\,
      O(2) => \dividend0_reg[8]_i_2__0_n_5\,
      O(1) => \dividend0_reg[8]_i_2__0_n_6\,
      O(0) => \dividend0_reg[8]_i_2__0_n_7\,
      S(3) => \dividend0[8]_i_3_n_0\,
      S(2) => \dividend0[8]_i_4_n_0\,
      S(1) => \dividend0[8]_i_5_n_0\,
      S(0) => \dividend0[8]_i_6_n_0\
    );
\dividend0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_166_p0(9),
      Q => \dividend0_reg_n_0_[9]\,
      R => '0'
    );
\divisor0[6]_i_1__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => \divisor0_reg[7]_0\(0),
      I1 => \divisor0_reg[7]_0\(1),
      O => \divisor0[6]_i_1__0_n_0\
    );
\divisor0[7]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => \divisor0_reg[7]_0\(1),
      I1 => \divisor0_reg[7]_0\(0),
      I2 => \divisor0_reg[7]_0\(2),
      O => \divisor0[7]_i_1__0_n_0\
    );
\divisor0[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"40"
    )
        port map (
      I0 => \divisor0_reg[7]_0\(2),
      I1 => \divisor0_reg[7]_0\(0),
      I2 => \divisor0_reg[7]_0\(1),
      O => sub_ln25_fu_156_p2(8)
    );
\divisor0[9]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"F7"
    )
        port map (
      I0 => \divisor0_reg[7]_0\(1),
      I1 => \divisor0_reg[7]_0\(0),
      I2 => \divisor0_reg[7]_0\(2),
      O => \divisor0[9]_i_1__0_n_0\
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0_reg[7]_0\(0),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0[6]_i_1__0_n_0\,
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0[7]_i_1__0_n_0\,
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => sub_ln25_fu_156_p2(8),
      Q => \divisor0_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \divisor0[9]_i_1__0_n_0\,
      Q => \divisor0_reg_n_0_[9]\,
      R => '0'
    );
fn1_srem_16ns_11ns_16_20_seq_1_div_u_0: entity work.bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div_u
     port map (
      D(14) => \dividend0[15]_i_1__0_n_0\,
      D(13) => \dividend0[14]_i_1__0_n_0\,
      D(12) => \dividend0[13]_i_1__0_n_0\,
      D(11) => \dividend0[12]_i_1__0_n_0\,
      D(10) => \dividend0[11]_i_1__0_n_0\,
      D(9) => \dividend0[10]_i_1__0_n_0\,
      D(8) => \dividend0[9]_i_1__0_n_0\,
      D(7) => \dividend0[8]_i_1__0_n_0\,
      D(6) => \dividend0[7]_i_1__0_n_0\,
      D(5) => \dividend0[6]_i_1__0_n_0\,
      D(4) => \dividend0[5]_i_1__0_n_0\,
      D(3) => \dividend0[4]_i_1__0_n_0\,
      D(2) => \dividend0[3]_i_1__0_n_0\,
      D(1) => \dividend0[2]_i_1__0_n_0\,
      D(0) => \dividend0[1]_i_1__0_n_0\,
      E(0) => start0_reg_n_0,
      O19(15) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_1,
      O19(14) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_2,
      O19(13) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_3,
      O19(12) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_4,
      O19(11) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_5,
      O19(10) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_6,
      O19(9) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_7,
      O19(8) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_8,
      O19(7) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_9,
      O19(6) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_10,
      O19(5) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_11,
      O19(4) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_12,
      O19(3) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_13,
      O19(2) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_14,
      O19(1) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_15,
      O19(0) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_16,
      Q(1) => p_1_in,
      Q(0) => \dividend0_reg_n_0_[0]\,
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      \divisor0_reg[9]_0\(4) => \divisor0_reg_n_0_[9]\,
      \divisor0_reg[9]_0\(3) => \divisor0_reg_n_0_[8]\,
      \divisor0_reg[9]_0\(2) => \divisor0_reg_n_0_[7]\,
      \divisor0_reg[9]_0\(1) => \divisor0_reg_n_0_[6]\,
      \divisor0_reg[9]_0\(0) => \divisor0_reg_n_0_[5]\,
      \r_stage_reg[16]_0\(0) => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      \r_stage_reg[16]_1\ => \r_stage_reg[16]\
    );
\remd_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_16,
      Q => ap_return(0),
      R => '0'
    );
\remd_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_6,
      Q => ap_return(10),
      R => '0'
    );
\remd_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_5,
      Q => ap_return(11),
      R => '0'
    );
\remd_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_4,
      Q => ap_return(12),
      R => '0'
    );
\remd_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_3,
      Q => ap_return(13),
      R => '0'
    );
\remd_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_2,
      Q => ap_return(14),
      R => '0'
    );
\remd_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_1,
      Q => ap_return(15),
      R => '0'
    );
\remd_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_15,
      Q => ap_return(1),
      R => '0'
    );
\remd_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_14,
      Q => ap_return(2),
      R => '0'
    );
\remd_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_13,
      Q => ap_return(3),
      R => '0'
    );
\remd_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_12,
      Q => ap_return(4),
      R => '0'
    );
\remd_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_11,
      Q => ap_return(5),
      R => '0'
    );
\remd_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_10,
      Q => ap_return(6),
      R => '0'
    );
\remd_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_9,
      Q => ap_return(7),
      R => '0'
    );
\remd_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_8,
      Q => ap_return(8),
      R => '0'
    );
\remd_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_0,
      D => fn1_srem_16ns_11ns_16_20_seq_1_div_u_0_n_7,
      Q => ap_return(9),
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
      Q => start0_reg_n_0,
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div is
  port (
    D : out STD_LOGIC_VECTOR ( 5 downto 0 );
    \r_stage_reg[0]\ : out STD_LOGIC;
    r_stage_reg_r_5 : out STD_LOGIC;
    r_stage_reg_r_13 : out STD_LOGIC;
    \r_stage_reg[17]\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[15]_0\ : out STD_LOGIC_VECTOR ( 15 downto 0 );
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 15 downto 0 );
    ap_rst : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 29 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div : entity is "fn1_srem_17s_32ns_16_21_seq_1_div";
end bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div is
  signal \^d\ : STD_LOGIC_VECTOR ( 5 downto 0 );
  signal \dividend0[10]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[11]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_3_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_4_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_5_n_0\ : STD_LOGIC;
  signal \dividend0[12]_i_6_n_0\ : STD_LOGIC;
  signal \dividend0[13]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[14]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[15]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[16]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[16]_i_3_n_0\ : STD_LOGIC;
  signal \dividend0[16]_i_4_n_0\ : STD_LOGIC;
  signal \dividend0[16]_i_5_n_0\ : STD_LOGIC;
  signal \dividend0[16]_i_6_n_0\ : STD_LOGIC;
  signal \dividend0[1]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[2]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[3]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_3_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_4_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_5_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_6_n_0\ : STD_LOGIC;
  signal \dividend0[4]_i_7_n_0\ : STD_LOGIC;
  signal \dividend0[5]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[6]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[7]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_3_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_4_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_5_n_0\ : STD_LOGIC;
  signal \dividend0[8]_i_6_n_0\ : STD_LOGIC;
  signal \dividend0[9]_i_1_n_0\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2_n_0\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2_n_1\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2_n_2\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2_n_3\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2_n_4\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2_n_5\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2_n_6\ : STD_LOGIC;
  signal \dividend0_reg[12]_i_2_n_7\ : STD_LOGIC;
  signal \dividend0_reg[16]_i_2_n_1\ : STD_LOGIC;
  signal \dividend0_reg[16]_i_2_n_2\ : STD_LOGIC;
  signal \dividend0_reg[16]_i_2_n_3\ : STD_LOGIC;
  signal \dividend0_reg[16]_i_2_n_4\ : STD_LOGIC;
  signal \dividend0_reg[16]_i_2_n_5\ : STD_LOGIC;
  signal \dividend0_reg[16]_i_2_n_6\ : STD_LOGIC;
  signal \dividend0_reg[16]_i_2_n_7\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2_n_0\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2_n_1\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2_n_2\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2_n_3\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2_n_4\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2_n_5\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2_n_6\ : STD_LOGIC;
  signal \dividend0_reg[4]_i_2_n_7\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2_n_0\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2_n_1\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2_n_2\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2_n_3\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2_n_4\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2_n_5\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2_n_6\ : STD_LOGIC;
  signal \dividend0_reg[8]_i_2_n_7\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[10]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[11]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[12]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[13]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[14]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[6]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[7]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[8]\ : STD_LOGIC;
  signal \dividend0_reg_n_0_[9]\ : STD_LOGIC;
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
  signal \divisor0_reg_n_0_[3]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[4]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[5]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[8]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_10 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_11 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_12 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_13 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_14 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_15 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_16 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_17 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_18 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_19 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_4 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_5 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_6 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_7 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_8 : STD_LOGIC;
  signal fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_9 : STD_LOGIC;
  signal p_1_in : STD_LOGIC;
  signal \^r_stage_reg[17]\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_dividend0_reg[16]_i_2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \dividend0[10]_i_1\ : label is "soft_lutpair42";
  attribute SOFT_HLUTNM of \dividend0[11]_i_1\ : label is "soft_lutpair43";
  attribute SOFT_HLUTNM of \dividend0[12]_i_1\ : label is "soft_lutpair42";
  attribute SOFT_HLUTNM of \dividend0[13]_i_1\ : label is "soft_lutpair41";
  attribute SOFT_HLUTNM of \dividend0[14]_i_1\ : label is "soft_lutpair40";
  attribute SOFT_HLUTNM of \dividend0[15]_i_1\ : label is "soft_lutpair41";
  attribute SOFT_HLUTNM of \dividend0[16]_i_1\ : label is "soft_lutpair40";
  attribute SOFT_HLUTNM of \dividend0[1]_i_1\ : label is "soft_lutpair47";
  attribute SOFT_HLUTNM of \dividend0[2]_i_1\ : label is "soft_lutpair46";
  attribute SOFT_HLUTNM of \dividend0[3]_i_1\ : label is "soft_lutpair47";
  attribute SOFT_HLUTNM of \dividend0[4]_i_1\ : label is "soft_lutpair46";
  attribute SOFT_HLUTNM of \dividend0[5]_i_1\ : label is "soft_lutpair45";
  attribute SOFT_HLUTNM of \dividend0[6]_i_1\ : label is "soft_lutpair44";
  attribute SOFT_HLUTNM of \dividend0[7]_i_1\ : label is "soft_lutpair45";
  attribute SOFT_HLUTNM of \dividend0[8]_i_1\ : label is "soft_lutpair44";
  attribute SOFT_HLUTNM of \dividend0[9]_i_1\ : label is "soft_lutpair43";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \dividend0_reg[12]_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \dividend0_reg[16]_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \dividend0_reg[4]_i_2\ : label is 35;
  attribute ADDER_THRESHOLD of \dividend0_reg[8]_i_2\ : label is 35;
begin
  D(5 downto 0) <= \^d\(5 downto 0);
  \r_stage_reg[17]\(0) <= \^r_stage_reg[17]\(0);
\dividend0[10]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[12]_i_2_n_6\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[10]\,
      O => \dividend0[10]_i_1_n_0\
    );
\dividend0[11]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[12]_i_2_n_5\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[11]\,
      O => \dividend0[11]_i_1_n_0\
    );
\dividend0[12]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[12]_i_2_n_4\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[12]\,
      O => \dividend0[12]_i_1_n_0\
    );
\dividend0[12]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[12]\,
      O => \dividend0[12]_i_3_n_0\
    );
\dividend0[12]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[11]\,
      O => \dividend0[12]_i_4_n_0\
    );
\dividend0[12]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[10]\,
      O => \dividend0[12]_i_5_n_0\
    );
\dividend0[12]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[9]\,
      O => \dividend0[12]_i_6_n_0\
    );
\dividend0[13]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[16]_i_2_n_7\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[13]\,
      O => \dividend0[13]_i_1_n_0\
    );
\dividend0[14]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[16]_i_2_n_6\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[14]\,
      O => \dividend0[14]_i_1_n_0\
    );
\dividend0[15]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => p_1_in,
      I1 => \dividend0_reg[16]_i_2_n_5\,
      O => \dividend0[15]_i_1_n_0\
    );
\dividend0[16]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => p_1_in,
      I1 => \dividend0_reg[16]_i_2_n_4\,
      O => \dividend0[16]_i_1_n_0\
    );
\dividend0[16]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_1_in,
      O => \dividend0[16]_i_3_n_0\
    );
\dividend0[16]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p_1_in,
      O => \dividend0[16]_i_4_n_0\
    );
\dividend0[16]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[14]\,
      O => \dividend0[16]_i_5_n_0\
    );
\dividend0[16]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[13]\,
      O => \dividend0[16]_i_6_n_0\
    );
\dividend0[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[4]_i_2_n_7\,
      I1 => p_1_in,
      I2 => \^d\(1),
      O => \dividend0[1]_i_1_n_0\
    );
\dividend0[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[4]_i_2_n_6\,
      I1 => p_1_in,
      I2 => \^d\(2),
      O => \dividend0[2]_i_1_n_0\
    );
\dividend0[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[4]_i_2_n_5\,
      I1 => p_1_in,
      I2 => \^d\(3),
      O => \dividend0[3]_i_1_n_0\
    );
\dividend0[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[4]_i_2_n_4\,
      I1 => p_1_in,
      I2 => \^d\(4),
      O => \dividend0[4]_i_1_n_0\
    );
\dividend0[4]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^d\(0),
      O => \dividend0[4]_i_3_n_0\
    );
\dividend0[4]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^d\(4),
      O => \dividend0[4]_i_4_n_0\
    );
\dividend0[4]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^d\(3),
      O => \dividend0[4]_i_5_n_0\
    );
\dividend0[4]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^d\(2),
      O => \dividend0[4]_i_6_n_0\
    );
\dividend0[4]_i_7\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^d\(1),
      O => \dividend0[4]_i_7_n_0\
    );
\dividend0[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[8]_i_2_n_7\,
      I1 => p_1_in,
      I2 => \^d\(5),
      O => \dividend0[5]_i_1_n_0\
    );
\dividend0[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[8]_i_2_n_6\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[6]\,
      O => \dividend0[6]_i_1_n_0\
    );
\dividend0[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[8]_i_2_n_5\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[7]\,
      O => \dividend0[7]_i_1_n_0\
    );
\dividend0[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[8]_i_2_n_4\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[8]\,
      O => \dividend0[8]_i_1_n_0\
    );
\dividend0[8]_i_3\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[8]\,
      O => \dividend0[8]_i_3_n_0\
    );
\dividend0[8]_i_4\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[7]\,
      O => \dividend0[8]_i_4_n_0\
    );
\dividend0[8]_i_5\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \dividend0_reg_n_0_[6]\,
      O => \dividend0[8]_i_5_n_0\
    );
\dividend0[8]_i_6\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^d\(5),
      O => \dividend0[8]_i_6_n_0\
    );
\dividend0[9]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \dividend0_reg[12]_i_2_n_7\,
      I1 => p_1_in,
      I2 => \dividend0_reg_n_0_[9]\,
      O => \dividend0[9]_i_1_n_0\
    );
\dividend0_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(0),
      Q => \^d\(0),
      R => '0'
    );
\dividend0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(10),
      Q => \dividend0_reg_n_0_[10]\,
      R => '0'
    );
\dividend0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(11),
      Q => \dividend0_reg_n_0_[11]\,
      R => '0'
    );
\dividend0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(12),
      Q => \dividend0_reg_n_0_[12]\,
      R => '0'
    );
\dividend0_reg[12]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \dividend0_reg[8]_i_2_n_0\,
      CO(3) => \dividend0_reg[12]_i_2_n_0\,
      CO(2) => \dividend0_reg[12]_i_2_n_1\,
      CO(1) => \dividend0_reg[12]_i_2_n_2\,
      CO(0) => \dividend0_reg[12]_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \dividend0_reg[12]_i_2_n_4\,
      O(2) => \dividend0_reg[12]_i_2_n_5\,
      O(1) => \dividend0_reg[12]_i_2_n_6\,
      O(0) => \dividend0_reg[12]_i_2_n_7\,
      S(3) => \dividend0[12]_i_3_n_0\,
      S(2) => \dividend0[12]_i_4_n_0\,
      S(1) => \dividend0[12]_i_5_n_0\,
      S(0) => \dividend0[12]_i_6_n_0\
    );
\dividend0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(13),
      Q => \dividend0_reg_n_0_[13]\,
      R => '0'
    );
\dividend0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(14),
      Q => \dividend0_reg_n_0_[14]\,
      R => '0'
    );
\dividend0_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(15),
      Q => p_1_in,
      R => '0'
    );
\dividend0_reg[16]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \dividend0_reg[12]_i_2_n_0\,
      CO(3) => \NLW_dividend0_reg[16]_i_2_CO_UNCONNECTED\(3),
      CO(2) => \dividend0_reg[16]_i_2_n_1\,
      CO(1) => \dividend0_reg[16]_i_2_n_2\,
      CO(0) => \dividend0_reg[16]_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \dividend0_reg[16]_i_2_n_4\,
      O(2) => \dividend0_reg[16]_i_2_n_5\,
      O(1) => \dividend0_reg[16]_i_2_n_6\,
      O(0) => \dividend0_reg[16]_i_2_n_7\,
      S(3) => \dividend0[16]_i_3_n_0\,
      S(2) => \dividend0[16]_i_4_n_0\,
      S(1) => \dividend0[16]_i_5_n_0\,
      S(0) => \dividend0[16]_i_6_n_0\
    );
\dividend0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(1),
      Q => \^d\(1),
      R => '0'
    );
\dividend0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(2),
      Q => \^d\(2),
      R => '0'
    );
\dividend0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(3),
      Q => \^d\(3),
      R => '0'
    );
\dividend0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(4),
      Q => \^d\(4),
      R => '0'
    );
\dividend0_reg[4]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \dividend0_reg[4]_i_2_n_0\,
      CO(2) => \dividend0_reg[4]_i_2_n_1\,
      CO(1) => \dividend0_reg[4]_i_2_n_2\,
      CO(0) => \dividend0_reg[4]_i_2_n_3\,
      CYINIT => \dividend0[4]_i_3_n_0\,
      DI(3 downto 0) => B"0000",
      O(3) => \dividend0_reg[4]_i_2_n_4\,
      O(2) => \dividend0_reg[4]_i_2_n_5\,
      O(1) => \dividend0_reg[4]_i_2_n_6\,
      O(0) => \dividend0_reg[4]_i_2_n_7\,
      S(3) => \dividend0[4]_i_4_n_0\,
      S(2) => \dividend0[4]_i_5_n_0\,
      S(1) => \dividend0[4]_i_6_n_0\,
      S(0) => \dividend0[4]_i_7_n_0\
    );
\dividend0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(5),
      Q => \^d\(5),
      R => '0'
    );
\dividend0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(6),
      Q => \dividend0_reg_n_0_[6]\,
      R => '0'
    );
\dividend0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(7),
      Q => \dividend0_reg_n_0_[7]\,
      R => '0'
    );
\dividend0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(8),
      Q => \dividend0_reg_n_0_[8]\,
      R => '0'
    );
\dividend0_reg[8]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \dividend0_reg[4]_i_2_n_0\,
      CO(3) => \dividend0_reg[8]_i_2_n_0\,
      CO(2) => \dividend0_reg[8]_i_2_n_1\,
      CO(1) => \dividend0_reg[8]_i_2_n_2\,
      CO(0) => \dividend0_reg[8]_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \dividend0_reg[8]_i_2_n_4\,
      O(2) => \dividend0_reg[8]_i_2_n_5\,
      O(1) => \dividend0_reg[8]_i_2_n_6\,
      O(0) => \dividend0_reg[8]_i_2_n_7\,
      S(3) => \dividend0[8]_i_3_n_0\,
      S(2) => \dividend0[8]_i_4_n_0\,
      S(1) => \dividend0[8]_i_5_n_0\,
      S(0) => \dividend0[8]_i_6_n_0\
    );
\dividend0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => p(9),
      Q => \dividend0_reg_n_0_[9]\,
      R => '0'
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(9),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(10),
      Q => \divisor0_reg_n_0_[11]\,
      R => '0'
    );
\divisor0_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(11),
      Q => \divisor0_reg_n_0_[12]\,
      R => '0'
    );
\divisor0_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(12),
      Q => \divisor0_reg_n_0_[13]\,
      R => '0'
    );
\divisor0_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(13),
      Q => \divisor0_reg_n_0_[14]\,
      R => '0'
    );
\divisor0_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(14),
      Q => \divisor0_reg_n_0_[15]\,
      R => '0'
    );
\divisor0_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(15),
      Q => \divisor0_reg_n_0_[16]\,
      R => '0'
    );
\divisor0_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(16),
      Q => \divisor0_reg_n_0_[17]\,
      R => '0'
    );
\divisor0_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(17),
      Q => \divisor0_reg_n_0_[18]\,
      R => '0'
    );
\divisor0_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(18),
      Q => \divisor0_reg_n_0_[19]\,
      R => '0'
    );
\divisor0_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(0),
      Q => \divisor0_reg_n_0_[1]\,
      R => '0'
    );
\divisor0_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(19),
      Q => \divisor0_reg_n_0_[20]\,
      R => '0'
    );
\divisor0_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(20),
      Q => \divisor0_reg_n_0_[21]\,
      R => '0'
    );
\divisor0_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(21),
      Q => \divisor0_reg_n_0_[22]\,
      R => '0'
    );
\divisor0_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(22),
      Q => \divisor0_reg_n_0_[23]\,
      R => '0'
    );
\divisor0_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(23),
      Q => \divisor0_reg_n_0_[24]\,
      R => '0'
    );
\divisor0_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(24),
      Q => \divisor0_reg_n_0_[25]\,
      R => '0'
    );
\divisor0_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(25),
      Q => \divisor0_reg_n_0_[26]\,
      R => '0'
    );
\divisor0_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(26),
      Q => \divisor0_reg_n_0_[27]\,
      R => '0'
    );
\divisor0_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(27),
      Q => \divisor0_reg_n_0_[28]\,
      R => '0'
    );
\divisor0_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(28),
      Q => \divisor0_reg_n_0_[29]\,
      R => '0'
    );
\divisor0_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(1),
      Q => \divisor0_reg_n_0_[2]\,
      R => '0'
    );
\divisor0_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(29),
      Q => \divisor0_reg_n_0_[30]\,
      R => '0'
    );
\divisor0_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(2),
      Q => \divisor0_reg_n_0_[3]\,
      R => '0'
    );
\divisor0_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(3),
      Q => \divisor0_reg_n_0_[4]\,
      R => '0'
    );
\divisor0_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(4),
      Q => \divisor0_reg_n_0_[5]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(5),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(6),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(7),
      Q => \divisor0_reg_n_0_[8]\,
      R => '0'
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => Q(8),
      Q => \divisor0_reg_n_0_[9]\,
      R => '0'
    );
fn1_srem_17s_32ns_16_21_seq_1_div_u_0: entity work.bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div_u
     port map (
      D(15) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_4,
      D(14) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_5,
      D(13) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_6,
      D(12) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_7,
      D(11) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_8,
      D(10) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_9,
      D(9) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_10,
      D(8) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_11,
      D(7) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_12,
      D(6) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_13,
      D(5) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_14,
      D(4) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_15,
      D(3) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_16,
      D(2) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_17,
      D(1) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_18,
      D(0) => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_19,
      E(0) => E(0),
      Q(0) => p_1_in,
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      \dividend0_reg[16]_0\(16) => \dividend0[16]_i_1_n_0\,
      \dividend0_reg[16]_0\(15) => \dividend0[15]_i_1_n_0\,
      \dividend0_reg[16]_0\(14) => \dividend0[14]_i_1_n_0\,
      \dividend0_reg[16]_0\(13) => \dividend0[13]_i_1_n_0\,
      \dividend0_reg[16]_0\(12) => \dividend0[12]_i_1_n_0\,
      \dividend0_reg[16]_0\(11) => \dividend0[11]_i_1_n_0\,
      \dividend0_reg[16]_0\(10) => \dividend0[10]_i_1_n_0\,
      \dividend0_reg[16]_0\(9) => \dividend0[9]_i_1_n_0\,
      \dividend0_reg[16]_0\(8) => \dividend0[8]_i_1_n_0\,
      \dividend0_reg[16]_0\(7) => \dividend0[7]_i_1_n_0\,
      \dividend0_reg[16]_0\(6) => \dividend0[6]_i_1_n_0\,
      \dividend0_reg[16]_0\(5) => \dividend0[5]_i_1_n_0\,
      \dividend0_reg[16]_0\(4) => \dividend0[4]_i_1_n_0\,
      \dividend0_reg[16]_0\(3) => \dividend0[3]_i_1_n_0\,
      \dividend0_reg[16]_0\(2) => \dividend0[2]_i_1_n_0\,
      \dividend0_reg[16]_0\(1) => \dividend0[1]_i_1_n_0\,
      \dividend0_reg[16]_0\(0) => \^d\(0),
      \divisor0_reg[30]_0\(29) => \divisor0_reg_n_0_[30]\,
      \divisor0_reg[30]_0\(28) => \divisor0_reg_n_0_[29]\,
      \divisor0_reg[30]_0\(27) => \divisor0_reg_n_0_[28]\,
      \divisor0_reg[30]_0\(26) => \divisor0_reg_n_0_[27]\,
      \divisor0_reg[30]_0\(25) => \divisor0_reg_n_0_[26]\,
      \divisor0_reg[30]_0\(24) => \divisor0_reg_n_0_[25]\,
      \divisor0_reg[30]_0\(23) => \divisor0_reg_n_0_[24]\,
      \divisor0_reg[30]_0\(22) => \divisor0_reg_n_0_[23]\,
      \divisor0_reg[30]_0\(21) => \divisor0_reg_n_0_[22]\,
      \divisor0_reg[30]_0\(20) => \divisor0_reg_n_0_[21]\,
      \divisor0_reg[30]_0\(19) => \divisor0_reg_n_0_[20]\,
      \divisor0_reg[30]_0\(18) => \divisor0_reg_n_0_[19]\,
      \divisor0_reg[30]_0\(17) => \divisor0_reg_n_0_[18]\,
      \divisor0_reg[30]_0\(16) => \divisor0_reg_n_0_[17]\,
      \divisor0_reg[30]_0\(15) => \divisor0_reg_n_0_[16]\,
      \divisor0_reg[30]_0\(14) => \divisor0_reg_n_0_[15]\,
      \divisor0_reg[30]_0\(13) => \divisor0_reg_n_0_[14]\,
      \divisor0_reg[30]_0\(12) => \divisor0_reg_n_0_[13]\,
      \divisor0_reg[30]_0\(11) => \divisor0_reg_n_0_[12]\,
      \divisor0_reg[30]_0\(10) => \divisor0_reg_n_0_[11]\,
      \divisor0_reg[30]_0\(9) => \divisor0_reg_n_0_[10]\,
      \divisor0_reg[30]_0\(8) => \divisor0_reg_n_0_[9]\,
      \divisor0_reg[30]_0\(7) => \divisor0_reg_n_0_[8]\,
      \divisor0_reg[30]_0\(6) => \divisor0_reg_n_0_[7]\,
      \divisor0_reg[30]_0\(5) => \divisor0_reg_n_0_[6]\,
      \divisor0_reg[30]_0\(4) => \divisor0_reg_n_0_[5]\,
      \divisor0_reg[30]_0\(3) => \divisor0_reg_n_0_[4]\,
      \divisor0_reg[30]_0\(2) => \divisor0_reg_n_0_[3]\,
      \divisor0_reg[30]_0\(1) => \divisor0_reg_n_0_[2]\,
      \divisor0_reg[30]_0\(0) => \divisor0_reg_n_0_[1]\,
      \r_stage_reg[0]_0\ => \r_stage_reg[0]\,
      \r_stage_reg[17]_0\(0) => \^r_stage_reg[17]\(0),
      r_stage_reg_r_13_0 => r_stage_reg_r_13,
      r_stage_reg_r_5_0 => r_stage_reg_r_5
    );
\remd_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_19,
      Q => \remd_reg[15]_0\(0),
      R => '0'
    );
\remd_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_9,
      Q => \remd_reg[15]_0\(10),
      R => '0'
    );
\remd_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_8,
      Q => \remd_reg[15]_0\(11),
      R => '0'
    );
\remd_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_7,
      Q => \remd_reg[15]_0\(12),
      R => '0'
    );
\remd_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_6,
      Q => \remd_reg[15]_0\(13),
      R => '0'
    );
\remd_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_5,
      Q => \remd_reg[15]_0\(14),
      R => '0'
    );
\remd_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_4,
      Q => \remd_reg[15]_0\(15),
      R => '0'
    );
\remd_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_18,
      Q => \remd_reg[15]_0\(1),
      R => '0'
    );
\remd_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_17,
      Q => \remd_reg[15]_0\(2),
      R => '0'
    );
\remd_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_16,
      Q => \remd_reg[15]_0\(3),
      R => '0'
    );
\remd_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_15,
      Q => \remd_reg[15]_0\(4),
      R => '0'
    );
\remd_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_14,
      Q => \remd_reg[15]_0\(5),
      R => '0'
    );
\remd_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_13,
      Q => \remd_reg[15]_0\(6),
      R => '0'
    );
\remd_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_12,
      Q => \remd_reg[15]_0\(7),
      R => '0'
    );
\remd_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_11,
      Q => \remd_reg[15]_0\(8),
      R => '0'
    );
\remd_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^r_stage_reg[17]\(0),
      D => fn1_srem_17s_32ns_16_21_seq_1_div_u_0_n_10,
      Q => \remd_reg[15]_0\(9),
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div is
  port (
    \remd_reg[2]_0\ : out STD_LOGIC;
    \remd_reg[1]_0\ : out STD_LOGIC;
    \remd_reg[0]_0\ : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    \r_stage_reg[8]\ : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    urem_ln20_reg_207 : in STD_LOGIC_VECTOR ( 2 downto 0 );
    ap_start : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 1 downto 0 );
    D : in STD_LOGIC_VECTOR ( 5 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div : entity is "fn1_urem_8ns_11ns_3_12_seq_1_div";
end bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div is
  signal \divisor0_reg_n_0_[10]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[6]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[7]\ : STD_LOGIC;
  signal \divisor0_reg_n_0_[9]\ : STD_LOGIC;
  signal done0 : STD_LOGIC;
  signal grp_fu_68_ap_start : STD_LOGIC;
  signal grp_fu_68_p1 : STD_LOGIC_VECTOR ( 10 downto 6 );
  signal remd : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal \remd[0]_i_1_n_0\ : STD_LOGIC;
  signal \remd[1]_i_1_n_0\ : STD_LOGIC;
  signal \remd[2]_i_1_n_0\ : STD_LOGIC;
  signal remd_tmp : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal start0 : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \divisor0[10]_i_1\ : label is "soft_lutpair53";
  attribute SOFT_HLUTNM of \divisor0[6]_i_1\ : label is "soft_lutpair53";
  attribute SOFT_HLUTNM of \divisor0[7]_i_1\ : label is "soft_lutpair52";
  attribute SOFT_HLUTNM of \divisor0[9]_i_1\ : label is "soft_lutpair52";
  attribute SOFT_HLUTNM of \remd[0]_i_1\ : label is "soft_lutpair51";
  attribute SOFT_HLUTNM of \remd[1]_i_1\ : label is "soft_lutpair50";
  attribute SOFT_HLUTNM of \remd[2]_i_1\ : label is "soft_lutpair49";
  attribute SOFT_HLUTNM of \urem_ln20_reg_207[0]_i_1\ : label is "soft_lutpair51";
  attribute SOFT_HLUTNM of \urem_ln20_reg_207[1]_i_1\ : label is "soft_lutpair50";
  attribute SOFT_HLUTNM of \urem_ln20_reg_207[2]_i_1\ : label is "soft_lutpair49";
begin
\divisor0[10]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => p(0),
      I1 => p(1),
      O => grp_fu_68_p1(10)
    );
\divisor0[6]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(0),
      O => grp_fu_68_p1(6)
    );
\divisor0[7]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => p(1),
      I1 => p(0),
      O => grp_fu_68_p1(7)
    );
\divisor0[9]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => p(1),
      I1 => p(0),
      O => grp_fu_68_p1(9)
    );
\divisor0_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_68_p1(10),
      Q => \divisor0_reg_n_0_[10]\,
      R => '0'
    );
\divisor0_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_68_p1(6),
      Q => \divisor0_reg_n_0_[6]\,
      R => '0'
    );
\divisor0_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_68_p1(7),
      Q => \divisor0_reg_n_0_[7]\,
      R => '0'
    );
\divisor0_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_68_p1(9),
      Q => \divisor0_reg_n_0_[9]\,
      R => '0'
    );
fn1_urem_8ns_11ns_3_12_seq_1_div_u_0: entity work.bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div_u
     port map (
      D(9) => \divisor0_reg_n_0_[10]\,
      D(8) => \divisor0_reg_n_0_[9]\,
      D(7) => \divisor0_reg_n_0_[7]\,
      D(6) => \divisor0_reg_n_0_[6]\,
      D(5 downto 0) => D(5 downto 0),
      E(0) => start0,
      Q(2 downto 0) => remd_tmp(2 downto 0),
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      done0 => done0,
      \r_stage_reg[8]_0\ => \r_stage_reg[8]\
    );
\remd[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => remd_tmp(0),
      I1 => done0,
      I2 => remd(0),
      O => \remd[0]_i_1_n_0\
    );
\remd[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => remd_tmp(1),
      I1 => done0,
      I2 => remd(1),
      O => \remd[1]_i_1_n_0\
    );
\remd[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => remd_tmp(2),
      I1 => done0,
      I2 => remd(2),
      O => \remd[2]_i_1_n_0\
    );
\remd_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd[0]_i_1_n_0\,
      Q => remd(0),
      R => '0'
    );
\remd_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd[1]_i_1_n_0\,
      Q => remd(1),
      R => '0'
    );
\remd_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \remd[2]_i_1_n_0\,
      Q => remd(2),
      R => '0'
    );
start0_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => ap_start,
      I1 => Q(0),
      O => grp_fu_68_ap_start
    );
start0_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => grp_fu_68_ap_start,
      Q => start0,
      R => '0'
    );
\urem_ln20_reg_207[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => remd(0),
      I1 => Q(1),
      I2 => urem_ln20_reg_207(0),
      O => \remd_reg[0]_0\
    );
\urem_ln20_reg_207[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => remd(1),
      I1 => Q(1),
      I2 => urem_ln20_reg_207(1),
      O => \remd_reg[1]_0\
    );
\urem_ln20_reg_207[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => remd(2),
      I1 => Q(1),
      I2 => urem_ln20_reg_207(2),
      O => \remd_reg[2]_0\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1 is
  port (
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    D : out STD_LOGIC_VECTOR ( 2 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    \dividend_tmp_reg[15]\ : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 15 downto 0 );
    urem_ln20_reg_207 : in STD_LOGIC_VECTOR ( 2 downto 0 );
    \quot_reg[0]\ : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1 : entity is "fn1_sdiv_17s_17ns_3_21_seq_1";
end bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1 is
begin
fn1_sdiv_17s_17ns_3_21_seq_1_div_U: entity work.bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1_div
     port map (
      D(2 downto 0) => D(2 downto 0),
      E(0) => E(0),
      Q(0) => Q(0),
      ap_clk => ap_clk,
      \dividend_tmp_reg[15]\ => \dividend_tmp_reg[15]\,
      p(15 downto 0) => p(15 downto 0),
      \quot_reg[0]_0\(0) => \quot_reg[0]\(0),
      urem_ln20_reg_207(2 downto 0) => urem_ln20_reg_207(2 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1 is
  port (
    ap_return : out STD_LOGIC_VECTOR ( 15 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    \r_stage_reg[16]\ : in STD_LOGIC;
    \divisor0_reg[7]\ : in STD_LOGIC_VECTOR ( 2 downto 0 );
    \dividend0_reg[15]\ : in STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1 : entity is "fn1_srem_16ns_11ns_16_20_seq_1";
end bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1 is
begin
fn1_srem_16ns_11ns_16_20_seq_1_div_U: entity work.bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1_div
     port map (
      Q(0) => Q(0),
      ap_clk => ap_clk,
      ap_return(15 downto 0) => ap_return(15 downto 0),
      ap_rst => ap_rst,
      \dividend0_reg[15]_0\(15 downto 0) => \dividend0_reg[15]\(15 downto 0),
      \divisor0_reg[7]_0\(2 downto 0) => \divisor0_reg[7]\(2 downto 0),
      \r_stage_reg[16]\ => \r_stage_reg[16]\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1 is
  port (
    D : out STD_LOGIC_VECTOR ( 5 downto 0 );
    \r_stage_reg[0]\ : out STD_LOGIC;
    r_stage_reg_r_5 : out STD_LOGIC;
    r_stage_reg_r_13 : out STD_LOGIC;
    \r_stage_reg[17]\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \remd_reg[15]\ : out STD_LOGIC_VECTOR ( 15 downto 0 );
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 15 downto 0 );
    ap_rst : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 29 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1 : entity is "fn1_srem_17s_32ns_16_21_seq_1";
end bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1 is
begin
fn1_srem_17s_32ns_16_21_seq_1_div_U: entity work.bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1_div
     port map (
      D(5 downto 0) => D(5 downto 0),
      E(0) => E(0),
      Q(29 downto 0) => Q(29 downto 0),
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      p(15 downto 0) => p(15 downto 0),
      \r_stage_reg[0]\ => \r_stage_reg[0]\,
      \r_stage_reg[17]\(0) => \r_stage_reg[17]\(0),
      r_stage_reg_r_13 => r_stage_reg_r_13,
      r_stage_reg_r_5 => r_stage_reg_r_5,
      \remd_reg[15]_0\(15 downto 0) => \remd_reg[15]\(15 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1 is
  port (
    \remd_reg[2]\ : out STD_LOGIC;
    \remd_reg[1]\ : out STD_LOGIC;
    \remd_reg[0]\ : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    \r_stage_reg[8]\ : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    urem_ln20_reg_207 : in STD_LOGIC_VECTOR ( 2 downto 0 );
    ap_start : in STD_LOGIC;
    p : in STD_LOGIC_VECTOR ( 1 downto 0 );
    D : in STD_LOGIC_VECTOR ( 5 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1 : entity is "fn1_urem_8ns_11ns_3_12_seq_1";
end bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1 is
begin
fn1_urem_8ns_11ns_3_12_seq_1_div_U: entity work.bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1_div
     port map (
      D(5 downto 0) => D(5 downto 0),
      Q(1 downto 0) => Q(1 downto 0),
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      ap_start => ap_start,
      p(1 downto 0) => p(1 downto 0),
      \r_stage_reg[8]\ => \r_stage_reg[8]\,
      \remd_reg[0]_0\ => \remd_reg[0]\,
      \remd_reg[1]_0\ => \remd_reg[1]\,
      \remd_reg[2]_0\ => \remd_reg[2]\,
      urem_ln20_reg_207(2 downto 0) => urem_ln20_reg_207(2 downto 0)
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
    p : in STD_LOGIC_VECTOR ( 15 downto 0 );
    ap_return : out STD_LOGIC_VECTOR ( 63 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fn1 : entity is "fn1";
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000000000000001";
  attribute ap_ST_fsm_state10 : string;
  attribute ap_ST_fsm_state10 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000001000000000";
  attribute ap_ST_fsm_state11 : string;
  attribute ap_ST_fsm_state11 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000010000000000";
  attribute ap_ST_fsm_state12 : string;
  attribute ap_ST_fsm_state12 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000100000000000";
  attribute ap_ST_fsm_state13 : string;
  attribute ap_ST_fsm_state13 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000001000000000000";
  attribute ap_ST_fsm_state14 : string;
  attribute ap_ST_fsm_state14 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000010000000000000";
  attribute ap_ST_fsm_state15 : string;
  attribute ap_ST_fsm_state15 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000100000000000000";
  attribute ap_ST_fsm_state16 : string;
  attribute ap_ST_fsm_state16 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000001000000000000000";
  attribute ap_ST_fsm_state17 : string;
  attribute ap_ST_fsm_state17 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000010000000000000000";
  attribute ap_ST_fsm_state18 : string;
  attribute ap_ST_fsm_state18 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000100000000000000000";
  attribute ap_ST_fsm_state19 : string;
  attribute ap_ST_fsm_state19 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000001000000000000000000";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000000000000010";
  attribute ap_ST_fsm_state20 : string;
  attribute ap_ST_fsm_state20 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000010000000000000000000";
  attribute ap_ST_fsm_state21 : string;
  attribute ap_ST_fsm_state21 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000100000000000000000000";
  attribute ap_ST_fsm_state22 : string;
  attribute ap_ST_fsm_state22 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000001000000000000000000000";
  attribute ap_ST_fsm_state23 : string;
  attribute ap_ST_fsm_state23 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000010000000000000000000000";
  attribute ap_ST_fsm_state24 : string;
  attribute ap_ST_fsm_state24 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000100000000000000000000000";
  attribute ap_ST_fsm_state25 : string;
  attribute ap_ST_fsm_state25 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000001000000000000000000000000";
  attribute ap_ST_fsm_state26 : string;
  attribute ap_ST_fsm_state26 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000010000000000000000000000000";
  attribute ap_ST_fsm_state27 : string;
  attribute ap_ST_fsm_state27 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000100000000000000000000000000";
  attribute ap_ST_fsm_state28 : string;
  attribute ap_ST_fsm_state28 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000001000000000000000000000000000";
  attribute ap_ST_fsm_state29 : string;
  attribute ap_ST_fsm_state29 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000010000000000000000000000000000";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000000000000100";
  attribute ap_ST_fsm_state30 : string;
  attribute ap_ST_fsm_state30 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000100000000000000000000000000000";
  attribute ap_ST_fsm_state31 : string;
  attribute ap_ST_fsm_state31 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000001000000000000000000000000000000";
  attribute ap_ST_fsm_state32 : string;
  attribute ap_ST_fsm_state32 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000010000000000000000000000000000000";
  attribute ap_ST_fsm_state33 : string;
  attribute ap_ST_fsm_state33 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000100000000000000000000000000000000";
  attribute ap_ST_fsm_state34 : string;
  attribute ap_ST_fsm_state34 of bd_0_hls_inst_0_fn1 : entity is "42'b000000001000000000000000000000000000000000";
  attribute ap_ST_fsm_state35 : string;
  attribute ap_ST_fsm_state35 of bd_0_hls_inst_0_fn1 : entity is "42'b000000010000000000000000000000000000000000";
  attribute ap_ST_fsm_state36 : string;
  attribute ap_ST_fsm_state36 of bd_0_hls_inst_0_fn1 : entity is "42'b000000100000000000000000000000000000000000";
  attribute ap_ST_fsm_state37 : string;
  attribute ap_ST_fsm_state37 of bd_0_hls_inst_0_fn1 : entity is "42'b000001000000000000000000000000000000000000";
  attribute ap_ST_fsm_state38 : string;
  attribute ap_ST_fsm_state38 of bd_0_hls_inst_0_fn1 : entity is "42'b000010000000000000000000000000000000000000";
  attribute ap_ST_fsm_state39 : string;
  attribute ap_ST_fsm_state39 of bd_0_hls_inst_0_fn1 : entity is "42'b000100000000000000000000000000000000000000";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000000000001000";
  attribute ap_ST_fsm_state40 : string;
  attribute ap_ST_fsm_state40 of bd_0_hls_inst_0_fn1 : entity is "42'b001000000000000000000000000000000000000000";
  attribute ap_ST_fsm_state41 : string;
  attribute ap_ST_fsm_state41 of bd_0_hls_inst_0_fn1 : entity is "42'b010000000000000000000000000000000000000000";
  attribute ap_ST_fsm_state42 : string;
  attribute ap_ST_fsm_state42 of bd_0_hls_inst_0_fn1 : entity is "42'b100000000000000000000000000000000000000000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000000000010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000000000100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000000001000000";
  attribute ap_ST_fsm_state8 : string;
  attribute ap_ST_fsm_state8 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000000010000000";
  attribute ap_ST_fsm_state9 : string;
  attribute ap_ST_fsm_state9 of bd_0_hls_inst_0_fn1 : entity is "42'b000000000000000000000000000000000100000000";
  attribute hls_module : string;
  attribute hls_module of bd_0_hls_inst_0_fn1 : entity is "yes";
end bd_0_hls_inst_0_fn1;

architecture STRUCTURE of bd_0_hls_inst_0_fn1 is
  signal add_ln24_fu_84_p2 : STD_LOGIC_VECTOR ( 30 downto 1 );
  signal add_ln24_reg_187 : STD_LOGIC_VECTOR ( 30 downto 1 );
  signal \add_ln24_reg_187[13]_i_6_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[13]_i_7_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[17]_i_6_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[17]_i_7_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[21]_i_10_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[21]_i_11_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[21]_i_12_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[21]_i_13_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[21]_i_6_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[21]_i_7_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[21]_i_8_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[21]_i_9_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[25]_i_6_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[25]_i_7_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[25]_i_8_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[25]_i_9_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[29]_i_6_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[29]_i_7_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[29]_i_8_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[5]_i_5_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[9]_i_3_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[9]_i_4_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[9]_i_5_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[9]_i_6_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187[9]_i_7_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[13]_i_1_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[13]_i_1_n_1\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[13]_i_1_n_2\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[13]_i_1_n_3\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[17]_i_1_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[17]_i_1_n_1\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[17]_i_1_n_2\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[17]_i_1_n_3\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[21]_i_1_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[21]_i_1_n_1\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[21]_i_1_n_2\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[21]_i_1_n_3\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[25]_i_1_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[25]_i_1_n_1\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[25]_i_1_n_2\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[25]_i_1_n_3\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[29]_i_1_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[29]_i_1_n_1\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[29]_i_1_n_2\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[29]_i_1_n_3\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[5]_i_1_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[5]_i_1_n_1\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[5]_i_1_n_2\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[5]_i_1_n_3\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[9]_i_1_n_0\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[9]_i_1_n_1\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[9]_i_1_n_2\ : STD_LOGIC;
  signal \add_ln24_reg_187_reg[9]_i_1_n_3\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_2_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_3_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_4_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_5_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_6_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_7_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_8_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm[1]_i_9_n_0\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[10]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[12]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[13]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[14]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[15]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[16]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[17]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[18]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[19]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[20]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[22]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[23]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[24]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[25]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[26]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[27]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[28]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[29]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[2]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[30]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[31]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[32]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[33]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[34]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[35]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[36]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[37]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[38]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[39]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[3]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[40]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[4]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[5]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[6]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[7]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[8]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[9]\ : STD_LOGIC;
  signal ap_CS_fsm_state1 : STD_LOGIC;
  signal ap_CS_fsm_state12 : STD_LOGIC;
  signal ap_CS_fsm_state22 : STD_LOGIC;
  signal ap_NS_fsm : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \^ap_done\ : STD_LOGIC;
  signal \^ap_return\ : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal sdiv_17s_17ns_3_21_seq_1_U2_n_0 : STD_LOGIC;
  signal sdiv_17s_17ns_3_21_seq_1_U2_n_3 : STD_LOGIC;
  signal shl_ln24_fu_78_p2 : STD_LOGIC_VECTOR ( 30 downto 1 );
  signal srem_17s_32ns_16_21_seq_1_U3_n_0 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_1 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_10 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_11 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_12 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_13 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_14 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_15 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_16 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_17 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_18 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_19 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_2 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_20 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_21 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_22 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_23 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_24 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_25 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_3 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_4 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_5 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_6 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_7 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_8 : STD_LOGIC;
  signal srem_17s_32ns_16_21_seq_1_U3_n_9 : STD_LOGIC;
  signal srem_ln24_reg_217 : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal start : STD_LOGIC;
  signal sub_ln19_fu_130_p2 : STD_LOGIC_VECTOR ( 2 downto 1 );
  signal sub_ln19_reg_212 : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal urem_8ns_11ns_3_12_seq_1_U1_n_0 : STD_LOGIC;
  signal urem_8ns_11ns_3_12_seq_1_U1_n_1 : STD_LOGIC;
  signal urem_8ns_11ns_3_12_seq_1_U1_n_2 : STD_LOGIC;
  signal urem_ln20_reg_207 : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal \NLW_add_ln24_reg_187_reg[30]_i_1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_add_ln24_reg_187_reg[30]_i_1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \add_ln24_reg_187[13]_i_7\ : label is "soft_lutpair56";
  attribute SOFT_HLUTNM of \add_ln24_reg_187[21]_i_8\ : label is "soft_lutpair54";
  attribute SOFT_HLUTNM of \add_ln24_reg_187[25]_i_9\ : label is "soft_lutpair56";
  attribute SOFT_HLUTNM of \add_ln24_reg_187[29]_i_6\ : label is "soft_lutpair54";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \add_ln24_reg_187_reg[13]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \add_ln24_reg_187_reg[17]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \add_ln24_reg_187_reg[21]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \add_ln24_reg_187_reg[25]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \add_ln24_reg_187_reg[29]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \add_ln24_reg_187_reg[30]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \add_ln24_reg_187_reg[5]_i_1\ : label is 35;
  attribute ADDER_THRESHOLD of \add_ln24_reg_187_reg[9]_i_1\ : label is 35;
  attribute SOFT_HLUTNM of \ap_CS_fsm[0]_i_1\ : label is "soft_lutpair55";
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
  attribute FSM_ENCODING of \ap_CS_fsm_reg[25]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[26]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[27]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[28]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[29]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[2]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[30]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[31]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[32]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[33]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[34]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[35]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[36]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[37]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[38]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[39]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[3]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[40]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[41]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[4]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[5]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[6]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[7]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[8]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[9]\ : label is "none";
  attribute SOFT_HLUTNM of ap_idle_INST_0 : label is "soft_lutpair55";
begin
  ap_done <= \^ap_done\;
  ap_ready <= \^ap_done\;
  ap_return(63) <= \^ap_return\(15);
  ap_return(62) <= \^ap_return\(15);
  ap_return(61) <= \^ap_return\(15);
  ap_return(60) <= \^ap_return\(15);
  ap_return(59) <= \^ap_return\(15);
  ap_return(58) <= \^ap_return\(15);
  ap_return(57) <= \^ap_return\(15);
  ap_return(56) <= \^ap_return\(15);
  ap_return(55) <= \^ap_return\(15);
  ap_return(54) <= \^ap_return\(15);
  ap_return(53) <= \^ap_return\(15);
  ap_return(52) <= \^ap_return\(15);
  ap_return(51) <= \^ap_return\(15);
  ap_return(50) <= \^ap_return\(15);
  ap_return(49) <= \^ap_return\(15);
  ap_return(48) <= \^ap_return\(15);
  ap_return(47) <= \^ap_return\(15);
  ap_return(46) <= \^ap_return\(15);
  ap_return(45) <= \^ap_return\(15);
  ap_return(44) <= \^ap_return\(15);
  ap_return(43) <= \^ap_return\(15);
  ap_return(42) <= \^ap_return\(15);
  ap_return(41) <= \^ap_return\(15);
  ap_return(40) <= \^ap_return\(15);
  ap_return(39) <= \^ap_return\(15);
  ap_return(38) <= \^ap_return\(15);
  ap_return(37) <= \^ap_return\(15);
  ap_return(36) <= \^ap_return\(15);
  ap_return(35) <= \^ap_return\(15);
  ap_return(34) <= \^ap_return\(15);
  ap_return(33) <= \^ap_return\(15);
  ap_return(32) <= \^ap_return\(15);
  ap_return(31) <= \^ap_return\(15);
  ap_return(30) <= \^ap_return\(15);
  ap_return(29) <= \^ap_return\(15);
  ap_return(28) <= \^ap_return\(15);
  ap_return(27) <= \^ap_return\(15);
  ap_return(26) <= \^ap_return\(15);
  ap_return(25) <= \^ap_return\(15);
  ap_return(24) <= \^ap_return\(15);
  ap_return(23) <= \^ap_return\(15);
  ap_return(22) <= \^ap_return\(15);
  ap_return(21) <= \^ap_return\(15);
  ap_return(20) <= \^ap_return\(15);
  ap_return(19) <= \^ap_return\(15);
  ap_return(18) <= \^ap_return\(15);
  ap_return(17) <= \^ap_return\(15);
  ap_return(16) <= \^ap_return\(15);
  ap_return(15 downto 0) <= \^ap_return\(15 downto 0);
\add_ln24_reg_187[13]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \add_ln24_reg_187[13]_i_6_n_0\,
      I1 => p(3),
      I2 => \add_ln24_reg_187[21]_i_6_n_0\,
      I3 => p(2),
      I4 => \add_ln24_reg_187[21]_i_7_n_0\,
      O => shl_ln24_fu_78_p2(13)
    );
\add_ln24_reg_187[13]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5150FFFF51500000"
    )
        port map (
      I0 => p(2),
      I1 => p(1),
      I2 => p(0),
      I3 => p(4),
      I4 => p(3),
      I5 => \add_ln24_reg_187[13]_i_7_n_0\,
      O => shl_ln24_fu_78_p2(12)
    );
\add_ln24_reg_187[13]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0F00BFBF0F00B0B0"
    )
        port map (
      I0 => p(1),
      I1 => p(0),
      I2 => p(3),
      I3 => \add_ln24_reg_187[21]_i_10_n_0\,
      I4 => p(2),
      I5 => \add_ln24_reg_187[25]_i_8_n_0\,
      O => shl_ln24_fu_78_p2(11)
    );
\add_ln24_reg_187[13]_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"4540"
    )
        port map (
      I0 => p(3),
      I1 => \add_ln24_reg_187[21]_i_11_n_0\,
      I2 => p(2),
      I3 => \add_ln24_reg_187[21]_i_12_n_0\,
      O => shl_ln24_fu_78_p2(10)
    );
\add_ln24_reg_187[13]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0F0A45450F0A4040"
    )
        port map (
      I0 => p(2),
      I1 => p(3),
      I2 => p(1),
      I3 => p(4),
      I4 => p(0),
      I5 => p(5),
      O => \add_ln24_reg_187[13]_i_6_n_0\
    );
\add_ln24_reg_187[13]_i_7\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_9_n_0\,
      I1 => p(2),
      I2 => \add_ln24_reg_187[25]_i_7_n_0\,
      O => \add_ln24_reg_187[13]_i_7_n_0\
    );
\add_ln24_reg_187[17]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => \add_ln24_reg_187[17]_i_6_n_0\,
      I1 => p(2),
      I2 => \add_ln24_reg_187[21]_i_6_n_0\,
      I3 => p(3),
      I4 => \add_ln24_reg_187[25]_i_6_n_0\,
      O => shl_ln24_fu_78_p2(17)
    );
\add_ln24_reg_187[17]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \add_ln24_reg_187[17]_i_7_n_0\,
      I1 => p(3),
      I2 => \add_ln24_reg_187[25]_i_7_n_0\,
      I3 => p(2),
      I4 => \add_ln24_reg_187[29]_i_6_n_0\,
      O => shl_ln24_fu_78_p2(16)
    );
\add_ln24_reg_187[17]_i_4\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFCCB8B8"
    )
        port map (
      I0 => \add_ln24_reg_187[25]_i_8_n_0\,
      I1 => p(2),
      I2 => \add_ln24_reg_187[29]_i_7_n_0\,
      I3 => \add_ln24_reg_187[21]_i_10_n_0\,
      I4 => p(3),
      O => shl_ln24_fu_78_p2(15)
    );
\add_ln24_reg_187[17]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1F10FFFF1F100000"
    )
        port map (
      I0 => p(1),
      I1 => p(0),
      I2 => p(2),
      I3 => \add_ln24_reg_187[21]_i_11_n_0\,
      I4 => p(3),
      I5 => \add_ln24_reg_187[25]_i_9_n_0\,
      O => shl_ln24_fu_78_p2(14)
    );
\add_ln24_reg_187[17]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(2),
      I1 => p(3),
      I2 => p(1),
      I3 => p(4),
      I4 => p(0),
      I5 => p(5),
      O => \add_ln24_reg_187[17]_i_6_n_0\
    );
\add_ln24_reg_187[17]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EFEAFFFFEFEA0000"
    )
        port map (
      I0 => p(1),
      I1 => p(3),
      I2 => p(0),
      I3 => p(4),
      I4 => p(2),
      I5 => \add_ln24_reg_187[21]_i_9_n_0\,
      O => \add_ln24_reg_187[17]_i_7_n_0\
    );
\add_ln24_reg_187[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEFF"
    )
        port map (
      I0 => p(3),
      I1 => p(2),
      I2 => p(1),
      I3 => p(0),
      O => add_ln24_fu_84_p2(1)
    );
\add_ln24_reg_187[21]_i_10\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(4),
      I1 => p(5),
      I2 => p(1),
      I3 => p(6),
      I4 => p(0),
      I5 => p(7),
      O => \add_ln24_reg_187[21]_i_10_n_0\
    );
\add_ln24_reg_187[21]_i_11\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(3),
      I1 => p(4),
      I2 => p(1),
      I3 => p(5),
      I4 => p(0),
      I5 => p(6),
      O => \add_ln24_reg_187[21]_i_11_n_0\
    );
\add_ln24_reg_187[21]_i_12\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(7),
      I1 => p(8),
      I2 => p(1),
      I3 => p(9),
      I4 => p(0),
      I5 => p(10),
      O => \add_ln24_reg_187[21]_i_12_n_0\
    );
\add_ln24_reg_187[21]_i_13\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8888888"
    )
        port map (
      I0 => \add_ln24_reg_187[29]_i_8_n_0\,
      I1 => p(2),
      I2 => p(15),
      I3 => p(1),
      I4 => p(0),
      O => \add_ln24_reg_187[21]_i_13_n_0\
    );
\add_ln24_reg_187[21]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFC0A0C0A0C0A0C0"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_6_n_0\,
      I1 => \add_ln24_reg_187[21]_i_7_n_0\,
      I2 => p(3),
      I3 => p(2),
      I4 => p(1),
      I5 => \add_ln24_reg_187[21]_i_8_n_0\,
      O => shl_ln24_fu_78_p2(21)
    );
\add_ln24_reg_187[21]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AACCF000"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_9_n_0\,
      I1 => \add_ln24_reg_187[25]_i_7_n_0\,
      I2 => \add_ln24_reg_187[29]_i_6_n_0\,
      I3 => p(2),
      I4 => p(3),
      O => shl_ln24_fu_78_p2(20)
    );
\add_ln24_reg_187[21]_i_4\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AACCF000"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_10_n_0\,
      I1 => \add_ln24_reg_187[25]_i_8_n_0\,
      I2 => \add_ln24_reg_187[29]_i_7_n_0\,
      I3 => p(2),
      I4 => p(3),
      O => shl_ln24_fu_78_p2(19)
    );
\add_ln24_reg_187[21]_i_5\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_11_n_0\,
      I1 => p(2),
      I2 => \add_ln24_reg_187[21]_i_12_n_0\,
      I3 => p(3),
      I4 => \add_ln24_reg_187[21]_i_13_n_0\,
      O => shl_ln24_fu_78_p2(18)
    );
\add_ln24_reg_187[21]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(6),
      I1 => p(7),
      I2 => p(1),
      I3 => p(8),
      I4 => p(0),
      I5 => p(9),
      O => \add_ln24_reg_187[21]_i_6_n_0\
    );
\add_ln24_reg_187[21]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(10),
      I1 => p(11),
      I2 => p(1),
      I3 => p(12),
      I4 => p(0),
      I5 => p(13),
      O => \add_ln24_reg_187[21]_i_7_n_0\
    );
\add_ln24_reg_187[21]_i_8\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => p(14),
      I1 => p(0),
      I2 => p(15),
      O => \add_ln24_reg_187[21]_i_8_n_0\
    );
\add_ln24_reg_187[21]_i_9\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(5),
      I1 => p(6),
      I2 => p(1),
      I3 => p(7),
      I4 => p(0),
      I5 => p(8),
      O => \add_ln24_reg_187[21]_i_9_n_0\
    );
\add_ln24_reg_187[25]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => p(3),
      I1 => \add_ln24_reg_187[25]_i_6_n_0\,
      O => shl_ln24_fu_78_p2(25)
    );
\add_ln24_reg_187[25]_i_3\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"A808"
    )
        port map (
      I0 => p(3),
      I1 => \add_ln24_reg_187[29]_i_6_n_0\,
      I2 => p(2),
      I3 => \add_ln24_reg_187[25]_i_7_n_0\,
      O => shl_ln24_fu_78_p2(24)
    );
\add_ln24_reg_187[25]_i_4\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"A808"
    )
        port map (
      I0 => p(3),
      I1 => \add_ln24_reg_187[29]_i_7_n_0\,
      I2 => p(2),
      I3 => \add_ln24_reg_187[25]_i_8_n_0\,
      O => shl_ln24_fu_78_p2(23)
    );
\add_ln24_reg_187[25]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAAAAAC0000000"
    )
        port map (
      I0 => \add_ln24_reg_187[25]_i_9_n_0\,
      I1 => p(15),
      I2 => p(1),
      I3 => p(0),
      I4 => p(2),
      I5 => p(3),
      O => shl_ln24_fu_78_p2(22)
    );
\add_ln24_reg_187[25]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAAAAACFC00000"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_7_n_0\,
      I1 => p(14),
      I2 => p(0),
      I3 => p(15),
      I4 => p(1),
      I5 => p(2),
      O => \add_ln24_reg_187[25]_i_6_n_0\
    );
\add_ln24_reg_187[25]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(9),
      I1 => p(10),
      I2 => p(1),
      I3 => p(11),
      I4 => p(0),
      I5 => p(12),
      O => \add_ln24_reg_187[25]_i_7_n_0\
    );
\add_ln24_reg_187[25]_i_8\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(8),
      I1 => p(9),
      I2 => p(1),
      I3 => p(10),
      I4 => p(0),
      I5 => p(11),
      O => \add_ln24_reg_187[25]_i_8_n_0\
    );
\add_ln24_reg_187[25]_i_9\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_12_n_0\,
      I1 => p(2),
      I2 => \add_ln24_reg_187[29]_i_8_n_0\,
      O => \add_ln24_reg_187[25]_i_9_n_0\
    );
\add_ln24_reg_187[29]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8A80000000000000"
    )
        port map (
      I0 => p(3),
      I1 => p(14),
      I2 => p(0),
      I3 => p(15),
      I4 => p(1),
      I5 => p(2),
      O => shl_ln24_fu_78_p2(29)
    );
\add_ln24_reg_187[29]_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => p(3),
      I1 => p(2),
      I2 => \add_ln24_reg_187[29]_i_6_n_0\,
      O => shl_ln24_fu_78_p2(28)
    );
\add_ln24_reg_187[29]_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => p(3),
      I1 => p(2),
      I2 => \add_ln24_reg_187[29]_i_7_n_0\,
      O => shl_ln24_fu_78_p2(27)
    );
\add_ln24_reg_187[29]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAA800000008000"
    )
        port map (
      I0 => p(3),
      I1 => p(0),
      I2 => p(1),
      I3 => p(15),
      I4 => p(2),
      I5 => \add_ln24_reg_187[29]_i_8_n_0\,
      O => shl_ln24_fu_78_p2(26)
    );
\add_ln24_reg_187[29]_i_6\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AFC0A0C0"
    )
        port map (
      I0 => p(13),
      I1 => p(14),
      I2 => p(1),
      I3 => p(0),
      I4 => p(15),
      O => \add_ln24_reg_187[29]_i_6_n_0\
    );
\add_ln24_reg_187[29]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(12),
      I1 => p(13),
      I2 => p(1),
      I3 => p(14),
      I4 => p(0),
      I5 => p(15),
      O => \add_ln24_reg_187[29]_i_7_n_0\
    );
\add_ln24_reg_187[29]_i_8\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => p(11),
      I1 => p(12),
      I2 => p(1),
      I3 => p(13),
      I4 => p(0),
      I5 => p(14),
      O => \add_ln24_reg_187[29]_i_8_n_0\
    );
\add_ln24_reg_187[30]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"80000000"
    )
        port map (
      I0 => p(3),
      I1 => p(2),
      I2 => p(0),
      I3 => p(1),
      I4 => p(15),
      O => shl_ln24_fu_78_p2(30)
    );
\add_ln24_reg_187[5]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0002"
    )
        port map (
      I0 => p(0),
      I1 => p(1),
      I2 => p(2),
      I3 => p(3),
      O => shl_ln24_fu_78_p2(1)
    );
\add_ln24_reg_187[5]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000C02"
    )
        port map (
      I0 => p(4),
      I1 => p(0),
      I2 => p(3),
      I3 => p(1),
      I4 => p(2),
      O => shl_ln24_fu_78_p2(4)
    );
\add_ln24_reg_187[5]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000CC00E2"
    )
        port map (
      I0 => p(5),
      I1 => p(0),
      I2 => p(4),
      I3 => p(1),
      I4 => p(2),
      I5 => p(3),
      O => shl_ln24_fu_78_p2(5)
    );
\add_ln24_reg_187[5]_i_5\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FBFEFBFF"
    )
        port map (
      I0 => p(2),
      I1 => p(1),
      I2 => p(3),
      I3 => p(0),
      I4 => p(4),
      O => \add_ln24_reg_187[5]_i_5_n_0\
    );
\add_ln24_reg_187[5]_i_6\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"10"
    )
        port map (
      I0 => p(3),
      I1 => p(2),
      I2 => p(1),
      O => shl_ln24_fu_78_p2(3)
    );
\add_ln24_reg_187[9]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0F004F4F0F004040"
    )
        port map (
      I0 => p(1),
      I1 => p(0),
      I2 => p(3),
      I3 => \add_ln24_reg_187[17]_i_6_n_0\,
      I4 => p(2),
      I5 => \add_ln24_reg_187[21]_i_6_n_0\,
      O => shl_ln24_fu_78_p2(9)
    );
\add_ln24_reg_187[9]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2322333323220000"
    )
        port map (
      I0 => p(1),
      I1 => p(3),
      I2 => p(0),
      I3 => p(4),
      I4 => p(2),
      I5 => \add_ln24_reg_187[21]_i_9_n_0\,
      O => \add_ln24_reg_187[9]_i_3_n_0\
    );
\add_ln24_reg_187[9]_i_4\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0E0F0E00"
    )
        port map (
      I0 => p(1),
      I1 => p(0),
      I2 => p(3),
      I3 => p(2),
      I4 => \add_ln24_reg_187[21]_i_10_n_0\,
      O => \add_ln24_reg_187[9]_i_4_n_0\
    );
\add_ln24_reg_187[9]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF1DFF1DCC1DFF1D"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_6_n_0\,
      I1 => p(2),
      I2 => \add_ln24_reg_187[17]_i_6_n_0\,
      I3 => p(3),
      I4 => p(0),
      I5 => p(1),
      O => \add_ln24_reg_187[9]_i_5_n_0\
    );
\add_ln24_reg_187[9]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFF1111FFFFDD1D"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_9_n_0\,
      I1 => p(2),
      I2 => p(4),
      I3 => p(0),
      I4 => p(3),
      I5 => p(1),
      O => \add_ln24_reg_187[9]_i_6_n_0\
    );
\add_ln24_reg_187[9]_i_7\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F1F1F1FD"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_10_n_0\,
      I1 => p(2),
      I2 => p(3),
      I3 => p(0),
      I4 => p(1),
      O => \add_ln24_reg_187[9]_i_7_n_0\
    );
\add_ln24_reg_187[9]_i_8\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000222E"
    )
        port map (
      I0 => \add_ln24_reg_187[21]_i_11_n_0\,
      I1 => p(2),
      I2 => p(0),
      I3 => p(1),
      I4 => p(3),
      O => shl_ln24_fu_78_p2(6)
    );
\add_ln24_reg_187_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(10),
      Q => add_ln24_reg_187(10),
      R => '0'
    );
\add_ln24_reg_187_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(11),
      Q => add_ln24_reg_187(11),
      R => '0'
    );
\add_ln24_reg_187_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(12),
      Q => add_ln24_reg_187(12),
      R => '0'
    );
\add_ln24_reg_187_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(13),
      Q => add_ln24_reg_187(13),
      R => '0'
    );
\add_ln24_reg_187_reg[13]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \add_ln24_reg_187_reg[9]_i_1_n_0\,
      CO(3) => \add_ln24_reg_187_reg[13]_i_1_n_0\,
      CO(2) => \add_ln24_reg_187_reg[13]_i_1_n_1\,
      CO(1) => \add_ln24_reg_187_reg[13]_i_1_n_2\,
      CO(0) => \add_ln24_reg_187_reg[13]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => add_ln24_fu_84_p2(13 downto 10),
      S(3 downto 0) => shl_ln24_fu_78_p2(13 downto 10)
    );
\add_ln24_reg_187_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(14),
      Q => add_ln24_reg_187(14),
      R => '0'
    );
\add_ln24_reg_187_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(15),
      Q => add_ln24_reg_187(15),
      R => '0'
    );
\add_ln24_reg_187_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(16),
      Q => add_ln24_reg_187(16),
      R => '0'
    );
\add_ln24_reg_187_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(17),
      Q => add_ln24_reg_187(17),
      R => '0'
    );
\add_ln24_reg_187_reg[17]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \add_ln24_reg_187_reg[13]_i_1_n_0\,
      CO(3) => \add_ln24_reg_187_reg[17]_i_1_n_0\,
      CO(2) => \add_ln24_reg_187_reg[17]_i_1_n_1\,
      CO(1) => \add_ln24_reg_187_reg[17]_i_1_n_2\,
      CO(0) => \add_ln24_reg_187_reg[17]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => add_ln24_fu_84_p2(17 downto 14),
      S(3 downto 0) => shl_ln24_fu_78_p2(17 downto 14)
    );
\add_ln24_reg_187_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(18),
      Q => add_ln24_reg_187(18),
      R => '0'
    );
\add_ln24_reg_187_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(19),
      Q => add_ln24_reg_187(19),
      R => '0'
    );
\add_ln24_reg_187_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(1),
      Q => add_ln24_reg_187(1),
      R => '0'
    );
\add_ln24_reg_187_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(20),
      Q => add_ln24_reg_187(20),
      R => '0'
    );
\add_ln24_reg_187_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(21),
      Q => add_ln24_reg_187(21),
      R => '0'
    );
\add_ln24_reg_187_reg[21]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \add_ln24_reg_187_reg[17]_i_1_n_0\,
      CO(3) => \add_ln24_reg_187_reg[21]_i_1_n_0\,
      CO(2) => \add_ln24_reg_187_reg[21]_i_1_n_1\,
      CO(1) => \add_ln24_reg_187_reg[21]_i_1_n_2\,
      CO(0) => \add_ln24_reg_187_reg[21]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => add_ln24_fu_84_p2(21 downto 18),
      S(3 downto 0) => shl_ln24_fu_78_p2(21 downto 18)
    );
\add_ln24_reg_187_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(22),
      Q => add_ln24_reg_187(22),
      R => '0'
    );
\add_ln24_reg_187_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(23),
      Q => add_ln24_reg_187(23),
      R => '0'
    );
\add_ln24_reg_187_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(24),
      Q => add_ln24_reg_187(24),
      R => '0'
    );
\add_ln24_reg_187_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(25),
      Q => add_ln24_reg_187(25),
      R => '0'
    );
\add_ln24_reg_187_reg[25]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \add_ln24_reg_187_reg[21]_i_1_n_0\,
      CO(3) => \add_ln24_reg_187_reg[25]_i_1_n_0\,
      CO(2) => \add_ln24_reg_187_reg[25]_i_1_n_1\,
      CO(1) => \add_ln24_reg_187_reg[25]_i_1_n_2\,
      CO(0) => \add_ln24_reg_187_reg[25]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => add_ln24_fu_84_p2(25 downto 22),
      S(3 downto 0) => shl_ln24_fu_78_p2(25 downto 22)
    );
\add_ln24_reg_187_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(26),
      Q => add_ln24_reg_187(26),
      R => '0'
    );
\add_ln24_reg_187_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(27),
      Q => add_ln24_reg_187(27),
      R => '0'
    );
\add_ln24_reg_187_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(28),
      Q => add_ln24_reg_187(28),
      R => '0'
    );
\add_ln24_reg_187_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(29),
      Q => add_ln24_reg_187(29),
      R => '0'
    );
\add_ln24_reg_187_reg[29]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \add_ln24_reg_187_reg[25]_i_1_n_0\,
      CO(3) => \add_ln24_reg_187_reg[29]_i_1_n_0\,
      CO(2) => \add_ln24_reg_187_reg[29]_i_1_n_1\,
      CO(1) => \add_ln24_reg_187_reg[29]_i_1_n_2\,
      CO(0) => \add_ln24_reg_187_reg[29]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 0) => add_ln24_fu_84_p2(29 downto 26),
      S(3 downto 0) => shl_ln24_fu_78_p2(29 downto 26)
    );
\add_ln24_reg_187_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(2),
      Q => add_ln24_reg_187(2),
      R => '0'
    );
\add_ln24_reg_187_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(30),
      Q => add_ln24_reg_187(30),
      R => '0'
    );
\add_ln24_reg_187_reg[30]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \add_ln24_reg_187_reg[29]_i_1_n_0\,
      CO(3 downto 0) => \NLW_add_ln24_reg_187_reg[30]_i_1_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_add_ln24_reg_187_reg[30]_i_1_O_UNCONNECTED\(3 downto 1),
      O(0) => add_ln24_fu_84_p2(30),
      S(3 downto 1) => B"000",
      S(0) => shl_ln24_fu_78_p2(30)
    );
\add_ln24_reg_187_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(3),
      Q => add_ln24_reg_187(3),
      R => '0'
    );
\add_ln24_reg_187_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(4),
      Q => add_ln24_reg_187(4),
      R => '0'
    );
\add_ln24_reg_187_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(5),
      Q => add_ln24_reg_187(5),
      R => '0'
    );
\add_ln24_reg_187_reg[5]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \add_ln24_reg_187_reg[5]_i_1_n_0\,
      CO(2) => \add_ln24_reg_187_reg[5]_i_1_n_1\,
      CO(1) => \add_ln24_reg_187_reg[5]_i_1_n_2\,
      CO(0) => \add_ln24_reg_187_reg[5]_i_1_n_3\,
      CYINIT => shl_ln24_fu_78_p2(1),
      DI(3) => '0',
      DI(2) => shl_ln24_fu_78_p2(4),
      DI(1 downto 0) => B"00",
      O(3 downto 0) => add_ln24_fu_84_p2(5 downto 2),
      S(3) => shl_ln24_fu_78_p2(5),
      S(2) => \add_ln24_reg_187[5]_i_5_n_0\,
      S(1) => shl_ln24_fu_78_p2(3),
      S(0) => '1'
    );
\add_ln24_reg_187_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(6),
      Q => add_ln24_reg_187(6),
      R => '0'
    );
\add_ln24_reg_187_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(7),
      Q => add_ln24_reg_187(7),
      R => '0'
    );
\add_ln24_reg_187_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(8),
      Q => add_ln24_reg_187(8),
      R => '0'
    );
\add_ln24_reg_187_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => add_ln24_fu_84_p2(9),
      Q => add_ln24_reg_187(9),
      R => '0'
    );
\add_ln24_reg_187_reg[9]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \add_ln24_reg_187_reg[5]_i_1_n_0\,
      CO(3) => \add_ln24_reg_187_reg[9]_i_1_n_0\,
      CO(2) => \add_ln24_reg_187_reg[9]_i_1_n_1\,
      CO(1) => \add_ln24_reg_187_reg[9]_i_1_n_2\,
      CO(0) => \add_ln24_reg_187_reg[9]_i_1_n_3\,
      CYINIT => '0',
      DI(3) => shl_ln24_fu_78_p2(9),
      DI(2) => \add_ln24_reg_187[9]_i_3_n_0\,
      DI(1) => \add_ln24_reg_187[9]_i_4_n_0\,
      DI(0) => '0',
      O(3 downto 0) => add_ln24_fu_84_p2(9 downto 6),
      S(3) => \add_ln24_reg_187[9]_i_5_n_0\,
      S(2) => \add_ln24_reg_187[9]_i_6_n_0\,
      S(1) => \add_ln24_reg_187[9]_i_7_n_0\,
      S(0) => shl_ln24_fu_78_p2(6)
    );
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
\ap_CS_fsm[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => \ap_CS_fsm[1]_i_2_n_0\,
      I1 => \ap_CS_fsm[1]_i_3_n_0\,
      I2 => \ap_CS_fsm[1]_i_4_n_0\,
      O => ap_NS_fsm(1)
    );
\ap_CS_fsm[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[32]\,
      I1 => \ap_CS_fsm_reg_n_0_[33]\,
      I2 => \ap_CS_fsm_reg_n_0_[30]\,
      I3 => \ap_CS_fsm_reg_n_0_[31]\,
      I4 => \ap_CS_fsm_reg_n_0_[35]\,
      I5 => \ap_CS_fsm_reg_n_0_[34]\,
      O => \ap_CS_fsm[1]_i_2_n_0\
    );
\ap_CS_fsm[1]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[38]\,
      I1 => \ap_CS_fsm_reg_n_0_[39]\,
      I2 => \ap_CS_fsm_reg_n_0_[36]\,
      I3 => \ap_CS_fsm_reg_n_0_[37]\,
      I4 => \^ap_done\,
      I5 => \ap_CS_fsm_reg_n_0_[40]\,
      O => \ap_CS_fsm[1]_i_3_n_0\
    );
\ap_CS_fsm[1]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8000000000000000"
    )
        port map (
      I0 => \ap_CS_fsm[1]_i_5_n_0\,
      I1 => \ap_CS_fsm[1]_i_6_n_0\,
      I2 => \ap_CS_fsm[1]_i_7_n_0\,
      I3 => \ap_CS_fsm[1]_i_8_n_0\,
      I4 => ap_start,
      I5 => \ap_CS_fsm[1]_i_9_n_0\,
      O => \ap_CS_fsm[1]_i_4_n_0\
    );
\ap_CS_fsm[1]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[14]\,
      I1 => \ap_CS_fsm_reg_n_0_[15]\,
      I2 => \ap_CS_fsm_reg_n_0_[12]\,
      I3 => \ap_CS_fsm_reg_n_0_[13]\,
      I4 => \ap_CS_fsm_reg_n_0_[17]\,
      I5 => \ap_CS_fsm_reg_n_0_[16]\,
      O => \ap_CS_fsm[1]_i_5_n_0\
    );
\ap_CS_fsm[1]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[8]\,
      I1 => \ap_CS_fsm_reg_n_0_[9]\,
      I2 => \ap_CS_fsm_reg_n_0_[6]\,
      I3 => \ap_CS_fsm_reg_n_0_[7]\,
      I4 => ap_CS_fsm_state12,
      I5 => \ap_CS_fsm_reg_n_0_[10]\,
      O => \ap_CS_fsm[1]_i_6_n_0\
    );
\ap_CS_fsm[1]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[26]\,
      I1 => \ap_CS_fsm_reg_n_0_[27]\,
      I2 => \ap_CS_fsm_reg_n_0_[24]\,
      I3 => \ap_CS_fsm_reg_n_0_[25]\,
      I4 => \ap_CS_fsm_reg_n_0_[29]\,
      I5 => \ap_CS_fsm_reg_n_0_[28]\,
      O => \ap_CS_fsm[1]_i_7_n_0\
    );
\ap_CS_fsm[1]_i_8\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[20]\,
      I1 => ap_CS_fsm_state22,
      I2 => \ap_CS_fsm_reg_n_0_[18]\,
      I3 => \ap_CS_fsm_reg_n_0_[19]\,
      I4 => \ap_CS_fsm_reg_n_0_[23]\,
      I5 => \ap_CS_fsm_reg_n_0_[22]\,
      O => \ap_CS_fsm[1]_i_8_n_0\
    );
\ap_CS_fsm[1]_i_9\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000010"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[2]\,
      I1 => \ap_CS_fsm_reg_n_0_[3]\,
      I2 => ap_CS_fsm_state1,
      I3 => start,
      I4 => \ap_CS_fsm_reg_n_0_[5]\,
      I5 => \ap_CS_fsm_reg_n_0_[4]\,
      O => \ap_CS_fsm[1]_i_9_n_0\
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
      Q => ap_CS_fsm_state12,
      R => ap_rst
    );
\ap_CS_fsm_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state12,
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
      Q => \ap_CS_fsm_reg_n_0_[19]\,
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
      Q => start,
      R => ap_rst
    );
\ap_CS_fsm_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[19]\,
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
      Q => ap_CS_fsm_state22,
      R => ap_rst
    );
\ap_CS_fsm_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state22,
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
      Q => \ap_CS_fsm_reg_n_0_[24]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[24]\,
      Q => \ap_CS_fsm_reg_n_0_[25]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[25]\,
      Q => \ap_CS_fsm_reg_n_0_[26]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[26]\,
      Q => \ap_CS_fsm_reg_n_0_[27]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[27]\,
      Q => \ap_CS_fsm_reg_n_0_[28]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[28]\,
      Q => \ap_CS_fsm_reg_n_0_[29]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => start,
      Q => \ap_CS_fsm_reg_n_0_[2]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[29]\,
      Q => \ap_CS_fsm_reg_n_0_[30]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[30]\,
      Q => \ap_CS_fsm_reg_n_0_[31]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[32]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[31]\,
      Q => \ap_CS_fsm_reg_n_0_[32]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[33]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[32]\,
      Q => \ap_CS_fsm_reg_n_0_[33]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[34]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[33]\,
      Q => \ap_CS_fsm_reg_n_0_[34]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[35]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[34]\,
      Q => \ap_CS_fsm_reg_n_0_[35]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[36]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[35]\,
      Q => \ap_CS_fsm_reg_n_0_[36]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[37]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[36]\,
      Q => \ap_CS_fsm_reg_n_0_[37]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[38]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[37]\,
      Q => \ap_CS_fsm_reg_n_0_[38]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[39]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[38]\,
      Q => \ap_CS_fsm_reg_n_0_[39]\,
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
\ap_CS_fsm_reg[40]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[39]\,
      Q => \ap_CS_fsm_reg_n_0_[40]\,
      R => ap_rst
    );
\ap_CS_fsm_reg[41]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[40]\,
      Q => \^ap_done\,
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
      I0 => ap_CS_fsm_state1,
      I1 => ap_start,
      O => ap_idle
    );
sdiv_17s_17ns_3_21_seq_1_U2: entity work.bd_0_hls_inst_0_fn1_sdiv_17s_17ns_3_21_seq_1
     port map (
      D(2 downto 1) => sub_ln19_fu_130_p2(2 downto 1),
      D(0) => sdiv_17s_17ns_3_21_seq_1_U2_n_3,
      E(0) => sdiv_17s_17ns_3_21_seq_1_U2_n_0,
      Q(0) => start,
      ap_clk => ap_clk,
      \dividend_tmp_reg[15]\ => srem_17s_32ns_16_21_seq_1_U3_n_6,
      p(15 downto 0) => p(15 downto 0),
      \quot_reg[0]\(0) => srem_17s_32ns_16_21_seq_1_U3_n_9,
      urem_ln20_reg_207(2 downto 0) => urem_ln20_reg_207(2 downto 0)
    );
srem_16ns_11ns_16_20_seq_1_U4: entity work.bd_0_hls_inst_0_fn1_srem_16ns_11ns_16_20_seq_1
     port map (
      Q(0) => \ap_CS_fsm_reg_n_0_[22]\,
      ap_clk => ap_clk,
      ap_return(15 downto 0) => \^ap_return\(15 downto 0),
      ap_rst => ap_rst,
      \dividend0_reg[15]\(15 downto 0) => srem_ln24_reg_217(15 downto 0),
      \divisor0_reg[7]\(2 downto 0) => sub_ln19_reg_212(2 downto 0),
      \r_stage_reg[16]\ => srem_17s_32ns_16_21_seq_1_U3_n_8
    );
srem_17s_32ns_16_21_seq_1_U3: entity work.bd_0_hls_inst_0_fn1_srem_17s_32ns_16_21_seq_1
     port map (
      D(5) => srem_17s_32ns_16_21_seq_1_U3_n_0,
      D(4) => srem_17s_32ns_16_21_seq_1_U3_n_1,
      D(3) => srem_17s_32ns_16_21_seq_1_U3_n_2,
      D(2) => srem_17s_32ns_16_21_seq_1_U3_n_3,
      D(1) => srem_17s_32ns_16_21_seq_1_U3_n_4,
      D(0) => srem_17s_32ns_16_21_seq_1_U3_n_5,
      E(0) => sdiv_17s_17ns_3_21_seq_1_U2_n_0,
      Q(29 downto 0) => add_ln24_reg_187(30 downto 1),
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      p(15 downto 0) => p(15 downto 0),
      \r_stage_reg[0]\ => srem_17s_32ns_16_21_seq_1_U3_n_6,
      \r_stage_reg[17]\(0) => srem_17s_32ns_16_21_seq_1_U3_n_9,
      r_stage_reg_r_13 => srem_17s_32ns_16_21_seq_1_U3_n_8,
      r_stage_reg_r_5 => srem_17s_32ns_16_21_seq_1_U3_n_7,
      \remd_reg[15]\(15) => srem_17s_32ns_16_21_seq_1_U3_n_10,
      \remd_reg[15]\(14) => srem_17s_32ns_16_21_seq_1_U3_n_11,
      \remd_reg[15]\(13) => srem_17s_32ns_16_21_seq_1_U3_n_12,
      \remd_reg[15]\(12) => srem_17s_32ns_16_21_seq_1_U3_n_13,
      \remd_reg[15]\(11) => srem_17s_32ns_16_21_seq_1_U3_n_14,
      \remd_reg[15]\(10) => srem_17s_32ns_16_21_seq_1_U3_n_15,
      \remd_reg[15]\(9) => srem_17s_32ns_16_21_seq_1_U3_n_16,
      \remd_reg[15]\(8) => srem_17s_32ns_16_21_seq_1_U3_n_17,
      \remd_reg[15]\(7) => srem_17s_32ns_16_21_seq_1_U3_n_18,
      \remd_reg[15]\(6) => srem_17s_32ns_16_21_seq_1_U3_n_19,
      \remd_reg[15]\(5) => srem_17s_32ns_16_21_seq_1_U3_n_20,
      \remd_reg[15]\(4) => srem_17s_32ns_16_21_seq_1_U3_n_21,
      \remd_reg[15]\(3) => srem_17s_32ns_16_21_seq_1_U3_n_22,
      \remd_reg[15]\(2) => srem_17s_32ns_16_21_seq_1_U3_n_23,
      \remd_reg[15]\(1) => srem_17s_32ns_16_21_seq_1_U3_n_24,
      \remd_reg[15]\(0) => srem_17s_32ns_16_21_seq_1_U3_n_25
    );
\srem_ln24_reg_217_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_25,
      Q => srem_ln24_reg_217(0),
      R => '0'
    );
\srem_ln24_reg_217_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_15,
      Q => srem_ln24_reg_217(10),
      R => '0'
    );
\srem_ln24_reg_217_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_14,
      Q => srem_ln24_reg_217(11),
      R => '0'
    );
\srem_ln24_reg_217_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_13,
      Q => srem_ln24_reg_217(12),
      R => '0'
    );
\srem_ln24_reg_217_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_12,
      Q => srem_ln24_reg_217(13),
      R => '0'
    );
\srem_ln24_reg_217_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_11,
      Q => srem_ln24_reg_217(14),
      R => '0'
    );
\srem_ln24_reg_217_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_10,
      Q => srem_ln24_reg_217(15),
      R => '0'
    );
\srem_ln24_reg_217_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_24,
      Q => srem_ln24_reg_217(1),
      R => '0'
    );
\srem_ln24_reg_217_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_23,
      Q => srem_ln24_reg_217(2),
      R => '0'
    );
\srem_ln24_reg_217_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_22,
      Q => srem_ln24_reg_217(3),
      R => '0'
    );
\srem_ln24_reg_217_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_21,
      Q => srem_ln24_reg_217(4),
      R => '0'
    );
\srem_ln24_reg_217_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_20,
      Q => srem_ln24_reg_217(5),
      R => '0'
    );
\srem_ln24_reg_217_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_19,
      Q => srem_ln24_reg_217(6),
      R => '0'
    );
\srem_ln24_reg_217_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_18,
      Q => srem_ln24_reg_217(7),
      R => '0'
    );
\srem_ln24_reg_217_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_17,
      Q => srem_ln24_reg_217(8),
      R => '0'
    );
\srem_ln24_reg_217_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => srem_17s_32ns_16_21_seq_1_U3_n_16,
      Q => srem_ln24_reg_217(9),
      R => '0'
    );
\sub_ln19_reg_212_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => sdiv_17s_17ns_3_21_seq_1_U2_n_3,
      Q => sub_ln19_reg_212(0),
      R => '0'
    );
\sub_ln19_reg_212_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => sub_ln19_fu_130_p2(1),
      Q => sub_ln19_reg_212(1),
      R => '0'
    );
\sub_ln19_reg_212_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state22,
      D => sub_ln19_fu_130_p2(2),
      Q => sub_ln19_reg_212(2),
      R => '0'
    );
urem_8ns_11ns_3_12_seq_1_U1: entity work.bd_0_hls_inst_0_fn1_urem_8ns_11ns_3_12_seq_1
     port map (
      D(5) => srem_17s_32ns_16_21_seq_1_U3_n_0,
      D(4) => srem_17s_32ns_16_21_seq_1_U3_n_1,
      D(3) => srem_17s_32ns_16_21_seq_1_U3_n_2,
      D(2) => srem_17s_32ns_16_21_seq_1_U3_n_3,
      D(1) => srem_17s_32ns_16_21_seq_1_U3_n_4,
      D(0) => srem_17s_32ns_16_21_seq_1_U3_n_5,
      Q(1) => ap_CS_fsm_state12,
      Q(0) => ap_CS_fsm_state1,
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      ap_start => ap_start,
      p(1 downto 0) => p(7 downto 6),
      \r_stage_reg[8]\ => srem_17s_32ns_16_21_seq_1_U3_n_7,
      \remd_reg[0]\ => urem_8ns_11ns_3_12_seq_1_U1_n_2,
      \remd_reg[1]\ => urem_8ns_11ns_3_12_seq_1_U1_n_1,
      \remd_reg[2]\ => urem_8ns_11ns_3_12_seq_1_U1_n_0,
      urem_ln20_reg_207(2 downto 0) => urem_ln20_reg_207(2 downto 0)
    );
\urem_ln20_reg_207_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => urem_8ns_11ns_3_12_seq_1_U1_n_2,
      Q => urem_ln20_reg_207(0),
      R => '0'
    );
\urem_ln20_reg_207_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => urem_8ns_11ns_3_12_seq_1_U1_n_1,
      Q => urem_ln20_reg_207(1),
      R => '0'
    );
\urem_ln20_reg_207_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => urem_8ns_11ns_3_12_seq_1_U1_n_0,
      Q => urem_ln20_reg_207(2),
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
    ap_return : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p : in STD_LOGIC_VECTOR ( 15 downto 0 )
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
  attribute ap_ST_fsm_state1 of inst : label is "42'b000000000000000000000000000000000000000001";
  attribute ap_ST_fsm_state10 : string;
  attribute ap_ST_fsm_state10 of inst : label is "42'b000000000000000000000000000000001000000000";
  attribute ap_ST_fsm_state11 : string;
  attribute ap_ST_fsm_state11 of inst : label is "42'b000000000000000000000000000000010000000000";
  attribute ap_ST_fsm_state12 : string;
  attribute ap_ST_fsm_state12 of inst : label is "42'b000000000000000000000000000000100000000000";
  attribute ap_ST_fsm_state13 : string;
  attribute ap_ST_fsm_state13 of inst : label is "42'b000000000000000000000000000001000000000000";
  attribute ap_ST_fsm_state14 : string;
  attribute ap_ST_fsm_state14 of inst : label is "42'b000000000000000000000000000010000000000000";
  attribute ap_ST_fsm_state15 : string;
  attribute ap_ST_fsm_state15 of inst : label is "42'b000000000000000000000000000100000000000000";
  attribute ap_ST_fsm_state16 : string;
  attribute ap_ST_fsm_state16 of inst : label is "42'b000000000000000000000000001000000000000000";
  attribute ap_ST_fsm_state17 : string;
  attribute ap_ST_fsm_state17 of inst : label is "42'b000000000000000000000000010000000000000000";
  attribute ap_ST_fsm_state18 : string;
  attribute ap_ST_fsm_state18 of inst : label is "42'b000000000000000000000000100000000000000000";
  attribute ap_ST_fsm_state19 : string;
  attribute ap_ST_fsm_state19 of inst : label is "42'b000000000000000000000001000000000000000000";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of inst : label is "42'b000000000000000000000000000000000000000010";
  attribute ap_ST_fsm_state20 : string;
  attribute ap_ST_fsm_state20 of inst : label is "42'b000000000000000000000010000000000000000000";
  attribute ap_ST_fsm_state21 : string;
  attribute ap_ST_fsm_state21 of inst : label is "42'b000000000000000000000100000000000000000000";
  attribute ap_ST_fsm_state22 : string;
  attribute ap_ST_fsm_state22 of inst : label is "42'b000000000000000000001000000000000000000000";
  attribute ap_ST_fsm_state23 : string;
  attribute ap_ST_fsm_state23 of inst : label is "42'b000000000000000000010000000000000000000000";
  attribute ap_ST_fsm_state24 : string;
  attribute ap_ST_fsm_state24 of inst : label is "42'b000000000000000000100000000000000000000000";
  attribute ap_ST_fsm_state25 : string;
  attribute ap_ST_fsm_state25 of inst : label is "42'b000000000000000001000000000000000000000000";
  attribute ap_ST_fsm_state26 : string;
  attribute ap_ST_fsm_state26 of inst : label is "42'b000000000000000010000000000000000000000000";
  attribute ap_ST_fsm_state27 : string;
  attribute ap_ST_fsm_state27 of inst : label is "42'b000000000000000100000000000000000000000000";
  attribute ap_ST_fsm_state28 : string;
  attribute ap_ST_fsm_state28 of inst : label is "42'b000000000000001000000000000000000000000000";
  attribute ap_ST_fsm_state29 : string;
  attribute ap_ST_fsm_state29 of inst : label is "42'b000000000000010000000000000000000000000000";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of inst : label is "42'b000000000000000000000000000000000000000100";
  attribute ap_ST_fsm_state30 : string;
  attribute ap_ST_fsm_state30 of inst : label is "42'b000000000000100000000000000000000000000000";
  attribute ap_ST_fsm_state31 : string;
  attribute ap_ST_fsm_state31 of inst : label is "42'b000000000001000000000000000000000000000000";
  attribute ap_ST_fsm_state32 : string;
  attribute ap_ST_fsm_state32 of inst : label is "42'b000000000010000000000000000000000000000000";
  attribute ap_ST_fsm_state33 : string;
  attribute ap_ST_fsm_state33 of inst : label is "42'b000000000100000000000000000000000000000000";
  attribute ap_ST_fsm_state34 : string;
  attribute ap_ST_fsm_state34 of inst : label is "42'b000000001000000000000000000000000000000000";
  attribute ap_ST_fsm_state35 : string;
  attribute ap_ST_fsm_state35 of inst : label is "42'b000000010000000000000000000000000000000000";
  attribute ap_ST_fsm_state36 : string;
  attribute ap_ST_fsm_state36 of inst : label is "42'b000000100000000000000000000000000000000000";
  attribute ap_ST_fsm_state37 : string;
  attribute ap_ST_fsm_state37 of inst : label is "42'b000001000000000000000000000000000000000000";
  attribute ap_ST_fsm_state38 : string;
  attribute ap_ST_fsm_state38 of inst : label is "42'b000010000000000000000000000000000000000000";
  attribute ap_ST_fsm_state39 : string;
  attribute ap_ST_fsm_state39 of inst : label is "42'b000100000000000000000000000000000000000000";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of inst : label is "42'b000000000000000000000000000000000000001000";
  attribute ap_ST_fsm_state40 : string;
  attribute ap_ST_fsm_state40 of inst : label is "42'b001000000000000000000000000000000000000000";
  attribute ap_ST_fsm_state41 : string;
  attribute ap_ST_fsm_state41 of inst : label is "42'b010000000000000000000000000000000000000000";
  attribute ap_ST_fsm_state42 : string;
  attribute ap_ST_fsm_state42 of inst : label is "42'b100000000000000000000000000000000000000000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of inst : label is "42'b000000000000000000000000000000000000010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of inst : label is "42'b000000000000000000000000000000000000100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of inst : label is "42'b000000000000000000000000000000000001000000";
  attribute ap_ST_fsm_state8 : string;
  attribute ap_ST_fsm_state8 of inst : label is "42'b000000000000000000000000000000000010000000";
  attribute ap_ST_fsm_state9 : string;
  attribute ap_ST_fsm_state9 of inst : label is "42'b000000000000000000000000000000000100000000";
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
begin
inst: entity work.bd_0_hls_inst_0_fn1
     port map (
      ap_clk => ap_clk,
      ap_done => ap_done,
      ap_idle => ap_idle,
      ap_ready => ap_ready,
      ap_return(63 downto 0) => ap_return(63 downto 0),
      ap_rst => ap_rst,
      ap_start => ap_start,
      p(15 downto 0) => p(15 downto 0)
    );
end STRUCTURE;
