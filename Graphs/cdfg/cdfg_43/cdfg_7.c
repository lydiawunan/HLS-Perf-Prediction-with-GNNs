#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 552855468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, float p_9, unsigned long long p_13, signed char p_15)
{
  long long v_11;
  double v_7;
  signed char v_5;
  unsigned int v;
  long result;
  v_11 = -9268LL;
  result = (long)p_9;
  v = 236U;
  while (192L <= result) {
    v_5 = v;
    v_7 = (double)(p_13 / ((unsigned long long)((int)p_15 / -598) * - p_13 + 266ULL));
    v = (unsigned int)(- ((int)(p_9 / ((float)v_11 + 474.f)) - (int)v_5 / (
                                                               (int)((signed char)-6715448907.23) + 513)));
    result = (long)((double)p * ((double)v_5 + (double)p * v_7));
  }
  while_0_break: ;
  return result;
}


