#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 866198344
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p)
{
  unsigned char v_7;
  long long v_5;
  long v;
  double result;
  v_7 = (unsigned char)p;
  v = (long)p;
  result = (double)(- -45791LL);
  v_5 = (long long)(~ ((long)(507090939 / ((int)v_7 + 154) | (int)(-609.410670973 / (double)(
                                                                   p + 416.f))) & v));
  v = 14407L;
  result = (- result - (double)v) - (double)p / (((double)((long long)p / (
                                                           v_5 + 312LL)) - (
                                                  (double)p + result)) + 43.);
  return result;
}


