#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 329645498
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p)
{
  int v_7;
  long v_4;
  long v;
  double result;
  v_7 = 2478;
  v = 28430L;
  v_4 = (long)v_7;
  result = (double)((unsigned long)(v / (v_4 + 233L)) % ((p & 417741663UL) + 16UL) - 21522UL);
  return result;
}


