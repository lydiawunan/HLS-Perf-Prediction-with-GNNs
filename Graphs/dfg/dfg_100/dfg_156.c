#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 364220986
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, float p_7[1], unsigned long long p_9)
{
  short v_5;
  unsigned long v;
  float result;
  result = (float)(~ (p_9 | 18446744073429725424ULL));
  v = (unsigned long)(- (- (- p_7[0]) + ((float)((unsigned long long)p % 18446744073709516233ULL) - result)));
  v_5 = (short)((unsigned long)((- result * p_7[0]) / ((132.f - result * 206.999908447f) + 634.f)) ^ ! (
                ~ v * 4294967250UL));
  result = (float)(((long long)((v - (unsigned long)p) * (v / (unsigned long)(
                                                          (int)v_5 + 138))) % -39874LL) * (long long)(~ p));
  return result;
}


