#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164862005
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, float p_5[1][4][3], float p_9,
                unsigned long p_13, int p_15)
{
  unsigned char v_19;
  short v_17;
  int v_11;
  unsigned long v_7;
  short v;
  signed char result;
  v_19 = (unsigned char)p_13;
  v_17 = (short)14075;
  v_11 = (int)v_17 + ~ ((int)p_5[0][2][2] / (((int)v_19 - (int)p) + 140));
  v_7 = (unsigned long)((double)((unsigned long long)(~ p_15) + 80272181319ULL) + -1364804403.53);
  v = (short)(46115UL % ((unsigned long)((float)((int)((unsigned short)p_5[0][0][0]) + 6572) * (
                                         (float)v_7 * p_9)) / (4041101519UL % (
                                                               ((unsigned long)v_11 + p_13) + 751UL) + 352UL) + 196UL));
  result = (signed char)(! (! (64600ULL / (unsigned long long)((int)p + 788))) << (
                         (int)v & 63));
  return result;
}


