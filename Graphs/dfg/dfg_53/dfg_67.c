#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 320490571
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, long long p_7, char p_11, short p_13)
{
  short v_19;
  unsigned int v_17;
  short v_15;
  int v_9;
  int v_5;
  unsigned short v;
  unsigned char result;
  v_19 = (short)21973;
  v_17 = (unsigned int)p_13;
  v_5 = (int)p_11;
  result = (unsigned char)p;
  v = (unsigned short)((long long)result ^ ~ ((p_7 / -66LL) / (long long)(
                                              (int)v_19 + 830)));
  v_15 = (short)(((double)((long long)v_17 - (121LL - p_7)) - -5904856401.25) - (double)(
                 p + 322701184.f));
  v_9 = (int)((unsigned long long)(((int)p_11 & (int)v) * (int)(p - -456766080.f) ^ ! (
                                   (int)p_13 - (int)v_15)) + 18446744073454639163ULL);
  result = (unsigned char)((((3807150080.f - p) + (p + (float)v)) + (float)(
                            ((unsigned long long)v_5 & 18446744072892308506ULL) + 18446744073709551583ULL)) * (float)(~ (
                           (p_7 - (long long)p) << (v_9 & 63))));
  return result;
}


