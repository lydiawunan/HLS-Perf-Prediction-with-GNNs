#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 255428259
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(void)
{
  unsigned int v_4;
  long long v;
  unsigned int result;
  v_4 = 38110U;
  v = 170462733LL;
  v = v;
  result = (unsigned int)((float)(v * (long long)((double)v_4 / 1400.25639036)) / -6148760064.f);
  return result;
}


