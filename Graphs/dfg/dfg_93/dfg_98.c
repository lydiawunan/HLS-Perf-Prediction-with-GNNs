#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 857698619
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p[4][5], signed char p_4, char p_11, char p_13)
{
  unsigned short v_15;
  int v_9;
  float v_7;
  int v;
  unsigned long result;
  v_15 = (unsigned short)31560;
  v_9 = (int)p_4;
  v = -12389;
  result = 4294932151UL;
  v_7 = - (-330.315887451f / ((float)((unsigned long)((int)v_15 % (v + 135)) % (
                                      (result + (unsigned long)-278.140289307f) + 542UL)) + 471.f));
  v = (int)(v_7 / ((float)(v_9 + ((int)p_11 ^ (int)p_13)) + 671.f));
  result = 14880UL;
  result = (unsigned long)((long long)p[1][3] * ((long long)(result * 3664809994UL + (unsigned long)(
                                                             -875582971 << (
                                                             (int)2.64189905496e+38f & 31))) / (
                                                 (-602809315LL - (long long)(
                                                  (int)p_4 + v)) + 601LL)));
  return result;
}


