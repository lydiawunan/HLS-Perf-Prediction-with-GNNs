#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 310587292
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, short p_5, unsigned long p_9[1])
{
  unsigned int v_13;
  int v_11;
  int v_7;
  signed char v;
  char result;
  v_13 = (unsigned int)p_9[0];
  v_11 = 64120;
  v = (signed char)33;
  v_7 = (int)(! ((long long)(((unsigned long)v - p_9[0]) | (unsigned long)(
                             (unsigned int)v_11 & v_13)) - 21911LL));
  v = (signed char)(~ (~ (-23 * ! v_7)));
  result = (char)124;
  result = (char)((((long)(- p) / ((long)result % 651457140L + 152L)) * (long)v) / (long)(
                  (int)p_5 + 313));
  return result;
}


