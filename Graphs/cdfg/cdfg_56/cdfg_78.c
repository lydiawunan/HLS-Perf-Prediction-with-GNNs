#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 339446468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, long p_7, double p_11, double p_13, long p_25)
{
  long v_23;
  short v_21;
  signed char v_19;
  float v_17;
  unsigned int v_15;
  unsigned short v_9;
  unsigned int v_5;
  unsigned short v;
  short result;
  v_23 = -514442862L;
  v_19 = (signed char)94;
  v_17 = -2097657984.f;
  v_15 = (unsigned int)p;
  v_9 = (unsigned short)32068;
  v_5 = (unsigned int)p_25;
  v = (unsigned short)p_7;
  while (- ((double)v_9 * p_11 - (double)((int)v - (int)((unsigned short)p_13))) > 
         (- p_11 - p_11) / (p_11 + 971.)) {
    v_21 = (unsigned long)v_15 % 27099UL;
    v_15 = (unsigned int)(! ((long)v_19 / (p_7 + 669L)) / (((long)v_17 - 
                                                            (long)v_19 / (
                                                            p_25 + 763L)) + 558L));
    v = (unsigned short)((unsigned long)(p_7 + -362366208L) % (((unsigned long)v_15 - (unsigned long)v_23) + 804UL) - (unsigned long)(
                         7485L + p));
    v_9 = (unsigned short)(((long)v_19 & p) * (long)((int)v_21 << (p_7 & 15L)) | 58L);
  }
  while_0_break: ;
  result = (short)((unsigned int)((double)p / (((double)v - 3.23301919067e+38) + 689.)) >> (
                   - (v_5 % 5235U) & 31U));
  return result;
}


