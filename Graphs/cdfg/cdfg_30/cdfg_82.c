#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 78580003
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p[3], float p_11, unsigned long p_15,
                  unsigned short p_21)
{
  long v_19;
  unsigned long long v_17;
  float v_13;
  double v_8;
  char v_6;
  unsigned int v_4;
  float v;
  unsigned long result;
  v_19 = (long)p[0];
  v_17 = 18446744073709534578ULL;
  v_13 = 2.85488058173e+38f;
  v_8 = -2.33040018718e+38;
  result = (unsigned long)p[0];
  v_6 = (char)(((int)p_21 | 46) - (int)p_11);
  if ((unsigned long long)(~ p_15) * ~ v_17 >= (unsigned long long)((int)(
                                                                    (float)(
                                                                    v_17 - (unsigned long long)v_19) + v_13) * (
                                                                    52 % (
                                                                    (int)p_21 + 581) << 29LL))) {
    v_4 = (unsigned int)(-327059495L / ((long)(- p_11) + 665L));
    v = (float)(((unsigned long long)(~ v_4) ^ 0) + (unsigned long long)(
                (double)(result / (unsigned long)((int)v_6 + 19)) / (
                v_8 * (double)p[0] + 479.)));
    result = (unsigned long)(- v);
  }
  else {
    v_13 = (float)(short)-8838;
    result = (unsigned long)v_13;
  }
  return result;
}


