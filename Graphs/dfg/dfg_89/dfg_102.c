#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 503538468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, unsigned char p_7)
{
  unsigned long long v_5;
  short v;
  unsigned int result;
  v = (short)p_7;
  v_5 = 18446744066294485712ULL;
  result = (unsigned int)(~ (~ ((unsigned long long)(26384 + (int)v) / (
                                ((unsigned long long)p | v_5) + 755ULL))));
  return result;
}


