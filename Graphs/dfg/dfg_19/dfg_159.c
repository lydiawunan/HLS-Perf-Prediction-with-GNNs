#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 162959797
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, unsigned int p_5, char p_7, long p_11)
{
  signed char v_9;
  long long v;
  float result;
  result = 2.18881294354e+38f;
  v = (long long)(! ((unsigned long)(- p_5 / 990U) * ~ (3401449752UL & (unsigned long)p_11)));
  v_9 = (signed char)-31;
  v = (long long)(- (! p_5) - (unsigned int)p_7) - v % (long long)((3442222975UL << (
                                                                    (
                                                                    (unsigned int)v_9 + 4294950786U) & 31U)) + 607UL);
  result = (float)(((double)(- p - 43446.f) - -722.712919708 / (double)(
                                              - p + 563.f)) - (double)(- (
                   (-49304.f * p) * (result / ((float)v + 479.f)))));
  return result;
}


