#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 919470017
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, float p_11, long p_13, long p_17, char p_21)
{
  short v_23;
  double v_19;
  unsigned long long v_15;
  signed char v_9;
  signed char v_6;
  unsigned long long v_4;
  long long v;
  long result;
  v_23 = (short)-22017;
  v_15 = (unsigned long long)p;
  v_9 = (signed char)p_11;
  v_6 = (signed char)p_11;
  v_19 = (double)61044L;
  v = (long long)((unsigned long long)p_13 / (~ ((unsigned long long)v_9 / (
                                                 v_15 + 466ULL)) + 889ULL) + (unsigned long long)(
                  (p_17 * p_17 ^ (long)(-3.08506539643e+38 - v_19)) * (
                  (long)((int)p_21 % ((int)v_23 + 789)) - p_17)));
  v_4 = (unsigned long long)((int)v_9 % (! (62 * (int)((char)p_11) + 1080476032) + 442));
  result = (long)((unsigned long long)v ^ (~ v_4 % (unsigned long long)(
                                           (int)(~ v_6) + 220) + (unsigned long long)(~ (- p))));
  return result;
}


