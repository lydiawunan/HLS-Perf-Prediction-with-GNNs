#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1015179909
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, unsigned long long p_5[4][5][1],
                 unsigned char p_7, double p_9)
{
  long long v;
  unsigned int result;
  result = 321899123U;
  v = (long long)(! (~ ((unsigned long long)result * p_5[0][4][0])) % (
                  ((unsigned long long)(-228.967592818 / ((double)p_7 + 670.)) - 
                   ~ p_5[3][2][0] * (unsigned long long)(- p_9)) + 488ULL));
  v = v;
  v = v;
  result = (unsigned int)(- ((18446744072926578183ULL - (unsigned long long)(
                              (long long)p - v)) - 1ULL));
  return result;
}


