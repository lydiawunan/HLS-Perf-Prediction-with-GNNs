#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 733895760
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, signed char p_9, double p_11)
{
  int v_7;
  short v_4;
  int v;
  double result;
  v_7 = 501542982;
  result = -9593077134.88;
  v_4 = (short)913067136.f;
  v = (int)(((double)(! ((int)v_4 * (int)p)) / (result + 72.)) / ((double)(
                                                                  (v_7 - (int)p_9) * (int)p_11) + 250.));
  v = v;
  result = (double)v;
  return result;
}


