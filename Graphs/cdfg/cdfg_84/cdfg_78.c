#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 30100586
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, unsigned long long p_13, long long p_17,
                 unsigned long p_19[5][3][4])
{
  unsigned long long v_23;
  unsigned long v_21;
  unsigned long v_15;
  long v_10;
  double v_8;
  long v_6;
  signed char v_4;
  unsigned long v;
  unsigned int result;
  v_23 = 18446744073709486820ULL;
  v_21 = 4294930877UL;
  v_15 = 4076915424UL;
  v_6 = (long)p;
  result = (unsigned int)p_17;
  if ((unsigned long long)v_21 < ~ (~ (v_23 * v_23))) {
    v_8 = (double)47343;
    v_4 = (signed char)v_8;
    v = (unsigned long)((long)v_4 - ! (~ v_6));
  }
  else {
    v_10 = (long)((p_17 / (long long)(p_19[0][1][2] + 316UL) + (long long)p % (
                                                               p_17 + 68LL)) / (long long)(
                  v_21 + 570UL));
    v = (unsigned long)((unsigned long long)(- (- p)) % ((p_13 * (unsigned long long)v_15) / (
                                                         (19728ULL - p_13) + 159ULL) + 536ULL));
    v = (unsigned long)v_10 % ((0UL - ((unsigned long)result + v)) + 309UL);
  }
  result = (unsigned int)v;
  return result;
}


