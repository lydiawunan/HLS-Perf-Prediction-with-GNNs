#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 970270446
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p[4], signed char p_7, double p_17[3])
{
  double v_19;
  long v_15;
  long v_13;
  unsigned short v_11;
  char v_9;
  float v_5;
  long long v;
  int result;
  v_19 = 6.18954236832e+36;
  v_15 = (long)p_17[0];
  v_13 = 20726L;
  v_11 = (unsigned short)397;
  v_9 = (char)p_7;
  v_9 = (char)((double)(! (~ ((long)v_9 / (v_15 + 429L)))) / (((double)p_7 * (
                                                               p_17[2] - 4492.)) * (
                                                              ((double)p_7 - v_19) * (double)(- p_7)) + 909.));
  v_5 = (float)(~ (! ((int)(~ v_9) << ((long)v_11 % (v_13 + 981L) & 7L))));
  v = -901903567LL + (p[1] % (long long)((int)((signed char)v_5) / ((int)p_7 + 242) + 570) + (long long)(~ (
                      (int)p_7 * -15741)));
  result = (int)v;
  return result;
}


