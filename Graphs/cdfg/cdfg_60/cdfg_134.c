#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 285799218
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, unsigned long long p_5, signed char p_11)
{
  unsigned char v_13;
  float v_9;
  unsigned long long v_7;
  int v;
  float result;
  v_13 = p;
  v_9 = 1.59636568585e+38f;
  v_7 = 31819ULL;
  v = 43550;
  result = (float)(1 / ((int)v_13 + 422));
  while ((double)((32 - v) * (int)p) < 3.14996634885e+18 * ((double)(
                                                            327259212ULL + p_5) - -2.33591328185e+38)) {
    v_13 = (unsigned long long)v_9 % ((v_7 - 18446744073709541845ULL) + 958ULL);
    v_7 = (unsigned long long)v_13;
    result = (float)((int)p_11 + (int)p_11);
    v = (int)(~ (short)-11668);
  }
  while_0_break: ;
  return result;
}


