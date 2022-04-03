// 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

/*-----------------------------------------------------------------------
-- AESL_FPSim_pkg.v:
-- Floating point simulation model for verilog.
--
-----------------------------------------------------------------------


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
*/

`timescale 1 ns / 1 ps 

module ACMP_fadd_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    
    AESL_WP_FAdd #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH) 
    ACMP_FAdd_U (
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_fadd(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    
    AESL_WP_FAdd #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH) 
    ACMP_FAdd_U (
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule


/*
-------------------------------------------------------------------------------
-- Single precision Sub.
-------------------------------------------------------------------------------
 */
module ACMP_fsub_comb (din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;
    AESL_WP_FSub #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FSub_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_fsub(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;
    AESL_WP_FSub #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FSub_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule



/*
-------------------------------------------------------------------------------
-- Single precision AddSub.
-------------------------------------------------------------------------------
 */
module ACMP_faddfsub_comb(opcode, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[1:0] opcode;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FAddFSub 
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FAddFSub_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .opcode(opcode),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_faddfsub(clk, reset, ce, opcode, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[1:0] opcode;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FAddFSub 
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FAddFSub_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .opcode(opcode),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Single precision Mul.
-------------------------------------------------------------------------------
 */

module ACMP_fmul_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FMul
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FMul_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_fmul(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FMul
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FMul_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Single precision Div.
-------------------------------------------------------------------------------
 */

module ACMP_fdiv_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FDiv
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FDiv_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_fdiv(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FDiv
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FDiv_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Single precision Sqrt.
-------------------------------------------------------------------------------
 */

module ACMP_fsqrt_comb (din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FSqrt
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FSqrt_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

module ACMP_fsqrt(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FSqrt
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FSqrt_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

/*
-------------------------------------------------------------------------------
-- Single precision RSqrt.
-------------------------------------------------------------------------------
 */

module ACMP_frsqrt_comb (din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FRSqrt
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FRSqrt_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

module ACMP_frsqrt(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FRSqrt
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FRSqrt_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

/*
-------------------------------------------------------------------------------
-- Single precision Recip.
-------------------------------------------------------------------------------
 */

module ACMP_frecip_comb (din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FRecip
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FRecip_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

module ACMP_frecip(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FRecip
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FRecip_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

/*
-------------------------------------------------------------------------------
-- Single precision Log.
-------------------------------------------------------------------------------
 */

module ACMP_flog_comb (din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FLog
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FLog_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

module ACMP_flog(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FLog
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FLog_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

/*
-------------------------------------------------------------------------------
-- Single precision Exponential.
-------------------------------------------------------------------------------
 */

module ACMP_fexp_comb (din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FExp
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FExp_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

module ACMP_fexp(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_FExp
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FExp_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
    
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision
-------------------------------------------------------------------------------
*/

/*
-------------------------------------------------------------------------------
-- Double precision ADD
-------------------------------------------------------------------------------
 */
module ACMP_dadd_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DAdd
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DAdd_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_dadd(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DAdd
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DAdd_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision Sub
-------------------------------------------------------------------------------
 */

module ACMP_dsub_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DSub
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DSub_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_dsub(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DSub
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DSub_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision AddSub
-------------------------------------------------------------------------------
 */

module ACMP_dadddsub_comb(opcode, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[1:0] opcode;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DAddDSub
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DAddDSub_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .opcode(opcode),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_dadddsub(clk, reset, ce, opcode, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[1:0] opcode;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DAddDSub
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DAddDSub_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .opcode(opcode),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision Mul
-------------------------------------------------------------------------------
 */

module ACMP_dmul_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DMul
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DMul_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_dmul(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DMul
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DMul_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision Div
-------------------------------------------------------------------------------
 */

module ACMP_ddiv_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DDiv
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DDiv_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_ddiv(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DDiv
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DDiv_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision Sqrt
-------------------------------------------------------------------------------
 */

module ACMP_dsqrt_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DSqrt
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DSqrt_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_dsqrt(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DSqrt
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DSqrt_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision RSqrt
-------------------------------------------------------------------------------
 */

module ACMP_drsqrt_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DRSqrt
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DRSqrt_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_drsqrt(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DRSqrt
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DRSqrt_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision Recip
-------------------------------------------------------------------------------
 */

module ACMP_drecip_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DRecip
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DRecip_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_drecip(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DRecip
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DRecip_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision Log
-------------------------------------------------------------------------------
 */

module ACMP_dlog_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DLog
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DLog_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_dlog(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DLog
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DLog_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Double precision Exponential
-------------------------------------------------------------------------------
 */

module ACMP_dexp_comb(din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DExp
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DExp_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_dexp(clk, reset, ce, din0, din1, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 13;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 64;
    input clk, reset, ce;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DExp
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DExp_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule


/*
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

 */
module ACMP_fcmp_comb(opcode, din0, din1, dout);    
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 1;
    input[4:0] opcode;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
	output[0:0] dout;    

    AESL_WP_FCmp
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FCmp_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .opcode(opcode),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_fcmp(clk, reset, ce, opcode, din0, din1, dout);    
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter din1_WIDTH = 32;
    parameter dout_WIDTH = 1;
    input clk;
    input reset, ce;
    input[4:0] opcode;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
	output[0:0] dout;    

    AESL_WP_FCmp
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_FCmp_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .opcode(opcode),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule



/*
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
 */
module ACMP_dcmp_comb(opcode, din0, din1, dout);    
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 1;
    input[4:0] opcode;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
	output[0:0] dout;    

    AESL_WP_DCmp
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DCmp_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .opcode(opcode),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule

module ACMP_dcmp(clk, reset, ce, opcode, din0, din1, dout);    
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 64;
    parameter din1_WIDTH = 64;
    parameter dout_WIDTH = 1;
    input clk;
    input reset, ce;
    input[4:0] opcode;
    input[din0_WIDTH-1:0] din0;
    input[din1_WIDTH-1:0] din1;
	output[0:0] dout;    

    AESL_WP_DCmp
        #(NUM_STAGE, din0_WIDTH, din1_WIDTH, dout_WIDTH)
    ACMP_DCmp_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .opcode(opcode),
        .din0(din0),
        .din1(din1),
        .dout(dout));
endmodule



/*
-------------------------------------------------------------------------------
-- Single precision to int32
-------------------------------------------------------------------------------
 */
module ACMP_fptosi_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SPToSI
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_SPToSI_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_fptosi(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SPToSI
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_SPToSI_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule



/*
-------------------------------------------------------------------------------
-- Double precision to int32
-------------------------------------------------------------------------------
 */
module ACMP_dptosi_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 64;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DPToSI
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_DPToSI_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_dptosi(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 64;
    parameter dout_WIDTH = 32;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DPToSI
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_DPToSI_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule



/*
-------------------------------------------------------------------------------
-- Int32 to single precision
-------------------------------------------------------------------------------
 */
module ACMP_sitofp_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SIToSP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_SIToDP_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_sitofp(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SIToSP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_SIToDP_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Int32 to double precision
-------------------------------------------------------------------------------
 */
module ACMP_sitodp_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SIToDP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_SIToDP_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_sitodp(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SIToDP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_SIToDP_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- Single precision to uint32
-------------------------------------------------------------------------------
 */
module ACMP_fptoui_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SPToUI
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_SPToUI_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_fptoui(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 32;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SPToUI
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_SPToUI_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule



/*
-------------------------------------------------------------------------------
-- Double precision to uint32
-------------------------------------------------------------------------------
 */
module ACMP_dptoui_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 64;
    parameter dout_WIDTH = 32;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DPToUI
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_DPToUI_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_dptoui(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 64;
    parameter dout_WIDTH = 32;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DPToUI
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_DPToUI_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule



/*
-------------------------------------------------------------------------------
-- uInt32 to single precision
-------------------------------------------------------------------------------
 */
module ACMP_uitofp_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_UIToSP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_UIToSP_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_uitofp(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_UIToSP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_UIToSP_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- uInt32 to double precision
-------------------------------------------------------------------------------
 */
module ACMP_uitodp_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_UIToDP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_UIToDP_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_uitodp(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_UIToDP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_UIToDP_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- single to double precision
-------------------------------------------------------------------------------
 */
module ACMP_fpext_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SPToDP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_fpext_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_fpext(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_SPToDP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_fpext_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule

/*
-------------------------------------------------------------------------------
-- double to single precision
-------------------------------------------------------------------------------
 */
module ACMP_fptrunc_comb(din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DPToSP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_fptrunc_U(
        .clk(1'b1),
        .reset(1'b1),
        .ce(1'b1),
        .din0(din0),
        .dout(dout));
endmodule

module ACMP_fptrunc(clk, reset, ce, din0, dout);
    parameter ID = 0;
    parameter NUM_STAGE = 12;
    parameter din0_WIDTH = 32;
    parameter dout_WIDTH = 64;
    input clk;
    input reset, ce;
    input[din0_WIDTH-1:0] din0;
    output[dout_WIDTH-1:0] dout;

    AESL_WP_DPToSP
        #(NUM_STAGE, din0_WIDTH, dout_WIDTH)
    ACMP_fptrunc_U(
        .clk(clk),
        .reset(reset),
        .ce(ce),
        .din0(din0),
        .dout(dout));
endmodule




