#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160023777
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, unsigned long p_11)
{
  float v_9;
  long long v_7;
  float v_5;
  unsigned char v;
  unsigned long long result;
  v_7 = -935262908LL;
  v = (unsigned char)56;
  result = 18446744072836153475ULL;
  v_5 = (float)(signed char)45;
  v_5 = (float)(- (- (~ ((unsigned long)v_5 / (p_11 + 371UL)))));
  v_9 = (float)-13281;
  result = (result + (unsigned long long)((float)(p & (long)v) - 763164224.f / (
                                                                 v_5 + 334.f))) * (unsigned long long)(
           (float)(-50328L / (p + 146L)) + (float)((unsigned long long)v_7 - 507456936ULL) * (
                                           v_5 - v_9));
  return result;
}


