#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 224714880
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, int p_5)
{
  double v_7;
  double v;
  short result;
  v_7 = -509.896638072;
  result = (short)p;
  v = (double)((int)result / ((32659 / (p_5 + 387)) / ((int)((unsigned char)v_7) / 176 + 365) + 390));
  result = (short)((double)p + - (- v));
  return result;
}


