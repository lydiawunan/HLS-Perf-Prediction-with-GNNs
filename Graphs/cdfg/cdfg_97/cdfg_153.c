#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 774025066
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned long p_5[1])
{
  float v_7;
  float v;
  unsigned long result;
  v_7 = (float)p_5[0];
  v = v_7;
  result = (unsigned long)(! ((long long)((int)p / ((int)((unsigned short)v) + 995)) + (
                              39131LL - (long long)p_5[0])));
  return result;
}


