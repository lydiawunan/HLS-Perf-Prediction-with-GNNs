#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 380313276
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, double p_4[2][5], long p_6, char p_11[5],
                 unsigned short p_19)
{
  unsigned int v_21;
  char v_17;
  short v_15;
  unsigned long v_13;
  unsigned long v_9;
  char v;
  unsigned int result;
  v_21 = (unsigned int)p_6;
  v_17 = (char)p_4[0][0];
  v_15 = (short)p_11[0];
  v_13 = (unsigned long)p_4[1][2];
  v_9 = (unsigned long)p_19;
  v = p_11[1];
  result = 46542U;
  while ((unsigned long)(- p_4[0][2]) % (((unsigned long)p_11[1] / (v_13 + 573UL)) / (unsigned long)(
                                         (int)v_15 + 475) + 188UL) >= (unsigned long)(
         ~ (result - (unsigned int)p_11[2]) / 8U)) {
    result = (unsigned int)((unsigned long)(! v_21 + (unsigned int)(260371753 - (int)p)) ^ 
                            (unsigned long)(! p_11[4]) / (v_9 * (unsigned long)p_11[1] + 679UL));
    v_13 = (unsigned long)(- ((int)p_19 / ((int)(~ p_11[0]) + 832)));
    v_15 = (short)((long)((float)(! v_17) / (p + 389.f)) / (- (p_6 | -72L) + 533L));
  }
  while_0_break: ;
  if ((unsigned long)(- p_6 - (long)(~ (- v))) >= v_9) result = (unsigned int)p;
  else result = (unsigned int)(- p_4[0][4] / 311.);
  return result;
}


