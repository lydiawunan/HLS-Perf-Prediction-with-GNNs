#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 833380225
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p[4][4][1], short p_5[4], signed char p_13)
{
  char v_17;
  int v_15;
  long v_11;
  float v_9;
  unsigned int v_7;
  long v;
  unsigned short result;
  v_15 = (int)p_13;
  v_11 = 61469L;
  v_9 = -448.289398193f;
  v_7 = (unsigned int)p_5[2];
  v_17 = (char)9.20367881327e+37f;
  v = (long)((unsigned long)((- v_11 - (long)((int)p_13 + v_15)) & 196L) + (unsigned long)(
             v_7 + (unsigned int)(((int)p_5[2] % 289) / (9040 % ((int)v_17 + 30) + 1))));
  v_7 = (unsigned int)(~ ((unsigned long)(~ ((unsigned int)v_9 * 2283U)) + (unsigned long)v));
  result = (unsigned short)(p[3][2][0] / (long long)(~ ((unsigned long)(
                                                        v | (long)p_5[2]) / (unsigned long)(
                                                        2U / (v_7 + 49U) + 884U)) + 73UL));
  return result;
}


