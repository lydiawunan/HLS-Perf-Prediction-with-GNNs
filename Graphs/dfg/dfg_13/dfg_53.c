#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 287349792
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, int p_7, signed char p_13,
                 unsigned long p_15, signed char p_17[1][5][4])
{
  float v_11;
  unsigned int v_9;
  unsigned int v_4;
  unsigned long v;
  unsigned int result;
  v_11 = (float)p_7;
  v_9 = 12370U;
  v_4 = p;
  result = (unsigned int)p_13;
  result = (unsigned int)(((p_15 + (unsigned long)result) / (unsigned long)(
                           ! p + 826U)) / (unsigned long)((int)(! (- p_17[0][0][0])) + 240) + (unsigned long)v_11);
  result = (unsigned int)(18446744073709551615ULL % ((unsigned long long)(
                                                     result * ((unsigned int)p_13 + v_4)) % (
                                                     ((unsigned long long)p_7 + 18446744073709518170ULL) / 11655ULL + 901ULL) + 672ULL));
  v = (unsigned long)(~ ((unsigned int)((int)((short)v_11) - -9687) * (
                         p % 32U)) ^ (unsigned int)(- p_13));
  result = (unsigned int)((- (v / (unsigned long)(v_4 + 699U)) | (unsigned long)(
                           p * (unsigned int)(-1084 & p_7))) / (unsigned long)(
                          - (v_9 / ((209U - result) + 486U)) + 424U));
  return result;
}


