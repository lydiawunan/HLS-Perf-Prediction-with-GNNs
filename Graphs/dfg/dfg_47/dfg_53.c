#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 286864915
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, char p_5, signed char p_7)
{
  unsigned char v_9;
  unsigned long v;
  long result;
  result = -740230510L;
  v_9 = (unsigned char)p_5;
  result = 54L / ((long)(~ (- p_5)) / ((result * (long)p_7) / (long)(
                                       (int)v_9 + 980) + 39L) + 792L);
  v = 214UL;
  result = (long)(~ ((long long)(v / 4294967216UL) + ~ p) * (long long)(- (- (
                  (long)p_5 & result))));
  return result;
}


