#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 171182150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, int p_5, short p_7, int p_15, short p_19)
{
  signed char v_17;
  signed char v_13;
  unsigned int v_11;
  int v_9;
  signed char v;
  short result;
  v_11 = 1054555482U;
  v_9 = p_5;
  v = (signed char)107;
  result = (short)14562;
  v_13 = (signed char)-29;
  while ((((int)result | (int)p) - ((int)p | (int)p)) << ((int)v * (p_5 | (int)p_7) & 31) >= (int)(
         (double)p_7 / 272.999999991)) {
    v_17 = (unsigned int)v_13 / (v_11 / (unsigned int)(v_9 * -244367357 + 886) + 123U);
    v_11 = ((unsigned int)((int)v_17 / ((int)p_19 + 707)) - (unsigned int)p_15 % 724545349U) + (unsigned int)p_15;
    v_9 = -36 % (p_15 / -56 + 740) << (p_15 & 31);
    result = (short)(~ p_15);
  }
  while_0_break: ;
  return result;
}


