#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 96790045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p[2], signed char p_4)
{
  unsigned long v_7;
  unsigned int v;
  long result;
  v_7 = (unsigned long)p[1];
  result = -89959772L;
  v_7 = v_7;
  v = 0U;
  result = (long)((unsigned long)result / (unsigned long)(((unsigned int)(
                                                           330 % ((int)p[1] % (
                                                                  (int)p_4 + 239) + 249)) - ~ (! v)) + 408U));
  return result;
}


