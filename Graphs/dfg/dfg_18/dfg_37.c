#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 300309386
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned int p_5, char p_7, long p_9[3][4][3], short p_11)
{
  long long v_25;
  signed char v_23;
  double v_21;
  char v_19;
  unsigned int v_17;
  signed char v_15;
  short v_13;
  unsigned int v;
  float result;
  v_25 = (long long)p_7;
  v_23 = (signed char)89;
  v_21 = (double)p_9[0][2][0];
  v_17 = 45401336U;
  v_15 = (signed char)-95;
  v_19 = (char)(~ (((long long)((int)p_7 * -121) / (v_25 + 924LL)) % (long long)(
                   (int)p_11 + 53)));
  v_13 = (short)((- ((double)v_19 + v_21) * (double)(-57136 - (int)p_11 / (
                                                              (int)p_7 + 127))) * (double)v_23);
  v = v_17;
  result = (float)(((unsigned long)((unsigned int)p / (v + 577U) - p_5) * (unsigned long)(
                    (long)(- p_7) / ((-37L + p_9[1][1][0]) + 280L))) / (unsigned long)(
                   (int)(! p_11) / (~ ((int)v_13 % ((int)v_15 + 674)) + 739) + 776));
  return result;
}


