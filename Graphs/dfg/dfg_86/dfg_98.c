#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 788455372
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, short p_5)
{
  long v_9;
  double v_7;
  unsigned long v;
  float result;
  v_7 = 97.2038818718;
  v = 54941UL;
  v_9 = 501055126L;
  result = (float)(! ((v - (unsigned long)p_5) - 7693UL) - (unsigned long)(
                   (long)((int)((short)(- v_7)) / 194) % (~ v_9 + 1009L)));
  v = (unsigned long)p;
  result = - (- (((float)p * result) / ((float)((long long)v * 880709701LL) + 223.f)));
  return result;
}


