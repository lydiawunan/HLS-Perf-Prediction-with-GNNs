#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 109444000
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p[3][5])
{
  unsigned long v_9;
  float v_7;
  unsigned long v_5;
  char v;
  double result;
  v_9 = 1111UL;
  v_7 = (float)v_9;
  v_5 = (unsigned long)((double)v_7 + 1.04724057592e+37);
  v = (char)(6451UL - (v_5 + 4294967295UL));
  result = -2055925. * (((1106243778.58 * (double)p[1][2]) * (double)v) * 0.);
  return result;
}


