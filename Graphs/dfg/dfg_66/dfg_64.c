#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 61023905
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p[4][1][3], long p_9)
{
  signed char v_11;
  unsigned long long v_6;
  unsigned long long v_4;
  unsigned long v;
  unsigned short result;
  v_11 = (signed char)p[3][0][1];
  v = 3922132401UL;
  v_4 = (unsigned long long)v_11;
  v_6 = (unsigned long long)(~ ((int)p[1][0][1] * (96 >> (~ p_9 & 7L))));
  result = (unsigned short)(- 2.74658387259e+38f);
  result = (unsigned short)((unsigned long long)(- (! ((int)result + 709464253))) % (
                            - ((unsigned long long)(24542UL - v) + v_4 % (
                                                                   v_6 + 246ULL)) + 1004ULL));
  return result;
}


