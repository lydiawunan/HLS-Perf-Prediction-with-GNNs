#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 669225630
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, double p_4, short p_15)
{
  unsigned char v_17;
  long v_13;
  long v_11;
  float v_9;
  int v_7;
  unsigned char v;
  float result;
  v_17 = (unsigned char)84;
  v_13 = (long)p_15;
  v_7 = -21788;
  result = -104.1668396f;
  v_11 = (((long)p / (v_13 + 630L) + (long)(20 * (int)p)) - (long)(167 | (
                                                                   (int)p_15 - 30))) * (long)(! (
         (int)p_15 * (int)v_17 - 1060450987 * (int)p_15));
  v_9 = (float)v_11;
  v = (unsigned char)(result + - ((float)(! v_7) * - v_9));
  result = (float)(18446744073709547232ULL / (unsigned long long)((int)(! p) + 204) - (unsigned long long)p_4) * (
           - (result / 3681.f) / ((float)(- v) + 796.f));
  return result;
}


