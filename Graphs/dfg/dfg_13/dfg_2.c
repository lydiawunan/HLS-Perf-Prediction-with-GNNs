#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 57221205
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, unsigned short p_15, unsigned short p_19[2][4][4])
{
  long v_21;
  signed char v_17;
  unsigned int v_12;
  signed char v_10;
  int v_8;
  float v_6;
  unsigned int v_4;
  unsigned int v;
  long result;
  v_21 = (long)p_19[1][2][1];
  v_17 = (signed char)p_19[1][3][2];
  v_12 = 21603U;
  v_8 = 17968;
  v_4 = 855595258U;
  v = (unsigned int)(! ((long)((int)p_19[0][0][0] * (int)p - 63 % ((int)p + 790)) / (
                        v_21 * (long)((int)p_19[1][0][2] % ((int)p_19[0][0][2] + 375)) + 435L)));
  v_6 = (float)(((long long)((int)(~ p_15) - ((int)v_17 - (int)p_19[0][0][3])) + (
                 9880LL << 21L)) - (long long)p);
  v_10 = (signed char)((unsigned long)(v_12 % (((unsigned int)p ^ (unsigned int)p / (
                                                                  v_4 + 370U)) + 711U)) % 307964584UL);
  result = (long)(v % (unsigned int)((int)((float)v_4 + (-56.f - v_6)) % (
                                     (v_8 + -21124 * (int)v_10) + 363) + 951));
  return result;
}


