#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 357716957
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p[4], long p_5, double p_13, signed char p_15[5][2],
        double p_17[3][1][4])
{
  long v_19;
  unsigned short v_11;
  int v_9;
  unsigned short v_7;
  short v;
  int result;
  v_19 = (long)p_13;
  v_11 = (unsigned short)p_5;
  v_7 = (unsigned short)38746;
  v_9 = (int)v_19;
  v = (short)(((int)v_7 & (int)((unsigned short)((double)(! v_9) + ((double)v_11 - p_13)))) / (
              (int)((double)(-28900 % ((int)p_15[3][1] + 745)) * p_17[0][0][2] - (double)(! (
                    (long long)v_11 / 1039265779LL))) + 321));
  result = (int)(- p[2]);
  result = (int)((unsigned long)((int)v - (result ^ (int)p[0])) / (~ (
                                                                   (unsigned long)p_5 / 4294944090UL) + 175UL) ^ 4294967295UL);
  return result;
}


