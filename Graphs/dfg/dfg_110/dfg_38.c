#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 671502076
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, float p_7)
{
  unsigned long long v_9;
  float v_4;
  int v;
  signed char result;
  v_9 = (unsigned long long)p_7;
  v = (int)v_9;
  v_4 = (float)83LL;
  result = (signed char)((float)(- v) / (((1.47848056898e+38f + v_4) / (
                                          (float)((int)p | -714) + 359.f) + (float)(- (
                                          (unsigned long long)p_7 / 350554329ULL))) + 470.f));
  return result;
}


