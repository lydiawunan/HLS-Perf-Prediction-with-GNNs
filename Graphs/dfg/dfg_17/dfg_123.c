#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 757361769
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p)
{
  char v_7;
  int v_5;
  long long v;
  unsigned long result;
  v_7 = (char)-46;
  v_5 = (int)v_7;
  result = (unsigned long)((long long)v_5 % -38726LL);
  v = (long long)result;
  result = (unsigned long)(- (- ((long long)p % (v + 681LL))) - -25LL);
  return result;
}


