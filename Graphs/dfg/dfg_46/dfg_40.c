#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 279459377
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, double p_5[2][3])
{
  unsigned int v_7;
  int v;
  double result;
  result = p_5[1][0];
  v_7 = (unsigned int)p;
  v = (int)p * (int)((short)(- (- p_5[0][2]) + (double)(230U / (v_7 + 9U)) / (
                                               ((double)v_7 + result) + 733.)));
  result = (double)(~ v);
  result = result;
  return result;
}


