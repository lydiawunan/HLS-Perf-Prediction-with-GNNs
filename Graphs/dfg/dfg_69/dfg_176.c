#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 904331641
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p[1][1], unsigned int p_9, unsigned long long p_13[5],
        unsigned char p_17)
{
  unsigned char v_21;
  signed char v_19;
  double v_15;
  long long v_11;
  unsigned short v_7;
  unsigned char v_5;
  double v;
  int result;
  v_21 = p_17;
  v_19 = (signed char)-84;
  v_15 = -1.61824124387e+38;
  v_11 = (long long)p_17;
  v_7 = (unsigned short)50440;
  v = (double)p_17;
  v_5 = (unsigned char)(((int)(~ (! p_17)) * - ((int)v_21 * 16653)) % (
                        (int)p_17 + 148));
  v_15 = (double)((~ p_13[1] | (unsigned long long)((unsigned long)p_9 % (unsigned long)(
                                                    (long)v_15 % -32377L + 616L))) & - (
                  (unsigned long long)(! v_5) + ((unsigned long long)v_19 + p_13[3])));
  result = (int)(((unsigned long long)(((double)p[0][0] / (v + 785.)) / (double)(
                                       - p[0][0] + 314.f)) + ((59315ULL - (unsigned long long)v_5) + (unsigned long long)v_7)) & (
                 ((18446744073442731833ULL - (unsigned long long)p_9) - (unsigned long long)(
                  v_11 >> (p_13[1] & 63ULL))) - (unsigned long long)(
                 (float)((int)((unsigned char)v_15) & (int)p_17) - p[0][0] / -5.51237102919e+37f)));
  result = result;
  return result;
}


