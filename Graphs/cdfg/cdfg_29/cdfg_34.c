#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1009157479
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, int p_9, unsigned long long p_11,
                       unsigned long p_13)
{
  int v_17;
  int v_15;
  float v_7;
  int v_5;
  unsigned short v;
  unsigned long long result;
  v_17 = p_9;
  v_7 = 797.749267578f;
  v_15 = 8945;
  if ((unsigned long long)(11658U * (unsigned int)(- v_15)) != (unsigned long long)v_17) 
    result = (unsigned long long)(- (- ((int)p + 69)));
  else {
    v_5 = (int)((double)(~ p_11 / (unsigned long long)(p_13 * (unsigned long)-877.66229248f + 1007UL)) / (
                (double)(v_7 - 18.f) * -1011468288.88 + 524.));
    v = (unsigned short)p_9;
    result = (unsigned long long)(((long long)((int)v - -34204) * (-19701LL + (long long)v_5)) * (long long)(
                                  27052UL << ((int)((unsigned short)v_7) / 21007 & 31)));
  }
  return result;
}


