#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 322590093
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, unsigned char p_4, unsigned int p_6[1][1][5],
                  long p_11, unsigned int p_15[2][2][3])
{
  unsigned char v_13;
  unsigned int v_9;
  unsigned long long v;
  unsigned long result;
  v = (unsigned long long)p_6[0][0][1];
  v_13 = (unsigned char)(~ (! (- (p_15[0][0][2] - 61484U))));
  v_9 = (unsigned int)(! (- ((-72945053LL - (long long)p_11) & (long long)(
                             (int)v_13 << ((int)p & 7)))));
  result = (unsigned long)(! (((18446744073709520651ULL ^ (unsigned long long)p) + (unsigned long long)p_4) / (
                              ((unsigned long long)p_6[0][0][3] * v - (unsigned long long)(
                               (unsigned int)p / (v_9 + 168U))) + 486ULL)));
  return result;
}


