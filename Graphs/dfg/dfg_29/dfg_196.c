#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 56450022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned short p_5, int p_7,
                   unsigned short p_9, float p_11)
{
  char v;
  unsigned short result;
  v = (char)((56101614LL + -308959565LL * (long long)(~ p_7)) + - (0 - (long long)(~ p)));
  result = (unsigned short)((unsigned long long)p_7 * 25056ULL + (unsigned long long)(
                            (((unsigned int)p_5 % 14058U) / (unsigned int)(
                             ((int)p_9 - (int)v) + 570)) * (unsigned int)(
                            (p_7 + (int)p_9) * (int)p_11)));
  result = (unsigned short)((76 & ((int)(~ p) - ((int)result | (int)v))) * (int)p_5);
  return result;
}


