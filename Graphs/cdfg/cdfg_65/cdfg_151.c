#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 469082613
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, unsigned long long p_7, double p_9, unsigned short p_11,
          double p_17)
{
  unsigned short v_23;
  float v_21;
  unsigned int v_19;
  signed char v_15;
  unsigned int v_13;
  unsigned long long v_5;
  float v;
  float result;
  v_23 = p_11;
  v_21 = 3.0484013393e+38f;
  v_19 = 31669U;
  v_15 = (signed char)110;
  v_13 = (unsigned int)p_9;
  v_5 = 18446744073709533734ULL;
  v = 5994410496.f;
  result = (float)p_11;
  if ((unsigned long long)(- v_19) + (617138927ULL + - p_7) == (unsigned long long)(
      (int)p_11 % ((int)((unsigned short)(- p)) + 254))) {
    v_21 = (float)((unsigned long long)p_11);
    v = (float)(- ((double)v_5 + p_9) / ((1594054. + (double)v * p) + 372.));
    result = (float)(((-45133LL - (long long)v_19) + (long long)((long)p_11 - -740L)) / (
                     (long long)((float)p_11 - v_21) + 595LL));
  }
  else {
    v_13 = (unsigned int)v_23;
    v_15 = (signed char)(((long long)(p + p_17) & (long long)p_17 / 363452227LL) - (long long)v_13);
    v = (float)((18446744073709539911ULL / (unsigned long long)((-103 + (int)((signed char)v_21)) + 626)) * 3644828868ULL);
  }
  if (result <= (float)v_15) {
    result = (float)((unsigned long long)((unsigned int)p_11 / (((unsigned int)result + v_13) + 344U)) - (
                     18446744073709528759ULL + ((unsigned long long)v_15 + 18446744073709527002ULL)));
    v_5 = (unsigned long long)(- ((float)((int)((unsigned short)p_9) / (
                                          (int)p_11 + 523)) - - result));
    result = (float)((unsigned long long)(p / (double)(v + 953.f) + (double)v_5) * p_7);
  }
  else {
    v_15 = (signed char)p_17;
    result = (float)(! v_15);
  }
  return result;
}


