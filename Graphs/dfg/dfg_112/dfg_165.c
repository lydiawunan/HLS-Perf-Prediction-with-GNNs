#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 822498182
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned long p_9[5][1][2],
                       unsigned char p_11)
{
  float v_17;
  float v_15;
  unsigned long v_13;
  unsigned char v_7;
  unsigned long v_5;
  unsigned long v;
  unsigned long long result;
  v_17 = 1704516608.f;
  v_15 = 124.439735413f;
  v = (unsigned long)p_11;
  v_13 = (unsigned long)0.0717381387949f;
  v_7 = (unsigned char)(- ((float)((v - 210280865UL) % (! v_13 + 653UL)) * (
                           (float)((int)p_11 + (int)((unsigned char)v_15)) + (
                           v_17 - 446922912.f))));
  v_5 = (unsigned long)p;
  result = (unsigned long long)(((v + (unsigned long)p) - 120UL % (v_5 + 57UL)) / (
                                ((unsigned long)v_7 * p_9[1][0][1] ^ (unsigned long)(! p_11)) + 545UL) - ! (~ (~ v_13)));
  return result;
}


