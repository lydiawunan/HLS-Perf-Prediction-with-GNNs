#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 559685590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, double p_11, unsigned long long p_15[1],
                char p_21, long p_25)
{
  short v_23;
  unsigned char v_19;
  signed char v_17;
  unsigned int v_13;
  unsigned short v_9;
  long v_7;
  float v_5;
  unsigned long v;
  signed char result;
  v_23 = (short)p_11;
  v_19 = (unsigned char)p_15[0];
  v_17 = (signed char)p_25;
  v_13 = 3895187467U;
  v_9 = (unsigned short)p_21;
  v_7 = p_25;
  v_5 = (float)p_21;
  v = (unsigned long)p_15[0];
  if (494843348LL == (22LL * p ^ (long long)((int)p_21 / ((int)v_9 + 613))) % 533LL) {
    result = (signed char)p_11;
    v_13 = (unsigned int)(- ((unsigned long)(- v_13) - 4235725691UL));
    v = (unsigned long)((p_15[0] + (unsigned long long)(- v_17)) / (unsigned long long)(
                        (577905519UL - (unsigned long)(v_13 * (unsigned int)v_19)) + 319UL));
  }
  else {
    v_5 = (float)(- ((unsigned long long)v_23 / (p_15[0] + 820ULL)) * (
                  (unsigned long long)p_25 * p_15[0] + (unsigned long long)(- p)));
    result = (signed char)p_21;
    v_7 = (long)(2574 + (int)-3.32877401152e+38);
  }
  while (p * (long long)v == (long long)v) {
    v_5 = (float)v_7 - v_5 / 11811.f;
    v_9 = (unsigned short)(p_11 + (double)(! (-596092790LL % (long long)(
                                              v_13 + 408U))));
    v_7 = -103L;
    v = (unsigned long)((long long)((int)((unsigned short)9904236544.f) + (int)v_9) / (
                        9822LL % (p + 920LL) + 464LL) + p / ((long long)(
                                                             p_11 / (
                                                             (double)p + 926.)) + 316LL));
  }
  while_0_break: ;
  return result;
}


