#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 984166872
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, long p_7, int p_15, float p_19, long p_21[3][4])
{
  long v_23;
  long v_17;
  long v_13;
  unsigned char v_11;
  unsigned char v_9;
  unsigned long v_4;
  long long v;
  long result;
  v_23 = (long)p_19;
  v_13 = p_7;
  v_11 = (unsigned char)36;
  v_9 = (unsigned char)p;
  v_17 = (long)(- ((p * p_19) * (p_19 - -490.f) + (p_19 + (float)v_23 / (
                                                          p_19 + 817.f))));
  v_4 = (unsigned long)((float)(((long)p - p_7) % (long)(((int)v_9 << (
                                                          (int)v_11 & 7)) + 950) >> (
                                (unsigned long)(~ v_13) / (((unsigned long)p_15 - 34805UL) + 87UL) & 31UL)) - 
                        (float)(v_17 * (long)p_19 + 23L % (p_21[1][3] + 681L)) / (
                        (p_19 - (float)(86 + p_15)) + 922.f));
  v = (long long)(! (! ((v_4 + 4294967277UL) * 4072694026UL)));
  result = (long)v;
  return result;
}


