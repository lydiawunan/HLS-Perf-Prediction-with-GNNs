#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 801279142
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned long long p_4[3][1], unsigned long long p_6,
           unsigned short p_8, signed char p_13)
{
  unsigned long long v_19;
  unsigned long long v_17;
  long long v_15;
  signed char v_11;
  unsigned int v;
  double result;
  v_19 = (unsigned long long)p_8;
  v_17 = (unsigned long long)p_13;
  if ((unsigned long long)((float)((int)(! p_13) + -31) * ((489.307006836f - (float)v_19) + 526178496.f)) <= p_4[0][0]) {
    v = (unsigned int)(- -146947108LL);
    v_11 = (signed char)(! (! ((unsigned long long)p_13 / (p_6 + 506ULL))));
  }
  else {
    v_15 = (long long)(! (- (v_17 - p_4[0][0])));
    v_11 = (signed char)((((int)p_8 - 190) - (int)5113451629.) >> (v_15 & 31LL));
    v = (unsigned int)(- p_13);
  }
  if (v >= (unsigned int)v_11) result = (double)p;
  else {
    result = (double)(~ (! (1039769777ULL / (p_4[1][0] + 311ULL))));
    result = 0. / (result + 32.);
    result = (double)(- ((unsigned long long)((float)p_4[0][0] - 3.34309379834e+38f) * (
                         (unsigned long long)result % (p_6 + 2ULL))));
  }
  return result;
}


