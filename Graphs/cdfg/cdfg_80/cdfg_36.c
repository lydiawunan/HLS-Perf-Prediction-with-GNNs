#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 135653842
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p[4][1], float p_5, unsigned long long p_15)
{
  char v_13;
  long long v_11;
  signed char v_9;
  unsigned char v_7;
  unsigned long v;
  unsigned short result;
  v_13 = (char)p_15;
  v_9 = (signed char)-12;
  v_7 = (unsigned char)210;
  v = (unsigned long)p_5;
  result = (unsigned short)p[1][0];
  v_11 = (long long)((float)((int)result * (int)v_9) / (p_5 * -2104.f + 7.f) + (float)(~ (
                     (int)((char)p[0][0]) / -9)));
  while (18446744073068381330ULL < 18446744073129231548ULL / (unsigned long long)(
                                   ! (v - (unsigned long)p_5) + 194UL)) {
    v_9 = v_11 - (long long)((int)v_9 & ((int)v_7 + 66));
    v_7 = (unsigned char)(~ ((int)((char)(- p[1][0])) - (int)(- v_13)));
    result = (unsigned short)((unsigned long long)v_13 * ((unsigned long long)p[2][0] / (
                                                          18446744073709498118ULL * p_15 + 736ULL)));
    v = (unsigned long)((51 % ((int)v_13 * (int)v_7 + 88)) / ((int)(- (
                                                              p[1][0] * -118.)) + 361));
  }
  while_0_break: ;
  return result;
}


