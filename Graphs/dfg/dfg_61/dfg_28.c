#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 694870228
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, int p_5, unsigned char p_7, float p_9,
              short p_11[5][3])
{
  long v_15;
  signed char v_13;
  unsigned char v;
  long long result;
  v_13 = (signed char)-110;
  v = (unsigned char)p_5;
  v_15 = 17L;
  result = (long long)((unsigned long)v_13 / (~ ((unsigned long)p_11[2][2] ^ 36514UL) + 903UL) - (unsigned long)(! (- (
                       v_15 & (long)p_11[3][1]))));
  v = (unsigned char)(- (((float)v + p_9) - 4491238.f) + (float)(! ((int)v / (
                                                                    (int)v + 222) - (int)p_11[4][0])));
  result = (long long)(((unsigned long long)p + (unsigned long long)(
                                                -1440222 << (result & 31LL)) % 43039ULL) * (
                       (unsigned long long)((int)v * p_5) - (18446744073709491112ULL % (unsigned long long)(
                                                             result + 915LL) << (
                                                             (-6794 - (int)p_7) & 63))));
  return result;
}


