#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 974807206
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, unsigned char p_9[2], unsigned long p_11)
{
  unsigned short v_13;
  int v_6;
  unsigned long long v_4;
  unsigned char v;
  unsigned long result;
  v_13 = (unsigned short)p;
  v_6 = -893300611;
  result = 13381UL;
  v = (unsigned char)v_13;
  v_4 = (unsigned long long)((((long long)v & ((long long)v + 13306LL)) ^ (
                              (long long)v_6 * p ^ (long long)(result - (unsigned long)p_9[0]))) / (long long)(
                             p_11 + 520UL));
  v = (unsigned char)v_4;
  result = (unsigned long)((int)((unsigned char)1008940608.f) & (int)v);
  return result;
}


