#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 970455218
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p)
{
  char v_8;
  unsigned int v_6;
  char v_4;
  double v;
  long long result;
  v_6 = (unsigned int)p;
  v_4 = (char)p;
  v = -5.95579697922e+37;
  result = -4239LL;
  v_8 = (char)((double)((int)v_4 >> ((int)((char)(- p)) & 7)) + - (p + p));
  while ((double)(- result) < v) {
    v = (int)v_4 * 55911;
    v_4 = ~ (char)117;
    v = (double)(! (v_6 / ((unsigned int)v + 452U)) - (unsigned int)(
                 ((int)v_8 + (int)((char)p)) / (((int)v_8 - 20354) + 165)));
    result = 11LL;
  }
  while_0_break: ;
  return result;
}


