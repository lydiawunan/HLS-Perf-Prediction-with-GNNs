#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 502216359
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, double p_13, short p_19, int p_21)
{
  float v_17;
  unsigned char v_15;
  char v_11;
  long v_9;
  long v_7;
  long v_5;
  signed char v;
  int result;
  v_17 = 4015868928.f;
  v_15 = (unsigned char)p_21;
  v_11 = (char)p_21;
  v_9 = (long)p_21;
  v = (signed char)((unsigned long long)((p_21 ^ 0) % ((0 - (int)((signed char)-2.70869303791e+37) / -39) + 303)) * 18446744073038073777ULL);
  v_7 = (long)p_19;
  v_5 = (v_7 - ! v_9) + (long)((double)((p - (long)v_11) / (long)(((int)((unsigned char)p_13) - (int)v_15) + 538)) + (
                               (double)v_7 + -2.27273458404e+38 / (double)(
                                             v_17 + 157.f)));
  result = (int)(~ ((unsigned long)(0 % (unsigned int)((int)(! v) + 162)) - (unsigned long)(
                    p / 28L & (v_5 + -752436940L))));
  return result;
}


