#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 693641050
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p[1], float p_5, unsigned short p_7, int p_11)
{
  long long v_13;
  float v_9;
  unsigned int v;
  double result;
  v_13 = -9178LL;
  v_9 = (float)(v_13 / (! (- v_13) + 257LL));
  result = (double)(((4000005195U ^ (unsigned int)v_9) * (unsigned int)p_11) * (unsigned int)v_9);
  v = (unsigned int)((unsigned long long)p_7 * 18446744073668126622ULL);
  result = (double)(v * (unsigned int)result) * ((double)p[0] * result - (double)(
                                                 (unsigned long long)p_5 ^ 18446744072850384022ULL)) + -20925.;
  return result;
}


