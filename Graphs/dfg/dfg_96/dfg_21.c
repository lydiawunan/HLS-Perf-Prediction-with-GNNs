#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1059036615
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, long long p_4, unsigned long p_6, signed char p_11,
          unsigned long p_15)
{
  unsigned char v_13;
  long long v_9;
  short v;
  float result;
  v_13 = (unsigned char)p_11;
  v_9 = (long long)p_6;
  v = (short)-4952;
  result = (float)((long)(- (((float)p_15 - p) + 5737.f)) / 3930706L);
  v = v;
  result = (float)((((double)(result / ((float)p_4 + 808.f)) / -389.304883915) * (double)(
                    (p_6 / ((unsigned long)p + 478UL)) / (unsigned long)(
                    (int)(! v) + 88))) * (double)((! v_9 + (long long)(
                                                   996108783 % ((int)p_11 + 916))) % (
                                                  (v_9 / (long long)(
                                                   (int)v_13 + 583) - (long long)(
                                                   (unsigned long)result - 676044295UL)) + 642LL)));
  result = - (p - (result / 556309696.f) * 602577408.f);
  return result;
}


