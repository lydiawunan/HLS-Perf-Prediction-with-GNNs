#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1026248471
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, short p_7, float p_9[3][3][5], long p_13,
        unsigned long long p_19)
{
  signed char v_17;
  int v_15;
  unsigned long long v_11;
  long v_5;
  char v;
  int result;
  v_17 = (signed char)p;
  v_11 = 48278ULL;
  v = (char)69;
  v_15 = (int)v;
  v_5 = (long)((unsigned long long)p * ((unsigned long long)((int)p_7 * (int)((short)(
                                                             p_9[1][1][4] * (float)v_11))) + 
                                        (unsigned long long)(p_13 ^ (long)v_15) / (
                                        (unsigned long long)v_17 * p_19 + 980ULL)));
  v = (char)v_5;
  result = (int)((float)((unsigned long)((long)v % 796L & (long)(13068 * (int)v)) % (
                         (unsigned long)(- p) * 51005UL + 33UL)) * p);
  return result;
}


