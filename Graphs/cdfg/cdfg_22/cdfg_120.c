#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 95693186
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, float p_5[4][3], float p_7, unsigned char p_9[2],
           float p_11[3])
{
  unsigned char v;
  double result;
  v = (unsigned char)255;
  v = (unsigned char)(((float)((int)p_9[1] * 38) / (((float)v + -5.26411332152e+37f) + 917.f)) / (
                      p_11[0] + 429.f));
  result = (double)((int)(! (! p)) << ((int)((unsigned char)((float)(
                                                             (int)v / (
                                                             (int)((unsigned char)p_5[2][0]) + 375)) + (
                                                             p_7 - 7091.f))) & 7));
  return result;
}


