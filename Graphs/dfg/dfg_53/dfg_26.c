#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 269615354
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, signed char p_4, unsigned long long p_7, long p_13)
{
  long v_17;
  unsigned long long v_15;
  long v_11;
  signed char v_9;
  int v;
  unsigned long result;
  v_17 = 64460L;
  v_15 = (unsigned long long)p;
  v_11 = (long)p_4;
  v_9 = (signed char)((unsigned long long)v_11 - ((unsigned long long)p_13 + 
                                                  (232ULL * v_15) / (unsigned long long)(
                                                  v_17 + 673L)));
  v = (int)(~ v_9);
  result = (unsigned long)((unsigned long long)(~ (3795U * (36349U * (unsigned int)v))) * p_7);
  result = ~ ((- result - (unsigned long)((int)p * (int)p_4)) + (! result + (unsigned long)p));
  return result;
}


