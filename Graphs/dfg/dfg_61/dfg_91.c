#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 833803436
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned int p_5, float p_11, int p_17)
{
  float v_15;
  float v_13;
  char v_9;
  float v_7;
  signed char v;
  unsigned long result;
  v_15 = -3.37891800995e+38f;
  v_13 = (float)p_5;
  v_9 = (char)p;
  v = (signed char)p_17;
  result = (unsigned long)(~ ((long)((p_11 - v_13) * (float)((int)v_15 / (
                                                             p_17 + 547))) % 701L));
  v_7 = (float)(~ ((long long)(~ v_9) - ((long long)((int)v << ((int)((signed char)p_11) & 7)) + (
                                         74673218LL + (long long)result))));
  v = (signed char)(- v_7);
  result = (unsigned long)((float)(~ (! p / (-355866136L * (long)v + 301L))) * (
                           (-6.36308019168e+37f - (float)(p - 25071L)) * (float)(! (
                           p_5 | 8298U))));
  return result;
}


