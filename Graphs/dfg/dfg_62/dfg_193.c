#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1049780758
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned int p_4, unsigned char p_9, short p_11,
           long long p_13)
{
  unsigned short v_17;
  unsigned int v_15;
  long long v_7;
  unsigned int v;
  double result;
  v_17 = (unsigned short)p_13;
  v_7 = (long long)p_11;
  v = (unsigned int)((long)v_17 + 271370674L);
  v_15 = (unsigned int)v_7;
  v_7 = (long long)((unsigned int)p_9 + (v + (unsigned int)(! p_11))) + 
        - (! p_13) * ((long long)-3.178685977e+38 % (p_13 + 90LL) + (long long)(~ v_15));
  result = (double)(((p - p / 21578LL) * (long long)(! (~ p_4))) * ((long long)(
                                                                    (
                                                                    v + p_4) + - v) / (
                                                                    (
                                                                    v_7 | -114LL) + 614LL)));
  return result;
}


