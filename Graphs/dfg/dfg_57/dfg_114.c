#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 551908374
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p)
{
  signed char v_15;
  double v_12;
  short v_10;
  unsigned long v_8;
  signed char v_6;
  float v_4;
  signed char v;
  double result;
  v_15 = (signed char)p;
  v_12 = -6577929206.07;
  v_10 = (short)p;
  v_8 = (unsigned long)p;
  v_6 = (signed char)p;
  v_4 = (float)p;
  v = (signed char)(- (v_12 - -14027.));
  v_6 = (signed char)(~ (49501 + (int)v_6) + (int)(((7279873589.18 / (
                                                     p + 249.)) / ((double)(
                                                                   v_8 ^ (unsigned long)v_15) + 236.)) * (
                                                   1.84467440732e+19 / (
                                                   v_12 + 738.))));
  v_6 = (signed char)((- (v_12 / (p + 314.)) * (double)(- ((int)v_15 % (
                                                           (int)v_6 + 163)))) * (double)(
                      (unsigned long)((12790. * p) * 761949763.) - (unsigned long)(
                                                                   v_12 - p) % (
                                                                   (unsigned long)-4246566812.77 / (
                                                                   v_8 + 558UL) + 556UL)));
  result = (double)((int)v * (int)((signed char)((64.f - - v_4) + (float)(
                                                 (unsigned long)(~ v_6) - (
                                                 v_8 & (unsigned long)v_10)))));
  return result;
}


