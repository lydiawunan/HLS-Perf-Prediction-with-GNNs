#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 557788460
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, unsigned char p_5[5], long long p_7,
                       double p_9)
{
  unsigned short v;
  unsigned long long result;
  v = (unsigned short)(- (- (- (p_9 / (p_9 + 226.)))));
  v = (unsigned short)(- (- (p_9 * (double)v)) + 8633964544.);
  result = (unsigned long long)(~ (~ p_7));
  result += (unsigned long long)(! (((long)v % -22212L) * (p | (long)p_5[3])));
  return result;
}


