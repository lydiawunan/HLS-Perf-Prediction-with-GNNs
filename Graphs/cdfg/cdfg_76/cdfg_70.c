#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 423432698
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, unsigned long p_4, unsigned long p_6, double p_9,
        unsigned short p_13)
{
  unsigned int v_19;
  unsigned int v_17;
  char v_15;
  unsigned int v_11;
  signed char v;
  int result;
  v_19 = (unsigned int)p_9;
  v_17 = (unsigned int)p_4;
  v_15 = (char)p_13;
  v_11 = 3826572566U;
  v = (signed char)8;
  result = -756760466;
  while ((4294967171UL / ((p_4 + 22561UL) + 214UL)) / ((unsigned long)(
                                                       (double)(p_6 + (unsigned long)v) - (
                                                       p_9 + (double)v_11)) + 122UL) == (unsigned long)(
         (int)(~ p_13) / ((int)v_15 / -11 + 680))) {
    result = (float)v_17 / 8501793280.f;
    v_17 = 10592U;
    v = (signed char)(- (v_19 * 83U + (unsigned int)(110 % (result + 782))));
    v_11 = (unsigned int)p_13;
  }
  while_0_break: ;
  result = (int)(p * (long long)(((double)result - -3.29678148083e+38) + -189089019.));
  return result;
}


