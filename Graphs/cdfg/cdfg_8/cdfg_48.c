#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 117758871
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p[2][5][2], char p_4, unsigned char p_6, long long p_8,
          unsigned char p_19[2])
{
  long v_17;
  unsigned long long v_15;
  long v_13;
  long v_11;
  unsigned int v;
  float result;
  v_17 = -535833323L;
  v_15 = 753684609ULL;
  v_13 = -33177L;
  result = -853474176.f;
  if ((long long)((long)((int)p_6 + (int)p[0][4][1]) + v_13) / ((-159573810048536LL & (long long)(
                                                                 (int)p_4 * (int)p_4)) + 1005LL) == (long long)(~ p_6)) {
    v = (unsigned int)(! (v_15 % (unsigned long long)(v_17 + 365L)) * (unsigned long long)(
                       result * (float)(! p_19[1])));
    v = (unsigned int)(~ ((unsigned long)(- v_13) + (unsigned long)v));
    v_11 = (long)(~ (char)-1);
  }
  else {
    v = 4294959550U;
    v_11 = (long)462.710968018f;
  }
  if ((unsigned long)v <= (unsigned long)v_11) result = (float)(~ ((int)p[0][3][1] * (int)p_4 + (int)(~ p_6)));
  else result = (float)(- ((long long)-1.97416075469e+38f | - p_8));
  return result;
}


