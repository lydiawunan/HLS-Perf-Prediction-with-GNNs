#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1072576371
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p[5][1], int p_7, signed char p_9, float p_11,
                  unsigned long long p_15)
{
  double v_19;
  double v_17;
  unsigned long long v_13;
  unsigned long long v_5;
  long v;
  unsigned char result;
  v_19 = (double)p[4][0];
  v_17 = 4821452071.02;
  v_13 = (unsigned long long)((~ ((unsigned int)p_7 + 4294915690U) % (
                               (unsigned int)p_11 + 141U)) / 5U);
  v_5 = - (((5552ULL * v_13) % ((p_15 + 18446744073342908106ULL) + 753ULL)) / (
           (unsigned long long)(- v_17) + 153ULL));
  v = (long)(((double)(~ v_5 & (unsigned long long)p_7) + -111.375640491 * (double)p_9) + (double)(- p_11));
  result = (unsigned char)(v * (long)p[1][0]);
  return result;
}


