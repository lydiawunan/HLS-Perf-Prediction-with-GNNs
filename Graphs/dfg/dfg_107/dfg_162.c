#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 517473984
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, int p_7, unsigned int p_9, long p_11, long long p_13[1])
{
  unsigned long v_4;
  unsigned int v;
  int result;
  v = (unsigned int)((long long)((unsigned long)((int)(- p) * p_7) - (
                                 (unsigned long)p_9 + (unsigned long)p_11)) / (
                     ! (! (p_13[0] << 11)) + 746LL));
  v_4 = (unsigned long)(-(short)8675);
  result = (int)(~ ((unsigned long)(- (v + 91U)) / (~ (v_4 - (unsigned long)v) + 15UL)));
  return result;
}


