#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 726672008
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p[5])
{
  signed char v_11;
  signed char v_9;
  float v_7;
  long long v_5;
  long long v;
  long result;
  v_11 = (signed char)p[4];
  v_9 = (signed char)122;
  v_7 = 2.15883407167e+37f;
  result = (long)p[1];
  v_5 = (long long)((long)((int)((signed char)v_7) + (int)v_9) ^ ! (- (
                    (long)v_11 / (result + 508L))));
  result = (long)(- v_5);
  v = 49LL;
  result = (long)(- ((p[4] * p[0] + p[0]) * (- p[2] + (double)((long long)result + v))));
  return result;
}


