#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 134610112
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p)
{
  unsigned char v_4;
  long v;
  long result;
  v_4 = (unsigned char)(~ (short)-26555);
  v = (long)(~ (((unsigned long)v_4 - 4294950980UL) % 20467UL));
  result = (long)p;
  result = (long)((unsigned long)result / ((unsigned long)v * (unsigned long)(
                                           ((unsigned int)v_4 ^ 477443973U) % 4294918875U) + 59UL));
  return result;
}


