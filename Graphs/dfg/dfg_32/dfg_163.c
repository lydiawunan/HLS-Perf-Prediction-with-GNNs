#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 265284829
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p[2][4], long long p_11, short p_17[2][2][3])
{
  unsigned short v_15;
  float v_13;
  unsigned long v_9;
  long long v_7;
  signed char v_5;
  unsigned long v;
  unsigned short result;
  v_15 = (unsigned short)9380;
  v_13 = (float)p_17[1][1][1];
  v_7 = (long long)p_17[0][1][2];
  v_5 = (signed char)11;
  v = 280927180UL;
  result = (unsigned short)30971;
  v = (unsigned long)(((53618LL / (long long)((int)result + 50) >> ((
                                                                    (unsigned long)p_17[1][0][0] - v) & 63UL)) + (long long)(
                       (unsigned long)v_15 * ((unsigned long)p_17[1][0][2] - v))) / (
                      ~ (- (-146LL + (long long)result)) + 35LL));
  v_9 = (unsigned long)(11694LL - (~ (p_11 % 214LL) ^ (long long)(- v_13 + (float)(
                                                                  -28 % (
                                                                  (int)v_5 + 260)))));
  v_5 = (signed char)((long long)(((unsigned long)(p[1][1] / (p[1][3] + 809)) + 
                                   (unsigned long)p[1][2] * 625252939UL) & (unsigned long)(
                                  (int)result * (int)(- result))) | (
                      ((long long)v_9 + p_11) / (long long)((v_9 & (unsigned long)v_13) + 294UL) - (long long)(
                      (int)v_15 % ((int)(- p_17[1][0][2]) + 753))));
  result = (unsigned short)((- (v % (unsigned long)(p[1][0] + 634)) + (unsigned long)(~ (
                             (int)v_5 / (p[1][3] + 760)))) << (v_7 & 31LL));
  return result;
}


