#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1020610055
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, long long p_4, float p_9, unsigned short p_11,
                 unsigned short p_15[2][3])
{
  float v_17;
  int v_13;
  short v_7;
  signed char v;
  unsigned int result;
  v_17 = 6016075776.f;
  result = 33780786U;
  v_13 = (int)v_17;
  v_7 = (short)(((result & (unsigned int)p_9) / (unsigned int)((int)p_11 * v_13 + 524)) * (unsigned int)(- (
                -25 + (int)p_15[1][0])) - 10U);
  v = (signed char)v_7;
  result = (unsigned int)(! ((long long)p - p_4 % (long long)(((int)v - (int)v) + 230)));
  return result;
}


