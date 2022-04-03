-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (lin64) Build 3064766 Wed Nov 18 09:12:47 MST 2020
-- Date        : Mon Apr 26 21:17:57 2021
-- Host        : seal-lambda running 64-bit Ubuntu 18.04.5 LTS
-- Command     : write_vhdl -force -mode synth_stub
--               /home/nanwu/GNN_DFG/bb/dfg_68/project_tmp/solution_tmp/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_stub.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity bd_0_hls_inst_0 is
  Port ( 
    p_9_ce0 : out STD_LOGIC;
    p_9_we0 : out STD_LOGIC;
    p_9_ce1 : out STD_LOGIC;
    p_9_we1 : out STD_LOGIC;
    p_11_ce0 : out STD_LOGIC;
    p_11_we0 : out STD_LOGIC;
    p_11_ce1 : out STD_LOGIC;
    p_11_we1 : out STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    ap_return : out STD_LOGIC_VECTOR ( 7 downto 0 );
    p : in STD_LOGIC_VECTOR ( 7 downto 0 );
    p_5 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_9_address0 : out STD_LOGIC_VECTOR ( 0 to 0 );
    p_9_d0 : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_9_q0 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_9_address1 : out STD_LOGIC_VECTOR ( 0 to 0 );
    p_9_d1 : out STD_LOGIC_VECTOR ( 63 downto 0 );
    p_9_q1 : in STD_LOGIC_VECTOR ( 63 downto 0 );
    p_11_address0 : out STD_LOGIC_VECTOR ( 2 downto 0 );
    p_11_d0 : out STD_LOGIC_VECTOR ( 15 downto 0 );
    p_11_q0 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_11_address1 : out STD_LOGIC_VECTOR ( 2 downto 0 );
    p_11_d1 : out STD_LOGIC_VECTOR ( 15 downto 0 );
    p_11_q1 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    p_13 : in STD_LOGIC_VECTOR ( 31 downto 0 )
  );

end bd_0_hls_inst_0;

architecture stub of bd_0_hls_inst_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "p_9_ce0,p_9_we0,p_9_ce1,p_9_we1,p_11_ce0,p_11_we0,p_11_ce1,p_11_we1,ap_start,ap_done,ap_idle,ap_ready,ap_return[7:0],p[7:0],p_5[63:0],p_9_address0[0:0],p_9_d0[63:0],p_9_q0[63:0],p_9_address1[0:0],p_9_d1[63:0],p_9_q1[63:0],p_11_address0[2:0],p_11_d0[15:0],p_11_q0[15:0],p_11_address1[2:0],p_11_d1[15:0],p_11_q1[15:0],p_13[31:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "fn1,Vivado 2020.2";
begin
end;
