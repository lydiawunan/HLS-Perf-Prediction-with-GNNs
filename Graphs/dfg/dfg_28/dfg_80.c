#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 232809962
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p[1][1], unsigned long long p_9[2])
{
  short v_6;
  double v_4;
  long long v;
  unsigned long long result;
  v_6 = (short)6113;
  v_4 = (double)(char)26;
  v_6 = (short)(- (~ ((29283ULL ^ p[0][0]) * (p_9[1] / (unsigned long long)(
                                              (int)v_6 + 586)))));
  v = (long long)((unsigned int)(- (- (- v_4))) - (947809288U + (unsigned int)v_6));
  result = (unsigned long long)v;
  return result;
}


