#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 188524999
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, double p_7, unsigned short p_9[5][1][5], short p_13,
          long long p_15)
{
  unsigned long long v_19;
  float v_17;
  char v_11;
  unsigned int v_4;
  short v;
  float result;
  v_19 = 27823ULL;
  v_17 = (float)p_9[2][0][1];
  v_4 = (unsigned int)p_13;
  result = -4694841856.f;
  v_11 = (char)(((long long)((float)((long long)v_4 / (p_15 + 338LL)) / (
                             (p + result) + 551.f)) - (p_15 / ((long long)v_17 + 597LL) >> (
                                                       v_19 & 63ULL))) * 21930LL);
  v_4 = (unsigned int)(- -7.02371211641e+37);
  v = (short)(- (- p / ((float)((unsigned int)p_9[1][0][4] * 215002722U) + 186.f)) + (float)(
              (long long)(~ (64221UL * (unsigned long)v_11)) | (long long)(
                                                               (int)p_13 | (int)((short)-6614607872.f)) * (
                                                               43387LL * p_15)));
  result = (float)((unsigned int)(~ (-106 - (int)v)) / (~ v_4 + 266U) + (unsigned int)(- (- (
                   (double)p / (p_7 + 790.)))));
  return result;
}


