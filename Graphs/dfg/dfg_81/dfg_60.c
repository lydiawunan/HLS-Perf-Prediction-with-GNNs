#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 645016333
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, long long p_4, long p_11, signed char p_13, short p_17)
{
  long long v_15;
  signed char v_9;
  unsigned char v_7;
  float v;
  int result;
  v_15 = 179092802LL;
  v_9 = (signed char)36;
  v = -244670928.f;
  result = (int)p_11;
  v = - v;
  v_7 = (unsigned char)((long long)((int)(! p_13) % ((int)v_9 + 1016)) * (
                        (-69LL % (v_15 + 891LL)) * -2LL) + (-692727870LL % (long long)(
                                                            (int)(- p_17) + 244) - (long long)(- (~ p_11))));
  v_9 = (signed char)(~ p_11);
  result = (int)((long long)p % ((((long long)(1176 + result) + p_4) + (long long)(
                                  ((int)((unsigned char)v) - (int)v_7) % (
                                  (int)v_9 + 201))) + 991LL));
  return result;
}


