#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 451360513
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, unsigned long p_4[4][3][3], int p_6, double p_8,
          float p_10[1])
{
  signed char v_15;
  unsigned long long v_13;
  long v;
  float result;
  v_15 = (signed char)94;
  v_13 = 56824ULL;
  v = (long)((int)v_15 & 208);
  if ((unsigned long long)p > (unsigned long long)((unsigned long)v % (
                                                   - p_4[1][0][0] + 294UL)) / (
                              ~ (6ULL % (v_13 + 141ULL)) + 607ULL)) result = (float)-2869937991.6;
  else {
    result = (float)-34859;
    result = (float)((4036706034U & (unsigned int)result) - (unsigned int)(! p));
  }
  return result;
}


