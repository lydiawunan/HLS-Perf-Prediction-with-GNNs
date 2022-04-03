-- 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================


-------------------------------------------------------------------------------
-- Single precision units.
-- FAdd, FSub, FAddSub, FMul, FDiv, FSqrt, FRSqrt, FRecip, FLog, FExp
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
-- Double precision units.
-- DAdd, DSub, DAddSub, DMul, DDiv, DSqrt, DRSqrt, DRecip, DLog, DExp
-------------------------------------------------------------------------------


-------------------------------------------------------------------------------
-- Single precision units.
-------------------------------------------------------------------------------


-------------------------------------------------------------------------------
-- Single precision Add.
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.all;

entity ACMP_FAdd_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FAdd_comb;

architecture rtl of ACMP_FAdd_comb is
begin
    ACMP_FAdd_U : entity ieee_proposed.AESL_WP_FAdd
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.all;

entity ACMP_FAdd is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FAdd;

architecture rtl of ACMP_FAdd is
begin
    ACMP_FAdd_U : entity ieee_proposed.AESL_WP_FAdd
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;


-------------------------------------------------------------------------------
-- Single precision Sub.
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.all;

entity ACMP_FSub_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FSub_comb;

architecture rtl of ACMP_FSub_comb is
begin
    ACMP_FSub_U : entity ieee_proposed.AESL_WP_FSub
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);   
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.all;

entity ACMP_FSub is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FSub;

architecture rtl of ACMP_FSub is
begin
    ACMP_FSub_U : entity ieee_proposed.AESL_WP_FSub
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);   
end rtl;



-------------------------------------------------------------------------------
-- Single precision AddSub.
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FAddFSub_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    opcode: std_logic_vector(1 downto 0);
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FAddFSub_comb;

architecture rtl of ACMP_FAddFSub_comb is
begin
    ACMP_FAddFSub_U : entity ieee_proposed.AESL_WP_FAddFSub
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        opcode => opcode,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FAddFSub is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    opcode: std_logic_vector(1 downto 0);
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FAddFSub;

architecture rtl of ACMP_FAddFSub is
begin
    ACMP_FAddFSub_U : entity ieee_proposed.AESL_WP_FAddFSub
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        opcode => opcode,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Single precision Mul
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FMul_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FMul_comb;

architecture rtl of ACMP_FMul_comb is
begin
    ACMP_FMul_U : entity ieee_proposed.AESL_WP_FMul
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FMul is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FMul;

architecture rtl of ACMP_FMul is
begin
    ACMP_FMul_U : entity ieee_proposed.AESL_WP_FMul
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Single precision Div
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fdiv_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_fdiv_comb;

architecture rtl of ACMP_fdiv_comb is
begin
    ACMP_FDiv_U : entity ieee_proposed.AESL_WP_FDiv
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
        
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fdiv is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_fdiv;

architecture rtl of ACMP_fdiv is
begin
    ACMP_FDiv_U : entity ieee_proposed.AESL_WP_FDiv
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
        
end rtl;



-------------------------------------------------------------------------------
-- Single precision Sqrt
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FSqrt_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FSqrt_comb;

architecture rtl of ACMP_FSqrt_comb is
begin
    ACMP_FSqrt_U : entity ieee_proposed.AESL_WP_FSqrt
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FSqrt is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FSqrt;

architecture rtl of ACMP_FSqrt is
begin
    ACMP_FSqrt_U : entity ieee_proposed.AESL_WP_FSqrt
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;


-------------------------------------------------------------------------------
-- Single precision RSqrt
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FRSqrt_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FRSqrt_comb;

architecture rtl of ACMP_FRSqrt_comb is
begin
    ACMP_FRSqrt_U : entity ieee_proposed.AESL_WP_FRSqrt
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FRSqrt is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FRSqrt;

architecture rtl of ACMP_FRSqrt is
begin
    ACMP_FRSqrt_U : entity ieee_proposed.AESL_WP_FRSqrt
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;


