#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 19268166
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p[3], char p_4, char p_7, signed char p_9,
          unsigned long p_11)
{
  unsigned char v;
  short result;
  v = (unsigned char)((long long)(((long)p_7 - 58768L) * (long)p_9) / -95574LL - (long long)(~ (
                      ! p_11 / (unsigned long)(87 % ((int)p_4 + 7) + 332))));
  result = (short)v;
  result = (short)(! ((unsigned long)((long)result + 38958L) + (unsigned long)(
                      (3856990925U & (unsigned int)p[0]) * (unsigned int)(! p_4))));
  return result;
}


