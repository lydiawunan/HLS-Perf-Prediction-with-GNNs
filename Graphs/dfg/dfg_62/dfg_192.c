#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 328510772
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p[5][1][3], float p_5, unsigned char p_7[2],
          double p_9[3][4][1], signed char p_11)
{
  unsigned long long v_13;
  long long v;
  float result;
  v_13 = (unsigned long long)(- (- -2.60377129748e+65));
  v = (long long)v_13;
  result = (float)(((unsigned long long)(v + (long long)((int)p[2][0][1] + 53186)) / (
                    (unsigned long long)((int)((unsigned char)p_5) * (int)p_7[1]) + 470ULL)) % (
                   (unsigned long long)((10666. / (p_9[0][0][0] + 241.) - (double)(
                                         p_5 / ((float)p_11 + 201.f))) * p_9[2][3][0]) + 850ULL));
  return result;
}


