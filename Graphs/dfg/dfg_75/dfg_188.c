#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 989199342
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, float p_9)
{
  unsigned long v_6;
  signed char v_4;
  long v;
  short result;
  v_6 = (unsigned long)p_9;
  v_4 = (signed char)p_9;
  v_6 = (unsigned long)((long long)(- (63149UL * v_6)) % (p + 215LL) + (long long)(
                        - ((float)v_4 + -645.115356445f) / (- p_9 + 126.f)));
  v_4 = (signed char)v_6;
  v = (long)(! (~ v_4));
  result = (short)(v % 877L);
  return result;
}


