#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 500047045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, long p_7)
{
  unsigned char v_13;
  unsigned long v_11;
  char v_9;
  char v_5;
  short v;
  long long result;
  v_13 = (unsigned char)22;
  v_11 = (unsigned long)p;
  v_9 = (char)-80;
  v_5 = (char)p;
  v = (short)-11803;
  result = (long long)p_7;
  v_11 = (((unsigned long)p_7 + v_11) - ~ v_11) / (unsigned long)(((12514L - (long)v_5) - (
                                                                   p_7 >> (
                                                                   p_7 & 31L))) + 537L) - (unsigned long)(
         (-19965 << (v_11 % (unsigned long)((int)v + 579) & 31UL)) / (
         (int)(-379.385345953 * (double)(54L * p_7)) + 459));
  v_11 = (unsigned long)(((long long)(887733197U & (unsigned int)((float)v_11 / (
                                                                  p + 695.f))) - 
                          result % (long long)((int)v + 588)) % ((long long)(
                                                                 (float)(
                                                                 (p_7 - 27638L) / (
                                                                 p_7 + 867L)) / (
                                                                 - p + 177.f)) + 897LL));
  v = (short)((float)((int)((unsigned char)(- p)) / ((int)v_5 + 763)) * (
              ((float)(p_7 * (long)v_9) + 472500512.f / (p + 238.f)) * (float)(! (
              v_11 + (unsigned long)v_13))));
  result = (long long)(~ (((unsigned long long)(p + -16.f) + 330835507ULL) - (unsigned long long)(
                          result & (long long)(- v))));
  return result;
}


