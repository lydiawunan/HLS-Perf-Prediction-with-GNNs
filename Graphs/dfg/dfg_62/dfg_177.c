#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 255053158
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, char p_5, double p_7, signed char p_9,
                  unsigned long long p_11)
{
  long v;
  unsigned char result;
  v = (long)p_9;
  result = (unsigned char)((unsigned long long)(~ ((int)((signed char)(
                                                   p_7 - 56.)) / ((int)(- p_9) + 33))) & (
                           p_11 + (unsigned long long)(~ v) / 18446744073709524795ULL));
  result = (unsigned char)(! ((unsigned long long)((double)(p * (long long)v) * (
                                                   2381984043. + (double)p_5)) + - (
                              (unsigned long long)result * 566663379ULL)));
  return result;
}


