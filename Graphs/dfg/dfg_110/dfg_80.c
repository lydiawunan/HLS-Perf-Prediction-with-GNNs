#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 39899179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, long long p_11, signed char p_13)
{
  double v_9;
  int v_6;
  long v_4;
  unsigned long v;
  int result;
  v_4 = (long)p_13;
  result = -31656;
  v_9 = (double)result;
  v_6 = (int)(v_9 + (double)(! p_11 * (long long)((int)p_13 + (int)((signed char)v_9)) - (long long)result));
  v = (unsigned long)p;
  result = (int)(- ((0UL - ! v) / (unsigned long)(v_4 + 177L)));
  return result;
}


