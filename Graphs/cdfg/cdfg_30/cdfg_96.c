#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 714844317
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, long p_4, unsigned long long p_6,
                 signed char p_8, signed char p_15)
{
  unsigned short v_13;
  long long v_11;
  float v;
  unsigned int result;
  v_13 = (unsigned short)p_8;
  v_11 = (long long)p_4;
  v = (float)((unsigned int)v_13 % (9089U % ((unsigned int)p_15 % 5926U + 846U) + 110U));
  if ((long long)v == v_11) result = (unsigned int)((1681392121.59 + (double)(
                                                     p + p)) - 36856.);
  else result = 28182323U;
  return result;
}


