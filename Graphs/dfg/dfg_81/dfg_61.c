#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 468510399
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, short p_13[1], double p_17)
{
  signed char v_15;
  unsigned short v_11;
  unsigned long long v_9;
  unsigned long v_6;
  float v_4;
  long long v;
  float result;
  v_9 = 18040ULL;
  v_4 = (float)p_13[0];
  v = -516200465LL;
  v_15 = (signed char)p_17;
  v_11 = (unsigned short)(~ (! ((unsigned long long)((int)((signed char)p) + (int)v_15) / 18446744073709538309ULL)));
  v_6 = (unsigned long)((unsigned long long)(-152592453LL | (long long)(- (
                                             p - p))) - (122ULL % (v_9 + 599ULL) << (
                                                         (int)(- v_11) & 63)) % (unsigned long long)(
                                                        (int)p_13[0] + 46));
  result = (float)v / ((0.f * v_4) / ((float)(-907736LL ^ (long long)v_6) + 972.f) + 62.f);
  return result;
}


