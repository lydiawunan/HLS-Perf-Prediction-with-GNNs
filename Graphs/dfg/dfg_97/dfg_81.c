#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 711126575
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, unsigned short p_5, double p_9,
                       signed char p_19)
{
  float v_21;
  char v_17;
  int v_15;
  float v_13;
  signed char v_11;
  double v_7;
  long v;
  unsigned long long result;
  v_21 = 6855620608.f;
  v_17 = (char)p_9;
  v_15 = (int)p_19;
  v_13 = 733.078918457f;
  v_11 = (signed char)-24;
  result = (unsigned long long)p_5;
  v = (long)((long long)(((int)p_5 % -901931586) * (int)(v_13 + (float)result) << (
                         (-26283 % ((int)p_19 + 580)) % ((int)(! p_19) + 70) & 31)) % (
             (long long)v_15 / (((p + (long long)v_21) - (long long)(~ v_11)) + 107LL) + 561LL));
  v_11 = (signed char)(~ ((long long)(v << ((int)v_17 & 31)) - (long long)p_5 / (
                                                               p + 822LL)));
  v_7 = (double)(! (p / (long long)(v_15 + 730)));
  result = (unsigned long long)((double)(~ ((long long)v * p) / (long long)(
                                         (int)p_5 + 536)) / (((double)(
                                                              (int)v_7 % -36219 + (int)p_5) - (
                                                              3654446681. * p_9 - (double)(
                                                              (float)v_11 - v_13))) + 208.));
  return result;
}


