#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 997125848
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, unsigned long p_7, unsigned char p_9)
{
  int v_5;
  unsigned short v;
  unsigned long result;
  v_5 = (int)p_9;
  v = (unsigned short)51341;
  result = p;
  result = (unsigned long)(((43383LL * (long long)v_5) % (long long)(
                            p_7 + 21UL)) / (long long)((int)v + 102) ^ ~ (
                           ((long long)result ^ -328349620LL) ^ (long long)p_9));
  v = (unsigned short)(- (- ((result - p) * p)));
  result = ! p;
  result = (result / (unsigned long)((int)v + 992) + p) + ~ result / (unsigned long)(
                                                          (int)(! v) + 66);
  return result;
}


