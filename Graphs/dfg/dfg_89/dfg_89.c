#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 357451284
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p[1][3], int p_5[1], float p_7, signed char p_11,
                unsigned char p_13)
{
  long long v_15;
  short v_9;
  double v;
  signed char result;
  v_15 = -415956118LL;
  v_9 = (short)p_11;
  result = (signed char)p_13;
  v = (double)(((long)((int)((signed char)-1.72668110475e+38) % ((int)result + 362) + (
                       (int)((char)1234779136.f) - (int)p[0][1])) * (
                641089180L - (long)(p_5[0] * 227))) / (- ((long)p_11 - -426400908L) % (
                                                       (long)(- ((float)result - p_7)) + 622L) + 887L));
  result = (signed char)(~ (((long long)((int)p[0][2] & (int)p_13) | 
                             26375LL % (v_15 + 598LL)) - (long long)(- (
                            676298840 << ((int)v_9 & 31)))));
  v_9 = (short)((37285 % (-44 / ((int)p_13 + 659) + 650) - 0 % ((int)(! v_9) + 805)) * ! (
                (int)result | -23409));
  result = (signed char)((((unsigned long)v * 4294936395UL) * (unsigned long)p[0][2] - (unsigned long)(
                          ((float)p_5[0] / (p_7 + 739.f)) * 29955.f)) * (unsigned long)(
                         ((int)((short)v) * (int)v_9) / ((int)p_11 % (
                                                         (int)(! p_13) + 113) + 568)));
  return result;
}


