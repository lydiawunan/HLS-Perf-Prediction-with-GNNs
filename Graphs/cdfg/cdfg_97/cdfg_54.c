#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1002836314
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned long long p_5, char p_9, double p_11,
          unsigned int p_13)
{
  unsigned long v_7;
  float v;
  float result;
  v_7 = (unsigned long)p;
  if (~ (p_5 * (unsigned long long)v_7) + (unsigned long long)((int)(! p_9) * (int)((char)(
                                                               p_11 / -5089321497.61))) >= (unsigned long long)(~ (~ (
      (long long)p_13 + p)))) v = (float)(- p);
  else v = (float)p;
  result = - v;
  return result;
}


