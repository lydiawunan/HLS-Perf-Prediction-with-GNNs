#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1008614091
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, signed char p_4, char p_6,
                       unsigned int p_11, unsigned char p_13)
{
  float v_9;
  char v;
  unsigned long long result;
  v_9 = (float)((unsigned long)(~ p_13) - 4294955680UL);
  v = (char)(- (! (~ p_11 - (unsigned int)((int)p_6 - 5))));
  result = (unsigned long long)(- ((float)((631520014 / ((int)v + 938)) * (int)(~ p_4)) + 
                                   (float)(- v) / (v_9 + 493.f)));
  result = (unsigned long long)((p + (unsigned long)(- ((int)p_4 << (
                                                        result & 7ULL)))) << (
                                - (-457593844LL / ((long long)-1.42542762175e+38 + 906LL) + (long long)(
                                   (int)p_6 * (int)v)) & 31LL));
  return result;
}


