#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071087467
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, float p_4, short p_11,
                 unsigned long long p_19, char p_21)
{
  unsigned char v_27;
  unsigned int v_25;
  unsigned char v_23;
  int v_17;
  long v_15;
  double v_13;
  double v_9;
  short v_7;
  long v;
  unsigned int result;
  v_27 = (unsigned char)201;
  v_25 = 20201U;
  v_17 = -743680365;
  v_15 = 986949973L;
  v_9 = -1.01141869646e+38;
  if (v_25 >= (unsigned int)((int)p_11 % ((int)(- (~ p_21)) + 60))) {
    v_13 = (double)((unsigned long long)(v_25 % (unsigned int)((int)p_21 + 328)) * (
                    p_19 * (unsigned long long)p_21) - 17ULL);
    v_23 = (unsigned char)((float)(31056UL - (7624UL - (unsigned long)p_21)) + (
                           8611.f + - p_4));
    v_9 = (double)(- (v_15 & (long)(~ v_23)));
  }
  else {
    v_15 = -545563939L;
    v_13 = (double)(- p_19 % (unsigned long long)((int)v_27 + 238));
    v_17 = (int)((18226ULL << ((int)(- p_11) & 63)) % ((50142ULL + p) * 26897ULL + 272ULL));
  }
  if ((unsigned long long)(- v_13) * (18446744073709508769ULL / ((p & 18446744073709547344ULL) + 515ULL)) >= 
      (unsigned long long)(! v_15) % ((unsigned long long)v_17 * p_19 + 4ULL) + (unsigned long long)(- (
      16598UL << ((int)p_21 & 31)))) result = (unsigned int)p;
  else {
    v_7 = (short)(- (- v_9 - (double)((int)p_11 * (int)p_11)));
    v = (long)v_9;
    result = (unsigned int)((0.f / (p_4 / ((float)v + 401.f) + 322.f)) / (
                            (float)(- (13562 - (int)v_7)) + 923.f));
  }
  return result;
}


