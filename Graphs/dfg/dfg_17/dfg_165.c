#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 785558200
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p[4][2])
{
  unsigned long long v_7;
  double v_4;
  short v;
  long result;
  v_4 = 6342422041.21;
  v = (short)32267;
  v_7 = 18446744073709551569ULL;
  result = (long)(- (- ((double)v / (v_4 + 287.)) * (double)(((unsigned long long)p[3][0] - v_7) / (
                                                             (71428108ULL >> (
                                                              v_7 & 63ULL)) + 874ULL))));
  result = result;
  result ^= result;
  return result;
}


