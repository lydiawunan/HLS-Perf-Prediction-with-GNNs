#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 341552480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, short p_4, unsigned long long p_6, char p_8,
                  signed char p_10)
{
  unsigned long result;
  result = (unsigned long)(! p_4);
  result = (unsigned long)((unsigned long long)((result + (unsigned long)(
                                                 (int)p_4 + (int)((short)-3.07928516158e+38f))) - (unsigned long)(
                                                -2691 % ((int)(~ p) + 950))) / (
                           ((46498ULL - p_6) % 129ULL - (unsigned long long)(
                            ((unsigned long)p_8 % (result + 268UL)) * (unsigned long)p_10)) + 903ULL));
  result = - (! (result - 3294930840UL)) % (unsigned long)(- (- ((int)p - 54)) + 148);
  return result;
}


