#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 80472139
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, short p_5, long long p_9, long long p_13)
{
  long long v_15;
  long long v_11;
  int v_7;
  unsigned int v;
  long long result;
  v_15 = p_13;
  v_11 = (long long)p_5;
  v_7 = (int)(~ (! (~ (v_15 / (p_13 + 536LL)))));
  v = (unsigned int)((double)(! v_7) / ((-993.197359378 - (double)(p_9 % -119LL)) + 413.) + (double)(
                     v_11 * (long long)((double)(-28637LL / (p_13 + 622LL)) * -3.05352984457e+38)));
  v = (unsigned int)(- (p * ((p / ((double)p_5 + 666.)) / (((double)v + p) + 300.))));
  result = (long long)(4294919595UL + (unsigned long)((int)(p + (double)(
                                                            (unsigned long)v / 4294912118UL)) * (int)((char)(- p))));
  return result;
}


