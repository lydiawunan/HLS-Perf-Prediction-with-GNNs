#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 802769782
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p[3], short p_5, unsigned char p_9,
                double p_13[4][4], long p_15)
{
  long long v_23;
  unsigned char v_21;
  unsigned long long v_19;
  int v_17;
  long v_11;
  float v_7;
  float v;
  signed char result;
  v_23 = (long long)p_5;
  v_21 = (unsigned char)165;
  v_19 = 920285162ULL;
  v_17 = (int)p_9;
  v = 1669707904.f;
  result = (signed char)-55;
  v_11 = (long)(- (v - (float)v_23));
  v_7 = (float)((unsigned long long)(((int)((signed char)(830.840942383f - (float)v_11)) - (int)(- result)) - (int)(
                                     - p_13[3][1] * (double)(p_15 + (long)v_17))) / (
                ~ (v_19 / (unsigned long long)(p_15 + 660L)) % (unsigned long long)(
                ((long long)v_21 % -462986000LL) % ((long long)(- p_13[2][1]) + 823LL) + 991LL) + 456ULL));
  v = (float)(- (- (((double)v_7 - -14.7256673832) * (double)(~ p_9))));
  result = (signed char)(((~ p[0] ^ 2231306752U) / ((unsigned int)v + 438U)) % (unsigned int)(
                         (int)(~ (! (! p_5))) + 207));
  return result;
}


