#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 737255067
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p[3], unsigned long p_5,
           unsigned long long p_7[1][2][4], unsigned long p_9,
           unsigned long long p_17)
{
  long v_15;
  double v_13;
  unsigned long long v_11;
  long v;
  double result;
  v_15 = 61802L;
  v_11 = (unsigned long long)p_9;
  v = (long)p[1];
  while (-659.828896114 <= (double)(~ ((unsigned long long)p_9 * v_11 ^ 18446744073090475661ULL))) {
    v_13 = (unsigned long long)v_15 | 18446744073709516205ULL;
    result = (double)p_5;
    v_15 = (long)((- p_17 + 18446744073709532258ULL) - (unsigned long long)(
                  0 % ((unsigned int)(result + result) + 935U)));
    v_11 = (unsigned long long)v_13;
  }
  while_0_break: ;
  result = (double)(1ULL + ((unsigned long long)((unsigned long)v * p[0]) - (
                            (unsigned long long)p_5 + p_7[0][1][0])));
  return result;
}


