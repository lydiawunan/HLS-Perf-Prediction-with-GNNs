#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 59615438
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(void)
{
  float v_6;
  short v_4;
  float v;
  long long result;
  v_6 = 2653962752.f;
  v_4 = (short)-6647;
  v = 864.82244873f;
  result = -25799LL;
  v = - (v * ((float)result - v_6));
  result = (long long)(- (- (v / ((float)v_4 + 678.f))));
  return result;
}


