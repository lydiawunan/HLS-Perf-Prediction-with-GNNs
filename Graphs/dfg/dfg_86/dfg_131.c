#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 310019459
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[5], int p_11, unsigned short p_13,
                       long p_15, float p_19)
{
  unsigned short v_17;
  double v_8;
  signed char v_6;
  unsigned short v_4;
  unsigned long long v;
  unsigned long long result;
  v_17 = p_13;
  v_8 = 1.37862258344e+38;
  v_6 = (signed char)37;
  v_4 = p_13;
  v = (unsigned long long)p[2];
  v_4 = (unsigned short)((v_8 * 4097383327. - (double)(((int)v_17 - (int)p[0]) * (int)(
                                                       p_19 + (float)p_15))) / (
                         (double)((int)((unsigned short)(- (110.f / (
                                                            p_19 + 26.f)))) + (int)v_4) + 527.));
  v_8 = (double)((unsigned long long)p_11 % (! v + 795ULL));
  v = (unsigned long long)((long)(! ((int)(! v_4) - (int)v_6)) * ((long)(
                                                                  - v_8 - (double)(
                                                                  228 ^ (int)p[4])) + 
                                                                  (long)(~ p_11) * (
                                                                  (long)p_13 + p_15)));
  result = ! v;
  return result;
}


