#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 5630464
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, double p_5, long long p_7,
                   double p_9)
{
  long long v_11;
  long v;
  unsigned short result;
  v_11 = -198695524LL;
  v = (long)v_11;
  result = (unsigned short)-8779915264.f;
  result = (unsigned short)(((((unsigned long long)v + p) | 775ULL) + (unsigned long long)(
                             ((double)result * p_5) / ((double)(18446744073364885921ULL * (unsigned long long)p_7) + 414.))) << (
                            (unsigned long long)p_9 & 63ULL));
  return result;
}


