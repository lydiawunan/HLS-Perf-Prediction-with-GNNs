#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 428648784
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, unsigned int p_4, double p_9, short p_15,
                       signed char p_17)
{
  unsigned short v_23;
  double v_21;
  unsigned short v_19;
  float v_13;
  unsigned short v_11;
  long v_7;
  float v;
  unsigned long long result;
  v_23 = (unsigned short)31801;
  v_21 = 8313366729.67;
  v_19 = (unsigned short)p_15;
  v_13 = (float)p_9;
  v_11 = (unsigned short)p_17;
  v_7 = -190415761L;
  v = (float)p;
  while ((double)((- p_4 % (unsigned int)((int)v_19 + 599)) % ((unsigned int)(
                                                               (double)(~ p_15) * - v_21) + 702U)) >= 
         ((v_21 + (double)v) - (double)(v_13 + v_13)) / ((double)p_4 + 313.)) {
    v_21 = (int)v_23 / 49;
    v_13 = (float)((double)(v_13 * (float)v_7 - - v) * ((double)(61 % (
                                                                 (int)((char)p_9) + 33)) * (
                                                        -2. - p_9)));
    v_7 = (long)(0UL / ((unsigned long)p_15 % (649156149UL % (unsigned long)(
                                               p_4 + 53U) + 214UL) + 991UL));
    v_19 = (unsigned short)v_7;
  }
  while_0_break: ;
  if (((unsigned long long)(v_13 / -13650.f) - 48453ULL % (unsigned long long)(
                                               (int)p_15 + 178)) % (unsigned long long)(
      (int)p_17 / ((int)(~ v_19) + 196) + 1022) >= 18446744073709551523ULL) {
    v = (float)(! (~ (! v_11)));
    v_7 = (long)v;
    result = (unsigned long long)((double)(p * p - (long long)(p_4 & (unsigned int)v)) + (
                                  92.6933898926 + (double)v_7 / (p_9 + 697.)));
  }
  else result = (unsigned long long)p;
  return result;
}


