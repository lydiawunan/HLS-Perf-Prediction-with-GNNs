#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 268746931
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, int p_4, int p_7)
{
  short v;
  double result;
  v = (short)p_7;
  if (- p_4 >= (int)v) result = (double)(-(signed char)112);
  else result = (double)p;
  return result;
}


