#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 559131993
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, short p_4, unsigned long long p_6, long long p_8,
                 short p_15)
{
  unsigned long long v_13;
  unsigned long long v_11;
  int v;
  unsigned int result;
  v_13 = (unsigned long long)p_4;
  v = (int)p_8;
  v_11 = - (! 0ULL);
  v_11 = (unsigned long long)((int)((241.848815918f / (p + 629.f)) / (
                                    (float)(~ v_13) + 237.f) + (float)(
                                    (unsigned long long)(-59786 >> 2U) * (
                                    744035420ULL - v_11))) & -111 % (
                                                             (int)p_15 + 752));
  result = (unsigned int)((unsigned long long)(- (-58804LL % (p_8 + 680LL) + ! p_8)) + ~ (
                          (unsigned long long)(17916 + v) + (18446744073709502304ULL + v_11)));
  result = (unsigned int)(((float)result / ((1.84467440737e+19f - p) + 1.f)) / (
                          (float)p_4 + 279.f) - (float)(~ (18446744073709551595ULL - p_6)) * p);
  return result;
}


