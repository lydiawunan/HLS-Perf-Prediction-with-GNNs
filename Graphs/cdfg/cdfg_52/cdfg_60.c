#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 379182437
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned int p_15, short p_19[3][1][3])
{
  double v_17;
  unsigned char v_13;
  unsigned long v_11;
  unsigned long long v_9;
  unsigned long long v_6;
  long long v_4;
  unsigned short v;
  short result;
  v_17 = (double)p_19[2][0][1];
  v_13 = (unsigned char)p_15;
  v_11 = (unsigned long)p_19[2][0][1];
  v_9 = (unsigned long long)p;
  v_6 = (unsigned long long)p_15;
  v_4 = (long long)p_19[1][0][0];
  v = (unsigned short)54891;
  result = (short)p_15;
  if (35389ULL == (unsigned long long)(- p_15) % (65225ULL * v_6 + 293ULL) >> (
                  (! v_4 + -11615LL) & 63LL)) {
    v_9 = (unsigned long long)p_19[2][0][1];
    v_11 = (unsigned long)(- p);
    v_13 = (unsigned char)51;
  }
  else {
    v_11 = (unsigned long)((unsigned long long)((unsigned int)p_19[0][0][2] / (
                                                p_15 + 173U) ^ 33U) + (
                           60856ULL % (v_9 + 36ULL) - (unsigned long long)(
                           v_11 | (unsigned long)-7478422528.f)));
    result = (short)v;
    v_6 = (unsigned long long)((int)((short)(- ((float)p_15 * p))) ^ (int)p_19[2][0][1]);
  }
  while ((float)((unsigned long long)((long long)v - v_4) & ! v_6) / (
         (p + (float)(- v_9)) + 710.f) != (float)(- (- (v_11 / 49UL)))) {
    v_4 = (long long)((double)((int)v_13 + (int)((unsigned char)3677433600.f)) * (
                      v_17 / 19048.) + (double)((int)(~ v) >> (p_15 & 15U)));
    v_13 = (unsigned char)p_15;
    v = (unsigned short)(((float)v_13 * p) / ((float)(! v_4) + 222.f) - (float)v_4);
  }
  while_0_break: ;
  return result;
}


