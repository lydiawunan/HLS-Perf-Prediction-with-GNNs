#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 453669647
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, long p_4[1][4][4])
{
  unsigned short v;
  unsigned short result;
  v = (unsigned short)33189;
  result = (unsigned short)(((- p / (long long)(- p_4[0][3][3] + 324L)) % (
                             (long long)((unsigned int)v / 133999139U) / (
                             ~ p + 165LL) + 395LL)) % (long long)(~ (
                                                                  11214L * (
                                                                  (long)v - p_4[0][1][1])) + 390L));
  return result;
}


