#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 170667444
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, float p_7, long long p_9)
{
  unsigned long v_11;
  float v_4;
  unsigned int v;
  int result;
  v_11 = 91UL;
  v_4 = (float)(! ((unsigned long)(((float)p / (p_7 + 205.f)) / (((float)p_9 + -2.06795736638e+38f) + 55.f)) / (
                   (83UL - (v_11 - v_11)) + 568UL)));
  v = (unsigned int)(65149 ^ (int)(- (- v_4 / 7854057984.f)));
  result = (int)(- (- v));
  return result;
}


