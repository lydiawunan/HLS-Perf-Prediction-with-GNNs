#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 830978069
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, short p_7, unsigned char p_9[3], short p_13, long long p_15)
{
  unsigned short v_21;
  long v_19;
  long v_17;
  char v_11;
  signed char v_5;
  double v;
  int result;
  v_21 = (unsigned short)17442;
  v_19 = (long)p_9[2];
  v_11 = (char)p_15;
  v_17 = v_19 * (long)(- ((int)(! v_21) % 119910));
  v = (double)(((unsigned long long)((unsigned int)(- v_11) / (((unsigned int)p_13 & 629810404U) + 228U)) + (
                ((unsigned long long)p_15 - 18446744073522115141ULL) | (unsigned long long)v_17)) / 12042ULL);
  v_5 = (signed char)96;
  result = (int)((-366582495. - v) * (double)((p - 3298586368.f) + (float)(
                                              (int)v_5 * (int)p_7)) - (double)(- (
                 ((int)p_9[0] / 56206) % 991)));
  return result;
}


