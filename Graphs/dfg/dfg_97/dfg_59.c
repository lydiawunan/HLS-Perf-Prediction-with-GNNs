#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 609213169
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, float p_5[4][5], unsigned long p_11, short p_13)
{
  unsigned long long v_9;
  signed char v_7;
  long long v;
  float result;
  v_9 = (unsigned long long)p_5[0][4];
  v_7 = (signed char)(! (30245ULL / (v_9 * (unsigned long long)p_11 + 1002ULL)) % (unsigned long long)(
                      (int)p_13 + 513));
  v = (long long)v_7;
  result = - (- (- p_5[1][1] + 4294926848.f));
  result = (float)(~ (! ((long long)((double)result / 2.6312940066e+38) / (
                         (v | (long long)p) + 236LL))));
  return result;
}


