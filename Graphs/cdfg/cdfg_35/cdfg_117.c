#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 432398945
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, signed char p_4, double p_6, unsigned short p_8[5][2][3],
          long p_15)
{
  int v_17;
  char v_13;
  double v_11;
  char v;
  float result;
  v_17 = (int)p_15;
  v_13 = (char)p_8[1][0][2];
  v_11 = (double)p_4;
  v = (char)-2;
  result = (float)p;
  v_11 = (double)0;
  while ((-41 >> 3) % (((int)p_4 / 182 & (int)((double)result * p_6)) + 331) != (int)(
         - (-7484473856.f / ((float)p_8[1][1][2] + 433.f)) + (float)v)) {
    v = (double)v_13 - (v_11 - -63124263.);
    result = (float)(signed char)-94;
    v_13 = (char)((-14754 - (int)p) / ((int)p_8[4][1][2] + 296));
    result = (float)((long)((int)((char)result) % ((int)v + 63)) % (p_15 + 475L) - (long)(
                     ((int)p_8[1][0][0] - (int)p_4) % ((int)(! v) + 783)));
  }
  while_0_break: ;
  return result;
}


