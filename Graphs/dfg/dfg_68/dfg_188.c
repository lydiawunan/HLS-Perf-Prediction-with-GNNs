#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 676553882
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, float p_7[1], unsigned int p_9)
{
  unsigned long v_5;
  double v;
  long long result;
  result = (long long)((8UL % (unsigned long)(p_9 + 419U)) / ((unsigned long)p + 268UL));
  v_5 = (unsigned long)(- result / (long long)((-1291456000 - (int)((char)(- p_7[0])) / 46) + 642));
  v = (double)v_5;
  result = (long long)(- (! (22459L - (long)v)) + (long)p);
  return result;
}


