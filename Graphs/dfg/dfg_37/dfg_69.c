#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 425772352
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p[3][3][3], int p_5, signed char p_7,
          unsigned char p_11, char p_13)
{
  char v_19;
  unsigned char v_17;
  unsigned int v_15;
  unsigned long v_9;
  char v;
  float result;
  v_19 = (char)-90;
  v_15 = (unsigned int)p_5;
  result = 926.266540527f;
  v_9 = (unsigned long)((unsigned int)(- (- ((int)v_19 / ((int)p_7 + 910)))) % (
                        (131U * (unsigned int)((int)p_11 * (int)p_13) + (unsigned int)(
                         3.52383220179e+29 / (double)(result * 4253270272.f + 196.f))) + 358U));
  v_17 = (unsigned char)(- (~ p[0][0][1]) * (unsigned long)p_5 & (unsigned long)(
                         ! (- v_15) + 3379299439U));
  v = (char)((unsigned long)p_5 % (((unsigned long)(- p_7) + v_9 / (unsigned long)(
                                                             (int)p_11 + 899)) + 377UL) + (unsigned long)(
             (int)((result + (float)p_13) - (float)(44775UL ^ (unsigned long)v_15)) * (
             ~ p_5 / ((int)(! v_17) + 811))));
  result = (float)((int)((char)((double)(- p[0][2][1] - 18533UL) + 99587.5595361)) ^ (int)v);
  return result;
}


