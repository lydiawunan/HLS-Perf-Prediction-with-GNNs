#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 854158379
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, signed char p_7, long long p_11,
                  long p_15[4][3][5], char p_17)
{
  unsigned char v_19;
  unsigned int v_13;
  float v_9;
  unsigned long v_5;
  unsigned short v;
  unsigned char result;
  v_19 = (unsigned char)71;
  v_13 = (unsigned int)p_7;
  v_9 = (float)p_7;
  v_5 = 677131741UL;
  v = (unsigned short)p;
  result = (unsigned char)166;
  while (51699.f <= v_9) {
    result = (float)v_19 + -890.300354004f;
    v_19 = (unsigned char)(~ p_15[2][2][0]);
    v_13 = (unsigned int)(! ((int)((char)((float)p_7 - -1.53343352674e+38f)) ^ 59));
    v_9 = (float)(! p_15[1][0][0]);
  }
  while_0_break: ;
  while ((long long)(! (58 * (int)v) * (int)p) == ((long long)(((unsigned long)result % (
                                                                v_5 + 12UL)) % (unsigned long)(
                                                               ((int)p_7 + (int)((signed char)v_9)) + 560)) ^ (
                                                   p_11 & 62LL % (p_11 + 697LL)))) {
    result = (unsigned long)v_13 % 56297UL;
    v_13 = (unsigned int)(~ ((long)p_17 + p_15[0][2][2] / ((long)-7501729478.82 + 236L)));
    v_5 = (unsigned long)p_15[3][1][2];
    v = (unsigned short)(- ((long)(~ p_7) / ((p_15[1][0][1] & (long)p) + 96L)));
  }
  while_0_break_0: ;
  return result;
}


