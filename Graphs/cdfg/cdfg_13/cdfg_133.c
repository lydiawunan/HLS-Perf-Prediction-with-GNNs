#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 898943886
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, unsigned char p_4, unsigned long long p_7[4][2],
         unsigned long p_9[5][4], char p_11[2])
{
  unsigned char v;
  long result;
  v = (unsigned char)((p_7[2][1] * (unsigned long long)p_9[0][2]) * (
                      (unsigned long long)p_11[1] / (p_7[1][0] + 137ULL) + 179ULL));
  result = (long)((long long)p / (-1030797892LL * (long long)p_4 + 978LL) - (long long)v);
  return result;
}


