#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 421289800
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned long long p_4, unsigned long p_13,
                  unsigned int p_17[1][2][2], long p_21[2])
{
  int v_19;
  long v_15;
  long long v_11;
  signed char v_9;
  signed char v_7;
  float v;
  unsigned char result;
  v_19 = (int)p_4;
  v_15 = -43347L;
  v = (float)p_17[0][0][1];
  v_11 = (long long)(p_21[0] - - (~ p_21[1]));
  v_9 = (signed char)(! ((unsigned long)(0 / (unsigned int)((p - v_19) + 833)) * - (
                         4294956252UL / (unsigned long)(v_15 + 906L))));
  v_7 = (signed char)((((long long)v_9 % (v_11 + 733LL)) / (long long)(
                       p_13 + 182UL) + 4593854583LL) + (long long)(- (
                      (long)-2.86902593983e+38f + (v_15 >> (p_17[0][0][1] & 31U)))));
  result = (unsigned char)((unsigned long long)(p | -111) + p_4 * (unsigned long long)(
                                                            (long)((int)((signed char)v) & (int)v_7) * -60880L));
  return result;
}


