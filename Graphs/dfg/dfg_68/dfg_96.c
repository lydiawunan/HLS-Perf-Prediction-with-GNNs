#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 306134328
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long long p_5[1])
{
  short v_9;
  float v_7;
  long long v;
  long result;
  v_7 = (float)(signed char)-52;
  v_9 = (short)-198;
  v = -254139800LL;
  result = (long)(((v + (v - (long long)p)) + p_5[0]) + ((long long)v_7 / (
                                                         4LL % (v + 412LL) + 242LL) << (
                                                         (int)v_9 & 63)));
  return result;
}


