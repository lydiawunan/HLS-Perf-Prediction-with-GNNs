#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 401719557
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned long p_5, int p_17, long p_19,
                 unsigned long long p_21)
{
  signed char v_15;
  unsigned short v_13;
  unsigned short v_11;
  double v_9;
  unsigned long long v_7;
  short v;
  unsigned int result;
  v_15 = (signed char)p_5;
  v_13 = (unsigned short)p_17;
  v_9 = (double)p;
  v_7 = (unsigned long long)(~ (65 * (int)v_15) % ((int)v_9 + 905)) % (
        ((unsigned long long)(- (! p_17)) - ((unsigned long long)p_19 - p_21) % (unsigned long long)(
                                            4294962486UL / (p_5 + 600UL) + 751UL)) + 704ULL);
  v_11 = - (- (- v_13));
  v = (short)v_11;
  result = (unsigned int)((unsigned long)(! ((int)p / ((int)p + 359)) * (int)(
                                          (double)(-2820822272.f * (float)v) / -2.98377907387e+38)) * (
                          (p_5 + 4294967257UL) % ((unsigned long)((double)(- v_7) + v_9) + 242UL)));
  return result;
}


