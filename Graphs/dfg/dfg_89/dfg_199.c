#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 111966909
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, float p_4[4][2], unsigned int p_9, signed char p_15)
{
  unsigned long v_13;
  float v_11;
  double v_7;
  unsigned char v;
  double result;
  v_13 = 10262UL;
  v_7 = -635.868673224;
  v = (unsigned char)18;
  result = (double)p_4[3][1];
  v_11 = (float)(! (~ ((v_13 - (unsigned long)p_15) & 21UL)));
  result = - result / (double)(- ((float)((int)v % ((int)((unsigned char)v_7) + 702)) / (
                                  (float)p_9 * v_11 + 2.f)) + 295.f);
  result = - (result - 61182.);
  result = (double)(~ ((18446744073709494775ULL + (unsigned long long)p) & (unsigned long long)p)) * - (
           (result + (double)p_4[3][0]) * 0.);
  return result;
}


