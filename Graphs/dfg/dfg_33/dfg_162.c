#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 925675647
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned char p_13, double p_17,
              unsigned short p_19)
{
  unsigned long v_15;
  unsigned char v_11;
  float v_9;
  long long v_7;
  unsigned long long v_5;
  unsigned long v;
  long long result;
  v_15 = 15297UL;
  v_7 = -7882LL;
  v_5 = 50981ULL;
  v = 4294923824UL;
  result = (long long)p;
  v_11 = (unsigned char)((long long)(- (((int)p_19 & (int)p_13) * (int)p_13)) | - result);
  v_9 = (float)((double)((v_5 + (unsigned long long)(p - (unsigned long)8489455104.f)) ^ (unsigned long long)(
                         (double)(5403UL - v_15) / (p_17 + 951.))) / (
                p_17 * (double)((unsigned long)p_17 / 635337139UL) + 478.));
  v_5 = (unsigned long long)(((unsigned long)((int)(- p_13) >> ((long long)p_13 / (
                                                                v_7 + 766LL) & 7LL)) % (
                              - (p + v) + 462UL)) % (v_15 + 641UL));
  result = (long long)((unsigned long long)(! (v / (p + 170UL))) * ((
                                                                    18446744073709512807ULL | v_5) | 
                                                                    18446744072808526353ULL % (
                                                                    v_5 + 871ULL)) - (unsigned long long)(
                       v_7 + (long long)((unsigned long)(v_9 + (float)v_11) ^ 
                                         (unsigned long)p_13 % (v_15 + 134UL))));
  return result;
}


