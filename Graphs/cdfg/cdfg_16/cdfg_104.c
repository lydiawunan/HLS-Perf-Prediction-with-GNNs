#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1014798997
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, double p_7, unsigned long p_11, short p_15,
          float p_21)
{
  short v_25;
  unsigned char v_23;
  int v_19;
  unsigned int v_17;
  long v_13;
  unsigned int v_9;
  unsigned short v_5;
  long long v;
  short result;
  v_25 = (short)p_21;
  v_23 = (unsigned char)p_21;
  v_19 = (int)p;
  v_17 = 59141389U;
  v_13 = (long)p_15;
  v_9 = (unsigned int)p_21;
  result = (short)p_21;
  if ((unsigned long)(- ((double)p_21 / (p_7 + 134.)) * (double)((p + (unsigned long)p_7) - (unsigned long)(
                                                                 v_9 ^ (unsigned int)p_7))) != (
      ((unsigned long)p_21 | p) / 690UL & (((unsigned long)v_23 | p_11) - (unsigned long)(
                                           (int)v_25 * (int)result)))) 
    v = (long long)(- -8622716928.f);
  else {
    v_9 = (unsigned int)((unsigned long long)(- (- p_15)) % (((unsigned long long)(
                                                              v_17 / (unsigned int)(
                                                              v_19 + 269)) + 18446744073180418354ULL) + 676ULL));
    v_5 = (unsigned short)((unsigned long)(~ ((int)((unsigned char)p_7) % 44)) - 
                           ((unsigned long)v_9 + p_11) % (unsigned long)(
                           (v_13 + 12L) + 35L));
    v = (long long)v_5;
  }
  result = (short)(- ((long long)(p | 61462UL) % (v / 106LL + 56LL)));
  return result;
}


