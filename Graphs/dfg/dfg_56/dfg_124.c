#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 918935119
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, long long p_5, signed char p_9[4][3][5],
        long p_11[2][4], char p_13[1])
{
  unsigned short v_19;
  int v_17;
  double v_15;
  char v_7;
  long v;
  int result;
  v_19 = (unsigned short)p_5;
  v_17 = -45838;
  v_15 = 525.539949841;
  v_7 = (char)-73;
  v = p_11[1][1];
  result = 379727061;
  v_7 = (char)((unsigned long long)((long)(- p_9[2][0][4]) * ((long)result / -489615475L ^ (
                                                              v - (long)v_7))));
  v = (long)(((long long)(((int)p_13[0] * 3) % ((int)(- v_15) + 908)) % -49368LL) / (
             (long long)(- (71 & (int)p_13[0])) / (62524LL % (long long)(
                                                   (v_17 + (int)v_19) + 189) + 579LL) + 497LL));
  result = (int)(~ ((long long)result * ((long long)v * p_5)) - (long long)(
                 (long)v_7 & ((long)p_9[1][0][3] - ~ p_11[0][0])));
  result = (int)(~ (~ (~ ((unsigned long)result / (p + 304UL)))));
  return result;
}


