#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 71217680
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, long p_5, signed char p_7[5][2],
                 long long p_9, unsigned long p_13)
{
  long v_19;
  int v_17;
  unsigned short v_15;
  float v_11;
  unsigned long v;
  unsigned int result;
  v_19 = 242841460L;
  v_15 = (unsigned short)p_7[2][0];
  v_11 = 674.69342041f;
  v = 759501505UL;
  v_17 = (int)(v_19 % 23L);
  v_11 = (float)(((p_13 - v) ^ (unsigned long)v_15) % ((4294940850UL / (
                                                        (unsigned long)v_11 + 728UL) - (unsigned long)(~ p_7[4][0])) + 152UL) - (unsigned long)(- v_17));
  v = (unsigned long)((float)((long long)p_5 - 0LL % ((long long)p_7[3][1] * p_9 + 534LL)) - v_11);
  result = (unsigned int)(0UL / ((unsigned long)(- ((unsigned int)p | 4294913668U)) / (
                                 v + 510UL) + 1009UL));
  return result;
}


