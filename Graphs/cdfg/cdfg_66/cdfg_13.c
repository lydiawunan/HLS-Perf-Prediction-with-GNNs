#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106881769
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, long p_7, char p_9[4][2][4])
{
  int v_5;
  unsigned int v;
  signed char result;
  v_5 = -34259;
  v = (unsigned int)(-5.63502688955e-10f + (float)(! ((int)p_9[0][1][2] << (
                                                      v_5 & 7))));
  if ((unsigned long)(~ v) < (unsigned long)(~ ((long)v_5 - p_7))) result = (signed char)p;
  else result = (signed char)(59056LL + - (-53681LL - p));
  return result;
}


