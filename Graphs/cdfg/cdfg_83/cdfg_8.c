#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1021730341
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, char p_5, unsigned int p_7)
{
  unsigned long v_11;
  long v_9;
  char v;
  char result;
  v_11 = 4294932857UL;
  v = (char)29;
  v_9 = (long)(- (- ((double)v_11 + -215.613210999)));
  result = (char)((unsigned long)((int)v | (int)p) + (unsigned long)(
                                                     (unsigned int)p_5 % (
                                                     p_7 + 401U)) / (unsigned long)(
                                                     (43830L | v_9) + 616L));
  return result;
}


