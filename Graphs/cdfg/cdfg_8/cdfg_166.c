#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 531364186
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned long long p_4)
{
  unsigned char v;
  double result;
  v = (unsigned char)(~ (942347380 + (int)1.74711216567e+38));
  if ((unsigned long long)v >= 18446744073521769031ULL) result = (double)(char)-58;
  else result = (double)(~ (~ p % (! p_4 + 768ULL)));
  return result;
}


