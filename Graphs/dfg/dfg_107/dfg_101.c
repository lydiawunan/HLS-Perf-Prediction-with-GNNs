#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 86278736
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, double p_5[3], long long p_11[5][3])
{
  unsigned int v_19;
  unsigned short v_17;
  unsigned int v_15;
  signed char v_13;
  long long v_9;
  float v_7;
  short v;
  signed char result;
  v_19 = (unsigned int)p_5[0];
  v_17 = (unsigned short)18308;
  v_15 = (unsigned int)p;
  v_7 = -924.826049805f;
  v = (short)p;
  v_13 = (signed char)(((long long)v_15 % (-48615LL / (long long)((int)v_17 + 1009) + 962LL)) / (long long)(
                       (unsigned long)(- v_7 - 104958288.f) / (! (44279UL & (unsigned long)v_19) + 394UL) + 49UL));
  v_9 = (long long)(! ((int)v * 63305) - (int)(- ((double)p_11[2][0] / (
                                                  p_5[1] + 907.) - (double)v_13)));
  v = (short)((long long)(- (- (p_5[2] / (double)(v_7 + 981.f)))) << (
              v_9 & 63LL));
  result = (signed char)(p * ! (! ((int)v | (int)((short)-7598000285.93))));
  return result;
}


