#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 959037601
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, signed char p_5, float p_9, long p_11,
           double p_13)
{
  unsigned char v_7;
  unsigned char v;
  double result;
  v_7 = (unsigned char)p_9;
  v = (unsigned char)85;
  v = (unsigned char)((double)((-35 / ((int)(~ v) + 9)) / ((int)v_7 + 591)) - (
                      (double)(! p_11) * p_13 - (double)v_7));
  v_7 = v;
  v = (unsigned char)(- ((float)(~ ((int)p_5 % ((int)v_7 + 825))) - (
                                                                    p_9 / (
                                                                    (float)p_11 + 99.f)) * 45455.f));
  result = (double)((long long)v - -10040976097LL * (long long)(~ p));
  return result;
}


