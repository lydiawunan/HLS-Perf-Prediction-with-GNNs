#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 615988379
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p[5][1], unsigned short p_7, long long p_9,
                  double p_13)
{
  short v_17;
  unsigned long long v_15;
  unsigned long v_11;
  short v_5;
  int v;
  unsigned long result;
  v_17 = (short)32321;
  v_15 = (unsigned long long)p_7;
  v_11 = (unsigned long)p_7;
  v_5 = (short)((double)(25447ULL / (v_15 % (unsigned long long)((int)v_17 + 562) + 875ULL)) + p_13);
  if (- ((float)p_9 - -663.176025391f) == (float)(~ (18446744072823616603ULL / (unsigned long long)(
                                                     v_11 + 295UL)) / (
                                                  (unsigned long long)(- (
                                                  44536. - p_13)) + 461ULL))) {
    v = (int)(((long long)p[2][0] - -268LL) * (long long)((unsigned long)(- v_5) % (
                                                          (p[0][0] + (unsigned long)p_7) + 945UL)));
    result = (unsigned long)4932009984.f;
    result = - (result * (unsigned long)v - p[1][0]);
  }
  else result = (unsigned long)-136.648254395f;
  return result;
}


