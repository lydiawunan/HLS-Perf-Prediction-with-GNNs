#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238494374
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, unsigned int p_4, float p_7,
                  double p_9, unsigned long long p_13[1][3])
{
  float v_15;
  long long v_11;
  short v;
  unsigned long result;
  v_15 = -1.90907348816e+38f;
  v_11 = (long long)(- (p * 44621ULL) & (unsigned long long)(1072898122U * (
                                                             ! p_4 + (unsigned int)(
                                                             42 % ((int)((signed char)v_15) + 463)))));
  v = (short)((60169ULL - ((unsigned long long)(p_9 / ((double)v_11 + 94.)) + p_13[0][2])) * 2054271249ULL);
  result = (unsigned long)(13ULL - ((p >> (p_4 % (unsigned int)((int)v + 130) & 63U)) | (unsigned long long)(- p_7)));
  result = (unsigned long)(- ((float)(! (! result)) - 4.76937565938e+37f));
  return result;
}


