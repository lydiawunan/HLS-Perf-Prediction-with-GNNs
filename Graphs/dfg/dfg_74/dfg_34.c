#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 937928237
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, unsigned long long p_5, int p_7,
                signed char p_9[5][1][1], long long p_11)
{
  unsigned long v_19;
  unsigned long v_17;
  long v_15;
  unsigned char v_13;
  long v;
  signed char result;
  v_17 = 7992UL;
  v_15 = 1022164650L;
  v_13 = (unsigned char)p_11;
  v_19 = (unsigned long)(2490209.f / ((- (- p) + (float)(58914LL & ~ p_11)) + 916.f));
  v = (long)((((unsigned long long)p_11 | p_5) % (unsigned long long)(
              - p_7 + 761) - (unsigned long long)(25L - v_15)) ^ (unsigned long long)(- (
             ~ v_17 & (unsigned long)p_9[4][0][0] / (v_19 + 836UL))));
  result = (signed char)((((long long)(p_7 / ((int)p_9[2][0][0] + 4)) % (
                           ! p_11 + 1017LL)) % ((long long)((float)p_5 + 
                                                            (float)v_13 * p) + 802LL)) * -195894622LL);
  result = (signed char)((int)result * (int)((signed char)(p * (float)(
                                                           (unsigned long long)(~ v) + p_5))));
  return result;
}


