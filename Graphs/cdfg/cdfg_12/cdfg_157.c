#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 639344462
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(void)
{
  long v_6;
  double v_4;
  long long v;
  unsigned long long result;
  v_6 = 274026639L;
  v_4 = -7.10712911654e+37;
  v = (long long)(v_4 - (double)(61471 + (int)(1130887742.15 / ((double)v_6 + 820.))));
  result = (unsigned long long)(! v);
  return result;
}


