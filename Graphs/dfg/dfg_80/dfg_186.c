#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 572708254
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p)
{
  float v_6;
  unsigned long long v_4;
  char v;
  signed char result;
  v_6 = -9586163712.f;
  v = (char)p;
  v_6 = v_6;
  v_4 = (unsigned long long)(((double)(- (v_6 * (float)p)) - -2.28164549398e+38) - (double)(- (~ (- v))));
  v = (char)(v_4 + 18446744072764479390ULL);
  result = (signed char)(- (-181188789 - (int)v));
  return result;
}


