#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 130746078
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p[4], int p_9[5], unsigned long long p_11,
           long long p_17)
{
  unsigned long long v_15;
  short v_13;
  long v_7;
  char v_5;
  unsigned long v;
  double result;
  v_15 = 969668796ULL;
  v_13 = (short)17110;
  v_5 = (char)121;
  result = (double)v_15 - 6.44384775758e+37 / ((double)(- (p_9[0] >> (
                                                           p_17 & 31LL))) + 89.);
  v = (unsigned long)(! v_13);
  v_7 = (long)(p_9[0] << (p_11 & 31ULL));
  result = (double)((long)(((double)p[1] / (result * result + 134.)) / (
                           (double)((unsigned int)((float)v + -9.16587443001e+36f) * (
                                    (unsigned int)v_5 + 4294909347U)) + 543.)) + ! v_7);
  return result;
}


