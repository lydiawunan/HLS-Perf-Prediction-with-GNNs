#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 572286047
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, long p_9, char p_15, long long p_17)
{
  float v_13;
  long long v_11;
  char v_6;
  short v_4;
  unsigned char v;
  long result;
  v_11 = (long long)p_9;
  v_6 = p_15;
  v = (unsigned char)(((unsigned long long)((long long)(! p_15) - -22696LL % (
                                                                  v_11 + 975LL)) * - (
                       18446744073709516776ULL + (unsigned long long)p_17)) / (unsigned long long)(
                      v_11 + 365LL));
  v_13 = (float)(short)-7153;
  v_4 = (short)((double)((long long)(((double)v_6 - p) + (double)p_9) / (
                         ~ (v_11 % 53LL) + 901LL)) * - (((double)v_13 + -3945744548.72) - 
                                                        (double)p_15 * p));
  result = (long)(((unsigned int)v % (- (1183U % (unsigned int)((int)v_4 + 623)) + 462U)) / (unsigned int)(
                  (int)v + 780));
  return result;
}


