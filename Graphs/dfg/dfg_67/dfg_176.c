#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 221093383
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p[4], short p_7, float p_9)
{
  unsigned long v_5;
  float v;
  int result;
  v_5 = (unsigned long)(- p_9);
  v = (float)(-32. / ((14739. + -456.135192871 * p[3]) + 701.) + (144.565044633 + (double)(
                                                                  ~ v_5 - (unsigned long)(~ p_7))));
  result = (int)(- (0. + p[1] * (double)v) * 42581.);
  return result;
}


