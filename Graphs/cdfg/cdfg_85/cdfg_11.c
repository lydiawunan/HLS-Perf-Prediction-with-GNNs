#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 11005910
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, long p_9[2][1][2], double p_13)
{
  unsigned long long v_15;
  signed char v_11;
  unsigned int v_7;
  unsigned char v_5;
  signed char v;
  int result;
  v_15 = 788608740ULL;
  v_11 = (signed char)-64;
  v_7 = 514746198U;
  v_5 = (unsigned char)171;
  v = (signed char)(((unsigned long)((unsigned int)v_5 / (v_7 + 21U)) & (unsigned long)p_9[0][0][1]) / (
                    (unsigned long)(((double)v_11 - p_13) + (double)v_15) + 441UL));
  result = (int)(- ((unsigned long long)p * (18997ULL / (unsigned long long)(
                                             (int)v + 260))));
  return result;
}


