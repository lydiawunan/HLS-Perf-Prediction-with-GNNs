#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 120211989
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p)
{
  unsigned long long v_10;
  unsigned char v_8;
  double v_6;
  float v_4;
  int v;
  float result;
  v_8 = (unsigned char)p;
  v_4 = -8.94608815482e+37f;
  result = -692.045471191f;
  v = (int)(! ((long)(- p) * 31804L));
  while (89UL <= ~ ((unsigned long)(v + 30644) % 4294960712UL)) {
    v_6 = (long)v_8 + 20788L;
    result = (float)v;
    v_10 = (unsigned long long)((-1.03844012695e+38 + p) / -24.3873291016 - (
                                (double)v_4 - v_6));
    v = (int)v_10;
  }
  while_0_break: ;
  return result;
}


