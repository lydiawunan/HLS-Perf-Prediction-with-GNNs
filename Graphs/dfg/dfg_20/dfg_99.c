#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 46052528
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p[2][5], unsigned char p_13)
{
  float v_11;
  unsigned int v_8;
  short v_6;
  int v_4;
  int v;
  unsigned long result;
  v_11 = (float)p[0][3];
  v_8 = (unsigned int)p[1][2];
  v_6 = (short)-13405;
  v_8 = (v_8 + 13317U) * (unsigned int)(- (((int)p[0][0] & (int)((char)v_11)) & (int)p_13));
  v_4 = (int)v_8;
  v = ~ (((-42 >> (v_4 & 7)) & (int)v_6) / 151);
  result = (unsigned long)(-2791 * ! (- (~ v)));
  return result;
}


