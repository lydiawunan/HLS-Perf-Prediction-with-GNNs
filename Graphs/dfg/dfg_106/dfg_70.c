#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 511913768
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, unsigned long long p_5, short p_13[1][1][1])
{
  unsigned char v_11;
  int v_9;
  int v_7;
  char v;
  double result;
  v_11 = (unsigned char)133;
  v_9 = (int)(~ ((unsigned int)9941049344.f / ((p + (unsigned int)v_11) % (
                                               p % (unsigned int)((int)p_13[0][0][0] + 320) + 516U) + 316U)));
  v_7 = 4;
  v = (char)(p_5 - (unsigned long long)(~ (~ v_7 - -18916 / (v_9 + 686))));
  result = (double)((unsigned long)((unsigned int)(-639.433946348 - (double)v) % (
                                    (p ^ 35498U) + 760U)) % (unsigned long)(
                    (int)(~ (~ (! v))) + 59));
  return result;
}


