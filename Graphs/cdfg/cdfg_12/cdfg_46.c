#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 501004375
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p)
{
  unsigned long v_5;
  short v;
  long long result;
  v_5 = (unsigned long)p;
  v = (short)14924;
  result = (long long)(~ v_5 >> ((unsigned long)(- (140.773529053f - (float)p)) & 31UL));
  result = (long long)(-1.41884613505e+38 - (double)(result / (long long)(
                                                     ((int)p >> ((int)v & 7)) + 727)));
  return result;
}


