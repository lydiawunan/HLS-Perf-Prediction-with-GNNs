#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 214010809
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned int p_5, short p_7)
{
  char v_11;
  long long v_9;
  unsigned long v;
  unsigned long result;
  v_11 = (char)-68;
  v_9 = (long long)v_11;
  v = (unsigned long)(! ((long long)(~ (p_5 - (unsigned int)p_7)) + - v_9));
  result = (unsigned long)p;
  result = - (- result % (61UL * v + 452UL)) / (unsigned long)(p + 494);
  return result;
}


