#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 159834857
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, signed char p_5, unsigned char p_7,
          unsigned long long p_11)
{
  unsigned int v_15;
  long long v_13;
  long long v_9;
  double v;
  float result;
  v_15 = 415257033U;
  v_9 = (long long)p_7;
  v = -4097880656.57;
  result = -9344872448.f;
  v_13 = (long long)v;
  v = (double)((unsigned long long)p_7 | ~ (- (18446744073709522060ULL + p_11)));
  result = (float)((((unsigned long long)v_9 - (p_11 | (unsigned long long)result)) ^ 49031ULL) * (
                   ~ ((unsigned long long)v_13 % (p_11 + 721ULL)) + (unsigned long long)(~ (
                   v_13 >> (v_15 & 63U)))));
  result = (float)((double)result + ((double)(p - 13479819LL) + (v + 136895649.)) / (
                                    (double)((unsigned long long)((int)p_5 % 184) - 
                                             (unsigned long long)p_7 % 360250921ULL) + 54.));
  return result;
}


