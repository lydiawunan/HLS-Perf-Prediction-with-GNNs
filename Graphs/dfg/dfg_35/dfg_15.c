#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 647419821
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, double p_7, float p_9, signed char p_13, double p_17)
{
  double v_15;
  double v_11;
  long long v_5;
  unsigned short v;
  short result;
  v_15 = (double)p;
  v_11 = p_17;
  v = (unsigned short)p_9;
  v = (unsigned short)(! (((int)v_15 & -9245) / ((int)(p_17 / ((double)p_13 + 875.)) + 665)) * ! (
                       (int)p_9 + ((int)v + (int)((unsigned short)p_7))));
  v_5 = (long long)(-470055968 - ((int)((signed char)(0. + 869.765459988 * (double)p_13)) + (int)(- p_13)));
  result = (short)(((long long)(~ p - (long)(- v)) + ((long long)-2.63989389536e+38 ^ 
                                                      v_5 * (long long)p_7)) + (long long)(- (
                   (double)p_9 * - v_11)));
  result = - result;
  return result;
}


