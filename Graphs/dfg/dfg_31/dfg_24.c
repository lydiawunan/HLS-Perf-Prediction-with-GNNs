#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 145488731
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, double p_5, char p_7, char p_11)
{
  int v_9;
  unsigned int v;
  unsigned int result;
  v = (unsigned int)p_7;
  result = 3249508290U;
  v_9 = (int)(- (- ((unsigned int)(-113 - (int)((signed char)p_5)) / (
                    (4294957080U | v) + 278U))));
  v = (unsigned int)((float)((unsigned int)p_7 & (result ^ (unsigned int)(
                                                  v_9 + (int)p_11))) + -4002392832.f);
  result = (unsigned int)((double)(- (-379.680847168f / ((float)((unsigned long)v & (unsigned long)p) + 480.f))) / (
                          p_5 + 204.));
  return result;
}


