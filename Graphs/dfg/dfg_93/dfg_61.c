#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 792614910
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[4][3], unsigned long p_4)
{
  float v_7;
  unsigned long v;
  unsigned long long result;
  v = (unsigned long)p[0][2];
  v_7 = (float)(unsigned char)4;
  result = (unsigned long long)v_7;
  result = (unsigned long long)(0 % (~ ((int)p[1][0] << (result & 7ULL)) * (int)(
                                     (float)(p_4 * v) + - v_7) + 660));
  return result;
}


