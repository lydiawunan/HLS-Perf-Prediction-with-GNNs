#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 620281356
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, signed char p_5[1][4][1], unsigned short p_9,
          unsigned short p_11, unsigned long long p_15)
{
  long v_19;
  unsigned char v_17;
  signed char v_13;
  char v_7;
  signed char v;
  float result;
  v_19 = (long)p_5[0][3][0];
  v_17 = (unsigned char)p_11;
  v_13 = (signed char)p_9;
  v = (signed char)(- ((long)(25512 % (((int)p_5[0][3][0] - (int)p_5[0][2][0]) + 248)) - 
                       (long)((int)v_17 % ((int)((unsigned char)452661638.322) + 487)) % (
                       ~ v_19 + 774L)));
  v = (signed char)((int)((double)((unsigned long long)((int)v & (int)v_13) / (
                                   ~ p_15 + 210ULL)) * -7349571325.55) * (
                    (int)p_9 / ((int)(! p_9) + 976)));
  v_7 = (char)((float)(~ p_9) / (- p + 756.f) - (((p + (float)p_11) + 671706496.f) - 5700.f));
  result = (float)((int)v & ((int)((signed char)(2.76685127321e+38f - p)) - (int)p_5[0][0][0]) / (
                            (int)v_7 + 254));
  return result;
}


