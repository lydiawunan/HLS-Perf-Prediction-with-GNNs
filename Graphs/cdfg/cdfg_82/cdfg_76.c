#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 577381076
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p[5], unsigned int p_11, unsigned long long p_13,
                  long long p_17[2][1][3])
{
  unsigned short v_19;
  float v_15;
  char v_8;
  short v_6;
  unsigned short v_4;
  unsigned short v;
  unsigned long result;
  v_19 = (unsigned short)p[2];
  v_15 = 2939947776.f;
  v_8 = (char)p_11;
  v_6 = (short)p[4];
  if (-71 >= (-23 * (int)((signed char)4349886464.f) + (int)((short)v_15) / (
                                                       (int)v_6 + 489)) % (
             (int)v_19 + 856)) {
    v_6 = (short)(- (((int)v_8 * 995023554) / ((int)(~ p[2]) + 602)));
    v_4 = (unsigned short)(! (- v_6));
    v = (unsigned short)57127;
  }
  else {
    result = (unsigned long)(-7960112640.f - (float)(- p_17[0][0][1] / (long long)(
                                                     p_11 + 659U)));
    v = (unsigned short)(0.f / (v_15 + 113.f));
    v_4 = (unsigned short)((unsigned long long)(~ ((unsigned long)p_11 % (
                                                   result + 782UL))) + (
                           (unsigned long long)-574587648.f + (unsigned long long)p_11 / (
                                                              p_13 + 914ULL)));
  }
  result = (unsigned long)(~ (~ ((int)v / ((int)v_4 + 205))));
  return result;
}


