#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 950870455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, unsigned long p_7)
{
  long v_4;
  long v;
  double result;
  v_4 = 884799904L;
  v = (long)((unsigned long)(~ p + - p) / (~ p_7 + 673UL));
  v_4 = v_4;
  result = (double)v_4;
  result = (double)v - result;
  return result;
}


