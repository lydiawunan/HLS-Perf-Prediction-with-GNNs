#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 462049097
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, char p_5[4][5][2], unsigned long p_7, char p_9,
         char p_11)
{
  signed char v;
  long result;
  result = 341283802L;
  v = (signed char)(! ((p_7 * (unsigned long)result) * (unsigned long)(
                       (int)p_9 * (int)p_11)));
  result = (long)(~ (67 + (int)v) << (((-18908LL | p) | (long long)((int)p_5[3][0][0] / 13650)) & 31LL));
  return result;
}


