#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 390376398
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, float p_4, signed char p_9, long long p_15[3][3][1],
          short p_19[2][5][4])
{
  unsigned long long v_23;
  double v_21;
  unsigned long v_17;
  float v_13;
  unsigned short v_11;
  unsigned short v_7;
  long long v;
  float result;
  v_23 = (unsigned long long)p;
  v_21 = 3.18478352184e+38;
  v_17 = 540429924UL;
  v_13 = (float)p_15[0][0][0];
  v_11 = (unsigned short)p_19[1][3][2];
  v_7 = (unsigned short)p_9;
  v = 494073067LL;
  while ((long long)((100 * (int)v_7 + (int)(- p_9)) - ! (14 % ((int)v_11 + 690))) >= (
         ((long long)v_13 % 55127LL + p_15[0][1][0] * (long long)v_17) | (long long)(~ (! p_19[0][3][3])))) {
    v_7 = v_23 * (unsigned long long)(v_21 - 4294922274.);
    v_21 = (double)p_9;
    v = (long long)((int)(- (- p_19[0][4][2])) << (- ((long long)p_9 / (
                                                      p_15[2][1][0] + 38LL)) & 15LL));
    v_17 = (unsigned long)(- -3.32940810634e+38);
  }
  while_0_break: ;
  if (p_4 == (float)v) result = (float)(~ (~ (! p)));
  else {
    result = -8960808960.f;
    result = result;
  }
  return result;
}


