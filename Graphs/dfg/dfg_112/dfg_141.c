#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1060670806
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, signed char p_5)
{
  short v_7;
  long long v;
  char result;
  v = -14742LL;
  v_7 = ~ p;
  result = (char)p;
  v = - (! (v / (long long)((int)p_5 + 974))) % (long long)(! (~ ((int)v_7 - (int)v_7)) + 470);
  result = (char)((unsigned long long)(- ((long)result | 13408L) + (long)p) * ! (
                  18446744072812522496ULL / (unsigned long long)(v / (
                                                                 v + 847LL) + 832LL)));
  return result;
}


