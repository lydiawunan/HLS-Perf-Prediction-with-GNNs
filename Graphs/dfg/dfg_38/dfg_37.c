#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 115278854
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, unsigned char p_5, unsigned long long p_7,
          unsigned long p_11, unsigned int p_15)
{
  float v_19;
  unsigned long v_17;
  long v_13;
  unsigned char v_9;
  signed char v;
  float result;
  v_17 = p_11;
  v_13 = -925208732L;
  v_9 = (unsigned char)p_7;
  v = (signed char)p_5;
  v_19 = (float)(((unsigned long)(! (19207U - p_15)) ^ v_17) % (unsigned long)(
                 v_13 + 441L));
  v_13 = (long)((unsigned long long)v_9 / (((unsigned long long)(-15 & (int)v) - 
                                            (unsigned long long)p * p_7) + 223ULL) + 
                ((unsigned long long)v_17 * ! p_7) * (unsigned long long)(
                0UL - ((unsigned long)v_19 | 3364347928UL)));
  v = (signed char)(- ((unsigned long long)(p * (int)p_5) | p_7) / (unsigned long long)(
                    (((unsigned long)(! v_9) | p_11 * (unsigned long)v_13) ^ (unsigned long)(~ (
                     (unsigned int)p_5 * p_15))) + 355UL));
  result = (float)(! (! (- (357119535ULL + (unsigned long long)v))));
  return result;
}


