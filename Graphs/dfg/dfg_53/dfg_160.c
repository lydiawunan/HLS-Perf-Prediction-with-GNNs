#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1025784136
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, float p_5, short p_9, short p_11[3][1][2],
          unsigned long long p_15)
{
  unsigned long long v_17;
  int v_13;
  char v_7;
  unsigned int v;
  float result;
  v_17 = (unsigned long long)p_9;
  v_13 = (int)((18446744072937126304ULL / (0ULL / ((p_15 + 680261977ULL) + 564ULL) + 103ULL)) % (
               v_17 + 323ULL));
  v_7 = (char)(! ((int)p_9 % (((576 | (int)p_11[1][0][0]) - v_13 * -21246) + 314)));
  v = (unsigned int)p;
  result = (float)((long long)((float)(- (5128UL % (unsigned long)(v + 797U))) * (
                               (float)(~ p) / (p_5 + 477.f))) % (~ (p % (
                                                                    (long long)p_5 + 654LL) + (long long)(
                                                                    59 * (int)v_7)) + 157LL));
  return result;
}


