#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 926319535
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p[3], unsigned short p_5,
           unsigned long long p_7[3][2], unsigned long p_9,
           char p_11[4][2][5])
{
  double v;
  double result;
  v = (double)-5.67831815514e+37f;
  result = (double)((unsigned long long)v * (((unsigned long long)(p[1] % (unsigned int)(
                                                                   (int)p_5 + 10)) ^ 
                                              p_7[2][1] / (unsigned long long)(
                                              p_9 + 556UL)) / (unsigned long long)(
                                             (int)p_11[3][1][0] + 562)));
  return result;
}


