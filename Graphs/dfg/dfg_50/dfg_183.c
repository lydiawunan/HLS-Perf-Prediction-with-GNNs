#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 251446967
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p[1])
{
  int v_15;
  float v_13;
  float v_10;
  signed char v_8;
  short v_6;
  float v_4;
  long v;
  unsigned int result;
  v_15 = p[0];
  v_13 = (float)p[0];
  v_10 = 605242560.f;
  v_8 = (signed char)-54;
  v_6 = (short)p[0];
  v_4 = (float)p[0];
  v = 7750L;
  result = (unsigned int)(p[0] - (int)(v_4 * (float)((int)((float)p[0] + v_4) | (
                                                     v_15 - 103))));
  v = (long)((((734584249UL + (unsigned long)v_8) % (unsigned long)((unsigned int)v_10 * result + 164U)) / (
              (unsigned long)((float)(p[0] ^ (int)v_13) / ((-9459949568.f + (float)v_15) + 466.f)) + 588UL)) / (unsigned long)(
             - (v % (long)(p[0] + 165)) % ((long)2.33856995341e+28f + 730L) + 291L));
  v_4 = (float)3351454727U;
  result = (unsigned int)(v % (long)(- (-634392387 - (int)v_4) + 218) & (long)v_6);
  return result;
}


