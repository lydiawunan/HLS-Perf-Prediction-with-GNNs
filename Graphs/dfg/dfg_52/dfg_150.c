#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 850360929
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long p_5, long p_7, unsigned char p_13, double p_15)
{
  float v_17;
  unsigned short v_11;
  unsigned char v_9;
  signed char v;
  long result;
  v_17 = (float)p;
  v_9 = (unsigned char)85;
  result = (long)p_15;
  v_11 = (unsigned short)(- (- (p_15 + (double)v_17)) / 912.);
  result *= (long)(! (((int)v_9 % ((int)v_11 + 834)) / ((88384725 + (int)p_13) + 701)));
  v = (signed char)p_5;
  result = ! ((long)((int)(- p) - (int)v) % (p_5 / ((p_7 - result) + 331L) + 461L));
  return result;
}


