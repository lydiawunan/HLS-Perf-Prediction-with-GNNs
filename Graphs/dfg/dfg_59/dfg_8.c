#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 143171822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p[4][5], double p_13)
{
  int v_11;
  float v_8;
  unsigned short v_6;
  unsigned char v_4;
  signed char v;
  char result;
  v_11 = (int)p_13;
  v_8 = (float)p_13;
  v_6 = (unsigned short)p_13;
  result = (char)p_13;
  v = (signed char)((0. + - ((double)result / 7.02087041995e+37)) * p_13);
  v_4 = (unsigned char)((-2963 - (int)v_6) - ((int)p[1][4] - (v_11 % (
                                                              v_11 + 42) << (
                                                              (4294934997UL + (unsigned long)p[1][4]) & 31UL))));
  result = (char)(((int)v * ((int)v_4 >> ((int)v_6 & 7))) % ((((int)((unsigned short)v_8) + (int)p[0][2]) - 3061) + 929) + -77);
  result = result;
  return result;
}


