#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 952307301
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned long p_5, unsigned short p_7, unsigned long p_9,
          long long p_15)
{
  long v_25;
  unsigned long long v_23;
  long long v_21;
  unsigned long long v_19;
  long v_17;
  signed char v_13;
  int v_11;
  long v;
  float result;
  v_25 = 976629346L;
  v_23 = (unsigned long long)p_15;
  v_21 = (long long)p_9;
  v_19 = (unsigned long long)p_9;
  v_17 = (long)p_9;
  v_13 = (signed char)122;
  v = 62974L;
  result = -8.2002273876e+37f;
  v_11 = (int)((unsigned long long)((double)(! v_13) * ((double)result + -103589439.87) + (double)(
                                    - p_15 >> ((long)p_7 * v & 63L))) + (
               ((unsigned long long)(- v_17) + (332506643ULL + v_19)) + (
               ((unsigned long long)v_21 + v_23) & (unsigned long long)(! v_25))));
  v = (long)(- (! (v_11 - 644) % (v_11 + 800)));
  result = (float)(v >> (((unsigned long)v | (p_5 ^ (unsigned long)p_7 / (
                                                    p_9 + 652UL))) & 31UL));
  result = (float)((int)p - (int)((char)(-665961408.f / (- result + 938.f) + result)));
  return result;
}


