#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 466925971
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned int p_4[4], unsigned long p_7[5][1],
          long long p_9[3][3], unsigned char p_11)
{
  unsigned long long v_17;
  int v_15;
  unsigned char v_13;
  unsigned long long v;
  float result;
  v_17 = (unsigned long long)p_11;
  v_15 = (int)p_7[2][0];
  v_13 = (unsigned char)(((unsigned long long)((p_9[1][0] & -90LL) ^ (long long)(
                                               p_7[4][0] / (unsigned long)(
                                               v_15 + 420))) - - (v_17 ^ 28ULL)) + (unsigned long long)p_7[0][0]);
  v = (unsigned long long)(p_9[2][1] / (long long)((int)p_11 + 964) - (long long)(
                           ((long)v_13 - 860427921L) % (long)((int)p_11 + 711)));
  result = (float)((((unsigned long long)(p / (long long)(p_4[3] + 720U)) - ! v) - (unsigned long long)p_4[2]) / (unsigned long long)(
                   368775854UL % ((p_7[1][0] / (unsigned long)(p_4[2] + 190U)) * 4294926610UL + 132UL) + 232UL));
  return result;
}


