#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1072723219
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, long p_11)
{
  unsigned long v_13;
  short v_9;
  long v_7;
  short v_4;
  signed char v;
  unsigned int result;
  v_13 = 4294959145UL;
  v_7 = p_11;
  v_9 = (short)v_13;
  if ((long long)v_7 != (-464116845LL & (long long)((long)v_9 / (p_11 + 928L)))) {
    v = (signed char)(~ (! 18446744073709520371ULL));
    result = (unsigned int)v;
  }
  else {
    v_4 = (short)(! p);
    result = (unsigned int)(- v_4);
  }
  return result;
}


