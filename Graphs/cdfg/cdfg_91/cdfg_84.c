#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 818788369
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(void)
{
  double v_6;
  long v_4;
  short v;
  unsigned long result;
  v_6 = -666.252750143;
  v_4 = 44489L;
  v = (short)((long)v_6 * -20989L);
  result = (unsigned long)((long)v % (v_4 + 944L));
  return result;
}


