#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 410092168
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned short p_7, unsigned long p_9,
                       unsigned long long p_11, unsigned int p_17)
{
  short v_23;
  unsigned short v_21;
  signed char v_19;
  unsigned long long v_15;
  float v_13;
  unsigned long v_4;
  unsigned long v;
  unsigned long long result;
  v_23 = (short)p_11;
  v_21 = (unsigned short)35171;
  v_19 = (signed char)1;
  v_4 = 3636722569UL;
  v = (unsigned long)p_7;
  v_19 = (signed char)(~ (- ((unsigned long)v_19 + v_4)));
  if ((unsigned long)(~ (~ p_17)) - ((unsigned long)((int)v_19 / ((int)v_21 + 432)) - 
                                     (unsigned long)p_7 % 63763UL) <= (unsigned long)(
      (long)((int)p_7 >> ((int)(- v_23) & 15)) - ((long)(- p) | 227688237L))) {
    v_4 = (unsigned long)((unsigned long long)((unsigned long)((int)p + (int)p_7) / (
                                               ~ p_9 + 390UL)) - (64795ULL - (
                                                                  15852ULL - p_11)));
    v = v_4;
    result = (unsigned long long)v;
  }
  else {
    v_15 = (unsigned long long)(p_9 * 827302840UL);
    v_13 = (float)(~ (! ((unsigned long long)v - v_15)));
    result = (unsigned long long)(- v_13);
  }
  return result;
}


