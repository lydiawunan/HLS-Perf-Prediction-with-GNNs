#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 379836106
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, unsigned char p_7[1][3][5],
                       unsigned long long p_9, unsigned char p_13,
                       long p_23[5])
{
  unsigned long long v_21;
  short v_19;
  signed char v_17;
  double v_15;
  unsigned int v_11;
  double v_5;
  unsigned long v;
  unsigned long long result;
  v_19 = (short)p_23[1];
  v_17 = (signed char)126;
  v_15 = (double)p_13;
  v_11 = 990743450U;
  v_5 = (double)p;
  v = 4294932376UL;
  result = p_9;
  v_21 = p_9;
  while ((((unsigned long)p | v) / ((unsigned long)(- v_5) + 823UL) & (unsigned long)(
          ((int)p_7[0][0][2] << (p_9 & 7ULL)) & (int)((double)v + -603.141235621))) >= (unsigned long)(
         ((v_11 >> ((int)p_13 & 31)) + (unsigned int)(v_5 - v_15)) % (unsigned int)(
         (int)v_17 + 773))) {
    v_15 = (double)((v_21 * (unsigned long long)p_23[0] - p_9 / ((unsigned long long)p + 795ULL)) * (unsigned long long)v_15);
    v_5 = (double)(((int)p_13 % ((int)p_7[0][0][1] + 783)) % ((int)(- v_19) + 1010) << 20UL);
    v = (unsigned long)v_19 & 1153UL;
  }
  while_0_break: ;
  return result;
}


