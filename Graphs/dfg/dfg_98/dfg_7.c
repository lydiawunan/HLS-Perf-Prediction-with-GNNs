#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 287941806
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p[5][1][4], unsigned short p_7,
                  unsigned long long p_9, double p_11, long p_13)
{
  int v_15;
  unsigned char v_4;
  unsigned long long v;
  unsigned long result;
  v_15 = (int)(- (~ (2120811ULL - 18446744072814221152ULL / (unsigned long long)(
                                  p[4][0][1] + 500L))));
  v = p_9;
  v_4 = (unsigned char)(~ ((~ p_13 - - p_13) * (long)(- v_15 * -57)));
  result = (unsigned long)((v % (unsigned long long)(((long)(- v_4) + (
                                                      p[2][0][0] - -36L)) + 30L)) / (
                           (unsigned long long)p_7 % (~ (p_9 | (unsigned long long)p_11) + 945ULL) + 792ULL));
  return result;
}


