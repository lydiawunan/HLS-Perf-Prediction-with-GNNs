#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1005423392
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p[2][4][3], long p_9[5], short p_11)
{
  unsigned char v_7;
  long long v_5;
  unsigned char v;
  unsigned long long result;
  v_5 = (long long)p_9[4];
  v = (unsigned char)166;
  v_7 = (unsigned char)p_11;
  result = (unsigned long long)(((long long)v % ((p[0][3][2] - v_5) + 440LL)) * (
                                (p[0][3][0] - (long long)v_7) / (long long)(
                                p_9[0] + 568L)));
  return result;
}


