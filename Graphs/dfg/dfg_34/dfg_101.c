#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164479807
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p[5][5], unsigned int p_5[2][2], long long p_9,
           char p_13, float p_19[5][4][1])
{
  double v_21;
  short v_17;
  short v_15;
  unsigned short v_11;
  signed char v_7;
  short v;
  double result;
  v_21 = 1.35015988027e+38;
  v_17 = (short)9278;
  v_15 = (short)9751;
  v_11 = (unsigned short)((- (p_19[0][3][0] * (float)p_5[1][1]) + (float)(
                           26876U + (unsigned int)p_13)) / ((float)(~ (
                                                            - p_5[0][1] / (
                                                            (unsigned int)v_21 + 382U))) + 731.f));
  v_7 = (signed char)(~ (2LL / ((p_9 + (long long)v_11) + 644LL)) % (long long)(
                      (int)(- p_13) * (((int)v_15 % 8783) / (((int)v_17 - (int)((short)p_19[3][0][0])) + 757)) + 413));
  v = (short)v_7;
  result = (double)(~ ((p[0][2] - (unsigned long long)v) / 18446744073709551574ULL - (unsigned long long)(
                       4176983418UL ^ (unsigned long)(p_5[0][0] - 13805U))));
  return result;
}


