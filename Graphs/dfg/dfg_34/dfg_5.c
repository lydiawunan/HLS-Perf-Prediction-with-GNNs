#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 310787285
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned short p_7, unsigned int p_9,
                       unsigned char p_13)
{
  long long v_11;
  unsigned int v_5;
  unsigned short v;
  unsigned long long result;
  result = (unsigned long long)p;
  v_11 = (long long)p_7;
  v_5 = (unsigned int)((! ((unsigned long long)p_9 % 18446744073709528063ULL) << (
                        ! v_11 & 63LL)) * (unsigned long long)((int)p_13 - 22850));
  v = (unsigned short)0;
  result = (unsigned long long)(~ p % (unsigned long)((int)(! v) + 157));
  return result;
}


