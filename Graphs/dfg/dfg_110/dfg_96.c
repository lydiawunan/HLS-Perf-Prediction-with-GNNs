#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 524843025
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(void)
{
  long long v_6;
  signed char v_4;
  unsigned int v;
  unsigned long result;
  v_6 = -40835LL;
  v = 4294964167U;
  v_4 = (signed char)((unsigned long long)(! v_6 & (long long)v) * ((unsigned long long)-190.316799012 % 553ULL));
  result = (unsigned long)(-0ULL);
  v = (unsigned int)(- ((5811ULL << 56) - (unsigned long long)result));
  result = (unsigned long)(- v);
  return result;
}


