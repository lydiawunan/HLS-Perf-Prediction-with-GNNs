#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 162466426
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(void)
{
  int v_6;
  long long v_4;
  signed char v;
  unsigned int result;
  v_4 = 8547LL;
  v_6 = -601910569;
  result = (unsigned int)(v_6 - -7658);
  v = (signed char)(~ ((long long)(4294941416U / (result + 255U)) / (
                       - v_4 + 872LL)));
  result = (unsigned int)v;
  return result;
}


