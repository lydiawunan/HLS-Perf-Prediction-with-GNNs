#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 479514813
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned char p_11)
{
  long v_9;
  char v_7;
  unsigned long v_5;
  unsigned int v;
  signed char result;
  v_9 = (long)p_11;
  v_7 = (char)p_11;
  v_5 = (unsigned long)(-26937L % ((long)(! (! v_7)) / (1315L % (v_9 * 103L + 744L) + 595L) + 294L));
  v = (unsigned int)(~ v_5);
  result = (signed char)(~ (~ (! ((unsigned long)v + (unsigned long)p))));
  return result;
}


