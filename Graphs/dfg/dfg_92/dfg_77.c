#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 579540212
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, long long p_13[2], double p_15)
{
  unsigned int v_17;
  unsigned short v_11;
  unsigned char v_9;
  long long v_7;
  unsigned char v_5;
  unsigned char v;
  int result;
  v_17 = (unsigned int)p_15;
  v_9 = (unsigned char)110;
  v_7 = 854365060LL;
  v_5 = (unsigned char)212;
  v = (unsigned char)p_13[0];
  result = (int)((float)(- ((int)((unsigned char)-28158.7890625f) % (
                            (int)v + 505))) - (-3.27458833731e+38f / (
                                               (float)((long long)p_15 + p_13[0]) + 518.f) + (float)(
                                               v_17 * (unsigned int)(
                                               -80 >> ((int)v_9 & 7)))));
  v_11 = (unsigned short)result;
  v = (unsigned char)((long long)(~ ((int)p * (int)(~ v_5))) - (- v_7 * (long long)(
                                                                (unsigned long)v_9 - 43230UL)) / (
                                                               ((long long)v_11 % (
                                                                p_13[0] + 810LL) - (long long)(
                                                                (double)v + p_15)) + 298LL));
  result = (int)(! (~ (-58769L - (long)(129 + (int)v))));
  return result;
}


