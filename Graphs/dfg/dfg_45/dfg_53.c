#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 508864138
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, long long p_5, double p_7[2], float p_9,
        unsigned long p_13)
{
  double v_17;
  unsigned char v_15;
  long long v_11;
  int v;
  int result;
  v_17 = (double)p;
  v = (int)p_13;
  v_15 = (unsigned char)154;
  v_11 = (long long)((double)(! (p_13 / ((unsigned long)((float)v_15 * p_9) + 534UL))) / (
                     v_17 + 435.));
  result = (int)(((long long)v ^ (-1506LL + p)) - (~ p_5 * (long long)(
                                                   p_7[0] + (double)p_9)) * (
                                                  ~ v_11 + (long long)p_13 * p));
  return result;
}


