#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 890050100
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, short p_4, int p_6, unsigned int p_8,
                 long p_13[3][2][2])
{
  unsigned long v_15;
  signed char v_11;
  unsigned long v;
  unsigned int result;
  v_15 = 4294946066UL;
  v = ~ ((unsigned long)(3745372564U % ((p_8 + (unsigned int)p_4) + 27U)) * (
         - v_15 + (unsigned long)(391.685293864 + (double)p_4)));
  v_11 = (signed char)(((int)(~ (! p_4)) / ((int)1.95306096398e+38f * (
                                            208 + p_6) + 534)) * p_6);
  result = (unsigned int)((unsigned long long)(4294961893UL - - p % (unsigned long)(
                                                              (int)p_4 % (
                                                              p_6 + 69) + 400)) | (
                          (unsigned long long)((unsigned long)p_8 * v) % (
                          456231054ULL * (unsigned long long)v_11 + 457ULL) & (unsigned long long)(- (
                          p_13[0][0][0] - (long)p_4))));
  return result;
}


