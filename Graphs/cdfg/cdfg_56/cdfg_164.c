#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 779447316
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p[5][4], unsigned char p_7)
{
  long long v_5;
  short v;
  double result;
  v_5 = (long long)p_7;
  v = (short)p[0][1];
  v_5 = (long long)((unsigned int)(~ p_7) % (p[2][1] + 638U)) - (long long)p[1][2] % (
                                                                ! v_5 + 706LL);
  result = (double)((long long)((float)p[4][3] * -462.365570068f) * (
                    (long long)(- v) + - v_5));
  return result;
}


