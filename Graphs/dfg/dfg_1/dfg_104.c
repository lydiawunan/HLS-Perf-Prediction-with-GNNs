//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 362986180
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, unsigned long long p_7, long p_9, double p_11[1][2][1])
{
  unsigned int v_4;
  int v;
  double result;
  v_4 = 4294951268U;
  v_4 = (unsigned int)((double)((unsigned long long)p * (p_7 / 57063ULL + (unsigned long long)(
                                                         v_4 * v_4))) + - (
                       (double)(p_9 + (long)p_11[0][0][0]) / ((-39. + p) + 636.)));
  v = (int)v_4;
  result = (double)v;
  return result;
}


