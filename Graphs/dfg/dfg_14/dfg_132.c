#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 917274022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, short p_5, long long p_9[4][5], long p_11,
              long long p_15)
{
  unsigned long v_17;
  unsigned short v_13;
  unsigned long long v_7;
  unsigned long long v;
  long long result;
  v_17 = 4294958412UL;
  v_13 = (unsigned short)p_11;
  v = 0 % ((unsigned long long)(953771840.f - (float)v_17) + 123ULL);
  v_7 = (unsigned long long)(((long long)(- ((int)p / ((int)p_5 + 31))) - 
                              (long long)(p_11 | (long)v_13) / (p_9[1][1] + 360LL)) % (
                             - (512504493LL | ! p_15) + 695LL));
  result = (long long)(((unsigned long long)p - ! (! v)) - (5051ULL * (unsigned long long)p_5) % (
                                                           (v_7 + 3936046608ULL) % (unsigned long long)(
                                                           p_9[3][3] + 761LL) + 342ULL));
  return result;
}


