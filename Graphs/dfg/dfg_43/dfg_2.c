#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 117057185
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned char p_11[4])
{
  unsigned short v_13;
  long v_9;
  float v_7;
  long v_4;
  signed char v;
  signed char result;
  v_13 = (unsigned short)p_11[2];
  v_9 = (long)p;
  v_7 = 1.93901661228e+38f;
  result = (signed char)-102;
  v_4 = (long)((double)v_13 / 3496681582.99) / ((long)(-17011 >> ((int)p & 15)) * (
                                                -7372L - (long)result) + 570L) >> 11;
  v = (signed char)p_11[1];
  v_9 = - (~ ((v_9 / (long)((int)p + 464)) * (long)v_7));
  result = (signed char)((unsigned long long)v % (((unsigned long long)(! v_4) * (
                                                   18446744073709499240ULL / (unsigned long long)(
                                                   (int)p + 675))) * (unsigned long long)(- (
                                                  v_7 / ((float)v_9 + 112.f))) + 704ULL));
  return result;
}


