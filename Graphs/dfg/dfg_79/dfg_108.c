#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 172507659
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned int p_5, short p_9, unsigned int p_15,
         double p_21)
{
  long v_19;
  float v_17;
  double v_13;
  float v_11;
  unsigned char v_7;
  unsigned long long v;
  long result;
  v_17 = (float)p;
  v_13 = 3.31393108071e+38;
  v_7 = (unsigned char)p_21;
  result = -399652917L;
  v_19 = (long)p_21;
  v = (unsigned long long)v_19;
  v_11 = (float)((unsigned long)(112. - 3687548125.74 / (v_13 + 349.)) / (
                 ((unsigned long)(6 / ((int)((signed char)v_13) + 905)) + (
                  (unsigned long)result + (unsigned long)p_15)) + 1021UL) + (unsigned long)(! (
                 -28772 % ((int)((short)((float)p / (v_17 + 623.f))) + 895))));
  result = (long)(((unsigned long long)(! p) * ((v - v) / (unsigned long long)(
                                                ! p_5 + 826U))) % (unsigned long long)(
                  ! ((int)v_7 / ((int)p_9 + 687) + ((int)p_9 << ((int)((short)v_11) & 15))) + 272));
  return result;
}


