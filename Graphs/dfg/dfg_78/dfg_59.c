#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 208122406
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(void)
{
  long v_6;
  unsigned long long v_4;
  short v;
  long result;
  v_6 = 14257L;
  v_4 = (unsigned long long)v_6;
  v = (short)(18446744072829710650ULL % (v_4 + 765ULL));
  result = (long)(! (! (~ ((int)v / -9))));
  return result;
}


