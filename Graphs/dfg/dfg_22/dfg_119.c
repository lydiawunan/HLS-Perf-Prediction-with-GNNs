#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 855015512
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, long long p_5, unsigned long p_7, long p_9,
              double p_11[1])
{
  long v;
  long long result;
  v = (long)p_11[0];
  result = ((! p_5 * 25LL) % (long long)(((long)((int)p << (p_7 & 15UL)) - ~ v) + 855L)) % (long long)(
           (p_7 / (unsigned long)(~ p_9 + 774L)) % (unsigned long)(! (
                                                                   p_9 * 54L) + 826L) + 499UL);
  result = ! (~ (- result) / ((long long)((double)(61135ULL % (unsigned long long)(
                                                   (int)p + 578)) + (
                                          (double)v + -1.96380012416e+38)) + 263LL));
  return result;
}


