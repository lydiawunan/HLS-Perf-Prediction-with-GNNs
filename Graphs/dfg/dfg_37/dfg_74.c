#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 275758632
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p)
{
  long v_6;
  signed char v_4;
  unsigned long v;
  int result;
  v_6 = 46656L;
  v = (unsigned long)((unsigned int)(~ (! (189 % (p + 379)))) ^ (649U >> 19LL));
  v_4 = (signed char)((long)-7242869248.f | ! v_6);
  v = - v;
  result = 0;
  return result;
}


