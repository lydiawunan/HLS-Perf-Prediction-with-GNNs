#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 396419295
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, double p_13, long p_15)
{
  short v_17;
  signed char v_11;
  unsigned int v_8;
  long long v_6;
  int v_4;
  long v;
  long long result;
  v_17 = (short)-180;
  v_4 = (int)p_15;
  v = p_15;
  v_11 = (signed char)(~ (p - (unsigned long long)((int)((short)p_13) * 11159)) / (unsigned long long)(
                       ~ (4001246180UL - (unsigned long)(p_15 ^ (long)v_17)) + 637UL));
  v_8 = (unsigned int)(! (! (26 * (56 - (int)((char)2.94891257647e+38)))));
  v_6 = (long long)(~ 13326UL);
  result = (long long)((! (4294948225UL / (unsigned long)(v + 68L)) / (unsigned long)(
                        ! (1941L % (long)(v_4 + 620)) + 513L)) % ((unsigned long)(
                                                                  (double)(
                                                                  623225643LL - (
                                                                  v_6 - 149LL)) * (
                                                                  (double)(
                                                                  (unsigned long long)v_8 * p) - (
                                                                  (double)v_11 - p_13))) + 71UL));
  return result;
}


