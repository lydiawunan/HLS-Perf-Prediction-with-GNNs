#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 526080440
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, float p_4, int p_6, short p_11[4][3])
{
  double v_13;
  unsigned short v_9;
  unsigned short v;
  unsigned long result;
  v_13 = (double)p;
  v = (unsigned short)6351;
  v = (unsigned short)((-114 - (int)((double)((int)p_11[0][1] / ((int)v + 987)) * (
                                     v_13 * 97.))) * -128);
  v_9 = (unsigned short)(! -15174LL);
  result = (unsigned long)(~ (! ((unsigned long long)p_4 ^ 55726ULL) + (unsigned long long)(
                              (25 / (p_6 + 780)) % (((int)v - (int)v_9) + 8))));
  result = (unsigned long)((double)result + - ((double)result + 597.494568869) * (double)p);
  return result;
}


