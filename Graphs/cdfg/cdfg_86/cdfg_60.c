#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 959557116
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, long p_4, long long p_9, short p_15,
        unsigned char p_17)
{
  unsigned int v_25;
  short v_23;
  unsigned int v_21;
  double v_19;
  float v_13;
  unsigned int v_11;
  unsigned long v_7;
  int v;
  int result;
  v_25 = 4294926323U;
  v_23 = (short)p_4;
  v_19 = 3.12866732508e+38;
  v_11 = (unsigned int)p_4;
  v_21 = (unsigned int)((unsigned long)(- p_17) % 4294938632UL - (unsigned long)(
                                                                 p_4 - -34403L) % (unsigned long)(
                                                                 ((unsigned int)p + v_25) + 281U));
  if ((double)p_17 + v_19 >= (double)((unsigned int)(! p) + (v_21 % (unsigned int)(
                                                             (int)v_23 + 438)) / (unsigned int)(
                                                            ((int)((unsigned char)2.56296093091e+38f) + (int)p_17) + 173))) {
    v_7 = (unsigned long)v_11;
    v = (int)((long long)v_7 + - (p_9 * (long long)p_4));
    result = (int)(((long)p / (~ p_4 + 174L)) / 167L);
  }
  else {
    result = (int)((629353300LL + 80LL * p_9) << ((long long)((long)p_15 / (
                                                              p_4 + 516L)) / (
                                                  ((long long)-2.60264123423e+38f - p_9) + 487LL) & 63LL));
    v_13 = (float)(short)-17361;
    result = (int)((float)(184 / ((-91 >> (result & 7)) + 620)) - v_13);
  }
  return result;
}


