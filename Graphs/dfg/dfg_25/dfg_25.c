#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 650453949
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, signed char p_11)
{
  long long v_17;
  int v_15;
  float v_13;
  unsigned int v_9;
  long v_7;
  double v_4;
  unsigned long v;
  long long result;
  v_17 = 1025695186LL;
  v_15 = -26603;
  v_9 = (unsigned int)p;
  v_7 = (long)p_11;
  v_4 = (double)p;
  v = (unsigned long)v_17;
  v_13 = (float)(p * ((p + (unsigned long long)v_7) * (unsigned long long)v_15) + 
                 ~ ((unsigned long long)v_15 * p) * (unsigned long long)(
                 v_9 % 4294967172U + 12374U));
  v_7 = (long)(- (- ((1043287232.f - v_13) - 25578.f)));
  result = (long long)((unsigned long long)(~ (v * (unsigned long)v_4 << (
                                               (p - 64079ULL) & 31ULL))) + (
                       (unsigned long long)(((unsigned long)v_7 | (unsigned long)v_9) + (unsigned long)(! p_11)) - (
                       5450ULL - (unsigned long long)p_11)));
  return result;
}


