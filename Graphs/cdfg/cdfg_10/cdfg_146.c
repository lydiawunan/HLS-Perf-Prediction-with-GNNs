#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 348064231
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned short p_5[5], double p_7, unsigned int p_9[3][5],
        signed char p_15[2][5][2])
{
  signed char v_19;
  double v_17;
  unsigned short v_13;
  long v_11;
  short v;
  int result;
  v_19 = (signed char)88;
  v_17 = (double)p_15[0][0][0];
  v_13 = p_5[1];
  v_11 = (long)p_9[2][0];
  v = (short)13324;
  while ((float)(((unsigned long long)v_17 + 18446744073429168276ULL) % 107ULL - (unsigned long long)(
                 (43945L - (long)v) + v_11)) > - (p + p)) {
    v = (int)v_19 % -82;
    v_13 = (unsigned short)(- p_9[1][4] / ((unsigned int)((double)((int)((unsigned short)p_7) / (
                                                                   (int)p_5[2] + 78)) - 
                                                          p_7 / -360085210.) + 80U));
    v_17 = (double)((int)((unsigned short)(4294926592.f / (p * 99.f + 176.f))) + (int)(- p_5[0]));
    v_11 = (long)((float)p_9[0][2] * - ((float)p_5[2] + p));
  }
  while_0_break: ;
  if (- p_7 - (double)(((unsigned long)p_9[0][4] & (unsigned long)v_11) % (unsigned long)(
                       (int)(- v_13) + 934)) != (double)p_15[1][4][0]) 
    result = 29409;
  else {
    v = (short)(- p_5[3]);
    result = (int)((- p - (float)(! v)) - (float)v);
  }
  return result;
}


