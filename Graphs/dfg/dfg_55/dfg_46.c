#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 879321068
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p[4][3], unsigned long p_9,
              unsigned short p_11, signed char p_15[1][5],
              unsigned short p_17)
{
  float v_13;
  int v_6;
  unsigned long long v_4;
  float v;
  long long result;
  v_13 = (float)p_11;
  v_6 = -173407586;
  result = 51410LL;
  v = (float)((unsigned long)((long)p_17 * ((long)(! v_6) + ((long)p_15[0][1] - 4916L))) * 4294936049UL);
  v_4 = (unsigned long long)(((- p_9 - (unsigned long)p_11) ^ (unsigned long)(
                              (int)3.39102430136e+36f / ((21017 + (int)((short)v)) + 885))) % (unsigned long)(
                             - (10664 & (int)p_15[0][3]) + 471));
  v = (float)18446744072878801819ULL;
  result = (long long)(((((unsigned long long)v * v_4) * 18446744073709551473ULL) % (unsigned long long)(
                        (((long long)v_6 + 800610739LL) >> (1036650264ULL * p[0][2] & 63ULL)) + 260LL)) / (unsigned long long)(
                       ((long long)p_9 * result - (long long)(p_9 * (unsigned long)p_11)) / (
                       (long long)v_13 + 136LL) + 743LL));
  return result;
}


