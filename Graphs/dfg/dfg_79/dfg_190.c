#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 604029194
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, double p_5, long p_9, long long p_11[5],
                 double p_17)
{
  unsigned short v_15;
  long v_13;
  unsigned long v_7;
  int v;
  unsigned int result;
  v_15 = (unsigned short)p_5;
  v_13 = (long)p;
  v_7 = 4107719198UL;
  v = (int)p;
  result = 962048932U;
  result = (unsigned int)(~ v * (int)((double)((unsigned long)v_13 & (unsigned long)(! result)) / (
                                      ((double)(p * (float)v_15) - p_17) + 430.)));
  v = (int)(~ ((long long)((double)p + (p_5 + 3.25660149083e+38)) + (long long)(
                                                                    v_7 ^ (unsigned long)result) % (
                                                                    (
                                                                    (long long)p_9 - p_11[3]) + 601LL)));
  result = (unsigned int)(- (- (v % 31218)));
  result *= result;
  return result;
}


