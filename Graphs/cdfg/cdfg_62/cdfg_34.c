#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106136021
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned int p_7)
{
  long long v_9;
  unsigned int v_5;
  unsigned int v;
  double result;
  v_9 = (long long)p_7;
  v_5 = 305354290U;
  result = (double)(! (253LL * (18979LL % (p + 228LL))));
  if ((long long)(-2295594240.f / ((float)(- v_9) + 212.f)) == (43075LL - p) % (long long)(
                                                               ((unsigned long)p_7 - 50336UL) + 390UL) + (long long)1.33572571397e+38) {
    v = v_5;
    result = (double)(- (~ v)) + - result;
    result = (double)((long long)(- result) / ((97LL ^ (p - (long long)v)) + 1021LL));
  }
  else result = (double)(~ (~ (- p_7)));
  return result;
}


