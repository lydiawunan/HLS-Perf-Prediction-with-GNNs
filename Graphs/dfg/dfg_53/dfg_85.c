#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1032255882
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p[2], short p_5, float p_9, unsigned long long p_11)
{
  double v_7;
  unsigned long long v;
  unsigned short result;
  v_7 = (double)-11756;
  v = (unsigned long long)214.602157593f;
  result = (unsigned short)(((p[0] * (double)v + (double)p_5) - (v_7 / (double)(
                                                                 p_9 + 47.f)) / (
                                                                (double)(
                                                                (int)p_5 - (int)p_5) + 736.)) + (double)(! (
                            (p_11 << ((unsigned long long)v_7 & 63ULL)) - 18446744073115023736ULL)));
  return result;
}


