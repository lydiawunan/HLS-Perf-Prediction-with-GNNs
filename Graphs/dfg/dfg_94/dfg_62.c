#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 922047547
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, unsigned long p_5, short p_9, char p_11, double p_15)
{
  long v_17;
  unsigned char v_13;
  long long v_7;
  float v;
  int result;
  v_17 = (long)p_11;
  v_13 = (unsigned char)(- p_5);
  v = (float)(~ (-62370 ^ (int)-3.03826624387e+34));
  v_7 = (long long)((double)((12325L / (long)((int)p_11 + 438)) / 527L + (long)v_13) / (
                    - (- p_15) * (double)(! v_17 - (p + (long)p_11)) + 515.));
  result = (int)((long long)p % (((long long)((float)p + v) % ((long long)p_5 % (
                                                               v_7 + 824LL) + 906LL) - (long long)(- p_9)) + 944LL));
  return result;
}


