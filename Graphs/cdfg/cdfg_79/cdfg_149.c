#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 687622166
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, signed char p_7, unsigned long long p_11,
              double p_15[3][4])
{
  unsigned short v_19;
  unsigned char v_17;
  double v_13;
  int v_9;
  unsigned short v_5;
  float v;
  long long result;
  v_19 = (unsigned short)p_11;
  v_17 = (unsigned char)p_11;
  v_13 = 1.21789918774e+38;
  v_9 = 212823009;
  if ((unsigned long long)((int)v_17 * ((int)v_19 * (int)((unsigned short)p_15[2][3])) >> (
                           ~ (- p_11) & 31ULL)) < (unsigned long long)-4632168509.12 / 18446744073709545200ULL) 
    v = (float)(- (85UL / (p * p + 1010UL)));
  else {
    result = (long long)(((unsigned long long)(- p_7) + (unsigned long long)v_9 / (
                                                        p_11 + 546ULL)) - (unsigned long long)(- (
                         v_13 * p_15[1][1])));
    v_5 = (unsigned short)p;
    v = (float)(~ ((long long)((int)v_5 * (int)((unsigned short)-2693672192.f)) + result));
  }
  result = (long long)(-8994.f / (- v + 567.f));
  return result;
}


