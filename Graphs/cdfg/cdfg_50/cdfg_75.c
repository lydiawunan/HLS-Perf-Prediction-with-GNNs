#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 635734952
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned char p_13[3][5],
                       unsigned short p_15[3][5], float p_17[2][2][3],
                       signed char p_19)
{
  signed char v_21;
  double v_11;
  long v_8;
  long v_6;
  long long v_4;
  double v;
  unsigned long long result;
  v_21 = (signed char)p_13[0][4];
  v_11 = (double)p_13[2][4];
  v_8 = (long)p_15[0][3];
  v_6 = (long)p_13[0][2];
  v_4 = 27842LL;
  if (v_4 + (long long)(~ ((int)p_15[2][3] % ((int)((unsigned short)p_17[1][1][0]) + 270))) != (long long)(
      (((int)p_13[0][0] + -76) ^ (int)p_19) % ((int)p_13[1][0] + 268))) {
    v = (double)(-15827 & (int)p_13[0][1]);
    v_6 = (long)((double)((long)p % ((long)v_11 % (v_6 + 759L) + 334L)) * v_11);
    v_4 = (long long)(- (-784348902L + v_6) & (! v_8 ^ (long)(-17 / (
                                                              (int)p + 395))));
  }
  else {
    v_4 = (long long)((int)p_19 ^ (int)v_21 * -90) / ((-601981562LL % (
                                                       (long long)p_17[0][1][0] + 440LL) ^ (long long)(
                                                       (int)p_15[0][4] * 40245)) + 331LL);
    v = (double)v_4;
    v_4 = (long long)(~ ((int)p_15[2][4] * (int)((unsigned short)v)) * (int)(
                      - p_17[1][1][0] * p_17[1][1][0]));
  }
  result = (unsigned long long)((long long)v & v_4);
  return result;
}


