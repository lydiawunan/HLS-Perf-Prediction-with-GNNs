#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 81771151
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, char p_11[1][5])
{
  unsigned long v_13;
  int v_8;
  unsigned short v_6;
  float v_4;
  signed char v;
  long result;
  v_13 = 4294932725UL;
  v_8 = 308911491;
  v = (signed char)p;
  v_6 = (unsigned short)(((unsigned long)p_11[0][2] + (v_13 - 20599UL) * (unsigned long)(- v)) / 4294951820UL);
  v_4 = (float)p;
  result = (long)((unsigned int)((int)((unsigned short)((float)v + v_4)) >> (
                                 (int)v_6 & 15)) % (33U / ((203604365U - (unsigned int)(
                                                            323 % (v_8 + 900))) + 527U) + 677U));
  return result;
}


