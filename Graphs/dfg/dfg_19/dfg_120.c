#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 512344841
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, long long p_13)
{
  float v_15;
  int v_11;
  unsigned char v_8;
  long long v_6;
  unsigned short v_4;
  unsigned int v;
  float result;
  v_15 = (float)p_13;
  v_11 = 30877;
  v_6 = p_13;
  v_8 = (unsigned char)(~ v_11);
  v_4 = (unsigned short)((double)((- v_6 ^ (long long)v_8) + (long long)(
                                  - p + 3460874465UL)) / ((((double)v_11 / 384.669839516 + (double)p_13) + (double)(- v_15)) + 740.));
  v = (unsigned int)v_4;
  result = (float)v;
  return result;
}


