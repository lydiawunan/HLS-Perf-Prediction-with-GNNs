#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 763534735
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p)
{
  unsigned short v_12;
  float v_10;
  char v_8;
  double v_6;
  double v_4;
  long long v;
  signed char result;
  v_12 = (unsigned short)p;
  v_10 = (float)p;
  v_6 = -4299947205.22;
  v_4 = 5212233324.11;
  result = (signed char)110;
  v = (long long)(- (- (- (- v_4))));
  v_4 = (double)(p + (unsigned int)result);
  v_8 = (char)(- ((v_4 * v_4 + 57584.) / (double)(1.86657950756e+37f / (
                                                  (float)v_12 + 914.f) + 217.f)));
  result = (signed char)((double)((unsigned long long)(4982LL - (v - 1001182179LL)) % (
                                  (2115ULL << ((unsigned long long)(- v_4) & 63ULL)) + 691ULL)) - (
                         - (v_6 - 59911.) - (double)((long long)v_8 / (
                                                     (v + (long long)v_10) + 131LL))));
  return result;
}


