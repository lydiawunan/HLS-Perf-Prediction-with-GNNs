#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1053852836
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, unsigned long p_9)
{
  unsigned long long v_11;
  long v_7;
  double v_5;
  long v;
  double result;
  v_11 = (unsigned long long)p;
  v_7 = (long)(! (((unsigned long long)p_9 ^ v_11) + (unsigned long long)p_9));
  v_5 = (double)v_7;
  v = (long)(-1 / ((int)((char)v_5) + 987));
  result = (double)(! (~ (! (p ^ v))));
  return result;
}


