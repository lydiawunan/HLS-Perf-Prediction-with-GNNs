#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 78987270
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned int p_7, char p_15)
{
  long long v_13;
  int v_11;
  long v_9;
  int v_4;
  float v;
  double result;
  v_13 = p;
  v_11 = 693922458;
  v = -3939269888.f;
  v_4 = (int)((unsigned long)p_15 - ((unsigned long)(~ p_7) * 452954439UL) / (unsigned long)(
                                    - (- p_7) + 796U));
  v_9 = (long)((~ ((unsigned long long)p_7 - 18446744073709536657ULL) << (
                ((long long)(p_7 | (unsigned int)v) & ((long long)v_4 & v_13)) & 63LL)) - 10962ULL);
  result = (double)((long long)v_4 + (! p * (long long)p_7) / (long long)(
                                     ((long)(-19471 << (p_7 & 31U)) - 
                                      v_9 % (long)(v_11 + 526)) + 746L));
  result = - (- (- result - (result - (double)v)));
  return result;
}


