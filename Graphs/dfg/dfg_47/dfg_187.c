#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 129497385
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, long p_7[1][4][2], double p_9)
{
  signed char v_11;
  unsigned long long v_5;
  unsigned short v;
  long long result;
  v_11 = p;
  v = (unsigned short)25133;
  result = (long long)v_11;
  v_5 = (unsigned long long)p_9;
  v = (unsigned short)(((unsigned long long)p * v_5) * (unsigned long long)(
                       (long long)(((long)p % (p_7[0][1][1] + 897L)) % (long)(
                                   (int)v + 616)) + result));
  result = (long long)((unsigned long long)((int)p + (int)v) % (v_5 + 865ULL));
  return result;
}


