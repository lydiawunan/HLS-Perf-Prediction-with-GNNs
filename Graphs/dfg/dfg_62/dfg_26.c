#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 226082216
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p[5][4], double p_11, unsigned char p_13, short p_15)
{
  unsigned long v_17;
  signed char v_9;
  float v_7;
  unsigned long v_5;
  short v;
  short result;
  v_17 = 127119649UL;
  v_7 = (float)p_13;
  v_5 = 3813645488UL;
  result = p_15;
  v_9 = (signed char)(((long)p[1][2] * 57594L) % ((long)(p[4][3] + p_11 / (
                                                                   (double)v_5 + 336.)) + 220L) | (long)(
                      ((int)(! p_13) - ((int)p_15 + (int)result)) * (int)(- (
                      (float)v_17 - 9.14533341968e+37f))));
  v_5 = (unsigned long)((- v_7 * (float)(v_5 / 170521236UL)) / (((float)v_9 + - v_7) + 741.f));
  v = (short)(- ((unsigned long)p[1][1] * (v_5 - 105UL)) + 6UL);
  result = (short)(-71614LL & (long long)(! ((int)(- result) | (int)v)));
  return result;
}


