#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 466978400
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p[1][2][4], short p_5, int p_9)
{
  unsigned short v_15;
  int v_13;
  long long v_11;
  unsigned long v_7;
  long long v;
  unsigned char result;
  v_15 = (unsigned short)p_9;
  v_13 = (int)p[0][1][3];
  v_11 = (long long)p_9;
  v_7 = (unsigned long)p[0][0][0];
  result = (unsigned char)(((long long)(~ p_5) + (((long long)p_9 + v_11) - (long long)(
                                                  40728 / (v_13 + 386)))) / (long long)(
                           (161 + (int)(- v_15)) + 62));
  v = -6552LL;
  v = v;
  result = (unsigned char)(~ ((long long)(~ result) * ((long long)p[0][1][2] & v)) - (long long)(
                           (unsigned long)(- ((int)p_5 + 65)) * ! (v_7 % 33UL)));
  return result;
}


