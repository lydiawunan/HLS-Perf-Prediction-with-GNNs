#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 993269029
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned long long p_4,
                       unsigned long long p_7, int p_9, unsigned short p_11)
{
  long v_15;
  unsigned long v_13;
  unsigned char v;
  unsigned long long result;
  v_15 = (long)p_11;
  v_13 = (unsigned long)p_9;
  v_13 = (unsigned long)((p_7 % 485232751ULL) / (unsigned long long)(
                         (1259 & (int)p) + 955) - ((unsigned long long)v_13 ^ p_7) * (
                                                  (unsigned long long)v_15 / (
                                                  p_4 + 28ULL)));
  if (1) {
    v = (unsigned char)((unsigned long)(! (p_9 - 831)) / 734378421UL);
    result = ((unsigned long long)p * p_4 - (unsigned long long)v) + - (! p_7);
  }
  else result = (unsigned long long)(~ p_11) - p_4 * 48730ULL;
  return result;
}


