#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1032161349
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, unsigned int p_9, unsigned long p_13[4][3],
          unsigned int p_17)
{
  signed char v_19;
  long v_15;
  signed char v_11;
  short v_7;
  unsigned long long v_5;
  int v;
  float result;
  v_19 = (signed char)p_13[2][2];
  v_15 = -1062522264L;
  v_11 = (signed char)-107;
  v_7 = (short)-17837;
  v_5 = 18446744072860072761ULL;
  v = (int)p_17;
  if ((long)v_7 / (v_15 + 657L) <= (long)((int)((float)(4294955019U / (
                                                        p_17 + 647U)) / (
                                                (-29603.f - p) + 758.f)) - 
                                          (int)(~ v_19) / (((int)v_11 + 64) + 305))) {
    v_7 = (short)(! v);
    v_5 = (unsigned long long)(! p_13[3][0]);
    v = (int)(~ ((unsigned long long)v_11 / 35367ULL - (unsigned long long)(
                 p - 26661334.f)));
  }
  else {
    v_15 = (long)((unsigned long long)(- (4294967276UL - p_13[3][2])) * (
                  ((unsigned long long)p_13[1][2] + v_5) / ((unsigned long long)1.29495280194e+38 + 954ULL)));
    v_5 = (((unsigned long long)p_9 + v_5) * (unsigned long long)(p + (float)v_15)) * (unsigned long long)(- (
          p_9 * 16092U));
    v = 0;
  }
  if ((unsigned long long)(! (-618794337LL + (long long)p_9) - (long long)(
                           ((unsigned int)v & p_9) + 84U)) >= (unsigned long long)(
                                                              -111.f - 
                                                              p / ((float)p_9 + 524.f)) + 392520185ULL) 
    result = (float)(~ (unsigned short)44002);
  else {
    v = (int)(((unsigned long long)p >> ((v_5 + (unsigned long long)v_7) & 63ULL)) - (unsigned long long)p);
    v = ! (~ (- v));
    result = (float)v;
  }
  return result;
}


