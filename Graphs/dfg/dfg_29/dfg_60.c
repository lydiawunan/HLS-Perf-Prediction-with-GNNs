#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 614930713
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p[2][5], long long p_4, long long p_11,
                short p_13, char p_15)
{
  unsigned short v_17;
  float v_9;
  unsigned long v_7;
  signed char v;
  signed char result;
  v_17 = (unsigned short)p_11;
  v_7 = (unsigned long)p_13;
  v = (signed char)-70;
  result = (signed char)p_13;
  v_9 = (float)((int)p_13 + ((int)p_15 & ~ ((int)v_17 + (int)p_13)));
  v = (signed char)(((long long)v / (3850481700LL % (! p_4 + 144LL) + 270LL)) / (
                    (long long)(0.f - (-647378496.f / (v_9 + 988.f) + (float)(
                                       p_11 % ((long long)v_9 + 328LL)))) + 683LL));
  result = (signed char)((! (p_4 / 4294953557LL) - (long long)(~ ((int)result & 33))) / (
                         - ((p_4 / (long long)((int)p[1][1] + 547)) / (long long)(
                            ((unsigned long)v ^ v_7) + 804UL)) + 287LL));
  result = (signed char)((int)(- (~ result)) + 1);
  return result;
}


