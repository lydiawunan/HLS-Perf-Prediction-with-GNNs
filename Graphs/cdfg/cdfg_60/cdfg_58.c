#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 743772640
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned short p_5, float p_11, unsigned char p_13,
          float p_17)
{
  unsigned long long v_19;
  unsigned long v_15;
  unsigned long long v_9;
  short v_7;
  unsigned char v;
  float result;
  v_19 = (unsigned long long)p_13;
  v_15 = 26379UL;
  v_7 = (short)18350;
  v = (unsigned char)248;
  result = -6.27351154969e+37f;
  v_9 = (unsigned long long)p_17;
  if ((unsigned long long)(((unsigned long)(~ p) / (v_15 + 559UL)) / (unsigned long)(
                           (int)p_5 + 888)) > ~ ((unsigned long long)(
                                                 (long)v / 1055505211L) / (
                                                 (v_19 - 18446744073709551545ULL) + 226ULL))) {
    result = (float)v_7;
    v = (unsigned char)(65056UL * (unsigned long)(- ((unsigned int)p_5 + 4294955765U)));
    result = (float)(((int)p / ((int)v + 167) - (int)(113.f + result)) - (int)(
                     632.171521457 * (double)((int)p_5 - (int)v)));
  }
  else {
    v_15 = (unsigned long)(! (-33027L * (long)v));
    v_7 = (short)((unsigned long)((float)(-35 / ((int)p_5 + 794)) / (
                                  result + 468.f)) * (v_15 / ((unsigned long)p_17 + 867UL)));
    result = (float)(18446744073709530695ULL * ((unsigned long long)v_7 * v_9 - (unsigned long long)(
                                                p_11 + (float)p_13)));
  }
  return result;
}


