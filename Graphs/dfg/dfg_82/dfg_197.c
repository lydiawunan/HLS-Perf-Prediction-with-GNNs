#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 170338003
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p[1][4][2], short p_7, long long p_9, long long p_11[1][4],
         int p_19)
{
  short v_17;
  float v_15;
  unsigned long long v_13;
  double v_4;
  unsigned short v;
  long result;
  v_17 = (short)p_11[0][1];
  v_15 = -477.365905762f;
  v_4 = (double)(~ ((unsigned int)v_15 << (((unsigned int)((int)v_17 << (
                                                           p_19 & 15)) - 130147601U) & 31U)));
  v_13 = (unsigned long long)((long long)v_4 / (p_9 + 699LL));
  v = (unsigned short)((unsigned long long)p_11[0][2] - v_13 / 18446744073709539617ULL);
  result = (long)((((double)v + v_4) / (- (24. - p[0][3][1]) + 702.)) / (
                  (double)((long long)(~ (- p_7)) ^ 15237LL / (p_9 + 723LL)) + 685.));
  return result;
}


