#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 669263197
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, unsigned long long p_9)
{
  int v_7;
  short v_5;
  unsigned char v;
  long result;
  v_7 = (int)p_9;
  v = (unsigned char)((double)(38748384.f * (float)v_7) * 2.51727766947e+38);
  v_5 = (short)-8051;
  result = (long)((unsigned long long)v_5 / (((unsigned long long)v_7 % (
                                              ~ p_9 + 208ULL)) * 123ULL + 576ULL));
  result = ! ((long)(- p) + ! result) + (long)v;
  return result;
}


