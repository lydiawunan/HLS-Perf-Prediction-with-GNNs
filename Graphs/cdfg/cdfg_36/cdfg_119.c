#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 693744487
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, double p_9)
{
  unsigned short v_7;
  double v_5;
  unsigned short v;
  unsigned short result;
  v_7 = (unsigned short)p_9;
  v_5 = -1.3948326656e+38;
  result = (unsigned short)p_9;
  v = result;
  while (! ((long long)v % 430LL) + (long long)(39504L % (long)((int)p + 395) | (long)(- v_5)) <= -70LL) {
    v_5 = (int)v_7 * 844979861;
    v_7 = (unsigned short)(- (p_9 * -935.76733553) / ((double)(- (18446744073709532354ULL + (unsigned long long)result)) + 322.));
    result = (unsigned short)(165857360U << 30);
    v = (unsigned short)(-4);
  }
  while_0_break: ;
  return result;
}


