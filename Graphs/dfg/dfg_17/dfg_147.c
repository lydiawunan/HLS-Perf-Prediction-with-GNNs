#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1017371837
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p[5][3], short p_5, unsigned char p_9, signed char p_13,
         unsigned short p_17)
{
  long long v_21;
  unsigned char v_19;
  long long v_15;
  unsigned char v_11;
  unsigned char v_7;
  unsigned long long v;
  long result;
  v_21 = (long long)p[3][1];
  v_19 = (unsigned char)1;
  v_11 = (unsigned char)p_13;
  v = 18446744073709499966ULL;
  result = (long)p_9;
  v_15 = (long long)((((unsigned long long)((int)p_17 % 2) - ! v) ^ (unsigned long long)(
                      ((int)v_19 | 5101) * ((int)p_9 + (int)p_17))) - (unsigned long long)(
                     (double)((unsigned long long)(-415.815551758f / (
                                                   (float)v_19 + 529.f)) + (
                              v >> (v_21 & 63LL))) - -539.610075779));
  v_7 = (unsigned char)((long long)(- (! ((long)v_11 + result))) / ((long long)p_13 % (
                                                                    (
                                                                    (long long)(
                                                                    (unsigned int)p_13 + 43706U) | 
                                                                    v_15 / -429736932LL) + 627LL) + 135LL));
  v = ((unsigned long long)((-334809268. / (p[2][2] + 276.)) * (p[0][2] - p[4][0])) - 
       (unsigned long long)p_5 / ((unsigned long long)v_7 % 759109950ULL + 306ULL)) % (unsigned long long)(
      ((int)p_9 - (int)(~ p_9)) + 31);
  result = (long)v;
  return result;
}


