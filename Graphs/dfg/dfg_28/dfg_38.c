#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 534572416
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, unsigned long long p_4, signed char p_7,
              unsigned long p_9, unsigned char p_13)
{
  unsigned short v_11;
  unsigned long long v;
  long long result;
  v_11 = (unsigned short)p_7;
  v = (unsigned long long)(-5860067840. - ((double)(1262850048.f * (-3.25671263843e+38f + (float)p_13)) + - (
                                           (double)p_9 * p)));
  v = (unsigned long long)((p + (double)(p_4 / (v * 47ULL + 342ULL))) / (
                           (double)(~ v) + 964.));
  result = (long long)(! v ^ (unsigned long long)(((unsigned long)p_7 / (
                                                   p_9 + 662UL)) / (unsigned long)(
                                                  (int)(- v_11) + 657)));
  result = (long long)(p + (0. - p * (double)result) * (double)(! (p_4 & p_4)));
  return result;
}


