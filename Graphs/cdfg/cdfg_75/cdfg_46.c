#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 307718041
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, long p_4, unsigned long long p_6, signed char p_8,
          unsigned short p_10)
{
  unsigned long long v;
  short result;
  v = (unsigned long long)p;
  if ((unsigned long long)p != v) result = (short)(-1.61238401209e+47 + (double)(
                                                   61690L * ~ p));
  else result = (short)(((unsigned long long)p_4 ^ ! p_6) + (unsigned long long)(
                        ((int)p_8 + (int)p_8) - (int)p_10 * 33308));
  result = result;
  return result;
}


