#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 722077044
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p[3])
{
  unsigned char v_9;
  float v_7;
  unsigned long v_5;
  short v;
  unsigned long long result;
  v_9 = (unsigned char)p[0];
  v_7 = (float)(! 0);
  v = (short)v_9;
  v_5 = (unsigned long)((int)v * (int)((short)(1.f / (v_7 + 642.f))));
  result = (unsigned long long)((6.83280457217e+37f + (float)((long long)(
                                                              (int)((short)-9533031567.53) * (int)v) + (
                                                              (long long)p[1] - 389740714LL))) - (float)(
                                0UL % (~ (! v_5) + 704UL)));
  return result;
}


