#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1027944523
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p)
{
  double v_9;
  long v_7;
  char v_4;
  signed char v;
  unsigned long result;
  v_9 = (double)p;
  v_7 = 141L;
  v_4 = (char)((unsigned int)v_9 - 820417659U);
  v = (signed char)((long)(((int)v_4 + (int)p) * - ((int)p + 31156)) % (
                    v_7 + 246L));
  result = (unsigned long)v;
  return result;
}


