#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 604446075
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, char p_5, long p_7[2], long p_9[3][5][5], int p_13)
{
  unsigned long v_15;
  double v_11;
  unsigned char v;
  float result;
  v_15 = (unsigned long)p;
  v_11 = (double)p_13;
  result = (float)(- ((double)(- (~ p_9[1][3][3])) + (v_11 + (double)p_13) * (double)(
                                                     v_15 | (unsigned long)p_5)));
  v = (unsigned char)(3932236785U << (((41782LL << ((int)p_5 & 63)) / (long long)(
                                       ! p_7[0] + 1024L) >> (p & 63LL)) & 31LL));
  result = - result;
  result = - (- ((result * (float)v) / ((float)(p * p) + 538.f)));
  return result;
}


