#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1034864098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, unsigned short p_5, int p_7, unsigned long p_9[4][2],
         long long p_19[3])
{
  short v_17;
  int v_15;
  int v_13;
  char v_11;
  float v;
  long result;
  v_15 = -61515;
  v_11 = (char)p_19[1];
  v = (float)p_5;
  result = (long)p;
  v_13 = p_7;
  v_17 = (short)((long long)(v_15 / ((int)((float)(~ v_13) + v) + 7)) / (
                 p_19[0] / (long long)(! result + 704L) + 900LL));
  v = (float)((unsigned long long)((unsigned long)p_7 * ((p_9[2][0] - p_9[3][1]) % (unsigned long)(
                                                         (int)v_11 % (
                                                         v_13 + 495) + 476))) - (
              ((unsigned long long)(v_15 + (int)v_17) + 18446744073709516806ULL) & 104ULL));
  result = (long)(- (- p) + (2249.f / (v * v + 170.f)) / ((float)(16574UL + (unsigned long)p_5) * (
                                                          1.84467440737e+19f - p) + 602.f));
  return result;
}


