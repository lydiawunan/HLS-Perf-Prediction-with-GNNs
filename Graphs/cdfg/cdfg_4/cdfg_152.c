#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 986257817
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p)
{
  unsigned int v;
  double result;
  v = 0U;
  result = (double)((unsigned int)(- (-899.688476562f + (float)v)) % (
                    ! (! p) + 351U));
  return result;
}


