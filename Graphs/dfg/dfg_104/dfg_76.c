#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 377372971
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, long long p_5[4][1][1], double p_7, long long p_11)
{
  unsigned long v_9;
  signed char v;
  int result;
  v_9 = (unsigned long)(! p_11);
  result = (int)(~ (- v_9));
  v = (signed char)p_7;
  result = (int)((long long)v * ~ ((long long)(44462UL % ((unsigned long)p + 355UL)) / (
                                   p_5[3][0][0] / (long long)(result + 994) + 334LL)));
  return result;
}


