#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487638839
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, double p_11, double p_21)
{
  unsigned short v_23;
  signed char v_19;
  short v_17;
  long long v_15;
  double v_13;
  unsigned long long v_9;
  unsigned int v_7;
  short v_5;
  double v;
  float result;
  v_23 = (unsigned short)p_11;
  v_19 = (signed char)p;
  v_17 = (short)p;
  v_13 = 9.62568868616e+37;
  v_9 = (unsigned long long)p;
  v_7 = 944165500U;
  v_5 = (short)p_11;
  if ((unsigned long long)v_13 == (unsigned long long)p - ~ v_9 % (unsigned long long)(
                                                          ((int)((unsigned short)p_21) + (int)v_23) + 159)) {
    v_9 = (unsigned long long)(((24 + (int)((signed char)p_11)) + (int)v_5) * (int)(
                               p_11 * v_13 - p_11));
    v_7 = (unsigned int)(v_9 - (unsigned long long)v_5);
    v = (double)v_5;
  }
  else {
    v_5 = (short)(~ (-853772702U));
    v_15 = (long long)((unsigned int)(((int)v_17 + 43) / ((-81 - (int)v_19) + 156)) % (
                       p + 714U));
    v = (double)v_15;
  }
  result = (float)((- p - (unsigned int)((int)((short)v) - 15463)) / (
                   ((unsigned int)(- v_5) | v_7) + 370U));
  return result;
}


