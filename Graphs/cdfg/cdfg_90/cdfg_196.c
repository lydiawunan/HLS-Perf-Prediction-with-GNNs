#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 214833667
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned int p_4, long long p_6,
                  signed char p_8, long long p_10)
{
  unsigned short v;
  unsigned long result;
  v = (unsigned short)p_10;
  result = 4294938384UL;
  if ((p_10 - (long long)result) % (((-118LL - p_10) + (long long)((int)p_8 & (int)v)) + 731LL) != (long long)v) 
    result = 188314094UL;
  else {
    result = (unsigned long)(~ (! (473315423L ^ (long)p_8)));
    result = (unsigned long)(~ (64445LL % ((long long)result * p_6 + 845LL)));
  }
  result = (99UL - result) / ((unsigned long)1.64319614404e+47 + 546UL) - (unsigned long)(~ (
           (unsigned int)p * p_4));
  return result;
}


