#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 698444996
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, float p_4, int p_6, unsigned long p_8,
        long long p_13)
{
  int v_23;
  unsigned short v_21;
  unsigned int v_19;
  unsigned long long v_17;
  char v_15;
  long v_11;
  unsigned long long v;
  int result;
  v_21 = (unsigned short)p_4;
  v_17 = 44377ULL;
  v_15 = (char)p_6;
  result = 41785;
  if (((unsigned long long)(36428 * ~ p_6) ^ ((unsigned long long)2.58366006973e+38 >> (
                                              ~ v_17 & 63ULL))) <= 18446744073709546846ULL) {
    v_19 = (unsigned int)((unsigned long long)((648LL ^ p_13) / (227LL * p_13 + 879LL)) % (
                          - p / (~ p + 486ULL) + 940ULL));
    v_11 = (long)((unsigned long long)((p_13 * (long long)v_15) * (long long)p_4) / (
                  (v_17 * (unsigned long long)v_19) * (unsigned long long)(
                  p_8 - p_8) + 859ULL));
    v = (unsigned long long)((float)p_8 + - (-9791057920.f + (float)v_11));
  }
  else {
    v_23 = (int)((unsigned int)(- ((int)v_15 * 19068)) ^ 4294911268U);
    result = ! (! ((int)v_21 * v_23));
    v = ! (! p) / (unsigned long long)((p_6 * 130) / 9983 + 943);
  }
  if (~ ((unsigned long long)result % 18446744073709516692ULL + 18446744073709529072ULL % (unsigned long long)(
                                                                p_6 + 853)) != ~ (
      (unsigned long long)(75UL * p_8) * - v)) result = (int)(~ (! p));
  else result = (int)p_4;
  return result;
}


