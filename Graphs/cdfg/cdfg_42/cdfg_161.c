#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 951480431
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned short p_4, short p_7, float p_9, long p_13)
{
  long v_21;
  unsigned long long v_19;
  unsigned char v_17;
  unsigned long v_15;
  unsigned short v_11;
  float v;
  float result;
  v_21 = (long)p_7;
  v_19 = (unsigned long long)p_4;
  v_17 = (unsigned char)p_13;
  v_11 = (unsigned short)18926;
  v = (float)p_13;
  result = (float)p_7;
  while ((int)v_17 >= - (-9 % ((int)((char)(result / ((float)v_19 + 614.f))) + 577))) {
    v_11 = v_21 & -385977062L;
    v = - (- p_9);
    v_21 = ~ p_13;
    v_19 = (unsigned long long)(~ v_17);
  }
  while_0_break: ;
  while (((int)(- p) & (int)((char)((float)p_4 * v))) / (43823 % (28928 % (
                                                                  (int)p_4 + 196) + 195) + 769) == ~ (
         (int)(- p_7) * ((int)p_9 - -54616))) {
    v_15 = (int)v_11 * 83;
    result = (float)(18446744073506888653ULL ^ (unsigned long long)((
                                                                    v_15 << 24L) * (unsigned long)(
                                                                    p_9 / (
                                                                    (float)p_4 + 790.f))));
    v_11 = (unsigned short)result;
    v = - ((p_9 - (float)p_13) + 0.f);
  }
  while_0_break_0: ;
  return result;
}


