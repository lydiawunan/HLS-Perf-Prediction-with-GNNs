#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 507248751
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, long long p_4, short p_6, short p_11)
{
  unsigned long long v_15;
  unsigned char v_13;
  char v_9;
  unsigned long long v;
  signed char result;
  v_13 = (unsigned char)29;
  v_9 = (char)p_11;
  v = (unsigned long long)p_4;
  v_15 = (unsigned long long)(! (~ 512336718));
  v_15 = v_15;
  result = (signed char)((v / (unsigned long long)(0 / ((long long)v_9 / -667933695LL + 390LL) + 306LL)) * ~ (
                         (unsigned long long)p_11 / (((unsigned long long)v_13 - v_15) + 9ULL)));
  result = (signed char)((long long)(~ ((int)((unsigned char)p) + 91) % (
                                     (int)((21812.f / (p + 991.f)) * (float)(~ result)) + 959)) / (
                         - (p_4 + 127LL) * (long long)(! p_6) + 707LL));
  return result;
}


