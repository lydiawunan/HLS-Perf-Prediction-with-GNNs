#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 619183291
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p[5], unsigned short p_7, long long p_9[2][2], int p_11,
           unsigned int p_13)
{
  long v_23;
  float v_21;
  short v_19;
  long long v_17;
  int v_15;
  unsigned long long v_5;
  unsigned long v;
  double result;
  v_23 = -360992321L;
  v_21 = -911.392578125f;
  v_17 = -98137340LL;
  v_15 = -571616844;
  v_5 = 39705ULL;
  result = -834.735161219;
  if ((long long)(v_23 + (long)((int)p_7 << ((50099 & p[3]) & 15))) >= - (- v_17)) {
    v_19 = (short)((unsigned long long)(-31 + - p[0]) ^ - (! v_5));
    v_21 = (float)(unsigned short)9898;
    v_5 = (unsigned long long)(- (result - (double)v_19) * (double)(- (- v_21)));
  }
  else {
    v_5 = 45879ULL;
    v_17 = (long long)((unsigned long)((unsigned int)(- v_21) + 3400214362U * p_13) % (unsigned long)(
                       - ((long)p_11 - v_23) + 686L));
    v_15 = (int)((p_9[1][1] % 26401LL & (p_9[1][1] + (long long)p_11)) * (long long)(~ (
                 (unsigned int)p[4] + p_13)));
  }
  if ((long long)(v_15 * (int)(3787442804.79 - (double)(~ p_13))) < (
      ! (v_17 / -101LL) ^ 3983846117LL)) {
    v = (unsigned long)((51363ULL % (44ULL / (v_5 + 181ULL) + 769ULL)) / (unsigned long long)(
                        (int)p_7 + 558));
    v = (unsigned long)((long long)(v / (! v + 578UL)) / ((10981LL + (long long)(
                                                           p[2] % 27606)) + 581LL));
    result = (double)(- v);
  }
  else result = (double)(-24563300U);
  return result;
}


