#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 950388567
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, signed char p_13[4][2][5], unsigned int p_15)
{
  unsigned int v_11;
  int v_9;
  unsigned char v_7;
  long v_5;
  unsigned long long v;
  int result;
  v_11 = 4294966362U;
  v_9 = 50284;
  v_7 = (unsigned char)(((unsigned long)((p + 36043L) - (long)-1.87637053656e+38f) + 
                         (unsigned long)v_11 * 37736UL) * (unsigned long)(
                        (unsigned int)(- (-59 / ((int)p_13[3][1][3] + 569))) % (
                        (~ p_15 | 127U) + 660U)));
  v_5 = (long)((int)v_7 / (v_9 + 471)) / (- (! ((long)v_7 + -54452L)) + 424L);
  v = (unsigned long long)((p - p) / (v_5 + 398L));
  result = (int)v;
  return result;
}


