#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1059927941
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned long p_4, long long p_7, unsigned long p_9)
{
  short v_13;
  unsigned short v_11;
  unsigned long v;
  short result;
  v_13 = (short)p_4;
  v_11 = (unsigned short)p_9;
  v = 44612UL;
  result = (short)((unsigned long)((int)v_11 >> (((unsigned long)(-21882441 - (int)v_13) + (
                                                  3705779625UL - v)) & 15UL)) + p_9);
  v = - (~ p_4) + - ((2074UL ^ p_9) - (unsigned long)(! v_11));
  result = (short)(((double)((long)result) - (p + (double)p_4) * (double)(
                                             p_4 + v)) - (double)p_7);
  result = (short)(~ ((long)(- p - -6.47072946094e+36) * ((long)((int)result / 126) * (
                                                          (long)result * 55087L))));
  return result;
}


