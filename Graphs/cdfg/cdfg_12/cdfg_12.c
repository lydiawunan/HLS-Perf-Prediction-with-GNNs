#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 215481548
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, signed char p_11[4][1][2],
                  unsigned char p_13[1][4][1])
{
  float v_17;
  signed char v_15;
  int v_9;
  short v_7;
  unsigned short v_5;
  unsigned int v;
  unsigned char result;
  v_17 = (float)p;
  v_15 = (signed char)p;
  v_9 = 17016;
  v_7 = (short)p_13[0][1][0];
  v_5 = (unsigned short)p_13[0][3][0];
  v = (unsigned int)p;
  result = (unsigned char)p_11[2][0][1];
  while (404985265LL % (long long)((int)v_7 + 574) <= ~ ((long long)v_15 * p - -15553LL)) {
    result = (unsigned char)((double)((long long)(~ p_13[0][1][0]) / (
                                      (long long)v_7 * p + 447LL)) * (
                             -983.371367137 + (double)(- v_17)));
    v_17 = (float)((int)result * (int)(- (~ v_7)));
    v_7 = (short)p;
  }
  while_0_break: ;
  while (4719LL <= ~ (- ((long long)v / (p + 465LL)))) {
    v_5 = (long long)v_9 - (long long)v_5 / -532831629LL;
    v_9 = (int)((long long)(3779637460UL * ((unsigned long)p_13[0][0][0] * 36997UL)) - - (
                p - (long long)v_7));
    v_7 = (short)(((unsigned long long)(4294967206U - v) + (unsigned long long)p * 18446744073709523976ULL) / (unsigned long long)(
                  (v * (unsigned int)p_11[0][0][0] - (unsigned int)v_7) + 225U));
    v = (unsigned int)-31.1304264069f;
  }
  while_0_break_0: ;
  return result;
}


