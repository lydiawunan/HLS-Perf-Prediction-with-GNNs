#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 45933397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p[3][1], double p_7, unsigned long p_15, long p_17[5])
{
  long long v_19;
  double v_13;
  unsigned long v_11;
  int v_9;
  unsigned long long v_5;
  unsigned long v;
  unsigned int result;
  v_19 = 23426LL;
  v_9 = (int)p_7;
  v = (unsigned long)p[1][0];
  if ((((unsigned long long)-3207897856.f >> 3ULL) + (unsigned long long)(
       p_17[2] % 58123L)) + (unsigned long long)(p_17[3] - 15639L) <= (unsigned long long)v_19) {
    v_5 = (unsigned long long)v_9;
    v_5 = v_5;
    v = (unsigned long)((double)(~ v_5) + p_7);
  }
  else {
    v_13 = - ((p_7 * (double)p_15) * (double)(! p[2][0]));
    v_11 = (unsigned long)((float)p[1][0] + 1.32208483536e+38f) % 343UL + (unsigned long)v_9;
    v_5 = (unsigned long long)((double)((unsigned long)(139 - (int)((unsigned char)-2.85882287368e+38f)) - (
                                        v_11 + 3982UL)) + - (v_13 / 1062221329.));
  }
  if ((unsigned long long)v < v_5) {
    v = 54844UL;
    result = (unsigned int)(- ((unsigned long)p[2][0] + v) & (unsigned long)p[2][0]);
  }
  else result = (unsigned int)((unsigned long long)p[0][0] - (31835ULL << 39) % (unsigned long long)(
                                                             ~ p[1][0] + 979L));
  return result;
}


