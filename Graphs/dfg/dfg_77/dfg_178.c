#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 680367093
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p[4][2], double p_7, long long p_9, float p_11, float p_13)
{
  double v_4;
  unsigned int v;
  int result;
  v_4 = (double)(((! p_9 ^ 3857295106LL) | (long long)((float)(16880ULL - (unsigned long long)p_11) + (
                                                       p_13 + p_13))) % (long long)(
                 ((int)((unsigned short)(p[2][1] / ((float)p_9 + 138.f))) * 51372 << 1U) + 867));
  v = (unsigned int)((long long)(v_4 * ((double)(-520950189LL % ((long long)p[2][0] + 801LL)) * - p_7)) & -343295241LL);
  result = (int)v;
  return result;
}


