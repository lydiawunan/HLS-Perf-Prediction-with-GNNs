#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 882133455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, unsigned long p_5, long long p_7[2], double p_9)
{
  int v_15;
  double v_13;
  float v_11;
  float v;
  unsigned int result;
  v_15 = (int)p_9;
  v_13 = (double)p_7[0];
  result = (unsigned int)((int)v_13 * - (! (v_15 / -16810)));
  v_11 = p;
  v = (float)(- (- (result % (result + 407U))) * (unsigned int)(147 * (int)((unsigned char)(
                                                                - p_9 / (double)(
                                                                - v_11 + 302.f)))));
  result = (unsigned int)((unsigned long long)((long long)(-366957407L | (long)(
                                                           147 % ((int)((unsigned char)-1.5137374816e+38f) + 1023))) % (
                                               ((long long)v & (long long)p % 278504866LL) + 460LL)) * (
                          ((unsigned long long)(p_5 / 16UL) + 992818257ULL) % (
                          (unsigned long long)((-5134395266.55 - (double)p_5) / (
                                               (double)p_7[1] + 295.)) + 1016ULL)));
  return result;
}


