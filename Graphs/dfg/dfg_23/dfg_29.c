#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 818068652
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p)
{
  double v_9;
  unsigned int v_7;
  char v_5;
  unsigned long long v;
  float result;
  v_9 = p;
  v_5 = (char)v_9;
  v_7 = (unsigned int)p;
  v = (unsigned long long)((unsigned int)p % ((unsigned int)((14643 - (int)v_5) >> (
                                                             (12359U - (unsigned int)p) & 31U)) % (
                                              v_7 + 333U) + 502U));
  result = (float)(78ULL / (v + 320ULL));
  return result;
}


