#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 377373058
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p[2], int p_7)
{
  char v_9;
  double v_5;
  short v;
  double result;
  v_9 = (char)p[1];
  v_5 = (double)p_7;
  v = (short)23013;
  v = (short)(((int)(v_5 + 200679.) | - p_7) - ~ ((int)v_9 * (int)v));
  result = (double)((unsigned long)((double)((unsigned long)v * 8498UL) - p[0]) / 240455626UL);
  return result;
}


