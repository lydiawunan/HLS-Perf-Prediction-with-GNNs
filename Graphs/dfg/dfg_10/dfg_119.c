#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 764893307
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, short p_5, signed char p_9,
                       long p_11[5][1], long long p_17)
{
  int v_15;
  char v_13;
  unsigned char v_7;
  unsigned long v;
  unsigned long long result;
  v_15 = (int)p_11[4][0];
  v_13 = (char)p;
  result = (unsigned long long)p_9;
  v_7 = (unsigned char)((unsigned long long)(~ p_17) * (~ result / (unsigned long long)(
                                                        (int)p_9 / ((int)p_9 + 189) + 447)) + (unsigned long long)(
                        -582197336LL - (long long)((int)((signed char)-251.715148926f) << (
                                                   (int)p_9 & 7)) * 13911590LL));
  v = (unsigned long)(~ ((int)p_9 * ((int)v_13 + v_15) + (int)v_7 * -29755));
  v_7 = (unsigned char)((long long)((int)p_9 - (int)p) + ((31295LL & (long long)v) / (long long)(
                                                          ((long)p_9 + p_11[1][0]) + 751L)) / (long long)(
                                                         (int)p_9 + 40));
  result = (unsigned long long)(- ((((unsigned long)p + v) + (unsigned long)(
                                    (long)p_5 + -258358353L)) & (unsigned long)(- (
                                   (int)p / ((int)v_7 + 117)))));
  return result;
}


