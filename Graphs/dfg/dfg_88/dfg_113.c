#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 759127529
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p[5])
{
  unsigned char v_6;
  short v_4;
  long v;
  int result;
  v_6 = (unsigned char)158;
  v = (long)p[1];
  v_4 = (short)((- ((unsigned long long)v_6 % 18446744073709533189ULL) ^ (unsigned long long)(- p[2])) - 18446744073709551614ULL);
  result = 28157;
  result = (int)((unsigned long)(- ((long)result & ! v)) % ((127016364UL ^ (unsigned long)(
                                                             ((unsigned int)v_4 + 50008U) + (unsigned int)(
                                                             (int)v_4 % 99))) + 234UL));
  return result;
}


