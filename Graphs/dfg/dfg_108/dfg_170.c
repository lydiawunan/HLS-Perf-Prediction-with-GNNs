#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 538229077
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p[1], double p_7)
{
  unsigned int v_11;
  double v_9;
  unsigned long long v_5;
  unsigned long v;
  long long result;
  v_11 = 61492U;
  v_9 = (double)p[0];
  v = (unsigned long)p_7;
  v_11 = (unsigned int)(- v_9 - (double)v_11);
  v_5 = (unsigned long long)(! ((unsigned int)(- (~ p[0])) / (((unsigned int)(
                                                               (int)p[0] - (int)((short)v_9)) - v_11) + 576U)));
  result = (long long)(! ((unsigned long long)((double)v + p_7 / (p_7 + 379.)) % (
                          - (37508ULL & v_5) + 917ULL)));
  result = (long long)(! (v * 234394008UL)) | (long long)((float)(- p[0]) * (
                                                          -1.54216662525e+38f / (
                                                          (float)v_5 + 558.f))) % (
                                              ((long long)((unsigned long)p[0] / 4294935697UL) ^ (
                                               result + 97LL)) + 162LL);
  return result;
}


