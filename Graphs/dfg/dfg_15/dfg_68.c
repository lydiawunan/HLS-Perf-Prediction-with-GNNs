#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 838374822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, unsigned long long p_4, unsigned char p_6,
                long long p_8[4][2], int p_10)
{
  double v_17;
  float v_15;
  double v_13;
  unsigned int v;
  signed char result;
  v_17 = (double)p_4;
  v_15 = -2.56635965428e+38f;
  v_13 = 674.049563268;
  v = 619631254U;
  result = (signed char)(v % ((unsigned int)(v_13 - (double)(18446744073709500513ULL + (unsigned long long)v_15) / (
                                                    - v_17 + 851.)) + 104U));
  result = (signed char)((-1237704391LL * (long long)((float)(757ULL / (
                                                              p_4 + 382ULL)) / (
                                                      (p + (float)p_6) + 184.f))) / (
                         (((long long)result | p_8[0][0]) + (long long)(~ p_10)) % 627LL + 926LL));
  result = result;
  result = (signed char)((int)((signed char)p) - (int)(- result));
  return result;
}


