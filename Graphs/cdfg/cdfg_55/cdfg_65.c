#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 454342122
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, unsigned int p_7, double p_9,
         unsigned long long p_11, double p_17[2])
{
  float v_15;
  char v_13;
  float v_5;
  signed char v;
  long result;
  v_15 = -2.08816006611e+38f;
  v_13 = (char)p_11;
  v = (signed char)p_11;
  result = 27305L;
  if ((unsigned int)(((float)(p - (unsigned long)p_9) - (v_15 - (float)result)) * (float)(
                     3963211202UL ^ 0)) < p_7) {
    v = (signed char)(44288. / (4649. * p_9 + 101.));
    v = (signed char)(-127574195LL - (long long)(! v));
    v_5 = (float)((4294932102UL * p - (unsigned long)(4034867895U & (unsigned int)v)) / (unsigned long)(
                  p_7 + 266U));
  }
  else {
    v_5 = (float)((double)(- (v_15 - 124.f)) / (p_17[1] + 518.));
    result = (long)(- p_11 / (unsigned long long)(((unsigned int)v_13 + p_7) * (unsigned int)v + 815U));
    result = (long)(- (30630ULL % (unsigned long long)(result + 244L)) / (
                    (unsigned long long)((unsigned long)p_7 + (unsigned long)result) % (
                    ((unsigned long long)2.12321780546e+38f - 56267ULL) + 1008ULL) + 756ULL));
  }
  result = (long)((unsigned long)(~ result % (long)((int)v % ((int)((signed char)-8076805532.01) + 606) + 386)) * (
                  p / ((9943UL + (unsigned long)v_5) + 407UL)));
  return result;
}


