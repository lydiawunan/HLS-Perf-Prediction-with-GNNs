#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 372552368
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, unsigned long long p_7, signed char p_9[5],
          int p_11)
{
  double v_21;
  char v_19;
  char v_17;
  char v_15;
  unsigned int v_13;
  unsigned long v_4;
  int v;
  float result;
  v_21 = (double)p_7;
  v_19 = (char)-21;
  v_17 = (char)p_11;
  v_4 = (unsigned long)p_9[2];
  result = (float)p_11;
  v_13 = (unsigned int)((unsigned long long)(((unsigned int)result ^ 4294948321U) % (unsigned int)(
                                             (int)v_19 + 459)) % (0ULL / (
                                                                  ((unsigned long long)(
                                                                   7201LL % (
                                                                   (long long)v_21 + 352LL)) & 63106ULL) + 751ULL) + 562ULL));
  v_15 = ~ v_17;
  v = (int)(! (((unsigned int)p_11 + v_13) - (unsigned int)(~ v_15)) + (unsigned int)p_9[4]);
  result = (float)((unsigned long long)v % (((unsigned long long)v_4 * (
                                             (unsigned long long)p * p_7) | (unsigned long long)p_9[3]) + 280ULL));
  return result;
}