-------------------------------------------------------------------------------
-- Single precision Recip
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FRecip_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FRecip_comb;

architecture rtl of ACMP_FRecip_comb is
begin
    ACMP_FRecip_U : entity ieee_proposed.AESL_WP_FRecip
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FRecip is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FRecip;

architecture rtl of ACMP_FRecip is
begin
    ACMP_FRecip_U : entity ieee_proposed.AESL_WP_FRecip
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;

-------------------------------------------------------------------------------
-- Single precision Log
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FLog_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FLog_comb;

architecture rtl of ACMP_FLog_comb is
begin
    ACMP_FLog_U : entity ieee_proposed.AESL_WP_FLog
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FLog is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FLog;

architecture rtl of ACMP_FLog is
begin
    ACMP_FLog_U : entity ieee_proposed.AESL_WP_FLog
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;

-------------------------------------------------------------------------------
-- Single precision Exponential
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FExp_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FExp_comb;

architecture rtl of ACMP_FExp_comb is
begin
    ACMP_FExp_U : entity ieee_proposed.AESL_WP_FExp
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_FExp is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_FExp;

architecture rtl of ACMP_FExp is
begin
    ACMP_FExp_U : entity ieee_proposed.AESL_WP_FExp
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
    
end rtl;

-------------------------------------------------------------------------------
-- Double precision
-------------------------------------------------------------------------------


-------------------------------------------------------------------------------
-- Double precision ADD
-------------------------------------------------------------------------------

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DAdd_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DAdd_comb;

architecture rtl of ACMP_DAdd_comb is
begin
    ACMP_DAdd_U : entity ieee_proposed.AESL_WP_DAdd
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DAdd is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DAdd;

architecture rtl of ACMP_DAdd is
begin
    ACMP_DAdd_U : entity ieee_proposed.AESL_WP_DAdd
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Double precision Sub
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DSub_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DSub_comb;

architecture rtl of ACMP_DSub_comb is
begin
    ACMP_DSub_U : entity ieee_proposed.AESL_WP_DSub
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DSub is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DSub;

architecture rtl of ACMP_DSub is
begin
    ACMP_DSub_U : entity ieee_proposed.AESL_WP_DSub
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Double precision AddSub
-------------------------------------------------------------------------------

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;


entity ACMP_DAddDSub_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    opcode : std_logic_vector(1 downto 0);
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DAddDSub_comb;

architecture rtl of ACMP_DAddDSub_comb is
begin
    ACMP_DAddDSub_U : entity ieee_proposed.AESL_WP_DAddDSub
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        opcode => opcode,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;


entity ACMP_DAddDSub is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    opcode : std_logic_vector(1 downto 0);
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DAddDSub;

architecture rtl of ACMP_DAddDSub is
begin
    ACMP_DAddDSub_U : entity ieee_proposed.AESL_WP_DAddDSub
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        opcode => opcode,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Double precision Mul
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DMul_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DMul_comb;

architecture rtl of ACMP_DMul_comb is
begin
    ACMP_DMul_U : entity ieee_proposed.AESL_WP_DMul
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DMul is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DMul;

architecture rtl of ACMP_DMul is
begin
    ACMP_DMul_U : entity ieee_proposed.AESL_WP_DMul
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Double precision Div
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DDiv_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DDiv_comb;

architecture rtl of ACMP_DDiv_comb is
begin
    ACMP_DDiv_U : entity ieee_proposed.AESL_WP_DDiv
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DDiv is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DDiv;

architecture rtl of ACMP_DDiv is
begin
    ACMP_DDiv_U : entity ieee_proposed.AESL_WP_DDiv
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Double precision Sqrt
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DSqrt_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DSqrt_comb;

architecture rtl of ACMP_DSqrt_comb is
begin
    ACMP_DSqrt_U : entity ieee_proposed.AESL_WP_DSqrt
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DSqrt is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DSqrt;

