#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 681955856
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, unsigned int p_7,
                 unsigned long p_15[3][5], unsigned long long p_17[3][2][2])
{
  unsigned int v_13;
  long v_11;
  float v_9;
  signed char v_5;
  unsigned long long v;
  unsigned int result;
  v_13 = 61306U;
  v_11 = (long)p_7;
  v_5 = (signed char)87;
  result = 42766U;
  v_9 = (float)((unsigned long long)(- ((unsigned long)(1.68376661692e+37 - (double)v_13) + 
                                        p_15[0][0] / ((unsigned long)-6895813919.52 + 495UL))) * (
                ~ (833ULL * p_17[1][0][0]) / 405268457ULL));
  result = (unsigned int)((unsigned long long)(114852224LL + (long long)(
                                               (unsigned long)(p_7 + (unsigned int)v_9) % (unsigned long)(
                                               v_11 * 213L + 390L))) | ! (
                          p / (unsigned long long)((4294958514U & result) + 279U)));
  v = p % (unsigned long long)((int)(! (~ v_5)) + 635) << 58;
  result = (unsigned int)((unsigned long long)result / ((- v * ~ v) / 258859601ULL + 649ULL));
  return result;
}


