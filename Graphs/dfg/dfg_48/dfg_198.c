#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 353065856
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, float p_5[1][3])
{
  float v_9;
  unsigned short v_7;
  unsigned int v;
  long long result;
  v = (unsigned int)p;
  v_9 = (float)v;
  v_7 = (unsigned short)v_9;
  v = (unsigned int)((int)((double)(3399253143U + (264U + v)) + p) / (
                     ((int)(- p_5[0][1]) + (-37 - (int)v_7)) + 409));
  result = (long long)v;
  return result;
}


