#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 893454545
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p[1][3][4], signed char p_5, float p_11,
                unsigned short p_17, long long p_19)
{
  char v_15;
  unsigned short v_13;
  int v_9;
  long long v_7;
  float v;
  signed char result;
  v_15 = (char)p_11;
  v_13 = (unsigned short)53501;
  v_9 = -410673824;
  result = (signed char)4;
  v = (float)(((long long)v_13 - - p[0][2][0]) * (long long)(((int)v_13 - (int)((unsigned short)p_11)) * (int)(! v_15)) - - (
              (long long)(57948UL - (unsigned long)p_17) + ~ p_19));
  v_7 = (long long)((int)(! p_5) - - ((int)p_5 - (int)((signed char)p_11))) / (
        p[0][1][0] + 383LL);
  result = (signed char)((~ ((long long)result + v_7) + (long long)v_9) % -271799084LL);
  result = (signed char)((long long)result % ((long long)((float)(p[0][2][0] % (
                                                                  (long long)-8.66001447848e+37 + 332LL)) - v) % (
                                              (~ p[0][0][2] | (long long)p_5) + 401LL) + 400LL));
  return result;
}


