#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 244393334
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, short p_7, unsigned int p_15)
{
  long long v_13;
  int v_11;
  double v_9;
  unsigned int v_4;
  double v;
  signed char result;
  v_11 = 7162;
  v_9 = 2.55145266308e+38;
  v_4 = 4294949718U;
  result = (signed char)-35;
  v_13 = (long long)((unsigned long long)(~ (! ((int)result / ((int)p + 315)))) % (
                     (18446744073600266422ULL + (unsigned long long)(- (
                      (double)p_15 - v_9))) + 525ULL));
  v = (double)(~ ((long long)(v_9 / ((double)(v_11 / (v_11 + 792)) + 479.)) + (
                  (v_13 & (long long)p_15) + (long long)p_15)));
  result = (signed char)(- (! ((unsigned int)v - v_4) * (unsigned int)(
                            (int)p << ((int)(~ p_7) & 15))));
  return result;
}


