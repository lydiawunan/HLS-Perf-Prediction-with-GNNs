#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 252668766
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p[1], unsigned long long p_4, double p_6,
                 unsigned long p_8[2][3], unsigned short p_10)
{
  double v;
  unsigned int result;
  v = (double)p_4;
  v = v;
  if (- p_6 > (double)(~ ((int)((unsigned short)1.68233592414e+38f) + (int)p_10) / (
                       (int)v + 336))) result = (unsigned int)((unsigned long long)(
                                                               (38791UL % (
                                                                p[0] + 748UL)) / (
                                                               p[0] + 176UL)) / (
                                                               (18446744073320686814ULL << (
                                                                p_4 & 63ULL)) + 762ULL));
  else result = (unsigned int)(! ((p[0] - (unsigned long)p_6) % (p_8[1][2] + 829UL)));
  return result;
}


