#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402352181
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, signed char p_4, char p_9, double p_11,
                   signed char p_13)
{
  int v_21;
  unsigned int v_19;
  float v_17;
  float v_15;
  long v_7;
  double v;
  unsigned short result;
  v_21 = (int)p_11;
  v_19 = (unsigned int)p;
  v_15 = -2.74594112303e+38f;
  v_7 = 56499L;
  v = 6.39517217217e+37;
  result = (unsigned short)p_4;
  while ((unsigned long)((int)(! (- p_4)) + (int)((signed char)2120953.5f)) > 
         (unsigned long)(- v / ((double)(31035UL + (unsigned long)v_7) + 578.)) - 
         (4294959554UL - (unsigned long)p_9) / ((unsigned long)(p_11 + (double)p_13) + 231UL)) {
    v_17 = (int)((signed char)v_15) * -17;
    v_17 = (float)(((int)((char)p) >> 4) & (v_21 % ((int)v_17 + 430) & (int)(
                                            (float)p_9 + p)));
    result = (unsigned short)v_19;
    v = (double)(((unsigned long long)((unsigned long)v_7 - 6953UL) * 2832ULL) * (unsigned long long)(- (
                 74.f / (v_17 + 4.f))));
  }
  while_0_break: ;
  result = (unsigned short)(-11465LL % ((long long)result * 584582113LL + 1005LL) + (long long)(
                            ((unsigned int)result ^ 3853189616U) - (unsigned int)(
                            573696387 - (int)p)));
  return result;
}


