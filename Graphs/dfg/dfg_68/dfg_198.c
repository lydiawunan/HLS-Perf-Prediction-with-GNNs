#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 499511912
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, long long p_5, unsigned short p_11, char p_13,
                  unsigned long long p_15)
{
  long long v_19;
  int v_17;
  char v_9;
  unsigned int v_7;
  unsigned int v;
  unsigned long result;
  v_19 = -232387379LL;
  v_9 = (char)-34;
  v_7 = 4246311367U;
  v_17 = (int)((((p_5 - v_19) - ! v_19) - (long long)v_9) - (long long)p_11);
  result = (unsigned long)(p_15 + ! ((unsigned long long)p_13 % 35519ULL));
  v = (unsigned int)(((long long)(result * (unsigned long)(! p_13)) + ! p_5) & (long long)(
                     ((int)(-3.2020528006e+38 / ((double)p_15 + 795.)) * (
                      -18 - v_17)) / ((int)(- v_9) / 187 + 677)));
  result = (unsigned long)((~ (p / (long long)(v + 171U)) * ((long long)(- v) * (
                                                             p_5 | (long long)v_7))) / (long long)(
                           ((int)(! v_9) / -4450944) / ((int)p_11 + 935) + 494));
  return result;
}


