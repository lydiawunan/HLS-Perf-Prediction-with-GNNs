#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 687910311
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, float p_15, char p_17)
{
  long v_13;
  double v_11;
  short v_9;
  unsigned short v_7;
  short v_5;
  unsigned long v;
  unsigned long long result;
  v_13 = (long)p;
  v_11 = -193.775598368;
  v_9 = (short)3385;
  v_7 = (unsigned short)10872;
  v = 4294958839UL;
  result = (unsigned long long)p_15;
  if (((unsigned long)(v_11 + (double)((unsigned long long)p_17 + p)) & (
       172UL + (unsigned long)p_15)) != (unsigned long)p_17) {
    v_7 = (unsigned short)p_15;
    result = (unsigned long long)(~ (- v)) - (p / (p + 876ULL)) / ((18446744073709486981ULL + p) + 1021ULL);
    v_5 = (short)(((unsigned long long)(- v_11) - p / (unsigned long long)(
                                                  (int)v_9 + 101)) % (
                  ((result >> (p & 63ULL)) + (p + p)) + 905ULL));
  }
  else {
    v_11 = (double)((int)(~ (~ v_7)) + (int)p_17);
    v_7 = (unsigned short)(! ((int)v_9 & 17288));
    v_5 = (short)(- -36996);
  }
  while ((float)(- ((unsigned long long)(- v) + p / (unsigned long long)(
                                                (int)v_5 + 750))) > -79563832.f) {
    result = (int)v_11 & (int)v_9 % (((int)v_7 & (int)((unsigned short)-1.73543719931e+38f)) + 885);
    v_9 = (short)26238;
    v_5 = (short)(! (18446744073709540654ULL * ((unsigned long long)v_13 / (
                                                p + 829ULL))));
    v = (unsigned long)(- (result * p));
  }
  while_0_break: ;
  return result;
}


