#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 522619180
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, long p_4, unsigned long long p_6,
                  unsigned long p_11)
{
  unsigned long v_15;
  unsigned long v_13;
  signed char v_9;
  int v;
  unsigned long result;
  v_15 = 4294921364UL;
  v_13 = (unsigned long)p_4;
  v_9 = (signed char)v_15;
  result = (unsigned long)(- (- ((-1.47048568524e+38 + (double)p_11) + (double)(
                                 p_6 << (v_13 & 63UL)))));
  v = 192693338;
  result = (unsigned long)((double)(-7 / ((int)((char)(- ((double)result + p))) + 644)) + 
                           ((p / ((double)p_4 + 555.)) / ((double)p_6 + 668.)) * (double)(! (
                           v / ((int)v_9 + 920))));
  return result;
}


