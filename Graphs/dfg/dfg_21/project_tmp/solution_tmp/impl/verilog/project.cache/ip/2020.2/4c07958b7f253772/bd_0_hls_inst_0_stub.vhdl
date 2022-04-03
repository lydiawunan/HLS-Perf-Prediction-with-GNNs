-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Mon Apr 12 21:11:58 2021
-- Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_0_hls_inst_0_stub.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    p_ce0 : out STD_LOGIC;
    p_we0 : out STD_LOGIC;
    p_ce1 : out STD_LOGIC;
    p_we1 : out STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    ap_return : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_address0 : out STD_LOGIC_VECTOR ( 5 downto 0 );
    p_d0 : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_q0 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_address1 : out STD_LOGIC_VECTOR ( 5 downto 0 );
    p_d1 : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_q1 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_11 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    p_13 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_17 : in STD_LOGIC_VECTOR ( 63 downto 0 )
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "p_ce0,p_we0,p_ce1,p_we1,ap_start,ap_done,ap_idle,ap_ready,ap_return[63:0],p_address0[5:0],p_d0[63:0],p_q0[63:0],p_address1[5:0],p_d1[63:0],p_q1[63:0],p_11[31:0],p_13[63:0],p_17[63:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "fn1,Vivado 2020.2";
begin
end;
