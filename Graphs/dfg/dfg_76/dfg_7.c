#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 523924173
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, float p_13, long long p_15, long long p_19)
{
  unsigned int v_17;
  short v_11;
  int v_9;
  short v_7;
  double v_5;
  unsigned long long v;
  long long result;
  v_17 = 9519U;
  v_11 = (short)p_13;
  v_9 = (int)p_15;
  v_7 = (short)p_15;
  v_5 = (double)p_19;
  v = 18446744073709487152ULL;
  result = - ((long long)((float)v_11 / (p_13 + 644.f)) + ((long long)p_13 - p_15)) + (
           (long long)(- v_17) * (p_19 | -4098498560LL) + (long long)(
           (int)v_7 / ((int)v_7 + 1001)));
  v_7 = (short)(! (unsigned char)249);
  result = ~ (- (~ ((long long)p - result)));
  result = (long long)((((unsigned long long)(p >> 7) - 32473ULL % (v + 819ULL)) ^ 0ULL) % (
                       (unsigned long long)(- v_5 / ((double)((unsigned long long)(
                                                              (long long)v_7 + result) & 
                                                              (unsigned long long)v_9 * v) + 401.)) + 555ULL));
  return result;
}


