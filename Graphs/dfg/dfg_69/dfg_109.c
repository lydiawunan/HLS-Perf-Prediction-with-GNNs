#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 196965163
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p[1][2][4], unsigned long long p_4, unsigned char p_6,
         char p_9, long long p_11)
{
  unsigned int v_17;
  unsigned long long v_15;
  short v_13;
  unsigned long v;
  long result;
  v_17 = 958167896U;
  v_15 = (unsigned long long)p[0][0][2];
  v = (unsigned long)p_11;
  v_13 = (short)((unsigned long long)((unsigned long)(- v_17) % (~ v + 476UL)) * p_4);
  result = (long)((unsigned long long)(1LL + ((long long)p_9 ^ p_11) / (long long)(
                                             (54 - (int)v_13) + 785)) + ~ (
                  18446744072916427751ULL ^ v_15));
  v = (unsigned long)result;
  result = (long)(((unsigned long long)((unsigned long)p[0][0][2] + 4294946797UL) % (
                   p_4 + 510ULL)) * (unsigned long long)((-5L ^ result) >> (
                                                         (int)p_6 & 31)) + (unsigned long long)(
                  v / ((unsigned long)(p[0][0][0] / 13L) + 471UL)));
  return result;
}


