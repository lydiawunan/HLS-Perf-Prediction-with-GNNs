#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 335053352
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p)
{
  signed char v_6;
  unsigned long long v_4;
  double v;
  int result;
  v_6 = (signed char)-96;
  v_4 = (unsigned long long)(p - p);
  result = 203;
  v = (double)(- (result % ((int)(! (! v_6)) + 803)));
  result = (int)(- (v / ((double)(v_4 * (unsigned long long)result) + 434.))) % 6602;
  return result;
}


