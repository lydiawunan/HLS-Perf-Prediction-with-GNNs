#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 598192109
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p[4][5], long long p_7, char p_13,
                short p_15[4][4], unsigned char p_17)
{
  unsigned long long v_19;
  int v_11;
  unsigned char v_9;
  float v_5;
  unsigned short v;
  signed char result;
  v_19 = (unsigned long long)p_7;
  v_11 = 29762;
  v = (unsigned short)47810;
  v_5 = (float)(~ (v_19 + 59549790ULL));
  v_9 = (unsigned char)(p[0][4] % ((unsigned long long)(26661.f / (((float)(
                                                                    (int)p_15[0][1] / -11) + 1.77716136105e+38f) + 363.f)) + 920ULL));
  v_9 = (unsigned char)(-4041 % ((int)(! p_13) * ((int)p_15[0][3] - (int)p_17) + 504) - 
                        v_11 % ((int)v_9 + 768));
  result = (signed char)(((long long)v * ((long long)((float)p[1][3] / (
                                                      v_5 + 985.f)) * p_7)) % (long long)(
                         - ((int)v_9 ^ v_11) + 762));
  return result;
}


