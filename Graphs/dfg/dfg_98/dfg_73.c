#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 980804944
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p)
{
  unsigned long v_7;
  double v_4;
  unsigned long v;
  char result;
  v_7 = 3728683159UL;
  v_4 = (double)(38UL & v_7);
  v = (unsigned long)((long long)v_4 / (! ((long long)p % -50904LL) % (long long)(
                                        1 % (((int)p - 189) + 484) + 562) + 365LL));
  result = (char)(~ (~ v));
  result = (char)((int)(~ result) - (int)result);
  return result;
}


