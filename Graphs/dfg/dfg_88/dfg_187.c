#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 872673932
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, unsigned long p_4[1], double p_7[3][2])
{
  double v_13;
  char v_11;
  unsigned char v_9;
  double v;
  float result;
  v_13 = (double)p_4[0];
  v_11 = (char)v_13;
  v_9 = (unsigned char)v_11;
  v = (double)((int)((char)(- (p_7[1][0] - (double)((int)((unsigned char)828.568886778) - (int)v_9)))) - -44);
  result = (float)0LL;
  return result;
}


