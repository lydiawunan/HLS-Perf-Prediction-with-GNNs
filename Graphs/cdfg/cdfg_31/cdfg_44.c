#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 610005610
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p)
{
  float v_5;
  signed char v;
  unsigned long result;
  v_5 = (float)p;
  v = p;
  result = (unsigned long)((float)((int)v / ((int)p + 138)) + v_5);
  result = result;
  return result;
}


