#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 737929204
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, unsigned int p_5, float p_9,
          long long p_15[2][3][5], unsigned long p_17)
{
  signed char v_23;
  short v_21;
  unsigned int v_19;
  signed char v_13;
  signed char v_11;
  char v_7;
  signed char v;
  float result;
  v_21 = (short)p;
  v_19 = 3454348686U;
  v_11 = (signed char)p_5;
  v_7 = (char)5;
  result = 7.43774214335e+37f;
  if ((long long)(- (- result)) >= p_15[1][1][1] % -75LL) {
    v_13 = (signed char)(! v_21);
    v = (signed char)(~ (~ 12479U));
    v_11 = (signed char)((long long)(! (4294938202UL * p_17)) * (((long long)v_19 - p_15[0][1][1]) / (long long)(
                                                                 p + 350U)));
  }
  else {
    v = (signed char)(-0LL);
    v_23 = (signed char)(((unsigned long)(- v_7) - (unsigned long)p * p_17) | (unsigned long)v);
    v_13 = (signed char)(! ((int)v_23 / ((int)v + 343)) % 94);
  }
  if (! ((long long)(~ v_11) / (((long long)v_13 | p_15[1][1][3]) + 776LL)) != -8544LL) {
    v_7 = - v_7;
    v = (signed char)((int)v % (16680 / (((int)v_7 >> 6) + 140) + 986));
    result = (float)(~ ((unsigned int)v % (p + 19U) & p_5));
  }
  else result = p_9;
  return result;
}