architecture rtl of ACMP_DSqrt is
begin
    ACMP_DSqrt_U : entity ieee_proposed.AESL_WP_DSqrt
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

-------------------------------------------------------------------------------
-- Double precision RSqrt
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DRSqrt_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DRSqrt_comb;

architecture rtl of ACMP_DRSqrt_comb is
begin
    ACMP_DRSqrt_U : entity ieee_proposed.AESL_WP_DRSqrt
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DRSqrt is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DRSqrt;

architecture rtl of ACMP_DRSqrt is
begin
    ACMP_DRSqrt_U : entity ieee_proposed.AESL_WP_DRSqrt
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

-------------------------------------------------------------------------------
-- Double precision Recip
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DRecip_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DRecip_comb;

architecture rtl of ACMP_DRecip_comb is
begin
    ACMP_DRecip_U : entity ieee_proposed.AESL_WP_DRecip
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DRecip is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DRecip;

architecture rtl of ACMP_DRecip is
begin
    ACMP_DRecip_U : entity ieee_proposed.AESL_WP_DRecip
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

-------------------------------------------------------------------------------
-- Double precision Log
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DLog_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DLog_comb;

architecture rtl of ACMP_DLog_comb is
begin
    ACMP_DLog_U : entity ieee_proposed.AESL_WP_DLog
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DLog is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DLog;

architecture rtl of ACMP_DLog is
begin
    ACMP_DLog_U : entity ieee_proposed.AESL_WP_DLog
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

-------------------------------------------------------------------------------
-- Double precision Exponential
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DExp_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DExp_comb;

architecture rtl of ACMP_DExp_comb is
begin
    ACMP_DExp_U : entity ieee_proposed.AESL_WP_DExp
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DExp is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end ACMP_DExp;

architecture rtl of ACMP_DExp is
begin
    ACMP_DExp_U : entity ieee_proposed.AESL_WP_DExp
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;


-------------------------------------------------------------------------------
-- Single precision Cmp (Comparator)
-------------------------------------------------------------------------------
-- Predicate values:
--     FCMP_FALSE = 0, ///<  0 0 0 0    Always false (always folded)
--     FCMP_OEQ   = 1, ///<  0 0 0 1    True if ordered and equal
--     FCMP_OGT   = 2, ///<  0 0 1 0    True if ordered and greater than
--     FCMP_OGE   = 3, ///<  0 0 1 1    True if ordered and greater than or equal
--     FCMP_OLT   = 4, ///<  0 1 0 0    True if ordered and less than
--     FCMP_OLE   = 5, ///<  0 1 0 1    True if ordered and less than or equal
--     FCMP_ONE   = 6, ///<  0 1 1 0    True if ordered and operands are unequal
--     FCMP_ORD   = 7, ///<  0 1 1 1    True if ordered (no nans)
--     FCMP_UNO   = 8, ///<  1 0 0 0    True if unordered: isnan(X) | isnan(Y)
--     FCMP_UEQ   = 9, ///<  1 0 0 1    True if unordered or equal
--     FCMP_UGT   =10, ///<  1 0 1 0    True if unordered or greater than
--     FCMP_UGE   =11, ///<  1 0 1 1    True if unordered, greater than, or equal
--     FCMP_ULT   =12, ///<  1 1 0 0    True if unordered or less than
--     FCMP_ULE   =13, ///<  1 1 0 1    True if unordered, less than, or equal
--     FCMP_UNE   =14, ///<  1 1 1 0    True if unordered or not equal
--     FCMP_TRUE  =15, ///<  1 1 1 1    Always true (always folded)

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fcmp_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 1 );
  port  (
    opcode: IN std_logic_VECTOR(4 downto 0);
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
	dout: OUT std_logic_VECTOR(0 downto 0));    
end ACMP_fcmp_comb;

