#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 405477189
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, double p_7, float p_11)
{
  long long v_9;
  unsigned char v_5;
  unsigned short v;
  long long result;
  v_9 = 3312LL;
  v_5 = (unsigned char)p_7;
  result = (long long)p_7;
  v_9 = (long long)((int)((short)((float)(((long long)v_5 + v_9) / (result / (
                                                                    (long long)p_7 + 145LL) + 552LL)) * - p_11)) % 4222);
  v = (unsigned short)(- (- (- p_7 + (double)v_9)));
  v_5 = (unsigned char)67;
  result = (long long)(- (((unsigned int)(~ v) / 782324248U) * (unsigned int)(- (
                          p * (float)v_5))));
  return result;
}


