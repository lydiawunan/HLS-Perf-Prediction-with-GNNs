#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 796367086
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p[4][4][5], unsigned long p_7, int p_9)
{
  float v_11;
  long v_4;
  unsigned char v;
  char result;
  v_4 = (long)p_9;
  v = (unsigned char)31;
  v_11 = (float)(! (! (~ v_4 << ((int)(~ v) & 31))));
  result = (char)((unsigned long)((22491L - v_4) << 10L) / ((p_7 / (unsigned long)(
                                                             p_9 + 865) + (unsigned long)(
                                                             91 % ((int)p[1][3][2] + 424))) + 35UL) - (unsigned long)(
                  (-4227 & (int)v_11) * (int)(- v_11) - -9));
  v = (unsigned char)(((int)p[0][1][4] - (int)p[0][0][1]) << (! (26849 % (
                                                                 ((int)p[0][2][0] + (int)p[0][3][3]) + 842)) & 31));
  result = (char)(18446744073154594547ULL * (unsigned long long)((long)(
                                                                 (int)result * (
                                                                 (int)v + -39)) / (
                                                                 ((2L - v_4) | (long)(~ p[1][1][1])) + 718L)));
  return result;
}