architecture rtl of ACMP_fcmp_comb is
begin
    ACMP_FCmp_U : entity ieee_proposed.AESL_WP_FCmp
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        opcode => opcode,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fcmp is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 1 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    opcode: IN std_logic_VECTOR(4 downto 0);
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
	dout: OUT std_logic_VECTOR(0 downto 0));    
end ACMP_fcmp;

architecture rtl of ACMP_fcmp is
begin
    ACMP_FCmp_U : entity ieee_proposed.AESL_WP_FCmp
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        opcode => opcode,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Double precision Cmp (Comparator)
-------------------------------------------------------------------------------
-- Predicate values:
--     FCMP_FALSE = 0, ///<  0 0 0 0    Always false (always folded)
--     FCMP_OEQ   = 1, ///<  0 0 0 1    True if ordered and equal
--     FCMP_OGT   = 2, ///<  0 0 1 0    True if ordered and greater than
--     FCMP_OGE   = 3, ///<  0 0 1 1    True if ordered and greater than or equal
--     FCMP_OLT   = 4, ///<  0 1 0 0    True if ordered and less than
--     FCMP_OLE   = 5, ///<  0 1 0 1    True if ordered and less than or equal
--     FCMP_ONE   = 6, ///<  0 1 1 0    True if ordered and operands are unequal
--     FCMP_ORD   = 7, ///<  0 1 1 1    True if ordered (no nans)
--     FCMP_UNO   = 8, ///<  1 0 0 0    True if unordered: isnan(X) | isnan(Y)
--     FCMP_UEQ   = 9, ///<  1 0 0 1    True if unordered or equal
--     FCMP_UGT   =10, ///<  1 0 1 0    True if unordered or greater than
--     FCMP_UGE   =11, ///<  1 0 1 1    True if unordered, greater than, or equal
--     FCMP_ULT   =12, ///<  1 1 0 0    True if unordered or less than
--     FCMP_ULE   =13, ///<  1 1 0 1    True if unordered, less than, or equal
--     FCMP_UNE   =14, ///<  1 1 1 0    True if unordered or not equal
--     FCMP_TRUE  =15, ///<  1 1 1 1    Always true (always folded)

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DCmp_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 1 );
  port  (
    opcode: IN std_logic_VECTOR(4 downto 0);
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
	dout: OUT std_logic_VECTOR(0 downto 0));    
end ACMP_DCmp_comb;

architecture rtl of ACMP_DCmp_comb is
begin
    ACMP_DCmp_U : entity ieee_proposed.AESL_WP_DCmp
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        opcode => opcode,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DCmp is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 1 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    opcode: IN std_logic_VECTOR(4 downto 0);
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
	dout: OUT std_logic_VECTOR(0 downto 0));    
end ACMP_DCmp;

architecture rtl of ACMP_DCmp is
begin
    ACMP_DCmp_U : entity ieee_proposed.AESL_WP_DCmp
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        din1_WIDTH => din1_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        opcode => opcode,
        din0 => din0,
        din1 => din1,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Single precision to int32
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fptosi_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_fptosi_comb;

architecture rtl of ACMP_fptosi_comb is
begin
    ACMP_SPToSI_U : entity ieee_proposed.AESL_WP_SPToSI
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fptosi is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_fptosi;

architecture rtl of ACMP_fptosi is
begin
    ACMP_SPToSI_U : entity ieee_proposed.AESL_WP_SPToSI
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Double precision to int32
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DPToSI_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 32 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_DPToSI_comb;

architecture rtl of ACMP_DPToSI_comb is
begin
    ACMP_DPToSI_U : entity ieee_proposed.AESL_WP_DPToSI
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DPToSI is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_DPToSI;

architecture rtl of ACMP_DPToSI is
begin
    ACMP_DPToSI_U : entity ieee_proposed.AESL_WP_DPToSI
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Int32 to single precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_sitofp_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_sitofp_comb;

