#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981547250
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, unsigned char p_13[5], signed char p_17)
{
  unsigned int v_15;
  signed char v_11;
  unsigned int v_9;
  unsigned long long v_6;
  signed char v_4;
  long long v;
  double result;
  v_15 = 3668965314U;
  v_9 = 4294915169U;
  v_6 = 18446744073709509557ULL;
  v = -155939211LL;
  v_4 = (signed char)(- (6.84985763227e+37 - (double)v_15) * (double)(
                      59102 << 15) - (double)(p * (unsigned int)((int)(- p_13[4]) % (
                                                                 ((int)p_17 + 875828934) + 710))));
  v_11 = (signed char)(- ((unsigned long long)(~ (~ v_15)) & (18446744073639842967ULL | (unsigned long long)(
                                                              v + 316602587LL))));
  v = (long long)(((unsigned long long)(~ v_4) % (v_6 * (unsigned long long)p + 803ULL) & (unsigned long long)(~ v_9)) % (
                  - (v_6 % (unsigned long long)((int)v_11 + 446) + (unsigned long long)(
                     (int)p_13[0] % 26876)) + 392ULL));
  result = (double)v;
  return result;
}


