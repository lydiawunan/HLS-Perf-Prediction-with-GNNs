#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 193784789
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, float p_7)
{
  unsigned long long v_11;
  signed char v_9;
  unsigned int v_5;
  char v;
  unsigned long long result;
  v_9 = p;
  v_5 = 4294947897U;
  v = (char)p_7;
  v_11 = 18446744073709551611ULL;
  v_5 = (unsigned int)(((unsigned long long)(! v) - ! v_11) * (unsigned long long)(
                       v_5 / 11U << 28LL) << ((unsigned long)v / (~ (
                                                                  4294911476UL | (unsigned long)p) + 42UL) & 63UL));
  result = (unsigned long long)(((float)((int)v / 40957 >> (((unsigned int)p + v_5) & 31U)) - 
                                 53616.f / ((p_7 + -47577.f) + 779.f)) + (float)v_9);
  result = result;
  return result;
}


