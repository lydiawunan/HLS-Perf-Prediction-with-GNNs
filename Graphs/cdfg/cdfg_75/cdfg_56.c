#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 233854874
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned char p_11)
{
  unsigned long v_9;
  int v_6;
  long v_4;
  unsigned long v;
  long long result;
  v_9 = 364448392UL;
  v_6 = (int)p;
  v_4 = (long)p_11;
  v = 3977168438UL;
  result = 1010038763LL;
  v_9 = v_9;
  while (3529050804LL < result * (long long)(- (v / (unsigned long)(v_4 + 903L)))) {
    v_6 *= -47;
    result = (long long)p_11;
    v = (unsigned long)(((long long)v_4 % (p + 734LL)) / (long long)(
                        v_9 * 4294943872UL + 298UL));
    v_4 = 56L;
  }
  while_0_break: ;
  return result;
}


