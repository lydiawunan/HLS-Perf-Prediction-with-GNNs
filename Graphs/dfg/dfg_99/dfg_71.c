#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 640022936
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned int p_4,
                       unsigned long long p_7[2][2][3])
{
  unsigned long long v;
  unsigned long long result;
  v = p_7[0][0][2];
  result = v;
  v = result;
  result = p_7[1][0][2];
  result = ((unsigned long long)(p | 331674465UL) ^ (18446744073709551541ULL - 
                                                     (unsigned long long)p_4 / (
                                                     result + 837ULL))) * ! (
           18446744073709498056ULL ^ v * (unsigned long long)p_4);
  return result;
}


