#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 684164994
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, long long p_9)
{
  int v_7;
  unsigned int v_5;
  char v;
  float result;
  v_5 = (unsigned int)p_9;
  v = (char)28;
  v_7 = (int)(~ p_9 / 247LL);
  result = (float)((unsigned long)((long)v + p) / (unsigned long)((v_5 & (unsigned int)v_7) + 154U));
  return result;
}


