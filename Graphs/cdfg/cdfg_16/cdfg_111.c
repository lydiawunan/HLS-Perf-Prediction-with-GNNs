#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 425088864
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(void)
{
  int v;
  float result;
  result = 1.11642748952e+38f;
  v = (int)result;
  result = (float)v;
  return result;
}


