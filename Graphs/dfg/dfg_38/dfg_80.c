#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 518305392
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p)
{
  long v_9;
  int v_6;
  unsigned long v_4;
  unsigned long long v;
  unsigned long long result;
  v_9 = (long)p;
  v_6 = (int)v_9;
  v_4 = (unsigned long)(- (710.666230352 / (double)((- p - -919.993103027f) + 806.f)));
  v = (unsigned long long)v_6;
  result = ~ (- (v % (unsigned long long)(v_4 + 325UL) + (unsigned long long)v_6));
  return result;
}


