#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 324067678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long long p_4, char p_7,
           unsigned short p_9, unsigned short p_13[5][1][3])
{
  signed char v_19;
  unsigned char v_17;
  short v_15;
  long v_11;
  double v;
  double result;
  v_19 = (signed char)p_4;
  v_17 = (unsigned char)p_9;
  v = (double)p_4;
  result = (double)((unsigned long long)p_9 * - ((p_4 | p_4) - (unsigned long long)(
                                                 (int)v_17 + (int)v_19)));
  v_15 = (short)v;
  v_11 = (long)(- (- (-1.58902696235e+38 + (double)p_13[4][0][0]) * (double)(- (
                   (int)p_9 % ((int)v_15 + 666)))));
  result = (double)(((unsigned long long)p + 220230435ULL) - ! p_4) * (
           v * v - result / -9449149120.88) + (((292780910. + v) - (double)(~ p_7)) + (double)(
                                               (long)p_9 / (v_11 + 813L)));
  return result;
}


