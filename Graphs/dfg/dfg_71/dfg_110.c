#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 427834552
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, signed char p_5, int p_13[3][5])
{
  long long v_11;
  int v_9;
  double v_7;
  signed char v;
  double result;
  v_11 = -30057LL;
  v_7 = (double)((int)(! p_5) * p_13[1][2]);
  v_9 = (int)p;
  v = (signed char)((long long)(! ((int)p_5 + (int)((signed char)v_7)) | ! v_9) % (
                    - (v_11 * (long long)(~ v_9)) + 271LL));
  result = (double)(- (~ (((long long)v / (p + 513LL)) / (long long)(
                          4909 % ((int)v + 707) + 887))));
  return result;
}


