#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 675438970
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p[5][2][1], signed char p_11, unsigned long long p_13)
{
  float v_9;
  unsigned long long v_7;
  long long v_5;
  unsigned int v;
  int result;
  v = 952411690U;
  v_9 = (float)v;
  v_7 = ! (! ((unsigned long long)((int)p_11 * -75) + ~ p_13));
  v_5 = (long long)v_9;
  result = (int)(! ((unsigned long long)((long long)(- v) % ((long long)p[1][0][0] / (
                                                             v_5 + 841LL) + 293LL)) / (
                    (v_7 - 90ULL) + 598ULL)));
  return result;
}


