#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 939780497
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p[4][4][2], short p_15, char p_17, long long p_19[4][2][3])
{
  long v_21;
  float v_13;
  int v_10;
  short v_8;
  float v_6;
  char v_4;
  char v;
  int result;
  v_21 = (long)p_19[1][0][1];
  v_8 = (short)-7344;
  v_4 = (char)(((double)((int)p_17 % 218) + (3315816403.05 + (double)p_19[1][0][2])) - (double)(
               18446744073709512485ULL + (unsigned long long)p_19[0][1][2]));
  if ((long long)((int)p_17 * 13387) * ! p_19[2][1][0] - 3631969721LL < (long long)(~ (
      v_21 - (long)((int)p_17 + (int)v_8)))) {
    v_6 = (float)v_8;
    v = (char)((long long)((int)v_4 * -10547) - (long long)(- v_6 * 511899648.f));
    result = (int)(~ (! v));
  }
  else {
    v_13 = (float)p_15;
    v_10 = (int)(p[1][0][0] * 1.84467440737e+19 + (double)(- v_13)) + 23265;
    result = (int)(4294967295U / (- ((unsigned int)v_10 & 56382U) + 712U));
  }
  return result;
}


