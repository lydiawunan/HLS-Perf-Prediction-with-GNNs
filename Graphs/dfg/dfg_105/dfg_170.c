#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 829186553
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p[4][5], unsigned long long p_4[4], unsigned int p_7,
           unsigned long p_11)
{
  signed char v_13;
  signed char v_9;
  long long v;
  double result;
  v_13 = (signed char)p_11;
  v_9 = (signed char)-18;
  v = 57112LL;
  result = (double)834325347LL;
  result = (double)((! (v * (long long)v_9) >> ((4936ULL ^ 18446744073709545258ULL % (
                                                           p_4[3] + 503ULL)) & 63ULL)) & (long long)(
                    132 - (int)((unsigned char)((result + (double)p_11) - (double)v_13))));
  v = (long long)result;
  result = (double)((long long)(- p[0][4]) - (long long)((int)((double)p_4[2] * result) - -22373) * (
                                             53030LL * (v % (long long)(
                                                        p_7 + 149U))));
  return result;
}


