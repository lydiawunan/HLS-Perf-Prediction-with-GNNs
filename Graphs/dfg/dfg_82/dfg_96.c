#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 341393960
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, int p_9[5][5][2])
{
  long v_11;
  short v_7;
  unsigned long long v_5;
  unsigned int v;
  unsigned long result;
  v_11 = -7324L;
  v = (unsigned int)p_9[4][0][1];
  result = (unsigned long)p;
  v_5 = (unsigned long long)(~ (~ (unsigned char)124));
  v_7 = (short)(v_5 >> (v_11 & 63L));
  v_7 = (short)((long long)(11051932UL | (unsigned long)((int)v_7 - 56) % (
                                         (result >> 8LL) + 728UL)) - ~ (
                (-424553840LL / (long long)(result + 544UL)) / 936621267LL));
  result = (unsigned long)((float)((unsigned long long)(~ v) - ((unsigned long long)p & 18446744072642195367ULL) % (
                                                               (v_5 - 162ULL) + 583ULL)) * (
                           (float)((int)v_7 + - p_9[0][1][1]) / 6.97521972656f));
  return result;
}


