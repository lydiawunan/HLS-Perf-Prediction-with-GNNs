#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 862178335
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(void)
{
  double v_4;
  unsigned int v;
  char result;
  v_4 = 2261613193.95;
  v = (unsigned int)v_4;
  result = (char)(- v);
  return result;
}


