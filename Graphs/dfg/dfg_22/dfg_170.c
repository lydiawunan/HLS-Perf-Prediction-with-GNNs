#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 384782224
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, double p_5[5], long long p_7[1], signed char p_9)
{
  unsigned char v_11;
  float v;
  float result;
  v_11 = (unsigned char)p;
  v = -5578625536.f;
  result = (float)v_11;
  result = (float)((((double)(2.05739530158e+38f * result) + 1.93225084829e+37) + (double)(
                    result * (float)((int)p_9 + (int)p))) * (double)(- result));
  result = (float)(249266291LL * ((long long)((double)((unsigned long)result / 3883249532UL) * p_5[1]) * (
                                  (long long)(-12 * (int)((char)result)) - ~ p_7[0])));
  result = (float)((int)p % ((int)((char)((double)(result - v) - - p_5[1])) + 726) + (int)p);
  return result;
}


