#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 485902757
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p)
{
  unsigned long v_9;
  unsigned short v_7;
  double v_5;
  unsigned short v;
  long long result;
  v_9 = (unsigned long)p;
  v_7 = (unsigned short)29708;
  v = (unsigned short)41834;
  v_5 = (double)(~ ((unsigned long)v_7 & - v_9));
  result = (long long)(((int)v + (int)((unsigned short)((float)p + 7396184576.f))) + (int)(
                       -72.9170837402 / (- v_5 + 8.)));
  return result;
}


