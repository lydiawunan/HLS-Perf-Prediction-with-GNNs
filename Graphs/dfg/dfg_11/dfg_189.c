#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 349556247
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, signed char p_7, unsigned int p_9,
          unsigned short p_11, double p_13)
{
  float v_23;
  long long v_21;
  short v_19;
  long v_17;
  signed char v_15;
  unsigned short v_4;
  double v;
  float result;
  v_23 = (float)p;
  v_21 = 63964LL;
  v_19 = (short)-8123;
  v_17 = (long)p_13;
  v_15 = (signed char)(! ((long)3461190400.f / (v_17 + 616L)) / ((long)(
                                                                 (float)(
                                                                 ((unsigned long long)v_19 & 1055ULL) % (unsigned long long)(
                                                                 - v_21 + 963LL)) + v_23) + 909L));
  v = (double)(- ((unsigned long)(p_9 | (unsigned int)((int)p_11 + 56)) - (unsigned long)(
                  58199L / ((long)(p_13 - (double)v_15) + 427L))));
  v_4 = (unsigned short)16071;
  result = (float)(((unsigned long long)(- (v - (double)v_4)) % (p + 951ULL)) % (unsigned long long)(
                   ! (- (-25428LL + (long long)p_7)) + 554LL));
  return result;
}


