#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 949155443
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, double p_9, unsigned char p_11)
{
  unsigned int v_7;
  unsigned char v_4;
  long v;
  float result;
  v_7 = 4294911540U;
  result = 2.49581287014e+37f;
  v_4 = - (~ p_11);
  v = 412901674L;
  result = (float)((double)((int)v_4 | (int)p) + - (((double)v_7 - p_9) - (double)(
                                                    -6088.f - result)));
  result = (float)v / (result + 752.f);
  return result;
}


