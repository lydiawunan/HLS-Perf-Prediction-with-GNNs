#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 941175719
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, short p_5, unsigned long long p_7,
                  unsigned int p_9, long p_11)
{
  unsigned long long v;
  unsigned char result;
  result = (unsigned char)p;
  v = (~ p_7 & (unsigned long long)result) % (unsigned long long)(((unsigned long)result - (
                                                                   (unsigned long)p_9 % 4294937226UL - (unsigned long)(~ p_11))) + 463UL);
  result = (unsigned char)(~ ((long long)((int)((short)(p * (float)v)) + (int)p_5) * (
                              (long long)((int)((signed char)p) - 73) - -949595584LL)));
  return result;
}


