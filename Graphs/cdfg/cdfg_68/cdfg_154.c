#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 928470675
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, unsigned long long p_7)
{
  long v_4;
  long long v;
  double result;
  v = -53412LL;
  v_4 = (long)(- (! p_7));
  result = (double)((v - (long long)((unsigned long)v_4 % 60179UL)) + (long long)(
                    16219UL + ((unsigned long)7.38584655601e+37f >> (
                               p & 31UL))));
  return result;
}


