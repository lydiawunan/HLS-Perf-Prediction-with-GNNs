#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 753878120
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p)
{
  double v_6;
  long long v_4;
  long v;
  unsigned int result;
  result = (unsigned int)p;
  v = -5229L;
  v_6 = (double)(0ULL % (p + 808ULL));
  v_4 = (long long)(- v_6);
  result = (unsigned int)(! (- ((long long)v / (v_4 + 142LL))) * (long long)result);
  return result;
}


