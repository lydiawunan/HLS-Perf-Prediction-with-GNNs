#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 178348447
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, double p_9)
{
  unsigned long long v_17;
  float v_15;
  float v_13;
  unsigned long long v_11;
  unsigned char v_7;
  unsigned long v_4;
  float v;
  long result;
  v_17 = 536074955ULL;
  v_15 = 4628789760.f;
  v_13 = (float)p;
  v_11 = (unsigned long long)p;
  v_7 = (unsigned char)(((~ v_11 - (unsigned long long)((int)((signed char)v_13) - -11)) / 18446744073709547619ULL) / (
                        (unsigned long long)(((float)p / (v_15 + 907.f) - (float)(
                                              8788ULL + v_17)) / 1067.f) + 855ULL));
  v_4 = (unsigned long)(-886251724LL + (long long)(- p_9 + -9.53702472264e+39) % 1LL);
  v = (float)(18446744073709521090ULL * (unsigned long long)(- v_4) + (unsigned long long)(! (! (
              p % (unsigned int)((int)v_7 + 351)))));
  result = (long)v;
  return result;
}


