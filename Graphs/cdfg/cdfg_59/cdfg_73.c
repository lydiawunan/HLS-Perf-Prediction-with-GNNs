#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 410563591
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, char p_5, float p_7, double p_9, float p_13)
{
  unsigned long long v_15;
  long long v_11;
  long long v;
  unsigned int result;
  v_11 = 55869LL;
  v = (long long)p_7;
  v_15 = (unsigned long long)(- ((long long)p_5 + v) & -68LL);
  if (~ ((unsigned long long)v / (v_15 + 691ULL)) - 116775084ULL <= - (
      (18446744072973321839ULL + (unsigned long long)p) * (unsigned long long)(
      13LL + v))) {
    v = - (1LL / ((long long)p_9 % (v_11 + 506LL) + 856LL));
    v = (long long)((p * p) * -115.f - (p_7 + (float)v));
    result = (unsigned int)(((long long)(p - p) - (v - (long long)p_5)) - v);
  }
  else result = (unsigned int)(p_13 / 941.f - - (p_7 / ((float)p_5 + 627.f)));
  return result;
}


