#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402245974
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, unsigned char p_5, float p_7, long p_9,
          unsigned int p_11)
{
  double v;
  float result;
  v = (double)(- (- -2.63036384015e+38f));
  result = (float)((unsigned long)((long)p_7 * (((long)p_5 + p_9) & (long)(! p))) / (unsigned long)(
                   p_11 + 1013U));
  result = (float)0L;
  return result;
}


