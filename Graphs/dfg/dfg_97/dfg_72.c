#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 158086304
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p[2][5][5], double p_11)
{
  unsigned char v_13;
  unsigned char v_8;
  long v_6;
  unsigned short v_4;
  unsigned long v;
  long long result;
  v_13 = (unsigned char)p[0][3][4];
  v_8 = (unsigned char)47;
  v_6 = (long)((long long)v_8 / ((((long long)p[0][1][3] - 57353LL) * (long long)p[0][4][2]) % (long long)(
                                 (4294910681UL - (unsigned long)((int)((unsigned char)p_11) / (
                                                                 (int)v_13 + 263))) + 205UL) + 972LL));
  v_4 = (unsigned short)(13079L * v_6);
  v = (unsigned long)v_4;
  result = - (~ (23251LL + (665181427LL + (long long)v)));
  return result;
}


