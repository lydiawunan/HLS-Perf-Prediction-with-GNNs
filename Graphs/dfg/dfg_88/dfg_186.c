#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 133393722
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, long long p_4, unsigned long p_7, short p_11[5],
         long long p_17[2][3][2])
{
  unsigned int v_19;
  unsigned char v_15;
  short v_13;
  unsigned long v_9;
  short v;
  long result;
  v_19 = 502U;
  v_15 = (unsigned char)p_17[1][1][1];
  v_9 = p_7;
  result = (long)p;
  v_13 = (short)(((274825529ULL * (unsigned long long)((long long)v_15 + p_17[1][2][0])) / (unsigned long long)(
                  p + 841U)) % (unsigned long long)((long long)v_19 / (
                                                    p_4 + 436LL) + 604LL));
  v = (short)((unsigned long long)(! p) % ((unsigned long long)((v_9 + p_7) % (unsigned long)(
                                                                (int)(- p_11[1]) + 828)) / (
                                           18446744073709510289ULL / (unsigned long long)(
                                           ((long long)v_13 | 922476402LL) + 893LL) + 88ULL) + 67ULL));
  result = (long)(((long long)((unsigned long)result + (unsigned long)p) % (
                   ! p_4 + 599LL)) % (long long)(! (- p) + 183U) + (long long)(- (
                  (unsigned long)(~ v) + ~ p_7)));
  return result;
}


