#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 331709093
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, float p_7, unsigned long long p_9,
                 unsigned long long p_11, unsigned short p_15[5][5])
{
  float v_17;
  long long v_13;
  unsigned int v_5;
  double v;
  unsigned int result;
  v_17 = p_7;
  v_13 = (long long)p_11;
  v_5 = 4044759186U;
  result = (unsigned int)(- (-5978734081.82 - (double)p_15[4][0]) * (double)(~ (
                          ((unsigned int)p_15[0][0] + v_5) + (unsigned int)(
                          v_17 / ((float)p_15[3][0] + 292.f)))));
  v_5 = (unsigned int)(- ((p_9 - (unsigned long long)result) % ((p_11 / (unsigned long long)(
                                                                 v_13 + 378LL) - (
                                                                 18446744073117680646ULL & p_9)) + 5ULL)));
  v = (double)((unsigned long long)((914907865LL % (p + 739LL)) * (long long)(
                                    v_5 % 4294967211U) | ~ (p % ((long long)p_7 + 500LL))) % 2324ULL);
  result = (unsigned int)v;
  return result;
}


