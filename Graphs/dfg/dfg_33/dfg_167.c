#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 300558489
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, double p_4, double p_6, unsigned short p_8)
{
  long long v;
  double result;
  result = p_4;
  v = (long long)(-874256707);
  result = (double)(((((long long)result + p) / ((long long)p_4 + 924LL)) * (
                     (long long)((int)((unsigned short)p_6) + (int)p_8) / (
                     - v + 648LL))) % (((-11148LL ^ (long long)-1.11413648995e+38f) * (long long)p_8 + (long long)p_4) + 968LL));
  result = result;
  result = result;
  return result;
}


