#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 2979826
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p)
{
  unsigned long v_9;
  long long v_7;
  unsigned long v_4;
  int v;
  long long result;
  v_9 = (unsigned long)p;
  v_7 = (long long)p;
  v_4 = 539357903UL;
  result = (long long)p;
  v = (int)(((645554448LL - result) - (v_7 - (long long)v_9)) / ((long long)1.16262950025e+38f + 196LL));
  result = (long long)(((unsigned long)((int)2.67187231835e+38 * v) - v_4) + (
                       51UL + (unsigned long)p / (v_4 + 269UL)));
  return result;
}