architecture rtl of ACMP_sitofp_comb is
begin
    ACMP_SIToDP_U : entity ieee_proposed.AESL_WP_SIToSP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_sitofp is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_sitofp;

architecture rtl of ACMP_sitofp is
begin
    ACMP_SIToDP_U : entity ieee_proposed.AESL_WP_SIToSP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;

-------------------------------------------------------------------------------
-- Int32 to double precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_SIToDP_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 64 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_SIToDP_comb;

architecture rtl of ACMP_SIToDP_comb is
begin
    ACMP_SIToDP_U : entity ieee_proposed.AESL_WP_SIToDP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_SIToDP is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 64 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_SIToDP;

architecture rtl of ACMP_SIToDP is
begin
    ACMP_SIToDP_U : entity ieee_proposed.AESL_WP_SIToDP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;

-------------------------------------------------------------------------------
-- Single precision to uint32
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fptoui_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_fptoui_comb;

architecture rtl of ACMP_fptoui_comb is
begin
    ACMP_SPToUI_U : entity ieee_proposed.AESL_WP_SPToUI
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fptoui is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_fptoui;

architecture rtl of ACMP_fptoui is
begin
    ACMP_SPToUI_U : entity ieee_proposed.AESL_WP_SPToUI
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- Double precision to uint32
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DPToUI_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 32 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_DPToUI_comb;

architecture rtl of ACMP_DPToUI_comb is
begin
    ACMP_DPToUI_U : entity ieee_proposed.AESL_WP_DPToUI
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_DPToUI is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_DPToUI;

architecture rtl of ACMP_DPToUI is
begin
    ACMP_DPToUI_U : entity ieee_proposed.AESL_WP_DPToUI
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;



-------------------------------------------------------------------------------
-- UInt32 to double precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_uitofp_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_uitofp_comb;

architecture rtl of ACMP_uitofp_comb is
begin
    ACMP_UIToFP_U : entity ieee_proposed.AESL_WP_UIToSP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_uitofp is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_uitofp;

architecture rtl of ACMP_uitofp is
begin
    ACMP_UIToFP_U : entity ieee_proposed.AESL_WP_UIToSP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;

-------------------------------------------------------------------------------
-- Int32 to double precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_UIToDP_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 64 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_UIToDP_comb;

architecture rtl of ACMP_UIToDP_comb is
begin
    ACMP_UIToDP_U : entity ieee_proposed.AESL_WP_UIToDP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_UIToDP is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 64 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_UIToDP;

architecture rtl of ACMP_UIToDP is
begin
    ACMP_UIToDP_U : entity ieee_proposed.AESL_WP_UIToDP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;

-------------------------------------------------------------------------------
-- single to double precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fpext_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 64 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_fpext_comb;

architecture rtl of ACMP_fpext_comb is
begin
    ACMP_fpext_U : entity ieee_proposed.AESL_WP_SPToDP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fpext is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 64 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_fpext;

architecture rtl of ACMP_fpext is
begin
    ACMP_fpext_U : entity ieee_proposed.AESL_WP_SPToDP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;

-------------------------------------------------------------------------------
-- double to single precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fptrunc_comb is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 32 );
  port  (
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_fptrunc_comb;

architecture rtl of ACMP_fptrunc_comb is
begin
    ACMP_fptrunc_U : entity ieee_proposed.AESL_WP_DPToSP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => '1',
        reset => '1',
        ce => '1',
        din0 => din0,
        dout => dout);
end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity ACMP_fptrunc is
  generic (
    ID : INTEGER := 0;
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end ACMP_fptrunc;

architecture rtl of ACMP_fptrunc is
begin
    ACMP_fptrunc_U : entity ieee_proposed.AESL_WP_DPToSP
    generic map (
        NUM_STAGE => NUM_STAGE,
        din0_WIDTH => din0_WIDTH,
        dout_WIDTH => dout_WIDTH)
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        din0 => din0,
        dout => dout);
end rtl;




