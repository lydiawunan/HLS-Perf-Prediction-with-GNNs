#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1069638050
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned char p_4, unsigned int p_11)
{
  float v_9;
  long long v_7;
  signed char v;
  unsigned long long result;
  v_9 = (float)p_11;
  v_7 = (long long)((192956062UL + (unsigned long)v_9) + (unsigned long)(
                    - (-250.338104248f - (float)p_11) + -5825893376.f));
  v = (signed char)(- (- ((long long)(42 - (int)p_4) / (~ v_7 + 693LL))));
  result = (unsigned long long)(! (3305163650U + (unsigned int)(! ((int)p_4 % (
                                                                   (int)v + 972)))));
  result = - ((unsigned long long)(~ p) - ((unsigned long long)(p * (unsigned long)-5642500608.f) - - result));
  return result;
}


