#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164943861
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, float p_4[1][3], int p_6, unsigned int p_8,
              short p_10)
{
  char v;
  long long result;
  v = (char)p_4[0][0];
  if (p_8 - (unsigned int)p_10 < (unsigned int)v) result = (long long)(
                                                           (float)((unsigned long long)p - 1024439955ULL) - -48.2813072205f) - (
                                                           (long long)(
                                                           p_4[0][0] + (float)p_6) - 462065944LL);
  else result = (long long)p_4[0][2];
  result = result;
  return result;
}


