#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 365243044
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p[2][1][3], long long p_11, unsigned char p_15,
                char p_17[5][4][2], unsigned int p_19)
{
  unsigned long long v_21;
  short v_13;
  int v_9;
  short v_7;
  signed char v_5;
  long v;
  signed char result;
  v_21 = 18446744073475987165ULL;
  v_13 = (short)-22717;
  v_7 = (short)p_11;
  v_9 = ! (! ((int)p[0][0][2] / ((int)p_15 + 466)) * ~ ((int)p_15 % (
                                                        (int)p_15 + 474)));
  v_5 = (signed char)((unsigned long long)p_17[1][2][0] * ((unsigned long long)(
                                                           p_19 | (unsigned int)p[1][0][2]) - v_21));
  v = (long)(((long long)(((int)p[1][0][2] + (int)v_5) * ((int)v_7 - v_9)) + (
              (p_11 ^ (long long)v_13) + (long long)p_15)) * p_11);
  result = (signed char)v;
  return result;
}


