#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 414438060
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned long long p_4, char p_9)
{
  unsigned long long v_11;
  int v_7;
  unsigned long v;
  float result;
  v_11 = p_4;
  v_7 = (int)(~ v_11);
  result = (float)(- (~ (- p_9)));
  v = (unsigned long)v_7;
  result = (float)(((((unsigned long long)p ^ 63217ULL) & ~ p_4) - (unsigned long long)(~ v)) + (unsigned long long)(
                   ((double)(664677376.f / (result + 963.f)) + (double)p / 1.56183362356e+38) - (double)(
                   (int)((signed char)result) + 55)));
  return result;
}


