#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 538218078
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, char p_11)
{
  unsigned char v_9;
  unsigned short v_7;
  double v_4;
  unsigned int v;
  float result;
  v_9 = (unsigned char)p;
  v_7 = (unsigned short)p;
  result = (float)((long)((int)((char)-8028848410.35) | (int)p_11) % (
                   (-22L - p) + 552L));
  v_4 = (double)(0 / ((int)(- (- result * (float)((int)v_7 / ((int)v_9 + 167)))) + 449));
  v = (unsigned int)v_4;
  result = (float)v;
  return result;
}


