#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 360822209
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned short p_5,
                       unsigned long p_13)
{
  unsigned long v_11;
  short v_9;
  short v_7;
  double v;
  unsigned long long result;
  v_11 = p_13;
  v_7 = (short)p;
  v_9 = (short)(- (- p_13));
  v = (double)(! ((unsigned long)((int)v_7 ^ (int)v_9) + p) / (v_11 + 594UL));
  result = (unsigned long long)((-22657LL + (long long)v) * (long long)(
                                p * (unsigned long)p_5) + -458099587LL);
  result = result;
  return result;
}


