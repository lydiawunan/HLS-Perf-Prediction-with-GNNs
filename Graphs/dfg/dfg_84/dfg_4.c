#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 275328950
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, signed char p_5, unsigned short p_7,
                 long long p_9, long p_11)
{
  unsigned char v;
  unsigned int result;
  v = (unsigned char)p_11;
  result = (unsigned int)((long long)((4294913584UL + (unsigned long)(~ p)) & (unsigned long)(~ v)) - (
                          (long long)p_5 - ((long long)(15768 / ((int)p_5 + 963)) - (
                                            (long long)p_7 ^ p_9))));
  return result;
}


