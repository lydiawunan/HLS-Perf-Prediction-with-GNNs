#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 280888602
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, signed char p_9, long p_11, long long p_13)
{
  unsigned long long v_7;
  char v_5;
  unsigned long v;
  float result;
  v_5 = (char)(100ULL * (381524147ULL + (unsigned long long)(240 + (int)p_9)) + (
               (unsigned long long)p_11 - (unsigned long long)p_13 % (
                                          p + 895ULL)));
  v_7 = 53377ULL;
  v = (unsigned long)(! p);
  result = (float)(((p / (unsigned long long)(v + 290UL) ^ 3717654997ULL) - (
                    (unsigned long long)(! v) | ((unsigned long long)v_5 + v_7))) / 222ULL);
  return result;
}


