#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1036877066
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, long long p_4[3], double p_7, unsigned char p_11,
          short p_15)
{
  int v_19;
  long long v_17;
  unsigned long v_13;
  unsigned char v_9;
  long v;
  float result;
  v_19 = 853329712;
  v_17 = (long long)p_7;
  v_13 = (unsigned long)(((19099ULL - (unsigned long long)p_15) * 18446744073709551519ULL) * (unsigned long long)v_19);
  if ((long long)p >= v_17) result = (float)((long long)(- (- p)) ^ ~ p_4[2] / 48165LL);
  else {
    v_9 = (unsigned char)(61073UL + - ((unsigned long)p_15 * 340224907UL));
    v = (long)(1.06201008879e+38f - (float)(~ ((int)p_11 << (v_13 & 7UL))));
    result = (float)(v * (long)(p_7 + (double)(3977042212U & (unsigned int)v_9)));
  }
  return result;
}


