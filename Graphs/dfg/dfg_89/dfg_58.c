#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 557447422
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned long long p_4, unsigned long p_7,
                  unsigned int p_9, signed char p_13[3])
{
  long v_17;
  unsigned char v_15;
  long long v_11;
  unsigned long v;
  unsigned long result;
  v_17 = (long)p_9;
  v_15 = (unsigned char)61;
  v_11 = (long long)(- p / ((double)(- ((long)(! v_15) + (v_17 ^ 17740L))) + 956.));
  v = (unsigned long)(0 / (long long)(~ (~ (57476 - (int)((unsigned short)p))) + 150));
  result = (unsigned long)(((p_4 + (unsigned long long)v) / (unsigned long long)(
                            (p_7 ^ (unsigned long)p_9) + 553UL) << ((
                                                                    (
                                                                    (unsigned long long)p_9 + 18446744073709521959ULL) - (unsigned long long)(! v_11)) & 63ULL)) - (unsigned long long)(
                           (unsigned int)p_13[0] | ~ (p_9 + 66U)));
  result = - ((unsigned long)(-844.792837566 * - p) + ~ (! result));
  return result;
}


