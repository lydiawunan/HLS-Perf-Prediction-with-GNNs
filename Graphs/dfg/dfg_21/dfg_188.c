#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 176204746
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, char p_7)
{
  int v_5;
  short v;
  double result;
  v = (short)-26384;
  v_5 = (int)(666358834ULL % (unsigned long long)((int)p_7 + 462));
  v_5 = -90 + (int)p_7 % (v_5 + 263);
  result = (double)((unsigned long)(~ ((int)v + 848917827)) / (((unsigned long)p + (
                                                                4294959565UL + (unsigned long)(
                                                                (double)v_5 / (
                                                                p + 249.)))) + 649UL));
  return result;
}


