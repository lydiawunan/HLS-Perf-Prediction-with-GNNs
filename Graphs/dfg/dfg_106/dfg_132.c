#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 513080750
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, unsigned short p_5, float p_9)
{
  long long v_7;
  float v;
  unsigned long long result;
  v_7 = (long long)p_9;
  v = (float)(! (-(short)29581));
  result = (unsigned long long)((long long)((unsigned int)(49458 / ((int)((char)2803441664.f) * (int)p + 151)) * (
                                            (unsigned int)((double)v + 3.39735957786e+38) / 567871181U)) * - (
                                (long long)((int)p_5 - -40717) + v_7 % 115LL));
  return result;
}


