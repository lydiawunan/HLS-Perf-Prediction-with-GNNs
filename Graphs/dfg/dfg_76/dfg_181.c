#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 641368320
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, unsigned short p_9)
{
  unsigned int v_11;
  long v_6;
  double v_4;
  long v;
  unsigned long long result;
  v_11 = (unsigned int)p_9;
  v_6 = -20882L;
  v = 257293163L;
  v_4 = (double)v_11;
  v = (long)((long long)((long)v_4 + ~ (~ v)) / (((long long)(- v_6) % (
                                                  - p + 496LL) + - ((long long)p_9 * p)) + 45LL));
  result = (unsigned long long)v;
  result = result;
  return result;
}


