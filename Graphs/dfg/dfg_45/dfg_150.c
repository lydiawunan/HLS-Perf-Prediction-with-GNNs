#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 623885525
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, double p_4, unsigned int p_7, unsigned int p_15[1],
        unsigned long p_17)
{
  float v_21;
  unsigned long long v_19;
  signed char v_13;
  short v_11;
  float v_9;
  float v;
  int result;
  v_21 = (float)p_4;
  v_19 = (unsigned long long)p_4;
  v_11 = (short)p_4;
  v_9 = - (- v_21);
  v_13 = (signed char)(18446744073709551488ULL % (! ((unsigned long long)v_11 * v_19) / (unsigned long long)(
                                                  ((long long)(4294939054UL * (unsigned long)p) + -50306LL) + 510LL) + 733ULL));
  v = (float)((unsigned long)((80576032.f * ((float)p_7 * v_9)) / ((float)(
                                                                   (int)(! v_11) | 22) + 876.f)) + (
              (unsigned long)v_13 + (unsigned long)(p_15[0] >> (p_15[0] & 31U)) * ! p_17));
  result = (int)(~ (p / ((long)(- (p_4 / (double)(v + 448.f))) + 54L)));
  return result;
}


