#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 804514194
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p[5], short p_17[1])
{
  unsigned long v_15;
  signed char v_13;
  unsigned short v_11;
  unsigned int v_9;
  double v_6;
  char v_4;
  double v;
  long long result;
  v_15 = (unsigned long)p_17[0];
  v_13 = (signed char)p_17[0];
  v_11 = (unsigned short)p_17[0];
  v_9 = 24277U;
  v_6 = (double)p_17[0];
  v_4 = (char)(- ((34423. - v_6) - (double)(506240608.f - p[1])) / ((double)(
                                                                    (
                                                                    (unsigned long long)(
                                                                    v_9 % (unsigned int)(
                                                                    (int)v_11 + 893)) / (
                                                                    (unsigned long long)v_13 / 18446744073709511444ULL + 681ULL)) / (unsigned long long)(
                                                                    (
                                                                    (
                                                                    v_15 + (unsigned long)p_17[0]) - 4294959840UL) + 192UL)) + 301.));
  v = (double)(128 / ((int)v_4 + 307));
  result = (long long)(~ (~ (! ((unsigned long)v | 44689UL))));
  return result;
}


