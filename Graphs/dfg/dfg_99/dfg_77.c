#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 193792432
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, signed char p_15, signed char p_17,
         unsigned long long p_19[3][2])
{
  int v_13;
  signed char v_11;
  unsigned short v_9;
  short v_7;
  float v_4;
  long v;
  long result;
  v_13 = (int)p;
  v_11 = p_15;
  v_7 = (short)p_19[2][1];
  v_4 = 6457104384.f;
  v = (long)p_19[0][1];
  v_9 = (unsigned short)(- (233 * (int)v_4));
  v_4 = (float)((unsigned long long)((long long)((220 / ((int)v_9 + 62)) % (
                                                 (int)v_11 + 402)) & -57151LL) * (
                (unsigned long long)((int)v_7 % (v_13 + 368) + ((int)p_15 + (int)p_17)) + p_19[2][1]));
  result = (long)(! ((int)(- v_7) + (int)p));
  result = (-8608L + v) >> ((long)(((double)(v_4 * 1.84467440737e+19f) - (
                                    5219179781.47 - (double)result)) + (double)(- (
                                   4294964897UL + (unsigned long)p))) & 31L);
  return result;
}


