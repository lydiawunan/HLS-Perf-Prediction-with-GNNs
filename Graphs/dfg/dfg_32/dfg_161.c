#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 960556988
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, double p_7, unsigned long long p_9)
{
  float v_13;
  long v_11;
  signed char v_5;
  long v;
  unsigned int result;
  v = 847068290L;
  result = 34433618U;
  v_13 = (float)(~ (18446744072985993134ULL | (unsigned long long)v));
  v_11 = (long)(((unsigned long)p - 4294921376UL) % 4294967106UL);
  v_5 = (signed char)((int)((unsigned char)v_13) % 252);
  result = (unsigned int)((unsigned long long)v / (((unsigned long long)(
                                                    p + (unsigned int)v_5) & (
                                                    (unsigned long long)p_7 % (
                                                    p_9 + 654ULL) << (
                                                    (unsigned long)result % (unsigned long)(
                                                    v_11 + 752L) & 63UL))) + 225ULL));
  return result;
}


