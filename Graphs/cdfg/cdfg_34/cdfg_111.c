#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 950016456
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, float p_9, unsigned short p_13,
          signed char p_15[4], unsigned long p_17[3][1])
{
  long v_11;
  unsigned int v_7;
  signed char v_5;
  long long v;
  float result;
  v_5 = (signed char)-9;
  v = 17976LL;
  if ((long long)p_15[3] + ((long long)(! p_17[1][0]) & ! v) > -27175LL) {
    v_7 = (unsigned int)(- (25282.f * - p_9));
    v = (long long)(! (~ ((unsigned int)v_5 - v_7)));
    result = (float)((int)p << (v & 7LL));
  }
  else {
    v_11 = (long)(! p_13);
    result = (float)v_11;
  }
  result = (float)((double)(- result / 25391.f) * 5344695898.56);
  return result;
}


