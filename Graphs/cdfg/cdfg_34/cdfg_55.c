#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 75965442
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p[2][3][1], unsigned long long p_4[5][1][5], short p_6,
           short p_8[4][5], unsigned int p_10)
{
  long long v_23;
  int v_21;
  unsigned int v_19;
  long long v_17;
  unsigned int v_15;
  char v_13;
  unsigned short v;
  double result;
  v_23 = (long long)p_6;
  v_19 = p_10;
  v_17 = (long long)p_8[0][1];
  v_15 = 3589725471U;
  v_13 = (char)p_6;
  v = (unsigned short)p_10;
  v_21 = (int)((unsigned long long)((int)p_8[3][1] * (int)(- v_13)) | (
               p_4[2][0][3] * (unsigned long long)p_6 - (unsigned long long)(
               (long long)p_6 + v_17)));
  if ((long long)((p_10 / (unsigned int)((int)p_8[2][3] + 93) ^ (unsigned int)v) + (unsigned int)(
                  37194 / ((int)v_13 + 970) >> ((int)p[0][2][0] & 31))) >= 
      ((long long)v_15 % (v_17 + 836LL)) % -15811601LL + (long long)(
                                                         v_19 & (unsigned int)v_21) % (
                                                         v_23 + 868LL)) 
    result = (double)(signed char)16;
  else result = (double)(((-39958013LL / ((long long)p[1][0][0] + 386LL)) / (
                          (long long)(p[1][1][0] * p[0][0][0]) + 10LL)) * (long long)(
                         (int)(p[0][0][0] / ((float)p_4[2][0][0] + 866.f)) / (
                         ((int)p_6 - (int)p_8[1][1]) + 549)));
  return result;
}


