#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 442434751
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long long p_4, unsigned char p_9[2])
{
  unsigned long long v_11;
  double v_7;
  unsigned long long v;
  long result;
  v_11 = (unsigned long long)p_4;
  v_7 = (double)v_11;
  v = 0ULL;
  result = (long)v;
  result = (long)(((((unsigned long long)p + 1499ULL) << (p_4 & 63LL)) / (unsigned long long)(
                   result + 426L)) / 31035ULL);
  return result;
}


