#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 280706435
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p[3][3][4], float p_11)
{
  signed char v_8;
  char v_6;
  short v_4;
  unsigned char v;
  short result;
  v_4 = (short)-13904;
  v = (unsigned char)p_11;
  result = (short)28861;
  v_8 = (signed char)p_11;
  v_6 = (char)v_4;
  v_4 = (short)(((unsigned long long)((int)(! v_4) * ((int)v_6 % 37860)) % (
                 ((unsigned long long)result - ((unsigned long long)v_4 - 18446744073709549714ULL)) + 149ULL)) * (unsigned long long)(
                (16343 + (int)v_8) * (int)(-820.185424805f + p[2][1][1])));
  result = (short)(~ ((int)v + (int)(! v_4)) * (int)(! v));
  return result;
}


