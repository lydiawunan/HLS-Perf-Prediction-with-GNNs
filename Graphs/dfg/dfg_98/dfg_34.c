#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 826428772
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[5][1][2], int p_4, unsigned long p_6[2], int p_15)
{
  unsigned char v_17;
  unsigned long v_13;
  unsigned long v_11;
  unsigned char v_9;
  unsigned long long v;
  long result;
  v_17 = (unsigned char)p_6[0];
  v_13 = p_6[0];
  v_11 = (unsigned long)p[3][0][1];
  v = (unsigned long long)p_4;
  v_9 = (unsigned char)((unsigned long long)((long long)(! v_13 + (unsigned long)(
                                                         p_15 * 4143)) + 
                                             (long long)v_17 % 416845370LL) * v);
  result = (long)((unsigned long long)(- (~ v_9)) % ((1 - (unsigned long long)(
                                                      (unsigned long)(
                                                      p_4 / 29310) % (
                                                      (v_11 + v_13) + 711UL))) + 347ULL));
  v = 5620ULL;
  result = (long)(((double)(- (! p[3][0][0])) + -53.559770893) / ((double)(
                                                                  (unsigned long long)(
                                                                  (unsigned long)(
                                                                  (long)p_4 % -52694L) * (
                                                                  (unsigned long)result + p_6[1])) + 
                                                                  - v * (unsigned long long)(
                                                                  (long long)v_9 * -34774LL)) + 985.));
  return result;
}


