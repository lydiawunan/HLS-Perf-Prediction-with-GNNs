#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 158481562
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, long long p_4, short p_13, unsigned int p_15[1])
{
  unsigned char v_19;
  long long v_17;
  unsigned long long v_11;
  unsigned long long v_9;
  int v_7;
  unsigned short v;
  float result;
  v_19 = (unsigned char)p_4;
  v_17 = -805LL;
  v_11 = 188583032ULL;
  v = (unsigned short)(((long long)(-254 / ((int)p_13 + 354) - (int)-2.08872128039e+38f) + v_17) / (
                       (- v_17 % (long long)((int)v_19 + 629) - ! p_4) + 525LL));
  v_7 = (int)p_15[0];
  v_9 = (unsigned long long)p_13;
  result = (float)((((unsigned long long)p % 18446744072970514468ULL) / 76705ULL) / (unsigned long long)(
                   (p_4 - (long long)v) / (long long)(v_7 + 923) + 837LL) - ! (
                   - v_9 / ((18446744073709551601ULL | v_11) + 281ULL)));
  return result;
}


