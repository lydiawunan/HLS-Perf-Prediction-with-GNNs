#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 671106178
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, long long p_5, unsigned char p_7, int p_9,
           unsigned short p_11)
{
  unsigned short v_17;
  double v_15;
  unsigned long long v_13;
  unsigned long v;
  double result;
  v_17 = (unsigned short)48639;
  v_15 = (double)p;
  v_13 = 18446744073709505501ULL;
  v = 3369197759UL;
  if ((((unsigned long long)p_11 % (v_13 + 923ULL) >> ((unsigned long long)(
                                                       722837056.f + (float)v) & 63ULL)) ^ (unsigned long long)(
       ((int)p_7 >> ((int)((unsigned char)v_15) & 7)) / ((int)p_7 + 46))) >= (unsigned long long)(
      ((p_5 - (long long)p_11) - (p_5 << ((int)v_17 & 63))) + (long long)(
      17361 & p_9))) {
    v = (unsigned long)p_7;
    v = (unsigned long)(-937.945861816f * (float)v);
  }
  else v = (unsigned long)p_9;
  result = (double)((long long)(! p >> (- v & 31UL)) + ~ (! p_5));
  return result;
}


