#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 360737316
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p)
{
  unsigned long v_15;
  unsigned int v_13;
  short v_11;
  float v_9;
  float v_6;
  unsigned int v_4;
  short v;
  short result;
  v_15 = 4006721700UL;
  v_13 = 4294927826U;
  v_11 = (short)-23242;
  v_9 = 6860084736.f;
  v_6 = (float)p;
  v = (short)30082;
  result = (short)-18051;
  v_11 = (short)((unsigned int)((int)(! result) / ((int)(~ p) + 853)) % (
                 ((unsigned int)result ^ v_13) * (unsigned int)(- v_11) + 6U) - (unsigned int)(
                 (float)((unsigned long long)p / (((unsigned long long)v_11 - 18446744073689496668ULL) + 201ULL)) / (
                 (v_6 + (float)v_13) * (float)(~ v_11) + 182.f)));
  v_4 = (unsigned int)((unsigned long)p + ((unsigned long)((unsigned int)(
                                                           (int)((short)v_9) * (int)v_11) - v_13) & 
                                           (unsigned long)-2.20276135945e+38 * ! v_15));
  result = (short)((int)v + (int)((short)((float)(- (179U * v_4)) / (
                                          v_6 + 209.f))));
  return result;
}


