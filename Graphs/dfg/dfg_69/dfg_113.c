#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 409366259
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned int p_5)
{
  signed char v;
  float result;
  v = (signed char)p;
  result = (float)v;
  v = (signed char)p_5;
  result = (float)(((long)p % 12505L >> ((int)(~ v) & 31)) % (long)((int)(~ p) + 1017)) / (
           result + 564.f);
  result = (float)(- ((int)p - (int)((short)(- result))));
  return result;
}


