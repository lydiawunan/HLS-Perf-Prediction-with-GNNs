#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1032883989
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned long long p_5,
                       unsigned short p_7[4][4],
                       unsigned long long p_11[3][3], double p_13[3][3])
{
  char v_9;
  float v;
  unsigned long long result;
  v_9 = (char)(p_5 % (unsigned long long)((~ p + 15589U) + 383U));
  if (- ((unsigned long long)((int)v_9 / ((int)p_7[3][0] + 661)) * - p_11[2][2]) <= (unsigned long long)(
      1 + (int)p_13[1][1])) result = (unsigned long long)(902558781U * (
                                                          2842U + (p + 4294967188U)));
  else {
    v = (float)65331ULL;
    result = (unsigned long long)((int)((unsigned short)(- (v / ((float)p_5 + 601.f)))) * (int)p_7[2][1]);
  }
  return result;
}


