#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 691210776
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, signed char p_4[5], unsigned int p_6,
                 long long p_8, double p_10)
{
  short v_19;
  char v_17;
  long v_15;
  long long v_13;
  double v;
  unsigned int result;
  v_19 = (short)31379;
  v_17 = (char)71;
  v_15 = (long)p_4[4];
  v_13 = -507122690LL;
  v = 565.24852993;
  v = (double)((423544016UL + (unsigned long)((37145 / ((int)((unsigned short)v) + 320)) / (
                                              (int)((double)v_19 + p_10) + 558))) * (unsigned long)(
               (int)(- (p_10 * (double)v_15)) - ! (-37 - (int)((signed char)p))));
  v = (double)(- v_13 - (long long)((unsigned long)((long)v % (v_15 + 806L) - 3745L) / (unsigned long)(
                                    (p_6 / (unsigned int)((int)v_17 + 158) - 22399U) + 916U)));
  result = (unsigned int)(- v);
  result = (unsigned int)((double)((unsigned long)(! result - (84U + result)) % (unsigned long)(
                                   31629L * (long)((int)((signed char)p) / (
                                                   (int)p_4[4] + 745)) + 7L)) / (
                          5440860. * ((double)((unsigned int)p * p_6) / (
                                      (double)p_8 / (p_10 + 642.) + 330.)) + 831.));
  return result;
}


