#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 980412385
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, long p_4, double p_13, signed char p_17)
{
  float v_15;
  unsigned long long v_11;
  int v_9;
  unsigned int v_7;
  unsigned char v;
  long long result;
  v_15 = (float)p;
  v_9 = -61177;
  v_7 = 935119585U;
  v_11 = (unsigned long long)((int)((v_15 - (float)p_17) - 50995.f) - v_9);
  if (2.95570930765e+38 == (double)v_7 * ((double)(-49 - v_9) - (double)v_11 / (
                                                                p_13 + 11.))) 
    result = (long long)p;
  else {
    v = (unsigned char)109;
    result = (37707LL + (long long)(p_4 - p_4)) << ((int)(~ v) & 63);
  }
  return result;
}


