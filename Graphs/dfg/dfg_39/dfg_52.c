#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 712035522
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, long long p_5, short p_7)
{
  long long v_9;
  unsigned long v;
  short result;
  v = (unsigned long)p;
  v_9 = 38689LL;
  result = (short)-25090;
  v = (unsigned long)(((long long)p | (long long)(p / ((double)v + 105.)) * p_5) | 
                      3264411090LL % ((long long)(- p_7) % (((long long)result - v_9) + 284LL) + 341LL));
  result = (short)v;
  return result;
}


