#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 443929729
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, unsigned long long p_7, short p_13)
{
  unsigned int v_15;
  signed char v_11;
  unsigned short v_9;
  long v_5;
  char v;
  int result;
  v_15 = (unsigned int)p;
  v_11 = (signed char)p_7;
  v_9 = (unsigned short)v_11;
  v_5 = (long)(0ULL % (unsigned long long)(p + 1005UL) - (unsigned long long)(- (
               (unsigned long)((int)v_11 ^ (int)p_13) + 7455UL % (unsigned long)(
                                                        v_15 + 45U))));
  v = (char)(! (p % 376UL) | (unsigned long)v_5);
  result = (int)(37869ULL / (unsigned long long)((unsigned int)(- (- v)) % 4294950653U + 368U));
  return result;
}


