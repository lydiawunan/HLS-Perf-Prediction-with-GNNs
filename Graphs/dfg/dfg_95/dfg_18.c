#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 896936496
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, long p_9, char p_11)
{
  unsigned int v_7;
  char v_5;
  unsigned long long v;
  long long result;
  v = (unsigned long long)p;
  v_7 = (unsigned int)(! (((long)-1.79918724658e+38f & ~ p_9) & (long)p_11));
  v_5 = (char)-81;
  result = (long long)((unsigned long long)p - ! ((v - (unsigned long long)v_5) % (unsigned long long)(
                                                  ! v_7 + 546U)));
  return result;
}


