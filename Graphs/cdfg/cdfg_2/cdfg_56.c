#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 835987229
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, signed char p_5, float p_7, long p_9, int p_11)
{
  float v_21;
  unsigned int v_19;
  unsigned char v_17;
  unsigned long long v_15;
  signed char v_13;
  unsigned int v;
  int result;
  v_21 = -658.146179199f;
  v_19 = 23984U;
  v_17 = (unsigned char)p_9;
  v_15 = (unsigned long long)p;
  v_13 = (signed char)p_9;
  result = (int)p_5;
  while ((int)v_13 < 0) {
    result = (unsigned long long)v_19 - ((unsigned long long)v_17 ^ v_15 / 18446744073709534942ULL);
    v_15 = (unsigned long long)((- v_21 / -5.90872271111e+18f) / ((float)(
                                                                  (long)(- p_11) / 13194713L) + 58.f));
    v_17 = (unsigned char)p_9;
    v_13 = (signed char)p;
  }
  while_0_break: ;
  if ((int)(-31.f / (p_7 + 573.f) + (float)p_9) + result < p_11) result = 986726042;
  else {
    v = (unsigned int)438.219909668f;
    result = (int)((long long)v - (32635LL - (long long)((int)p | 30)));
  }
  return result;
}


