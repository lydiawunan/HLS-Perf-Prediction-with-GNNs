#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 624362255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p)
{
  int v_9;
  double v_6;
  long long v_4;
  int v;
  long long result;
  v_9 = -643134562;
  v = (int)p;
  v = ! (~ (! v) * v_9);
  v_6 = (double)v;
  v_4 = (long long)(- (- (68. * (v_6 * (double)p))));
  result = (long long)v % (- ((long long)-9.16733451081e+37 * v_4) + 383LL);
  return result;
}


