#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 716458741
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, int p_5, unsigned char p_9, char p_17, unsigned char p_19)
{
  unsigned int v_21;
  unsigned short v_15;
  short v_13;
  float v_11;
  unsigned int v_7;
  long long v;
  double result;
  v_21 = 4294962375U;
  v_13 = (short)-494;
  if ((unsigned int)(32314 & (int)(~ (! p_19))) == - (~ v_21 / ((unsigned int)-2.8013638214e+38f + 394U))) {
    v_11 = (float)((long)(97 | ((int)v_13 - p_5)) + 31253L);
    v_7 = (unsigned int)(~ ((int)p_9 * (int)((unsigned char)((double)v_11 / -261.532842015))));
    v = (long long)(! ((unsigned int)p_5 * ~ v_7));
  }
  else {
    v = (long long)-798.485717773f;
    v_15 = (unsigned short)(~ ((long long)(! p_17) * (v - 130048639LL)));
    v = (long long)(~ (- v_15));
  }
  result = (double)(~ (10806LL - v) - (long long)(1.84467440737e+19f + p));
  return result;
}


