#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 920553490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p)
{
  float v_7;
  long v_5;
  long v;
  long long result;
  v_7 = (float)p;
  v_5 = 44872L;
  v = (long)p;
  result = (long long)((v_5 % ((long)-2.74677067359e+38f + 350L)) / (
                       ~ v % (long)(((int)((char)v_7) - -31) + 815) + 627L));
  result = (long long)p % ((result >> (~ v & 63L)) + 878LL);
  return result;
}


