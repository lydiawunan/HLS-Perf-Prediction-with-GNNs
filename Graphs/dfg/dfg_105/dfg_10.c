#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 539534461
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, double p_4, signed char p_6, unsigned int p_8,
          unsigned char p_10[3])
{
  float v_15;
  short v_13;
  long long v;
  float result;
  v_15 = -471.007629395f;
  v_13 = (short)-23506;
  v_13 = (short)(v_15 / ((float)(~ v_13) + 469.f) - (float)(! p_10[1]));
  v = 511252401LL;
  result = (float)((int)p - ! (~ ((int)v_13 / ((int)((short)-792709126.577) + 155))));
  result = (float)((long long)(((unsigned long)(-6591L | (long)p) - (
                                4294908265UL ^ (unsigned long)p_4)) | (unsigned long)(
                               -10024L % (long)((int)p_6 + 891) - -2L)) - 
                   (long long)((414522554UL % (unsigned long)(p_8 + 412U)) * (unsigned long)(
                               (int)((unsigned char)result) - (int)p_10[0])) / (
                   v % (- v + 754LL) + 222LL));
  return result;
}


