#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 841603888
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, float p_7)
{
  long v_5;
  long v;
  unsigned long result;
  v = -40449545L;
  result = 1005630034UL;
  v_5 = (long)(~ (~ p));
  while (((unsigned long)v + result) - (unsigned long)(((int)p - -15368) | 16867) != 4294967258UL) {
    v_5 += -86L;
    v = (long)(~ result);
    result = (unsigned long)((~ v & (long)(66.6172158007 / (double)(p_7 + 820.f))) * 4L);
    v = -23L;
  }
  while_0_break: ;
  return result;
}


