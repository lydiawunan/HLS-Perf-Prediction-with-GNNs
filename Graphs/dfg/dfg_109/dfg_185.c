#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 561128645
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, int p_5, long p_11, long p_13, unsigned short p_15)
{
  int v_9;
  long long v_7;
  unsigned long v;
  int result;
  v_9 = 22330;
  v_7 = (long long)(((long)-3.66493524824e+40 - (2603L - p_13) % (long)(
                                                (v_9 - -41) + 934)) % (
                    ((long)(! p_15) - p_11) + 217L));
  v_9 = 46941;
  v = (unsigned long)(p - (long long)(37843L + (long)p_5) % ((v_7 ^ (long long)(
                                                              (long)v_9 * p_11)) + 802LL));
  result = (int)v;
  return result;
}


