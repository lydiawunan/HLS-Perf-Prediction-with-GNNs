#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 2808973
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, unsigned long long p_7, float p_11[1],
                 char p_15)
{
  char v_13;
  unsigned long v_9;
  double v_5;
  double v;
  unsigned int result;
  v_13 = (char)p_7;
  v = -1.26724930347e+38;
  v_9 = (unsigned long)(v - (double)p_15);
  v_5 = (double)((p_7 - (4294911068ULL | (unsigned long long)v_9 * p)) ^ (unsigned long long)(
                 (0 % ((long)p_11[0] + 829L)) % (long)((int)v_13 + 470)));
  v = v_5;
  result = (unsigned int)(- (v - (double)(-2929223424.f / ((float)p + 906.f))));
  return result;
}


