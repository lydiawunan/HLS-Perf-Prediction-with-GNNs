#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 779475817
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p[1][1], char p_7,
                       unsigned long p_15[5][1][3])
{
  short v_13;
  signed char v_11;
  unsigned short v_9;
  short v_5;
  float v;
  unsigned long long result;
  v_13 = (short)p[0][0];
  v_11 = (signed char)p_15[1][0][1];
  v = (float)p[0][0];
  v_5 = (short)(~ (! (char)121));
  result = (unsigned long long)7960499200.f;
  v_9 = (unsigned short)(- (33UL % ((unsigned long)v_13 * p[0][0] + 998UL)) * (
                         (unsigned long)v + (16458UL | p[0][0] % (p_15[2][0][2] + 665UL))));
  result = (unsigned long long)((((unsigned long)v - p[0][0]) - (unsigned long)(
                                 (int)v_5 % ((int)p_7 + 418))) | (unsigned long)v_9 * (
                                                                 (unsigned long)v_11 * p[0][0])) / (
           (unsigned long long)(((int)v_13 | (int)v_11) << 26ULL) % (
           (32295ULL ^ result) + 419ULL) + 518ULL);
  return result;
}


