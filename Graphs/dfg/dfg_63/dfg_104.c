#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 559059048
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p)
{
  long v_7;
  double v_5;
  unsigned int v;
  unsigned long result;
  v_5 = (double)p;
  v_7 = 22L;
  v = (unsigned int)p;
  v_5 = (double)(- (- (~ v_7 * (long)(- v_5))));
  result = (unsigned long)(~ ((unsigned int)(~ p) + v) * (unsigned int)(
                           (int)p / (((int)p - (int)((unsigned char)v_5)) + 81)));
  return result;
}


