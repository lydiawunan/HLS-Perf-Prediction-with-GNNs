#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 243885814
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p[5][2][1], short p_9, unsigned long long p_11[5][1],
        unsigned int p_15[1][4][5], unsigned long p_17[5][4])
{
  unsigned long long v_19;
  unsigned short v_13;
  short v_7;
  signed char v_5;
  unsigned long v;
  int result;
  v_19 = (unsigned long long)p_9;
  v_13 = (unsigned short)p_9;
  v_5 = (signed char)(~ (! ((unsigned long long)((unsigned long)p_15[0][0][4] % (
                                                 p_17[1][1] + 280UL)) * (
                            v_19 | (unsigned long long)p_9))));
  v = (unsigned long)((int)((unsigned short)(-1.9943127484e+38f / ((float)(
                                                                   (unsigned long long)p_9 / (
                                                                   p_11[0][0] + 127ULL) | 153ULL) + 2.f))) + (int)v_13);
  v_7 = (short)-75;
  result = (int)(- ((121UL + v) % (unsigned long)((-14814 | (int)p[4][1][0]) + 639)) % (unsigned long)(
                 (int)v_5 * (int)v_7 + 997));
  return result;
}


