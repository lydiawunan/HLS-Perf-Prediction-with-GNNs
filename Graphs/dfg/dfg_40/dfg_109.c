#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 310503445
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, unsigned char p_7[3][1][1], signed char p_11,
                 unsigned long long p_13, long long p_15[4][1][3])
{
  int v_19;
  unsigned long v_17;
  unsigned long v_9;
  float v_5;
  short v;
  unsigned int result;
  v_19 = (int)p_15[2][0][2];
  v_17 = (unsigned long)p_11;
  v_5 = (float)(((136 / ((int)p_7[1][0][0] + 874)) / (v_19 + 575) & (int)(! p_11)) << 30);
  v_9 = (unsigned long)(~ ((unsigned long long)(~ (16123UL - v_17)) & (
                           18563655ULL + (p_13 ^ 18446744073709495583ULL))));
  v = (short)p_15[1][0][0];
  result = (unsigned int)((((float)((long long)v * p) + v_5) / ((float)(
                                                                (unsigned long)(
                                                                (int)p_7[1][0][0] * (int)p_7[1][0][0]) - (
                                                                v_9 + (unsigned long)p_11)) + 421.f)) * (float)p_13);
  return result;
}


