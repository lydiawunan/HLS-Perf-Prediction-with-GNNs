#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 657401580
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long p_7, double p_9, signed char p_13,
           unsigned int p_15)
{
  float v_11;
  double v_4;
  unsigned int v;
  double result;
  result = p_9;
  v_11 = (float)(~ (unsigned char)158);
  v = (unsigned int)(- (-696995962. - (result - result) * (double)(781U - p_15)));
  v_4 = - ((double)p * ((double)p_7 - p_9)) / ((double)(~ ((int)((signed char)(
                                                           p_9 / (double)(
                                                           v_11 + 762.f))) / (
                                                           (int)(~ p_13) + 264))) + 991.);
  result = (double)v + (double)(! v) * - (v_4 * -450.309801235);
  return result;
}


