#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 648510224
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, char p_7, unsigned int p_9)
{
  float v_4;
  short v;
  unsigned long long result;
  v_4 = 4811806720.f;
  v = (short)p_9;
  result = (unsigned long long)(! (-23 / ((int)v + 378)) * ((int)(v_4 - (float)p) >> (
                                                            (int)p_7 % 64931 & 31)));
  return result;
}


