#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 425382648
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p[5][2])
{
  unsigned int v_5;
  int v;
  unsigned int result;
  v_5 = (unsigned int)p[1][0];
  result = 4269804241U;
  v = (int)(~ ((unsigned long)(! result) | (unsigned long)v_5 / 366344969UL));
  result = (unsigned int)(- (-5050684416. * p[4][0] - (double)v / 147.400826174));
  return result;
}


