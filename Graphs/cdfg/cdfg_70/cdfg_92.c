#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 730870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, long p_5, char p_9, int p_17[1][3][3], short p_19)
{
  short v_15;
  short v_13;
  unsigned int v_11;
  unsigned short v_7;
  long v;
  char result;
  v_13 = (short)p_5;
  v_11 = (unsigned int)p_19;
  v_7 = (unsigned short)p_5;
  v = (long)p_17[0][0][1];
  while (v >= (long)p_9) {
    v_15 = (unsigned int)v_13 % (v_11 / 80U + 1007U);
    v_13 = (short)((unsigned long)(~ p_19) ^ (unsigned long)v_7 / (((unsigned long)p_9 + p) + 606UL));
    v_7 = (unsigned short)((p_17[0][1][0] * p_17[0][2][2]) % ((int)v_7 + 570) - (
                           -25375 & (int)p_19 * 8650));
    v = (long)(54220UL / ((4294930957UL - p) / (unsigned long)(((int)p_9 + (int)v_15) + 184) + 896UL));
  }
  while_0_break: ;
  result = (char)(- (p / (p + 818UL)) * (unsigned long)((v / (p_5 + 837L)) / (long)(
                                                        ((int)v_7 >> (
                                                         p & 15UL)) + 915)));
  return result;
}


