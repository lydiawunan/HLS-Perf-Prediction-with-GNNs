#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 957668530
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, char p_5[4][4][5], float p_11, unsigned long long p_13,
         long p_15[5][4])
{
  unsigned long long v_9;
  int v_7;
  long long v;
  long result;
  v_7 = (int)p_5[1][2][3];
  v_9 = (unsigned long long)(~ (~ 0L));
  v = (long long)((float)(- (((int)p_5[1][0][3] - 27703) / (v_7 + 816))) - (
                  ((float)(v_9 - 20354ULL) - (p_11 + (float)p_13)) + (float)(
                  (unsigned long long)(- p_15[2][3]) | p_13)));
  v = (long long)((unsigned long long)v * 18446744073442279926ULL);
  result = (long)(- (- ((double)(- v) / ((-21. - p) + 505.))));
  return result;
}


