#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 17169450
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, signed char p_5[4])
{
  unsigned long v;
  long result;
  v = (unsigned long)p_5[0];
  if ((unsigned long long)(~ (- (17245UL % (v + 405UL)))) >= 1182300168ULL) 
    result = ! (p * (32647L + p));
  else result = - (~ (p >> 9L));
  return result;
}


