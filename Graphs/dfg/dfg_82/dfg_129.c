#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 625735886
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p)
{
  long long v_7;
  unsigned long long v_4;
  unsigned int v;
  long long result;
  v_7 = 6393LL;
  v_7 = v_7;
  v_4 = (unsigned long long)(- (- v_7) * -59LL);
  v = (unsigned int)p;
  result = (long long)((((unsigned long long)v - v_4) & (unsigned long long)-966.44720459f) << (
                       (int)p & 63));
  return result;
}


