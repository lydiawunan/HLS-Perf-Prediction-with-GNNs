#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 307081540
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p)
{
  unsigned int v_9;
  double v_7;
  unsigned short v_5;
  unsigned int v;
  long long result;
  v_9 = (unsigned int)p;
  v_7 = 2.41977451391e+38;
  v_5 = (unsigned short)(- p);
  result = (long long)(3249506495UL / (unsigned long)(v_9 + 283U));
  v = (unsigned int)((long long)(~ v_5) + ~ (! ((long long)v_7 + result)));
  result = (long long)(~ (~ ((unsigned int)(! p) - v * (unsigned int)p)));
  return result;
}


