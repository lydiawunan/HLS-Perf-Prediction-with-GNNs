#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 547912169
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p)
{
  short v_4;
  unsigned long long v;
  signed char result;
  v_4 = (short)8846;
  v = (unsigned long long)(! ((int)v_4 % ((int)p + 919)) & (int)(~ p));
  result = (signed char)v;
  return result;
}


