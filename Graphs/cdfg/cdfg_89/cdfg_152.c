#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 546347780
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p[5][4], signed char p_11, unsigned long p_15,
          char p_17, float p_23)
{
  unsigned long v_21;
  char v_19;
  unsigned int v_13;
  float v_9;
  double v_7;
  short v_5;
  signed char v;
  short result;
  v_21 = 3936338086UL;
  v_19 = (char)p_23;
  v_9 = (float)p_17;
  v_5 = (short)-16562;
  v = (signed char)-108;
  result = (short)-27949;
  if ((int)((short)p_23) >= (int)(~ v_5)) {
    v_7 = (double)p_11;
    v_9 = (float)(unsigned short)45318;
    result = (short)((unsigned long long)(((int)v_5 + -606650789) / (
                                          (int)v_7 + 682)) / (((unsigned long long)(
                                                               (unsigned int)v_9 % 3744769333U) & 3345784177365970005ULL) + 574ULL));
  }
  else {
    v_13 = (unsigned int)(((unsigned long)((int)p_17 & (int)v_19) + p_15 % (
                                                                    v_21 + 770UL)) % (unsigned long)(
                          (int)result + 192));
    v = (signed char)((unsigned long)(502642.f - - v_9) / (- p_15 + 6UL));
    result = (short)(696695836U / (- v_13 + 771U));
  }
  result = (short)(! ((int)v + (int)result) * - ((int)p[0][0] + (int)result));
  return result;
}


