#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 622526171
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, unsigned char p_9, double p_17[1][1][3])
{
  short v_15;
  long v_13;
  int v_11;
  float v_7;
  unsigned short v_4;
  char v;
  signed char result;
  v_15 = (short)-4342;
  v_13 = -46876L;
  v_11 = -729132362;
  v_4 = (unsigned short)52756;
  v_11 = (int)(((unsigned int)v_15 % ((894898911U + (unsigned int)v_4) / (
                                      (unsigned int)-182.123260498f + 66U) + 846U)) * (unsigned int)(
               ~ p % ((int)((double)v_11 + - p_17[0][0][0]) + 548)));
  v_7 = (float)(~ v_13);
  v = (char)((p + ((int)v_4 % 235 << (p & 31))) % (- ((int)v_7 * ((int)p_9 - v_11)) + 432));
  result = (signed char)(! ((int)v * ((int)v_4 ^ (p + 42206))));
  return result;
}


