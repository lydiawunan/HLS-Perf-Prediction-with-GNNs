#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 262289341
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p[4], unsigned long p_7, char p_13,
          unsigned long long p_17)
{
  double v_15;
  int v_11;
  long long v_9;
  unsigned short v_5;
  unsigned char v;
  float result;
  v_15 = 1.67727379846e+38;
  v_11 = 26529;
  result = (float)-27677;
  if ((int)p_13 + (int)((char)((float)(216 - (int)((unsigned char)v_15)) / (
                               (float)p_17 / (result + 385.f) + 1007.f))) < (int)p_13) {
    v_5 = (unsigned short)p_7;
    v = (unsigned char)((283940350U * (unsigned int)p[0]) / (unsigned int)(
                        (int)v_5 + 485));
    result = (float)((long)(~ (1014085209 % ((int)v + 859))) / -1L);
  }
  else {
    v_9 = (long long)v_11;
    v = (unsigned char)(- v_9);
    result = (float)(~ v);
  }
  return result;
}


