#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 855781300
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, int p_4[5][1][4], double p_6, long long p_11,
                float p_15)
{
  long long v_17;
  unsigned long long v_13;
  unsigned char v_9;
  unsigned int v;
  signed char result;
  v_17 = (long long)p_4[4][0][1];
  v_13 = 18446744072723204574ULL;
  v_9 = (unsigned char)((float)v_13 / (- (p_15 / ((float)(v_17 / -17476LL) + 590.f)) + 108.f));
  v = (unsigned int)((long long)(! (! v_9)) - ! (0LL - ~ p_11));
  result = (signed char)v;
  result = (signed char)((double)((unsigned long long)((int)((unsigned char)2.95305474588e+38f) - 12) + 
                                  802899036ULL * (unsigned long long)(- result)) * (
                         (double)(~ (p / (long long)(p_4[3][0][1] + 86))) + p_6));
  return result;
}


