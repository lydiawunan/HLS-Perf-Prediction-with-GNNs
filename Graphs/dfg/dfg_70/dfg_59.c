#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 464389201
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, unsigned short p_4, char p_9,
         unsigned long long p_13, int p_15)
{
  unsigned short v_19;
  long v_17;
  unsigned long v_11;
  int v_7;
  float v;
  char result;
  v_19 = (unsigned short)p_13;
  v_17 = -905450806L;
  v_11 = (unsigned long)p_4;
  v_7 = (int)p;
  result = (char)(((unsigned long long)(~ p_4) % (((unsigned long long)p + p_13) * (unsigned long long)v_17 + 135ULL)) * (unsigned long long)v_19);
  result = (char)((((p_13 * 18446744073709524697ULL) / (unsigned long long)(
                    -18176 / ((int)result + 621) + 390)) / (unsigned long long)(
                   - (804484234U % (unsigned int)((int)p_9 + 179)) + 245U)) * (
                  5ULL + (unsigned long long)(((int)result >> (v_7 & 7)) + 
                                              p_15 % ((int)p_9 + 87))));
  v = (float)((unsigned long)(~ (- (~ result))) - (unsigned long)-6.11966095091e+35 / (
                                                  (unsigned long)((int)p_9 / 29383) * (
                                                  (unsigned long)p / (
                                                  v_11 + 556UL)) + 315UL));
  result = (char)((int)(! p) % ((int)((double)(! p_4) - (double)v / -6957056112.88) / (
                                ! v_7 + 338) + 177));
  return result;
}


