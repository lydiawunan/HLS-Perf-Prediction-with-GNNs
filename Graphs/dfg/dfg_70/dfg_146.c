#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 876086739
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, long long p_4, float p_7, long p_13,
          unsigned short p_15)
{
  double v_17;
  unsigned char v_11;
  char v_9;
  signed char v;
  float result;
  v_17 = (double)p_4;
  v_9 = (char)(19950. / (- v_17 + 608.));
  v_11 = (unsigned char)((unsigned long)(2288 % ((int)v_9 + 938)) / (
                         p + 399UL) - (unsigned long)(~ (~ (p_13 - (long)p_15))));
  v = (signed char)((long long)(- (p_7 * 717890176.f) - (float)v_9) + 
                    (long long)v_9 / ((65LL ^ (long long)((int)v_9 % (
                                                          (int)v_11 + 171))) + 102LL));
  result = (float)(((long long)(3567708587UL / (p + 562UL)) / (p_4 + 101LL) + 1LL) * (long long)(
                   (int)v & 231));
  return result;
}


