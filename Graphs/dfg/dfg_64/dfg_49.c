#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 121613479
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, double p_15[3][4][1])
{
  signed char v_17;
  long long v_12;
  short v_10;
  long long v_8;
  int v_6;
  char v_4;
  float v;
  unsigned long long result;
  v_17 = (signed char)-59;
  v_12 = (long long)p;
  v_10 = (short)p_15[1][3][0];
  v_8 = (long long)p_15[1][3][0];
  v_4 = (char)-21;
  v = -3899472384.f;
  result = 18446744073709545344ULL;
  v_12 = (- (v_12 - 3323549311LL) | (long long)((int)(~ v_4) - (int)v_17)) >> 58;
  v_4 = v_4;
  v_6 = (int)((long long)(! ((unsigned long)v_10 % 4294930715UL)) * v_12 + (long long)(
              (unsigned long)((238 - (int)p) + (int)((double)result * p_15[1][2][0])) % 3345441926UL));
  result = (unsigned long long)((long long)v / (((long long)((int)v_4 + 92) & 
                                                 ((long long)v_6 | v_8) / 29LL) + 844LL));
  return result;
}


