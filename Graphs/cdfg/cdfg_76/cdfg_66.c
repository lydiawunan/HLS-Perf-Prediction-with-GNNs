#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 387973029
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned int p_4, char p_7, long long p_9,
                  double p_13)
{
  unsigned char v_17;
  unsigned short v_15;
  short v_11;
  int v;
  unsigned char result;
  v_17 = (unsigned char)95;
  if (- p_9 / (long long)(~ ((unsigned int)v_17 / (p_4 + 414U)) + 450U) <= (long long)(! (
      635104401U * (unsigned int)(- p_13)))) {
    v_11 = (short)((int)p / 623896 - (int)(- p_7));
    v_11 = v_11;
    v = (int)(- (p_4 % (unsigned int)((int)v_11 + 209) >> ((unsigned int)(
                                                           p_13 * p) & 31U)));
  }
  else {
    v_15 = (unsigned short)(- (signed char)-73);
    v = (int)((unsigned long)((int)v_15 | 100) ^ (22530UL - (unsigned long)(- p_7)));
  }
  if ((unsigned long long)v + ((unsigned long long)p_7 - 650491106ULL) % (
                              (unsigned long long)-3.25407308565e+38f + 441ULL) <= (unsigned long long)(~ (
      (p_9 & 37089LL) + -9729LL))) result = (unsigned char)p;
  else result = (unsigned char)p_4;
  return result;
}


