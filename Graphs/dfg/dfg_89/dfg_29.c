#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 277779066
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p[4], short p_5)
{
  unsigned int v_7;
  float v;
  float result;
  result = 438522784.f;
  v_7 = (unsigned int)(~ 13433ULL);
  v = (float)v_7;
  v -= ((float)(p[2] + (long long)p_5) + (v + result)) + (float)(321882186L - (long)result) * - v;
  result = (float)(- ((unsigned long long)(835112576.f / (v / -9642025984.f + 790.f)) + 190094244ULL));
  return result;
}


