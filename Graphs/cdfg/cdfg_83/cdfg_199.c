#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 694390124
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, long p_4, unsigned int p_6, double p_8,
           unsigned long p_10)
{
  char v_21;
  unsigned long long v_19;
  unsigned int v_17;
  unsigned char v_15;
  unsigned int v_13;
  unsigned char v;
  double result;
  v_21 = (char)127;
  v_19 = 18446744073534859279ULL;
  v_17 = 14465U;
  v_15 = (unsigned char)236;
  v = (unsigned char)p;
  if ((unsigned long long)(- (15 - (int)((signed char)p_8))) / ((unsigned long long)(- v_17) / 841208373ULL + 596ULL) == (unsigned long long)p_6) {
    v_13 = (unsigned int)(v_19 / (((unsigned long long)(- v_15) + v_19) + 894ULL));
    result = (double)(- (- ((unsigned long)p_4 / 321592864UL)));
    v_15 = (unsigned char)(- result - 215.614242554);
  }
  else {
    v_13 = (unsigned int)((int)v - (int)(~ (~ v_21)));
    result = (double)v_17;
    v_17 = - p_6 << 1U;
  }
  while (113. == - (p_8 + (double)p_10) - - (-2.74634025511e+38 * (double)v)) {
    v_13 = (unsigned long long)v_15 % ((unsigned long long)v_13 * 28223ULL + 464ULL);
    result = (double)((4294967292UL / (unsigned long)(p_6 + 876U) - (unsigned long)(
                       v_17 - 64088U)) * (unsigned long)p_6);
    v_15 = (unsigned char)197;
    v = (unsigned char)(3466047609. - - result * 251.);
  }
  while_0_break: ;
  return result;
}


