#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 999449482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, double p_5[1], unsigned long long p_9,
              unsigned long long p_11, unsigned long long p_13[1])
{
  long v_7;
  unsigned long long v;
  long long result;
  result = (long long)(p_9 % 242ULL - (~ p_11 / 18446744073709551612ULL) * (
                                      18446744073709550990ULL + p_13[0] / 57486ULL));
  v = (unsigned long long)result;
  v_7 = 3014L;
  result = (long long)((unsigned long long)(34080 - p) % (v % (unsigned long long)(
                                                          ((long)(p_5[0] - (double)result) & v_7) + 290L) + 582ULL));
  return result;
}


