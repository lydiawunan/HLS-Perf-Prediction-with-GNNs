#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 922474674
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p)
{
  unsigned long v_14;
  float v_12;
  unsigned long v_10;
  unsigned int v_8;
  unsigned short v_6;
  float v_4;
  long long v;
  double result;
  v_14 = (unsigned long)p;
  v_12 = 3.24127873885e+38f;
  v_8 = 5866499U;
  v_6 = (unsigned short)29935;
  v = (long long)p;
  v_10 = v_14;
  v = v;
  v_4 = (float)((double)v_12 / ((-8439130396.36 + (double)((float)((unsigned long)p / (unsigned long)(
                                                                   v_8 + 914U)) + (
                                                           4089869824.f - (float)p))) + 377.));
  result = (double)((float)(((long long)2.13389406023e+37f * v - (long long)(
                             v_4 / ((float)v_6 + 380.f))) / (long long)(
                            ((unsigned long)v_8 ^ v_10) + 975UL)) * - (- (
                    v_12 * (float)v_14)));
  return result;
}


