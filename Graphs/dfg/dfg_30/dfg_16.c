#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 847312575
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, unsigned int p_9[2])
{
  short v_7;
  long v_4;
  signed char v;
  float result;
  v_7 = (short)p_9[0];
  v_4 = (long)(! ((unsigned long long)(~ (p_9[0] << 17L)) - 18446744073709523816ULL));
  v = (signed char)v_7;
  v = (signed char)((v_4 % (long)(~ p + 272) - (long)(! p + (int)v)) + 18L);
  result = (float)(! v);
  return result;
}


