#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 925626023
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, int p_11, long long p_13[5], unsigned long long p_19,
          char p_21)
{
  long v_23;
  double v_17;
  short v_15;
  unsigned long long v_9;
  unsigned short v_7;
  unsigned long long v_5;
  float v;
  float result;
  v_23 = 5093359L;
  v_17 = 242.673155515;
  v_15 = (short)21447;
  v_9 = p_19;
  v_7 = (unsigned short)61813;
  v = p;
  v_5 = ((unsigned long long)v_7 % (v_9 + 613ULL) - (unsigned long long)(
         p_13[2] / -856LL)) * (4294964161ULL * ((unsigned long long)p + 18446744073709542880ULL));
  if (((unsigned long long)(- v_17) - p_19 / (unsigned long long)((int)v_15 + 105)) - (unsigned long long)(
      (int)p_21 << 6U) <= (unsigned long long)((! v_23 / ((long)v + 758L)) * 64649L)) {
    v_7 = (unsigned short)(~ (- v_5 & (unsigned long long)((long long)p_11 - p_13[1])));
    v = (float)((int)v_7 - (int)((unsigned short)((double)(p * p) - (
                                                  1.84947911076e+38 + (double)v_9))));
    result = - (v * (float)((unsigned long long)p - v_5));
  }
  else {
    v_15 = (short)26612;
    result = (float)(~ v_15);
  }
  return result;
}


