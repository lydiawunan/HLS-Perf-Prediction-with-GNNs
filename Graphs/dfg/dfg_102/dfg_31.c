#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 20518311
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned int p_4, double p_6, float p_9)
{
  int v;
  unsigned long result;
  v = (int)(- (- (- p_9)));
  result = (unsigned long)((((unsigned int)(-19 + (int)p) % ((unsigned int)p % (
                                                             p_4 + 942U) + 830U)) % (
                            (unsigned int)p_6 + 423U)) % (unsigned int)(
                           v + 265));
  return result;
}


