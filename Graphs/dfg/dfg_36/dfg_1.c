#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 506911001
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, short p_4, int p_7, double p_9[3], long p_11)
{
  unsigned int v_15;
  signed char v_13;
  unsigned short v;
  float result;
  v_15 = (unsigned int)p_7;
  v_13 = (signed char)97;
  v = (unsigned short)((unsigned long)p_7 / ((9230UL & ((unsigned long)v_15 + (unsigned long)p_11)) % (unsigned long)(
                                             (-2862 - (int)(! v_13)) + 972) + 569UL));
  result = (float)(954012644 + (int)(- p_4) * (int)p_4);
  result = (float)((int)(((float)(p_11 * p_11) + -2650609920.f / ((float)v_13 + 932.f)) * (
                         (float)((long long)v_13 - -64113LL) + result * 3.00164572021e+38f)) % (
                   (- ((int)p / ((int)v + 801)) - (int)(~ v)) + 441));
  result = (float)((unsigned long)((((int)((signed char)5.71850217211e+37f) + (int)p) + (
                                    (int)p_4 | (int)((short)result))) % 59967) / (
                   (unsigned long)((int)(! v) ^ p_7) * ((3541208248UL + (unsigned long)v) ^ (unsigned long)p_9[0]) + 42UL));
  return result;
}


