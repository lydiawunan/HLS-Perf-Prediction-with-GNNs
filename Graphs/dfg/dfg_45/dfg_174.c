#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 562011520
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p[4][1], signed char p_11[5][2],
                 signed char p_17[5][1])
{
  short v_15;
  char v_13;
  unsigned short v_8;
  int v_6;
  unsigned long v_4;
  unsigned long long v;
  unsigned int result;
  v_15 = (short)p[1][0];
  v_8 = (unsigned short)p_11[0][1];
  v_4 = 4294929796UL;
  result = (unsigned int)p_17[0][0];
  v_13 = (char)(result - (unsigned int)((int)v_15 | (((int)p_11[0][1] - 95) >> (
                                                     (int)(~ p_17[2][0]) & 31))));
  v_6 = (int)((0UL - p[0][0]) + (unsigned long)((int)(~ p_11[4][1]) & - (
                                                (int)v_13 * (int)p_11[0][1])));
  v = (unsigned long long)(- (v_4 % (unsigned long)(v_6 + 528)) + (unsigned long)v_8);
  result = (unsigned int)(40ULL / (v + 86ULL));
  return result;
}


