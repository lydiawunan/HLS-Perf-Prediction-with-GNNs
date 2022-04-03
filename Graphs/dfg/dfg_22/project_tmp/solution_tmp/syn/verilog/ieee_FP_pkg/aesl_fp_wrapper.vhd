-- 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
package AESL_FPSIM_UTIL is
function esl_conv_real(lv : UNSIGNED) return real;
function esl_conv_real(lv : SIGNED) return real;
end package;

package body AESL_FPSIM_UTIL is
  function esl_conv_real(lv : UNSIGNED) return real is
    variable ret : real;
    variable power : integer;
    variable msb : integer;
    variable lv2 : UNSIGNED(lv'length - 1 downto 0);
  begin
    msb := lv'length - 1;
    power := 2 ** 16;
    ret := 0.0;
    lv2 := lv;

    while msb >= 16 loop
        ret := ret * real(power);
        ret := ret + real(to_integer(lv2(msb downto (msb - 15))));
        msb := msb - 16;
    end loop;
    power := 2 ** (msb + 1);
    ret := ret * real(power);
    ret := ret + real(to_integer(lv2(msb downto 0)));
    return ret;

  end function;

  function esl_conv_real(lv : SIGNED) return real is
    variable ret : real;
    variable sig : real;
    variable msb : integer;
    variable lv2 : UNSIGNED(lv'length - 1 downto 0);
  begin
    msb := lv'length - 1;
    ret := 0.0;
    if lv(msb) = '0' then
        sig := 1.0;
        lv2 := UNSIGNED(lv);
    else
        sig := -1.0;
        lv2 := UNSIGNED(not STD_LOGIC_VECTOR(lv));
        lv2 := lv2 + 1;
    end if;

    ret := esl_conv_real(lv2);
    ret := ret * sig;
    return ret;

  end function;

end package body;

-- --------------------------------------------------------------------
-- Title      : float_alg_pkg.vhd
-- These are the algorithemic functions.  In this package you will find
-- routines for doing complex arithmetic and basic Trig functions.  These
-- functions are not optomized, and are placed here as examples.  In the
-- future, a new complex number format will be used and placed into the
-- floating point packages.  The names of the routines have been changed
-- from "fp_*" to "fpalg_*" so that there will be no name space violations.
-- Last Modified: $Date: 2011/01/26 16:06:55 $
-- RCS ID: $Id: float_alg_pkg.vhdl,v 2.0 2011/01/26 16:06:55 l435385 Exp l435385 $
--
--  Created for VHDL-200X-ft, David Bishop (dbishop@vhdl.org) 
-- ---------------------------------------------------------------------------
library ieee, ieee_proposed;
use ieee.std_logic_1164.all;
use ieee_proposed.fixed_float_types.all;
use ieee_proposed.fixed_pkg.all;
use ieee_proposed.float_pkg.all;

package float_alg_pkg is
  -- This differed constant will tell you if the package body is synthesizable
  -- or implimented as real numbers.
  constant fpalgsynth_or_real : BOOLEAN;  -- differed constant

  -- returns ln(arg)
  function ln (
    arg                  : float;       -- floating point input
    constant round_style : round_type := float_round_style;
    constant guard       : NATURAL    := float_guard_bits;
    constant check_error : BOOLEAN    := float_check_error;
    constant denormalize : BOOLEAN    := float_denormalize;
    constant iterations  : NATURAL    := 0)
    return float;

  function exp (
    arg                  : float;       -- floating point input
    constant round_style : round_type := float_round_style;
    constant guard       : NATURAL    := float_guard_bits;
    constant check_error : BOOLEAN    := float_check_error;
    constant denormalize : BOOLEAN    := float_denormalize;
    constant iterations  : NATURAL    := 0)
    return float;

end package float_alg_pkg;

library ieee;
use ieee.math_real.all;
package body float_alg_pkg is

  -- Set to "true" if synthesizable, "false" if done with real numbers
  constant fpalgsynth_or_real : BOOLEAN := false;  -- differed constant

  function ln (
    arg                  : float;       -- floating point input
    constant round_style : round_type := float_round_style;
    constant guard       : NATURAL    := float_guard_bits;
    constant check_error : BOOLEAN    := float_check_error;
    constant denormalize : BOOLEAN    := float_denormalize;
    constant iterations  : NATURAL    := 0)
    return float is
    constant fraction_width   : NATURAL := -arg'low;  -- length of FP output fraction
    constant exponent_width   : NATURAL := arg'high;  -- length of FP output exponent
    variable arg_real, result : REAL;   -- Real versions
    variable fpresult         : float (arg'range);
    variable fptype           : valid_fpstate;
  begin
    fptype := Classfp(arg, check_error);
    classcase : case fptype is
      when isx =>
        fpresult := (others => 'X');
      when nan | quiet_nan =>           -- Return quiet NAN, IEEE754-1985-7.1,1
        fpresult := qnanfp (fraction_width => fraction_width,
                            exponent_width => exponent_width);
      when neg_normal | neg_denormal | neg_inf =>     -- log (neg)
        -- Return quiet NAN, IEEE754-1985-7.1,5*
        fpresult := qnanfp (fraction_width => fraction_width,
                            exponent_width => exponent_width);
      when pos_inf =>                   -- log (inf), return infinity
        fpresult := pos_inffp (fraction_width => fraction_width,
                               exponent_width => exponent_width);
      when pos_zero | neg_zero =>       -- log (0), return negative infinity
        fpresult := neg_inffp (fraction_width => fraction_width,
                               exponent_width => exponent_width);
      when others =>
        arg_real := to_real (arg         => arg,
                             denormalize => denormalize);
        result := log (arg_real);
        fpresult := to_float (arg            => result,
                              fraction_width => fraction_width,
                              exponent_width => exponent_width,
                              round_style    => round_style,
                              denormalize    => denormalize);
    end case classcase;
    return fpresult;
  end function ln;

  function exp (
    arg                  : float;       -- floating point input
    constant round_style : round_type := float_round_style;
    constant guard       : NATURAL    := float_guard_bits;
    constant check_error : BOOLEAN    := float_check_error;
    constant denormalize : BOOLEAN    := float_denormalize;
    constant iterations  : NATURAL    := 0)
    return float is
    constant fraction_width   : NATURAL := -arg'low;  -- length of FP output fraction
    constant exponent_width   : NATURAL := arg'high;  -- length of FP output exponent
    variable arg_real, result : REAL;   -- Real versions
    variable fptype           : valid_fpstate;
    variable fpresult         : float (arg'range);
  begin
    fptype := Classfp(arg, check_error);
    classcase : case fptype is
      when isx =>
        fpresult := (others => 'X');
      when nan | quiet_nan =>
        -- Return quiet NAN, IEEE754-1985-7.1,1
        fpresult := qnanfp (fraction_width => fraction_width,
                            exponent_width => exponent_width);
      when pos_inf =>                   -- (e**inf), return infinity
        fpresult := pos_inffp (fraction_width => fraction_width,
                               exponent_width => exponent_width);
      when neg_inf =>                   -- (e**-inf), return zero
        fpresult := zerofp (fraction_width => fraction_width,
                            exponent_width => exponent_width);
      when pos_zero | neg_zero =>       -- return 1.0
        fpresult := to_float (arg            => 1,
                              fraction_width => fraction_width,
                              exponent_width => exponent_width);
      when others =>
        arg_real := to_real (arg         => arg,
                             denormalize => denormalize);
        result := exp(arg_real);
        fpresult := to_float (arg            => result,
                              fraction_width => fraction_width,
                              exponent_width => exponent_width,
                              round_style    => round_style,
                              denormalize    => denormalize);
    end case classcase;
    return fpresult;
  end function exp;

end package body float_alg_pkg;

Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity AESL_WP_FAdd is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_FAdd;

architecture rtl of AESL_WP_FAdd is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= add(to_float(din0, 8, 23), to_float(din1, 8, 23));
    
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

end rtl;


-------------------------------------------------------------------------------
-- Single precision Sub.
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;

entity AESL_WP_FSub is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_FSub;

architecture rtl of AESL_WP_FSub is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= subtract(to_float(din0, 8, 23), to_float(din1, 8, 23));
    
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_FAddFSub is
  generic (
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
end AESL_WP_FAddFSub;

architecture rtl of AESL_WP_FAddFSub is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    proc_dout_tmp : process(din0, din1, opcode)
    begin
        if (opcode(0) = '0') then
            dout_tmp <= add(to_float(din0, 8, 23), to_float(din1, 8, 23));
        else
            dout_tmp <= subtract(to_float(din0, 8, 23), to_float(din1, 8, 23));
        end if;
    end process;

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
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

entity AESL_WP_FMul is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_FMul;

architecture rtl of AESL_WP_FMul is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= multiply(to_float(din0, 8, 23), to_float(din1, 8, 23));
    
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_FDiv is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_FDiv;

architecture rtl of AESL_WP_FDiv is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= divide(to_float(din0, 8, 23), to_float(din1, 8, 23));
    
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_FSqrt is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_FSqrt;

architecture rtl of AESL_WP_FSqrt is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= sqrt(to_float(din1, 8, 23));
    
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_FRSqrt is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_FRSqrt;

architecture rtl of AESL_WP_FRSqrt is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= reciprocal(sqrt(to_float(din1, 8, 23)));
    
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_FRecip is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_FRecip;

architecture rtl of AESL_WP_FRecip is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= reciprocal(to_float(din1, 8, 23));
    
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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
use ieee_proposed.float_alg_pkg.all;

entity AESL_WP_FLog is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_FLog;

architecture rtl of AESL_WP_FLog is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= ln(to_float(din1, 8, 23));
    
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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
use ieee_proposed.float_alg_pkg.all;

entity AESL_WP_FExp is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 32;
    din1_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_FExp;

architecture rtl of AESL_WP_FExp is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= exp(to_float(din1, 8, 23));
    
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_DAdd is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_DAdd;

architecture rtl of AESL_WP_DAdd is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    
    dout_tmp <= add(to_float(din0, 11, 52), to_float(din1, 11, 52));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_DSub is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_DSub;

architecture rtl of AESL_WP_DSub is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= subtract(to_float(din0, 11, 52), to_float(din1, 11, 52));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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


entity AESL_WP_DAddDSub is
  generic (
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
end AESL_WP_DAddDSub;

architecture rtl of AESL_WP_DAddDSub is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    proc_dout_tmp : process(din0, din1, opcode)
    begin
        if (opcode(0) = '0') then
            dout_tmp <= add(to_float(din0, 11, 52), to_float(din1, 11, 52));
        else
            dout_tmp <= subtract(to_float(din0, 11, 52), to_float(din1, 11, 52));
        end if;
    end process;

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else 
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
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

entity AESL_WP_DMul is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_DMul;

architecture rtl of AESL_WP_DMul is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= multiply(to_float(din0, 11, 52), to_float(din1, 11, 52));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_DDiv is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_DDiv;

architecture rtl of AESL_WP_DDiv is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= divide(to_float(din0, 11, 52), to_float(din1, 11, 52));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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
use ieee_proposed.fixed_float_types.all;

entity AESL_WP_DSqrt is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_DSqrt;

architecture rtl of AESL_WP_DSqrt is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= sqrt(to_float(din1, 11, 52), round_nearest, 10);

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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
use ieee_proposed.fixed_float_types.all;

entity AESL_WP_DRSqrt is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_DRSqrt;

architecture rtl of AESL_WP_DRSqrt is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= reciprocal(sqrt(to_float(din1, 11, 52)), round_nearest, 10);

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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
use ieee_proposed.fixed_float_types.all;

entity AESL_WP_DRecip is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_DRecip;

architecture rtl of AESL_WP_DRecip is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= reciprocal(to_float(din1, 11, 52), round_nearest, 10);

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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
use ieee_proposed.fixed_float_types.all;
use ieee_proposed.float_alg_pkg.all;

entity AESL_WP_DLog is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_DLog;

architecture rtl of AESL_WP_DLog is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= ln(to_float(din1, 11, 52), round_nearest, 10);

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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
use ieee_proposed.fixed_float_types.all;
use ieee_proposed.float_alg_pkg.all;

entity AESL_WP_DExp is
  generic (
    NUM_STAGE : INTEGER := 13;
    din0_WIDTH : INTEGER := 64;
    din1_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 64);
  port  (
    clk, reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    din1 : in std_logic_vector(din1_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0));
end AESL_WP_DExp;

architecture rtl of AESL_WP_DExp is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= exp(to_float(din1, 11, 52), round_nearest, 10);

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_FCmp is
  generic (
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
end AESL_WP_FCmp;

architecture rtl of AESL_WP_FCmp is
-- Predicate values:
constant FCMP_FALSE : std_logic_vector(3 downto 0) := "0000"; -- Always false (always folded)
constant FCMP_OEQ : std_logic_vector(3 downto 0) := "0001"; -- True if ordered and equal
constant FCMP_OGT : std_logic_vector(3 downto 0) := "0010"; -- True if ordered and greater than
constant FCMP_OGE : std_logic_vector(3 downto 0) := "0011"; -- True if ordered and greater than or equal
constant FCMP_OLT : std_logic_vector(3 downto 0) := "0100"; -- True if ordered and less than
constant FCMP_OLE : std_logic_vector(3 downto 0) := "0101"; -- True if ordered and less than or equal
constant FCMP_ONE : std_logic_vector(3 downto 0) := "0110"; -- True if ordered and operands are unequal
constant FCMP_ORD : std_logic_vector(3 downto 0) := "0111"; -- True if ordered (no nans)
constant FCMP_UNO : std_logic_vector(3 downto 0) := "1000"; -- True if unordered: isnan(X) | isnan(Y)
constant FCMP_UEQ : std_logic_vector(3 downto 0) := "1001"; -- True if unordered or equal
constant FCMP_UGT : std_logic_vector(3 downto 0) := "1010"; -- True if unordered or greater than
constant FCMP_UGE : std_logic_vector(3 downto 0) := "1011"; -- True if unordered, greater than, or equal
constant FCMP_ULT : std_logic_vector(3 downto 0) := "1100"; -- True if unordered or less than
constant FCMP_ULE : std_logic_vector(3 downto 0) := "1101"; -- True if unordered, less than, or equal
constant FCMP_UNE : std_logic_vector(3 downto 0) := "1110"; -- True if unordered or not equal
constant FCMP_TRUE : std_logic_vector(3 downto 0) := "1111"; -- Always true (always folded)
signal ordered : boolean;
signal dout_tmp : std_logic_vector(0 downto 0);
type buff_type is array (0 to NUM_STAGE - 2) of std_logic_vector(0 downto 0);
signal dout_buff : buff_type;
begin
    ordered <= ((not Isnan(to_float(din0, 8, 23))) and (not Isnan(to_float(din1, 8, 23))));
    
    proc_dout_tmp : process(opcode, din0, din1, ordered)
    begin
        case (opcode(3 downto 0)) is
        when FCMP_FALSE => dout_tmp <= "0";
        when FCMP_OEQ => 
            if (ordered and eq(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_OGT => 
            if (ordered and gt(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_OGE =>
            if (ordered and ge(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_OLT =>
            if (ordered and lt(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else 
                dout_tmp <= "0";
            end if;
        when FCMP_OLE =>
            if (ordered and le(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_ONE =>
            if (ordered and ne(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_ORD =>
            if (ordered) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_UNO =>
            if (not ordered) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_UEQ => 
            if ((not ordered) or eq(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_UGT => 
            if ((not ordered) or gt(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_UGE =>
            if ((not ordered) or ge(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_ULT =>
            if ((not ordered) or lt(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else 
                dout_tmp <= "0";
            end if;
        when FCMP_ULE =>
            if ((not ordered) or le(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_UNE =>
            if ((not ordered) or ne(to_float(din0, 8, 23), to_float(din1, 8, 23))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when FCMP_TRUE => dout_tmp <= "1";
        when others => dout_tmp <= "0";
        end case;
    end process;

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= dout_buff(NUM_STAGE - 2);
        else
            dout <= dout_tmp;
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

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

entity AESL_WP_DCmp is
  generic (
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
end AESL_WP_DCmp;

architecture rtl of AESL_WP_DCmp is
-- Predicate values:
constant DCMP_FALSE : std_logic_vector(3 downto 0) := "0000"; -- Always false (always folded)
constant DCMP_OEQ : std_logic_vector(3 downto 0) := "0001"; -- True if ordered and equal
constant DCMP_OGT : std_logic_vector(3 downto 0) := "0010"; -- True if ordered and greater than
constant DCMP_OGE : std_logic_vector(3 downto 0) := "0011"; -- True if ordered and greater than or equal
constant DCMP_OLT : std_logic_vector(3 downto 0) := "0100"; -- True if ordered and less than
constant DCMP_OLE : std_logic_vector(3 downto 0) := "0101"; -- True if ordered and less than or equal
constant DCMP_ONE : std_logic_vector(3 downto 0) := "0110"; -- True if ordered and operands are unequal
constant DCMP_ORD : std_logic_vector(3 downto 0) := "0111"; -- True if ordered (no nans)
constant DCMP_UNO : std_logic_vector(3 downto 0) := "1000"; -- True if unordered: isnan(X) | isnan(Y)
constant DCMP_UEQ : std_logic_vector(3 downto 0) := "1001"; -- True if unordered or equal
constant DCMP_UGT : std_logic_vector(3 downto 0) := "1010"; -- True if unordered or greater than
constant DCMP_UGE : std_logic_vector(3 downto 0) := "1011"; -- True if unordered, greater than, or equal
constant DCMP_ULT : std_logic_vector(3 downto 0) := "1100"; -- True if unordered or less than
constant DCMP_ULE : std_logic_vector(3 downto 0) := "1101"; -- True if unordered, less than, or equal
constant DCMP_UNE : std_logic_vector(3 downto 0) := "1110"; -- True if unordered or not equal
constant DCMP_TRUE : std_logic_vector(3 downto 0) := "1111"; -- Always true (always folded)
signal ordered : boolean;
signal dout_tmp : std_logic_vector(0 downto 0);
type buff_type is array (0 to NUM_STAGE - 2) of std_logic_vector(0 downto 0);
signal dout_buff : buff_type;
begin
    ordered <= ((not Isnan(to_float(din0, 11, 52))) and (not Isnan(to_float(din1, 11, 52))));
    
    proc_dout_tmp : process(opcode, din0, din1, ordered)
    begin
        case (opcode(3 downto 0)) is
        when DCMP_FALSE => dout_tmp <= "0";
        when DCMP_OEQ => 
            if (ordered and eq(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_OGT => 
            if (ordered and gt(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_OGE =>
            if (ordered and ge(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_OLT =>
            if (ordered and lt(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else 
                dout_tmp <= "0";
            end if;
        when DCMP_OLE =>
            if (ordered and le(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_ONE =>
            if (ordered and ne(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_ORD =>
            if (ordered) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_UNO =>
            if (not ordered) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_UEQ => 
            if ((not ordered) or eq(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_UGT => 
            if ((not ordered) or gt(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_UGE =>
            if ((not ordered) or ge(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_ULT =>
            if ((not ordered) or lt(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else 
                dout_tmp <= "0";
            end if;
        when DCMP_ULE =>
            if ((not ordered) or le(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_UNE =>
            if ((not ordered) or ne(to_float(din0, 11, 52), to_float(din1, 11, 52))) then
                dout_tmp <= "1";
            else
                dout_tmp <= "0";
            end if;
        when DCMP_TRUE => dout_tmp <= "1";
        when others => dout_tmp <= "0";
        end case;
    end process;

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= dout_buff(NUM_STAGE - 2);
        else
            dout <= dout_tmp;
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
end rtl;



-------------------------------------------------------------------------------
-- Single precision to int32
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.fixed_float_types.all;
use ieee_proposed.float_pkg.all;

entity AESL_WP_SPToSI is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_SPToSI;

architecture rtl of AESL_WP_SPToSI is
    type buff_type is array (0 to NUM_STAGE - 2) of std_logic_vector(dout_WIDTH-1 downto 0);
    signal dout_buff : buff_type;
    signal dout_tmp : std_logic_vector(dout_WIDTH-1 downto 0);
begin

    dout_tmp <= std_logic_vector(resize(to_signed(to_float(din0, 8, 23), 32, round_zero, true), dout_WIDTH));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= dout_buff(NUM_STAGE - 2);
        else
            dout <= dout_tmp;
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

end rtl;



-------------------------------------------------------------------------------
-- Double precision to int32
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.fixed_float_types.all;
use ieee_proposed.float_pkg.all;

entity AESL_WP_DPToSI is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_DPToSI;

architecture rtl of AESL_WP_DPToSI is
    type buff_type is array (0 to NUM_STAGE - 2) of std_logic_vector(dout_WIDTH-1 downto 0);
    signal dout_buff : buff_type;
    signal dout_tmp : std_logic_vector(dout_WIDTH - 1 downto 0);
begin

    dout_tmp <= std_logic_vector(resize(to_signed(to_float(din0, 11, 52), 64, round_zero, true), dout_WIDTH));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= dout_buff(NUM_STAGE - 2);
        else
            dout <= dout_tmp;
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
end rtl;



-------------------------------------------------------------------------------
-- Int32 to single precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;
use ieee_proposed.AESL_FPSIM_UTIL.all;

entity AESL_WP_SIToSP is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce : std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_SIToSP;

architecture rtl of AESL_WP_SIToSP is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= to_float(esl_conv_real(SIGNED(din0)), 8, 23);
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
end rtl;


-------------------------------------------------------------------------------
-- Int32 to double precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;
use ieee_proposed.fixed_float_types.all;
use ieee_proposed.AESL_FPSIM_UTIL.all;

entity AESL_WP_SIToDP is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 64 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_SIToDP;

architecture rtl of AESL_WP_SIToDP is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= to_float(esl_conv_real(SIGNED(din0)), 11, 52);

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
end rtl;


-------------------------------------------------------------------------------
-- Single precision to uint32
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.fixed_float_types.all;
use ieee_proposed.float_pkg.all;

entity AESL_WP_SPToUI is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_SPToUI;

architecture rtl of AESL_WP_SPToUI is
    type buff_type is array (0 to NUM_STAGE - 2) of std_logic_vector(dout_WIDTH-1 downto 0);
    signal dout_buff : buff_type;
    signal dout_tmp : std_logic_vector(dout_WIDTH-1 downto 0);
begin

    dout_tmp <= std_logic_vector(resize(to_unsigned(to_float(din0, 8, 23), 32, round_zero, true), dout_WIDTH));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= dout_buff(NUM_STAGE - 2);
        else
            dout <= dout_tmp;
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;

end rtl;



-------------------------------------------------------------------------------
-- Double precision to uint32
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.fixed_float_types.all;
use ieee_proposed.float_pkg.all;

entity AESL_WP_DPToUI is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_DPToUI;

architecture rtl of AESL_WP_DPToUI is
    type buff_type is array (0 to NUM_STAGE - 2) of std_logic_vector(dout_WIDTH-1 downto 0);
    signal dout_buff : buff_type;
    signal dout_tmp : std_logic_vector(dout_WIDTH - 1 downto 0);
begin

    dout_tmp <= std_logic_vector(resize(to_unsigned(to_float(din0, 11, 52), 64, round_zero, true), dout_WIDTH));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= dout_buff(NUM_STAGE - 2);
        else
            dout <= dout_tmp;
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
end rtl;



-------------------------------------------------------------------------------
-- Int32 to single precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;
use ieee_proposed.AESL_FPSIM_UTIL.all;

entity AESL_WP_UIToSP is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_UIToSP;

architecture rtl of AESL_WP_UIToSP is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    dout_tmp <= to_float(esl_conv_real(UNSIGNED(din0)), 8, 23);
    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
end rtl;


-------------------------------------------------------------------------------
-- uInt32 to double precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;
use ieee_proposed.fixed_float_types.all;
use ieee_proposed.AESL_FPSIM_UTIL.all;

entity AESL_WP_UIToDP is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 64 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_UIToDP;

architecture rtl of AESL_WP_UIToDP is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= to_float(esl_conv_real(UNSIGNED(din0)), 11, 52);

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
end rtl;

-------------------------------------------------------------------------------
-- single to double precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;
use ieee_proposed.fixed_float_types.all;

entity AESL_WP_SPToDP is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 32;
    dout_WIDTH : INTEGER := 64 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_SPToDP;

architecture rtl of AESL_WP_SPToDP is
    type buff_type is array (0 to NUM_STAGE - 2) of float64;
    signal dout_buff : buff_type;
    signal dout_tmp : float64;
begin
    dout_tmp <= to_float64(to_float(din0, 8, 23));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
end rtl;



-------------------------------------------------------------------------------
-- double to single precision
-------------------------------------------------------------------------------
Library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
Library work;
use work.all;
Library ieee_proposed;
use ieee_proposed.float_pkg.all;
use ieee_proposed.fixed_float_types.all;

entity AESL_WP_DPToSP is
  generic (
    NUM_STAGE : INTEGER := 12;
    din0_WIDTH : INTEGER := 64;
    dout_WIDTH : INTEGER := 32 );
  port  (
    clk : std_logic;
    reset, ce: std_logic;
    din0 : in std_logic_vector(din0_WIDTH-1 downto 0);
    dout : out std_logic_vector(dout_WIDTH-1 downto 0) );
end AESL_WP_DPToSP;

architecture rtl of AESL_WP_DPToSP is
    type buff_type is array (0 to NUM_STAGE - 2) of float32;
    signal dout_buff : buff_type;
    signal dout_tmp : float32;
begin
    -- NOTE:
    -- the following line returns incorrect result(inf) when din0 is a 'denomalized number'
    -- dout_tmp <= to_float32(to_float(din0, 11, 52));
    dout_tmp <= to_float32(resize(resize(to_float(din0, 11, 52), 10, 23), 9, 23));

    proc_dout : process(dout_tmp, dout_buff)
    begin
        if (NUM_STAGE > 1) then
            dout <= to_slv(dout_buff(NUM_STAGE - 2));
        else
            dout <= to_slv(dout_tmp);
        end if;
    end process;

    proc_buff : process(clk)
        variable i: integer;
    begin
        if (clk'event and clk = '1') then
            if (NUM_STAGE > 1 and ce = '1') then
                for i in 0 to NUM_STAGE - 2 loop
                    if (i = 0) then
                        dout_buff(i) <= dout_tmp;
                    else
                        dout_buff(i) <= dout_buff(i - 1);
                    end if;
                end loop;
            end if;
        end if;
    end process;
end rtl;






