//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 626953693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(void)
{
  double v_6;
  long v_4;
  long long v;
  float result;
  v_6 = -348.866201147;
  v_4 = (long)v_6;
  v = (long long)v_4;
  v = ! (v * 156LL);
  result = (float)v;
  return result;
}


