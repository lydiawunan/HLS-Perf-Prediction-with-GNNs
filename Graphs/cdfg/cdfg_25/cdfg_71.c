#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 917099846
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p[2][4][2])
{
  long long v_15;
  unsigned long long v_12;
  long v_10;
  char v_8;
  unsigned char v_6;
  float v_4;
  short v;
  double result;
  v_15 = (long long)p[0][1][1];
  v_12 = p[1][2][0];
  v_10 = (long)p[0][3][0];
  v_6 = (unsigned char)131;
  v_4 = -4.77859908515e+37f;
  v = (short)p[0][3][0];
  result = (double)p[0][2][0];
  v_8 = (char)(- (p[1][2][1] / 3817ULL) % (! ((unsigned long long)v_6 + p[1][0][0]) + 3ULL));
  while ((double)v / ((double)(- v_4) / (- result + 379.) + 867.) != - (
         59993. / (((double)v_6 - -4327440211.94) + 713.))) {
    result = (int)v_8 & 28407;
    v_8 = (char)((unsigned long long)(- ((int)((signed char)-7.8361748682e+36f) - -39)) - (
                 (unsigned long long)v_10 + p[0][0][0]));
    v_10 = (long)(4011289290LL % (! ((long long)v_8 ^ v_15) + 269LL));
    v_4 = (float)(v_12 / ((p[1][1][0] / (v_12 + 122ULL) & p[0][0][1] % (unsigned long long)(
                                                          (int)v_8 + 839)) + 438ULL));
  }
  while_0_break: ;
  return result;
}


