#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 247781652
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, char p_9, unsigned short p_11)
{
  float v_7;
  long v_4;
  double v;
  int result;
  v = -8383792149.91;
  v_4 = (long)((int)p_11 - (int)((unsigned short)(1.84467440737e+19 / (
                                                  - v + 542.))));
  v_7 = (float)v;
  v = (double)(((v_4 | 93013110L) / (long)(p + 197)) % (long)(~ (-14103 + (int)v_7) + 510) & (
               (long)p_9 - v_4));
  result = (int)v;
  return result;
}


