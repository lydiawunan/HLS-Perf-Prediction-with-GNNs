#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 674255530
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, char p_5, float p_7, signed char p_11, double p_21)
{
  double v_19;
  char v_17;
  float v_15;
  long long v_13;
  unsigned int v_9;
  unsigned short v;
  short result;
  v_19 = -8618526637.96;
  v_15 = -1678295168.f;
  v_13 = -33328LL;
  v = (unsigned short)42664;
  v_17 = (char)(! (((unsigned long long)(40942 + (int)p_5) - 360271987ULL * (unsigned long long)v_19) + (unsigned long long)(- p_21)));
  v_19 = (double)p_11;
  v_9 = (unsigned int)((p / (double)(v_15 + 930.f)) / (- p * 1.20798401048e+38 + 799.) + - (
                       (double)(- v) + (double)v_17 / (v_19 + 429.)));
  result = (short)(((int)(! v) + (int)((unsigned short)(p - (double)p_5))) * (
                   (int)((unsigned char)((double)p_7 + p)) / 201) + (int)(
                   (1768608.875f - (float)(75U * v_9)) + (float)(57764LL + (
                                                                 (long long)p_11 - v_13))));
  return result;
}


