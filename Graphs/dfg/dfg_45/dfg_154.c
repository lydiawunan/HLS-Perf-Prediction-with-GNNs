#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 167249550
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, double p_7, double p_9)
{
  signed char v_15;
  signed char v_13;
  double v_11;
  unsigned short v_5;
  unsigned long long v;
  float result;
  v_15 = (signed char)48;
  v_13 = (signed char)p;
  v_11 = p_9;
  result = -4095440896.f;
  v_5 = (unsigned short)((- (- v_11) - (double)((int)v_13 - -40)) - (
                                                                    -27781. - p_9) * (double)(
                                                                    (int)v_15 % (
                                                                    (int)p + 350)));
  v = (unsigned long long)result;
  result = (float)(((((unsigned long long)p - v) + (unsigned long long)(- v_5)) % (unsigned long long)(
                    (unsigned int)(95 & (int)((signed char)p_7)) * 3591864631U + 17U)) * (
                   (unsigned long long)p_9 * 18446744073261766983ULL));
  result = (float)((int)((char)result) + (int)(- p));
  return result;
}


