#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 870174629
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, int p_5, char p_11)
{
  signed char v_9;
  float v_7;
  float v;
  long long result;
  v_9 = (signed char)4684450816.f;
  v = (float)(~ p_11);
  v_7 = (float)v_9;
  result = (long long)(! (~ ((int)((unsigned char)v) - (int)p) | (int)(
                          5072.f * ((float)p_5 - v_7))));
  return result;
}


