#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 317481888
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p[4][3][4], unsigned short p_4, float p_6[3][1],
                  unsigned short p_8, long long p_10)
{
  long long v_15;
  unsigned short v_13;
  double v;
  unsigned long result;
  v_15 = 33714LL;
  v_13 = (unsigned short)((long long)((long)p_6[1][0] - 696523074L) * (
                          5673LL % (51273LL % ((p_10 + v_15) + 930LL) + 377LL)));
  result = (unsigned long)v_13;
  v = (double)result;
  result = (unsigned long)((long long)(p[3][1][0] - (double)(((unsigned int)p[1][2][3] * 4294925782U) % (unsigned int)(
                                                             ((int)p_4 << (
                                                              (int)((unsigned short)p_6[0][0]) & 15)) + 718))) >> (
                           ((long long)p_8 - (p_10 + (long long)v)) & 63LL));
  return result;
}


