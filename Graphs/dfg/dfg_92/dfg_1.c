#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487647538
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, unsigned int p_7, double p_11, float p_15)
{
  signed char v_13;
  long v_9;
  long v_4;
  unsigned int v;
  float result;
  v_13 = (signed char)-115;
  v_9 = (long)((long long)((int)(- v_13) + (int)v_13) / (((long long)(- p_15) + -476131708LL) + 989LL));
  v_4 = (long)p_11;
  v = (unsigned int)(~ ((unsigned long)p_7 - (unsigned long)v_9));
  result = (float)(- ((unsigned long)v + (unsigned long)(- v_4)) % ((unsigned long)(- (
                                                                    p / (
                                                                    (float)p_7 + 997.f) + (float)v_4)) + 244UL));
  return result;
}


