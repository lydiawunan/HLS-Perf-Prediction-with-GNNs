#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 273720297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p[3], unsigned long p_9)
{
  signed char v_7;
  unsigned int v_4;
  unsigned short v;
  unsigned int result;
  v = (unsigned short)(-445131599LL / (long long)(0UL % ((4294967243UL - p_9) + 474UL) + 516UL));
  v_4 = 4294916977U;
  v_7 = (signed char)(! ((int)(~ (! v)) / 15375));
  result = (unsigned int)(- ((unsigned long long)((unsigned int)v & (
                                                  v_4 + (unsigned int)p[0])) ^ 
                             (unsigned long long)(~ v_7) * 62723ULL));
  return result;
}


