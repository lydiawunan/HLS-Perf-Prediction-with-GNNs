#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 863075277
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned char p_9[3][5],
                   short p_11[5][4], unsigned int p_15)
{
  int v_13;
  short v_7;
  int v_5;
  int v;
  unsigned short result;
  v_13 = (int)p_11[1][0];
  v_5 = (int)p_11[2][2];
  v_7 = (short)(1858ULL * (unsigned long long)(! (p_15 >> (v_5 & 31)) / (unsigned int)(
                                               (int)p_9[2][4] + 759)));
  v = ~ (((int)v_7 - (int)p_9[2][3]) / ((int)p_9[0][2] + 531)) / ((v_5 - (int)p_11[0][3]) * - v_13 + 248);
  v_5 = v;
  result = (unsigned short)((unsigned long)(~ (30472 / (v + 983))) * (
                            (p - (unsigned long)-846.923034668f) >> 17U) + (unsigned long)v_5);
  return result;
}


