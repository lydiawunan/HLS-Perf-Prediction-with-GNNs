#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 559845176
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, unsigned char p_7, unsigned int p_11,
                  float p_13, float p_15)
{
  double v_19;
  unsigned short v_17;
  unsigned short v_9;
  signed char v_5;
  unsigned long long v;
  unsigned long result;
  v_17 = (unsigned short)31497;
  v_9 = (unsigned short)16105;
  v_5 = (signed char)-18;
  v_19 = (double)((unsigned int)((int)v_5 / ((int)p_7 + 173)) + (unsigned int)(- p_15) * ~ p_11);
  if ((long long)(p_13 / ((float)(18446744073038850064ULL / (unsigned long long)(
                                  (int)v_17 + 825)) + 165.f)) != (long long)v_19 * (
                                                                 (long long)(
                                                                 (int)p_7 / (
                                                                 (int)p_7 + 97)) - - p)) {
    v = (unsigned long long)((int)((unsigned char)-4757933568.f) / ((int)p_7 + 338) + (int)(- (~ v_9)));
    v_5 = (signed char)(p + (long long)((float)(~ v) - 5.87562644989e+37f));
    result = (unsigned long)(v << ((p ^ 35868LL) * (long long)(~ v_5) & 63LL));
  }
  else result = (unsigned long)p_11;
  return result;
}


