#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 444586433
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, long long p_5[5][4], unsigned int p_9,
           unsigned short p_11, signed char p_13)
{
  unsigned int v_21;
  short v_19;
  unsigned long v_17;
  int v_15;
  signed char v_7;
  char v;
  double result;
  v_21 = 3715727811U;
  v_19 = (short)p_5[4][1];
  v_17 = (unsigned long)p_9;
  v = (char)0;
  v_15 = (int)((unsigned long long)((-65034LL | (long long)v_17) + (long long)(
                                    v_17 / (unsigned long)(p + 888L))) / (
               - (18446744073709535902ULL / (unsigned long long)((int)v_19 + 871)) + 949ULL) & (unsigned long long)(
               v_21 + (unsigned int)(((int)p_11 - (int)p_13) + -110)));
  v_7 = (signed char)((unsigned long long)(369111570LL / (~ (54982LL | p_5[3][3]) + 629LL)) + 
                      (((unsigned long long)v_15 ^ 18446744073709540888ULL) + (unsigned long long)(
                       (int)p_13 % -67)) % (unsigned long long)(((long long)(
                                                                 (int)p_11 - -223390952) - (
                                                                 (long long)v - p_5[4][1])) + 132LL));
  v = (char)((((unsigned long long)((unsigned long)v_7 ^ 4294936646UL) / (
               (204336882ULL + (unsigned long long)p_9) + 169ULL)) / (unsigned long long)(
              (int)p_11 + 439)) % (unsigned long long)(- (((int)p_13 / 11991) * 14) + 838));
  result = (double)(224LL + (long long)p / (324573161LL % ((long long)v * p_5[3][2] + 298LL) + 106LL));
  return result;
}


