#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 31654743
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, char p_11, unsigned int p_17[1], char p_19[2])
{
  long long v_15;
  long long v_13;
  unsigned long long v_9;
  unsigned long long v_7;
  unsigned long long v_5;
  long v;
  double result;
  v_15 = (long long)p_11;
  v_13 = 456928345LL;
  v_5 = (unsigned long long)p_11;
  v_7 = ! (- v_5) ^ (unsigned long long)(((v_13 - v_15) ^ (long long)(
                                          4283377004UL / (unsigned long)(
                                          p_17[0] + 942U))) * (long long)(
                                         (int)p_19[1] % ((int)p_11 / 21796 + 396)));
  v_9 = (unsigned long long)(30 - (int)((signed char)((double)(p * (unsigned long)(
                                                               (int)p_11 * 114)) * -965.237300282)));
  v = (long)v_9;
  result = (double)((unsigned long long)v ^ ((unsigned long long)p / (
                                             v_5 % 47256ULL + 1019ULL) >> (
                                             ((v_7 - (unsigned long long)p) + 18446744073047256725ULL) & 63ULL)));
  return result;
}


