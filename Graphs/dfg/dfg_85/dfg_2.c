#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 111913245
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, short p_9)
{
  unsigned char v_7;
  unsigned long v_5;
  unsigned long long v;
  int result;
  v_7 = (unsigned char)162;
  v_5 = (unsigned long)p_9;
  result = (int)(~ (~ v_5 - (unsigned long)((unsigned int)v_7 + 3805360394U)));
  v = (unsigned long long)p;
  result = 118 << (((unsigned long long)result ^ v) & 7ULL);
  return result;
}


