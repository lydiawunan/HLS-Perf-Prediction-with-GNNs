#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 171804747
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p)
{
  double v_6;
  unsigned int v_4;
  unsigned long long v;
  unsigned int result;
  v_6 = (double)p;
  v_4 = 3464884052U;
  v = (unsigned long long)p;
  result = (unsigned int)((19948ULL * v) * (unsigned long long)v_4 - (unsigned long long)(
                          (unsigned long)v_6 % ((p + 8UL) + 54UL)));
  result = result;
  return result;
}


