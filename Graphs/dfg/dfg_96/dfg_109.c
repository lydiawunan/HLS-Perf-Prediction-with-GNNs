#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 877254161
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned long p_7)
{
  unsigned long v_5;
  double v;
  double result;
  v_5 = (unsigned long)(-283772603LL);
  result = (double)p_7;
  v = (double)(~ ((unsigned long)((int)(- p) / ((int)(~ p) + 335)) / (
                  v_5 + 538UL)));
  result = (double)((long long)(- (- v * (double)((int)p / -218069427))) * (
                    (long long)((int)result - 22 / ((int)p + 417)) / 92211336LL));
  return result;
}


