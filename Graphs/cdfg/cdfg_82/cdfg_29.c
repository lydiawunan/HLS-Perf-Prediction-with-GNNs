#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 930158506
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p)
{
  unsigned short v_5;
  unsigned int v;
  unsigned long result;
  v = (unsigned int)p;
  v_5 = (unsigned short)(! ((53LL - p) << 61));
  result = (unsigned long)((unsigned long long)(- (20476U % (v + 513U))) ^ 
                           (unsigned long long)(p - (long long)v_5) % 18446730909042250726ULL);
  return result;
}


