#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981079904
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, int p_5, unsigned short p_9)
{
  unsigned short v_7;
  char v;
  double result;
  v = (char)-124;
  v_7 = p_9;
  result = (double)(((p - p * (long long)v) + (long long)(p_5 - (int)v_7) / (
                                              ~ p + 218LL)) % 723LL);
  v = (char)(~ (short)-26375);
  result -= (double)(~ v);
  return result;
}


