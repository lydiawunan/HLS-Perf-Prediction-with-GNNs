#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 227650115
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, double p_9)
{
  unsigned long v_7;
  unsigned int v_5;
  int v;
  unsigned long long result;
  v_7 = (unsigned long)p;
  v_5 = 4228812822U;
  v = -34404;
  while ((unsigned long long)((long long)(- (~ v)) - (p + 81LL) * (long long)(
                                                     v_5 + 125U)) < 18446744073709526170ULL) {
    v_7 *= 4078349794UL;
    v = (int)p_9;
    v_5 = (unsigned int)(~ (char)-91);
  }
  while_0_break: ;
  result = (unsigned long long)(! p + (long long)v);
  return result;
}


