#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 400693526
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, unsigned long p_7, int p_15)
{
  long long v_13;
  signed char v_11;
  double v_9;
  unsigned char v_5;
  float v;
  long long result;
  v_11 = (signed char)p_15;
  v_9 = (double)p;
  v_13 = (long long)(! p_15);
  v = (float)((long long)(p_7 / ((unsigned long)v_9 + 545UL)) * ((long long)(! p) * (
                                                                 (long long)(
                                                                 (int)v_11 + 97) * - v_13)));
  v_5 = (unsigned char)p_7;
  result = - ((445094869LL - (long long)v) / (long long)(((int)p | (int)((unsigned char)v)) + 927) + (long long)v_5);
  return result;
}


