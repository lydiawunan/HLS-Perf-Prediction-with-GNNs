#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 567832414
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, long long p_9[3][3][3])
{
  float v_11;
  unsigned long v_7;
  unsigned long long v_5;
  short v;
  int result;
  v_7 = 33791UL;
  result = 52624;
  v_11 = (float)(char)28;
  v_5 = (unsigned long long)(! (- (! p) % ((unsigned int)(- (4593.f - v_11)) + 27U)));
  v = (short)(~ (~ (v_5 + 47253ULL)) / (unsigned long long)(((long long)v_7 ^ p_9[1][0][1]) + 352LL));
  result = (int)(- ((unsigned long long)(~ (result * (int)v)) * (((unsigned long long)p - v_5) * (unsigned long long)(
                                                                 3534793089U * (unsigned int)result))));
  return result;
}


