#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548923635
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, int p_11, unsigned long long p_13[2],
           unsigned long long p_19, unsigned char p_23)
{
  long long v_21;
  float v_17;
  unsigned int v_15;
  float v_8;
  unsigned int v_6;
  unsigned int v_4;
  char v;
  double result;
  v_21 = (long long)p_19;
  v_17 = 126.738327026f;
  v_15 = (unsigned int)p_11;
  v_8 = 867.692504883f;
  v_6 = 36603U;
  v = (char)5;
  result = (double)p;
  if (4294950400.f > (float)(- v_15 / 992U) / (((float)(! p) + ((float)p_19 + v_17)) + 23.f)) {
    v_6 = (unsigned int)(~ (p_19 * (unsigned long long)v_21) / (unsigned long long)(
                         ((long long)((double)v_17 * 9448992171.11) - (
                          -65LL + v_21)) + 650LL));
    v_8 = (float)(4294910998UL % (unsigned long)((unsigned int)p_11 / (
                                                 v_15 + 14U) + 187U) ^ (unsigned long)(
                  -127 + (int)((char)v_17)));
    v_4 = (unsigned int)(~ ((unsigned long long)result * p_13[1]) * (unsigned long long)p_11);
  }
  else {
    result = (double)(- (short)-6701);
    v_4 = (unsigned int)v_17;
    v = (char)(((float)v / (- v_8 + 611.f)) * (float)(- ((int)v / ((int)p_23 + 966))));
  }
  while (462103447L < (long)v) {
    result = (unsigned int)v_8 * (v_6 / 4294930941U);
    v_6 = (unsigned int)v;
    v_4 = (unsigned int)(0ULL % (((unsigned long long)v_4 - p_13[1]) + 949ULL) - - p_13[1]);
    v = (char)(((unsigned long long)(result - -2.83221113534e+38) % 42622ULL) % (unsigned long long)(
               (p / (long long)(p_11 + 730) + p) + 380LL));
  }
  while_0_break: ;
  return result;
}


