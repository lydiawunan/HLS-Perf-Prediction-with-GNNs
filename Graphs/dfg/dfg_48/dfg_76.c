#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 573534993
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, unsigned int p_4, short p_6[5][5][5], float p_8,
          double p_10[5][5])
{
  long long v;
  float result;
  result = -9143853056.f;
  v = 4294924509LL;
  result = (float)((long long)(- (- ((float)p_6[3][1][1] - p_8))) + (long long)(
                                                                    (
                                                                    p_10[4][0] - (double)result) * (double)(
                                                                    1.84467440737e+19f - p_8)) % (
                                                                    v * 56538LL + 513LL));
  result = (float)(! ((- p_4 / (unsigned int)((int)result / -65158 + 935)) * ! p_4));
  result = (float)(- (4294934810U % (((unsigned int)result - p) + 98U) ^ - p));
  return result;
}


