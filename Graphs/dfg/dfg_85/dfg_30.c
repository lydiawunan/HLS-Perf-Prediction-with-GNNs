#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 456547299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p)
{
  long v;
  unsigned int result;
  result = 3319588756U;
  v = -35649L;
  result = (unsigned int)(151962210. - ((double)((unsigned long)(result + 2230U) * (unsigned long)(
                                                 v + -851397330L)) + 
                                        (double)(- p) * 5.24204555423e+37));
  return result;
}


